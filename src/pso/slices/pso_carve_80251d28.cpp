#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80244D2C(f32);
s32 fn_80246948(void *);
M2C_UNK TWindowFukidasi__sub_80252C18(void *);
M2C_UNK fn_80252C58(void *);
extern const f32 lbl_805DCD30;
extern const f32 lbl_805DCD58;

void fn_80251D28(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805DCD30;
    fn_80244D2C(lbl_805DCD58);
    if (fn_80246948(arg0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 1);
    }
    M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) & ~0x50);
    if (arg1 & 2) {
        M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) & 0xFFFFFFF7);
    }
    if (arg1 & 0x20) {
        M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) | 2);
        fn_80252C58(arg0);
        TWindowFukidasi__sub_80252C18(arg0);
        M2C_FIELD(arg0, s8 *, 0x73) = 4;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) & 0xFFFFFFFD);
}

}
