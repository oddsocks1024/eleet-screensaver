#include "eleet.h"

void init_griffin(int model)
{
    models[model].label = "         Griffin         ";
    models[model].thrust = 1;
    models[model].opengl = obj_griffin;
    models[model].sxl = -0.90f;
    models[model].sxh = 0.90f;
    models[model].syl = -0.24f;
    models[model].syh = 0.15f;
    models[model].szl = -0.5f;
    models[model].szh = -0.5f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_griffin(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(-0.325587f, 0.9387760f, 0.1126617f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.54f, 0.15f, -0.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, -0.45f, -0.5f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.45f, 0.0f, 1.01f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.22f, 0.40f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9406906f, 0.3392654f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.22f, 0.40f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.45f, 0.0f, 1.01f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.45f, 0.0f, 1.01f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(0.3193036f, 0.9419114f, 0.1041539f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.22f, 0.40f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.45f, 0.0f, 1.01f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, -0.45f, -0.5f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.54f, 0.15f, -0.5f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9969889f, -0.077543f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.54f, 0.15f, -0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.54f, 0.15f, -0.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.22f, 0.40f);

    glNormal3f(0.1505743f, -0.982318f, 0.1112569f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.45f, 0.0f, 1.01f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, -0.45f, -0.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.90f, -0.24f, -0.5f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, -0.45f, -0.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.54f, 0.15f, -0.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.90f, -0.24f, -0.5f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.54f, 0.15f, -0.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, -0.45f, -0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.90f, -0.24f, -0.5f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.54f, 0.15f, -0.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.54f, 0.15f, -0.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.90f, -0.24f, -0.5f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.90f, -0.24f, -0.5f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.150574f, -0.982318f, 0.1112569f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, -0.45f, -0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.45f, 0.0f, 1.01f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.90f, -0.24f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, -0.987603f, 0.1569700f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.90f, -0.24f, -0.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.45f, 0.0f, 1.01f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.45f, 0.0f, 1.01f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.90f, -0.24f, -0.5f);
    glEnd();
}
