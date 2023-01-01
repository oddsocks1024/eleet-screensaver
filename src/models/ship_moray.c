#include "eleet.h"

void init_moray(int model)
{
    models[model].label = "          Moray          ";
    models[model].thrust = 1;
    models[model].opengl = obj_moray;
    models[model].sxl = -0.3f;
    models[model].sxh = 0.3f;
    models[model].syl = -0.60f;
    models[model].syh = -0.13f;
    models[model].szl = -0.85f;
    models[model].szh = -0.55f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.05f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_moray(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9855415f, 0.1694340f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, 0.0f, 2.16f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.6f, -1.33f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.5f, 0.0f, 2.16f);

    glNormal3f(-0.199104f, 0.9701749f, 0.1382672f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.5f, 0.0f, 2.16f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.6f, -1.33f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f, 0.0f, 0.0f);

    glNormal3f(0.1991047f, 0.9701749f, 0.1382672f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.6f, -1.33f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.5f, 0.0f, 2.16f);

    glNormal3f(-0.488499f, -0.234619f, -0.840429f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f, 0.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.6f, -1.33f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, -0.9f, -0.33f);

    glNormal3f(0.0f, -0.554700f, -0.832050f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, -0.9f, -0.33f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.6f, -1.33f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, -0.9f, -0.33f);

    glNormal3f(0.4884996f, -0.234619f, -0.840429f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, -0.9f, -0.33f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.6f, -1.33f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.0f, 0.0f, 0.0f);

    glNormal3f(-0.546562f, -0.746462f, 0.3795571f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, -0.9f, -0.33f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, 0.0f, 2.16f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f, 0.0f, 0.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, -0.940453f, 0.3399228f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, -0.9f, -0.33f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, -0.9f, -0.33f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.5f, 0.0f, 2.16f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, 0.0f, 2.16f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.5465622f, -0.746462f, 0.3795571f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f, 0.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.5f, 0.0f, 2.16f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, -0.9f, -0.33f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.538035f, -0.842922f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.3f, -0.13f, -0.85f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.0f, -0.60f, -0.55f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-0.3f, -0.13f, -0.85f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.9826616f, 0.1854078f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.4f, 0.10f, 1.63f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.16f, 0.0f, 2.16f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.2f, 0.0f, 2.16f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.43f, 0.10f, 1.63f);

    glNormal3f(0.0f, 0.9826616f, 0.1854078f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.43f, 0.10f, 1.63f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.2f, 0.0f, 2.16f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.16f, 0.0f, 2.16f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.4f, 0.10f, 1.63f);
    glEnd();
}
