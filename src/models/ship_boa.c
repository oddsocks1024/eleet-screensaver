#include "eleet.h"

void init_boa(int model)
{
    models[model].label = "           Boa           ";
    models[model].thrust = 1;
    models[model].opengl = obj_boa;
    models[model].sxl = -0.26f;
    models[model].sxh = 0.26f;
    models[model].syl = -0.18f;
    models[model].syh = 0.14f;
    models[model].szl = -2.14f;
    models[model].szh = -2.14f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_boa(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    /* Rear ... */
    glBegin(GL_POLYGON);
    glNormal3f(0.5378029f, 0.4369649f, -0.720992f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.26f, -0.18f, -2.14f);
    glTexCoord2f(0.75f,0.0f); glVertex3f(0.0f, 0.14f, -2.14f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.0f, 0.8f, -1.74f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.76f, 0.8f, -1.18f);
    glTexCoord2f(0.25f,1.0f); glVertex3f(1.24f, 0.0f, -1.34f);
    glTexCoord2f(0.75f,1.0f); glVertex3f(0.76f, -0.5f, -1.98f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.0f, -0.447213f, -0.894427f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-0.26f, -0.18f, -2.14f);
    glTexCoord2f(0.75f,0.0f); glVertex3f(0.26f, -0.18f, -2.14f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.76f, -0.5f, -1.98f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.48f, -1.3f, -1.58f);
    glTexCoord2f(0.25f,1.0f); glVertex3f(-0.48f, -1.3f, -1.58f);
    glTexCoord2f(0.75f,1.0f); glVertex3f(-0.76f, -0.5f, -1.98f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-0.507899f, 0.4514661f, -0.733632f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-0.76f, -0.5f, -1.98f);
    glTexCoord2f(0.75f,0.0f); glVertex3f(-1.24f, 0.0f, -1.34f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-0.76f, 0.8f, -1.18f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.0f, 0.8f, -1.74f);
    glTexCoord2f(0.25f,1.0f); glVertex3f(0.0f, 0.14f, -2.14f);
    glTexCoord2f(0.75f,1.0f); glVertex3f(-0.26f, -0.18f, -2.14f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.76f, 0.8f, -1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.8f, -1.74f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.76f, 0.8f, -1.18f);

    glNormal3f(0.8484193f, -0.442322f, -0.290750f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.48f, -1.3f, -1.58f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.76f, -0.5f, -1.98f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.24f, 0.0f, -1.34f);

    glNormal3f(-0.848419f, -0.442322f, -0.290750f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.76f, -0.5f, -1.98f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.48f, -1.3f, -1.58f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.24f, 0.0f, -1.34f);
    glEnd();
    /* End Rear */

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    /* Body ... */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9670745f, 0.2544932f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.76f, 0.8f, -1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.76f, 0.8f, -1.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 1.86f);

    glNormal3f(-0.795382f, -0.521893f, 0.3082107f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.24f, 0.0f, -1.34f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.48f, -1.3f, -1.58f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 1.86f);

    glNormal3f(0.7953825f, -0.521893f, 0.3082107f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.48f, -1.3f, -1.58f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.24f, 0.0f, -1.34f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 1.86f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.838248f, 0.4379848f, 0.3248212f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 1.86f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.76f, 0.8f, -1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.24f, 0.0f, -1.34f);

    glNormal3f(0.0f, -0.935432f, 0.3535063f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 1.86f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.48f, -1.3f, -1.58f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.48f, -1.3f, -1.58f);

    glNormal3f(0.8382484f, 0.4379848f, 0.3248212f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 1.86f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.24f, 0.0f, -1.34f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.76f, 0.8f, -1.18f);
    glEnd();
    /* End Rear */

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-0.26f, -0.18f, -2.14f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.0f, 0.14f, -2.14f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.26f, -0.18f, -2.14f);
    glEnd();
    glEnable(GL_LIGHTING);
}
