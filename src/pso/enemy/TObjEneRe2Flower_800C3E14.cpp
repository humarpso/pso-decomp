#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe2Flower__sub_800C3E14(void);
void update_state__16TObjEneRe2FlowerFPv(void *arg0);
void set_mode0xA_unless_0xAor0xB__16TObjEneRe2FlowerFPv(void *arg0);
void TObjEneRe2Flower__sub_800C3EA4(void);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
s32 begin_state_242__16TObjEneRe2FlowerFPv(void);
s32 fn_800BB780(void * a0 = 0);

void TObjEneRe2Flower__sub_800C3E14(void) {  }
void update_state__16TObjEneRe2FlowerFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 9) {
        if (temp_r0 == 8) {
            begin_state_242__16TObjEneRe2FlowerFPv();
            fn_800BB780(arg0);
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 9);
    }
}
void set_mode0xA_unless_0xAor0xB__16TObjEneRe2FlowerFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xA) && (temp_r0 != 0xB)) {
        TObjEneDD__sub_800BBA18(arg0, 0xA);
    }
}
void TObjEneRe2Flower__sub_800C3EA4(void) {  }

}
