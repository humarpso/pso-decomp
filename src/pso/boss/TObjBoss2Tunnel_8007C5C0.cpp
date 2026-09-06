#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8007CBC4 {
    M2C_UNK sp8;
    u8 pad_C[0x54];
    M2C_UNK sp60;
};

struct Stack_8007CAE8 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
M2C_UNK DCFlushRange(int, int);
s32 TObjPlayer__sub_800845F8();
s32 TAdPlayerLoadGC__sub_801E1538(void *, int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
M2C_UNK memcpy(int, void *, int);
extern s32 lbl_805D49B4;
extern s16 TObjBoss2Tunnel__data_805D4E8A;
extern s32 TObjBoss2Tunnel__data_805D4E90;
s32 TObjBoss2Tunnel__sub_8007CBC4(void);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_800842A4(int, void *, void *, int, f32);
extern const f32 lbl_805D9224;
extern const f32 lbl_805D9228;
extern const f32 lbl_805D922C;
extern const f32 lbl_805D9230;
void TObjBoss2Tunnel__sub_8007CAE8(u32 arg0);
}

extern "C" {

s32 memcard_check_snapshot(M2C_UNK, M2C_UNK);
s32 load_player_slot__23TAdSinglePlyChrSelectGCFPvii(M2C_UNK, M2C_UNK *, s32);
extern M2C_UNK TObjBoss2Tunnel__data_80438A08[];
extern s16 TObjBoss2Tunnel__data_805D4E8A;
extern s32 TObjBoss2Tunnel__data_805D4E90;

void TObjBoss2Tunnel__sub_8007CAE8(u32 arg0) {
    Stack_8007CAE8 stack;
    if (arg0 == 0U) {
        stack.sp10 = lbl_805D9224;
        stack.sp14 = lbl_805D9228;
    } else {
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&stack.sp10), (void *) (arg0));
    }
    stack.sp8 = lbl_805D922C;
    stack.spC = lbl_805D9230;
    TObjPlayer__sub_800842A4((int) (-1), (void *) (&stack.sp10), (void *) (&stack.sp8), (int) (1), (f32) (lbl_805D922C));
}

s32 TObjBoss2Tunnel__sub_8007CBC4(void) {
    Stack_8007CBC4 stack;
    s32 temp_r31;
    if (TAdPlayerLoadGC__sub_801E1B50((int) (1)) == 0) {
        if (((s32) (*(u16 *)&TObjBoss2Tunnel__data_805D4E8A) != 0) && ((s32) (*(u16 *)&TObjBoss2Tunnel__data_805D4E8A) >= 0) && ((s32) (*(u16 *)&TObjBoss2Tunnel__data_805D4E8A) < 3)) {
            temp_r31 = TObjPlayer__sub_800845F8();
            if (TAdPlayerLoadGC__sub_801E1538((void *) (&stack.sp8), (int) (TObjBoss2Tunnel__data_805D4E90)) == 0) {
                memcpy((int) (temp_r31), (void *) (stack.sp60 + 8), (int) (0x1818C));
                DCFlushRange((int) (temp_r31), (int) (0x1818C));
            }
            lbl_805D49B4 = 0;
        }
        return 1;
    }
    return 0;
}

s32 save_screen_snapshot(void) {
    if (memcard_check_snapshot(1, 0) == 0) {
        return 0;
    }
    if (load_player_slot__23TAdSinglePlyChrSelectGCFPvii(1, TObjBoss2Tunnel__data_80438A08, TObjBoss2Tunnel__data_805D4E90) != 0) {
        return 0;
    }
    TObjBoss2Tunnel__data_805D4E8A = 2;
    return 1;
}

}
