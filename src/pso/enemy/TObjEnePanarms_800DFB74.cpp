#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 TObjEnePanarms__sub_800DFB9C(u8 *arg0);
u8 TObjEnePanarms__sub_800DFBB0(u8 *arg0);
int TObjEnePanarms__sub_800DFB74(u8 *arg0);
}

extern "C" {

int TObjEnePanarms__sub_800DFBC4(void* p);
int apply_animation_transition(void*, void*);
int fn_8002AE64(void*);
int fn_800660B8(void*);
int get_state_flag__14TObjEnePanarmsFPv(void* p);

int TObjEnePanarms__sub_800DFB74(u8 *arg0) {
    u8 var_r4;
    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x378) == 4) && ((s32) M2C_FIELD(arg0, s32 *, 0x3B4) < 0)) {
        var_r4 = 1;
    }
    return var_r4;
}

u8 TObjEnePanarms__sub_800DFB9C(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xB);
}

u8 TObjEnePanarms__sub_800DFBB0(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 8);
}

int TObjEnePanarms__sub_800DFBC4(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

}
