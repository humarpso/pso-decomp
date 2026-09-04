#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_memcard_status__15TAdPlayerLoadGCFi(s32 arg0);
s32 get_load_result__15TAdPlayerLoadGCFv(void);
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E101C(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1E38();
s32 fn_803849D8(s32);

extern s32 TAdPlayerLoadGC__data_805D5E40;

s32 get_load_result__15TAdPlayerLoadGCFv(void) {
    return TAdPlayerLoadGC__data_805D5E40;
}

extern s32 TAdPlayerLoadGC__data_805D5E30;
extern s32 TAdPlayerLoadGC__data_805D5E40;

s32 check_memcard_status__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 temp_r3;

    if (arg0 >= 2) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    if ((TAdPlayerLoadGC__sub_801E1E38() == 0) || (TAdPlayerLoadGC__sub_801E1B50(arg0) != 0) || (TAdPlayerLoadGC__sub_801E0D8C(arg0) == 0)) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    if (!(TAdPlayerLoadGC__data_805D5E30 & (4 << arg0)) && (TAdPlayerLoadGC__sub_801E101C(arg0) != 0)) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    temp_r3 = fn_803849D8(arg0);
    switch (temp_r3) {
    case -6:
    case -13:
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    case 0:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    default:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    }
}

}
