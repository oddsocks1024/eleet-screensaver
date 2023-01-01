#include "eleet.h"

void init_hognose(int model)
{
    models[model].label = "         Hognose         ";
    models[model].thrust = 1;
    models[model].opengl = obj_hognose;
    models[model].sxl = -0.96f;
    models[model].sxh = 0.96f;
    models[model].syl = -0.57f;
    models[model].syh = 0.32f;
    models[model].szl = 1.47f;
    models[model].szh = 1.98f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.02f;
    models[model].iyh = 0.05f;
    models[model].izl = 0.1f;
    models[model].izh = 0.01f;
}

void obj_hognose(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.383881f, 0.4624711f, 0.7992219f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.89f, 1.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.53f, -0.38f, 1.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.89f, 2.24f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.381921f, 0.4594990f, 0.8018708f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-0.19f, 0.32f, 1.47f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-0.96f, -0.32f, 1.47f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-0.19f, -0.57f, 1.98f);

    glNormal3f(0.3819212f, 0.4594990f, 0.8018708f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.19f, -0.57f, 1.98f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.96f, -0.32f, 1.47f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.19f, 0.32f, 1.47f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.3838812f, 0.4624711f, 0.7992219f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.89f, 2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.53f, -0.38f, 1.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.89f, 1.21f);
    glEnd();



    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5936304f, 0.7151611f, -0.368981f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.53f, -0.38f, 1.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.89f, -2.24f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.89f, 1.21f);

    glNormal3f(-0.593630f, 0.7151611f, -0.368981f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.89f, -2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.53f, -0.38f, 1.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.89f, 1.21f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.316227f, -0.948683f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.89f, 2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.53f, -0.38f, 1.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.89f, -2.24f);

    glNormal3f(0.3162277f, -0.948683f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.89f, 2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.89f, -2.24f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.53f, -0.38f, 1.21f);
    glEnd();
}
