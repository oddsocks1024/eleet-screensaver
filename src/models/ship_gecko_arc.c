#include "eleet.h"

void init_gecko_arc(int model)
{
    models[model].label = "        Gecko TII        ";
    models[model].thrust = 1;
    models[model].opengl = obj_gecko_arc;
    models[model].sxl = -1.66f;
    models[model].sxh = 1.66f;
    models[model].syl = -0.18f;
    models[model].syh = 0.18f;
    models[model].szl = -1.71f;
    models[model].szh = -1.49f;
    models[model].ixl = -0.05f;
    models[model].ixh = 0.05f;
    models[model].iyl = -0.03f;
    models[model].iyh = 0.03f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_gecko_arc(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9891315f, 0.1470330f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.11f, 0.55f, -1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.11f, 0.55f, -1.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.55f, 0.0f, 1.85f);

    glNormal3f(0.0f, 0.9891315f, 0.1470330f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.55f, 0.0f, 1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.55f, 0.0f, 1.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.55f, -1.85f);

    glNormal3f(0.0f, -0.989131f, 0.1470330f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.55f, 0.0f, 1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.55f, 0.0f, 1.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.11f, -0.55f, -1.85f);

    glNormal3f(0.0f, -0.989131f, 0.1470330f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.11f, -0.55f, -1.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, -0.55f, -1.85f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.55f, 0.0f, 1.85f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.989131f, 0.1470330f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.18f, -0.51f, -1.48f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, -0.51f, -1.48f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.18f, -0.18f, 0.74f);

    glNormal3f(0.0f, -0.989131f, 0.1470330f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.18f, -0.18f, 0.74f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, -0.51f, -1.48f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.18f, -0.51f, -1.48f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.554700f, 0.0f, -0.832050f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.11f, 0.55f, -1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.11f, -0.55f, -1.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.22f, 0.0f, -1.11f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5547001f, 0.0f, -0.832050f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.22f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.11f, -0.55f, -1.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.55f, -1.85f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.3327505f, 0.9241390f, 0.1877342f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.11f, 0.55f, -1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.55f, 0.0f, 1.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.22f, 0.0f, -1.11f);

    glNormal3f(-0.332750f, 0.9241390f, 0.1877342f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.11f, 0.55f, -1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.22f, 0.0f, -1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.55f, 0.0f, 1.85f);

    glNormal3f(-0.332750f, -0.924139f, 0.1877342f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.11f, -0.55f, -1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.55f, 0.0f, 1.85f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.22f, 0.0f, -1.11f);

    glNormal3f(0.3327505f, -0.924139f, 0.1877342f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.22f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.55f, 0.0f, 1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.11f, -0.55f, -1.85f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.55f, -1.85f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.11f, -0.55f, -1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.11f, -0.55f, -1.85f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.11f, -0.55f, -1.85f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.11f, 0.55f, -1.85f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.11f, 0.55f, -1.85f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.55f, 0.37f, -1.86f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.55f, -0.37f, -1.86f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.55f, -0.37f, -1.86f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.55f, 0.37f, -1.86f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.554700f, 0.0f, -0.832050f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.66f, 0.0f, -1.49f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.33f, 0.18f, -1.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.33f, -0.18f, -1.71f);

    glNormal3f(0.5547001f, 0.0f, -0.832050f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.66f, 0.0f, -1.49f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.33f, -0.18f, -1.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.33f, 0.18f, -1.71f);
    glEnd();
    glEnable(GL_LIGHTING);
}
