#include "eleet.h"

void init_urutu(int model)
{
    models[model].label = "          Urutu          ";
    models[model].thrust = 1;
    models[model].opengl = obj_urutu;
    models[model].sxl = -0.92f;
    models[model].sxh = 0.92f;
    models[model].syl = -0.27f;
    models[model].syh = 0.14f;
    models[model].szl = -1.39f;
    models[model].szh = -1.39f;
    models[model].ixl = -0.03f;
    models[model].ixh = 0.03f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_urutu(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    /* Next 4 Tri = Wing Tops */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5412442f, 0.8403529f, 0.0293541f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.35f, -1.38f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.39f, 0.03f, 0.59f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.98f, -0.35f, 0.59f);

    glNormal3f(0.2662419f, 0.9424120f, 0.2024219f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.98f, -0.35f, 0.59f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.23f, -0.28f, -1.38f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.35f, -1.38f);

    glNormal3f(-0.541244f, 0.8403529f, 0.0293541f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.98f, -0.35f, 0.59f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.39f, 0.03f, 0.59f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.35f, -1.38f);

    glNormal3f(-0.266241f, 0.9424120f, 0.2024219f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.35f, -1.38f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.23f, -0.28f, -1.38f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.98f, -0.35f, 0.59f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    /* Next 2 tris = Base */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.999369f, -0.035510f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.98f, -0.35f, 0.59f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.23f, -0.28f, -1.38f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.23f, -0.28f, -1.38f);

    glNormal3f(0.0f, -0.999369f, -0.035510f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.98f, -0.35f, 0.59f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.98f, -0.35f, 0.59f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.23f, -0.28f, -1.38f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    /* Top */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9870626f, 0.1603350f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.35f, -1.38f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.39f, 0.03f, 0.59f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.39f, 0.03f, 0.59f);
    glEnd();

    /* Back */
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.23f, -0.28f, -1.38f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.35f, -1.38f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.23f, -0.28f, -1.38f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.92f, -0.19f, -1.39f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.19f, 0.14f, -1.39f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.07f, -0.27f, -1.39f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.92f, -0.19f, -1.39f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.11f, -0.27f, -1.39f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.23f, 0.14f, -1.39f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    /* Front Panel */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9387482f, 0.3446037f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.39f, 0.03f, 0.59f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.26f, 1.38f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.39f, 0.03f, 0.59f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    /* Front Side Panels */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.4692219f, 0.7285287f, 0.4990758f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.39f, 0.03f, 0.59f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.26f, 1.38f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.98f, -0.35f, 0.59f);

    glNormal3f(-0.469221f, 0.7285287f, 0.4990758f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.98f, -0.35f, 0.59f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.26f, 1.38f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.39f, 0.03f, 0.59f);
    glEnd();

    /* Front Bottom Panel */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.993573f, 0.1131918f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.26f, 1.38f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.98f, -0.35f, 0.59f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.98f, -0.35f, 0.59f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_WINDOW]);
    /* Window */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9429903f, 0.3328201f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.01f, 0.69f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.11f, -0.11f, 1.03f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.11f, -0.11f, 1.03f);
    glEnd();
}
