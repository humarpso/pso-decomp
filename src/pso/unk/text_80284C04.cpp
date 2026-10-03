#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80284C04 {
    f32 sp8;
    f32 spC;
};

extern "C" {
M2C_UNK TWindowSubSymbolChat__sub_8007714C(struct TWSC *, s32);
M2C_UNK TWindowSubSymbolChat__sub_800771B0(struct TWSC *, s32);
s32 TWindowSubSymbolChat__sub_800771C4(struct TWSC *, s32);
struct TWSC *get_instance__20TWindowSubSymbolChatFv();
s32 calc_remaining_slots__20TWindowSubSymbolChatFv();
s32 calc_symbol_index__20TWindowSubSymbolChatFPv(void *arg0);
void fn_80284CB8(void);
void copy_position__11TWindowMenuFPvPv(void *, void *);
f32 TWindowSubStatusDisp__sub_803D647C(f32);
extern const f32 lbl_805DD7C8;
extern const f32 lbl_805DD7CC;
extern const f32 lbl_805DD7D0;
extern const f32 lbl_805DD7D4;
void fn_80284C04(u8 *arg0);
}

extern "C" {

struct TWSC;

#pragma push
#pragma fp_contract on
void fn_80284C04(u8 *arg0) {
    Stack_80284C04 stack;
    M2C_FIELD(arg0, s8 *, 0x74) = (s8) TWindowSubStatusDisp__sub_803D647C((f32) M2C_FIELD(arg0, s16 *, 0x76) * lbl_805DD7C8);
    stack.sp8 = lbl_805DD7CC;
    stack.spC = (lbl_805DD7D4 * (f32) (s8) (u8) M2C_FIELD(arg0, s8 *, 0x74)) + lbl_805DD7D0;
    copy_position__11TWindowMenuFPvPv(M2C_FIELD(arg0, u8 **, 0x8C), &stack.sp8);
}
#pragma pop

void fn_80284CB8(void) {
    s32 var_r31;
    s32 temp_r30;
    s32 temp_r3;
    struct TWSC *temp_r29;
    temp_r30 = ((s32 (*)(void))calc_symbol_index__20TWindowSubSymbolChatFPv)();
    temp_r29 = get_instance__20TWindowSubSymbolChatFv();
    temp_r3 = calc_remaining_slots__20TWindowSubSymbolChatFv();
    if (temp_r3 > temp_r30) {
        TWindowSubSymbolChat__sub_8007714C(temp_r29, temp_r30);
        return;
    }
    temp_r30 -= temp_r3;
    for (var_r31 = 0; var_r31 < 4; var_r31 += 1) {
        if (TWindowSubSymbolChat__sub_800771C4(temp_r29, var_r31) != 0) {
            if (temp_r30-- <= 0) {
                TWindowSubSymbolChat__sub_800771B0(temp_r29, var_r31);
                return;
            }
        }
    }
}

}

extern "C" {

s32 calc_symbol_index__20TWindowSubSymbolChatFPv(void *arg0);

s32 calc_symbol_index__20TWindowSubSymbolChatFPv(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0x72) + ((s8) M2C_FIELD(arg0, u8 *, 0x73) * 4);
}

}
extern "C" {
#pragma push
struct Vec2_80284D68 { f32 x, y; };
struct Win_80284D68 {
    u8 pad[0x4C];
    f32 height;
    u8 pad2[0x68 - 0x50];
    Vec2_80284D68 pos;
    u8 pad3[2];
    s8 col;
    s8 row;
    u8 pad4[2];
    s16 count;
    u8 pad5[0x8C - 0x78];
    s32 card;
};

void clamp_list_scroll_offset(s32, Vec2_80284D68 *, Vec2_80284D68 *);
extern const f32 lbl_805DD7D4;
extern const f32 lbl_805DD7D8;
extern const f32 lbl_805DD7DC;
extern const f32 lbl_805DD7E0;
extern const f32 lbl_805DD7E4;
extern const f32 lbl_805DD7E8;

#pragma fp_contract on
void TWindowSubSymbolChat__sub_80284D68(Win_80284D68 *arg0, s32 arg1) {
    Vec2_80284D68 v;

    if (arg1 >= arg0->count) {
        arg1 = arg0->count - 1;
    }
    arg0->row = arg1 / 4;
    arg0->col = arg1 % 4;
    arg0->pos.y = lbl_805DD7D8 + (lbl_805DD7D4 * (f32)arg0->row + lbl_805DD7DC);
    arg0->pos.y -= lbl_805DD7E0;
    v.x = lbl_805DD7E4;
    v.y = arg0->height - lbl_805DD7E8 - lbl_805DD7D8;
    clamp_list_scroll_offset(arg0->card, &arg0->pos, &v);
}
#pragma pop
}
