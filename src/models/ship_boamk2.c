#include "eleet.h"

void init_boamk2(int model)
{
    models[model].label = "        Boa Mk II        ";
    models[model].thrust = 1;
    models[model].opengl = obj_boamk2;
    models[model].sxl = -0.28f;
    models[model].sxh = 0.28f;
    models[model].syl = 0.32f;
    models[model].syh = 0.78f;
    models[model].szl = -2.13f;
    models[model].szh = -1.87f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.03f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_boamk2(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.7923563f, -0.588034f, 0.1624404f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.08f, 2.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.92f, -1.34f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.92f, 0.06f, -2.28f);

    glNormal3f(0.9771524f, -0.078555f, 0.1974893f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.08f, 2.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.92f, 0.06f, -2.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.88f, 0.92f, -1.74f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9788586f, 0.2045376f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.08f, 2.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.88f, 0.92f, -1.74f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.88f, 0.92f, -1.74f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.977152f, -0.078555f, 0.1974893f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.08f, 2.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.88f, 0.92f, -1.74f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.92f, 0.06f, -2.28f);

    glNormal3f(-0.792356f, -0.588034f, 0.1624404f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.08f, 2.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.92f, 0.06f, -2.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.92f, -1.34f);

    glNormal3f(0.0f, 0.5317681f, -0.846889f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.92f, 0.06f, -2.28f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.88f, 0.92f, -1.74f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.88f, 0.92f, -1.74f);

    glNormal3f(0.0f, 0.5317681f, -0.846889f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.92f, 0.06f, -2.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.92f, 0.06f, -2.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.88f, 0.92f, -1.74f);

    glNormal3f(0.0f, -0.692225f, -0.721681f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.92f, 0.06f, -2.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.92f, 0.06f, -2.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.92f, -1.34f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.4920572f, -0.870562f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-0.28f, 0.78f, -1.87f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.28f, 0.78f, -1.87f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.0f, 0.32f, -2.13f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9788908f, 0.2043838f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.395f, 0.8f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.42f, 0.775f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.2f, 0.775f, -1.02f);

    glNormal3f(0.0f, 0.9793331f, 0.2022535f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.395f, 0.8f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.2f, 0.775f, -1.04f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.42f, 0.775f, -1.04f);
    glEnd();
}
