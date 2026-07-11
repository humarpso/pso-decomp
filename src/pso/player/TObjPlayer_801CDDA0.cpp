#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_target_link__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8001053C();
M2C_UNK TObjPlayer__sub_801D2630(void *);
int TObjPlayer__sub_801CDDEC(void* p);
int update_action_state__10TObjPlayerFPv(void*);

void reset_target_link__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    TObjPlayer__sub_8001053C();
    TObjPlayer__sub_801D2630(arg0);
    temp_r4 = M2C_FIELD(arg0, void **, 0x424);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
}
int TObjPlayer__sub_801CDDEC(void* p) { return update_action_state__10TObjPlayerFPv(p); }

}
