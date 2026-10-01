#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "stdarg.h"
typedef void (*RecoveredCallback_c88e8900640a)(s32, u8 *);
struct P_803D0DEC { void (*fn)(s32, u8 *); s32 arg; };

extern "C" {
extern s32 lbl_805D4690;
void TLobby__sub_803D0DE4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
int TLobby__sub_8039AA04(char *s, const char *fmt, va_list ap);
extern u8 lbl_80582F58[];
extern RecoveredCallback_c88e8900640a lbl_805D7618;
extern s32 lbl_805D761C;
void TLobby__sub_803D0DEC(const char *fmt, ...);
}

extern "C" {

#pragma push
#pragma scheduling off
void TLobby__sub_803D0DE4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    lbl_805D4690 = arg3;
}
#pragma pop

void TLobby__sub_803D0DEC(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    TLobby__sub_8039AA04((char *)lbl_80582F58, fmt, ap);
    if (lbl_805D7618 != 0) {
        lbl_805D7618(lbl_805D761C, lbl_80582F58);
    }
}

}
