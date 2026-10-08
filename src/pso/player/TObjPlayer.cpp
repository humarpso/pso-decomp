#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct RecoveredGlobal_801BF414_lbl_804C3FA8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_2C { u8 bytes[0x2C]; };

struct RecoveredGlobal_801D2CF4_lbl_804C43CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801D2CF4_lbl_804C43D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Ent_801D2AB0 { u8 d[4]; };

struct Obj_801D2AB0 { u8 pad[0x14]; Ent_801D2AB0 arr[1]; };

struct Pos_801D2964 { u8 bytes[0x8]; };

struct Pkt_801D2964 { u8 hdr[4]; Pos_801D2964 pos; };

struct Ent_801D32A0 { u16 a; s16 b; };

struct Self_801D32A0 { u8 pad[0x20]; f32 f20; f32 f24; f32 f28; f32 f2c; s32 count; Ent_801D32A0 ents[1]; };

struct Cur_801D32A0 { u8 pad[0x28]; f32 x28; f32 x2c; f32 x30; u8 pad2[8]; f32 x3c; u8 pad3[0x5C]; u8 lock[4]; };

struct Pl_801D32A0 { u8 pad[0x424]; void *cursor; };

extern "C" {
void TObjPlayer__sub_801BEE24(void* p, s16 v);
void TObjPlayer__sub_801BEE24(void* p, s16 v);
void TObjPlayer__sub_801BEE2C(void* p, s16 v);
void TObjPlayer__sub_801BEE2C(void* p, s16 v);
void bswap_32__FPUl(void *);
void bswap_status_effect_data__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801BEEE0(void* p, void* q);
void TObjPlayer__sub_801BEEE0(void* p, void* q);
void TObjPlayer__sub_801BEF30(void* p, void* q);
void TObjPlayer__sub_801BEF30(void* p, void* q);
void TObjPlayer__sub_801BEF44(void* p, void* q);
void TObjPlayer__sub_801BEF44(void* p, void* q);
void TObjPlayer__sub_801BEF60(void* p, s32 v);
void TObjPlayer__sub_801BEF60(void* p, s32 v);
void prepare_heavy_attack_particles_default__10TObjPlayerFPv(void* p);
void prepare_heavy_attack_particles_default__10TObjPlayerFPv(void* p);
int emit_zalure_support_effect(void* p, int a1);
int create_attached_oneshot_emitter(void*, int, int);
int emit_zalure_support_effect(void* p, int a1);
int emit_deband_support_effect(void* p, int a1);
int check_hit_by_id__10TObjPlayerFiii(void*, int, int);
int emit_deband_support_effect(void* p, int a1);
void emit_jellen_support_effect_default__10TObjPlayerFPv(void* p);
void emit_jellen_support_effect_default__10TObjPlayerFPv(void* p);
void emit_shifta_support__10TObjPlayerFPv(void* p);
void emit_shifta_support__10TObjPlayerFPv(void* p);
void* get_surface_contact_point(void* p);
void* get_surface_contact_point(void* p);
int check_hit_by_id_276__10TObjPlayerFPvi(void* p, int a1);
int check_hit_by_id__10TObjPlayerFiii(void*, int, int);
int check_hit_by_id_276__10TObjPlayerFPvi(void* p, int a1);
int emit_grass_footstep_particle__10TObjPlayerFPvi(void* p, int a1);
int emit_player_particle(void*, int, int);
int emit_grass_footstep_particle__10TObjPlayerFPvi(void* p, int a1);
void* TObjPlayer__sub_801BF31C(void* p);
void* TObjPlayer__sub_801BF31C(void* p);
int TObjPlayer__sub_801BF3A0(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int TObjPlayer__sub_801BF3A0(void* p);
int copy_vec_at_18__10TObjPlayerFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int copy_vec_at_18__10TObjPlayerFPv(void* p);
int has_water_ground_flag(void* p);
int test_flags_any(void*, int);
int has_water_ground_flag(void* p);
void TObjPlayer__sub_801BF40C(void* p, u8 v);
void TObjPlayer__sub_801BF40C(void* p, u8 v);
void set_meseta__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
u8 TObjPlayer__sub_801BF460(s32 *arg0, s32 arg1);
void TObjPlayer__sub_801BF488(s32 *arg0, s32 arg1);
void TObjPlayer__sub_801BF4A0(s32 *arg0, s32 arg1);
int emit_grass_footstep_particle__10TObjPlayerFPvi(void* p, int a1);
void* TObjPlayer__sub_801BF31C(void* p);
void emit_grass_footstep_effect(s32 arg0);
void* get_surface_contact_point(void* p);
M2C_UNK emit_water_step_particles(void *, int);
void emit_water_footstep_effect(s32 arg0);
void* get_surface_contact_point(void* p);
M2C_UNK emit_sand_step_particles(void *, int);
void emit_sand_footstep_effect(s32 arg0);
void* get_surface_contact_point(void* p);
M2C_UNK emit_idle_water_splash(void *, int);
void emit_idle_water_effect(s32 arg0);
void TObjPlayer__sub_801BEEAC(u8 *arg0, u8 *arg1);
void copy_player_record_header__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
int check_hit_by_id__10TObjPlayerFiii(void*, int, int);
void emit_photon_blast_feedback_effects(s32 arg0, s32 arg1);
int emit_zalure_support_effect(void* p, int a1);
int emit_zalure_support_effect_at__10TObjPlayerFPv(u16 *arg0);
int emit_deband_support_effect(void* p, int a1);
int emit_deband_support_effect_at__10TObjPlayerFPv(u16 *arg0);
int check_hit_by_id_276__10TObjPlayerFPvi(void* p, int a1);
int emit_movement_effect_at__10TObjPlayerFPv(u16 *arg0);
M2C_UNK check_hit_by_id_431__10TObjPlayerFPvi(void *, u16);
void check_hit_by_id_431_from_packet__10TObjPlayerFPv(u16 *arg0);
void emit_photon_blast_feedback_effects(s32 arg0, s32 arg1);
void emit_photon_blast_feedback_from_packet__10TObjPlayerFPv(u16 *arg0);
s32 obj_getField1c(int);
int check_hit_by_id__10TObjPlayerFiii(void*, int, int);
void prepare_heavy_attack_particles(u8 *arg0);
s32 obj_getField1c(int);
int create_attached_oneshot_emitter(void*, int, int);
void emit_jellen_support_effect(u8 *arg0);
s32 obj_getField1c(int);
int check_hit_by_id__10TObjPlayerFiii(void*, int, int);
void emit_shifta_support_effect(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801BF414_lbl_804C3FA8 lbl_804C3FA8;
u8 *TObjPlayer__sub_801BF414(u8 *arg0, u8 *arg1, s16 arg2, s32 arg3);
int TFontSmallLobby__sub_801C0228(void*);
void *copy_6x0d_status_effect_packet__10TObjPlayerFPvPv(void *arg0, void *arg1);
}

extern "C" {

u8 TObjPlayer__sub_801BED70(void* p);
u8 TObjPlayer__sub_801BED78(void* p);
u8 TObjPlayer__sub_801BED80(void* p);
u8 TObjPlayer__sub_801BED88(void* p);
u8 TObjPlayer__sub_801BED90(void* p);
void TObjPlayer__sub_801BED98(void* p, u8 v);
void TObjPlayer__sub_801BEDA0(void* p, u8 v);
void TObjPlayer__sub_801BEDA8(void* p, u8 v);
void TObjPlayer__sub_801BEDB0(void* p, u8 v);
void TObjPlayer__sub_801BEDB8(void* p, u8 v);
void *TObjPlayer__sub_801BEDC0(void *arg0, s16 arg1);
void TObjPlayer__sub_801BF47C(void* p);
void add_item_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void add_item_count_kind4__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
int clear_flag0_bit1__10TObjPlayerFPv(void* p);
int set_action_palette_mode__10TObjPlayerFPv(void* p);
int set_flag_2__10TObjPlayerFPv(void* p);
void set_position__10TObjPlayerFPvfff(void* p, f32 a, f32 b, f32 c);
void set_shared_count__10TObjPlayerFi(int a0);
void set_shared_flag__10TObjPlayerFi(int a0);
void try_add_item__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void try_add_item_count_kind3__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void try_add_item_count_type2__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
int update_action_palette__10TObjPlayerFPv(void* p);
M2C_UNK __dl__FPv(void *);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int set_flags__10TObjPlayerFPvUi(void*, int);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
s32 try_add_item_count__10TObjPlayerFiiiUc(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);

    extern int lbl_805D5D74;
void set_shared_flag__10TObjPlayerFi(int a0) { lbl_805D5D74 = a0; }

    extern int lbl_805D5D70;
void set_shared_count__10TObjPlayerFi(int a0) { lbl_805D5D70 = a0; }

void add_item_count_kind4__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 4, arg2);
}
void try_add_item_count_kind3__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 3, arg2);
}
void try_add_item_count_type2__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 2, arg2);
}
void add_item_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 1, arg2);
}
void try_add_item__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 0, arg2);
}
u8 TObjPlayer__sub_801BED70(void* p) { return *(u8*)((char*)p + 0x4); }
u8 TObjPlayer__sub_801BED78(void* p) { return *(u8*)((char*)p + 0x3); }
u8 TObjPlayer__sub_801BED80(void* p) { return *(u8*)((char*)p + 0x2); }
u8 TObjPlayer__sub_801BED88(void* p) { return *(u8*)((char*)p + 0x1); }
u8 TObjPlayer__sub_801BED90(void* p) { return *(u8*)((char*)p + 0x0); }
void TObjPlayer__sub_801BED98(void* p, u8 v) { *(u8*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_801BEDA0(void* p, u8 v) { *(u8*)((char*)p + 0x3) = v; }
void TObjPlayer__sub_801BEDA8(void* p, u8 v) { *(u8*)((char*)p + 0x2) = v; }
void TObjPlayer__sub_801BEDB0(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
void TObjPlayer__sub_801BEDB8(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }

extern M2C_UNK lbl_804C3E44[];

void *TObjPlayer__sub_801BEDC0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804C3E44;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void set_position__10TObjPlayerFPvfff(void* p, f32 a, f32 b, f32 c) { *(f32*)((char*)p + 0x38) = a; *(f32*)((char*)p + 0x3c) = b; *(f32*)((char*)p + 0x40) = c; }

void set_meseta__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), s32 *, 0x20) = arg1;
}

