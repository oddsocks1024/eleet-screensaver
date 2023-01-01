#include "eleet.h"

void init_anaconda(int model)
{
    models[model].label = "        Anaconda         ";
    models[model].thrust = 0;
    models[model].opengl = obj_anaconda;
}

void obj_anaconda(void) {
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, -0.694594f, -0.719401f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.21f, -0.39f, -0.02f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-0.21f, -0.39f, -0.02f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-0.35f, -0.10f, -0.30f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, 0.05f, -0.48f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.35f, -0.10f, -0.30f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-0.495426f, 0.1535822f, -0.854964f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-0.57f, 0.12f, -0.12f);
    glTexCoord2f(0.25f,0.0f);glVertex3f(-0.35f, 0.44f, -0.19f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.0f, 0.4f, -0.40f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, 0.05f, -0.48f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-0.35f, -0.10f, -0.30f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-0.790620f, -0.583885f, -0.184384f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-0.35f, -0.32f, 0.33f);
    glTexCoord2f(0.25f,0.0f);glVertex3f(-0.57f, -0.00f, 0.26f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-0.57f, 0.12f, -0.12f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-0.35f, -0.10f, -0.30f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-0.21f, -0.39f, -0.02f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, -0.984221f, 0.1769387f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.35f, -0.32f, 0.33f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.0f, 0.0f, 2.11f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-0.35f, -0.32f, 0.33f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-0.21f, -0.39f, -0.02f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.21f, -0.39f, -0.02f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_POLYGON);
    glNormal3f(0.7906200f, -0.583885f, -0.184384f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.57f, 0.12f, -0.12f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.57f, -0.00f, 0.26f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.35f, -0.32f, 0.33f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.21f, -0.39f, -0.02f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.35f, -0.10f, -0.30f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.5095544f, 0.1790326f, -0.841606f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.57f, 0.12f, -0.12f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.35f, -0.10f, -0.30f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.0f, 0.05f, -0.48f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, 0.4f, -0.40f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.35f, 0.44f, -0.19f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9823385f, -0.187112f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.35f, 0.44f, -0.19f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.35f, 0.44f, -0.19f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.4f, -0.40f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_QUADS);
    glNormal3f(-0.790620f, 0.5838854f, 0.1843848f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.35f, 0.44f, -0.19f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.57f, 0.12f, -0.12f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.57f, -0.00f, 0.26f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.11f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.822145f, -0.509813f, 0.2533098f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.35f, -0.32f, 0.33f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.57f, -0.00f, 0.26f);

    glNormal3f(0.8221459f, -0.509813f, 0.2533098f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.35f, -0.32f, 0.33f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.57f, -0.00f, 0.26f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.11f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_QUADS);
    glNormal3f(0.7906200f, 0.5838854f, 0.1843848f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.57f, -0.00f, 0.26f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.57f, 0.12f, -0.12f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.35f, 0.44f, -0.19f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.11f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9821887f, 0.1878969f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.35f, 0.44f, -0.19f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.35f, 0.44f, -0.19f);
    glEnd();
}
