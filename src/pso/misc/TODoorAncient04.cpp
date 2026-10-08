#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase { char pad[0x18]; };

struct VObj : VBase { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual M2C_UNK m8(f32, f32); };

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual M2C_UNK m12();
    virtual s32 m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_8016BF68_lbl_80441B4C {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016C010_lbl_80441B4C {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016BC84_lbl_80441ACC {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8016BC84_lbl_804B2B30 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_8015EAE0_lbl_804B0EA8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015EAE0___vt__15TODoorAncient04 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
s32 is_in_view_depth(void *, f32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(int);
M2C_UNK draw_ginja_model_with_motion(void *, int, f32);
extern void *TODoorAncient04__data_805D5914;
extern const f32 lbl_805DB408;
void render__15TODoorAncient04Fv(u8 *arg0);
u8 *load_resource_from_descriptor(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 load_gvm_texture_file(void *);
extern RecoveredGlobal_8016BC84_lbl_80441ACC lbl_80440ADC;
extern RecoveredGlobal_8016BC84_lbl_804B2B30 lbl_804B0E98;
extern u32 lbl_805D5910;
extern void *TODoorAncient04__data_805D5914;
void TODoorAncient04__sub_8015E9F4(void);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_8015EAE0_lbl_804B0EA8 lbl_804B0EA8;
extern M2C_UNK __vt__15TODoorAncient04[];
extern s32 lbl_805D2F30;
extern u32 lbl_805D5910;
extern void *TODoorAncient04__data_805D5914;
extern const f32 lbl_805DB408;
extern const f32 lbl_805DB40C;
u8 *TODoorAncient04__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TODoorAncient04__vt13(u8 *arg0);
void TODoorAncient04__vt15(u8 *arg0);
void TODoorAncient04__vt18(void);
void *__dt__15TODoorAncient04Fv(void *arg0, s16 arg1);
void cleanup_refs__15TODoorAncient04Fv(void);
void *create__15TODoorAncient04FPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
s32 is_any_player_within_radius_xz(f32);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TODoorAncient04__vt18(void) {  }

extern const f32 lbl_805DB400;

void TODoorAncient04__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (is_any_player_within_radius_xz(lbl_805DB400) == 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        play_sound_effect(0x4004B708, arg0 + 0x38, 0, 0);
    }
}

extern const f32 lbl_805DB404;

void TODoorAncient04__vt13(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (is_any_player_within_radius_xz(lbl_805DB404) != 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags(arg0, 0, 8);
        play_sound_effect(0x4004B708, arg0 + 0x38, 0, 0);
    }
}

extern void *tl_05;

void render__15TODoorAncient04Fv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;
    if ((((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) && (is_in_view_depth((void *) (arg0), (f32) (lbl_805DB408)) != 0)) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD((*(s32 *)&TODoorAncient04__data_805D5914), M2C_UNK *, ((M2C_FIELD(arg0, s32 *, 0xD0) * 4) & 4))));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) == 0) {
            temp_r31 = M2C_FIELD(arg0, u8 **, 0x34);
            post_translate_matrix((void *) (temp_r31 + 8));
            draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
            temp_r31_2 = M2C_FIELD(temp_r31, u8 **, 0x2C);
            push_matrix();
            post_translate_matrix((void *) (temp_r31_2 + 8));
            draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
            pop_matrix();
            begin_effect_render__13TParticleCtrlFv();
            temp_r31_3 = M2C_FIELD(temp_r31_2, u8 **, 0x30);
            push_matrix();
            post_translate_matrix((void *) (temp_r31_3 + 8));
            draw_ginja_model((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
            pop_matrix();
            temp_r31_4 = M2C_FIELD(temp_r31_3, u8 **, 0x30);
            push_matrix();
            post_translate_matrix((void *) (temp_r31_4 + 8));
            draw_ginja_model((int) (M2C_FIELD(temp_r31_4, s32 *, 4)));
            pop_matrix();
            end_effect_render__13TParticleCtrlFv();
        } else {
            draw_ginja_model_with_motion((void *) (M2C_FIELD(arg0, u8 **, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        }
        pop_matrix();
    }
}

void *create__15TODoorAncient04FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TODoorAncient04__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5910;
extern void *TODoorAncient04__data_805D5914;

void cleanup_refs__15TODoorAncient04Fv(void) {
    if ((void *) TODoorAncient04__data_805D5914 != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TODoorAncient04__data_805D5914, s32 *, 4));
        if ((void *) TODoorAncient04__data_805D5914 != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorAncient04__data_805D5914);
            TODoorAncient04__data_805D5914 = NULL;
        }
    }
    if ((u32) lbl_805D5910 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5910, 1);
        lbl_805D5910 = 0U;
    }
}

extern M2C_UNK __vt__15TODoorAncient04[];

typedef char RecoveredGlobal_8016BC84_lbl_80441ACC_size[sizeof(RecoveredGlobal_8016BC84_lbl_80441ACC) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8016BC84_lbl_804B2B30_size[sizeof(RecoveredGlobal_8016BC84_lbl_804B2B30) == 0x10 ? 1 : -1];
void TODoorAncient04__sub_8015E9F4(void) {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &lbl_804B0E98.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5910) = var_r0;
    temp_r3_2 = (s32 *)(alloc_buffer__11TOBoss4RockFPv(8));
    (*(s32 * *)&TODoorAncient04__data_805D5914) = temp_r3_2;
    *temp_r3_2 = M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5910), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD((*(s32 * *)&TODoorAncient04__data_805D5914), s32 *, 4) = load_gvm_texture_file((void *) (&lbl_80440ADC.value));
}
typedef char RecoveredGlobal_8016BF68_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016BF68_lbl_80441B4C) == 0x90 ? 1 : -1];
typedef char RecoveredGlobal_8016C010_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016C010_lbl_80441B4C) == 0x90 ? 1 : -1];

void *__dt__15TODoorAncient04Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorAncient04;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8015EAE0_lbl_804B0EA8_size[sizeof(RecoveredGlobal_8015EAE0_lbl_804B0EA8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015EAE0___vt__15TODoorAncient04_size[sizeof(RecoveredGlobal_8015EAE0___vt__15TODoorAncient04) == 0x54 ? 1 : -1];
u8 *TODoorAncient04__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8015EAE0___vt__15TODoorAncient04 *)&__vt__15TODoorAncient04).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F30;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5910), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD((*(u8 * *)&TODoorAncient04__data_805D5914), s32 *, 4);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5910), u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB40C);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) (M2C_FIELD(arg0, f32 *, 0xB4) / lbl_805DB408);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B0EA8.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    return arg0;
}

}
