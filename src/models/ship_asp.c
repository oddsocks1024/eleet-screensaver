#include "eleet.h"

void init_asp(int model)
{
    models[model].label = "           Asp           ";
    models[model].thrust = 1;
    models[model].opengl = obj_asp;
    models[model].sxl = -0.47f;
    models[model].sxh = 0.47f;
    models[model].syl = -0.11f;
    models[model].syh = 0.11f;
    models[model].szl = -1.26f;
    models[model].szh = -1.26f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_asp(void) {
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    /* Bottom... */
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, -0.988644f, 0.1502739f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.72f, -0.19f, 2.02f);
    glTexCoord2f(0.25f,0.0f);glVertex3f(-0.72f, -0.19f, 2.02f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-1.19f, -0.38f, 0.77f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, -0.5f, 0.0f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(1.19f, -0.38f, 0.77f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.2113783f, -0.961268f, -0.176867f);
    glTexCoord2f(0.75,0.0f); glVertex3f(1.91f, -0.08f, 0.0f);
    glTexCoord2f(0.25f,0.0f);glVertex3f(1.19f, -0.38f, 0.77f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.0f, -0.5f, 0.0f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, -0.25f, -1.25f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(1.19f, 0.0f, -1.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-0.220237f, -0.956503f, -0.191300f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.0f, -0.25f, -1.25f);
    glTexCoord2f(0.25f,0.0f);glVertex3f(0.0f, -0.5f, 0.0f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-1.19f, -0.38f, 0.77f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-1.91f, -0.08f, 0.0f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-1.19f, 0.0f, -1.25f);
    glEnd();
    /* End Bottom */

    /* Top */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9979355f, -0.064223f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.19f, 0.38f, 0.77f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.19f, 0.38f, 0.77f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.25f, -1.25f);
    glEnd();

    /* Front */
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.9098672f, 0.4148994f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.72f, -0.19f, 2.02f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.72f, -0.19f, 2.02f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.19f, 0.38f, 0.77f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.19f, 0.38f, 0.77f);
    glEnd();

    /* Back Top Left */
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(-0.319867f, 0.9146190f, -0.247298f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.91f, -0.08f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.19f, 0.38f, 0.77f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, 0.25f, -1.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.19f, 0.0f, -1.25f);

    /* Back Top Right */
    glNormal3f(0.2021980f, 0.9624625f, -0.181057f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.19f, 0.0f, -1.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.25f, -1.25f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.19f, 0.38f, 0.77f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.91f, -0.08f, 0.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    /* Side Panels... */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.6524011f, -0.673426f, 0.3476636f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.72f, -0.19f, 2.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.19f, -0.38f, 0.77f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.91f, -0.08f, 0.0f);

    glNormal3f(-0.652401f, -0.673426f, 0.3476636f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.91f, -0.08f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.19f, -0.38f, 0.77f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.72f, -0.19f, 2.02f);

    glNormal3f(0.7753096f, 0.4114746f, 0.4791488f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.91f, -0.08f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.19f, 0.38f, 0.77f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.72f, -0.19f, 2.02f);

    glNormal3f(-0.775309f, 0.4114746f, 0.4791488f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.72f, -0.19f, 2.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.19f, 0.38f, 0.77f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.91f, -0.08f, 0.0f);
    glEnd();
    /* End Side Panels */

    /* Rear Panel */
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.19f, 0.0f, -1.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.25f, -1.25f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.19f, 0.0f, -1.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.25f, -1.25f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.47f, 0.0f, -1.26f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.11f, -1.26f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.47f, 0.0f, -1.26f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.11f, -1.26f);
    glEnd();
    glEnable(GL_LIGHTING);

    /* Gun... */
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_QUADS);
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, -0.22f, 2.30f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.02f, -0.16f, 2.30f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.02f, -0.16f, 2.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.02f, -0.22f, 2.02f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.02f, -0.22f, 2.30f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.02f, -0.22f, 2.30f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.02f, -0.22f, 2.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.02f, -0.22f, 2.02f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.02f, -0.16f, 2.02f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.02f, -0.16f, 2.30f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.02f, -0.22f, 2.30f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.02f, -0.22f, 2.02f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.02f, -0.16f, 2.30f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.02f, -0.16f, 2.30f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.02f, -0.16f, 2.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.02f, -0.16f, 2.02f);
    glEnd();
    /* End Gun */
}
