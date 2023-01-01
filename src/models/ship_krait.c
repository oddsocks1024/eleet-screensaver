#include "eleet.h"

void init_krait(int model)
{
    models[model].label = "          Krait          ";
    models[model].thrust = 1;
    models[model].opengl = obj_krait;
    models[model].sxl = -0.75f;
    models[model].sxh = 0.75f;
    models[model].syl = -0.22f;
    models[model].syh = 0.22f;
    models[model].szl = -0.83f;
    models[model].szh = -0.64f;
    models[model].ixl = -0.05f;
    models[model].ixh = 0.05f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_krait(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.1207366f, 0.9852197f, 0.1215104f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.0f, 2.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.91f, 0.02f, -0.06f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.37f, -1.0f);

    glNormal3f(0.1409888f, -0.982566f, 0.1211831f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.37f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.91f, 0.02f, -0.06f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.0f);

    glNormal3f(-0.140988f, -0.982566f, 0.1211831f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.0f, 2.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.91f, 0.02f, -0.06f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.37f, -1.0f);

    glNormal3f(-0.120736f, 0.9852197f, 0.1215104f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.37f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.91f, 0.02f, -0.06f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.0f);

    glNormal3f(0.4415676f, 0.0f, -0.897227f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.91f, 0.02f, -0.06f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.37f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.37f, -1.0f);

    glNormal3f(-0.441567f, 0.0f, -0.897227f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.91f, 0.02f, -0.06f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.37f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.37f, -1.0f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.4472135f, 0.0f, -0.894427f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.37f, -0.22f, -0.83f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.37f, 0.22f, -0.83f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.75f, 0.0f, -0.64f);

    glNormal3f(-0.447213f, 0.0f, -0.894427f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-0.75f, 0.0f, -0.64f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-0.37f, 0.22f, -0.83f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-0.37f, -0.22f, -0.83f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.1370421f, 0.9824206f, 0.1267639f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.115f, 1.105f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.37f, 0.155f, 0.395f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.155f, 0.795f);

    glNormal3f(-0.137042f, 0.9824206f, 0.1267639f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.155f, 0.795f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.37f, 0.155f, 0.395f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.115f, 1.105f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH_RED]);
    /* Guns */
    glBegin(GL_QUADS);
    glNormal3f(0.4472135f, 0.8944271f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.91f, 0.02f, -0.06f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.91f, 0.02f, 1.81f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.87f, 0.00f, 1.81f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.87f, 0.00f, -0.06f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.87f, -0.02f, -0.06f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.87f, 0.00f, -0.06f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.87f, 0.00f, 1.81f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.87f, -0.02f, 1.81f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.87f, -0.02f, -0.06f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.87f, -0.02f, 1.81f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.91f, -0.02f, 1.81f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.91f, -0.02f, -0.06f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.91f, -0.02f, 1.81f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.91f, 0.02f, 1.81f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.91f, 0.02f, -0.06f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.91f, -0.02f, -0.06f);

    glNormal3f(-0.447213f, 0.8944271f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.87f, 0.00f, -0.06f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.87f, 0.00f, 1.81f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.91f, 0.02f, 1.81f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.91f, 0.02f, -0.06f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.91f, -0.02f, -0.06f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.91f, 0.02f, -0.06f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.91f, 0.02f, 1.81f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.91f, -0.02f, 1.81f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.91f, -0.02f, -0.06f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.91f, -0.02f, 1.81f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.87f, -0.02f, 1.81f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.02f, -0.06f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.87f, -0.02f, 1.81f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.87f, 0.00f, 1.81f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.87f, 0.00f, -0.06f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.02f, -0.06f);
    glEnd();
}
