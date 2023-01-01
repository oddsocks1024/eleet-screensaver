#include "eleet.h"

void init_python(int model)
{
    models[model].label = "         Python          ";
    models[model].thrust = 1;
    models[model].opengl = obj_python;
    models[model].sxl = -0.48f;
    models[model].sxh = 0.48f;
    models[model].syl = -0.24f;
    models[model].syh = 0.24f;
    models[model].szl = -1.12f;
    models[model].szh = -1.12f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_python(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.549557f, 0.8060176f, 0.2198229f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.24f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.48f, 0.48f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.96f, 0.0f, -0.16f);

    glNormal3f(0.5495574f, 0.8060176f, 0.2198229f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.96f, 0.0f, -0.16f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.48f, 0.48f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.0f, 2.24f);

    glNormal3f(-0.549557f, -0.806017f, 0.2198229f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.0f, 2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.96f, 0.0f, -0.16f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.48f, 0.48f);

    glNormal3f(0.5495574f, -0.806017f, 0.2198229f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.48f, 0.48f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.96f, 0.0f, -0.16f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.24f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.447213f, 0.8944271f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.96f, 0.0f, -0.16f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.48f, 0.48f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.48f, -0.32f);

    glNormal3f(0.4472135f, 0.8944271f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.48f, -0.32f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.48f, 0.48f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.96f, 0.0f, -0.16f);

    glNormal3f(-0.447213f, -0.894427f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.96f, 0.0f, -0.16f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.48f, -0.32f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.48f, 0.48f);

    glNormal3f(0.4472135f, -0.894427f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.48f, 0.48f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.48f, -0.32f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.96f, 0.0f, -0.16f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_QUADS);
    glNormal3f(-0.431934f, 0.8638684f, -0.259160f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.48f, -0.32f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.24f, -1.12f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.48f, 0.0f, -1.12f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.96f, 0.0f, -0.16f);

    glNormal3f(0.4364357f, 0.8728715f, -0.218217f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.96f, 0.0f, -0.16f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.48f, 0.0f, -1.12f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, 0.24f, -1.12f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.48f, -0.32f);

    glNormal3f(0.4319342f, -0.863868f, -0.259160f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.48f, -0.32f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.24f, -1.12f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.48f, 0.0f, -1.12f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.96f, 0.0f, -0.16f);

    glNormal3f(-0.436435f, -0.872871f, -0.218217f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.96f, 0.0f, -0.16f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.48f, 0.0f, -1.12f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, -0.24f, -1.12f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.48f, -0.32f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.24f, -1.12f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.48f, 0.0f, -1.12f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, -0.24f, -1.12f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.48f, 0.0f, -1.12f);
    glEnd();
    glEnable(GL_LIGHTING);
}
