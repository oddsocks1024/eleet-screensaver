#include "eleet.h"

void init_constrictor(int model)
{
    models[model].label = "       Constrictor       ";
    models[model].thrust = 0;
    models[model].opengl = obj_constrictor;
}

void obj_constrictor(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.9666527f, 0.2560908f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.71f, -0.25f, 2.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.71f, -0.25f, 2.85f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.71f, 0.46f, 0.17f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.71f, 0.46f, 0.17f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.289676f, 0.9252071f, 0.2451108f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.71f, -0.25f, 2.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.71f, 0.46f, 0.17f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.92f, -0.25f, 1.42f);

    glNormal3f(0.2896764f, 0.9252071f, 0.2451108f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.71f, -0.25f, 2.85f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.92f, -0.25f, 1.42f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.71f, 0.46f, 0.17f);

    glNormal3f(0.5060853f, 0.8624834f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.92f, -0.25f, 1.42f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.92f, -0.25f, -1.42f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.71f, 0.46f, 0.17f);

    glNormal3f(-0.506085f, 0.8624834f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.71f, 0.46f, 0.17f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.92f, -0.25f, -1.42f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.92f, -0.25f, 1.42f);

    glNormal3f(-0.506085f, 0.8624834f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.71f, 0.46f, 0.17f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.71f, 0.46f, -1.42f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.92f, -0.25f, -1.42f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.71f, 0.46f, 0.17f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.71f, 0.46f, -1.42f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.71f, 0.46f, -1.42f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.71f, 0.46f, 0.17f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.5060853f, 0.8624834f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.71f, 0.46f, 0.17f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.92f, -0.25f, -1.42f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.71f, 0.46f, -1.42f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.92f, -0.25f, -1.42f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.92f, -0.25f, -1.42f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.71f, 0.46f, -1.42f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.71f, 0.46f, -1.42f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-1.92f, -0.25f, -1.42f);
    glTexCoord2f(0.75f,0.0f); glVertex3f(1.92f, -0.25f, -1.42f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(1.92f, -0.25f, 1.42f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.71f, -0.25f, 2.85f);
    glTexCoord2f(0.25f,1.0f); glVertex3f(-0.71f, -0.25f, 2.85f);
    glTexCoord2f(0.75f,1.0f); glVertex3f(-1.92f, -0.25f, 1.42f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.89f, -0.26f, -0.89f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.71f, -0.26f, 2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.53f, -0.26f, -0.53f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.53f, -0.26f, -0.53f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.71f, -0.26f, 2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.89f, -0.26f, -0.89f);
    glEnd();
}
