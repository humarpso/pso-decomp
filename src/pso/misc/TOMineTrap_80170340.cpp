#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOMineTrap__sub_801702C8(void);
s32 fn_80019248(u32 a0 = 0);
int TOMineTrap__sub_80170340(void);
int TOMineTrap__sub_80170348(void);
void TOMineTrap__sub_80170350(void);
void TOMineTrap__sub_80170354(void);

int TOMineTrap__sub_80170340(void) { return 1; }
int TOMineTrap__sub_80170348(void) { return 1; }
void TOMineTrap__sub_80170350(void) {  }
void TOMineTrap__sub_80170354(void) {  }
s32 check_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (fn_80019248(arg1) != 0) {
        return 1;
    }
    return 0;
}
s32 TOMineTrap__sub_801703D4(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (fn_80019248(arg1) != 0) {
        return 1;
    }
    return 0;
}

}
