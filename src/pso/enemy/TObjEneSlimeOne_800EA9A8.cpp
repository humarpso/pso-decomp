#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneSlimeOne__sub_800EA9A8(void* a0);
void TObjEneSlimeOne__sub_800EA9F4(void *arg0);
void TObjEneSlimeOne__sub_800EAA88(void* a0);
int TObjEneSlimeOne__sub_800EAB04(void*);
int TObjEneSlimeOne__sub_800EAD84(void);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
u16 TObjPlayer__sub_800115C4(void *, M2C_UNK, f32);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, void*);

    extern const float lbl_805DA6B4;
    extern const float lbl_805DA708;
void TObjEneSlimeOne__sub_800EA9A8(void* a0) { set_display_mode__15TObjEneSlimeOneFPvi((void*)(a0), (void*)(0)); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) & 0xfffbffff); *(float*)((char*)a0 + 0x398) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; }

extern f32 lbl_805DA6DC;

void TObjEneSlimeOne__sub_800EA9F4(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        if (TObjPlayer__sub_800115C4(arg0, 0, lbl_805DA6DC) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C8) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C8) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C8) = 5;
            }
            TObjEneSlimeOne__sub_800EAB04((void*)(arg0));
            return;
        }
        TObjEneSlimeOne__sub_800EAE78(arg0, 1);
    }
}

    extern const float lbl_805DA6B4;
    extern const float lbl_805DA708;
void TObjEneSlimeOne__sub_800EAA88(void* a0) { TObjEneSlimeOne__sub_800EAD84(); *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; *(float*)((char*)a0 + 0x3b0) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3ac) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a8) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a0) = lbl_805DA6B4; *(int*)((char*)a0 + 0x3c8) = 0; TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)7); set_display_mode__15TObjEneSlimeOneFPvi((void*)(a0), (void*)((void*)0)); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x40000); TObjEneSlimeOne__sub_800EAB04((void*)(a0)); }

}
