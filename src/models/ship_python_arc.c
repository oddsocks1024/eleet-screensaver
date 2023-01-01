#include "eleet.h"

void init_python_arc(int model)
{
    models[model].label = "       Python TII        ";
    models[model].thrust = 1;
    models[model].opengl = obj_python_arc;
    models[model].sxl = -0.13f;
    models[model].sxh = 0.13f;
    models[model].syl = -0.13f;
    models[model].syh = 0.13f;
    models[model].szl = -2.23f;
    models[model].szh = -2.23f;
    models[model].ixl = -0.001f;
    models[model].ixh = 0.001f;
    models[model].iyl = -0.001f;
    models[model].iyh = 0.001f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_python_arc(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.605742f, 0.7696147f, 0.2019141f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.69f, -0.41f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.11f, 0.0f, -1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.22f);

    glNormal3f(0.6057423f, 0.7696147f, 0.2019141f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.69f, -0.41f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.0f, 2.22f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.527934f, 0.8492853f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.69f, -0.41f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.69f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.11f, 0.0f, -1.11f);

    glNormal3f(0.5279341f, 0.8492853f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.69f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.69f, -0.41f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.516220f, 0.8304420f, -0.209480f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.11f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.69f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.41f, -2.22f);

    glNormal3f(0.5162207f, 0.8304420f, -0.209480f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.41f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, 0.69f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.11f, 0.0f, -1.11f);

    glNormal3f(0.5015438f, 0.8440615f, -0.189773f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.69f, 0.0f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.41f, -2.22f);

    glNormal3f(-0.501543f, 0.8440615f, -0.189773f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.41f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.69f, 0.0f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.11f, 0.0f, -1.11f);

    glNormal3f(0.6057423f, -0.769614f, 0.2019141f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.69f, -0.41f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.11f, 0.0f, -1.11f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.0f, 2.22f);

    glNormal3f(-0.605742f, -0.769614f, 0.2019141f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.11f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.69f, -0.41f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.0f, 2.22f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5279341f, -0.849285f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.69f, -0.41f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.69f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.11f, 0.0f, -1.11f);

    glNormal3f(-0.527934f, -0.849285f, 0.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.11f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.69f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.69f, -0.41f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5162207f, -0.830442f, -0.209480f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.11f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.69f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.41f, -2.22f);

    glNormal3f(-0.516220f, -0.830442f, -0.209480f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.41f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.69f, -1.11f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.11f, 0.0f, -1.11f);

    glNormal3f(-0.501543f, -0.844061f, -0.189773f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.11f, 0.0f, -1.11f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.69f, 0.0f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.41f, -2.22f);

    glNormal3f(0.5015438f, -0.844061f, -0.189773f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.41f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.69f, 0.0f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.11f, 0.0f, -1.11f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.41f, -2.22f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.69f, 0.0f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.41f, -2.22f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.69f, 0.0f, -2.22f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.41f, -2.22f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.41f, -2.22f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, 0.13f, -2.23f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.13f, 0.0f, -2.23f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.13f, -2.23f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.13f, -2.23f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.13f, 0.0f, -2.23f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, 0.13f, -2.23f);
    glEnd();
    glEnable(GL_LIGHTING);
}
