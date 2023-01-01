#include "eleet.h"

void init_racer(int model)
{
    models[model].label = "          Racer          ";
    models[model].thrust = 1;
    models[model].opengl = obj_racer;
    models[model].sxl = -0.16f;
    models[model].sxh = 0.16f;
    models[model].syl = 0.231f;
    models[model].syh = 0.451f;
    models[model].szl = 1.06f;
    models[model].szh = 1.73f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.05f;
    models[model].izl = 0.01f;
    models[model].izh = 0.1f;
}

void obj_racer(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.3913841f, 0.9185534f, -0.055479f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.55f, 0.06f, 2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.66f, -0.48f, 1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.06f, -1.66f);

    glNormal3f(-0.391384f, 0.9185534f, -0.055479f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.06f, -1.66f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, -0.48f, 1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.55f, 0.06f, 2.22f);

    glNormal3f(-0.866120f, 0.4845220f, -0.122774f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.55f, 0.06f, 2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.62f, 0.55f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.06f, -1.66f);

    glNormal3f(0.0f, 0.9481140f, 0.3179304f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.62f, 0.55f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.55f, 0.06f, 2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.55f, 0.06f, 2.22f);
    glEnd();

    /* Drawn CW : Exhaust */
    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.951444f, 0.307820f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.16f, 0.341f, 1.39f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.231f, 1.73f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.16f, 0.341f, 1.39f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.451f, 1.06f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.8661205f, 0.4845220f, -0.122774f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.06f, -1.66f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.62f, 0.55f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.55f, 0.06f, 2.22f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.981523f, -0.191343f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.66f, -0.48f, 1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, -0.48f, 1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.06f, -1.66f);

    glNormal3f(0.0f, -0.899235f, 0.4374657f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.55f, 0.06f, 2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, -0.48f, 1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.66f, -0.48f, 1.11f);

    glNormal3f(0.0f, -0.899235f, 0.4374657f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.66f, -0.48f, 1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.55f, 0.06f, 2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.55f, 0.06f, 2.22f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.979178f, -0.203000f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.15f, -0.55f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.38f, -0.32f, 0.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.38f, -0.32f, 0.27f);
    glEnd();
}
