#include "types.h"
#include "pso/player/TUnk_804CCC68.h"
#include "pso/player/TUnk_804CCC68.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u16 obj_getField1c(s32);
s32 get_type__10TObjPlayerFPv(void *p);
f32 atan2_float(f32 y, f32 x);
void *__ct__7TEffectFv(void *);
void direction_to_rotation_xz(u8 *arg0, s32 *arg1, s32 *arg2);
s32 init_collision_body_parts(u32, void *, int);
u32 construct_collider_proxy__13TUnk_804AF8A0Fv(u32, void *);
u32 __nw__7TObjectFUl(int);
f32 vector_length(void *);
s32 normalize_vector(void *);
extern const f64 lbl_8044DC00;
extern s32 __vt__13TUnk_804CCC68[];
extern const f32 lbl_805DC91C;
extern const f32 lbl_805DC924;
extern const f32 lbl_805DC928;
extern const f32 lbl_805DC92C;
extern const f32 lbl_805DC930;
extern const f32 lbl_805DC934;
extern const f32 lbl_805DC938;
u8 *__ct__13TUnk_804CCC68FlPUcPUcl(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s32 arg4);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
u8 *construct_facing_technique__10TObjPlayerFPviPvii(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);

void *TObjPlayer::destroy_technique_effect_resources(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = __vt__13TUnk_804CCC68;
        if (this->m_128 != NULL) { free_collision_body_parts(this->m_128); *(s32 *)&this->m_128 = 0; }
        __dt__7TEffectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
TUnk_804CCC68::TUnk_804CCC68(s32 arg1, u8 *arg2, u8 *arg3, s32 arg4) : TEffect() {
    f32 dx;
    f32 dz;
    f32 dy;
    f64 t;
    s32 ang;
    u32 var_r0;
    ((TObjPlayer *)(((u8 *)this) + 0x84))->register_object();
    this->sourceId = 0xFFFF;
    dx = *(f32 *)((s8 *)arg3 + 0) - *(f32 *)((s8 *)arg2 + 0);
    dz = *(f32 *)((s8 *)arg3 + 8) - *(f32 *)((s8 *)arg2 + 8);
    dy = *(f32 *)((s8 *)arg3 + 4) - *(f32 *)((s8 *)arg2 + 4);
    t = atan2_float(dx, dz);
    ang = (s32)(lbl_8044DC00 * t);
    *(f32 *)((s8 *)this + 0x20) = *(f32 *)((s8 *)arg2 + 0);
    *(f32 *)((s8 *)this + 0x24) = *(f32 *)((s8 *)arg2 + 4);
    *(f32 *)((s8 *)this + 0x28) = *(f32 *)((s8 *)arg2 + 8);
    *(s32 *)((s8 *)this + 0x54) = 0;
    *(s32 *)((s8 *)this + 0x58) = ang;
    *(s32 *)((s8 *)this + 0x5C) = 0;
    this->halfWidth = lbl_805DC924;
    *(f32 *)((s8 *)this + 0x3C) = lbl_805DC928;
    *(f32 *)((s8 *)this + 0x40) = lbl_805DC928;
    *(f32 *)((s8 *)this + 0x44) = lbl_805DC928;
    this->traveled = lbl_805DC92C;
    *(s32 *)&this->source = arg1;
    if (arg4 < 0) {
        this->level = 0;
    } else if (arg4 >= 0x1E) {
        this->level = 0x1E;
    } else {
        this->level = arg4;
    }
    this->band = TObjPlayer::get_level_tier(this->level);
    *(f32 *)((s8 *)this + 0x2C) = lbl_805DC928;
    *(f32 *)((s8 *)this + 0x30) = lbl_805DC928;
    *(f32 *)((s8 *)this + 0x34) = lbl_805DC928;
    *(f32 *)((s8 *)this + 0x38) = lbl_805DC928;
    *(f32 *)((s8 *)this + 0x64) = lbl_805DC930;
    this->range = lbl_805DC934;
    *(f32 *)((s8 *)this + 0x48) = dx;
    *(f32 *)((s8 *)this + 0x4C) = dy;
    *(f32 *)((s8 *)this + 0x50) = dz;
    if (lbl_805DC92C != vector_length(((u8 *)this) + 0x48)) {
        normalize_vector(((u8 *)this) + 0x48);
    }
    direction_to_rotation_xz((u8 *)(((u8 *)this) + 0x48), (s32 *)(((u8 *)this) + 0x54), (s32 *)(((u8 *)this) + 0x5C));
    *(f32 *)((s8 *)this + 0xFC) = lbl_805DC92C;
    *(f32 *)((s8 *)this + 0x100) = lbl_805DC92C;
    *(f32 *)((s8 *)this + 0x104) = lbl_805DC92C;
    if (obj_getField1c(*(s32 *)&this->source) < 4U && get_type__10TObjPlayerFPv((void *)(*(s32 *)&this->source+ 0x828)) != 0) {
        *(f32 *)((s8 *)this + 0x104) = lbl_805DC938;
    }
    *(f32 *)((s8 *)this + 0x108) = lbl_805DC91C;
    *(f32 *)((s8 *)this + 0x10C) = lbl_805DC928;
    *(s32 *)((s8 *)this + 0x110) = 1;
    if (obj_getField1c(*(s32 *)&this->source) < 4U) {
        if (get_type__10TObjPlayerFPv((void *)(*(s32 *)&this->source+ 0x828)) != 0) {
            *(s32 *)((s8 *)this + 0x114) = 0x40007;
        } else {
            *(s32 *)((s8 *)this + 0x114) = 0x40107;
        }
    } else {
        *(s32 *)((s8 *)this + 0x114) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = construct_collider_proxy__13TUnk_804AF8A0Fv(var_r0, ((u8 *)this));
    }
    *(u32 *)((s8 *)this + 0x128) = var_r0;
    if (*(u32 *)((s8 *)this + 0x128) != 0U) {
        init_collision_body_parts(*(u32 *)((s8 *)this + 0x128), ((u8 *)this) + 0xFC, 1);
    }
}
extern "C" {

u8 *construct_facing_technique__10TObjPlayerFPviPvii(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u32 var_r0;
    __ct__7TEffectFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TUnk_804CCC68;
    ((TObjPlayer *)(arg0 + 0x84))->register_object();
    ((TUnk_804CCC68 *)arg0)->sourceId = 0xFFFF;
    *(f32 *)((s8 *)arg0 + 0x20) = *(f32 *)((s8 *)arg2 + 0);
    *(f32 *)((s8 *)arg0 + 0x24) = *(f32 *)((s8 *)arg2 + 4);
    *(f32 *)((s8 *)arg0 + 0x28) = *(f32 *)((s8 *)arg2 + 8);
    *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x40) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x44) = lbl_805DC928;
    ((TUnk_804CCC68 *)arg0)->traveled = lbl_805DC92C;
    *(s32 *)&((TUnk_804CCC68 *)arg0)->source = arg1;
    if (arg4 < 0) {
        ((TUnk_804CCC68 *)arg0)->level = 0;
    } else if (arg4 >= 0x1E) {
        ((TUnk_804CCC68 *)arg0)->level = 0x1E;
    } else {
        ((TUnk_804CCC68 *)arg0)->level = arg4;
    }
    ((TUnk_804CCC68 *)arg0)->band = TObjPlayer::get_level_tier(((TUnk_804CCC68 *)arg0)->level);
    *(f32 *)((s8 *)arg0 + 0x2C) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x30) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x34) = lbl_805DC928;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DC928;
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    *(s32 *)((s8 *)arg0 + 0x58) = arg3;
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    ((TUnk_804CCC68 *)arg0)->halfWidth = lbl_805DC924;
    *(f32 *)((s8 *)arg0 + 0x64) = lbl_805DC930;
    ((TUnk_804CCC68 *)arg0)->range = lbl_805DC934;
    *(f32 *)((s8 *)arg0 + 0x48) = sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x58));
    *(f32 *)((s8 *)arg0 + 0x4C) = lbl_805DC92C;
    *(f32 *)((s8 *)arg0 + 0x50) = cos_table_lookup(*(s32 *)((s8 *)arg0 + 0x58));
    if (lbl_805DC92C != vector_length(arg0 + 0x48)) {
        normalize_vector(arg0 + 0x48);
    }
    direction_to_rotation_xz((u8 *)(arg0 + 0x48), (s32 *)(arg0 + 0x54), (s32 *)(arg0 + 0x5C));
    *(f32 *)((s8 *)arg0 + 0xFC) = lbl_805DC92C;
    *(f32 *)((s8 *)arg0 + 0x100) = lbl_805DC92C;
    *(f32 *)((s8 *)arg0 + 0x104) = lbl_805DC92C;
    if (obj_getField1c(*(s32 *)&((TUnk_804CCC68 *)arg0)->source) < 4U && get_type__10TObjPlayerFPv((void *)(*(s32 *)&((TUnk_804CCC68 *)arg0)->source+ 0x828)) != 0) {
        *(f32 *)((s8 *)arg0 + 0x104) = lbl_805DC938;
    }
    *(f32 *)((s8 *)arg0 + 0x108) = lbl_805DC91C;
    *(f32 *)((s8 *)arg0 + 0x10C) = lbl_805DC928;
    *(s32 *)((s8 *)arg0 + 0x110) = 1;
    if (obj_getField1c(*(s32 *)&((TUnk_804CCC68 *)arg0)->source) < 4U) {
        if (get_type__10TObjPlayerFPv((void *)(*(s32 *)&((TUnk_804CCC68 *)arg0)->source+ 0x828)) != 0) {
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

void TUnk_804CCC68::vfunc_8(void *) {  }

}
