#include "eleet.h"

void init_aspmk2(int model)
{
    models[model].label = "        Asp Mk II        ";
    models[model].thrust = 1;
    models[model].opengl = obj_aspmk2;
    models[model].sxl = -0.5f;
    models[model].sxh = 0.15f;
    models[model].syl = -0.16f;
    models[model].syh = 0.33f;
    models[model].szl = -1.71f;
    models[model].szh = -1.71f;
    models[model].ixl = -0.001f;
    models[model].ixh = 0.001f;
    models[model].iyl = -0.001f;
    models[model].iyh = 0.001f;
    models[model].izl = -0.1f;
    models[model].izh = -0.01f;
}

void obj_aspmk2(void) {
    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.6179624f, -0.747786f, -0.242770f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.98f, -0.16f, -1.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.75f, -0.16f, 0.25f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.48f, -0.5f, 0.61f);

    glNormal3f(0.0f, -0.946772f, 0.3219027f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.65f, -0.16f, 1.61f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, -0.16f, 1.61f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.8f, -0.5f, 0.61f);

    glNormal3f(0.0f, -0.946772f, 0.3219027f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.65f, -0.16f, 1.61f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.8f, -0.5f, 0.61f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.48f, -0.5f, 0.61f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_RED]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.948683f, 0.3162277f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.5f, -0.235f, 1.41f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.58f, -0.435f, 0.81f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.41f, -0.435f, 0.81f);

    glNormal3f(0.0f, -0.948683f, 0.3162277f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.11f, -0.235f, 1.41f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.03f, -0.435f, 0.81f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.2f, -0.435f, 0.81f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, -0.989431f, -0.145002f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.8f, -0.5f, 0.61f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.33f, -0.16f, -1.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.48f, -0.5f, 0.61f);

    glNormal3f(0.0f, -0.989431f, -0.145002f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.33f, -0.16f, -1.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.98f, -0.16f, -1.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.48f, -0.5f, 0.61f);

    glNormal3f(0.2488134f, 0.9429169f, -0.221358f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.16f, 0.5f, -0.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.31f, 0.26f, 0.45f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.98f, -0.16f, -1.71f);

    glNormal3f(-0.243859f, 0.9443235f, -0.220874f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.16f, 0.5f, -0.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.33f, -0.16f, -1.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.66f, 0.26f, 0.45f);

    glNormal3f(0.3928501f, 0.9139779f, -0.101553f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.16f, 0.5f, -0.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.98f, -0.16f, -1.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.16f, 0.33f, -1.71f);

    glNormal3f(-0.384281f, 0.9175694f, -0.101952f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.33f, -0.16f, -1.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.16f, 0.5f, -0.18f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.16f, 0.33f, -1.71f);

    glNormal3f(0.0061103f, 0.9391304f, 0.3435065f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.16f, 0.5f, -0.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(0.65f, -0.16f, 1.61f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.31f, 0.26f, 0.45f);

    glNormal3f(0.0f, 0.9382535f, 0.3459482f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.16f, 0.5f, -0.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f, -0.16f, 1.61f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.65f, -0.16f, 1.61f);

    glNormal3f(-0.006011f, 0.9391490f, 0.3434572f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.16f, 0.5f, -0.18f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, 0.26f, 0.45f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, -0.16f, 1.61f);
    glEnd();

    glDisable(GL_LIGHTING);
    glColor3ub(255,255,255);
    glBindTexture(GL_TEXTURE_2D, textures[T_EXHAUST]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.15f, -0.16f, -1.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.5f, -0.16f, -1.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.16f, 0.33f, -1.71f);
    glEnd();
    glEnable(GL_LIGHTING);

    glBindTexture(GL_TEXTURE_2D, textures[T_METAL_SMOOTH]);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-0.5f, -0.16f, -1.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.33f, -0.16f, -1.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-0.16f, 0.33f, -1.71f);

    glNormal3f(0.0f, 0.0f, -1.0f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.15f, -0.16f, -1.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-0.16f, 0.33f, -1.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.98f, -0.16f, -1.71f);

    glNormal3f(-0.610983f, 0.7543774f, -0.240029f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.1f, -0.16f, 0.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, 0.26f, 0.45f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.33f, -0.16f, -1.71f);

    glNormal3f(-0.593393f, -0.770414f, -0.233119f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.1f, -0.16f, 0.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.33f, -0.16f, -1.71f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.8f, -0.5f, 0.61f);

    glNormal3f(-0.777352f, -0.020173f, 0.6287412f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-2.1f, -0.16f, 0.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.8f, -0.5f, 0.61f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f, -0.16f, 1.61f);

    glNormal3f(-0.691209f, 0.4579020f, 0.5590664f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f, -0.16f, 1.61f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(-1.66f, 0.26f, 0.45f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(-2.1f, -0.16f, 0.25f);

    glNormal3f(0.6912094f, 0.4579020f, 0.5590664f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(1.75f, -0.16f, 0.25f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.31f, 0.26f, 0.45f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(0.65f, -0.16f, 1.61f);

    glNormal3f(0.7766009f, 0.0483696f, 0.6281331f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.65f, -0.16f, 1.61f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.48f, -0.5f, 0.61f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.75f, -0.16f, 0.25f);

    glNormal3f(0.6109833f, 0.7543774f, -0.240029f);
    glTexCoord2f(0.0f,0.0f); glVertex3f(0.98f, -0.16f, -1.71f);
    glTexCoord2f(1.0f,1.0f); glVertex3f(1.31f, 0.26f, 0.45f);
    glTexCoord2f(0.0f,1.0f); glVertex3f(1.75f, -0.16f, 0.25f);
    glEnd();
}
