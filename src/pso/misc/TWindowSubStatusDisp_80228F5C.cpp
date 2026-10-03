#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802290E0_lbl_80515BC8 {
    s8 value;
    u8 remaining[0xFF];
};

extern "C" {
u8 * fn_80228E98(s32, void *);
extern u8 *lbl_805D6338;
void TWindowSubStatusDisp__sub_80228F5C(s32 arg0);
u32 strnlen__19TWindowKeyBoardSoftFPvUi(void *, u32);
void strncpy(s32, s32, s32);
extern u8 *lbl_805D6338;
void text_builder_append(u8 *arg0);
extern RecoveredGlobal_802290E0_lbl_80515BC8 lbl_80515BC8;
extern u8 *lbl_805D6338;
void text_builder_reset(void);
s8 *parse_text_control_codes(s8 *, s32 *, s32);
extern s32 lbl_805D5544;
extern u8 *lbl_805D6338;
s8 *TWindowSubStatusDisp__sub_80228F84(s8 *s);
}

extern "C" {

void TWindowSubStatusDisp__sub_80228F5C(s32 arg0) {
    lbl_805D6338 = fn_80228E98(arg0, lbl_805D6338);
}

s8 *TWindowSubStatusDisp__sub_80228F84(s8 *s) {
    s32 sjis;
    s8 *d;
    sjis = 0;
    if (lbl_805D5544 == 0) {
        sjis = 1;
    }
    d = (s8 *)lbl_805D6338;
    while (*s != 0) {
        if (*s == 9 && ((u8 *)s)[1] == 'P') {
            break;
        }
        s = parse_text_control_codes(s, &sjis, 0);
        s32 t = *(u8 *)s;
        if (t == 9 && ((u8 *)s)[1] == 'P') {
            continue;
        }
        if ((s8)t == 0) {
            continue;
        }
        *d = *s++;
        if (sjis != 0) {
            s32 c = *(u8 *)d & 0xe0;
            if (c == 0x80 || c == 0xe0) {
                *++d = *s++;
            }
        }
        d++;
    }
    lbl_805D6338 = (u8 *)d;
    *d = 0;
    if (*s == 0) {
        return 0;
    }
    return s + 2;
}

void text_builder_append(u8 *arg0) {
  s32 temp_r3;
  temp_r3 = strnlen__19TWindowKeyBoardSoftFPvUi(arg0, 0xFFU);
  strncpy((*(s32 *)&lbl_805D6338), (s32) arg0, temp_r3);
  *(((s8 *) (*(s32 *)&lbl_805D6338)) - (-temp_r3)) = 0;
  (*(s32 *)&lbl_805D6338) += temp_r3;
}
typedef char RecoveredGlobal_802290E0_lbl_80515BC8_size[sizeof(RecoveredGlobal_802290E0_lbl_80515BC8) == 0x100 ? 1 : -1];
void text_builder_reset(void) {
    (*(s8 * *)&lbl_805D6338) = &lbl_80515BC8.value;
    lbl_80515BC8.value = 0;
}

}
