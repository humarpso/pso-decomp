#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneSlimeOne__sub_800E9ABC(u8 *arg0);
void TObjEneSlimeOne__sub_800E9B7C(void* p);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
s32 TObjEneSlimeOne__sub_800EC41C(void *);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
M2C_UNK create__21TObjEneSlimeWaterBombFPvPv(void *, void *);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, void*);

void TObjEneSlimeOne__sub_800E9ABC(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x394) = (s32) (M2C_FIELD(arg0, s32 *, 0x394) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r0 > 0) {
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0xFF);
    } else if (temp_r0 == 0) {
        TBoss3Volopt__sub_8022675C(0x4003A017, arg0 + 0x38, 0, 0);
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0xE2);
        create__21TObjEneSlimeWaterBombFPvPv(arg0, arg0);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (TObjEneSlimeOne__sub_800EC41C(arg0) != 0) {
            TObjEneSlimeOne__sub_800EAE78(arg0, 7);
            return;
        }
        TObjEneSlimeOne__sub_800EAE78(arg0, 5);
    }
}

void TObjEneSlimeOne__sub_800E9B7C(void* p) { *(int*)((char*)p + 0x390) = 90; *(int*)((char*)p + 0x394) = 19; TObjEneSlimeOne__sub_800EC7F4(*(void**)((char*)p + 0x388), (void*)3); set_display_mode__15TObjEneSlimeOneFPvi(p, (void*)2); }

}
