#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TFogCtrl__sub_800FBA58(void);
void TFogCtrl__sub_800FBAAC(void);
int fn_800FC0D8(void* p);
void reset__8TFogCtrlFv(void);
M2C_UNK TFogCtrl__sub_800FBA54(M2C_UNK);
M2C_UNK TObjFogCollisionPoison__sub_801533BC();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK destroy_instance__22TQuestVmDownLoadServerFv();
int fn_800FC0F8(void*);
M2C_UNK fn_803E1FC8(M2C_UNK);
M2C_UNK fn_803E1FFC(f32, f32);
M2C_UNK fn_803E2070();
M2C_UNK free__11TOBoss4RockFUi(void*);

extern M2C_UNK TFogCtrl__data_80501188[];

void TFogCtrl__sub_800FBA58(void) {
    s32 var_r29;
    s32 var_r31;
    M2C_UNK temp_r3;

    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r3 = *(TFogCtrl__data_80501188 + var_r31);
        if ((u32) temp_r3 != 0U) {
            TFogCtrl__sub_800FBA54(temp_r3);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
}

void TFogCtrl__sub_800FBAAC(void) {  }

extern u32 lbl_805D5388;
extern f32 lbl_805DA964;
extern f32 lbl_805DA968;

void reset__8TFogCtrlFv(void) {
    TObjFogCollisionPoison__sub_801533BC();
    destroy_instance__22TQuestVmDownLoadServerFv();
    if ((u32) lbl_805D5388 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5388);
    }
    lbl_805D5388 = 0U;
    fn_803E1FC8(-1);
    fn_803E1FFC(lbl_805DA964, lbl_805DA968);
    fn_803E2070();
    begin_effect_render__13TParticleCtrlFv();
}

int fn_800FC0D8(void* p) { return fn_800FC0F8(p); }

}
