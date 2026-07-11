#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8024477C(void);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);
s32 TWindowDD__sub_80342144(void* p);
s32 TWindowDD__sub_8034218C(void* p);

s32 TWindowDD__sub_8034218C(void* p) { return *(s32*)((char*)p + 0x6c); }
s32 update_if_field28_set__9TWindowDDFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x6C));
        return fn_8024477C();
    }
    return 0;
}

}
