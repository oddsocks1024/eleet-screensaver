#include "eleet.h"

void init_remlock(int model)
{
    models[model].label = "         Remlock         ";
    models[model].thrust = 1;
    models[model].opengl = obj_remlock;
    models[model].sxl = -0.5f;
    models[model].sxh = 0.5f;
    models[model].syl = -0.5f;
    models[model].syh = 0.5f;
    models[model].szl = -2.0f;
    models[model].szh = -2.0f;
    models[model].ixl = -0.02f;
    models[model].ixh = 0.02f;
    models[model].iyl = -0.02f;
    models[model].iyh = 0.02f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_remlock(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.5f, -0.5f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, -0.5f, 2.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.5f, -0.5f, 2.0f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.5f, -0.5f, -2.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, -0.5f, -2.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.5f, -0.5f, -1.0f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.5f, -0.5f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.5f, -0.5f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, -0.5f, -2.0f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.5f, -0.5f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.5f, -0.5f, 2.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.5f, -0.5f, -1.0f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.5f, 0.5f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.5f, 0.5f, 2.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.5f, 0.5f, 2.0f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, 0.5f, 2.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.5f, 0.5f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.5f, 0.5f, -1.0f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.5f, 0.5f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, 0.5f, -2.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, 0.5f, -2.0f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, 0.5f, -2.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.5f, 0.5f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.5f, 0.5f, -1.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 1.0f, 1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.51f, -0.3f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.2f, 0.51f, -1.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.2f, 0.51f, -1.2f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(0.5f, -0.5f, 2.0f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(0.5f, 0.5f, 2.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-0.5f, 0.5f, 2.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(-0.5f, -0.5f, 2.0f);

    glNormal3f(0.9486832f, 0.0f, 0.3162277f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(1.5f, 0.5f, -1.0f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(0.5f, 0.5f, 2.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(0.5f, -0.5f, 2.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(1.5f, -0.5f, -1.0f);

    glNormal3f(-0.948683f, 0.0f, 0.3162277f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-0.5f, 0.5f, 2.0f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(-1.5f, 0.5f, -1.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-1.5f, -0.5f, -1.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(-0.5f, -0.5f, 2.0f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, 0.5f, -2.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, -0.5f, -2.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.5f, -0.5f, -2.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, 0.5f, -2.0f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(-0.707106f, 0.0f, -0.707106f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.5f, 0.5f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.5f, 0.5f, -2.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, -0.5f, -2.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.5f, -0.5f, -1.0f);

    glNormal3f(0.7071067f, 0.0f, -0.707106f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(0.5f, -0.5f, -2.0f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(1.5f, -0.5f, -1.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(1.5f, 0.5f, -1.0f);
    glTexCoord2f(1.0f,0.0f);glVertex3f(0.5f, 0.5f, -2.0f);
    glEnd();
}
