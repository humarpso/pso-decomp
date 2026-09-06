#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
f32 TObjPlayer__sub_803D99F8(void *, void *);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
s32 TBoss7Tentacle__sub_803D9BA0(void *);
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 TOSignCave03__sub_803DB510(int);
void fn_801FBA6C(u8 *arg0);
}

extern "C" {

int is_card_flag_set__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int is_card_flag_set__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 1); }
void fn_801FBA6C(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    u8 *var_r30;
    var_r30 = (u8 *)(arg0);
    do {
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        TObjPlayer__sub_803D9B2C();
        if (!(temp_r31 & 1)) {
            TOHangerMachine01__sub_803D9C00((void *) (var_r30 + 8));
        }
        if (!(temp_r31 & 2)) {
            TObjPlayer__sub_803D99F8((void *) (var_r30 + 0x14), (void *) (temp_r31 & 0x20));
        }
        if (!(temp_r31 & 4)) {
            TBoss7Tentacle__sub_803D9BA0((void *) (var_r30 + 0x20));
        }
        if (!(temp_r31 & 0x100000)) {
            end_effect_render__13TParticleCtrlFv();
        } else {
            begin_effect_render__13TParticleCtrlFv();
        }
        if (!(temp_r31 & 8)) {
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(var_r30, s32 *, 4)));
        }
        if (!(temp_r31 & 0x10)) {
            temp_r3 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x2C));
            if (temp_r3 != NULL) {
                fn_801FBA6C(temp_r3);
            }
        }
        TObjPlayer__sub_803D9B78();
        var_r30 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x30));
    } while (var_r30 != NULL);
}

}
