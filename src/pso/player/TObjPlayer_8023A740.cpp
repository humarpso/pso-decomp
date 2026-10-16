#include "types.h"
#include "pso/player/TUnk_804CCC68.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u16 obj_getField1c(s32);
s32 get_type__10TObjPlayerFPv(s32);
f64 atan2_float(f32, f32);
void *__ct__7TEffectFv(void *);
s32 direction_to_rotation_xz(void *, void *, void *);
s32 init_collision_body_parts(u32, void *, int);
u32 construct_collider_proxy__13TUnk_804AF8A0Fv(u32, void *);
u32 __nw__7TObjectFUl(int);
f32 vector_length(void *);
s32 normalize_vector(void *);
extern const f64 lbl_8044DC00;
extern s32 lbl_804CCC68[];
extern const f32 lbl_805DC91C;
extern const f32 lbl_805DC924;
extern const f32 lbl_805DC928;
extern const f32 lbl_805DC92C;
extern const f32 lbl_805DC930;
extern const f32 lbl_805DC934;
extern const f32 lbl_805DC938;
u8 *construct_aimed_technique_projectile(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s32 arg4);
u16 obj_getField1c(s32);
s32 get_type__10TObjPlayerFPv(s32);
void *__ct__7TEffectFv(void *);
s32 direction_to_rotation_xz(void *, void *, void *);
s32 init_collision_body_parts(u32, void *, int);
u32 construct_collider_proxy__13TUnk_804AF8A0Fv(u32, void *);
u32 __nw__7TObjectFUl(int);
f32 vector_length(void *);
s32 normalize_vector(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 lbl_804CCC68[];
extern const f32 lbl_805DC91C;
extern const f32 lbl_805DC924;
extern const f32 lbl_805DC928;
extern const f32 lbl_805DC92C;
extern const f32 lbl_805DC930;
extern const f32 lbl_805DC934;
extern const f32 lbl_805DC938;
u8 *construct_facing_technique__10TObjPlayerFPviPvii(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4);
}

extern "C" {

void free_collision_body_parts(void *);
int TTecSifta__sub_8023AC88(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);
int spawn_support_tec_range_effect(void*);

extern s32 lbl_804CCC68[];

void *TObjPlayer::destroy_technique_effect_resources(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804CCC68;
        if (this->m_128 != NULL) { free_collision_body_parts(this->m_128); *(s32 *)&this->m_128 = 0; }
        __dt__7TEffectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

u8 *construct_aimed_technique_projectile(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s32 arg4) {
    f32 dx;
    f32 dz;
    f32 dy;
    f64 t;
    s32 ang;
    u32 var_r0;
    __ct__7TEffectFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CCC68;
    ((TObjPlayer *)(arg0 + 0x84))->register_object();
    *(u16 *)((s8 *)arg0 + 0xC8) = 0xFFFF;
    dx = *(f32 *)((s8 *)arg3 + 0) - *(f32 *)((s8 *)arg2 + 0);
    dz = *(f32 *)((s8 *)arg3 + 8) - *(f32 *)((s8 *)arg2 + 8);
    dy = *(f32 *)((s8 *)arg3 + 4) - *(f32 *)((s8 *)arg2 + 4);
    t = atan2_float(dx, dz);
    ang = (s32)(lbl_8044DC00 * t);
    *(f32 *)((s8 *)arg0 + 0x20) = *(f32 *)((s8 *)arg2 + 0);
    *(f32 *)((s8 *)arg0 + 0x24) = *(f32 *)((s8 *)arg2 + 4);
    *(f32 *)((s8 *)arg0 + 0x28) = *(f32 *)((s8 *)arg2 + 8);
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    *(s32 *)((s8 *)arg0 + 0x58) = ang;
    *(s32 *)((s8 *)arg0 + 0x5C) = 0;
    *(f32 *)((s8 *)arg0 + 0x12C) = lbl_805DC924;
    *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x40) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x44) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x74) = lbl_805DC92C;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    if (arg4 < 0) {
        *(s16 *)((s8 *)arg0 + 0xC4) = 0;
    } else if (arg4 >= 0x1E) {
        *(s16 *)((s8 *)arg0 + 0xC4) = 0x1E;
    } else {
        *(s16 *)((s8 *)arg0 + 0xC4) = arg4;
    }
    *(s16 *)((s8 *)arg0 + 0xC6) = TObjPlayer::get_level_tier(*(s16 *)((s8 *)arg0 + 0xC4));
    *(f32 *)((s8 *)arg0 + 0x2C) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x30) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x34) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x64) = lbl_805DC930;
    *(f32 *)((s8 *)arg0 + 0x70) = lbl_805DC934;
    *(f32 *)((s8 *)arg0 + 0x48) = dx;
    *(f32 *)((s8 *)arg0 + 0x4C) = dy;
    *(f32 *)((s8 *)arg0 + 0x50) = dz;
    if (lbl_805DC92C != vector_length(arg0 + 0x48)) {
        normalize_vector(arg0 + 0x48);
    }
    direction_to_rotation_xz(arg0 + 0x48, arg0 + 0x54, arg0 + 0x5C);
    *(f32 *)((s8 *)arg0 + 0xFC) = lbl_805DC92C;
    *(f32 *)((s8 *)arg0 + 0x100) = lbl_805DC92C;
    *(f32 *)((s8 *)arg0 + 0x104) = lbl_805DC92C;
    if (obj_getField1c(*(s32 *)((s8 *)arg0 + 0x1C)) < 4U && get_type__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0x1C) + 0x828) != 0) {
        *(f32 *)((s8 *)arg0 + 0x104) = lbl_805DC938;
    }
    *(f32 *)((s8 *)arg0 + 0x108) = lbl_805DC91C;
    *(f32 *)((s8 *)arg0 + 0x10C) = lbl_805DC928;
    *(s32 *)((s8 *)arg0 + 0x110) = 1;
    if (obj_getField1c(*(s32 *)((s8 *)arg0 + 0x1C)) < 4U) {
        if (get_type__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0x1C) + 0x828) != 0) {
            *(s32 *)((s8 *)arg0 + 0x114) = 0x40007;
        } else {
            *(s32 *)((s8 *)arg0 + 0x114) = 0x40107;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0x114) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = construct_collider_proxy__13TUnk_804AF8A0Fv(var_r0, arg0);
    }
    *(u32 *)((s8 *)arg0 + 0x128) = var_r0;
    if (*(u32 *)((s8 *)arg0 + 0x128) != 0U) {
        init_collision_body_parts(*(u32 *)((s8 *)arg0 + 0x128), arg0 + 0xFC, 1);
    }
    return arg0;
}

