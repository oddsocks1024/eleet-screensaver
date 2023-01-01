#include "eleet.h"

void init_zarch(int model)
{
    models[model].label = "          Zarch          ";
    models[model].thrust = 1;
    models[model].opengl = obj_zarch;
    models[model].sxl = -0.45f;
    models[model].sxh = 0.45f;
    models[model].syl = -0.451f;
    models[model].syh = -0.451f;
    models[model].szl = -0.45f;
    models[model].szh =  0.90f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.1f;
    models[model].iyh = -0.01f;
    models[model].izl = -0.01f;
    models[model].izh = 0.01f;
}

void obj_zarch(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.100781f, 0.7975102f, -0.594828f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.90f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.45f, -1.81f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.81f, 0.0f, -0.90f);

    glNormal3f(0.1007811f, 0.7975102f, -0.594828f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.90f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.81f, 0.0f, -0.90f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.45f, -1.81f);

    glNormal3f(-0.511696f, 0.8375453f, 0.1915327f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.90f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.81f, 0.0f, -0.90f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.36f, -0.45f, 2.27f);

    glNormal3f(0.0f, 0.8594909f, 0.5111509f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.90f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.36f, -0.45f, 2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.36f, -0.45f, 2.27f);

    glNormal3f(0.5116962f, 0.8375453f, 0.1915327f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.90f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.36f, -0.45f, 2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.81f, 0.0f, -0.90f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.284887f, -0.953845f, -0.094962f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.45f, -1.81f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.36f, -0.45f, 2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.81f, 0.0f, -0.90f);

    glNormal3f(0.2848874f, -0.953845f, -0.094962f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.45f, -1.81f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.81f, 0.0f, -0.90f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.36f, -0.45f, 2.27f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.45f, -1.81f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.36f, -0.45f, 2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.36f, -0.45f, 2.27f);
    glEnd();

    /* Exhaust */
    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.0f, -0.451f, -0.45f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.45f, -0.451f, 0.90f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-0.45f, -0.451f, 0.90f);
    glEnd();
    glEnable(GL_LIGHTING);
}
