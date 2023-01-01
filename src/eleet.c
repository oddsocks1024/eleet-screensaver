/*
Copyright (C) 2009-2012 Ian Chapman

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#include "eleet.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

TTF_Font *mainfont = NULL;
GLfloat zoom = ZOOMSTART;
GLuint textures[N_TEXTURES];
unsigned int thrustnum = THRUSTNUM;
unsigned int starnum = STARNUM;
unsigned int modelswitch = MODEL_SWITCH;
struct ship models[N_MODELS];
struct starfield stars[MAXSTARNUM];
struct thrustfield thrust[MAXTHRUSTNUM];
void (*obj_model)(void);

static GLubyte starcols[12][3] =
{
    {160,0,0}, {200,200,0}, {0,100,100},
    {150,0,0}, {150,150,0}, {0,100,150},
    {100,0,0}, {100,100,0}, {0,100.100},
    {255,255,255}, {200,200,200}, {150,150,150},
};

/* Generate a star plane */
void initStars(void)
{
    int i, rn;

    for (i = 0; i < starnum; i++) {
        rn = genRandInt(0,11);
        stars[i].x = genRandFloat(-STARPSIZE,STARPSIZE);
        stars[i].y = genRandFloat(-STARPSIZE,STARPSIZE);
        stars[i].z = -10.5f;
        stars[i].size = genRandFloat(1.0f, 3.0f);
        stars[i].r = starcols[rn][0];
        stars[i].g = starcols[rn][1];
        stars[i].b = starcols[rn][2];
    }
}

/* Initialise the thrust particles */
void initThrust(int model)
{
    int i;

    if (models[model].thrust == 1) {
        for (i = 0; i < thrustnum; i++) {
            thrust[i].ix = genRandFloat(models[model].sxl, models[model].sxh);
            thrust[i].iy = genRandFloat(models[model].syl, models[model].syh);
            thrust[i].iz = genRandFloat(models[model].szl, models[model].szh);
            thrust[i].x = thrust[i].ix;
            thrust[i].y = thrust[i].iy;
            thrust[i].z = thrust[i].iz;
            thrust[i].incx = genRandFloat(models[model].ixl, models[model].ixh);
            thrust[i].incy = genRandFloat(models[model].iyl, models[model].iyh);
            thrust[i].incz = genRandFloat(models[model].izl, models[model].izh);
            thrust[i].life = genRandInt(1,125);
            thrust[i].g = 255;
        }
    }
}

