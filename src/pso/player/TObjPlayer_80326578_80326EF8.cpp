#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80326F9C { u8 pad[0x1F8]; f32 f; };

extern "C" {
void* set_mode_floats__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_mode_floats_state__10TObjPlayerFPv(u8 *arg0);
void play_particle_effect_once__10TObjPlayerFv();
s32 get_player_list__10TObjPlayerFv();
void scale_matrix(int, f32, f32, f32);
extern const f32 lbl_805DF680;
void TObjPlayer__sub_80326F9C(O_80326F9C *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8032704C(void *arg0, s16 arg1);
void approach_orgaflow_shot__10TObjPlayerFi(s32 arg0);
void approach_position_x__10TObjPlayerFi(s32 arg0);
int TItemWeapon__ct(void);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_8032704C(void *arg0, s16 arg1);

    extern unsigned char lbl_804ED298[];
    extern const float lbl_805DF660;
    extern const float lbl_805DF678;
void* set_mode_floats__10TObjPlayerFPv(void* a0, M2C_UNK _w1, void * _w2) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804ED298; *(float*)((char*)a0 + 0x1f8) = lbl_805DF660; *(float*)((char*)a0 + 0x1fc) = lbl_805DF678; return a0; }

extern const f32 lbl_805DF684;
extern const f32 lbl_805DF688;

u8 *create_mode_floats_state__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)set_mode_floats__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void TObjPlayer__sub_80326F9C(O_80326F9C *arg0) {
    s32 n = get_player_list__10TObjPlayerFv();
    switch (n) {
    case 1:
    case 2: {
        f32 f = arg0->f;
        scale_matrix(0, lbl_805DF680, f, f);
        play_particle_effect_once__10TObjPlayerFv();
        break;
    }
    }
}

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
