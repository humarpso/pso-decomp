#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_and_register__23TAdSinglePlyChrSelectGCFi(s32 arg0);
M2C_UNK register_callback__23TAdSinglePlyChrSelectGCFis(s32, M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_801FC900();
M2C_UNK set_id__23TAdSinglePlyChrSelectGCFPvi(s32, M2C_UNK);
u32 TAdSinglePlyChrSelectGC__sub_801FCCD4(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200690(s32, s32);
u32 TAdSinglePlyChrSelectGC__sub_80201204(s32, M2C_UNK);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);

s32 init_and_register__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 var_r29;
    u32 temp_r30;
    u32 temp_r31;

    var_r29 = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (var_r29 != 0) {
        var_r29 = TAdSinglePlyChrSelectGC__sub_801FC900();
    }
    TAdSinglePlyChrSelectGC__sub_80200690(var_r29, arg0);
    temp_r30 = TAdSinglePlyChrSelectGC__sub_801FCCD4(var_r29);
    set_id__23TAdSinglePlyChrSelectGCFPvi(var_r29, 0);
    temp_r31 = TAdSinglePlyChrSelectGC__sub_80201204(var_r29, 0x1156C);
    register_callback__23TAdSinglePlyChrSelectGCFis(var_r29, 1);
    if (temp_r30 == temp_r31) {
        return 1;
    }
    return 0;
}

}
