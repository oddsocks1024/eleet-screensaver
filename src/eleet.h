/*
Copyright (C) 2009-2010 Ian Chapman

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#include "config.h"
#ifdef HAVE_GL_GL_H
#include <GL/gl.h>
#else
#include <OpenGL/gl.h>
#endif
#ifdef HAVE_GL_GLU_H
#include <GL/glu.h>
#else
#include <OpenGL/glu.h>
#endif
#include "SDL.h"
#include "SDL_ttf.h"

/* Larger = Higher quality text textures but more memory use */
#define FONT_SIZE 100

/* Draw a frame every 30ms (~ 33fps) */
#define FRAME_INTERVAL 30

/* Default time to next model switch in ms */
#define MODEL_SWITCH 60000

/* Starting point to Zoom from */
#define ZOOMSTART -50.0f

/* End point to stop Zooming */
#define ZOOMSTOP -8.0f

/* Star Plane Size (actually its half width -x to +x) */
#define STARPSIZE 7.0f

/* Minimum number of stars */
#define MINSTARNUM 10

/* Default Number of Stars */
#define STARNUM 250

/* Maximum number of stars */
#define MAXSTARNUM 1000

/* Minimum number of thrust particles */
#define MINTHRUSTNUM 100

/* Number of Thrust Particles */
#define THRUSTNUM 500

/* Maximum number of thrust particles */
#define MAXTHRUSTNUM 1000

/* Number of Textures to Load */
#define N_TEXTURES 14

/* Number of Models */
#define N_MODELS 53

#ifndef ELEETSTRUCTS__H
#define ELEETSTRUCTS__H
struct starfield
{
    float x;
    float y;
    float z;
    float size;
    int life;
    int r;
    int g;
    int b;
};

struct thrustfield
{
    float x;
    float y;
    float z;
    float ix;
    float iy;
    float iz;
    float incx;
    float incy;
    float incz;
    int life;
    int g;
};

struct ship
{
    char *label;
    GLuint modelDL;
    GLuint labelDL;
    GLuint labeltexture;
    void (*opengl)(void);
    unsigned int thrust;
    float sxl;
    float sxh;
    float syl;
    float syh;
    float szl;
    float szh;
    float ixl;
    float ixh;
    float iyl;
    float iyh;
    float izl;
    float izh;
};
#endif


#ifndef ELEETENUMS__H
#define ELEETENUMS__H
enum TIMERS
{
    TIM_FRAME_INTERVAL = 0,
    TIM_MODEL_SWITCH
};

enum TEXTURES
{
    T_METAL_SILVER = 0,
    T_EXHAUST,
    T_WINDOW,
    T_METAL_ALIEN,
    T_DOCKING,
    T_METAL_BLUE,
    T_ROCK,
    T_METAL_SMOOTH,
    T_METAL_RED,
    T_METAL_POLICE,
    T_METAL_POLICE2,
    T_METAL_GREEN,
    T_METAL_SMOOTH_RED,
    T_METAL_SMOOTH_GREEN,
    T_TEXT
};

enum MODELS
{
    M_ADDER = 0,
    M_ANACONDA,
    M_ANACONDA_ARC,
    M_ASP,
    M_ASPMK2,
    M_ASTEROID,
    M_BOA,
    M_BOAMK2,
    M_BOULDER,
    M_BUSHMASTER,
    M_CAIMAN,
    M_CARGO,
    M_COBRAFS,
    M_COBRAMK1,
    M_COBRAMK1_ARC,
    M_COBRAMK3_ARC,
    M_CONSTRICTOR,
    M_CONSTRICTOR_ARC,
    M_CORIOLIS,
    M_CORIOLIS_ARC,
    M_DELTA,
    M_DODEC,
    M_DRAKE,
    M_ESCAPEPOD,
    M_FERDELANCE,
    M_FERDELANCE_ARC,
    M_GECKO,
    M_GECKO_ARC,
    M_GNAT,
    M_GRIFFIN,
    M_HAWK,
    M_HOGNOSE,
    M_KRAIT,
    M_MAMBA,
    M_MAMBA_ARC,
    M_MISSILE,
    M_MOCCASIN,
    M_MORAY,
    M_MORAY_ARC,
    M_PYTHON,
    M_PYTHON_ARC,
    M_RACER,
    M_REMLOCK,
    M_SHUTTLE,
    M_SIDEWINDER,
    M_THARGLET,
    M_THARGOID,
    M_THARGON,
    M_TRANSPORTER,
    M_URUTU,
    M_VIPER,
    M_WORM,
    M_ZARCH
};
#endif

