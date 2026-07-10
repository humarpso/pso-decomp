#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
s32 is_split_screen();
s32 TCameraCtrl__sub_8006B368();
M2C_UNK fn_8007B858();
s32 fn_8007BB2C();
M2C_UNK TObjLight__sub_80133D78();
M2C_UNK fn_801403B4(M2C_UNK);
M2C_UNK fn_801F4830(M2C_UNK);
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK fn_80226E44(M2C_UNK);
M2C_UNK fn_802274B8(M2C_UNK *);
M2C_UNK fn_80227FB4();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_8029F4C4(s32, s32);
extern M2C_UNK lbl_804651C8[];
extern s32 tl_particlemodel;

s32 initialize_boss_scene(void) {
    s32 temp_r3;
    u32 temp_new;

    TOKeyMachine01__sub_802034A8();
    fn_80227FB4();
    if (fn_8007BB2C() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    if (is_split_screen() == 0) {
        temp_new = __nw__7TObjectFUl(0x3C);
        if (temp_new != 0U) {
            fn_8029F4C4(temp_new, tl_particlemodel);
        }
    }
    fn_8007B858();
    fn_801403B4(0);
    if (is_split_screen() != 0) {
        fn_802274B8(lbl_804651C8);
    } else {
        fn_80226E44(6);
    }
    if ((get_main_phase() != 0xE) || (TCameraCtrl__sub_8006B368() == 0)) {
        temp_r3 = TOKeyMachine01__sub_802034A8();
        switch (temp_r3) {
        case 28:
            fn_801F4830(0x54);
            break;
        case 29:
            fn_801F4830(0x55);
            break;
        }
    }
    return 1;
}

}
