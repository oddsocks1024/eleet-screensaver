#include "eleet.h"

void init_cobramk1_arc(int model)
{
    models[model].label = "       Cobra Mk1 TII     ";
    models[model].thrust = 1;
    models[model].opengl = obj_cobramk1_arc;
    models[model].sxl = -1.01f;
    models[model].sxh = 1.01f;
    models[model].syl = -0.25f;
    models[model].syh = 0.01f;
    models[model].szl = -1.31f;
    models[model].szh = -1.31f;
    models[model].ixl = -0.02f;
    models[model].ixh = 0.02f;
    models[model].iyl = -0.01f;
    models[model].iyh = 0.01f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_cobramk1_arc(void)
{
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SILVER]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9467727f, 0.3219027f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.01f, 0.41f, -0.2f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.71f, -0.1f, 1.3f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.76f, -0.1f, 1.3f);

    glNormal3f(0.0f, 0.9751328f, -0.221621f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, 0.16f, -1.3f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.46f, 0.16f, -1.3f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.01f, 0.41f, -0.2f);

    glNormal3f(0.2801565f, 0.9428346f, 0.1804854f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, 0.16f, -1.3f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.01f, 0.41f, -0.2f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.76f, -0.1f, 1.3f);

    glNormal3f(-0.293322f, 0.9391956f, 0.1785317f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.46f, 0.16f, -1.3f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.71f, -0.1f, 1.3f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.01f, 0.41f, -0.2f);

    glNormal3f(-0.065018f, 0.9909011f, 0.1178453f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.71f, -0.1f, 1.3f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.46f, 0.16f, -1.3f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.16f, -0.1f, 0.5f);

    glNormal3f(0.0658336f, 0.9906703f, 0.1193235f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, 0.16f, -1.3f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.76f, -0.1f, 1.3f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.21f, -0.1f, 0.5f);

    glNormal3f(0.4430050f, 0.8959983f, -0.030552f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.11f, -0.1f, -0.95f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, 0.16f, -1.3f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.21f, -0.1f, 0.5f);

    glNormal3f(-0.322880f, 0.9463742f, 0.0111338f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.16f, -0.1f, 0.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.46f, 0.16f, -1.3f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.21f, -0.1f, -0.95f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.5065382f, -0.861509f, -0.034933f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.56f, -0.41f, -1.28f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(2.11f, -0.1f, -0.95f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.21f, -0.1f, 0.5f);

    glNormal3f(-0.376772f, -0.926214f, 0.0129921f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.16f, -0.1f, 0.5f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.21f, -0.1f, -0.95f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.46f, -0.41f, -1.3f);

    glNormal3f(-0.422885f, 0.0f, -0.906183f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-2.21f, -0.1f, -0.95f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.46f, 0.16f, -1.3f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.46f, -0.41f, -1.3f);

    glNormal3f(0.5265684f, -0.029810f, -0.849609f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(2.11f, -0.1f, -0.95f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.56f, -0.41f, -1.28f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, 0.16f, -1.3f);

    glNormal3f(0.0f, -0.035066f, -0.999384f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, -0.41f, -1.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.46f, 0.16f, -1.3f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.56f, 0.16f, -1.3f);

    glNormal3f(0.0066223f, 0.0f, -0.999978f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.46f, -0.41f, -1.3f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.46f, 0.16f, -1.3f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.56f, -0.41f, -1.28f);

    glNormal3f(0.0f, -0.992966f, 0.1183922f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.71f, -0.1f, 1.3f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.46f, -0.41f, -1.3f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.76f, -0.1f, 1.3f);

    glNormal3f(-0.000788f, -0.992887f, 0.1190559f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.46f, -0.41f, -1.3f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.56f, -0.41f, -1.28f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.76f, -0.1f, 1.3f);

    glNormal3f(-0.077227f, -0.987138f, 0.1399744f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.71f, -0.1f, 1.3f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.16f, -0.1f, 0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.46f, -0.41f, -1.3f);

    glNormal3f(0.0789002f, -0.986571f, 0.1430067f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.56f, -0.41f, -1.28f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(2.21f, -0.1f, 0.5f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.76f, -0.1f, 1.3f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_WINDOW]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.9397934f, 0.3417430f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.48f, 0.01f, 1.01f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.48f, 0.09f, 0.79f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.41f, 0.09f, 0.79f);

    glNormal3f(0.0f, 0.9397934f, 0.3417430f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.41f, 0.09f, 0.79f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.41f, 0.01f, 1.01f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.48f, 0.01f, 1.01f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(1.01f, 0.0f, -1.31f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(0.76f, -0.25f, -1.31f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(0.01f, 0.01f, -1.31f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.8f); glVertex3f(-0.76f, -0.25f, -1.31f);
    glTexCoord2f(0.8f,0.8f); glVertex3f(-1.01f, 0.0f, -1.31f);
    glTexCoord2f(0.5f,0.0f); glVertex3f(0.01f, 0.01f, -1.31f);
    glEnd();
    glEnable(GL_LIGHTING);
}
