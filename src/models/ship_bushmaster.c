#include "eleet.h"

void init_bushmaster(int model)
{
    models[model].label = "        Bushmaster       ";
    models[model].thrust = 1;
    models[model].opengl = obj_bushmaster;
    models[model].sxl = -0.51f;
    models[model].sxh = 0.51f;
    models[model].syl = -0.17f;
    models[model].syh = 0.17f;
    models[model].szl = -2.25f;
    models[model].szh = -2.25f;
    models[model].ixl = -0.01f;
    models[model].ixh = 0.01f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_bushmaster(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    /* Bottom */
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.34f, 2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.72f, -0.34f, 0.51f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.72f, -0.34f, 0.51f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.72f, -0.34f, 0.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.72f, -0.34f, -1.55f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.72f, -0.34f, 0.51f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.72f, -0.34f, 0.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.72f, -0.34f, -1.55f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.72f, -0.34f, -1.55f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.68f, -0.34f, -2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.68f, -0.34f, -2.24f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.72f, -0.34f, -1.55f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.72f, -0.34f, -1.55f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.72f, -0.34f, -1.55f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.68f, -0.34f, -2.24f);
    glEnd();
    /* End Bottom */

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    /* Stripes ...*/
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.68f, -0.35f, 0.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.86f, -0.35f, -1.55f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.51f, -0.35f, -1.55f);

    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.68f, -0.35f, 0.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.51f, -0.35f, -1.55f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.86f, -0.35f, -1.55f);
    glEnd();
    /* End Stripes */

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5528498f, 0.0f, -0.833280f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.68f, 0.34f, -2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.72f, -0.34f, -1.55f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.68f, -0.34f, -2.24f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.68f, 0.34f, -2.24f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.68f, 0.34f, -2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.68f, 0.34f, -0.17f);

    glNormal3f(0.0f, 1.0f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.68f, 0.34f, -0.17f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.68f, 0.34f, -2.24f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.68f, 0.34f, -0.17f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_GREEN]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9624229f, 0.2715550f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.68f, 0.34f, -0.17f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.68f, 0.34f, -0.17f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.0f, -0.34f, 2.24f);

    glNormal3f(-0.345915f, 0.8729629f, 0.3439158f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.72f, -0.34f, 0.51f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.0f, -0.34f, 2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.68f, 0.34f, -0.17f);

    glNormal3f(0.3459154f, 0.8729629f, 0.3439158f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.0f, -0.34f, 2.24f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.72f, -0.34f, 0.51f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.68f, 0.34f, -0.17f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5472493f, 0.8369696f, 0.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.72f, -0.34f, 0.51f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.68f, 0.34f, -2.24f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.68f, 0.34f, -0.17f);

    glNormal3f(0.5472493f, 0.8369696f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.72f, -0.34f, 0.51f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(1.72f, -0.34f, -1.55f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.68f, 0.34f, -2.24f);

    glNormal3f(-0.547249f, 0.8369696f, 0.0f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.68f, 0.34f, -2.24f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.72f, -0.34f, 0.51f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.68f, 0.34f, -0.17f);

    glNormal3f(-0.547249f, 0.8369696f, 0.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.68f, 0.34f, -2.24f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-1.72f, -0.34f, -1.55f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.72f, -0.34f, 0.51f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.68f, 0.34f, -2.24f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(0.68f, 0.34f, -2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.68f, -0.34f, -2.24f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.68f, -0.34f, -2.24f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.68f, -0.34f, -2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.68f, 0.34f, -2.24f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-0.51f, 0.0f, -2.25f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-0.17f, 0.17f, -2.25f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(-0.17f, -0.17f, -2.25f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.51f, 0.0f, -2.25f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.17f, -0.17f, -2.25f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.17f, 0.17f, -2.25f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_BLUE]);
    glBegin(GL_TRIANGLES);
    glNormal3f(-0.552849f, 0.0f, -0.833280f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.72f, -0.34f, -1.55f);
    glTexCoord2f(1.0f,0.0f); glVertex3f(-0.68f, 0.34f, -2.24f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.68f, -0.34f, -2.24f);
    glEnd();
}
