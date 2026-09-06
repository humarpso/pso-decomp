#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80277638 {
    f32 sp8;
    f32 spC;
};

extern "C" {
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(int, int, void *);
M2C_UNK TWindowSubCustomSelect__sub_802776D0(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
void render__22TWindowSubCustomSelectFv(u8 *arg0);
void TWindowSubCustomEquip__sub_80275DE8(void *, void *, s32, f32);
extern const f32 TWindowSubCustomSelect__data_805DD5B0;
extern const f32 lbl_805DD5C4;
extern const f32 lbl_805DD5C8;
extern const f32 lbl_805DD5CC;
extern const f32 lbl_805DD5D0;
void TWindowSubCustomSelect__sub_80277638(u8 *arg0, u8 *arg1);
}

extern "C" {

void *__dt__22TWindowSubCustomSelectFv(void *arg0, s16 arg1);
void handle_cancel__22TWindowSubCustomSelectFPv(void *arg0);
void handle_decide__22TWindowSubCustomSelectFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window__15TWindowAdditionFPvs(void *, int);
s32 is_active__22TWindowSubCustomSelectFPv();
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

void handle_cancel__22TWindowSubCustomSelectFPv(void *arg0) {
    if (is_active__22TWindowSubCustomSelectFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x73) = (u8) (M2C_FIELD(arg0, u8 *, 0x73) | 2);
    }
}

void handle_decide__22TWindowSubCustomSelectFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x73) = (u8) (M2C_FIELD(arg0, u8 *, 0x73) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x7C), 2);
}

extern M2C_UNK __vt__22TWindowSubCustomSelect[];

#pragma push
#pragma fp_contract on
void TWindowSubCustomSelect__sub_80277638(u8 *arg0, u8 *arg1) {
    Stack_80277638 stack;
    stack.sp8 = (lbl_805DD5C8 * (f32) (s8) M2C_FIELD(arg0, u8 *, 0x70)) + lbl_805DD5C4;
    stack.spC = (TWindowSubCustomSelect__data_805DD5B0 * (f32) (s8) M2C_FIELD(arg0, u8 *, 0x71)) + lbl_805DD5CC;
    TWindowSubCustomEquip__sub_80275DE8(arg1, &stack.sp8, M2C_FIELD(arg0, s32 *, 0x74), lbl_805DD5D0);
}
#pragma pop

void render__22TWindowSubCustomSelectFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubCustomSelect__sub_802776D0((void *) (arg0), (int) (temp_r3));
    TWindowSubCustomSelect__sub_80277638((u8 *)((void *) (arg0)), (u8 *)((int) (temp_r3)));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x7C)), (int) (temp_r3));
    TWindowSubStatusDisp__sub_8026D790((int) (M2C_FIELD(arg0, s32 *, 0x80)), (int) (temp_r3), (void *) (arg0 + 0x68));
}

void *__dt__22TWindowSubCustomSelectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubCustomSelect;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x80), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x7C), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
