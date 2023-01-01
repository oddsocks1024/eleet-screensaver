#include "eleet.h"

void init_sidewinder(int model)
{
    models[model].label = "       Sidewinder        ";
    models[model].thrust = 1;
    models[model].opengl = obj_sidewinder;
    models[model].sxl = -0.37f;
    models[model].sxh = 0.37f;
    models[model].syl = -0.18f;
    models[model].syh = 0.18f;
    models[model].szl = -0.88f;
    models[model].szh = -0.88f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_sidewinder(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9698551f, 0.2436821f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.5f, -0.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, 0.0f, 1.12f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, 0.0f, 1.12f);

    glNormal3f(-0.240754f, 0.9630165f, 0.1209819f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.5f, -0.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.0f, 0.0f, -0.87f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, 0.0f, 1.12f);

    glNormal3f(0.2407541f, 0.9630165f, 0.1209819f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f, 0.0f, -0.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.5f, -0.87f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, 0.0f, 1.12f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.0f, 0.0f, -0.87f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.5f, -0.87f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-2.0f, 0.0f, -0.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.5f, -0.87f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.240754f, -0.963016f, 0.1209819f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.5f, -0.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, 0.0f, 1.12f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f, 0.0f, -0.87f);

    glNormal3f(0.0f, -0.969855f, 0.2436821f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, 0.0f, 1.12f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, 0.0f, 1.12f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.5f, -0.87f);

    glNormal3f(0.2407541f, -0.963016f, 0.1209819f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f, 0.0f, -0.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f, 0.0f, 1.12f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.5f, -0.87f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.37f, -0.18f, -0.88f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.37f, -0.18f, -0.88f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.37f, 0.18f, -0.88f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.37f, 0.18f, -0.88f);
    glEnd();
    glEnable(GL_LIGHTING);
}
