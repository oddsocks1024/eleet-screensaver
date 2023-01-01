#include "eleet.h"

void init_tharglet(int model)
{
    models[model].label = "        Tharglet         ";
    models[model].thrust = 0;
    models[model].opengl = obj_tharglet;
}

void obj_tharglet(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_POLYGON);
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-0.5f, 1.33f, -1.77f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-0.5f, -1.33f, -1.77f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-0.5f, -2.11f, 0.72f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-0.5f, 0.0f, 2.22f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-0.5f, 2.11f, 0.72f);
    glEnd();

    glBegin(GL_QUADS);
    glNormal3f(0.9081931f, -0.242102f, 0.3414260f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, -0.55f, -0.83f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, 0.0f, -0.44f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.5f, 0.0f, 2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, -2.11f, 0.72f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.6855343f, -0.684860f, -0.246998f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, -0.33f, -1.44f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, -0.55f, -0.83f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.5f, -2.11f, 0.72f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, -1.33f, -1.77f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    glNormal3f(0.3133774f, 0.0f, -0.949628f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, 0.33f, -1.44f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, -0.33f, -1.44f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.5f, -1.33f, -1.77f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, 1.33f, -1.77f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_QUADS);
    glNormal3f(0.7250048f, 0.6478947f, -0.233666f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.5f, 0.55f, -0.83f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.5f, 0.33f, -1.44f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.5f, 1.33f, -1.77f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, 2.11f, 0.72f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_QUADS);
    glNormal3f(0.9080571f, 0.2426835f, 0.3413748f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.5f, 2.11f, 0.72f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.5f, 0.0f, 2.22f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.5f, 0.0f, -0.44f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.5f, 0.55f, -0.83f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_POLYGON);
    glNormal3f(1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.5f, 0.55f, -0.83f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.5f, 0.0f, -0.44f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.5f, -0.55f, -0.83f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.5f, -0.33f, -1.44f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.5f, 0.33f, -1.44f);
    glEnd();
}
