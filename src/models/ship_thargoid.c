#include "eleet.h"

void init_thargoid(int model)
{
    models[model].label = "        Thargoid         ";
    models[model].thrust = 0;
    models[model].opengl = obj_thargoid;
}

void obj_thargoid(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_POLYGON);
    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.34f); glVertex3f(0.4f, -0.6f, 0.6f);
    glTexCoord2f(0.34f,0.0f); glVertex3f(0.4f, -0.85f, 0.0f);
    glTexCoord2f(0.67f,0.0f); glVertex3f(0.4f, -0.6f, -0.6f);
    glTexCoord2f(1.0f,0.34f); glVertex3f(0.4f, 0.0f, -0.85f);
    glTexCoord2f(1.0f,0.67f); glVertex3f(0.4f, 0.6f, -0.6f);
    glTexCoord2f(0.67f,1.0f); glVertex3f(0.4f, 0.85f, 0.0f);
    glTexCoord2f(0.34f,1.0f); glVertex3f(0.4f, 0.6f, 0.6f);
    glTexCoord2f(0.0f,0.67f); glVertex3f(0.4f, 0.0f, 0.85f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    glNormal3f(0.8455947f, -0.493263f, 0.2041090f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.3f, -1.45f, 1.45f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.3f, -2.05f, 0.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.4f, -0.85f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, -0.6f, 0.6f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.8453493f, -0.205466f, 0.4931204f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.4f, -0.6f, 0.6f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.4f, 0.0f, 0.85f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.3f, 0.0f, 2.05f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.3f, -1.45f, 1.45f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.8459404f, -0.492757f, -0.203899f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.3f, -2.05f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.3f, -1.45f, -1.45f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.4f, -0.6f, -0.6f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, -0.85f, 0.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    glNormal3f(0.8455947f, -0.204109f, -0.493263f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.3f, -1.45f, -1.45f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.3f, 0.0f, -2.05f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.4f, 0.0f, -0.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, -0.6f, -0.6f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.8459404f, 0.2038995f, -0.492757f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.3f, 0.0f, -2.05f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.3f, 1.45f, -1.45f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.4f, 0.6f, -0.6f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, 0.0f, -0.85f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    glNormal3f(0.8455947f, 0.4932636f, -0.204109f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.3f, 1.45f, -1.45f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.3f, 2.05f, 0.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.4f, 0.85f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, 0.6f, -0.6f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.8459404f, 0.4927572f, 0.2038995f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.3f, 2.05f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.3f, 1.45f, 1.45f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.4f, 0.6f, 0.6f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, 0.85f, 0.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    glNormal3f(0.8455947f, 0.2041090f, 0.4932636f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.3f, 1.45f, 1.45f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.3f, 0.0f, 2.05f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.4f, 0.0f, 0.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, 0.6f, 0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.34f); glVertex3f(-0.3f, 0.0f, 2.05f);
    glTexCoord2f(0.34f,0.0f); glVertex3f(-0.3f, 1.45f, 1.45f);
    glTexCoord2f(0.67f,0.0f); glVertex3f(-0.3f, 2.05f, 0.0f);
    glTexCoord2f(1.0f,0.34f); glVertex3f(-0.3f, 1.45f, -1.45f);
    glTexCoord2f(1.0f,0.67f); glVertex3f(-0.3f, 0.0f, -2.05f);
    glTexCoord2f(0.67f,1.0f); glVertex3f(-0.3f, -1.45f, -1.45f);
    glTexCoord2f(0.34f,1.0f); glVertex3f(-0.3f, -2.05f, 0.0f);
    glTexCoord2f(0.0f,0.67f); glVertex3f(-0.3f, -1.45f, 1.45f);
    glEnd();
}
