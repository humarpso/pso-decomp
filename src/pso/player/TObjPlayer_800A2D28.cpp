#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_800A2D28(void *arg0);
void TObjPlayer__sub_800A2D74(void);
M2C_UNK TEneEffHamon__sub_800A380C();
void TLobby__sub_8001FE7C(void*, int);
void *TObjPlayer__sub_800A2F94(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TObjPlayer__sub_800A4288();
void TObjPlayer__sub_801E483C(void*);

extern void *tl_04;

void *TObjPlayer__sub_800A2D28(void *arg0) {
    void *o = __nw__7TObjectFUl(0x42C);
    if (o != NULL) {
        o = TObjPlayer__sub_800A2F94(o, tl_04, arg0);
    }
    return o;
}

extern u32 lbl_805D500C;
extern u32 lbl_805D5010;

void TObjPlayer__sub_800A2D74(void) {
    if ((u32) lbl_805D500C != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D500C, 1);
        lbl_805D500C = 0U;
    }
    if ((u32) lbl_805D5010 != 0U) {
        TObjPlayer__sub_801E483C((void*)lbl_805D5010);
        lbl_805D5010 = 0U;
    }
    TObjPlayer__sub_800A4288();
    TEneEffHamon__sub_800A380C();
}

}
