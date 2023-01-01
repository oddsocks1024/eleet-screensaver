#include "eleet.h"

void init_ferdelance_arc(int model)
{
    models[model].label = "     Fer De Lance TII    ";
    models[model].thrust = 1;
    models[model].opengl = obj_ferdelance_arc;
    models[model].sxl = -0.18f;
    models[model].sxh = 0.18f;
    models[model].syl = -0.27f;
    models[model].syh = 0.09f;
    models[model].szl = -2.23f;
    models[model].szh = -2.23f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_ferdelance_arc(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.044900f, 0.9720397f, 0.2304836f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.46f, -1.66f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.29f, 0.27f, -1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.46f, 2.22f);

    glNormal3f(0.0449004f, 0.9720397f, 0.2304836f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.46f, -1.66f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.46f, 2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.29f, 0.27f, -1.11f);

    glNormal3f(-0.932476f, 0.0f, 0.3612297f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.29f, 0.27f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.29f, -0.46f, -1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.46f, 2.22f);

    glNormal3f(0.9324768f, 0.0f, 0.3612297f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.46f, 2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.29f, -0.46f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.29f, 0.27f, -1.11f);

    glNormal3f(0.1828086f, 0.9789668f, -0.090580f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.29f, 0.27f, -1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.74f, 0.27f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.46f, -1.66f);

    glNormal3f(-0.182808f, 0.9789668f, -0.090580f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.74f, 0.27f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.29f, 0.27f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.46f, -1.66f);

    glNormal3f(0.0f, 0.9469787f, -0.321296f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.74f, 0.27f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.74f, 0.27f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.46f, -1.66f);

    glNormal3f(0.8960358f, 0.0f, -0.443981f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.29f, 0.27f, -1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.74f, -0.46f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.74f, 0.27f, -2.22f);

    glNormal3f(0.8960358f, 0.0f, -0.443981f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.29f, -0.46f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.74f, -0.46f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.29f, 0.27f, -1.11f);

    glNormal3f(-0.896035f, 0.0f, -0.443981f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.29f, -0.46f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.29f, 0.27f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.74f, 0.27f, -2.22f);

    glNormal3f(-0.896035f, 0.0f, -0.443981f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.74f, -0.46f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.29f, -0.46f, -1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.74f, 0.27f, -2.22f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.74f, 0.27f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.74f, 0.27f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.74f, -0.46f, -2.22f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.74f, -0.46f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.74f, 0.27f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.74f, -0.46f, -2.22f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.18f, 0.09f, -2.23f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.18f, -0.27f, -2.23f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.18f, -0.27f, -2.23f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.18f, 0.09f, -2.23f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.46f, 2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.29f, -0.46f, -1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.74f, -0.46f, -2.22f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.46f, 2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.74f, -0.46f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.74f, -0.46f, -2.22f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.29f, -0.46f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.46f, 2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.74f, -0.46f, -2.22f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.027694f, 0.9719459f, 0.2335683f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.18f, 0.38f, -1.29f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.92f, 0.27f, -0.92f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.18f, -0.24f, 1.29f);

    glNormal3f(0.0276942f, 0.9719459f, 0.2335683f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.92f, 0.27f, -0.92f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.18f, 0.38f, -1.29f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.18f, -0.24f, 1.29f);
    glEnd();
}
