#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjPlayer__sub_8032DDD8(u8 *arg0);
void * init_variant_2_dc28__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8032DB8C(u8 *arg0);
extern const f32 lbl_805DF7D8;
extern const f32 lbl_805DF7DC;
extern const f32 lbl_805DF7E0;
void TObjPlayer__sub_8032DD7C(u8 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8032DBE4(void *arg0, s16 arg1);
void *TObjPlayer__sub_8032DC3C(void *arg0, s16 arg1);
void TObjPlayer__sub_8032DDE8(void* p);
void fire_projectiles__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8011EB84(void *, M2C_UNK *, s32, M2C_UNK);
s32 TObjPlayer__sub_8011F63C(void *);
void TObjPlayer__sub_80120D50(void *);
s16 TObjPlayer__sub_801D2EA8(s32);
void __dl__7TObjectFPv(void *);
void destroy__18TItemWpnCardEffectFPvs(void *, int);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_8032DBE4(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, void *, M2C_UNK);

extern s32 tl_05;

void fire_projectiles__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;

    draw_icon__10TObjPlayerFPvii(arg0, 4, &sp8);
    if (TObjPlayer__sub_801D2EA8(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 2) {
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0x1555);
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), -0x1555);
    } else {
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
    }
    if (TObjPlayer__sub_8011F63C(arg0) == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
}

extern M2C_UNK lbl_804EDC28[];

void *init_variant_2_dc28__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDC28;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

extern M2C_UNK lbl_804EDC28[];

void *item_equip_variant_deleting_dtor_8032DBE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDC28;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804EDD20[];

u8 *TObjPlayer__sub_8032DB8C(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_variant_2_dc28__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void *TObjPlayer__sub_8032DC3C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDD20;
        destroy__18TItemWpnCardEffectFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
void TObjPlayer__sub_8032DD7C(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x70) & 1) {
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) (M2C_FIELD(arg0, f32 *, 0x80) + lbl_805DF7DC);
        if (M2C_FIELD(arg0, f32 *, 0x80) > lbl_805DF7E0) {
            M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_805DF7E0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) (M2C_FIELD(arg0, f32 *, 0x80) - lbl_805DF7DC);
        if (M2C_FIELD(arg0, f32 *, 0x80) < lbl_805DF7D8) {
            M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_805DF7D8;
        }
    }
}
#pragma pop

void TObjPlayer__sub_8032DDD8(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0xFFFFFFFE);
}

void TObjPlayer__sub_8032DDE8(void* p) { *(u32*)((char*)p + 0x70) |= 0x1; }

}
