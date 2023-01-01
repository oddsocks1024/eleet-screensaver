#include "eleet.h"

void init_asteroid(int model)
{
    models[model].label = "        Asteroid         ";
    models[model].thrust = 0;
    models[model].opengl = obj_asteroid;
}

void obj_asteroid()
{
    glBindTexture(GL_TEXTURE_2D, textures[T_ROCK]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.708661f, 0.6304820f, 0.3166870f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 2.5f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.5f, -0.31f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.25f, 0.0f, 2.18f);

    glNormal3f(-0.682336f, 0.6070607f, -0.407301f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.93f, -2.34f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.5f, -0.31f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.5f, 0.0f);

    glNormal3f(0.3473256f, 0.6909562f, 0.6339907f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, 0.0f, 1.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, 1.56f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.5f, 0.0f);

    glNormal3f(0.3852113f, 0.7663247f, -0.514158f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 2.5f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, 1.56f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.93f, -2.34f);

    glNormal3f(0.0851292f, 0.6303185f, 0.7716550f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.25f, 0.0f, 2.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.56f, 0.0f, 1.87f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 2.5f, 0.0f);

    glNormal3f(-0.592928f, -0.676858f, 0.4362322f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.5f, -0.31f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -2.5f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.25f, 0.0f, 2.18f);

    glNormal3f(-0.616342f, -0.703587f, -0.353675f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -1.56f, -1.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -2.5f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.5f, -0.31f, 0.0f);

    glNormal3f(-0.637647f, -0.142880f, -0.756961f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.5f, -0.31f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.93f, -2.34f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -1.56f, -1.87f);

    glNormal3f(0.3989315f, -0.695736f, 0.5973307f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -2.5f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.18f, -1.25f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.56f, 0.0f, 1.87f);

    glNormal3f(0.4559572f, -0.795189f, -0.399720f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -1.56f, -1.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.18f, -1.25f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -2.5f, 0.0f);

    glNormal3f(0.0851292f, -0.630318f, 0.7716550f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -2.5f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.56f, 0.0f, 1.87f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.25f, 0.0f, 2.18f);

    glNormal3f(0.9628590f, 0.1062228f, 0.2482320f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.18f, -1.25f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, 1.56f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.56f, 0.0f, 1.87f);

    glNormal3f(0.7671550f, 0.0846327f, -0.635854f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.93f, -2.34f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.87f, 1.56f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.18f, -1.25f, 0.0f);

    glNormal3f(0.6560601f, -0.139983f, -0.741612f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -1.56f, -1.87f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.93f, -2.34f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.18f, -1.25f, 0.0f);
    glEnd();
}
