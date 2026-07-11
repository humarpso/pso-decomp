#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__16TKeyBoardControlFPv(void *arg0);
void release_input__16TKeyBoardControlFPv(void *arg0);
void TKeyBoardControl__sub_802613A4(void *arg0);
void release__16TKeyBoardControlFPv(void *arg0);
M2C_UNK TKeyBoardControl__sub_8025CBC0(void *);
M2C_UNK fn_8025CBCC(void *);
M2C_UNK fn_8025CC04(void *);
M2C_UNK fn_8025CC3C(u32);
M2C_UNK TWindowKeyBoardSoft__sub_80261134(void *);

void close__16TKeyBoardControlFPv(void *arg0) {
    void *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x80);
    temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_r3 != NULL) {
        TKeyBoardControl__sub_8025CBC0(temp_r3);
        release__16TKeyBoardControlFPv(arg0);
    }
}

void release_input__16TKeyBoardControlFPv(void *arg0) {
    void *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x40);
    temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_r3 != NULL) {
        fn_8025CBCC(temp_r3);
        release__16TKeyBoardControlFPv(arg0);
    }
}

void TKeyBoardControl__sub_802613A4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x20);
    if (M2C_FIELD(arg0, void **, 0x6C) != NULL) {
        fn_8025CC04(M2C_FIELD(arg0, void **, 0x6C));
        release__16TKeyBoardControlFPv(arg0);
    }
}

void release__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 1);
        fn_8025CC3C(M2C_FIELD(arg0, u32 *, 0x6C));
        TWindowKeyBoardSoft__sub_80261134(arg0);
    }
}

}
