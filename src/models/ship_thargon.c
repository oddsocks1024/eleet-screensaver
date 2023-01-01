#include "eleet.h"

void init_thargon(int model)
{
    models[model].label = "         Thargon         ";
    models[model].thrust = 0;
    models[model].opengl = obj_thargon;
}

void obj_thargon(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.88f, -0.58f, 2.20f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.05f, -0.58f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.58f, -2.20f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.88f, -0.58f, 2.20f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.88f, -0.58f, 2.20f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.58f, -2.20f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.05f, -0.58f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.88f, -0.58f, 2.20f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.58f, -2.20f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.58f, -1.32f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.58f, 0.58f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.29f, 0.58f, -0.44f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.58f, -1.32f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.29f, 0.58f, -0.44f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.29f, 0.58f, -0.44f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.58f, 0.58f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.58f, -1.32f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.29f, 0.58f, -0.44f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.4168424f, 0.5493744f, -0.724175f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.05f, -0.58f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.58f, -2.20f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.58f, -1.32f);

    glNormal3f(0.3970355f, 0.5031399f, -0.767602f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.58f, -1.32f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.58f, 0.58f, -1.02f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.05f, -0.58f, -1.02f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.6043507f, 0.7658583f, 0.2195932f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.05f, -0.58f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.58f, 0.58f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.88f, -0.58f, 2.20f);

    glNormal3f(0.5024470f, 0.8273050f, 0.2512235f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.58f, 0.58f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.29f, 0.58f, -0.44f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.88f, -0.58f, 2.20f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9155194f, 0.4022736f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.88f, -0.58f, 2.20f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.88f, -0.58f, 2.20f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.29f, 0.58f, -0.44f);

    glNormal3f(0.0f, 0.9155194f, 0.4022736f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.29f, 0.58f, -0.44f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.29f, 0.58f, -0.44f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.88f, -0.58f, 2.20f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.604350f, 0.7658583f, 0.2195932f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.58f, 0.58f, -1.02f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.05f, -0.58f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.88f, -0.58f, 2.20f);

    glNormal3f(-0.502447f, 0.8273050f, 0.2512235f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.29f, 0.58f, -0.44f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.58f, 0.58f, -1.02f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.88f, -0.58f, 2.20f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.421671f, 0.5343600f, -0.732565f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.58f, -2.20f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.05f, -0.58f, -1.02f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.58f, 0.58f, -1.02f);

    glNormal3f(-0.381000f, 0.5588005f, -0.736600f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.58f, -1.32f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.58f, -2.20f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.58f, 0.58f, -1.02f);
    glEnd();
}
