#include "eleet.h"

void init_mamba_arc(int model)
{
    models[model].label = "        Mamba TII        ";
    models[model].thrust = 1;
    models[model].opengl = obj_mamba_arc;
    models[model].sxl = -0.56f;
    models[model].sxh = 0.56f;
    models[model].syl = -0.24f;
    models[model].syh = 0.16f;
    models[model].szl = -2.21f;
    models[model].szh = -2.21f;
    models[model].ixl = -0.05f;
    models[model].ixh = 0.05f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_mamba_arc(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.596284f, 0.7453559f, 0.2981423f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.2f, -0.4f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.4f, 2.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.2f, 0.4f, -2.2f);

    glNormal3f(0.0f, 0.9838699f, 0.1788854f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.2f, 0.4f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.2f, 0.4f, -2.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.4f, 2.2f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_WINDOW]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9875803f, 0.1571150f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.22f, -0.07f, 0.44f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.22f, -0.07f, 0.44f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.1f, 0.0f, 0.0f);

    glNormal3f(0.0f, 0.9875803f, 0.1571150f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.1f, 0.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.1f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.22f, -0.07f, 0.44f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5962847f, 0.7453559f, 0.2981423f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.4f, 2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.2f, -0.4f, -2.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.2f, 0.4f, -2.2f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.2f, -0.4f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.2f, -0.4f, -2.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.2f, 0.4f, -2.2f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.2f, 0.4f, -2.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.2f, 0.4f, -2.2f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.2f, -0.4f, -2.2f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-1.2f, 0.16f, -2.21f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-1.2f, -0.16f, -2.21f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-1.52f, -0.08f, -2.21f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(1.2f, -0.16f, -2.21f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(1.2f, 0.16f, -2.21f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(1.52f, -0.08f, -2.21f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.56f, 0.16f, -2.21f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.56f, 0.16f, -2.21f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.56f, -0.24f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.56f, -0.24f, -2.21f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.2f, -0.4f, -2.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.4f, 2.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.2f, -0.4f, -2.2f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.6f, -0.401f, -1.4f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.4f, -0.401f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.8f, -0.401f, -1.4f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.8f, -0.401f, -1.4f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, -0.401f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.6f, -0.401f, -1.4f);
    glEnd();
}
