#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p);
void TBoss2DeRolLe__sub_80033F34(void *arg0, void *arg1);
void TBoss2DeRolLe__sub_80033F80(void *arg0, void *arg1);
s32 fn_800B9958(void * a0 = 0, u16 a1 = 0);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s16 a1 = 0);

void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3d4) = 0; }
void TBoss2DeRolLe__sub_80033F34(void *arg0, void *arg1) {
    fn_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}
void TBoss2DeRolLe__sub_80033F80(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}

}
