#include "eleet.h"

void init_moccasin(int model)
{
    models[model].label = "         Moccasin        ";
    models[model].thrust = 1;
    models[model].opengl = obj_moccasin;
    models[model].sxl = -0.68f;
    models[model].sxh = 0.68f;
    models[model].syl = -0.18f;
    models[model].syh = 0.06f;
    models[model].szl = -2.20f;
    models[model].szh = -2.20f;
    models[model].ixl = -0.03f;
    models[model].ixh = 0.03f;
    models[model].iyl = -0.03f;
    models[model].iyh = 0.03f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_moccasin(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5473075f, 0.8297888f, -0.109109f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.31f, -2.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.62f, 0.31f, 0.93f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.56f, -0.31f, 0.93f);

    glNormal3f(0.3145498f, 0.9487229f, 0.0313538f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, -0.31f, 0.93f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.31f, -2.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.31f, -2.18f);

    glNormal3f(-0.547307f, 0.8297888f, -0.109109f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.56f, -0.31f, 0.93f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.62f, 0.31f, 0.93f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.31f, -2.18f);

    glNormal3f(-0.314549f, 0.9487229f, 0.0313538f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.31f, -2.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.87f, -0.31f, -2.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.56f, -0.31f, 0.93f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.56f, -0.31f, 0.93f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.87f, -0.31f, -2.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.31f, -2.18f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, -0.31f, 0.93f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.56f, -0.31f, 0.93f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.87f, -0.31f, -2.18f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.31f, -2.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.62f, 0.31f, 0.93f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.62f, 0.31f, 0.93f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.06f, 0.32f, 0.68f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.37f, 0.32f, 0.68f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.06f, 0.32f, -1.12f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.06f, 0.32f, 0.68f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.06f, 0.32f, -1.12f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.37f, 0.32f, 0.68f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.87f, -0.31f, -2.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.31f, -2.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.87f, -0.31f, -2.18f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-0.68f, -0.06f, -2.20f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-0.31f, 0.06f, -2.20f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-0.12f, -0.18f, -2.20f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.68f, -0.06f, -2.20f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.18f, -0.18f, -2.20f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.37f, 0.06f, -2.20f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9360210f, 0.3519439f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.62f, 0.31f, 0.93f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.16f, 2.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.62f, 0.31f, 0.93f);

    glNormal3f(0.4748389f, 0.7199170f, 0.5062089f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.62f, 0.31f, 0.93f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.16f, 2.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.56f, -0.31f, 0.93f);

    glNormal3f(-0.474838f, 0.7199170f, 0.5062089f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.56f, -0.31f, 0.93f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.16f, 2.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.62f, 0.31f, 0.93f);

    glNormal3f(0.0f, -0.992876f, 0.1191452f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.16f, 2.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.56f, -0.31f, 0.93f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.56f, -0.31f, 0.93f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_WINDOW]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9260923f, 0.3772968f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.20f, 0.20f, 1.27f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.20f, 0.20f, 1.27f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.02f, 1.81f);
    glEnd();
}
