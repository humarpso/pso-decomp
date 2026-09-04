#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *item_equip_variant_deleting_dtor_8032704C(void *arg0, s16 arg1);
void approach_orgaflow_shot__10TObjPlayerFi(s32 arg0);
void approach_position_x__10TObjPlayerFi(s32 arg0);
void* set_mode_floats__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_8032704C(void *arg0, s16 arg1);

    extern unsigned char lbl_804ED298[];
    extern const float lbl_805DF660;
    extern const float lbl_805DF678;
void* set_mode_floats__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804ED298; *(float*)((char*)a0 + 0x1f8) = lbl_805DF660; *(float*)((char*)a0 + 0x1fc) = lbl_805DF678; return a0; }

extern const f32 lbl_805DF684;
extern const f32 lbl_805DF688;

void approach_orgaflow_shot__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DF684, lbl_805DF688);
}

extern const f32 lbl_805DF680;
extern const f32 lbl_805DF68C;

void approach_position_x__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DF68C, lbl_805DF680);
}

extern M2C_UNK lbl_804ED390[];

void *item_equip_variant_deleting_dtor_8032704C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED390;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
