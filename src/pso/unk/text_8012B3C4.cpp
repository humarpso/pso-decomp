#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
extern const f32 lbl_805DAE84;
extern const f32 lbl_805DAE88;
extern const f32 lbl_805DAE8C;
extern const f32 lbl_805DAE90;
extern const f32 lbl_805DAE94;
extern const f32 lbl_805DAE98;
void update_brionac_idle_scale(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
extern const f32 lbl_805DAE88;
extern const f32 lbl_805DAE9C;
extern const f32 lbl_805DAEA0;
extern const f32 lbl_805DAEA4;
void update_brionac_active_scale(u8 *arg0);
}

extern "C" {

void update_brionac_idle_scale(u8 *arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x204), (f32) (lbl_805DAE84), (f32) (lbl_805DAE88));
        if (M2C_FIELD(arg0, f32 *, 0x204) <= lbl_805DAE88) {
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x20C), (f32) (lbl_805DAE8C), (f32) (lbl_805DAE90));
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x218), (f32) (lbl_805DAE94), (f32) (lbl_805DAE98));
        }
    }
}
void update_brionac_active_scale(u8 *arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x20C), (f32) (lbl_805DAE9C), (f32) (lbl_805DAE88));
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x218), (f32) (lbl_805DAEA0), (f32) (lbl_805DAE88));
        if (lbl_805DAE88 <= M2C_FIELD(arg0, f32 *, 0x20C)) {
            approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x204), (f32) (lbl_805DAE9C), (f32) (lbl_805DAEA4));
        }
    }
}

}
