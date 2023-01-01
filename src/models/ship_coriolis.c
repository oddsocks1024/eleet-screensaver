#include "eleet.h"

void init_coriolis(int model)
{
    models[model].label = "     Coriolis Station    ";
    models[model].thrust = 0;
    models[model].opengl = obj_coriolis;
}

void obj_coriolis(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.13f, 0.0f, 2.13f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 2.13f, 2.13f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-2.13f, 0.0f, 2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -2.13f, 2.13f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5773502f, -0.577350f, 0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.13f, -2.13f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.13f, 0.0f, 2.13f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -2.13f, 2.13f);

    glNormal3f(0.5773502f, 0.5773502f, 0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.13f, 0.0f, 2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.13f, 2.13f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.13f, 2.13f);

    glNormal3f(-0.577350f, 0.5773502f, 0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 2.13f, 2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.13f, 2.13f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.13f, 0.0f, 2.13f);

    glNormal3f(-0.577350f, -0.577350f, 0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.13f, 0.0f, 2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.13f, -2.13f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -2.13f, 2.13f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.13f, -2.13f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -2.13f, 2.13f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-2.13f, -2.13f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -2.13f, -2.13f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.13f, 0.0f, -2.13f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.13f, 2.13f, 0.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(2.13f, 0.0f, 2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.13f, -2.13f, 0.0f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.13f, 0.0f, -2.13f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.13f, -2.13f, 0.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-2.13f, 0.0f, 2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.13f, 2.13f, 0.0f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.13f, 2.13f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.13f, 2.13f, 0.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, 2.13f, -2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.13f, 2.13f, 0.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.577350f, -0.577350f, -0.577350f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -2.13f, -2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.13f, -2.13f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.13f, 0.0f, -2.13f);

    glNormal3f(0.5773502f, -0.577350f, -0.577350f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -2.13f, -2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.13f, 0.0f, -2.13f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.13f, -2.13f, 0.0f);

    glNormal3f(0.5773502f, 0.5773502f, -0.577350f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 2.13f, -2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.13f, 2.13f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.13f, 0.0f, -2.13f);

    glNormal3f(-0.577350f, 0.5773502f, -0.577350f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.13f, 0.0f, -2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.13f, 2.13f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.13f, -2.13f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -2.13f, -2.13f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.13f, 0.0f, -2.13f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, 2.13f, -2.13f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.13f, 0.0f, -2.13f);
    glEnd();

    /* Docking Bay */
    glBindTexture(GL_TEXTURE_2D, textures[T_DOCKING]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.13f, -0.4f, 2.14f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.13f, -0.4f, 2.14f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.13f, 0.4f, 2.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.13f, 0.4f, 2.14f);
    glEnd();
}