void TObjPlayer__sub_801BEE24(void* p, s16 v) { *(s16*)((char*)p + 0x2be) = v; }

void TObjPlayer__sub_801BEE2C(void* p, s16 v) { *(s16*)((char*)p + 0x2bc) = v; }

void bswap_status_effect_data__10TObjPlayerFPv(void *arg0) {
    bswap_32__FPUl(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

#pragma push
#pragma opt_common_subs off
#pragma pop
void *copy_6x0d_status_effect_packet__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228(arg0);
    ((Pkt_801D2964 *)arg0)->pos = ((Pkt_801D2964 *)arg1)->pos;
    return arg0;
}
#pragma push
#pragma fp_contract on
#pragma pop
typedef char RecoveredGlobal_801D2CF4_lbl_804C43CC_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43CC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801D2CF4_lbl_804C43D8_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43D8) == 0x10 ? 1 : -1];

void TObjPlayer__sub_801BEEAC(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    *(M2CCopy_8 *)((s32) arg0 + 0xC) = *(const M2CCopy_8 *)((s32) arg1 + 0xC);
}

void TObjPlayer__sub_801BEEE0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

void copy_player_record_header__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
}

void TObjPlayer__sub_801BEF30(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

void TObjPlayer__sub_801BEF44(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); }

void TObjPlayer__sub_801BEF60(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }

