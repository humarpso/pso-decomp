#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss4ZakoDraw.h"

TBoss4ZakoDraw::~TBoss4ZakoDraw() {}
#else
#if PSO_CLASS_PACKAGE == 0x8030A884
#include "types.h"

extern "C" {

void render__14TBoss4ZakoDrawFv(void);
int toggle_particle_effect__10TObjPlayerFv(void);
int end_effect_render__13TParticleCtrlFv(void);
int TCameraCtrl__sub_8030ABF4(void);

void render__14TBoss4ZakoDrawFv(void) { toggle_particle_effect__10TObjPlayerFv(); TCameraCtrl__sub_8030ABF4(); end_effect_render__13TParticleCtrlFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030A96C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__14TBoss4ZakoDrawFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__14TBoss4ZakoDraw[];
extern void *lbl_805D40D0;

void *__ct__14TBoss4ZakoDrawFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss4ZakoDraw;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40D0;
    return arg0;
}

}
#endif
#endif
