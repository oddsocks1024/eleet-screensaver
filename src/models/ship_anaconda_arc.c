#include "eleet.h"

void init_anaconda_arc(int model)
{
    models[model].label = "      Anaconda TII       ";
    models[model].thrust = 1;
    models[model].opengl = obj_anaconda_arc;
    models[model].sxl = -0.39f;
    models[model].sxh = 0.39f;
    models[model].syl = -0.67f;
    models[model].syh = -0.19f;
    models[model].szl = -2.18f;
    models[model].szh = -2.02f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_anaconda_arc(void) {
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.987877f, 0.1552378f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.32f, 2.30f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.92f, -0.98f, -1.90f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.92f, -0.98f, -1.90f);

    glNormal3f(0.5176433f, -0.820560f, 0.2423337f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.92f, -0.98f, -1.90f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.44f, -0.46f, -1.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.32f, 2.30f);

    glNormal3f(-0.517643f, -0.820560f, 0.2423337f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.32f, 2.30f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.44f, -0.46f, -1.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.92f, -0.98f, -1.90f);

    glNormal3f(0.0f, 0.9796804f, 0.2005645f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.78f, 0.46f, -1.51f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.78f, 0.46f, -1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.32f, 2.30f);

    glNormal3f(0.7419921f, 0.6105527f, 0.2768989f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.44f, -0.46f, -1.25f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.78f, 0.46f, -1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.32f, 2.30f);

    glNormal3f(0.0f, 0.9462604f, -0.323405f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.78f, 0.46f, -1.51f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.19f, -2.30f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.78f, 0.46f, -1.51f);

    glNormal3f(0.0f, -0.323497f, -0.946229f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.92f, -0.98f, -1.90f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.92f, -0.98f, -1.90f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.19f, -2.30f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.316227f, -0.948683f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.39f, -0.67f, -2.02f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-0.39f, -0.67f, -2.02f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.0f, -0.19f, -2.18f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.6419826f, 0.2579622f, -0.722020f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.92f, -0.98f, -1.90f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.19f, -2.30f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.78f, 0.46f, -1.51f);

    glNormal3f(0.6433244f, 0.2577860f, -0.720888f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.92f, -0.98f, -1.90f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.78f, 0.46f, -1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.44f, -0.46f, -1.25f);

    glNormal3f(-0.741992f, 0.6105527f, 0.2768989f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.32f, 2.30f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.78f, 0.46f, -1.51f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.44f, -0.46f, -1.25f);

    glNormal3f(-0.641982f, 0.2579622f, -0.722020f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.78f, 0.46f, -1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.19f, -2.30f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.92f, -0.98f, -1.90f);

    glNormal3f(-0.643324f, 0.2577860f, -0.720888f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.92f, -0.98f, -1.90f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.44f, -0.46f, -1.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.78f, 0.46f, -1.51f);
    glEnd();
}
