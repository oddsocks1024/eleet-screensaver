#include "eleet.h"

void init_gecko(int model)
{
    models[model].label = "          Gecko          ";
    models[model].thrust = 1;
    models[model].opengl = obj_gecko;
    models[model].sxl = -0.66f;
    models[model].sxh = 0.66f;
    models[model].syl = -0.46f;
    models[model].syh = 0.26f;
    models[model].szl = -0.76f;
    models[model].szh = -0.76f;
    models[model].ixl = -0.03f;
    models[model].ixh = 0.03f;
    models[model].iyl = -0.02f;
    models[model].iyh = 0.02f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_gecko(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.9861631f, 0.1657774f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.53f, 0.26f, -0.76f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.53f, 0.26f, -0.76f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.33f, -0.13f, 1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.33f, -0.13f, 1.56f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.0847064f, 0.9813994f, 0.1722789f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.53f, 0.26f, -0.76f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.33f, -0.13f, 1.56f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.2f, 0.0f, -0.1f);

    glNormal3f(0.2155689f, -0.962015f, 0.1675012f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.2f, 0.0f, -0.1f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.33f, -0.13f, 1.56f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.66f, -0.46f, -0.76f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, -0.990034f, 0.1408238f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.33f, -0.13f, 1.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.33f, -0.13f, 1.56f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.66f, -0.46f, -0.76f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.66f, -0.46f, -0.76f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.215568f, -0.962015f, 0.1675012f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.2f, 0.0f, -0.1f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.66f, -0.46f, -0.76f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.33f, -0.13f, 1.56f);

    glNormal3f(-0.084706f, 0.9813994f, 0.1722789f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.33f, -0.13f, 1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.53f, 0.26f, -0.76f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.2f, 0.0f, -0.1f);

    glNormal3f(-0.375819f, 0.0678562f, -0.924205f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.2f, 0.0f, -0.1f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.53f, 0.26f, -0.76f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.66f, -0.46f, -0.76f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.53f, 0.26f, -0.76f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.53f, 0.26f, -0.76f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.66f, -0.46f, -0.76f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.66f, -0.46f, -0.76f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.3758192f, 0.0678562f, -0.924205f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.2f, 0.0f, -0.1f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.66f, -0.46f, -0.76f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.53f, 0.26f, -0.76f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, -0.990191f, 0.1397202f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.26f, -0.20f, 1.1f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.26f, -0.43f, -0.53f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.23f, -0.43f, -0.53f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.23f, -0.20f, 1.1f);

    glNormal3f(0.0f, -0.990191f, 0.1397202f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.23f, -0.20f, 1.1f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.23f, -0.43f, -0.53f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.26f, -0.43f, -0.53f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.26f, -0.20f, 1.1f);
    glEnd();
}
