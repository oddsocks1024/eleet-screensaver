#include "eleet.h"

void init_shuttle(int model)
{
    models[model].label = "         Shuttle         ";
    models[model].thrust = 1;
    models[model].opengl = obj_shuttle;
    models[model].sxl = -0.41f;
    models[model].sxh = 0.41f;
    models[model].syl = -0.16f;
    models[model].syh = 0.25f;
    models[model].szl = -2.28f;
    models[model].szh = -2.28f;
    models[model].ixl = -0.001f;
    models[model].ixh = 0.001f;
    models[model].iyl = -0.001f;
    models[model].iyh = 0.001f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_shuttle(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.640762f, -0.640762f, 0.4229031f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -1.41f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.75f, 2.91f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.41f, 0.0f, 1.91f);

    glNormal3f(0.0f, -0.998199f, 0.0599879f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -1.41f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, -1.66f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.66f, -1.66f, -2.25f);

    glNormal3f(-0.672550f, -0.672550f, 0.3087911f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.41f, 0.0f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, -1.66f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -1.41f, 1.91f);

    glNormal3f(-0.998199f, 0.0f, 0.0599879f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.41f, 0.0f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, 1.66f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.66f, -1.66f, -2.25f);

    glNormal3f(-0.694546f, 0.6528734f, 0.3022611f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 1.5f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, 1.66f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.41f, 0.0f, 1.91f);

    glNormal3f(0.0f, 0.9992611f, 0.0384331f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 1.5f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.66f, 1.66f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.66f, 1.66f, -2.25f);

    glNormal3f(0.6755205f, 0.6755205f, 0.2955402f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.5f, 0.0f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.66f, 1.66f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 1.5f, 1.91f);

    glNormal3f(0.9992611f, 0.0f, 0.0384331f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.5f, 0.0f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.66f, -1.66f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.66f, 1.66f, -2.25f);

    glNormal3f(0.6528734f, -0.694546f, 0.3022611f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -1.41f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.66f, -1.66f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.5f, 0.0f, 1.91f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.66f, -1.66f, -2.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.66f, -1.66f, -2.25f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.66f, 1.66f, -2.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.66f, 1.66f, -2.25f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.396624f, 0.3728273f, 0.8388614f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.41f, 0.0f, 1.91f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.75f, 2.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 1.5f, 1.91f);

    glNormal3f(0.3762883f, 0.3762883f, 0.8466487f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 1.5f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.75f, 2.91f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.5f, 0.0f, 1.91f);

    glNormal3f(0.6172466f, -0.656645f, 0.4333859f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.5f, 0.0f, 1.91f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.75f, 2.91f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -1.41f, 1.91f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.25f, -2.28f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.41f, 0.0f, -2.28f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, -0.16f, -2.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.41f, 0.0f, -2.28f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_WINDOW]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.3898524f, 0.3898524f, 0.8342842f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.33f, 0.91f, 2.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.25f, -0.08f, 2.58f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.91f, 0.33f, 2.08f);

    glNormal3f(-0.410983f, 0.4109835f, 0.8137474f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.83f, 0.33f, 2.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.25f, -0.08f, 2.58f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.25f, 0.91f, 2.08f);
    glEnd();
}
