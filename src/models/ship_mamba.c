#include "eleet.h"

void init_mamba(int model)
{
    models[model].label = "          Mamba          ";
    models[model].thrust = 1;
    models[model].opengl = obj_mamba;
    models[model].sxl = -0.28f;
    models[model].sxh = 0.28f;
    models[model].syl = -0.14f;
    models[model].syh = 0.14f;
    models[model].szl = -1.15f;
    models[model].szh = -1.15f;
    models[model].ixl = -0.05f;
    models[model].ixh = 0.05f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_mamba(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.996665f, 0.0815983f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.28f, -0.28f, -1.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.28f, -0.28f, -1.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.28f);

    glNormal3f(0.0f, 0.9966652f, 0.0815983f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.14f, 0.28f, -1.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.14f, 0.28f, -1.14f);

    glNormal3f(-0.430565f, 0.8765082f, 0.2152827f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.28f, -0.28f, -1.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.14f, 0.28f, -1.14f);

    glNormal3f(0.4305654f, 0.8765082f, 0.2152827f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.14f, 0.28f, -1.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.28f, -0.28f, -1.14f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.28f, -0.28f, -1.14f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.14f, 0.28f, -1.14f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.14f, 0.28f, -1.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.28f, -0.28f, -1.14f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.996327f, 0.0856219f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.85f, -0.25f, -0.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.57f, -0.25f, -0.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.71f, -0.14f, 0.57f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_WINDOW]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.9957012f, 0.0926233f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.28f, 0.10f, 1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.14f, 0.14f, 0.57f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.14f, 0.14f, 0.57f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.28f, 0.10f, 1.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.996327f, 0.0856219f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.57f, -0.25f, -0.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.85f, -0.25f, -0.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.71f, -0.14f, 0.57f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.28f, -0.14f, -1.15f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.28f, -0.14f, -1.15f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.28f, 0.14f, -1.15f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.28f, 0.14f, -1.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(1.14f, 0.14f, -1.15f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(1.35f, 0.0f, -1.15f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(1.28f, -0.14f, -1.15f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-1.28f, -0.14f, -1.15f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-1.35f, 0.0f, -1.15f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-1.14f, 0.14f, -1.15f);
    glEnd();
    glEnable(GL_LIGHTING);
}
