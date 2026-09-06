#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjFish__sub_8001EDB0(M2C_UNK, int);
M2C_UNK draw__16TObjEneRe7BeruraFPv(int);
M2C_UNK get_data__15TObjEneDelDepthFv();
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
void TObjEneDelDepth__sub_803162A8(u8 *arg0);
}

extern "C" {

int TObjEneDelDepth__sub_80316258(void);
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

extern f32 lbl_805D6AC8;
extern u8 lbl_805D6ACC;
extern f32 lbl_805DF2E8;

#pragma push
#pragma fp_contract on
void TObjEneDelDepth__sub_803162A8(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 != -1) {
        if (temp_r0 < 6) {
            set_global_param__8TObjFishFi(TObjFish__sub_8001EDB0(get_data__15TObjEneDelDepthFv(), 0));
            draw__16TObjEneRe7BeruraFPv((int) (M2C_FIELD(arg0, s32 *, 0)));
            return;
        }
        if (temp_r0 < 0xA) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0xC)));
            set_global_flag__10TObjPlayerFv();
            TObjEneSlimeOne__sub_803E4AF4((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10)), (f32) (M2C_FIELD(arg0, f32 *, 0x28)));
            clear_global_state__10TObjPlayerFv();
            return;
        }
        set_global_flag__10TObjPlayerFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0xC)));
        TObjEneSlimeOne__sub_803E4AF4((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10)), (f32) (M2C_FIELD(arg0, f32 *, 0x28)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x18)));
        TObjEneSlimeOne__sub_803E4AF4((int) (M2C_FIELD(arg0, s32 *, 0x14)), (int) (M2C_FIELD(arg0, s32 *, 0x1C)), (f32) (M2C_FIELD(arg0, f32 *, 0x28)));
        clear_global_state__10TObjPlayerFv();
    }
}
#pragma pop

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
