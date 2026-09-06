#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void TWindowSubTradeMain__sub_802448E4(void *arg0);
void TWindow__close(u8 *arg0);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void fn_8024491C(void *arg0);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void fn_80244958(void *arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TWindowSubTradeMain__sub_80244A4C(u8 *arg0);
void disallow_rendering__7TObjectFv(void *);
void fn_802449E0(u8 *arg0);
s32 TWindowSubAreaMapDisp__sub_80246948();
s32 fn_80244994(void *arg0);
}

extern "C" {

void window_request_show(void *arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TWindowCtrlMain__sub_8024CE24();
s32 TWindowSubAreaMapDisp__sub_80246948();
f32 TWindowSubStatusDisp__sub_801A5228(s16);
M2C_UNK allow_rendering__7TObjectFv(void *);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void save_position__17TWindowSubComCardFPv(void* p);
s32 set_parent__7TObjectFP7TObject(s32, s32);

extern const f32 lbl_805DCAD4;

void TWindowSubTradeMain__sub_802448E4(void *arg0) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void*)((void *)((char *)arg0 + 48)));
    M2C_FIELD(arg0, u32 *, 0x50) = 3;
}

struct VOff_8024491C_arg0 { char pad_0[0x38]; char f_38[1]; };
void fn_8024491C(void *arg0) {
    struct VOff_8024491C_arg0 *self = (struct VOff_8024491C_arg0 *)arg0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void*)(self->f_38));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 72), self->f_38);
}

struct VOff_80244958_arg0 { char pad_0[0x30]; char f_30[1]; };
void fn_80244958(void *arg0) {
    struct VOff_80244958_arg0 *self = (struct VOff_80244958_arg0 *)arg0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void*)(self->f_30));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 64), self->f_30);
}

#pragma push
#pragma fp_contract on
s32 fn_80244994(void *arg0) {
    if (TWindowSubAreaMapDisp__sub_80246948() != 0) {
        return 0;
    }
    return (s32) ((u32) __cntlzw(M2C_FIELD(arg0, s32 *, 0x2C) & 4) >> 5);
}
#pragma pop

void fn_802449E0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & 0xFFFFFFF8);
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    disallow_rendering__7TObjectFv(arg0);
}

void TWindow__close(u8 *arg0) {
    TWindowSubTradeMain__sub_80244A4C((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x10);
}

void TWindowSubTradeMain__sub_80244A4C(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (!(temp_r3 & 1)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    if (temp_r3 & 2) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 | 4);
        return;
    }
    if (!(temp_r3 & 0x20)) {
        ((M2C_UNK)TBoss3Volopt__sub_8022675C((s32)((int) (0x53704)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0))));
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & 0xFFFFFFFE);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 2);
}

void window_request_show(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r3 & 1) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    if (temp_r3 & 2) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 | 4);
        return;
    }
    if (TWindowSubStatusDisp__sub_801A5228(M2C_FIELD(arg0, s16 *, 0x20)) > lbl_805DCAD4) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 3);
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 0x20)) {
        TBoss3Volopt__sub_8022675C((s32)(0x53703), (s32)(0), (s32)(0), (s32)(0));
    }
    allow_rendering__7TObjectFv(arg0);
}

}
