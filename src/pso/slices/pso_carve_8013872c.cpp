#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TWindow__close(void *);
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
extern u32 lbl_805D55F8;

void TLobby__sub_8013872C(void) {
    void *temp;
    temp = (void*)(u32)lbl_805D55C8;
    if (temp != 0) {
        TWindow__close(temp);
        lbl_805D55C8 = 0U;
    }
    temp = (void*)(u32)lbl_805D55CC;
    if (temp != 0) {
        TWindow__close(temp);
        lbl_805D55CC = 0U;
    }
    temp = (void*)(u32)lbl_805D55D0;
    if (temp != 0) {
        TWindow__close(temp);
        lbl_805D55D0 = 0U;
    }
    temp = (void*)(u32)lbl_805D55D8;
    if (temp != 0) {
        TWindow__close(temp);
        lbl_805D55D8 = 0U;
    }
    temp = (void*)(u32)lbl_805D55DC;
    if (temp != 0) {
        TWindow__close(temp);
        lbl_805D55DC = 0U;
    }
    temp = (void*)(u32)lbl_805D55E0;
    if (temp != 0) {
        TWindow__close(temp);
        lbl_805D55E0 = 0U;
    }
    temp = (void*)(u32)lbl_805D55E4;
    if (temp != 0) {
        TWindow__close(temp);
        lbl_805D55E4 = 0U;
    }
    temp = (void*)(u32)lbl_805D55E8;
    if (temp != 0) {
        TWindow__close(temp);
        lbl_805D55E8 = 0U;
    }
    temp = (void*)(u32)lbl_805D55EC;
    if (temp != 0) {
        queue_destruction__7TObjectFv(temp);
        lbl_805D55EC = 0U;
    }
    temp = (void*)(u32)lbl_805D55F0;
    if (temp != 0) {
        queue_destruction__7TObjectFv(temp);
        lbl_805D55F0 = 0U;
    }
    temp = (void*)(u32)lbl_805D55F8;
    if (temp != 0) {
        queue_destruction__7TObjectFv(temp);
        lbl_805D55F8 = 0U;
    }
    lbl_805D5594 = 0xE;
}

}
