#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneDelDepth__sub_80316258(void);
int TObjEneDelDepth__sub_803162A8(void);
s32 conditional_delete__15TObjEneDelDepthFis(s32 arg0, s16 arg1);
void fn_80316680(void *arg0, s32 arg1);
int get_flag_bit4__15TObjEneDelDepthFPv(void* p);
s32 get_type__15TObjEneDelDepthFPv(void* p);
s32 is_state_complete__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK __dl__FPv();
f32 get_depth_radius__19TObjEneDelDepthBombFPv(void* p);

int get_flag_bit4__15TObjEneDelDepthFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

int TObjEneDelDepth__sub_80316258(void) { return 0; }

s32 get_type__15TObjEneDelDepthFPv(void* p) { return *(s32*)((char*)p + 0x4); }

int TObjEneDelDepth__sub_803162A8(void) { return 0; }

extern f32 lbl_805D6AC8;
extern u8 lbl_805D6ACC;
extern f32 lbl_805DF2E8;

s32 is_state_complete__15TObjEneDelDepthFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == -1) {
        return 1;
    }
    if (temp_r0 < 6) {
        return 0;
    }
    if ((s8) lbl_805D6ACC == 0) {
        f32 temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
        lbl_805D6ACC = 1;
        lbl_805D6AC8 = temp_f1 - lbl_805DF2E8;
    }
    if (M2C_FIELD(arg0, f32 *, 0x28) == lbl_805D6AC8) {
        return 1;
    }
    return 0;
}

s32 conditional_delete__15TObjEneDelDepthFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

void fn_80316680(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}

}
