#include "eleet.h"

void init_delta(int model)
{
    models[model].label = "          Delta          ";
    models[model].thrust = 1;
    models[model].opengl = obj_delta;
    models[model].sxl = -1.21f;
    models[model].sxh = 1.21f;
    models[model].syl = -0.71f;
    models[model].syh = 1.42f;
    models[model].szl = -1.42f;
    models[model].szh = -1.42f;
    models[model].ixl = -0.02f;
    models[model].ixh = 0.02f;
    models[model].iyl = -0.02f;
    models[model].iyh = 0.02f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_delta(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.857998352875847f, 0.487407515013979f, 0.162088681807927f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.0f, 2.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 1.42f, -1.42f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.21f, -0.71f, -1.42f);

    glNormal3f(0.857998352875847f, 0.487407515013979f, 0.162088681807927f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.21f, -0.71f, -1.42f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 1.42f, -1.42f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.85f);

    glNormal3f(0.0f, -0.986456290585571f, 0.164024348083315f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.21f, -0.71f, -1.42f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.21f, -0.71f, -1.42f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.85f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.0f, 1.42f, -1.42f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(1.21f, -0.71f, -1.42f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-1.21f, -0.71f, -1.42f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.85f, 0.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.14f, -1.42f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 1.42f, -1.42f);

    glNormal3f(0.552356345196515f, 0.833379748892986f, 0.0195105626831134f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.35f, -0.21f, 1.57f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.07f, -1.28f, -1.42f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.21f, -0.71f, -1.42f);

    glNormal3f(0.552356345196515f, -0.833379748892986f, -0.0195105626831134f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.35f, -0.21f, 1.57f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.07f, -1.28f, -1.42f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.21f, -0.71f, -1.42f);
    glEnd();
}
