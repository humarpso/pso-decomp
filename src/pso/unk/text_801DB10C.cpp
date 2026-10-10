#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cmd_88__9TProtocolFR6packet(void *arg0);
void handle_cmd_C4__9TProtocolFR6packet(void *arg0);
M2C_UNK bswap_cmd_88_body(M2C_UNK *);
M2C_UNK copy_entry_table(M2C_UNK *);
M2C_UNK fn_801DF42C(M2C_UNK *);
M2C_UNK fn_801DF4FC(M2C_UNK *);

void handle_cmd_88__9TProtocolFR6packet(void *arg0) {
    char sp8[0xC4];
    M2C_UNK (*temp_r12)(M2C_UNK *);

    copy_entry_table((M2C_UNK *) sp8);
    bswap_cmd_88_body((M2C_UNK *) sp8);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK *), 0xBC84);
    if (temp_r12 != NULL) {
        temp_r12((M2C_UNK *) sp8);
    }
}

void handle_cmd_C4__9TProtocolFR6packet(void *arg0) {
    char sp8[0x1A84];
    M2C_UNK (*temp_r12)(M2C_UNK *);

    fn_801DF4FC((M2C_UNK *) sp8);
    fn_801DF42C((M2C_UNK *) sp8);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK *), 0xBC50);
    if (temp_r12 != NULL) {
        temp_r12((M2C_UNK *) sp8);
    }
}

}
