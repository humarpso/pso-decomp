#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
M2C_UNK fn_8007B858();
s32 fn_8007BB2C();
M2C_UNK TObjLight__sub_80133D78();
M2C_UNK fn_801403B4(M2C_UNK);
M2C_UNK fn_80197CE8();
M2C_UNK TOKeyMachine01__sub_802034A8();
M2C_UNK fn_80226E44(M2C_UNK);
M2C_UNK fn_802274B8(M2C_UNK *);
M2C_UNK fn_80227FB4();
extern M2C_UNK lbl_8043F228[];

s32 fn_801409B0(void) {
    TOKeyMachine01__sub_802034A8();
    fn_80227FB4();
    if (fn_8007BB2C() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    fn_8007B858();
    fn_80197CE8();
    fn_801403B4(0);
    if (is_split_screen() != 0) {
        fn_802274B8(lbl_8043F228);
    } else {
        fn_80226E44(0);
    }
    return 1;
}

}
