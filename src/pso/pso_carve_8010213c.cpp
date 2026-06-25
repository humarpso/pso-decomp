#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80099EF8();
M2C_UNK fn_801015EC(s32, M2C_UNK);
M2C_UNK fn_8011AA44(s32, s32);
u32 fn_801B8E68(u32, s32);
M2C_UNK fn_8020C5E0(s32);

void fn_8010213C(s32 arg0, s32 arg1, u32 arg2) {
    fn_8011AA44(arg1, fn_80099EF8());
    if ((arg2 != 0U) && (fn_801B8E68(arg2, arg0) != 0U)) {
        fn_801015EC(arg0, 1);
        fn_8020C5E0(arg0);
    }
}

}
