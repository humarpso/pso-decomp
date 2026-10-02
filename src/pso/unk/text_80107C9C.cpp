#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK obj_getField1c(int);
M2C_UNK get_field_3e0__12TBoss3VoloptFPv();
M2C_UNK spawn_particle_effect(void *, int);
s32 TObjPlayer__sub_80117E50();
s32 get_player_by_client_id(int);
s32 is_item_area_enabled();
extern const f32 lbl_805DAAE8;
void fn_80107C9C(u8 *arg0);
}

extern "C" {

void fn_80107C9C(u8 *arg0) {
    s32 temp_r3;
    if (lbl_805DAAE8 <= (f32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        temp_r3 = get_player_by_client_id((int) (M2C_FIELD(arg0, u16 *, 0x20)));
        if (temp_r3 != 0) {
            get_field_3e0__12TBoss3VoloptFPv();
            if (is_item_area_enabled() == 1) {
                obj_getField1c((int) (temp_r3));
                if (TObjPlayer__sub_80117E50() != 0) {
                    spawn_particle_effect((void *) (temp_r3 + 0x2FC), (int) (0x1BE));
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
}

}
