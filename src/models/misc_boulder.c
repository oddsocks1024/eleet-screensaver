#include "eleet.h"

void init_boulder(int model)
{
    models[model].label = "         Boulder         ";
    models[model].thrust = 0;
    models[model].opengl = obj_boulder;
}

void obj_boulder(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_ROCK]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.860192f, -0.175175f, 0.4789387f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, 2.05f, -0.61f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.55f, 1.88f, -1.66f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.27f, -0.55f, 0.72f);

    glNormal3f(-0.204759f, 0.3646417f, 0.9083556f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, 2.05f, -0.61f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.27f, -0.55f, 0.72f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.66f, 0.38f, 0.66f);

    glNormal3f(0.5231892f, -0.756676f, 0.3920631f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.66f, 0.38f, 0.66f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.27f, -0.55f, 0.72f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.55f, -0.38f, -0.66f);

    glNormal3f(-0.067617f, -0.980686f, -0.183527f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.55f, -0.38f, -0.66f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.27f, -0.55f, 0.72f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.11f, 0.0f, -2.16f);

    glNormal3f(-0.757769f, -0.647408f, -0.081538f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.11f, 0.0f, -2.16f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.27f, -0.55f, 0.72f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.55f, 1.88f, -1.66f);

    glNormal3f(0.4983893f, 0.8622710f, 0.0899817f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.66f, 0.38f, 0.66f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.94f, -1.66f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, 2.05f, -0.61f);

    glNormal3f(0.9657764f, 0.1817005f, -0.185096f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.55f, -0.38f, -0.66f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.94f, -1.66f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.66f, 0.38f, 0.66f);

    glNormal3f(0.6439390f, -0.313920f, -0.697708f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.11f, 0.0f, -2.16f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.94f, -1.66f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.55f, -0.38f, -0.66f);

    glNormal3f(0.1264000f, 0.3576852f, -0.925248f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.55f, 1.88f, -1.66f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.94f, -1.66f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.11f, 0.0f, -2.16f);

    glNormal3f(0.3166721f, 0.8961148f, -0.310961f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.11f, 0.94f, -1.66f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.55f, 1.88f, -1.66f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, 2.05f, -0.61f);
    glEnd();
}
