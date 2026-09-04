#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enter_appear_state__15TObjEneDelDepthFPv(u8 *arg0);
void enter_state8__15TObjEneDelDepthFPv(u8 *arg0);
void init_depth__15TObjEneDelDepthFPv(void *arg0);
void init_draw_state__15TObjEneDelDepthFPv(void* p);
void setup_depth_draw__15TObjEneDelDepthFPv(void* p);
void try_enter_appear__15TObjEneDelDepthFPv(u8 *arg0);
void try_relocate_on_timer__15TObjEneDelDepthFPv(u8 *arg0);
void update_state__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
int TObjEneDelDepth__sub_80316488(void*, void*);
u16 TObjPlayer__sub_800115C4(void *, int, f32);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 get_flag_bit4__15TObjEneDelDepthFPv(void *);
s32 is_state_complete__15TObjEneDelDepthFPv(int);
M2C_UNK set_default_depth_offset__15TObjEneDelDepthFPv(void *);
int set_depth_offset__15TObjEneDelDepthFPvii(void*, void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

void init_draw_state__15TObjEneDelDepthFPv(void* p) { *(int*)((char*)p + 0x384) = 30; *(int*)((char*)p + 0x388) = 8; TObjEneDelDepth__sub_80316488((void*)(*(void**)((char*)p + 0x37c)), (void*)((void*)2)); set_draw_mode__15TObjEneDelDepthFPvi((void*)(p), (void*)((void*)2)); }

void setup_depth_draw__15TObjEneDelDepthFPv(void* p) { set_depth_offset__15TObjEneDelDepthFPvii((void*)(p), (void*)((void*)30), (void*)((void*)30)); TObjEneDelDepth__sub_80316488((void*)(*(void**)((char*)p + 0x37c)), (void*)((void*)0)); set_draw_mode__15TObjEneDelDepthFPvi((void*)(p), (void*)((void*)2)); }

extern f32 TObjEneDelDepth__data_805DF298;

void init_depth__15TObjEneDelDepthFPv(void *arg0) {
    set_depth_offset__15TObjEneDelDepthFPvii((void*)(arg0), (void*)(0x1E), (void*)(0x1E));
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0x888;
    if (calc_boss4_scale__10TObjPlayerFi(arg0) > TObjEneDelDepth__data_805DF298) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = M2C_FIELD(arg0, s32 *, 0x3BC) * 0xFFFFFFFF;
    }
    TObjEneDelDepth__sub_80316488((void*)(M2C_FIELD(arg0, s32 *, 0x37C)), (void*)(0));
    set_draw_mode__15TObjEneDelDepthFPvi((void*)(arg0), (void*)(2));
}

void try_enter_appear__15TObjEneDelDepthFPv(u8 *arg0) {
    if (is_state_complete__15TObjEneDelDepthFPv((int)((int) (M2C_FIELD(arg0, s32 *, 0x37C)))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
        TObjEneDelDepth__sub_803154A8((void *)((void *) (arg0)), (int)((int) (3)));
        TBoss3Volopt__sub_8022675C((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
}

void enter_appear_state__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x14;
    TBoss3Volopt__sub_8022675C((int) (0x4003A820), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    TObjEneDelDepth__sub_80316488((void*)((int) (M2C_FIELD(arg0, s32 *, 0x37C))), (void*)((int) (0xB)));
    set_draw_mode__15TObjEneDelDepthFPvi((void*)((void *) (arg0)), (void*)((int) (1)));
}

void update_state__15TObjEneDelDepthFPv(void *arg0) {
    if (is_state_complete__15TObjEneDelDepthFPv((int)(M2C_FIELD(arg0, s32 *, 0x37C))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        if (get_flag_bit4__15TObjEneDelDepthFPv(arg0) != 0) {
            TObjEneDelDepth__sub_803154A8((void *)(arg0), (int)(7));
            return;
        }
        TObjEneDelDepth__sub_803154A8((void *)(arg0), (int)(6));
    }
}

void enter_state8__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
    M2C_FIELD(arg0, s32 *, 0x388) = 8;
    TObjEneDelDepth__sub_80316488((void*)((int) (M2C_FIELD(arg0, s32 *, 0x37C))), (void*)((int) (0xA)));
    TBoss3Volopt__sub_8022675C((int) (0x4003A820), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    set_draw_mode__15TObjEneDelDepthFPvi((void*)((void *) (arg0)), (void*)((int) (1)));
}

extern const f32 TObjEneDelDepth__data_805DF26C;

void try_relocate_on_timer__15TObjEneDelDepthFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
    M2C_FIELD(arg0, s32 *, 0x384) = temp_r0;
    if (temp_r0 <= 0) {
        if (TObjPlayer__sub_800115C4((void *) (arg0), (int) (0), (f32) (TObjEneDelDepth__data_805DF26C)) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C0) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C0) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C0) = 5;
            }
            set_default_depth_offset__15TObjEneDelDepthFPv((void *) (arg0));
            return;
        }
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        TObjEneDelDepth__sub_803154A8((void *)((void *) (arg0)), (int)((int) (1)));
    }
}

}
