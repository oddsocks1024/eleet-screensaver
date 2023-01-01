#include "eleet.h"

/* Load the TT font */
TTF_Font *loadFont(void)
{
    TTF_Font *font;
    char fontname[FILENAME_MAX];
    FILE *fp;

    /* Try the local font directory first */
    snprintf(fontname, FILENAME_MAX, "fonts/eleet.ttf");

    /* Works around TTF_OpenFont() bug on solaris */
    if ((fp = fopen(fontname, "r"))) {
        fclose(fp);
    } else {
        snprintf(fontname, FILENAME_MAX, "%s/eleet.ttf", FONTDIR);
    }

    if(!(font = TTF_OpenFont(fontname, FONT_SIZE))) {
        fprintf(stderr, "TTF_OpenFont: %s\n", TTF_GetError());
        _exit_(4);
    }
    return font;
}

/* Render the text to an SDL surface */
SDL_Surface *renderFont(char *txt, TTF_Font *font)
{
    SDL_Surface *srcSurface;
    SDL_Surface *dstSurface;

    if(!(srcSurface = TTF_RenderText_Solid(font, txt, (SDL_Color) {genRandInt(100,255),genRandInt(100,255),genRandInt(100,255)}))) {
        fprintf(stderr, "TTF_RenderText_Solid: %s\n", TTF_GetError());
        _exit_(5);
    }

    dstSurface = SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_SRCCOLORKEY|SDL_SRCALPHA,
                                      srcSurface->w, srcSurface->h, 32,
                                      0x000000ff, 0x0000ff00, 0x00ff0000, 0xff000000); /* AGBR -> RGBA */
    SDL_BlitSurface(srcSurface, NULL, dstSurface, NULL); /* Copy into compatible surface */
    SDL_FreeSurface(srcSurface); /* Free the original surface */
    return (dstSurface);
}

/* Render the text to a Power of 2 SDL surface */
SDL_Surface *renderFontPOT(char *txt, TTF_Font *font)
{
    SDL_Surface *srcSurface;
    SDL_Surface *dstSurface;
    int w; int h;

    if(!(srcSurface = TTF_RenderText_Solid(font, txt, (SDL_Color) {genRandInt(100,255),genRandInt(100,255),genRandInt(100,255)}))) {
        fprintf(stderr, "TTF_RenderText_Solid: %s\n", TTF_GetError());
        _exit_(5);
    }

    if (srcSurface->w < 256) {
        w = 256;
    } else if (srcSurface->w < 512) {
        w = 512;
    } else if (srcSurface->w < 1024) {
        w = 1024;
    } else if (srcSurface->w < 2048) {
        w = 2048;
    } else {
        w = srcSurface->w;
    }

    if (srcSurface->h < 64) {
        h = 64;
    } else if (srcSurface->h < 128) {
        h = 128;
    } else if (srcSurface->h < 256) {
        h = 256;
    } else if (srcSurface->h < 512) {
        h = 512;
    } else {
        h = srcSurface->h;
    }

    dstSurface = SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_SRCCOLORKEY|SDL_SRCALPHA,
                                      w, h, 32,
                                      0x000000ff, 0x0000ff00, 0x00ff0000, 0xff000000); /* AGBR -> RGBA */
    SDL_BlitSurface(srcSurface, NULL, dstSurface, NULL); /* Copy into compatible surface */
    SDL_FreeSurface(srcSurface); /* Free the original surface */
    return (dstSurface);
}
