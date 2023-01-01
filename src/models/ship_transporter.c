#include "eleet.h"

void init_transporter(int model)
{
    models[model].label = "       Transporter       ";
    models[model].thrust = 1;
    models[model].opengl = obj_transporter;
    models[model].sxl = -0.81f;
    models[model].sxh = 0.81f;
    models[model].syl = -0.18f;
    models[model].syh = 0.18f;
    models[model].szl = -1.65f;
    models[model].szh = -1.65f;
    models[model].ixl = -0.02f;
    models[model].ixh = 0.02f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_transporter(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,0.67f); glVertex3f(1.81f, -0.18f, -1.62f);
    glTexCoord2f(0.8f,0.5f); glVertex3f(1.62f, -0.5f, -1.62f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-1.56f, -0.5f, -1.62f);
    glTexCoord2f(0.2f,0.5f); glVertex3f(-1.75f, -0.18f, -1.62f);
    glTexCoord2f(0.0f,0.67f); glVertex3f(-1.56f, 0.25f, -1.62f);
    glTexCoord2f(0.2f,1.0f); glVertex3f(0.0f, 0.62f, -1.62f);
    glTexCoord2f(0.8f,1.0f); glVertex3f(1.62f, 0.25f, -1.62f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(-0.915932f, 0.3955164f, -0.068071f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.06f, -0.5f, 0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.87f, -0.06f, 0.75f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.56f, 0.25f, -1.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.75f, -0.18f, -1.62f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.846046f, -0.502340f, -0.178490f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.56f, -0.5f, -1.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.06f, -0.5f, 0.75f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.75f, -0.18f, -1.62f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.87f, -0.5f, 1.87f);
    glTexCoord2f(0.75f,0.0f); glVertex3f(-0.81f, -0.5f, 1.87f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-2.06f, -0.5f, 0.75f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-1.56f, -0.5f, -1.62f);
    glTexCoord2f(0.25f,1.0f); glVertex3f(1.62f, -0.5f, -1.62f);
    glTexCoord2f(0.75f,1.0f); glVertex3f(2.06f, -0.5f, 0.75f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.8491037f, -0.504155f, -0.157639f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.81f, -0.18f, -1.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.06f, -0.5f, 0.75f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.62f, -0.5f, -1.62f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.9172023f, 0.3960646f, -0.043274f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.87f, -0.06f, 0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.06f, -0.5f, 0.75f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.81f, -0.18f, -1.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.62f, 0.25f, -1.62f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.2214932f, 0.9697813f, 0.1022976f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.62f, 0.25f, -1.62f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.62f, -1.62f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, 0.37f, 0.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.06f, 0.75f);

    glNormal3f(-0.222923f, 0.9694572f, 0.1022634f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.87f, -0.06f, 0.75f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.37f, 0.75f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.0f, 0.62f, -1.62f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.56f, 0.25f, -1.62f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(-0.215212f, 0.9359236f, 0.2788019f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.87f, -0.06f, 0.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.68f, -0.12f, 1.87f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.37f, 0.75f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(-0.661508f, 0.2263056f, 0.7149767f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.81f, -0.5f, 1.87f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.68f, -0.12f, 1.87f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.87f, -0.06f, 0.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.06f, -0.5f, 0.75f);

    glNormal3f(0.6483527f, 0.3241763f, 0.6888747f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.68f, -0.12f, 1.87f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.87f, -0.5f, 1.87f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(2.06f, -0.5f, 0.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, -0.06f, 0.75f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glNormal3f(0.2152123f, 0.9359236f, 0.2788019f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.37f, 0.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.68f, -0.12f, 1.87f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.87f, -0.06f, 0.75f);

    glNormal3f(0.0f, 0.9161573f, 0.4008188f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.37f, 0.75f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.68f, -0.12f, 1.87f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.68f, -0.12f, 1.87f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.68f, -0.12f, 1.87f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.68f, -0.12f, 1.87f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.81f, -0.5f, 1.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.87f, -0.5f, 1.87f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.56f, 0.18f, -1.65f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.81f, -0.18f, -1.65f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.81f, -0.18f, -1.65f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, 0.18f, -1.65f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.93f, -0.501f, -0.81f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.93f, -0.501f, 1.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f, -0.501f, 1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, -0.501f, -0.81f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f, -0.501f, -0.81f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f, -0.501f, 1.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.93f, -0.501f, 1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.93f, -0.501f, -0.81f);
    glEnd();
}
