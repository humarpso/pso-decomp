#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
#pragma scheduling off
extern "C" {
M2C_UNK TObjPlayer__sub_803E20B0();
M2C_UNK setup_render__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E2224();
M2C_UNK TObjPlayer__sub_803E224C();
void TLobby__sub_803E2EE4(s32 arg0);
void TObjPlayer__sub_803E4354(void *);
void TObjPlayer__sub_803E44D4(void *);
void TObjPlayer__sub_803E4468(void);
void TObjPlayer__sub_803E4684(void *arg0);
}

extern "C" {

void func_803e11e8__FUl(s32 arg0);
void func_803e11f0__Fv(void);

extern s32 lbl_805D77F8;

void TLobby__sub_803E2EE4(s32 arg0) {
    TObjPlayer__sub_803E20B0();
    if (arg0 != 0) {
        TObjPlayer__sub_803E2224();
    } else {
        setup_render__10TObjPlayerFv();
    }
    TObjPlayer__sub_803E224C();
}

void TObjPlayer__sub_803E4684(void *arg0) {
    TObjPlayer__sub_803E4354(arg0);
    TObjPlayer__sub_803E44D4(arg0);
    TObjPlayer__sub_803E4468();
}

void func_803e11e8__FUl(s32 arg0) {
    lbl_805D77F8 = arg0;
}

extern s32 lbl_805D77F8;

void func_803e11f0__Fv(void) {
    lbl_805D77F8 = 0;
}

}
