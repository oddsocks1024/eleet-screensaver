#include "eleet.h"

void init_constrictor_arc(int model)
{
    models[model].label = "     Constrictor TII     ";
    models[model].thrust = 1;
    models[model].opengl = obj_constrictor_arc;
    models[model].sxl = -1.35f;
    models[model].sxh = 0.4f;
    models[model].syl = -0.1f;
    models[model].syh = 0.15f;
    models[model].szl = -2.27f;
    models[model].szh = -2.27f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_constrictor_arc(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.35f, -0.35f, 2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.1f, -0.35f, 1.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.1f, -0.35f, -2.25f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.6f, -0.35f, 2.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.35f, -0.35f, 2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.1f, -0.35f, -2.25f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.35f, -0.35f, -2.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.6f, -0.35f, 2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.1f, -0.35f, -2.25f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.35f, -0.35f, 1.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.6f, -0.35f, 2.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.35f, -0.35f, -2.25f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.1f, -0.37f, -1.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.85f, -0.37f, -1.75f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.85f, -0.37f, 1.0f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.15f, -0.37f, 1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.15f, -0.37f, -1.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, -0.37f, -1.75f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.35f, 0.35f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.35f, 0.35f, 0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.85f, 0.35f, 1.5f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.85f, 0.35f, 1.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.15f, 0.35f, 1.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.35f, 0.35f, -2.25f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.15f, 0.35f, 1.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.6f, 0.35f, -2.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.35f, 0.35f, -2.25f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.15f, 0.35f, 1.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.6f, 0.35f, 0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.6f, 0.35f, -2.25f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.15f, 0.39f, 0.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.85f, 0.39f, 0.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.35f, 0.39f, 1.25f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.15f, 0.37f, -1.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.85f, 0.37f, -1.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.35f, 0.37f, 0.75f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.1f, -0.35f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.35f, 0.35f, -2.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.35f, -0.35f, -2.25f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.35f, 0.35f, -2.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.6f, 0.35f, -2.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.35f, -0.35f, -2.25f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.6f, -0.1f, -2.27f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.35f, -0.1f, -2.27f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.1f, 0.15f, -2.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.4f, 0.15f, -2.27f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.7310552f, 0.6823182f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-0.85f, 0.35f, 1.5f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(-1.35f, -0.35f, 2.25f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(0.6f, -0.35f, 2.25f);

    glNormal3f(0.0f, 0.7310552f, 0.6823182f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(0.6f, -0.35f, 2.25f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(0.15f, 0.35f, 1.5f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-0.85f, 0.35f, 1.5f);

    glNormal3f(0.6823182f, 0.7310552f, 0.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(0.6f, 0.35f, -2.25f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(0.6f, 0.35f, 0.75f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(1.35f, -0.35f, 1.25f);

    glNormal3f(0.6823182f, 0.7310552f, 0.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(1.35f, -0.35f, 1.25f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(1.35f, -0.35f, -2.25f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(0.6f, 0.35f, -2.25f);

    glNormal3f(-0.682318f, 0.7310552f, 0.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-2.1f, -0.35f, 1.25f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(-1.35f, 0.35f, 0.75f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-1.35f, 0.35f, -2.25f);

    glNormal3f(-0.682318f, 0.7310552f, 0.0f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-1.35f, 0.35f, -2.25f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(-2.1f, -0.35f, -2.25f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-2.1f, -0.35f, 1.25f);

    glNormal3f(0.5760975f, 0.7406968f, 0.3456585f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(0.6f, 0.35f, 0.75f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(0.15f, 0.35f, 1.5f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(0.6f, -0.35f, 2.25f);

    glNormal3f(0.4911524f, 0.7893522f, 0.3683643f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(0.6f, -0.35f, 2.25f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(1.35f, -0.35f, 1.25f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(0.6f, 0.35f, 0.75f);

    glNormal3f(-0.535651f, 0.7652164f, 0.3571010f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-1.35f, -0.35f, 2.25f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(-0.85f, 0.35f, 1.5f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-1.35f, 0.35f, 0.75f);

    glNormal3f(-0.491152f, 0.7893522f, 0.3683643f);
    glTexCoord2f(1.0f,1.0f);glVertex3f(-1.35f, 0.35f, 0.75f);
    glTexCoord2f(0.0f,1.0f);glVertex3f(-2.1f, -0.35f, 1.25f);
    glTexCoord2f(0.0f,0.0f);glVertex3f(-1.35f, -0.35f, 2.25f);
    glEnd();
}