/* Cache as much as possible */
void preCacheScene(int model)
{
    SDL_Surface *txtSurface;

    /* MODEL CACHE SECTION */
    switch (model) {
        case M_ADDER:
            init_adder(model);
            initThrust(model);
            break;
        case M_ANACONDA:
            init_anaconda(model);
            break;
        case M_ANACONDA_ARC:
            init_anaconda_arc(model);
            initThrust(model);
            break;
        case M_ASP:
            init_asp(model);
            initThrust(model);
            break;
        case M_ASPMK2:
            init_aspmk2(model);
            initThrust(model);
            break;
        case M_ASTEROID:
            init_asteroid(model);
            break;
        case M_BOA:
            init_boa(model);
            initThrust(model);
            break;
        case M_BOAMK2:
            init_boamk2(model);
            initThrust(model);
            break;
        case M_BUSHMASTER:
            init_bushmaster(model);
            initThrust(model);
            break;
        case M_BOULDER:
            init_boulder(model);
            break;
        case M_CAIMAN:
            init_caiman(model);
            initThrust(model);
            break;
        case M_CARGO:
            init_cargo(model);
            break;
        case M_COBRAFS:
            init_cobrafs(model);
            initThrust(model);
            break;
        case M_COBRAMK1:
            init_cobramk1(model);
            break;
        case M_COBRAMK1_ARC:
            init_cobramk1_arc(model);
            initThrust(model);
            break;
        case M_COBRAMK3_ARC:
            init_cobramk3_arc(model);
            initThrust(model);
            break;
        case M_CONSTRICTOR:
            init_constrictor(model);
            break;
        case M_CONSTRICTOR_ARC:
            init_constrictor_arc(model);
            initThrust(model);
            break;
        case M_CORIOLIS:
            init_coriolis(model);
            break;
        case M_CORIOLIS_ARC:
            init_coriolis_arc(model);
            break;
        case M_DELTA:
            init_delta(model);
            initThrust(model);
            break;
        case M_DODEC:
            init_dodec(model);
            break;
        case M_DRAKE:
            init_drake(model);
            initThrust(model);
            break;
        case M_ESCAPEPOD:
            init_escapepod(model);
            break;
        case M_FERDELANCE:
            init_ferdelance(model);
            initThrust(model);
            break;
        case M_FERDELANCE_ARC:
            init_ferdelance_arc(model);
            initThrust(model);
            break;
        case M_GECKO:
            init_gecko(model);
            initThrust(model);
            break;
        case M_GECKO_ARC:
            init_gecko_arc(model);
            initThrust(model);
            break;
        case M_GNAT:
            init_gnat(model);
            initThrust(model);
            break;
        case M_GRIFFIN:
            init_griffin(model);
            initThrust(model);
            break;
        case M_HAWK:
            init_hawk(model);
            initThrust(model);
            break;
        case M_HOGNOSE:
            init_hognose(model);
            initThrust(model);
            break;
        case M_KRAIT:
            init_krait(model);
            initThrust(model);
            break;
        case M_MAMBA:
            init_mamba(model);
            initThrust(model);
            break;
        case M_MAMBA_ARC:
            init_mamba_arc(model);
            initThrust(model);
            break;
        case M_MISSILE:
            init_missile(model);
            initThrust(model);
            break;
        case M_MOCCASIN:
            init_moccasin(model);
            initThrust(model);
            break;
        case M_MORAY:
            init_moray(model);
            initThrust(model);
            break;
        case M_MORAY_ARC:
            init_moray_arc(model);
            initThrust(model);
            break;
        case M_PYTHON:
            init_python(model);
            initThrust(model);
            break;
        case M_PYTHON_ARC:
            init_python_arc(model);
            initThrust(model);
            break;
        case M_RACER:
            init_racer(model);
            initThrust(model);
            break;
        case M_REMLOCK:
            init_remlock(model);
            initThrust(model);
            break;
        case M_SHUTTLE:
            init_shuttle(model);
            initThrust(model);
            break;
        case M_SIDEWINDER:
            init_sidewinder(model);
            initThrust(model);
            break;
        case M_THARGLET:
            init_tharglet(model);
            break;
        case M_THARGOID:
            init_thargoid(model);
            break;
        case M_THARGON:
            init_thargon(model);
            break;
        case M_TRANSPORTER:
            init_transporter(model);
            initThrust(model);
            break;
        case M_URUTU:
            init_urutu(model);
            initThrust(model);
            break;
        case M_VIPER:
            init_viper(model);
            initThrust(model);
            break;
        case M_WORM:
            init_worm(model);
            break;
        case M_ZARCH:
            init_zarch(model);
            initThrust(model);
            break;
    }

    if (glIsList(models[model].modelDL) != GL_TRUE) {
        models[model].modelDL = glGenLists(1);
        glNewList(models[model].modelDL, GL_COMPILE);
        glEnable(GL_TEXTURE_2D);
        glEnable(GL_LIGHTING);
        models[model].opengl();
        glEndList();
    }

    /* LABEL CACHE SECTION */
    if (glIsList(models[model].labelDL) != GL_TRUE) {
        if ( gluCheckExtension((const GLubyte*) "GL_ARB_texture_non_power_of_two", glGetString(GL_EXTENSIONS)) == GLU_TRUE) {
            txtSurface = renderFont(models[model].label, mainfont);
        } else {
            txtSurface = renderFontPOT(models[model].label, mainfont);
        }
        glGenTextures(1, &models[model].labeltexture); /* Generate Texture Target for Font */
        glBindTexture(GL_TEXTURE_2D, models[model].labeltexture);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR); /* Scale linearly when image bigger than texture */
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); /* Scale linearly when image smaller than texture */
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, txtSurface->w, txtSurface->h, 0, GL_RGBA, GL_UNSIGNED_BYTE, txtSurface->pixels);
        SDL_FreeSurface(txtSurface); /* Safe to free, it's been texturised */
        models[model].labelDL = glGenLists(1); /* Create the display list */
        glNewList(models[model].labelDL, GL_COMPILE);
        glBindTexture(GL_TEXTURE_2D, models[model].labeltexture);
        glBegin(GL_QUADS);
        glNormal3f(0.0f, 0.0f, 1.0f);
        glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f,-0.25f, 3.0f);
        glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f, -0.25f, 3.0f);
        glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f, 0.25f, 3.0f);
        glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f, 0.25f, 3.0f);
        glEnd();
        glEndList();
    }
}

