#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_display_state__15TObjEneSlimeOneFPv(void* a0);
void tick_timer__15TObjEneSlimeOneFPv(void *arg0);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, s32);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, void*);

    extern const float lbl_805DA67C;
void reset_display_state__15TObjEneSlimeOneFPv(void* a0) { *(float*)((char*)a0 + 0x3b0) = lbl_805DA67C; *(float*)((char*)a0 + 0x3ac) = lbl_805DA67C; *(float*)((char*)a0 + 0x3a8) = lbl_805DA67C; *(int*)((char*)a0 + 0x394) = 0; TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)4); set_display_mode__15TObjEneSlimeOneFPvi(a0, (void*)2); }

void tick_timer__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEneSlimeOne__sub_800EAE78(arg0, 5);
    }
}

}
