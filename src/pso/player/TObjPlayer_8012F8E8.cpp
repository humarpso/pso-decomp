#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cast_gizonde_chain__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_8011E618(void *);
u8 *TObjPlayer__sub_80121248(s32, s32);
s32 TObjPlayer__sub_8012125C();
s32 TObjPlayer__sub_80121CA8(void *);
M2C_UNK create__11TTecGiZondeFPvPvPvPv(int, void *, void *, void *);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, int, void *);
s32 get_extended_state__10TObjPlayerFPv(int);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);

void cast_gizonde_chain__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *var_r30;
    s32 var_r29;
    u8 *temp_r3_2;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        draw_icon__10TObjPlayerFPvii((void *) (arg0), (int) (0), (void *) (arg0 + 0x1F8));
        temp_r3 = get_extended_state__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)));
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x204) = TObjPlayer__sub_8012125C();
            var_r30 = arg0 + 0x208;
            var_r29 = 0;
            do {
                temp_r3_2 = TObjPlayer__sub_80121248(temp_r3, var_r29);
                if (temp_r3_2 != NULL) {
                    M2C_FIELD(var_r30, u16 *, 0) = (u16) M2C_FIELD(temp_r3_2, u16 *, 0);
                    M2C_FIELD(var_r30, s16 *, 2) = (s16) M2C_FIELD(temp_r3_2, s16 *, 2);
                    var_r30 += 8;
                }
                var_r29 += 1;
            } while (var_r29 != 0xA);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x204) != 0) {
                create__11TTecGiZondeFPvPvPvPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)), (void *) (arg0 + 0x1F8), (void *) (arg0 + 0x204), (void *) (TObjPlayer__sub_80121CA8((void *) (arg0))));
            }
            TObjPlayer__sub_8011E618((void *) (arg0));
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv((void *) (arg0));
    }
}

}
