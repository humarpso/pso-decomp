#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_8012125C(s32 *arg0);
}

extern "C" {

int is_flag_b0_4__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80121228(void* p, u32 v);
s16 TObjPlayer__sub_80121238(void* p);
u16 get_uid__10TObjPlayerFPv(void* p);

int TObjPlayer__sub_80121248(void) { return 0; }
s32 TObjPlayer__sub_8012125C(s32 *arg0) {
    s32 temp_r3;
    temp_r3 = *arg0;
    if ((temp_r3 < 0) || (temp_r3 > 0xA)) {
        return 0;
    }
    return temp_r3;
}

}
