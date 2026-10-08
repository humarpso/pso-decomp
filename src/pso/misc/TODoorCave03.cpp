#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80162740_lbl_804B1518 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80162740_lbl_804B1518_size[sizeof(RecoveredGlobal_80162740_lbl_804B1518) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80162740_lbl_804B1538 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80162740_lbl_804B1538_size[sizeof(RecoveredGlobal_80162740_lbl_804B1538) == 0x10 ? 1 : -1];

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

struct RecoveredGlobal_80162848_lbl_804B1548 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80162848___vt__12TODoorCave03 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Model_801625AC {
    u8 pad0[4];
    s32 m4;
    u8 m8[0x24];
    Model_801625AC *child;
    Model_801625AC *next;
};

extern "C" {
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
extern const f32 lbl_805DB4D8;
void TODoorCave03__vt15(u8 *arg0);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
extern const f32 lbl_805DB4D0;
extern const f32 TODoorCave03__data_805DB4D4;
void TODoorCave03__vt16(u8 *arg0);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
extern const f32 TODoorCave03__data_805DB4D4;
extern const f32 lbl_805DB4DC;
void TODoorCave03__vt14(u8 *arg0);
s32 set_indexed_flags(void *, int, int);
s32 is_any_player_within_radius_xz(void *, f32);
extern const f32 lbl_805DB4D0;
extern const f32 TODoorCave03__data_805DB4D4;
extern const f32 lbl_805DB4E0;
extern const f32 lbl_805DB4E4;
void TODoorCave03__vt13(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 is_online_ready__6TLobbyFv(void);
extern RecoveredGlobal_80162740_lbl_804B1518 TODoorCave03__resource_descriptor;
extern RecoveredGlobal_80162740_lbl_804B1538 door_cave03_resource_descriptor;
extern s32 enable_v2_features;
extern u32 TODoorCave03__data_805D5968;
void load_resources__12TODoorCave03Fv(void);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_80162848_lbl_804B1548 lbl_804B1548;
extern M2C_UNK __vt__12TODoorCave03[];
extern s32 lbl_805D2F70;
extern u32 TODoorCave03__data_805D5968;
extern const f32 TODoorCave03__data_805DB4D4;
u8 *TODoorCave03__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 is_in_view_depth(void *, f32);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void rotate_matrix_y(s32, s32);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(s32);
void draw_ginja_model(s32);
s32 set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DB4E8;
void render__12TODoorCave03Fv(u8 *arg0);
}

extern "C" {

void TODoorCave03__vt18(void);
void *__dt__12TODoorCave03Fv(void *arg0, s16 arg1);
void *create__12TODoorCave03FPv(void *arg0);
void free_shared_data__12TODoorCave03Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);

void TODoorCave03__vt18(void) {  }

extern void *tl_05;

void TODoorCave03__vt16(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f3;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x54);
    if ((temp_f2 - temp_f3) <= lbl_805DB4D0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f3;
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    } else {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f2 - TODoorCave03__data_805DB4D4);
    }
    play_persistent_sound(0x42807, (s32) arg0, (u32) (arg0 + 0x38), 0, 0);
}

void TODoorCave03__vt15(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        if (is_any_player_within_radius_xz(arg0, lbl_805DB4D8) != 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 3;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8U);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8U);
    }
}

void TODoorCave03__vt14(u8 *arg0) {
  f32 temp_f1;
  f32 temp_f3;
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0x3C));
  temp_f3 = *((f32 *) (((s8 *) arg0) + 0x54));
  if (lbl_805DB4DC <= ((*((f32 *) (((s8 *) arg0) + 0x3C))) - temp_f3))
  {
    *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) (lbl_805DB4DC + temp_f3);
    *((s32 *) (((s8 *) arg0) + 0xAC)) = 2;
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) (temp_f1 + TODoorCave03__data_805DB4D4);
  }
  play_persistent_sound(0x42807, (s32) arg0, (u32) (arg0 + 0x38), 0, 0);
}

