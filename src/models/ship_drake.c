#include "eleet.h"

void init_drake(int model)
{
    models[model].label = "          Drake          ";
    models[model].thrust = 1;
    models[model].opengl = obj_drake;
    models[model].sxl = -0.92f;
    models[model].sxh = 0.95f;
    models[model].syl = 0.05f;
    models[model].syh = 0.25f;
    models[model].szl = -0.821f;
    models[model].szh = -0.821f;
    models[model].ixl = -0.02f;
    models[model].ixh = 0.02f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_drake(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_GREEN]);
    glBegin(GL_QUADS);
    glNormal3f(0.2232689f, -0.968593f, 0.1094455f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.45f, 1.67f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.75f, -0.15f, -0.07f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-2.25f, -0.35f, -0.82f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.5f, -0.15f, -0.82f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.543440f, 0.7938808f, 0.2728112f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.25f, 0.45f, -0.82f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.75f, -0.15f, -0.07f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.45f, 1.67f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.25f, 0.45f, -0.82f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.25f, 0.45f, -0.82f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.45f, 1.67f);

    glNormal3f(0.0f, -0.972174f, 0.2342588f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.45f, 1.67f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.5f, -0.15f, -0.82f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.5f, -0.15f, -0.82f);

    glNormal3f(0.5434401f, 0.7938808f, 0.2728112f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.75f, -0.15f, -0.07f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.25f, 0.45f, -0.82f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.45f, 1.67f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(-0.256890f, -0.963338f, 0.0773765f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.45f, 1.67f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.5f, -0.15f, -0.82f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(2.25f, -0.35f, -0.82f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.75f, -0.15f, -0.07f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.611576f, 0.7644707f, 0.2038588f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.25f, 0.45f, -0.82f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.25f, -0.35f, -0.82f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.75f, -0.15f, -0.07f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.25f, -0.35f, -0.82f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.25f, 0.45f, -0.82f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.5f, -0.15f, -0.82f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.25f, 0.45f, -0.82f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.25f, 0.45f, -0.82f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.5f, -0.15f, -0.82f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.5f, -0.15f, -0.82f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.25f, 0.45f, -0.82f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.25f, -0.35f, -0.82f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.5f, -0.15f, -0.82f);

    glNormal3f(0.6115766f, 0.7644707f, 0.2038588f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.25f, -0.35f, -0.82f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.25f, 0.45f, -0.82f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.75f, -0.15f, -0.07f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
     /* Guns 1*/
    glBegin(GL_QUADS);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.75f, -0.15f, 1.17f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.77f, -0.15f, 1.17f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.77f, -0.15f, -0.07f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.75f, -0.15f, -0.07f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.75f, -0.15f, -0.07f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.77f, -0.15f, -0.07f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.77f, -0.15f, 1.17f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.75f, -0.15f, 1.17f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.75f, -0.17f, -0.07f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.77f, -0.17f, -0.07f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.77f, -0.17f, 1.17f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.75f, -0.17f, 1.17f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.75f, -0.17f, 1.17f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.77f, -0.17f, 1.17f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.77f, -0.17f, -0.07f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.75f, -0.17f, -0.07f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.77f, -0.15f, 1.17f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.77f, -0.15f, -0.07f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.77f, -0.17f, -0.07f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.77f, -0.17f, 1.17f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.75f, -0.17f, 1.17f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.75f, -0.17f, -0.07f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.75f, -0.15f, -0.07f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.75f, -0.15f, 1.17f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.77f, -0.15f, 1.17f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.77f, -0.15f, -0.07f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.77f, -0.17f, -0.07f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.77f, -0.17f, 1.17f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.75f, -0.17f, 1.17f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.75f, -0.17f, -0.07f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.75f, -0.15f, -0.07f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.75f, -0.15f, 1.17f);
    glEnd();
    /* End Guns */

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.3f, 0.05f, -0.821f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.92f, 0.05f, -0.821f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.92f, 0.25f, -0.821f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.3f, 0.25f, -0.821f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.32f, 0.25f, -0.821f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.95f, 0.25f, -0.821f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.95f, 0.05f, -0.821f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.32f, 0.05f, -0.821f);
    glEnd();
    glEnable(GL_LIGHTING);
}
