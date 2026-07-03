#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801B25C4(s32 arg0);
s32 TObjPlayer__sub_801B260C(s32 arg0);
s32 TObjPlayer__sub_801B2654(s32 arg0);
s32 TObjPlayer__vt33(s32 arg0);
s32 TObjPlayer__vt34(s32 arg0);
s32 TObjPlayer__vt35(s32 arg0);
s32 TObjPlayer__vt36(s32 arg0);
s32 TObjPlayer__vt37(s32 arg0);
s32 TObjPlayer__vt38(s32 arg0);
s32 TObjPlayer__vt39(s32 arg0);
s32 TObjPlayer__vt40(s32 arg0);
s32 TObjPlayer__sub_801B12A8(s32);
s32 TObjPlayer__sub_801B19EC();
s32 fn_800166DC(s32);
s32 fn_80016944(s32);
s32 fn_80016C54(s32);
s32 fn_80016D78(s32);
s32 fn_80016E9C(s32);
s32 fn_80016F50(s32);
s32 fn_80016FF8(s32);
s32 fn_800171A0(s32);

s32 TObjPlayer__vt40(s32 arg0) {
    if (TObjPlayer__sub_801B19EC() != 0) {
    }
    return 0;
}

s32 TObjPlayer__vt39(s32 arg0) {
    if (TObjPlayer__sub_801B19EC() != 0) {
    }
    return 0;
}

s32 TObjPlayer__vt38(s32 arg0) {
    if ((TObjPlayer__sub_801B19EC() == 0) || (TObjPlayer__sub_801B12A8(arg0) != 0)) {
        return 0;
    }
}

s32 TObjPlayer__vt37(s32 arg0) {
    if ((TObjPlayer__sub_801B19EC() == 0) || (TObjPlayer__sub_801B12A8(arg0) != 0)) {
        return 0;
    }
}

s32 TObjPlayer__vt36(s32 arg0) {
    if ((TObjPlayer__sub_801B19EC() == 0) || (TObjPlayer__sub_801B12A8(arg0) != 0)) {
        return 0;
    }
}

s32 TObjPlayer__vt35(s32 arg0) {
    if ((TObjPlayer__sub_801B19EC() == 0) || (TObjPlayer__sub_801B12A8(arg0) != 0)) {
        return 0;
    }
}

s32 TObjPlayer__vt34(s32 arg0) {
    if ((TObjPlayer__sub_801B19EC() == 0) || (TObjPlayer__sub_801B12A8(arg0) != 0)) {
        return 0;
    }
}

s32 TObjPlayer__vt33(s32 arg0) {
    if ((TObjPlayer__sub_801B19EC() == 0) || (TObjPlayer__sub_801B12A8(arg0) != 0)) {
        return 0;
    }
}

s32 obj_testFlags30(s32, M2C_UNK);

s32 TObjPlayer__sub_801B25C4(s32 arg0) {
    if (TObjPlayer__sub_801B19EC() != 0) {
        return obj_testFlags30(arg0, 0x20);
    }
    return 0;
}

s32 obj_testFlags30(s32, M2C_UNK);

s32 TObjPlayer__sub_801B260C(s32 arg0) {
    if (TObjPlayer__sub_801B19EC() != 0) {
        return obj_testFlags30(arg0, 0x10);
    }
    return 0;
}

s32 obj_testFlags30(s32, M2C_UNK);

s32 TObjPlayer__sub_801B2654(s32 arg0) {
    if (TObjPlayer__sub_801B19EC() != 0) {
        return obj_testFlags30(arg0, 8);
    }
    return 0;
}

}
