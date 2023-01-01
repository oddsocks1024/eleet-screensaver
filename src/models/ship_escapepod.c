#include "eleet.h"

void init_escapepod(int model)
{
    models[model].label = "        Escape Pod       ";
    models[model].thrust = 0;
    models[model].opengl = obj_escapepod;
}

void obj_escapepod(void)
{

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.7f, 1.4f, -1.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.7f, -1.4f, -1.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.7f, 0.0f, 3.6f);

    glNormal3f(0.338719468272742f, -0.903251915393978f, 0.263448475323244f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.7f, 0.0f, 3.6f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.7f, -1.4f, -1.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.1f, 0.0f, 0.0f);

    glNormal3f(0.338719468272742f, 0.903251915393978f, 0.263448475323244f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.1f, 0.0f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.7f, 1.4f, -1.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.7f, 0.0f, 3.6f);

    glNormal3f(0.393919298579168f, 0.0f, -0.919145030018058f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.7f, -1.4f, -1.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.7f, 1.4f, -1.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.1f, 0.0f, 0.0f);
    glEnd();
}
