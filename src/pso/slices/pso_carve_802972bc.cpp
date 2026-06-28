#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *fn_802029E8(s32);
s32 fn_8022675C(s32, s32, s32, s32);
void fn_802972BC(void);
void fn_802972C0(void);
void TObjCMMainMenu__sub_802972C4(void);

void fn_802972BC(void) {  }
void fn_802972C0(void) {  }
void TObjCMMainMenu__sub_802972C4(void) {  }
s32 fn_802972C8(void) {
    s32 temp_r4;
    void *temp_r3;

    if (fn_802029E8(0xFFFF) == NULL) {
        fn_8022675C(0x40018519, 0, 0, 0);
        return 0;
    }
    temp_r3 = fn_802029E8(0xFFFF);
    temp_r4 = M2C_FIELD(temp_r3, s32 *, 0x36C);
    if (temp_r4 < 0x2710) {
        M2C_FIELD(temp_r3, s32 *, 0x36C) = 0;
        fn_8022675C(0xB20C, 0, 0, 0);
        return 0;
    }
    M2C_FIELD(temp_r3, s32 *, 0x36C) = (s32) (temp_r4 - 0x2710);
    fn_8022675C(0x44E03, 0, 0, 0);
    return 1;
}

}
