#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK create_item_eff_cane__10TObjPlayerFiUiii(void *, void *, int, int);
u8 get_slot_count__14TItemProShieldFPv(void *);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
s32 TObjPlayer__sub_8011F63C(void *);
extern s32 tl_05;
extern const f32 lbl_805DAFF8;
extern const f32 lbl_805DAFFC;
void mace_of_adaman_update_active(u8 *arg0);
}

extern "C" {

void mace_of_adaman_update_active(u8 *arg0) {
    u8 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) {
        temp_r3 = get_slot_count__14TItemProShieldFPv((void *) (arg0));
        switch ((s32) temp_r3) {
        case 5:
            break;
        case 4:
            if (TObjPlayer__sub_8011F63C((void *) (arg0)) == 0) {
                create_item_eff_cane__10TObjPlayerFiUiii((void *) (tl_05), (void *) (arg0), (int) (1), (int) (0x1AE));
            }
            break;
        case 6:
            if (TObjPlayer__sub_8011F63C((void *) (arg0)) == 0) {
                create_item_eff_cane__10TObjPlayerFiUiii((void *) (tl_05), (void *) (arg0), (int) (2), (int) (0x101));
            }
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
    }
    if (get_slot_count__14TItemProShieldFPv((void *) (arg0)) == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1F8), (f32) (lbl_805DAFF8), (f32) (lbl_805DAFFC));
    }
}

}
