#include "eleet.h"

void init_cobramk1(int model)
{
    models[model].label = "        Cobra Mk1        ";
    models[model].thrust = 0;
    models[model].opengl = obj_cobramk1;
}

void obj_cobramk1(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.197797f, -0.959637f, 0.1999305f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.56f, -0.03f, 1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.06f, 0.0f, 0.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.68f, -0.37f, -1.18f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(-0.147115f, 0.9781176f, 0.1471152f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.37f, -0.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, 0.37f, -1.18f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-2.06f, 0.0f, 0.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.56f, -0.03f, 1.56f);

    glNormal3f(0.0f, -0.992388f, 0.1231431f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.56f, -0.03f, 1.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.68f, -0.37f, -1.18f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.68f, -0.37f, -1.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.56f, -0.03f, 1.56f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9745796f, 0.2240412f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.56f, -0.03f, 1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.37f, -0.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.56f, -0.03f, 1.56f);

    glNormal3f(0.1977974f, -0.959637f, 0.1999305f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.56f, -0.03f, 1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.68f, -0.37f, -1.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.06f, 0.0f, 0.22f);

    glNormal3f(-0.688607f, 0.6327745f, -0.354141f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.06f, 0.0f, 0.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, 0.37f, -1.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.68f, -0.37f, -1.18f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.1688801f, 0.9710607f, 0.1688801f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, 0.37f, -1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.37f, -0.18f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.56f, -0.03f, 1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.06f, 0.0f, 0.22f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, 0.37f, -1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, 0.37f, -1.18f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.68f, -0.37f, -1.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.68f, -0.37f, -1.18f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.37f, -0.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f, 0.37f, -1.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, 0.37f, -1.18f);

    glNormal3f(0.6886076f, 0.6327745f, -0.354141f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, 0.37f, -1.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.06f, 0.0f, 0.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.68f, -0.37f, -1.18f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, -0.05f, 1.87f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.02f, -0.00f, 1.87f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.02f, -0.00f, 1.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.02f, -0.05f, 1.56f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, -0.00f, 1.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.02f, -0.00f, 1.87f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.02f, -0.00f, 1.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.02f, -0.00f, 1.56f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.02f, -0.00f, 1.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.02f, -0.00f, 1.87f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.02f, -0.05f, 1.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.02f, -0.05f, 1.56f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.02f, -0.05f, 1.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.02f, -0.05f, 1.87f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.02f, -0.05f, 1.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.02f, -0.05f, 1.56f);
    glEnd();
}
