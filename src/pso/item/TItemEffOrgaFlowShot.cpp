#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TItemEffOrgaFlowShot__vt4(void* p);
u8 fn_802E4748(void *arg0);
s32 fn_80100490(s32);
int fn_802E456C(void*);

u8 fn_802E4748(void *arg0) {
    return (u8) (fn_80100490(M2C_FIELD(arg0, s32 *, 0xAC)) != 0);
}
int TItemEffOrgaFlowShot__vt4(void* p) { return fn_802E456C(p); }

}