void prepare_heavy_attack_particles_default__10TObjPlayerFPv(void* p) { prepare_heavy_attack_particles((u8 *)((char*)p + 0x4)); }

#pragma push
#pragma fp_contract on
void prepare_heavy_attack_particles(u8 *arg0) {
    if (M2C_FIELD(arg0, u32 *, 4) != 0U) {
        check_hit_by_id__10TObjPlayerFiii((void*)((void *) (arg0)), (int)((int) (obj_getField1c((int) M2C_FIELD(arg0, u32 *, 4)))), (int)((int) (0x11)));
        check_hit_by_id__10TObjPlayerFiii((void*)((void *) (arg0)), (int)((int) (obj_getField1c((int) M2C_FIELD(arg0, u32 *, 4)))), (int)((int) (0x12)));
    }
}
#pragma pop

int emit_zalure_support_effect_at__10TObjPlayerFPv(u16 *arg0) { return emit_zalure_support_effect((void*)((s8 *)arg0 + 4), (int)(*arg0)); }

int emit_zalure_support_effect(void* p, int a1) { return create_attached_oneshot_emitter(p, a1, 508); }

int emit_deband_support_effect_at__10TObjPlayerFPv(u16 *arg0) { return emit_deband_support_effect((void*)((s8 *)arg0 + 4), (int)(*arg0)); }

int emit_deband_support_effect(void* p, int a1) { return check_hit_by_id__10TObjPlayerFiii(p, a1, 508); }

void emit_jellen_support_effect_default__10TObjPlayerFPv(void* p) { emit_jellen_support_effect((u8 *)((char*)p + 0x4)); }

#pragma push
#pragma fp_contract on
void emit_jellen_support_effect(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
        create_attached_oneshot_emitter((void*)((void *) (arg0)), (int)((int) (obj_getField1c((int) M2C_FIELD(arg0, u32 *, 0)))), (int)((int) (0x1C)));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
        create_attached_oneshot_emitter((void*)((void *) (arg0)), (int)((int) (obj_getField1c((int) M2C_FIELD(arg0, u32 *, 4)))), (int)((int) (0x1C)));
    }
}
#pragma pop

