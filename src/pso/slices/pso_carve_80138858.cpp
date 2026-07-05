#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(s32);
M2C_UNK TLobby__sub_80137C90();
M2C_UNK TWindow__close(s32);
extern s32 lbl_805D5594;
extern u32 lbl_805D55C8;
extern u32 lbl_805D55CC;
extern u32 lbl_805D55D0;
extern u32 lbl_805D55D8;
extern u32 lbl_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55E8;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern u32 lbl_805D55F8;

void TLobby__sub_80138858(void) {
    if ((u32) lbl_805D55C8 != 0U) {
        TWindow__close(lbl_805D55C8);
        lbl_805D55C8 = 0U;
    }
    if ((u32) lbl_805D55CC != 0U) {
        TWindow__close(lbl_805D55CC);
        lbl_805D55CC = 0U;
    }
    if ((u32) lbl_805D55D0 != 0U) {
        TWindow__close(lbl_805D55D0);
        lbl_805D55D0 = 0U;
    }
    if ((u32) lbl_805D55D8 != 0U) {
        TWindow__close(lbl_805D55D8);
        lbl_805D55D8 = 0U;
    }
    if ((u32) lbl_805D55DC != 0U) {
        TWindow__close(lbl_805D55DC);
        lbl_805D55DC = 0U;
    }
    if ((u32) lbl_805D55E0 != 0U) {
        TWindow__close(lbl_805D55E0);
        lbl_805D55E0 = 0U;
    }
    if ((u32) lbl_805D55E4 != 0U) {
        TWindow__close(lbl_805D55E4);
        lbl_805D55E4 = 0U;
    }
    if ((u32) lbl_805D55E8 != 0U) {
        TWindow__close(lbl_805D55E8);
        lbl_805D55E8 = 0U;
    }
    if ((u32) lbl_805D55EC != 0U) {
        queue_destruction__7TObjectFv(lbl_805D55EC);
        lbl_805D55EC = 0U;
    }
    if ((u32) lbl_805D55F0 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D55F0);
        lbl_805D55F0 = 0U;
    }
    if ((u32) lbl_805D55F4 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D55F4);
        lbl_805D55F4 = 0U;
    }
    if ((u32) lbl_805D55F8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D55F8);
        lbl_805D55F8 = 0U;
    }
    TLobby__sub_80137C90();
    lbl_805D5594 = 0;
}

}