u8 *construct_facing_technique__10TObjPlayerFPviPvii(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u32 var_r0;
    __ct__7TEffectFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CCC68;
    ((TObjPlayer *)(arg0 + 0x84))->register_object();
    *(u16 *)((s8 *)arg0 + 0xC8) = 0xFFFF;
    *(f32 *)((s8 *)arg0 + 0x20) = *(f32 *)((s8 *)arg2 + 0);
    *(f32 *)((s8 *)arg0 + 0x24) = *(f32 *)((s8 *)arg2 + 4);
    *(f32 *)((s8 *)arg0 + 0x28) = *(f32 *)((s8 *)arg2 + 8);
    *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x40) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x44) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x74) = lbl_805DC92C;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    if (arg4 < 0) {
        *(s16 *)((s8 *)arg0 + 0xC4) = 0;
    } else if (arg4 >= 0x1E) {
        *(s16 *)((s8 *)arg0 + 0xC4) = 0x1E;
    } else {
        *(s16 *)((s8 *)arg0 + 0xC4) = arg4;
    }
    *(s16 *)((s8 *)arg0 + 0xC6) = TObjPlayer::get_level_tier(*(s16 *)((s8 *)arg0 + 0xC4));
    *(f32 *)((s8 *)arg0 + 0x2C) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x30) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x34) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DC928;
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    *(s32 *)((s8 *)arg0 + 0x58) = arg3;
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    *(f32 *)((s8 *)arg0 + 0x12C) = lbl_805DC924;
    *(f32 *)((s8 *)arg0 + 0x64) = lbl_805DC930;
    *(f32 *)((s8 *)arg0 + 0x70) = lbl_805DC934;
    *(f32 *)((s8 *)arg0 + 0x48) = sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x58));
    *(f32 *)((s8 *)arg0 + 0x4C) = lbl_805DC92C;
    *(f32 *)((s8 *)arg0 + 0x50) = cos_table_lookup(*(s32 *)((s8 *)arg0 + 0x58));
    if (lbl_805DC92C != vector_length(arg0 + 0x48)) {
        normalize_vector(arg0 + 0x48);
    }
    direction_to_rotation_xz(arg0 + 0x48, arg0 + 0x54, arg0 + 0x5C);
    *(f32 *)((s8 *)arg0 + 0xFC) = lbl_805DC92C;
    *(f32 *)((s8 *)arg0 + 0x100) = lbl_805DC92C;
    *(f32 *)((s8 *)arg0 + 0x104) = lbl_805DC92C;
    if (obj_getField1c(*(s32 *)((s8 *)arg0 + 0x1C)) < 4U && get_type__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0x1C) + 0x828) != 0) {
        *(f32 *)((s8 *)arg0 + 0x104) = lbl_805DC938;
    }
    *(f32 *)((s8 *)arg0 + 0x108) = lbl_805DC91C;
    *(f32 *)((s8 *)arg0 + 0x10C) = lbl_805DC928;
    *(s32 *)((s8 *)arg0 + 0x110) = 1;
    if (obj_getField1c(*(s32 *)((s8 *)arg0 + 0x1C)) < 4U) {
        if (get_type__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0x1C) + 0x828) != 0) {
            *(s32 *)((s8 *)arg0 + 0x114) = 0x40007;
        } else {
            *(s32 *)((s8 *)arg0 + 0x114) = 0x40107;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0x114) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = construct_collider_proxy__13TUnk_804AF8A0Fv(var_r0, arg0);
    }
    *(u32 *)((s8 *)arg0 + 0x128) = var_r0;
    if (*(u32 *)((s8 *)arg0 + 0x128) != 0U) {
        init_collision_body_parts(*(u32 *)((s8 *)arg0 + 0x128), arg0 + 0xFC, 1);
    }
    return arg0;
}

void TUnk_804CCC68::vfunc_8() {  }

}