void emit_shifta_support__10TObjPlayerFPv(void* p) { emit_shifta_support_effect((u8 *)((char*)p + 0x4)); }

#pragma push
#pragma fp_contract on
void emit_shifta_support_effect(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
        check_hit_by_id__10TObjPlayerFiii((void*)((void *) (arg0)), (int)((int) (obj_getField1c((int) M2C_FIELD(arg0, u32 *, 0)))), (int)((int) (0x1C)));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
        check_hit_by_id__10TObjPlayerFiii((void*)((void *) (arg0)), (int)((int) (obj_getField1c((int) M2C_FIELD(arg0, u32 *, 4)))), (int)((int) (0x1C)));
    }
}
#pragma pop

void emit_idle_water_effect(s32 arg0) {
    emit_idle_water_splash((void *) (arg0 + 4), (int) (get_surface_contact_point((void*)arg0)));
}

void* get_surface_contact_point(void* p) { return (char*)p + 0x24; }

int emit_movement_effect_at__10TObjPlayerFPv(u16 *arg0) { return check_hit_by_id_276__10TObjPlayerFPvi((void*)((s8 *)arg0 + 4), (int)(*arg0)); }

int check_hit_by_id_276__10TObjPlayerFPvi(void* p, int a1) { return check_hit_by_id__10TObjPlayerFiii(p, a1, 276); }

void check_hit_by_id_431_from_packet__10TObjPlayerFPv(u16 *arg0) {
    check_hit_by_id_431__10TObjPlayerFPvi((s8 *)arg0 + 4, *arg0);
}

void emit_sand_footstep_effect(s32 arg0) {
    emit_sand_step_particles((void *) (arg0 + 4), (int) (get_surface_contact_point((void*)arg0)));
}

void emit_water_footstep_effect(s32 arg0) {
    emit_water_step_particles((void *) (arg0 + 4), (int) (get_surface_contact_point((void*)arg0)));
}

void emit_grass_footstep_effect(s32 arg0) {
    emit_grass_footstep_particle__10TObjPlayerFPvi((void*)((void *) (arg0 + 4)), (int)((int) (TObjPlayer__sub_801BF31C((void*)arg0))));
}

int emit_grass_footstep_particle__10TObjPlayerFPvi(void* p, int a1) { return emit_player_particle(p, a1, 570); }

void* TObjPlayer__sub_801BF31C(void* p) { return (char*)p + 0x18; }

void emit_photon_blast_feedback_from_packet__10TObjPlayerFPv(u16 *arg0) {
    emit_photon_blast_feedback_effects((s32)((s8 *)arg0 + 4), (s32)(*arg0));
}

void emit_photon_blast_feedback_effects(s32 arg0, s32 arg1) {
    check_hit_by_id__10TObjPlayerFiii((void*)(arg0), (int)(arg1), (int)(5));
    check_hit_by_id__10TObjPlayerFiii((void*)(arg0), (int)(arg1), (int)(0x2C));
    check_hit_by_id__10TObjPlayerFiii((void*)(arg0), (int)(arg1), (int)(0x3B));
}

int TObjPlayer__sub_801BF3A0(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x24); }

int copy_vec_at_18__10TObjPlayerFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x18); }

int has_water_ground_flag(void* p) { return test_flags_any(p, 4); }

void TObjPlayer__sub_801BF40C(void* p, u8 v) { *(u8*)((char*)p + 0x1c) = v; }

typedef char RecoveredGlobal_801BF414_lbl_804C3FA8_size[sizeof(RecoveredGlobal_801BF414_lbl_804C3FA8) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_801BF414(u8 *arg0, u8 *arg1, s16 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804C3FA8.value;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    return arg0;
}

u8 TObjPlayer__sub_801BF460(s32 *arg0, s32 arg1) {
    return (u8) ((*arg0 & (1 << arg1)) == 0);
}

void TObjPlayer__sub_801BF47C(void* p) { *(s32*)((char*)p + 0x0) = 0; }

void TObjPlayer__sub_801BF488(s32 *arg0, s32 arg1) {
    *arg0 &= ~(1 << arg1);
}

void TObjPlayer__sub_801BF4A0(s32 *arg0, s32 arg1) {
    *arg0 |= 1 << arg1;
}

int update_action_palette__10TObjPlayerFPv(void* p) { return set_slot__20TWindowActionPaletteFPvUc((char*)p + 0x4); }
int set_action_palette_mode__10TObjPlayerFPv(void* p) { return set_mode__20TWindowActionPaletteFPvUc((char*)p + 0x4); }
int clear_flag0_bit1__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi(p, 2); }
int set_flag_2__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi(p, 2); }

}
