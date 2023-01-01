#include "eleet.h"

void init_moray_arc(int model)
{
    models[model].label = "        Moray TII        ";
    models[model].thrust = 1;
    models[model].opengl = obj_moray_arc;
    models[model].sxl = -0.4f;
    models[model].sxh = 0.4f;
    models[model].syl = -0.18f;
    models[model].syh = 0.2f;
    models[model].szl = 0.85f;
    models[model].szh = 1.33f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.05f;
    models[model].izl = 0.01f;
    models[model].izh = 0.1f;
}

void obj_moray_arc(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.432685f, 0.4284013f, 0.7932564f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.2f, 0.51f, 0.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.2f, -0.5f, 0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.5f, 1.7f);

    glNormal3f(0.0f, 0.7650765f, 0.6439393f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.2f, 0.51f, 0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.2f, 0.51f, 0.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.5f, 1.7f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.7682212f, 0.6401843f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.4f, 0.22f, 0.85f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-0.4f, 0.22f, 0.85f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.0f, -0.18f, 1.33f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.4326853f, 0.4284013f, 0.7932564f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.2f, -0.5f, 0.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.2f, 0.51f, 0.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.5f, 1.7f);

    glNormal3f(0.0f, 0.8944271f, -0.447213f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.2f, 0.51f, 0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.6f, -0.59f, -1.7f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.2f, 0.51f, 0.5f);

    glNormal3f(0.0f, 0.8944271f, -0.447213f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.6f, -0.59f, -1.7f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.6f, -0.59f, -1.7f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.2f, 0.51f, 0.5f);

    glNormal3f(0.6238098f, 0.6176335f, -0.478946f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.2f, -0.5f, 0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.6f, -0.59f, -1.7f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.2f, 0.51f, 0.5f);

    glNormal3f(-0.623809f, 0.6176335f, -0.478946f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.2f, -0.5f, 0.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.2f, 0.51f, 0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.6f, -0.59f, -1.7f);

    glNormal3f(-0.015967f, -0.999443f, 0.0292736f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.5f, 1.7f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.2f, -0.5f, 0.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.6f, -0.59f, -1.7f);

    glNormal3f(0.0f, -0.999649f, 0.0264613f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.5f, 1.7f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.6f, -0.59f, -1.7f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.6f, -0.59f, -1.7f);

    glNormal3f(0.0159674f, -0.999443f, 0.0292736f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.2f, -0.5f, 0.5f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.5f, 1.7f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.6f, -0.59f, -1.7f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.2f, -0.59f, -1.7f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, -0.59f, -1.3f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.6f, -0.59f, -1.7f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.6f, -0.59f, -1.7f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.5f, -0.59f, -1.3f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.2f, -0.59f, -1.7f);
    glEnd();
}
