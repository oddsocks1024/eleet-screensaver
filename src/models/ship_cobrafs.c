#include "eleet.h"

void init_cobrafs(int model)
{
    models[model].label = "        Cobra FS         ";
    models[model].thrust = 1;
    models[model].opengl = obj_cobrafs;
    models[model].sxl = -0.56f;
    models[model].sxh = 0.56f;
    models[model].syl = -0.25f;
    models[model].syh = 0.18f;
    models[model].szl = -0.621f;
    models[model].szh = -0.621f;
    models[model].ixl = -0.05f;
    models[model].ixh = 0.05f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_cobrafs(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.8966301f, 0.4427803f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.40f, 0.37f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, 0.0f, 1.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, 0.0f, 1.18f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, -0.979520f, 0.2013458f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, 0.0f, 1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.5f, 0.0f, 1.18f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.5f, -0.37f, -0.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.5f, -0.37f, -0.62f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.2955166f, 0.9163586f, 0.2701050f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.37f, 0.25f, -0.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.40f, 0.37f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, 0.0f, 1.18f);

    glNormal3f(0.2751252f, 0.9251691f, 0.2614729f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, 0.0f, 1.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.04f, -0.12f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.37f, 0.25f, -0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.1611204f, -0.966722f, 0.1987151f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, 0.0f, 1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, -0.37f, -0.62f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(2.0f, -0.12f, -0.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.04f, -0.12f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.295516f, 0.9163586f, 0.2701050f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.5f, 0.0f, 1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.40f, 0.37f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.37f, 0.25f, -0.62f);

    glNormal3f(-0.275125f, 0.9251691f, 0.2614729f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.37f, 0.25f, -0.62f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.87f, -0.04f, -0.12f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, 0.0f, 1.18f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(-0.157564f, -0.967896f, 0.1958302f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.5f, 0.0f, 1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.87f, -0.04f, -0.12f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-2.0f, -0.12f, -0.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, -0.37f, -0.62f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.108838f, 0.9940594f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.37f, 0.25f, -0.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.40f, 0.37f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.40f, -0.62f);

    glNormal3f(0.1088386f, 0.9940594f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.40f, 0.37f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.37f, 0.25f, -0.62f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.40f, -0.62f);

    glNormal3f(-0.506411f, 0.8622687f, -0.006295f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.37f, 0.25f, -0.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.0f, -0.12f, -0.62f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.87f, -0.04f, -0.12f);

    glNormal3f(0.5064118f, 0.8622687f, -0.006295f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.0f, -0.12f, -0.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.37f, 0.25f, -0.62f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.87f, -0.04f, -0.12f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, 0.40f, -0.62f);
    glTexCoord2f(0.75f,0.75f); glVertex3f(1.37f, 0.25f, -0.62f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(2.0f, -0.12f, -0.62f);
    glTexCoord2f(0.75f,0.0f); glVertex3f(0.5f, -0.37f, -0.62f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-0.5f, -0.37f, -0.62f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-2.0f, -0.12f, -0.62f);
    glTexCoord2f(0.25f,0.75f); glVertex3f(-1.37f, 0.25f, -0.62f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.12f, 0.18f, -0.621f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.56f, 0.12f, -0.621f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.56f, -0.18f, -0.621f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.12f, -0.25f, -0.621f);

    /* Drawn CW */
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.56f, -0.18f, -0.621f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.12f, -0.25f, -0.621f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.12f, 0.18f, -0.621f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.56f, 0.12f, -0.621f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(1.25f, 0.09f, -0.621f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(1.37f, 0.0f, -0.621f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(1.25f, -0.09f, -0.621f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-1.37f, 0.0f, -0.621f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-1.25f, 0.09f, -0.621f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-1.25f, -0.09f, -0.621f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    /* Drawn CW : Gun Bottom*/
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, -0.02f, 1.40f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.02f, -0.02f, 1.40f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.02f, -0.02f, 1.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.02f, -0.02f, 1.18f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.02f, 0.02f, 1.40f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.02f, -0.02f, 1.40f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.02f, -0.02f, 1.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.02f, 0.02f, 1.18f);

    /* Drawn CW : Gun Top */
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, 0.02f, 1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.02f, 0.02f, 1.18f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.02f, 0.02f, 1.40f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.02f, 0.02f, 1.40f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, -0.02f, 1.40f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.02f, 0.02f, 1.40f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.02f, 0.02f, 1.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.02f, -0.02f, 1.18f);

    /* Drawn CW : Gun Front */
    glNormal3f(0.0f, -0.9838699f, 0.178885f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, -0.02f, 1.18f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.02f, 0.02f, 1.40f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.02f, 0.02f, 1.40f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.02f, -0.02f, 1.40f);
    glEnd();
    /* End Gun */
}
