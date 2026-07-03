#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80275484(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 fn_802499E4(s32 a0 = 0, s32 a1 = 0);
s32 fn_80249980(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 fn_8007BC04(s32 a0 = 0);
s32 fn_8007A860(s32);
s32 fn_80269C6C(s32, s32, s32);
int TWindowSubStatusDisp__sub_80077760(void*);
int fn_8007A8F8(void);
int fn_8007B6D8(void);
int TLobby__sub_802421C4(void);
int TWindowSubComCard__sub_80265BF8(void*);
void TWindowSubComCard__sub_80272180(void);
s32 fn_8026CBB8(s32 a0 = 0);
int fn_802754EC(void);

void TWindowSubComCard__sub_80272240(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        fn_80269C6C(M2C_FIELD(arg0, s32 *, 0x6C), fn_8007A860(arg1), 0x82);
    }
}

}