extern GLuint textures[];
extern struct ship models[];

/* General Protos */
int _exit_(int code);
Uint32 _frametimer(Uint32 interval, void *param);
Uint32 _modelswitchtimer(Uint32 interval, void *param);
int genRandInt(int low, int high);
float genRandFloat(float low, float high);
SDL_Surface *loadTexture(char *filename);
TTF_Font *loadFont(void);
SDL_Surface *renderFont(char *txt, TTF_Font *font);
SDL_Surface *renderFontPOT(char *txt, TTF_Font *font);
void initTextures(void);

/* Model Protos */
void init_adder(int model);
void obj_adder(void);
void init_anaconda(int model);
void obj_anaconda(void);
void init_anaconda_arc(int model);
void obj_anaconda_arc(void);
void init_asp(int model);
void obj_asp(void);
void init_aspmk2(int model);
void obj_aspmk2(void);
void init_asteroid(int model);
void obj_asteroid(void);
void init_boa(int model);
void obj_boa(void);
void init_boamk2(int model);
void obj_boamk2(void);
void init_bushmaster(int model);
void obj_bushmaster(void);
void init_boulder(int model);
void obj_boulder(void);
void init_caiman(int model);
void obj_caiman(void);
void init_cargo(int model);
void obj_cargo(void);
void init_cobrafs(int model);
void obj_cobrafs(void);
void init_cobramk1(int model);
void obj_cobramk1(void);
void init_cobramk1_arc(int model);
void obj_cobramk1_arc(void);
void init_cobramk3_arc(int model);
void obj_cobramk3_arc(void);
void init_constrictor(int model);
void obj_constrictor(void);
void init_constrictor_arc(int model);
void obj_constrictor_arc(void);
void init_coriolis(int model);
void obj_coriolis(void);
void init_coriolis_arc(int model);
void obj_coriolis_arc(void);
void init_delta(int model);
void obj_delta(void);
void init_dodec(int model);
void obj_dodec(void);
void init_drake(int model);
void obj_drake(void);
void init_escapepod(int model);
void obj_escapepod(void);
void init_ferdelance(int model);
void obj_ferdelance(void);
void init_ferdelance_arc(int model);
void obj_ferdelance_arc(void);
void init_gecko(int model);
void obj_gecko(void);
void init_gecko_arc(int model);
void obj_gecko_arc(void);
void init_gnat(int model);
void obj_gnat(void);
void init_griffin(int model);
void obj_griffin(void);
void init_hawk(int model);
void obj_hawk(void);
void init_hognose(int model);
void obj_hognose(void);
void init_krait(int model);
void obj_krait(void);
void init_mamba(int model);
void obj_mamba(void);
void init_mamba_arc(int model);
void obj_mamba_arc(void);
void init_missile(int model);
void obj_missile(void);
void init_moccasin(int model);
void obj_moccasin(void);
void init_moray(int model);
void obj_moray(void);
void init_moray_arc(int model);
void obj_moray_arc(void);
void init_python(int model);
void obj_python(void);
void init_python_arc(int model);
void obj_python_arc(void);
void init_racer(int model);
void obj_racer(void);
void init_remlock(int model);
void obj_remlock(void);
void init_shuttle(int model);
void obj_shuttle(void);
void init_sidewinder(int model);
void obj_sidewinder(void);
void init_tharglet(int model);
void obj_tharglet(void);
void init_thargoid(int model);
void obj_thargoid(void);
void init_thargon(int model);
void obj_thargon(void);
void init_transporter(int model);
void obj_transporter(void);
void init_urutu(int model);
void obj_urutu(void);
void init_viper(int model);
void obj_viper(void);
void init_worm(int model);
void obj_worm(void);
void init_zarch(int model);
void obj_zarch(void);
