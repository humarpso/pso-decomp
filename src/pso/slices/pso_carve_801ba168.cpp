#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
s32 fn_800822E8(void *, M2C_UNK);
M2C_UNK fn_8011E204(void *, M2C_UNK);
s32 fn_801AFF0C(void *);
s32 test_flag_2000000__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801B5BCC(void *);
s32 check_flag_4__10TObjPlayerFPv(void *);
M2C_UNK fn_801BEA5C(void *);
s32 fn_801BEA80(void *);
s32 TObjPlayer__sub_801BF918(void *);
M2C_UNK fn_801C5AB8(void *);
M2C_UNK fn_801D0BC0(void *, s16, M2C_UNK);
extern s32 lbl_805D55C0;

void fn_801BA168(u8 *arg0) {
    s16 temp_r0;

    fn_8011E204(arg0, 0x10);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x324);
    switch (temp_r0) {
    case 1:
        if ((get_main_phase() != 0xE) && ((s32) lbl_805D55C0 != 0)) {
            goto call3;
        }
        TObjPlayer__sub_801B5BCC(arg0);
        fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 7);
        if (fn_801BEA80(arg0) != 0) {
            break;
        }
        fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 2);
        if (fn_801BEA80(arg0) != 0) {
            break;
        }
call3:
        fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 3);
        break;
    case 2:
        if ((fn_801AFF0C(arg0) == 0) && (check_flag_4__10TObjPlayerFPv(arg0) == 0)) {
            fn_801D0BC0(arg0, 0x16, 0);
            return;
        }
        if ((TObjPlayer__sub_801BF918(arg0 + 0x634) != 0) && (test_flag_2000000__10TObjPlayerFPv(arg0) != 0) && (fn_800822E8(arg0, 4) != 0)) {
            fn_801BEA5C(arg0);
            fn_801C5AB8(arg0 + 0x634);
        }
        fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 8);
        return;
    case 3:
    case 6:
        fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 7);
        if (fn_801BEA80(arg0) == 0) {
            fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 3);
        }
        break;
    }
}

}
