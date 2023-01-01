#include "eleet.h"

void init_ferdelance(int model)
{
    models[model].label = "      Fer De Lance       ";
    models[model].thrust = 1;
    models[model].opengl = obj_ferdelance;
    models[model].sxl = -0.25f;
    models[model].sxh = 0.25f;
    models[model].syl = -0.29f;
    models[model].syh = 0.04f;
    models[model].szl = -1.08f;
    models[model].szh = -1.08f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_ferdelance(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.9703869f, 0.2415555f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.83f, 0.29f, -0.08f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.29f, 2.25f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.83f, 0.29f, -0.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.37f, -0.41f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.942016f, 0.0f, 0.3355679f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.29f, 2.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.83f, 0.29f, -0.08f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.83f, -0.29f, -0.08f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(-0.865031f, 0.0f, -0.501718f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.25f, -0.29f, -1.08f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.83f, -0.29f, -0.08f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.83f, 0.29f, -0.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.25f, 0.04f, -1.08f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.25f, -0.29f, -1.08f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.25f, -0.29f, -1.08f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.25f, 0.04f, -1.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.25f, 0.04f, -1.08f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(0.8650311f, 0.0f, -0.501718f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.83f, -0.29f, -0.08f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.25f, -0.29f, -1.08f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.25f, 0.04f, -1.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.83f, 0.29f, -0.08f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.9420160f, 0.0f, 0.3355679f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.83f, -0.29f, -0.08f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.83f, 0.29f, -0.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.29f, 2.25f);

    glNormal3f(-0.230113f, 0.9043099f, -0.359543f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.83f, 0.29f, -0.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.37f, -0.41f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.25f, 0.04f, -1.08f);

    glNormal3f(0.0f, 0.8970890f, -0.441849f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.25f, 0.04f, -1.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.37f, -0.41f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.25f, 0.04f, -1.08f);

    glNormal3f(0.2301133f, 0.9043099f, -0.359543f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.25f, 0.04f, -1.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.37f, -0.41f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.83f, 0.29f, -0.08f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.83f, -0.29f, -0.08f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.0f, -0.29f, 2.25f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-0.83f, -0.29f, -0.08f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-0.25f, -0.29f, -1.08f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.25f, -0.29f, -1.08f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.3f, -0.41f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.29f, -0.3f, 0.91f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.29f, -0.3f, 0.91f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0129321f, 0.9699090f, 0.2431238f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.54f, 0.19f, 0.37f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.06f, -0.23f, 2.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.33f, 0.30f, -0.08f);

    glNormal3f(-0.012932f, 0.9699090f, 0.2431238f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.33f, 0.30f, -0.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.06f, -0.23f, 2.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.54f, 0.19f, 0.37f);
    glEnd();
}
