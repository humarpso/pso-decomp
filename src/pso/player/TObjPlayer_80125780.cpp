#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *item_equip_variant_deleting_dtor_80125848(void *arg0, s16 arg1);
void arm_faust_reload_timer(void* p);
void count_faust_reload_timer(u8 *arg0);
void clear_faust_reload_timer(void* p);
void draw_faust_loaded_projectile__10TObjPlayerFPv(void *arg0);
M2C_UNK draw_ginja_object(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80125848(void *arg0, s16 arg1);

extern const f32 lbl_805DAD58;
extern const f32 lbl_805DAD5C;

void draw_faust_loaded_projectile__10TObjPlayerFPv(void *arg0) {
    void *temp_r31;
    void *temp_r3;

    if (get_player_list__10TObjPlayerFv() == 1) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x188);
        if ((temp_r3 != NULL) && ((s32) M2C_FIELD(arg0, s32 *, 0x234) == 0)) {
            temp_r31 = M2C_FIELD(temp_r3, void **, 0x2C);
            if (temp_r31 != NULL) {
                M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD58;
                M2C_FIELD(temp_r31, f32 *, 0x24) = (f32) lbl_805DAD58;
                M2C_FIELD(temp_r31, f32 *, 0x28) = (f32) lbl_805DAD58;
                M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFFB);
                draw_ginja_object(M2C_FIELD(arg0, void **, 0x188));
                M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 4);
                M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD5C;
                M2C_FIELD(temp_r31, f32 *, 0x24) = (f32) lbl_805DAD5C;
                M2C_FIELD(temp_r31, f32 *, 0x28) = (f32) lbl_805DAD5C;
            }
        }
    }
}

void arm_faust_reload_timer(void* p) { *(s32*)((char*)p + 0x234) = 60; }

void count_faust_reload_timer(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x234);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x234) = (s32) (temp_r4 - 1);
    }
}

void clear_faust_reload_timer(void* p) { *(s32*)((char*)p + 0x234) = 0; }

extern M2C_UNK lbl_804A2564[];

void *item_equip_variant_deleting_dtor_80125848(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2564;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
