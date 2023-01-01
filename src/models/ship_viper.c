#include "eleet.h"

void init_viper(int model)
{
    models[model].label = "          Viper          ";
    models[model].thrust = 1;
    models[model].opengl = obj_viper;
    models[model].sxl = -1.45f;
    models[model].sxh = 1.45f;
    models[model].syl = -0.36f;
    models[model].syh = 0.36f;
    models[model].szl = -1.1f;
    models[model].szh = -1.1f;
    models[model].ixl = -0.08f;
    models[model].ixh = 0.08f;
    models[model].iyl = -0.03f;
    models[model].iyh = 0.03f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_viper(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.09f, 0.72f, -1.09f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.09f, 0.72f, -1.09f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.72f, 1.09f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_POLICE]);
    glBegin(GL_QUADS);
    glNormal3f(-0.531354f, 0.8044116f, 0.2656772f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.09f, 0.72f, -1.09f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.18f, 0.0f, -1.09f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.0f, 3.27f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.72f, 1.09f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_POLICE2]);
    glBegin(GL_QUADS);
    glNormal3f(0.5313544f, 0.8044116f, 0.2656772f);
    glTexCoord2f(1.0f,0.0f);   glVertex3f(2.18f, 0.0f, -1.09f);
    glTexCoord2f(1.0f,1.0f);   glVertex3f(1.09f, 0.72f, -1.09f);
    glTexCoord2f(0.0f,1.0f);   glVertex3f(0.0f, 0.72f, 1.09f);
    glTexCoord2f(0.0f,0.0f);   glVertex3f(0.0f, 0.0f, 3.27f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_POLICE2]);
    glBegin(GL_QUADS);
    glNormal3f(-0.531354f, -0.804411f, 0.2656772f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, -0.72f, 1.09f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 3.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.18f, 0.0f, -1.09f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.09f, -0.72f, -1.09f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_POLICE]);
    glBegin(GL_QUADS);
    glNormal3f(0.5313544f, -0.804411f, 0.2656772f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, 0.0f, 3.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.72f, 1.09f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.09f, -0.72f, -1.09f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.18f, 0.0f, -1.09f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.72f, 1.09f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.09f, -0.72f, -1.09f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.09f, -0.72f, -1.09f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-2.18f, 0.0f, -1.09f);
    glTexCoord2f(0.75f,0.0f); glVertex3f(-1.09f, 0.72f, -1.09f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(1.09f, 0.72f, -1.09f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(2.18f, 0.0f, -1.09f);
    glTexCoord2f(0.25f,1.0f); glVertex3f(1.09f, -0.72f, -1.09f);
    glTexCoord2f(0.75f,1.0f); glVertex3f(-1.09f, -0.72f, -1.09f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-0.36f, 0.36f, -1.1f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-0.36f, -0.36f, -1.1f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-1.45f, 0.0f, -1.1f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(1.45f, 0.0f, -1.1f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.36f, -0.36f, -1.1f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.36f, 0.36f, -1.1f);
    glEnd();
    glEnable(GL_LIGHTING);
}
