#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80313694 {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * csnVectorUnder(s32, void *, s32);
void set_active__12TObjEneReconFv(void);
extern s32 lbl_805D53A4;
extern const f32 TObjEneDelDepth__data_805DF270;
void TObjEneDelDepth__sub_80313694(u8 *arg0);
}

extern "C" {

void TObjEneDelDepth__sub_803138F8(void* a0);
void init_move__15TObjEneDelDepthFPv(void *arg0);
void start_attack_motion__15TObjEneDelDepthFPv(u8 *arg0);
void update_ai_state__15TObjEneDelDepthFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
int TObjEneDelDepth__sub_80316488(void*, void*);
u16 TObjPlayer__sub_800115C4(void *, void *, f32);
s32 get_type__15TObjEneDelDepthFPv(int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv();
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

    extern const float TObjEneDelDepth__data_805DF258;
    extern const float TObjEneDelDepth__data_805DF278;

void TObjEneDelDepth__sub_80313694(u8 *arg0) {
    Stack_80313694 stack;
    u8 *temp_r3;
    if ((lbl_805D53A4 % 5) == 0) {
        VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x38);
        stack.spC += TObjEneDelDepth__data_805DF270;
        temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 0x4000));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x3E0) = (s32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), s32 *, 0x18);
            VecCopy__FP3VecPC3Vec(arg0 + 0x3E4, M2C_FIELD(temp_r3, u8 **, 4));
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3E4, arg0 + 0x38);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x3E0) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
}

void TObjEneDelDepth__sub_803138F8(void* a0) { *(float*)((char*)a0 + 0x39c) = TObjEneDelDepth__data_805DF278; *(float*)((char*)a0 + 0x3a8) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a4) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a0) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x398) = TObjEneDelDepth__data_805DF258; TObjEneDelDepth__sub_80316488((void*)((void*)(*(int*)((char*)a0 + 0x37c))), (void*)((void*)6)); set_draw_mode__15TObjEneDelDepthFPvi((void*)(a0), (void*)((void*)0)); }

extern const f32 TObjEneDelDepth__data_805DF260;

void init_move__15TObjEneDelDepthFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    refresh_lobby_state__10TObjPlayerFPv();
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    if (get_type__15TObjEneDelDepthFPv((int)(M2C_FIELD(arg0, s32 *, 0x37C))) < 6) {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x22;
        TObjEneDelDepth__sub_80316488((void*)(M2C_FIELD(arg0, s32 *, 0x37C)), (void*)(5));
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x20;
        TObjEneDelDepth__sub_80316488((void*)(M2C_FIELD(arg0, s32 *, 0x37C)), (void*)(9));
    }
    set_draw_mode__15TObjEneDelDepthFPvi((void*)(arg0), (void*)(0));
}

extern const f32 TObjEneDelDepth__data_805DF270;
extern const f32 TObjEneDelDepth__data_805DF280;

void update_ai_state__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r0;
    u16 temp_r3;

    if (get_type__15TObjEneDelDepthFPv((int)((int) (M2C_FIELD(arg0, s32 *, 0x37C)))) < 6) {
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (5));
        }
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        M2C_FIELD(arg0, s32 *, 0x384) = temp_r0;
        if (temp_r0 <= 0) {
            temp_r3 = TObjPlayer__sub_800115C4((void *) (arg0), (void *) (&sp8), (f32) (TObjEneDelDepth__data_805DF280));
            if ((temp_r3 != 0xFFFF) && (TBoss6Kakusan__sub_803D8BD8((void *) (&sp8)) > TObjEneDelDepth__data_805DF270)) {
                TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (4));
                return;
            }
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (3));
            TBoss3Volopt__sub_8022675C((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
    }
}

extern const f32 TObjEneDelDepth__data_805DF260;

void start_attack_motion__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFBFFFF);
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    TBoss3Volopt__sub_8022675C((int) (0x4003A321), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    if (get_type__15TObjEneDelDepthFPv((int)((int) (M2C_FIELD(arg0, s32 *, 0x37C)))) < 6) {
        TObjEneDelDepth__sub_80316488((void*)((int) (M2C_FIELD(arg0, s32 *, 0x37C))), (void*)((int) (4)));
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x10;
        TObjEneDelDepth__sub_80316488((void*)((int) (M2C_FIELD(arg0, s32 *, 0x37C))), (void*)((int) (8)));
    }
    set_draw_mode__15TObjEneDelDepthFPvi((void*)((void *) (arg0)), (void*)((int) (0)));
}

}
