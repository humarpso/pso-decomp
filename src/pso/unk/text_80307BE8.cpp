#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv();
f32 xz_distance_squared(void *, void *);
s32 get_player_by_client_id(int);
M2C_UNK THunterGuildSeqOffline__sub_80248A14(int, int, int);
void fn_80307BE8(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_80307BE8(u8 *arg0) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r28;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        var_r28 = 0;
        do {
            temp_r3 = get_player_by_client_id((int) (var_r28));
            if (temp_r3 != 0) {
                if ((get_current_floor() == get_field_3e4__10TObjPlayerFPv()) && (xz_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 8)) <= M2C_FIELD(arg0, f32 *, 0))) {
                    THunterGuildSeqOffline__sub_80248A14((int) (M2C_FIELD(arg0, u32 *, 0x24)), (int) (1), (int) (var_r28));
                    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | (1 << var_r28));
                    M2C_FIELD(arg0, s32 *, 0x18) = 1;
                } else {
                    THunterGuildSeqOffline__sub_80248A14((int) (M2C_FIELD(arg0, u32 *, 0x24)), (int) (0), (int) (var_r28));
                    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~(1 << var_r28));
                    M2C_FIELD(arg0, s32 *, 0x14) = 0;
                }
            } else {
                THunterGuildSeqOffline__sub_80248A14((int) (M2C_FIELD(arg0, u32 *, 0x24)), (int) (0), (int) (var_r28));
            }
            var_r28 += 1;
        } while (var_r28 < 4);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    }
}
#pragma pop

}