void TODoorCave03__vt13(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_r4 & 1) {
        if (is_any_player_within_radius_xz((void *)((void *) (arg0)), (f32) (lbl_805DB4E0)) == 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 1;
            set_indexed_flags((void *) (arg0), (int) (0), (int) (8));
        }
    } else if (temp_r4 & 0x10000) {
        M2C_FIELD(arg0, f32 *, 0xD8) = (f32) (M2C_FIELD(arg0, f32 *, 0xD8) + lbl_805DB4E4);
        if (TODoorCave03__data_805DB4D4 <= M2C_FIELD(arg0, f32 *, 0xD8)) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFEFFFF);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xD8) = (f32) (M2C_FIELD(arg0, f32 *, 0xD8) - lbl_805DB4E4);
        if (M2C_FIELD(arg0, f32 *, 0xD8) <= lbl_805DB4D0) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 0x10000);
        }
    }
}

void render__12TODoorCave03Fv(u8 *arg0) {
    Model_801625AC *m;
    if (((VObj_18_26a62c *)(arg0))->m8(*(f32 *)(arg0 + 0xC0), *(f32 *)(arg0 + 0xC4)) != 0 &&
        is_in_view_depth(arg0, lbl_805DB4E8) != 0) {
        set_global_param__8TObjFishFi(*(s32 *)(arg0 + 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        m = *(Model_801625AC **)(arg0 + 0x34);
        post_translate_matrix(m->m8);
        draw_ginja_model(m->m4);
        begin_effect_render__13TParticleCtrlFv();
        lbl_805D5660 = some_id_805c6f74;
        some_id_805c6f74 |= 0x10;
        set_chunk_material_color(arg0 + 0xD4);
        if (*(s32 *)(arg0 + 0xD0) & 1) {
            m = (*(Model_801625AC **)(arg0 + 0x34))->child->next;
        } else {
            m = (*(Model_801625AC **)(arg0 + 0x34))->child;
        }
        post_translate_matrix(m->m8);
        draw_ginja_model(m->m4);
        m = m->child;
        post_translate_matrix(m->m8);
        draw_ginja_model(m->m4);
        set_chunk_material_color(chunk_material_color_half_alpha_f32);
        some_id_805c6f74 = lbl_805D5660;
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void *create__12TODoorCave03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TODoorCave03__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TODoorCave03__data_805D5968;

void free_shared_data__12TODoorCave03Fv(void) {
    if ((u32) TODoorCave03__data_805D5968 != 0U) {
        TLobby__sub_8001FE7C((void*)TODoorCave03__data_805D5968, 1);
        TODoorCave03__data_805D5968 = 0U;
    }
}

extern M2C_UNK __vt__12TODoorCave03[];

void load_resources__12TODoorCave03Fv(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r0_2;
    if (((s32) enable_v2_features == 1) && (is_online_ready__6TLobbyFv() != 0)) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &door_cave03_resource_descriptor.value, 0, 0, 0));
        }
        (*(s32 *)&TODoorCave03__data_805D5968) = var_r0;
        return;
    }
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0) {
        var_r0_2 = (long) (load_resource_from_descriptor((void *) temp_r3_2, 1, &TODoorCave03__resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TODoorCave03__data_805D5968) = var_r0_2;
}

void *__dt__12TODoorCave03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TODoorCave03;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80162848_lbl_804B1548_size[sizeof(RecoveredGlobal_80162848_lbl_804B1548) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80162848___vt__12TODoorCave03_size[sizeof(RecoveredGlobal_80162848___vt__12TODoorCave03) == 0x54 ? 1 : -1];
u8 *TODoorCave03__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80162848___vt__12TODoorCave03 *)&__vt__12TODoorCave03).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F70;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TODoorCave03__data_805D5968), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TODoorCave03__data_805D5968), u8 **, 0x42C), s32 *, 0xC);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B1548.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) TODoorCave03__data_805DB4D4;
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) TODoorCave03__data_805DB4D4;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) TODoorCave03__data_805DB4D4;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) TODoorCave03__data_805DB4D4;
    return arg0;
}

}
