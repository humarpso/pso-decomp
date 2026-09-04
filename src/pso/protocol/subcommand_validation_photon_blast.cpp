#include "pso/protocol/subcommand_validation.h"

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
s32 is_valid_technique_id__10TObjPlayerFs(s32);
s32 is_valid_technique_slot__10TObjPlayerFUc(u8);

s32 validate_photon_blast_parameters(void *parameters) {
    s8 temp_r4;
    s16 temp_r4_2;
    temp_r4 = M2C_FIELD(parameters, s8 *, 0);
    if (((temp_r4 != -1) && (temp_r4 < 0)) || (temp_r4 >= 6)) {
        return 0;
    }
    if (M2C_FIELD(parameters, s8 *, 1) < 0) {
        return 0;
    }
    temp_r4_2 = M2C_FIELD(parameters, s16 *, 2);
    if ((temp_r4_2 < 0) || (temp_r4_2 > 0xA)) {
        return 0;
    }
    if (M2C_FIELD(parameters, s16 *, 4) < 0) {
        return 0;
    }
    return ((u32) M2C_FIELD(parameters, s16 *, 6) >> 0x1FU) ^ 1;
}

s32 validate_6x48_cast_technique_complete(G_ClientIDHeader *packet) {
    if (validate_subcommand_client(packet) == 0) {
        return 0;
    }
    return is_valid_technique_id__10TObjPlayerFs(M2C_FIELD(packet, s16 *, 4)) != 0 ? 1 : 0;
}

s32 validate_6x8D_set_technique_level_override(G_ClientIDHeader *packet) {
    if (validate_subcommand_client(packet) == 0) {
        return 0;
    }
    return is_valid_technique_slot__10TObjPlayerFUc(M2C_FIELD(packet, u8 *, 4)) != 0 ? 1 : 0;
}
}
