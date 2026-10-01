#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjEneBm3FlyNest__sub_800B4630(void *arg0, s16 arg1);
void render_parts__17TObjEneBm3FlyNestFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32, void *);

extern u8 *lbl_805D5108;

void render_parts__17TObjEneBm3FlyNestFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(M2C_FIELD(lbl_805D5108, void **, 0x42C), s32 *, 0xC), lbl_805D5108);
    TObjPlayer__sub_803D9B2C();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        TOHangerMachine01__sub_803D9C00(M2C_FIELD(arg0, void **, 0x30));
    } else {
        TOHangerMachine01__sub_803D9C00(M2C_FIELD(arg0, void **, 0x34));
    }
    TOHangerMachine01__sub_803D9C00(arg0 + 0x1C);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x40));
    set_global_flag__10TObjPlayerFv();
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(M2C_FIELD(lbl_805D5108, void **, 0x42C), s32 *, 8), M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x4C));
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
}

extern M2C_UNK lbl_804920B4[];

void *TObjEneBm3FlyNest__sub_800B4630(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804920B4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
