#include "eleet.h"

void init_dodec(int model)
{
    models[model].label = "      Dodec Station      ";
    models[model].thrust = 0;
    models[model].opengl = obj_dodec;
}

void obj_dodec(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_POLYGON);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-0.8f, -1.1f, 1.78f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.8f, -1.1f, 1.78f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(1.3f, 0.41f, 1.78f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, 1.36f, 1.78f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-1.3f, 0.41f, 1.78f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.5213450f, 0.7202793f, 0.4575990f);
    glTexCoord2f(0.75,0.0f); glVertex3f(2.1f, 0.68f, 0.41f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(1.3f, 1.78f, -0.41f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.0f, 2.20f, 0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, 1.36f, 1.78f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(1.3f, 0.41f, 1.78f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.8461617f, -0.275174f, 0.4563870f);
    glTexCoord2f(0.75,0.0f); glVertex3f(1.3f, -1.78f, 0.41f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(2.1f, -0.68f, -0.41f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(2.1f, 0.68f, 0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(1.3f, 0.41f, 1.78f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.8f, -1.1f, 1.78f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.0f, -0.890043f, 0.4558758f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-1.3f, -1.78f, 0.41f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.0f, -2.20f, -0.41f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(1.3f, -1.78f, 0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.8f, -1.1f, 1.78f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-0.8f, -1.1f, 1.78f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-0.846161f, -0.275174f, 0.4563870f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-2.1f, 0.68f, 0.41f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-2.1f, -0.68f, -0.41f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-1.3f, -1.78f, 0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-0.8f, -1.1f, 1.78f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-1.3f, 0.41f, 1.78f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-0.521345f, 0.7202793f, 0.4575990f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.0f, 2.20f, 0.41f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-1.3f, 1.78f, -0.41f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-2.1f, 0.68f, 0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-1.3f, 0.41f, 1.78f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.0f, 1.36f, 1.78f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.0f, 0.8957310f, -0.444596f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.8f, 1.1f, -1.78f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-0.8f, 1.1f, -1.78f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-1.3f, 1.78f, -0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, 2.20f, 0.41f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(1.3f, 1.78f, -0.41f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.8482433f, 0.2808752f, -0.448990f);
    glTexCoord2f(0.75,0.0f); glVertex3f(1.3f, -0.41f, -1.78f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.8f, 1.1f, -1.78f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(1.3f, 1.78f, -0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(2.1f, 0.68f, 0.41f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(2.1f, -0.68f, -0.41f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.5269539f, -0.721094f, -0.449823f);
    glTexCoord2f(0.75,0.0f); glVertex3f(0.0f, -1.36f, -1.78f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(1.3f, -0.41f, -1.78f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(2.1f, -0.68f, -0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(1.3f, -1.78f, 0.41f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(0.0f, -2.20f, -0.41f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-0.528771f, -0.723581f, -0.443655f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-1.3f, -0.41f, -1.78f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.0f, -1.36f, -1.78f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(0.0f, -2.20f, -0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-1.3f, -1.78f, 0.41f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-2.1f, -0.68f, -0.41f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(-0.851664f, 0.2820082f, -0.441744f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-0.8f, 1.1f, -1.78f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(-1.3f, -0.41f, -1.78f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(-2.1f, -0.68f, -0.41f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(-2.1f, 0.68f, 0.41f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-1.3f, 1.78f, -0.41f);
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.75,0.0f); glVertex3f(-0.8f, 1.1f, -1.78f);
    glTexCoord2f(0.25f,0.0f); glVertex3f(0.8f, 1.1f, -1.78f);
    glTexCoord2f(0.0f,0.5f); glVertex3f(1.3f, -0.41f, -1.78f);
    glTexCoord2f(0.5f,1.0f); glVertex3f(0.0f, -1.36f, -1.78f);
    glTexCoord2f(1.0f,0.5f); glVertex3f(-1.3f, -0.41f, -1.78f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_DOCKING]);
    /* Docking Bay */
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.14f, 0.29f, 1.79f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.14f, 0.29f, 1.79f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.14f, -0.29f, 1.79f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.14f, -0.29f, 1.79f);
    glEnd();
}
