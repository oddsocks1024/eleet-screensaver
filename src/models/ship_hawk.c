#include "eleet.h"

void init_hawk(int model)
{
    models[model].label = "          Hawk           ";
    models[model].thrust = 1;
    models[model].opengl = obj_hawk;
    models[model].sxl = -0.46f;
    models[model].sxh = 0.46f;
    models[model].syl = 0.46f;
    models[model].syh = 0.93f;
    models[model].szl = -2.21f;
    models[model].szh = -2.21f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_hawk(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.832050f, 0.0f, 0.5547001f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.46f, 1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.46f, 0.93f, 1.51f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.40f, 0.46f, 0.10f);

    glNormal3f(0.8320502f, 0.0f, 0.5547001f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.46f, 0.93f, 1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, 0.46f, 1.51f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.40f, 0.46f, 0.10f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.46f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, 0.46f, 2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.46f, 0.46f, 2.21f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.46f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, 0.46f, -2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.46f, 0.46f, 2.21f);

    glNormal3f(-0.646567f, -0.762856f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.46f, 0.46f, 1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, 0.46f, -2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.10f, -0.93f, -2.21f);

    glNormal3f(0.7762089f, -0.396362f, 0.4903026f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.46f, 0.46f, 1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.10f, -0.93f, -2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.87f, -0.23f, -1.28f);

    glNormal3f(0.7313163f, -0.476945f, 0.4875442f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.46f, 0.46f, 1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.23f, -1.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.40f, 0.46f, 0.10f);

    glNormal3f(0.6465675f, -0.762856f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.10f, -0.93f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.46f, 0.46f, -2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.46f, 0.46f, 1.51f);

    glNormal3f(-0.776208f, -0.396362f, 0.4903026f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.46f, 1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.87f, -0.23f, -1.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.10f, -0.93f, -2.21f);

    glNormal3f(-0.731316f, -0.476945f, 0.4875442f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.40f, 0.46f, 0.10f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.87f, -0.23f, -1.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.46f, 0.46f, 1.51f);

    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.93f, 1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.46f, 0.46f, 1.51f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.46f, 0.46f, 2.21f);

    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.46f, 0.46f, 2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, 0.46f, 1.51f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.46f, 0.93f, 1.51f);

    glNormal3f(0.0f, 0.8302211f, 0.5574341f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.46f, 0.46f, 2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, 0.93f, 1.51f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.46f, 0.93f, 1.51f);

    glNormal3f(0.0f, 0.8302211f, 0.5574341f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.93f, 1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.46f, 0.46f, 2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.46f, 0.46f, 2.21f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.93f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.46f, 0.93f, 1.51f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.46f, 0.93f, 1.51f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.46f, 0.93f, 1.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, 0.93f, -2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.46f, 0.93f, -2.21f);

    glNormal3f(-0.715972f, 0.6312873f, -0.298094f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.10f, -0.93f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.87f, -0.23f, -1.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.46f, 0.93f, -2.21f);

    glNormal3f(0.7159722f, 0.6312873f, -0.298094f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.87f, -0.23f, -1.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.10f, -0.93f, -2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.46f, 0.93f, -2.21f);

    glNormal3f(-0.679547f, 0.7220927f, -0.129606f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.93f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.87f, -0.23f, -1.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.40f, 0.46f, 0.10f);

    glNormal3f(0.6795471f, 0.7220927f, -0.129606f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.40f, 0.46f, 0.10f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.23f, -1.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.46f, 0.93f, -2.21f);

    glNormal3f(-0.447213f, 0.8944271f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.93f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.40f, 0.46f, 0.10f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.46f, 0.93f, 1.51f);

    glNormal3f(0.4472135f, 0.8944271f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.40f, 0.46f, 0.10f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, 0.93f, -2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.46f, 0.93f, 1.51f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.46f, 0.93f, -2.21f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.46f, 0.93f, -2.21f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.46f, 0.46f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.46f, 0.46f, -2.21f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.46f, 0.93f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.46f, 0.46f, -2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.10f, -0.93f, -2.21f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.10f, -0.93f, -2.21f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.46f, 0.46f, -2.21f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.46f, 0.93f, -2.21f);
    glEnd();
}
