#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u16 obj_getField1c(s32);
s32 get_type__10TObjPlayerFPv(s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK register_object__10TObjPlayerFi(void *);
void *__ct__7TEffectFv(void *);
M2C_UNK direction_to_rotation_xz(void *, void *, void *);
M2C_UNK init_collision_body_parts(u32, void *, int);
u32 TObjPlayer__sub_801569F4(u32, void *);
u32 __nw__7TObjectFUl(int);
s16 get_level_tier__10TObjPlayerFi(s16);
f32 vector_length(void *);
M2C_UNK normalize_vector(void *);
extern const f64 lbl_8044DC00;
extern M2C_UNK lbl_804CCC68[];
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
M2C_UNK register_object__10TObjPlayerFi(void *);
void *__ct__7TEffectFv(void *);
M2C_UNK direction_to_rotation_xz(void *, void *, void *);
M2C_UNK init_collision_body_parts(u32, void *, int);
u32 TObjPlayer__sub_801569F4(u32, void *);
u32 __nw__7TObjectFUl(int);
s16 get_level_tier__10TObjPlayerFi(s16);
f32 vector_length(void *);
M2C_UNK normalize_vector(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern M2C_UNK lbl_804CCC68[];
extern const f32 lbl_805DC91C;
extern const f32 lbl_805DC924;
extern const f32 lbl_805DC928;
extern const f32 lbl_805DC92C;
extern const f32 lbl_805DC930;
extern const f32 lbl_805DC934;
extern const f32 lbl_805DC938;
u8 *TObjPlayer__sub_8023AA4C(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4);
}

extern "C" {

void TObjPlayer__sub_8023AC84(void);
void *destroy_technique_effect_resources__10TObjPlayerFPvs(void *arg0, s16 arg1);
void free_collision_body_parts(void *);
int TTecSifta__sub_8023AC88(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);
int spawn_support_tec_range_effect(void*);

extern M2C_UNK lbl_804CCC68[];

void *destroy_technique_effect_resources__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCC68;
        if (M2C_FIELD(arg0, void **, 0x128) != NULL) { free_collision_body_parts(M2C_FIELD(arg0, void **, 0x128)); M2C_FIELD(arg0, M2C_UNK *, 0x128) = 0; }
        __dt__7TEffectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *construct_aimed_technique_projectile(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s32 arg4) {
    f32 dx;
    f32 dz;
    f32 dy;
    f64 t;
    s32 ang;
    u32 var_r0;
    __ct__7TEffectFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCC68;
    register_object__10TObjPlayerFi(arg0 + 0x84);
    M2C_FIELD(arg0, u16 *, 0xC8) = 0xFFFF;
    dx = M2C_FIELD(arg3, f32 *, 0) - M2C_FIELD(arg2, f32 *, 0);
    dz = M2C_FIELD(arg3, f32 *, 8) - M2C_FIELD(arg2, f32 *, 8);
    dy = M2C_FIELD(arg3, f32 *, 4) - M2C_FIELD(arg2, f32 *, 4);
    t = get_ad_end_text_start__10TObjPlayerFv(dx, dz);
    ang = (s32)(lbl_8044DC00 * t);
    M2C_FIELD(arg0, f32 *, 0x20) = M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x24) = M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x28) = M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = ang;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, f32 *, 0x12C) = lbl_805DC924;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x74) = lbl_805DC92C;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if (arg4 < 0) {
        M2C_FIELD(arg0, s16 *, 0xC4) = 0;
    } else if (arg4 >= 0x1E) {
        M2C_FIELD(arg0, s16 *, 0xC4) = 0x1E;
    } else {
        M2C_FIELD(arg0, s16 *, 0xC4) = arg4;
    }
    M2C_FIELD(arg0, s16 *, 0xC6) = get_level_tier__10TObjPlayerFi(M2C_FIELD(arg0, s16 *, 0xC4));
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x64) = lbl_805DC930;
    M2C_FIELD(arg0, f32 *, 0x70) = lbl_805DC934;
    M2C_FIELD(arg0, f32 *, 0x48) = dx;
    M2C_FIELD(arg0, f32 *, 0x4C) = dy;
    M2C_FIELD(arg0, f32 *, 0x50) = dz;
    if (lbl_805DC92C != vector_length(arg0 + 0x48)) {
        normalize_vector(arg0 + 0x48);
    }
    direction_to_rotation_xz(arg0 + 0x48, arg0 + 0x54, arg0 + 0x5C);
    M2C_FIELD(arg0, f32 *, 0xFC) = lbl_805DC92C;
    M2C_FIELD(arg0, f32 *, 0x100) = lbl_805DC92C;
    M2C_FIELD(arg0, f32 *, 0x104) = lbl_805DC92C;
    if (obj_getField1c(M2C_FIELD(arg0, s32 *, 0x1C)) < 4U && get_type__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x1C) + 0x828) != 0) {
        M2C_FIELD(arg0, f32 *, 0x104) = lbl_805DC938;
    }
    M2C_FIELD(arg0, f32 *, 0x108) = lbl_805DC91C;
    M2C_FIELD(arg0, f32 *, 0x10C) = lbl_805DC928;
    M2C_FIELD(arg0, s32 *, 0x110) = 1;
    if (obj_getField1c(M2C_FIELD(arg0, s32 *, 0x1C)) < 4U) {
        if (get_type__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x1C) + 0x828) != 0) {
            M2C_FIELD(arg0, s32 *, 0x114) = 0x40007;
        } else {
            M2C_FIELD(arg0, s32 *, 0x114) = 0x40107;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x114) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = TObjPlayer__sub_801569F4(var_r0, arg0);
    }
    M2C_FIELD(arg0, u32 *, 0x128) = var_r0;
    if (M2C_FIELD(arg0, u32 *, 0x128) != 0U) {
        init_collision_body_parts(M2C_FIELD(arg0, u32 *, 0x128), arg0 + 0xFC, 1);
    }
    return arg0;
}

