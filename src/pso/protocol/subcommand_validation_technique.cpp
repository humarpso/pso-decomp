#include "pso/protocol/subcommand_validation.h"

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
s32 is_valid_technique_id__10TObjPlayerFs(s32);
s32 TObjEneHoldEffect__sub_8036BF10(s32);

s32 validate_technique_parameters(void *parameters) {
    s8 b3;
    if (is_valid_technique_id__10TObjPlayerFs((s32) M2C_FIELD(parameters, s8 *, 0)) == 0) {
        return 0;
    }
    if (M2C_FIELD(parameters, s8 *, 1) < 0) {
        return 0;
    }
    b3 = M2C_FIELD(parameters, s8 *, 3);
    if ((b3 < 0) || (b3 > 0xA)) {
        return 0;
    }
    return 1;
}

s32 validate_cast_target_entry(void *parameters) {
    return ((u32) M2C_FIELD(parameters, s16 *, 2) >> 0x1FU) ^ 1;
}

s32 validate_6x46_attack_finished(G_ClientIDHeader *packet) {
    if (validate_subcommand_client(packet) == 0) {
        return 0;
    }
    return TObjEneHoldEffect__sub_8036BF10((s32)packet + 4) != 0 ? 1 : 0;
}
}
