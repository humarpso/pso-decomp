#include "pso/TBoss4ZakoDraw.h"

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
extern u8 lbl_80541E58[];
extern u32 lbl_805D4D74;
extern s32 lbl_805D6A70;
extern s32 lbl_805D6A74;
void run_task__14TBoss4ZakoDrawFv(void *arg0);
}

extern "C" {

void render__14TBoss4ZakoDrawFv(void);
int TCameraCtrl__sub_8030ABF4(void);
int end_effect_render__13TParticleCtrlFv(void);
int toggle_particle_effect__10TObjPlayerFv(void);

void render__14TBoss4ZakoDrawFv(void) { toggle_particle_effect__10TObjPlayerFv(); TCameraCtrl__sub_8030ABF4(); end_effect_render__13TParticleCtrlFv(); }
void run_task__14TBoss4ZakoDrawFv(void *arg0) {
    s32 old;
    if (lbl_805D4D74 == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    old = lbl_805D6A70;
    *(s32 *)(lbl_80541E58 + old * 0x784) = 0;
    lbl_805D6A70 = old ^ 1;
    if (++lbl_805D6A74 >= 4) {
        lbl_805D6A74 = 0;
    }
}
TBoss4ZakoDraw::~TBoss4ZakoDraw() {}

}
