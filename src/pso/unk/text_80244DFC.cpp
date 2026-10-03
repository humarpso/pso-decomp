#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_80244DFC { u8 pad[0xC]; Win_80244DFC *next; };

extern "C" {
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
f32 get_card_window_scale__20TWindowSubStatusDispFi(int);
M2C_UNK play_sound_effect(int, int, int, int);
M2C_UNK save_position__17TWindowSubComCardFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80257D44(void *, int, int);
M2C_UNK TWindowCtrlMain__sub_8026CCA4(void *, f32);
extern s32 lbl_805D3888;
extern const f32 lbl_805DCAD4;
extern const f32 lbl_805DCAE0;
void TWindowBase__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3);
void TWindowFukidasi__sub_80244F00(s32 arg0, s32 arg1);
s32 TWindowFukidasi__sub_8024695C(void *);
s32 fn_80244994(void *);
s32 fn_80244D70(void *, void *, void *);
s32 get_visible_flag__15TWindowFukidasiFPv(void *);
s32 is_bit10_set__15TWindowFukidasiFPv(void *);
Win_80244DFC *TWindowFukidasi__sub_80244DFC(Win_80244DFC *self, void *a, void *b, Win_80244DFC *p);
}

extern "C" {

Win_80244DFC *TWindowFukidasi__sub_80244DFC(Win_80244DFC *self, void *a, void *b, Win_80244DFC *p) {
    if (TWindowFukidasi__sub_8024695C(self) == 0) {
        return 0;
    }
    if (is_bit10_set__15TWindowFukidasiFPv(self) != 0) {
        return 0;
    }
    if (fn_80244994(self) == 0) {
        return 0;
    }
    for (; p != 0; p = p->next) {
        if (TWindowFukidasi__sub_8024695C(p) != 0 && is_bit10_set__15TWindowFukidasiFPv(p) == 0 &&
            fn_80244994(p) != 0 && p != self &&
            (get_visible_flag__15TWindowFukidasiFPv(self) == 0 || get_visible_flag__15TWindowFukidasiFPv(p) == 0) &&
            fn_80244D70(p, a, b) != 0) {
            return p;
        }
    }
    return 0;
}

void TWindowFukidasi__sub_80244F00(s32 arg0, s32 arg1) {
    TWindowFukidasi__sub_80244DFC((Win_80244DFC *)((void *) (arg0)), (void *)((void *) (arg0 + 0x30)), (void *)((void *) (arg0 + 0x38)), (Win_80244DFC *)((void *) (arg1)));
}

void TWindowBase__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3) {
    f32 temp_f1;
    s32 temp_r3;
    s32 temp_r3_2;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3888;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x30), (void *) (arg2));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x38), (void *) (arg1));
    save_position__17TWindowSubComCardFPv((void *) (arg0));
    temp_f1 = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x1C) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DCAE0;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    TWindowCtrlMain__sub_8026CCA4((void *) (arg0), (f32) (temp_f1));
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = arg3;
    TWindowSubStatusDisp__sub_80257D44((void *) (arg0 + 0x24), (int) (M2C_FIELD(arg1, s32 *, 0xC)), (int) (M2C_FIELD(arg0, s16 *, 0x20)));
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (!(temp_r3 & 1) && !(temp_r3 & 2)) {
        disallow_rendering__7TObjectFv((void *) (arg0));
    }
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    if ((temp_r3_2 & 1) && (temp_r3_2 & 2) && !(temp_r3_2 & 0x20)) {
        play_sound_effect((int) (0x53703), (int) (0), (int) (0), (int) (0));
    }
    if (get_card_window_scale__20TWindowSubStatusDispFi((int) (M2C_FIELD(arg0, s16 *, 0x20))) <= lbl_805DCAD4) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
}

}
