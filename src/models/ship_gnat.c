#include "eleet.h"

void init_gnat(int model)
{
    models[model].label = "          Gnat           ";
    models[model].thrust = 1;
    models[model].opengl = obj_gnat;
    models[model].sxl = -2.22f;
    models[model].sxh = 2.22f;
    models[model].syl = -0.55f;
    models[model].syh = 0.55f;
    models[model].szl = 0.35;
    models[model].szh = 0.75f;
    models[model].ixl = -0.15f;
    models[model].ixh = 0.15f;
    models[model].iyl = -0.03f;
    models[model].iyh = 0.03f;
    models[model].izl = 0.1f;
    models[model].izh = 0.01f;
}

void obj_gnat(void)
{
    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.3501985f, 0.0f, 0.9366755f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.0f, -0.55f, 0.75f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(2.22f, 0.0f, -0.08f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.0f, 0.55f, 0.75f);

    /* Drawn CW : Exhaust */
    glNormal3f(-0.3501985f, 0.0f, 0.936675f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.0f, -0.55f, 0.75f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-2.22f, 0.0f, -0.08f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.0f, 0.55f, 0.75f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.2404775f, 0.9706547f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.55f, 0.75f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.22f, 0.0f, -0.08f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.22f, 0.0f, -1.47f);

    glNormal3f(0.0f, 0.9706547f, -0.240477f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.55f, 0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.22f, 0.0f, -1.47f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.22f, 0.0f, -1.47f);
    glEnd();



    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.240477f, 0.9706547f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.22f, 0.0f, -1.47f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.22f, 0.0f, -0.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.55f, 0.75f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.970654f, -0.240477f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.55f, 0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.22f, 0.0f, -1.47f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.22f, 0.0f, -1.47f);

    glNormal3f(0.2404775f, -0.970654f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.22f, 0.0f, -1.47f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.22f, 0.0f, -0.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.55f, 0.75f);

    glNormal3f(-0.240477f, -0.970654f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.55f, 0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.22f, 0.0f, -0.08f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.22f, 0.0f, -1.47f);
    glEnd();
}
