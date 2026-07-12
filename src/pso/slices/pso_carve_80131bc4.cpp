#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOBoss4Rock__sub_80147AA8();
s32 fn_8025C974(s32, s32);
s32 fn_8025CA70(s32);
int TWindowMakeTeam__sub_80131BA0(void* p);
int TWindowSubComCard__sub_80131C10(void* p);
int TWindowSubComCard__sub_80131C34(void* p);
int TKeyBoardControl__sub_80131FA0(void*);
int TKeyBoardControl__sub_80131FAC(void*);
int TWindowKeyBoardSoft__sub_8025C5F4(void*);

s32 TWindowSubComCard__sub_80131BC4(void *arg0) {
    s32 temp_r3;

    fn_8025CA70(M2C_FIELD(arg0, s32 *, 0x20));
    temp_r3 = TOBoss4Rock__sub_80147AA8();
    fn_8025C974(M2C_FIELD(arg0, s32 *, 0x20), temp_r3);
    return temp_r3;
}

}
