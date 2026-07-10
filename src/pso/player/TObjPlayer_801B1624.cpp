#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_flag_604B__10TObjPlayerFPv(u8 *arg0);
M2C_UNK fn_801C19E8(void *);

s32 obj_isState3_324();

void set_state_flag_604B__10TObjPlayerFPv(u8 *arg0) {
    if (obj_isState3_324() != 0) {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x604B;
    } else {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x200B;
    }
    fn_801C19E8(arg0 + 0x828);
}

}
