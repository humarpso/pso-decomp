#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_800114D8(void *, void *, f32);
int TObjEnePanarms__sub_800DFBD0(u8 *arg0, s32 arg1, f32 farg0);
}

extern "C" {

int fn_8002AE64(void*);
int fn_800660B8(void*);
int TObjPlayer__sub_80143198(void*, void*);
int get_state_flag__14TObjEnePanarmsFPv(void* p);
int TObjEnePanarms__sub_800DFBC4(void* p);

int TObjEnePanarms__sub_800DFBD0(u8 *arg0, s32 arg1, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = TObjPlayer__sub_800114D8((void *) (arg0), (void *) (arg1), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

}
