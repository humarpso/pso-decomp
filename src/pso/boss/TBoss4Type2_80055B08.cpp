#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__vt22(void *arg0);
void TBoss4Type2__vt23(void *arg0);
void TBoss4Type2__vt25(void *arg0);
void TBoss4Type2__vt28(void *arg0);
void TBoss4Type2__vt31(void *arg0);
M2C_UNK TBoss4Type2__sub_80056A54(void *);
M2C_UNK TBoss4Type2__sub_80056F90(void *, M2C_UNK, s32);
s32 TBoss4Type2__sub_80057224(void *);
f32 TObjPlayer__sub_80011014();

extern f32 lbl_805D8BB0;

void TBoss4Type2__vt23(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (TObjPlayer__sub_80011014() < lbl_805D8BB0) {
            TBoss4Type2__sub_80056A54(arg0);
            return;
        }
        TBoss4Type2__sub_80056F90(arg0, 4, TBoss4Type2__sub_80057224(arg0));
    }
}

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt31(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x12C;
}

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt28(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0xE1;
}

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt25(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt22(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x4B;
}

}
