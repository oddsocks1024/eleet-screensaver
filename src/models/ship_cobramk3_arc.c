#include "eleet.h"

void init_cobramk3_arc(int model)
{
    models[model].label = "        Cobra Mk3        ";
    models[model].thrust = 1;
    models[model].opengl = obj_cobramk3_arc;
    models[model].sxl = -1.70f;
    models[model].sxh = 1.70f;
    models[model].syl = -0.11f;
    models[model].syh = 0.11f;
    models[model].szl = -1.04f;
    models[model].szh = -1.04f;
    models[model].ixl = -0.03f;
    models[model].ixh = 0.03f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_cobramk3_arc(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.3132551f, 0.9044715f, 0.2894866f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.56f, -0.11f, 1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.81f, 0.11f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.34f, 0.22f);

    glNormal3f(-0.313255f, 0.9044715f, 0.2894866f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.81f, 0.11f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.56f, -0.11f, 1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.34f, 0.22f);

    glNormal3f(0.1260581f, 0.9920228f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.81f, 0.11f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.34f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.34f, 0.22f);

    glNormal3f(-0.126058f, 0.9920228f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.34f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.81f, 0.11f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.34f, 0.22f);

    glNormal3f(0.2553859f, 0.9320557f, 0.2570022f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.15f, -0.11f, -0.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.81f, 0.11f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.56f, -0.11f, 1.02f);

    glNormal3f(-0.255385f, 0.9320557f, 0.2570022f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(-1.81f, 0.11f, -1.02f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-2.15f, -0.11f, -0.56f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-0.56f, -0.11f, 1.02f);

    glNormal3f(0.5432512f, 0.8395701f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.15f, -0.11f, -0.56f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.15f, -0.11f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.81f, 0.11f, -1.02f);

    glNormal3f(-0.543251f, 0.8395701f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.15f, -0.11f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.15f, -0.11f, -0.56f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.81f, 0.11f, -1.02f);

    glNormal3f(0.0f, 0.8715755f, 0.4902612f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.34f, 0.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.56f, -0.11f, 1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.56f, -0.11f, 1.02f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.56f, -0.34f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.15f, -0.11f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.81f, 0.11f, -1.02f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.15f, -0.11f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.56f, -0.34f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.81f, 0.11f, -1.02f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.56f, -0.34f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.81f, 0.11f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.34f, -1.02f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.56f, -0.34f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.56f, -0.34f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.34f, -1.02f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.56f, -0.34f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.34f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.81f, 0.11f, -1.02f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-1.70f, 0.0f, -1.04f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-1.36f, 0.11f, -1.04f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-1.36f, -0.11f, -1.04f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(1.36f, 0.11f, -1.04f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(1.70f, 0.0f, -1.04f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(1.36f, -0.11f, -1.04f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.11f, -0.22f, -1.04f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.11f, 0.11f, -1.04f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.68f, 0.0f, -1.04f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.68f, -0.11f, -1.04f);

    /* Drawn CW : Exhaust */
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.11f, -0.22f, -1.04f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.11f, 0.11f, -1.04f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.68f, 0.0f, -1.04f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.68f, -0.11f, -1.04f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.993704f, 0.1120352f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.56f, -0.34f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.56f, -0.34f, -1.02f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.56f, -0.11f, 1.02f);

    glNormal3f(0.0f, -0.993704f, 0.1120352f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.56f, -0.11f, 1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.56f, -0.11f, 1.02f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.56f, -0.34f, -1.02f);

    glNormal3f(0.1422809f, -0.983594f, 0.1108954f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.56f, -0.11f, 1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.56f, -0.34f, -1.02f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.15f, -0.11f, -1.02f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.15f, -0.11f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.15f, -0.11f, -0.56f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.56f, -0.11f, 1.02f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.15f, -0.11f, -0.56f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.15f, -0.11f, -1.02f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.56f, -0.11f, 1.02f);

    glNormal3f(-0.142280f, -0.983594f, 0.1108954f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.15f, -0.11f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.56f, -0.34f, -1.02f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.56f, -0.11f, 1.02f);
    glEnd();
}
