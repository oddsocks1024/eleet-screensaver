#include "eleet.h"

void init_worm(int model)
{
    models[model].label = "          Worm           ";
    models[model].thrust = 0;
    models[model].opengl = obj_worm;
}

void obj_worm(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.7839186f, 0.6208635f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.62f, -0.62f, 2.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.62f, -0.62f, 2.18f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.31f, 0.37f, 0.93f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.31f, 0.37f, 0.93f);

    glNormal3f(0.0f, 0.9804289f, 0.1968732f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.5f, 0.87f, -1.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.31f, 0.37f, 0.93f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.31f, 0.37f, 0.93f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.5f, 0.87f, -1.56f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.6832706f, 0.6453111f, 0.3416353f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.62f, -0.62f, 2.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.93f, -0.62f, 1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.31f, 0.37f, 0.93f);

    glNormal3f(-0.683270f, 0.6453111f, 0.3416353f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.62f, -0.62f, 2.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.31f, 0.37f, 0.93f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.93f, -0.62f, 1.56f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.7815378f, 0.5994371f, 0.1728401f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.31f, 0.37f, 0.93f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.93f, -0.62f, 1.56f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.62f, -0.62f, -1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.5f, 0.87f, -1.56f);

    glNormal3f(-0.777967f, 0.6019014f, 0.1802267f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.93f, -0.62f, 1.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.31f, 0.37f, 0.93f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.5f, 0.87f, -1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.62f, -0.62f, -1.56f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.62f, -0.62f, -1.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.62f, -0.62f, -1.56f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.5f, 0.87f, -1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.5f, 0.87f, -1.56f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.93f, -0.62f, 1.56f);
    glTexCoord2f(0.75f,0.0f); glVertex3f(0.62f, -0.62f, 2.18f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-0.62f, -0.62f, 2.18f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-0.93f, -0.62f, 1.56f);
    glTexCoord2f(0.25f,1.0f); glVertex3f(-1.62f, -0.62f, -1.56f);
    glTexCoord2f(0.75f,1.0f); glVertex3f(1.62f, -0.62f, -1.56f);
    glEnd();
}
