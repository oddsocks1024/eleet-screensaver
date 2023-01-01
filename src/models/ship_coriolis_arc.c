#include "eleet.h"

void init_coriolis_arc(int model)
{
    models[model].label = "  Coriolis Station TII   ";
    models[model].thrust = 0;
    models[model].opengl = obj_coriolis_arc;
}

void obj_coriolis_arc(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.02f, 2.26f, 0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.02f, 2.16f, 0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, 2.26f, 0.14f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.02f, 2.26f, 0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.02f, 2.16f, 0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, 2.16f, 0.14f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.13f, 2.14f, -0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.20f, 2.14f, -0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.28f, 2.06f, -0.14f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.01f, 2.14f, -0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.05f, 2.14f, -0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.13f, 2.06f, -0.14f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.15f, 2.14f, -0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.07f, 2.14f, -0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.06f, -0.14f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.28f, 2.14f, -0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.20f, 2.14f, -0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.13f, 2.06f, -0.14f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.28f, 2.06f, -0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.20f, 2.06f, -0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.13f, 2.14f, -0.14f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.13f, 2.06f, -0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.05f, 2.06f, -0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.01f, 2.14f, -0.14f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 2.06f, -0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.07f, 2.06f, -0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.15f, 2.14f, -0.14f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.13f, 2.06f, -0.14f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.20f, 2.06f, -0.14f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.28f, 2.14f, -0.14f);
    glEnd();
    /* End Docking Bay */

    glBegin(GL_TRIANGLES);
    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.27f, 0.0f, 2.27f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, -2.27f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.27f, 2.27f, 0.0f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, 2.27f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.27f, -2.27f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.27f, 0.0f, -2.27f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.27f, 0.0f, -2.27f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, -2.27f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, 2.27f, 0.0f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, 2.27f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, -2.27f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.27f, 0.0f, 2.27f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, 0.0f, -2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.27f, 0.0f, -2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -2.27f, -2.27f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.27f, -2.27f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, 0.0f, -2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, 0.0f, -2.27f);

    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, 0.0f, 2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -2.27f, 2.27f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, 0.0f, 2.27f);

    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.27f, 0.0f, 2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.27f, 2.27f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, 0.0f, 2.27f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, -2.27f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.27f, -2.27f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -2.27f, 2.27f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, -2.27f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -2.27f, -2.27f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, -2.27f, 0.0f);

    /* Drawn CW : Docking Bay Face */
    glNormal3f(-0.5773502f, 0.577350f, -0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.45f, 2.27f, 0.15f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.27f, 2.27f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.45f, 2.27f, -0.15f);

    /* Drawn CW : Docking Bay Face */
    glNormal3f(-0.5773502f, 0.577350f, -0.5773502f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.45f, 2.27f, 0.15f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.45f, 2.27f, -0.15f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, 2.27f, 0.0f);

    /* Drawn CW : Docking Bay Face */
    glNormal3f(-0.5773502f, 0.577350f, -0.5773502f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.45f, 2.27f, 0.15f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, 2.27f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 2.27f, 2.27f);

    /* Drawn CW : Docking Bay Face */
    glNormal3f(-0.5773502f, 0.577350f, -0.5773502f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.27f, 2.27f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.45f, 2.27f, 0.15f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 2.27f, 2.27f);

    /* Drawn CW : Docking Bay Face */
    glNormal3f(-0.5773502f, 0.577350f, -0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, 2.27f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 2.27f, -2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.45f, 2.27f, -0.15f);

    /* Drawn CW : Docking Bay Face */
    glNormal3f(-0.5773502f, 0.577350f, -0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 2.27f, -2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, 2.27f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.45f, 2.27f, -0.15f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5773502f, -0.577350f, 0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, 0.0f, 2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -2.27f, 2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.27f, -2.27f, 0.0f);

    glNormal3f(-0.577350f, 0.5773502f, 0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, -2.27f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -2.27f, 2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.27f, 0.0f, 2.27f);

    glNormal3f(-0.577350f, 0.5773502f, 0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, 0.0f, 2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 2.27f, 2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.27f, 2.27f, 0.0f);

    glNormal3f(0.5773502f, 0.5773502f, 0.5773502f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, 2.27f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 2.27f, 2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.27f, 0.0f, 2.27f);

    glNormal3f(-0.577350f, -0.577350f, -0.577350f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, 0.0f, -2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -2.27f, -2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.27f, -2.27f, 0.0f);

    glNormal3f(0.5773502f, 0.5773502f, -0.577350f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, 0.0f, -2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 2.27f, -2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.27f, 2.27f, 0.0f);

    glNormal3f(0.5773502f, -0.577350f, -0.577350f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.27f, 0.0f, -2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.27f, -2.27f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -2.27f, -2.27f);

    glNormal3f(-0.577350f, 0.5773502f, -0.577350f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.27f, 0.0f, -2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.27f, 2.27f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.27f, -2.27f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.45f, 2.27f, 0.15f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 2.27f, 2.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.45f, 2.27f, 0.15f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 2.27f, -2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.45f, 2.27f, -0.15f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.45f, 2.27f, -0.15f);
    glEnd();
}