/* Try to exit cleanly */
int _exit_(int code)
{
    int i;

    if(TTF_WasInit() == 1) {
        if (mainfont != NULL) {
            TTF_CloseFont(mainfont);
            mainfont = NULL;
        }
        TTF_Quit();
    }

    if(SDL_WasInit(SDL_INIT_VIDEO) != 0) {

        for (i = 0; i < N_MODELS ; i++) {
            glDeleteLists(models[i].modelDL, 1);
            glDeleteLists(models[i].labelDL, 1);
            glDeleteTextures(1, &models[i].labeltexture);
        }

        glDeleteTextures(N_TEXTURES,textures);
        SDL_Quit();
    }
    exit(code);
}

/* Initialise OpenGL */
void initOpenGL(int w, int h)
{
    glViewport(0, 0, w, h);
    initStars();
    initTextures();
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_COLOR, GL_ONE_MINUS_SRC_ALPHA);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    glDepthFunc(GL_LEQUAL);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, (GLfloat) w/ (GLfloat) h, 0.1f, 75.0f); /* Calc Aspect Ratio */
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_LIGHT0);
    GLfloat LightPos[4]={1.0f, 0.0f, 0.0f, 1.0f};
    GLfloat Ambient[4]={0.7f, 0.7f, 0.7f, 1.0f};
    glLightfv(GL_LIGHT0,GL_POSITION,LightPos);
    glLightfv(GL_LIGHT0,GL_AMBIENT,Ambient);
    glEnable(GL_POINT_SMOOTH);
}

/* Draw a Frame */
void drawScene(int model)
{
    static GLfloat lrot = 0.0f; /* Label rotation on y */
    static GLfloat mrot[3] = {0.0f, 0.0f, 0.0f}; /* Model rotation on x, y, z */
    static GLfloat srot = 0.0f; /* Star rotation on z */
    int i;

    /* MODEL SECTION */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0f,0.0f,zoom);
    glRotatef(mrot[0],1.0f,0.0f,0.0f);
    glRotatef(mrot[1],0.0f,1.0f,0.0f);
    glRotatef(mrot[2],0.0f,0.0f,1.0f);
    mrot[0] += 1.6f; /* X Axis Rotation */
    mrot[1] += 0.6f; /* Y Axis Rotation */
    mrot[2] += 1.0f; /* Z Axis Rotation */
    glCallList(models[model].modelDL);

    /* THRUST SECTION */
    glPointSize(5.0f);
    glDisable(GL_LIGHTING);
    glDisable(GL_TEXTURE_2D);

    if (models[model].thrust == 1) {
        glBegin(GL_POINTS);
        for (i = 0; i < thrustnum; i++) {
            thrust[i].x += thrust[i].incx;
            thrust[i].y += thrust[i].incy;
            thrust[i].z += thrust[i].incz;
            thrust[i].life -= 1;
            thrust[i].g -= 1;
            if (thrust[i].life == 0) {
                thrust[i].x = thrust[i].ix;
                thrust[i].y = thrust[i].iy;
                thrust[i].z = thrust[i].iz;
                thrust[i].g = 255;
                thrust[i].life = genRandInt(50,125);
            }
            glColor3ub(255, thrust[i].g, 0);
            glVertex3f(thrust[i].x, thrust[i].y, thrust[i].z);
        }
        glEnd();
    }

    /* STARFIELD SECTION */
    glLoadIdentity();
    glRotatef(srot,0.0f,0.0f,-1.0f);
    srot += 0.05f;

    for (i = 0; i < starnum ; i++) {
        if (stars[i].y > STARPSIZE) {
            stars[i].y = genRandFloat(-STARPSIZE, -STARPSIZE+1.0f);
        } else {
            stars[i].y += 0.005f;
        }

        glPointSize(stars[i].size);
        glBegin(GL_POINTS);
        glColor3ub(stars[i].r, stars[i].g, stars[i].b);
        glVertex3f(stars[i].x, stars[i].y, stars[i].z);
        glEnd();
    }
    glEnable(GL_LIGHTING);
    glEnable(GL_TEXTURE_2D);

    /* LABEL SECTION */
    glLoadIdentity();
    glTranslatef(0.0f,0.0f,zoom);
    glRotatef(lrot,0.0f,0.5f,0.0f);
    lrot += 1.5f;
    glCallList(models[model].labelDL);

    if ( zoom < ZOOMSTOP ) {
        zoom += 1.0f;
    }

    SDL_GL_SwapBuffers();
}

/* Main loop to handle events */
void mainloop(int scr_w, int scr_h)
{
    SDL_TimerID timerMain;
    SDL_TimerID timerModelSwitch;

    SDL_Event event;
    SDL_Surface* mainSurface;
    int _quit = 0;
    int model = genRandInt(0, (N_MODELS -1)); /* Pick a random model */

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) < 0) {
        fprintf(stderr, "Unable to initialize SDL: %s\n", SDL_GetError());
        _exit_(1);
    }

