#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *item_equip_variant_deleting_dtor_80326EA0(void *arg0, s16 arg1);
void approach_positions__10TObjPlayerFi(s32 arg0);
void update_orga_flow_params__10TObjPlayerFi(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80326EA0(void *arg0, s16 arg1);

extern const f32 lbl_805DF664;
extern const f32 lbl_805DF668;
extern const f32 lbl_805DF66C;
extern const f32 lbl_805DF670;

void update_orga_flow_params__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1F8), (f32) (lbl_805DF664), (f32) (lbl_805DF668));
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1FC), (f32) (lbl_805DF66C), (f32) (lbl_805DF670));
}

extern const f32 lbl_805DF660;
extern const f32 lbl_805DF670;
extern const f32 lbl_805DF674;

void approach_positions__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1F8), (f32) (lbl_805DF670), (f32) (lbl_805DF660));
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1FC), (f32) (lbl_805DF674), (f32) (lbl_805DF660));
}

extern M2C_UNK lbl_804ED298[];

void *item_equip_variant_deleting_dtor_80326EA0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED298;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
