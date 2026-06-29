#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s16 a1 = 0);
s32 fn_800B9958(void * a0 = 0, u16 a1 = 0);
void TBoss7DeRolLeC__sub_802EC994(void* p);

void TBoss7DeRolLeC__sub_802EC994(void* p) { *(s32*)((char*)p + 0x6b0) = 0; *(s32*)((char*)p + 0x6b4) = 0; }
void fn_802EC9A4(void *arg0, void *arg1) {
    fn_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}
void fn_802EC9F0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}

}
