#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8027D1E8 { u8 pad[0x60]; s8 f60; };

extern "C" {
void fn_8027D1E8(Obj_8027D1E8 *o);
}

extern "C" {

void TWindowCtrl__sub_8027D1F8(void);
void TWindowCtrl__sub_8027D214(void);
int TWindowSubQuestBoard__sub_8027D1DC(void* p);
u8 get_page_index__20TWindowSubQuestBoardFPv(void* p);
int is_open__20TWindowSubQuestBoardFPv(void* p);

extern void *TWindowCtrl__data_805D63F8;

void fn_8027D1E8(Obj_8027D1E8 *o) {
    o->f60 &= ~1;
}

void TWindowCtrl__sub_8027D1F8(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 0xFFFFFFEF);
    }
}

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8027D214(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) | 0x10);
    }
}

}
