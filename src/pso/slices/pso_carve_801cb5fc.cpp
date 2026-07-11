#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 ret_801D26AC(void);
s32 TObjPlayer__sub_801D0BC0(void * a0 = 0, s16 a1 = 0, s32 a2 = 0);
s32 TObjPlayer__sub_801BE474(void * a0 = 0);
s32 fn_801BA650(void * a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_isState2_324(void * a0 = 0);
s32 fn_80010550(s32);
u32 TObjPlayer__sub_801B5EA4();
void fn_801CB5FC(void);

void fn_801CB5FC(void) {  }
void fn_801CB600(s32 arg0) {
    if (TObjPlayer__sub_801B5EA4() == 0U) {
        fn_80010550(arg0);
    }
}
void fn_801CB63C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xC;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ret_801D26AC();
    }
    fn_801BA650(arg0, 0xC, TObjPlayer__sub_801BE474(arg0));
}

}
