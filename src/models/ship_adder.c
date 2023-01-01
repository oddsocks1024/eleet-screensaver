#include "eleet.h"

void init_adder(int model)
{
    models[model].label = "          Adder          ";
    models[model].thrust = 1;
    models[model].opengl = obj_adder;
    models[model].sxl = -1.66f;
    models[model].sxh = 1.66f;
    models[model].syl = -0.38f;
    models[model].syh = 0.38f;
    models[model].szl = -2.22f;
    models[model].szh = -2.22f;
    models[model].ixl = -0.02f;
    models[model].ixh = 0.02f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_adder(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.9693774f, 0.2455756f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, 0.38f, 0.72f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, 0.38f, 0.72f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f, 0.0f, 2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f, 0.0f, 2.22f);

    glNormal3f(0.0f, -0.969377f, 0.2455756f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, 0.0f, 2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, 0.0f, 2.22f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f, -0.38f, 0.72f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f, -0.38f, 0.72f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.7972900f, 0.5851127f, 0.1482285f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.66f, 0.0f, -1.33f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f, 0.38f, 0.72f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, 0.0f, 2.22f);

    glNormal3f(0.7972900f, -0.585112f, 0.1482285f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, 0.0f, 2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f, -0.38f, 0.72f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.66f, 0.0f, -1.33f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.4989644f, 0.8666224f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, 0.38f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, 0.38f, 0.72f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.66f, 0.0f, -1.33f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.66f, 0.0f, -2.22f);

    glNormal3f(0.4989644f, -0.866622f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.66f, 0.0f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.66f, 0.0f, -1.33f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.0f, -0.38f, 0.72f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f, -0.38f, -2.22f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(1.66f, 0.0f, -2.22f);
    glTexCoord2f(0.75f,0.0f); glVertex3f(1.0f, -0.38f, -2.22f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-1.0f, -0.38f, -2.22f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-1.66f, 0.0f, -2.22f);
    glTexCoord2f(0.25f,1.0f); glVertex3f(-1.0f, 0.38f, -2.22f);
    glTexCoord2f(0.75f,1.0f); glVertex3f(1.0f, 0.38f, -2.22f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(-0.498964f, 0.8666224f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, 0.38f, 0.72f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, 0.38f, -2.22f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.66f, 0.0f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, 0.0f, -1.33f);

    glNormal3f(-0.498964f, -0.866622f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.66f, 0.0f, -1.33f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.66f, 0.0f, -2.22f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f, -0.38f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, -0.38f, 0.72f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.797290f, 0.5851127f, 0.1482285f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, 0.38f, 0.72f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, 0.0f, -1.33f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, 0.0f, 2.22f);

    glNormal3f(-0.797290f, -0.585112f, 0.1482285f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, 0.0f, 2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, 0.0f, -1.33f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, -0.38f, 0.72f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, 0.38f, 0.72f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, 0.38f, 0.72f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.0f, 0.38f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, 0.38f, -2.22f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, -0.38f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, -0.38f, -2.22f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.0f, -0.38f, 0.72f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, -0.38f, 0.72f);
    glEnd();

    /* Window */
    glBindTexture(GL_TEXTURE_2D, textures[T_WINDOW]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.9778024f, 0.2095290f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.61f, 0.25f, 1.33f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.61f, 0.19f, 1.61f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.61f, 0.19f, 1.61f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.61f, 0.25f, 1.33f);
    glEnd();
}
