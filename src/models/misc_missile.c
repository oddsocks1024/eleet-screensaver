#include "eleet.h"

void init_missile(int model)
{
    models[model].label = "     Guided Missile      ";
    models[model].thrust = 1;
    models[model].opengl = obj_missile;
    models[model].sxl = -0.4f;
    models[model].sxh = 0.4f;
    models[model].syl = -0.4f;
    models[model].syh = 0.4f;
    models[model].szl = -2.2f;
    models[model].szh = -2.2f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_missile(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    /* Next 4 Triangles = War Head */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.9701425f, 0.0f, 0.2425356f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.4f, -0.4f, 1.8f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.4f, 0.4f, 1.8f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 3.4f);

    glNormal3f(0.0f, 0.9701425f, 0.2425356f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.0f, 3.4f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.4f, 0.4f, 1.8f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.4f, 0.4f, 1.8f);

    glNormal3f(-0.970142f, 0.0f, 0.2425356f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.0f, 3.4f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.4f, 0.4f, 1.8f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.4f, -0.4f, 1.8f);

    glNormal3f(0.0f, -0.970142f, 0.2425356f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.0f, 3.4f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.4f, -0.4f, 1.8f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, -0.4f, 1.8f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    /* Next 4 Quads = Body */
    glBegin(GL_QUADS);
    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.4f, -0.4f, 1.8f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.4f, -0.4f, -2.2f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.4f, 0.4f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, 0.4f, 1.8f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.4f, 0.4f, -2.2f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.4f, 0.4f, -2.2f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.4f, 0.4f, 1.8f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, 0.4f, 1.8f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.4f, 0.4f, 1.8f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.4f, 0.4f, -2.2f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.4f, -0.4f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.4f, -0.4f, 1.8f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.4f, -0.4f, 1.8f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.4f, -0.4f, -2.2f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.4f, -0.4f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, -0.4f, 1.8f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.4f, -0.4f, -2.2f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.4f, -0.4f, -2.2f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.4f, 0.4f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, 0.4f, -2.2f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    /* Next 4 tri = Fins */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.7071067f, -0.707106f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.4f, 0.4f, -2.2f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.6f, 0.6f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, 0.4f, -0.6f);

    glNormal3f(-0.707106f, -0.707106f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.4f, 0.4f, -0.6f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.6f, 0.6f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.4f, 0.4f, -2.2f);

    glNormal3f(0.7071067f, -0.707106f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.4f, -0.4f, -0.6f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.6f, -0.6f, -2.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.4f, -0.4f, -2.2f);

    glNormal3f(-0.707106f, -0.707106f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.4f, -0.4f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.6f, -0.6f, -2.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.4f, -0.4f, -0.6f);
    glEnd();
}
