#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct SA9_801a9bac {
    char pad0[0x44];
    s32 f44;
    s32 f48;
    s32 pad4C;
    s32 arr50[4];
    s32 arr60[4];
} SA9_801a9bac;

void update_and_destroy__10TObjPlayerFPv(u8 *arg0);
void update_target__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_801A92B0(void *);
M2C_UNK TObjPlayer__sub_801A9870(void *);
s32 get_player_by_client_id(u16);
M2C_UNK TObjPlayer__sub_801A72C8(s32, s32, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_and_destroy__10TObjPlayerFPv(u8 *arg0) {
    SA9_801a9bac *self = (SA9_801a9bac *)arg0;
    s32 temp_r0;
    s32 var_r31;
    s32 var_r30;
    s32 var_r28;
    s32 var_r27;
    s32 inner;

    self->f44 += 1;
    if (self->f48 < self->f44) {
        for (var_r28 = 0; var_r28 < 4; var_r28++) {
            temp_r0 = self->arr50[var_r28];
            if ((temp_r0 == 4) || (temp_r0 == 5)) {
                for (var_r27 = 0; var_r27 < 4; var_r27++) {
                    inner = self->arr60[var_r27];
                    if ((u32) inner < 4U) {
                        TObjPlayer__sub_801A72C8(inner, self->arr50[var_r28], 1);
                    }
                }
            }
        }
        TObjPlayer__sub_801A92B0(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void update_target__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x3C));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        TObjPlayer__sub_801A9870(arg0);
        return;
    }
    update_and_destroy__10TObjPlayerFPv((u8 *)(arg0));
}

}
