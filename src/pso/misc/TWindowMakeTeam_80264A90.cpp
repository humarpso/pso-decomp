#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubStatusDisp__sub_80077760(s32);
s8 fn_8013AD64();
void TWindowMainMenu__sub_80264A64(void);
void TWindowMainMenu__vt7(void);
int fn_80264A6C(void* p);
int fn_801A529C(void*, int);

void TWindowMakeTeam__sub_80264A90(s8 arg0) {
    TWindowSubStatusDisp__sub_80077760(arg0 + 0x113);
}
void TWindowMakeTeam__sub_80264AB8(s8 arg0) {
    TWindowSubStatusDisp__sub_80077760(arg0 + 0x110);
}
u8 TWindowMakeTeam__sub_80264AE0(void *arg0) {
    if (fn_8013AD64() == 1) {
        return 0U;
    }
    return M2C_FIELD(arg0, u8 *, 0x1F);
}

}
