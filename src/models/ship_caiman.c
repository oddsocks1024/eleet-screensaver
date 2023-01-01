#include "eleet.h"

void init_caiman(int model)
{
    models[model].label = "          Caiman         ";
    models[model].thrust = 1;
    models[model].opengl = obj_caiman;
    models[model].sxl = -0.96f;
    models[model].sxh = 0.96f;
    models[model].syl = -0.40f;
    models[model].syh = -0.11f;
    models[model].szl = -2.23f;
    models[model].szh = -2.23f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_caiman(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    /* Wings ...*/
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.308632f, 0.9385801f, 0.1543161f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.18f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.22f, -0.55f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.74f, -0.55f, 0.74f);

    glNormal3f(0.3086322f, 0.9385801f, 0.1543161f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.74f, -0.55f, 0.74f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.22f, -0.55f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.18f, -2.22f);
    glEnd();
    /* End Wings */

    /* Body... */
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.827709f, 0.5568229f, -0.069602f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.74f, -0.55f, 0.74f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.55f, 0.74f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.18f, -2.22f);

    glNormal3f(0.8277098f, 0.5568229f, -0.069602f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.55f, 0.74f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.74f, -0.55f, 0.74f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.18f, -2.22f);

    glNormal3f(-0.766387f, 0.5155699f, 0.3831938f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.55f, 0.74f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.74f, -0.55f, 0.74f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.55f, 2.22f);

    glNormal3f(0.7663877f, 0.5155699f, 0.3831938f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.55f, 2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.74f, -0.55f, 0.74f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.55f, 0.74f);
    glEnd();
    /* End Body */

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    /* Rear */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.22f, -0.55f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.18f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.22f, -0.55f, -2.22f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.96f, -0.40f, -2.23f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.14f, -0.40f, -2.23f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.14f, -0.11f, -2.23f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.96f, -0.40f, -2.23f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.14f, -0.11f, -2.23f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.14f, -0.40f, -2.23f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.22f, -0.55f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.55f, 2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.22f, -0.55f, -2.22f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_WINDOW]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.7619047f, 0.5238095f, 0.3809523f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.25f, -0.27f, 1.40f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.47f, -0.27f, 0.96f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.25f, 0.05f, 0.96f);

    glNormal3f(-0.761904f, 0.5238095f, 0.3809523f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.25f, 0.05f, 0.96f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.47f, -0.27f, 0.96f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.25f, -0.27f, 1.40f);
    glEnd();
}