u8 *TObjPlayer__sub_8023AA4C(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u32 var_r0;
    __ct__7TEffectFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCC68;
    register_object__10TObjPlayerFi(arg0 + 0x84);
    M2C_FIELD(arg0, u16 *, 0xC8) = 0xFFFF;
    M2C_FIELD(arg0, f32 *, 0x20) = M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x24) = M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x28) = M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x74) = lbl_805DC92C;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if (arg4 < 0) {
        M2C_FIELD(arg0, s16 *, 0xC4) = 0;
    } else if (arg4 >= 0x1E) {
        M2C_FIELD(arg0, s16 *, 0xC4) = 0x1E;
    } else {
        M2C_FIELD(arg0, s16 *, 0xC4) = arg4;
    }
    M2C_FIELD(arg0, s16 *, 0xC6) = get_level_tier__10TObjPlayerFi(M2C_FIELD(arg0, s16 *, 0xC4));
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DC928;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DC928;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = arg3;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, f32 *, 0x12C) = lbl_805DC924;
    M2C_FIELD(arg0, f32 *, 0x64) = lbl_805DC930;
    M2C_FIELD(arg0, f32 *, 0x70) = lbl_805DC934;
    M2C_FIELD(arg0, f32 *, 0x48) = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x58));
    M2C_FIELD(arg0, f32 *, 0x4C) = lbl_805DC92C;
    M2C_FIELD(arg0, f32 *, 0x50) = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x58));
    if (lbl_805DC92C != vector_length(arg0 + 0x48)) {
        normalize_vector(arg0 + 0x48);
    }
    direction_to_rotation_xz(arg0 + 0x48, arg0 + 0x54, arg0 + 0x5C);
    M2C_FIELD(arg0, f32 *, 0xFC) = lbl_805DC92C;
    M2C_FIELD(arg0, f32 *, 0x100) = lbl_805DC92C;
    M2C_FIELD(arg0, f32 *, 0x104) = lbl_805DC92C;
    if (obj_getField1c(M2C_FIELD(arg0, s32 *, 0x1C)) < 4U && get_type__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x1C) + 0x828) != 0) {
        M2C_FIELD(arg0, f32 *, 0x104) = lbl_805DC938;
    }
    M2C_FIELD(arg0, f32 *, 0x108) = lbl_805DC91C;
    M2C_FIELD(arg0, f32 *, 0x10C) = lbl_805DC928;
    M2C_FIELD(arg0, s32 *, 0x110) = 1;
    if (obj_getField1c(M2C_FIELD(arg0, s32 *, 0x1C)) < 4U) {
        if (get_type__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x1C) + 0x828) != 0) {
            M2C_FIELD(arg0, s32 *, 0x114) = 0x40007;
        } else {
            M2C_FIELD(arg0, s32 *, 0x114) = 0x40107;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x114) = 0x40007;
    }
    var_r0 = __nw__7TObjectFUl(0xAC);
    if (var_r0 != 0U) {
        var_r0 = TObjPlayer__sub_801569F4(var_r0, arg0);
    }
    M2C_FIELD(arg0, u32 *, 0x128) = var_r0;
    if (M2C_FIELD(arg0, u32 *, 0x128) != 0U) {
        init_collision_body_parts(M2C_FIELD(arg0, u32 *, 0x128), arg0 + 0xFC, 1);
    }
    return arg0;
}

void TObjPlayer__sub_8023AC84(void) {  }

}
