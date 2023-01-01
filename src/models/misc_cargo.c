#include "eleet.h"

void init_cargo(int model)
{
    models[model].label = "     Cargo Container     ";
    models[model].thrust = 0;
    models[model].opengl = obj_cargo;
}

void obj_cargo(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_POLYGON);
    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.75,0.0f); glVertex3f(2.0f, 1.33f, 0.0f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(2.0f, 0.41f, 1.25f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(2.0f, -1.08f, 0.75f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(2.0f, -1.08f, -0.75f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(2.0f, 0.41f, -1.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-2.0f, 0.41f, -1.25f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-2.0f, -1.08f, -0.75f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-2.0f, -1.08f, 0.75f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-2.0f, 0.41f, 1.25f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-2.0f, 1.33f, 0.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_ALIEN]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.8053796f, 0.5927593f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f, 1.33f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f, 0.41f, 1.25f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f, 0.41f, 1.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f, 1.33f, 0.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.8053796f, -0.592759f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.0f, 1.33f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f, 0.41f, -1.25f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-2.0f, 0.41f, -1.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.0f, 1.33f, 0.0f);

    glNormal3f(0.0f, -0.318135f, 0.9480451f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f, 0.41f, 1.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f, -1.08f, 0.75f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f, -1.08f, 0.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f, 0.41f, 1.25f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f, -1.08f, 0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f, -1.08f, -0.75f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f, -1.08f, -0.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f, -1.08f, 0.75f);

    glNormal3f(0.0f, -0.318135f, -0.948045f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.0f, -1.08f, -0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.0f, 0.41f, -1.25f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f, 0.41f, -1.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.0f, -1.08f, -0.75f);
    glEnd();
}