#if SDL_PATCHLEVEL > 12
    SDL_GL_SetAttribute( SDL_GL_SWAP_CONTROL, 1 );
#endif

    /* Some SDL installations don't default to desktop display size if 0 is passed */
    /* so if we fail, try with some defaults */
    if ((mainSurface = SDL_SetVideoMode(scr_w, scr_h, 0, SDL_OPENGL)) == NULL) {
        scr_w = 640;
        scr_h = 480;
        if ((mainSurface = SDL_SetVideoMode(scr_w, scr_h, 0, SDL_OPENGL)) == NULL) {
            fprintf(stderr, "Unable to create OpenGL screen: %s\n", SDL_GetError());
            _exit_(2);
        }
    }

    if (TTF_Init() < 0) {
        fprintf(stderr, "TTF_Init: %s\n", TTF_GetError());
        _exit_(3);
    }

    SDL_WM_SetCaption("Eleet Screensaver", NULL);
    mainfont = loadFont(); /* Load the TTF Font */
    initOpenGL(mainSurface->w, mainSurface->h); /* Init OpenGL view port */
    preCacheScene(model);
    timerMain = SDL_AddTimer(FRAME_INTERVAL, _frametimer, NULL); /* Init framerate timer */
    timerModelSwitch = SDL_AddTimer(modelswitch, _modelswitchtimer, NULL); /* Init model switch timer */
    SDL_ShowCursor(SDL_DISABLE);

    while ( SDL_WaitEvent(&event) && _quit == 0) {
        switch (event.type) {
            case SDL_QUIT: _quit = 1; break;
            case SDL_USEREVENT:
                if (event.user.code == TIM_FRAME_INTERVAL) {
                    drawScene(model);
                } else if (event.user.code == TIM_MODEL_SWITCH) {
                    zoom = ZOOMSTART;
                    model = genRandInt(0, (N_MODELS -1)); /* Pick a random model */
                    preCacheScene(model);
                }
                break;
            case SDL_KEYDOWN: _quit = 1; break;
        }
    }

    SDL_ShowCursor(SDL_ENABLE);
    SDL_RemoveTimer(timerMain);
    SDL_RemoveTimer(timerModelSwitch);
}

int main(int argc, char **argv)
{
    int i;
    char *wid_env;
    static char sdlwid[100];
    Uint32 wid = 0;
    Display *dpy;
    XWindowAttributes winattr;
    winattr.width = 0;
    winattr.height = 0;

    /* See if we've been given a window argument and options */
    for (i = 0; i < argc ; i++) {
        if (!strcmp (argv[i], "-window-id")) {
            wid = strtol(argv[i+1], (char **) NULL, 0); /* Base 0 autodetects hex/dec */
        } else if (!strcmp (argv[i], "-starnum")) {
            starnum = strtol(argv[i+1], (char **) NULL, 0);
            if ((starnum < MINSTARNUM) || (starnum > MAXSTARNUM)) {
                starnum = STARNUM;
            }
        } else if (!strcmp (argv[i], "-thrustnum")) {
            thrustnum = strtol(argv[i+1], (char **) NULL, 0);
            if ((thrustnum < MINTHRUSTNUM) || (thrustnum > MAXTHRUSTNUM)) {
                    thrustnum = THRUSTNUM;
            }
        } else if (!strcmp (argv[i], "-switch")) {
            modelswitch = (strtol(argv[i+1], (char **) NULL, 0) * 1000);
            if ((modelswitch < 30000) || (modelswitch > 600000)) {
                modelswitch = MODEL_SWITCH;
            }
        }
    }

    /* If no window argument, check environment */
    if (wid == 0) {
        if ((wid_env = getenv("XSCREENSAVER_WINDOW")) != NULL ) {
            wid = strtol(wid_env, (char **) NULL, 0); /* Base 0 autodetects hex/dec */
        }
    }

    /* Get win attrs if we've been given a window, otherwise we'll use our own */
    if (wid != 0 ) {
        if ((dpy = XOpenDisplay(NULL)) != NULL) { /* Use the default display */
            XGetWindowAttributes(dpy, (Window) wid, &winattr);
            XCloseDisplay(dpy);
            snprintf(sdlwid, 100, "SDL_WINDOWID=0x%X", wid);
            putenv(sdlwid); /* Tell SDL to use this window */
        }
    }

    mainloop(winattr.width, winattr.height);
    _exit_(0);
    return 0; /* Silence Warnings */
}
