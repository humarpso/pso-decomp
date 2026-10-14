#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8016BD60___vt__14TOKeyAncient03 { M2C_UNK value; u8 remaining[0x6C]; };

struct Obj_8016B9A4 { u8 pad[0x6c]; f32 f; };

struct Pkt_8016BF08 { u8 code, words; u16 object, zero, reserved, switchId; u8 area, flags; };

struct Self_8016BF08 { u8 pad[0x1C]; u16 id; u8 pad1e[0xC8 - 0x1E]; s32 switchId; };

struct VBase_18_8016BABC { char pad[0x18]; };

struct VObj_18_8016BABC : VBase_18_8016BABC {
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

extern "C" {
s32 is_split_screen();
s32 is_any_player_in_range__5TOKeyFPv(void *);
s32 is_local_player_in_range__5TOKeyFPv(void *);
s32 TOKeyCave01__vt13(u8 *arg0);
M2C_UNK send_switch_changed__14TOKeyAncient03FPvi(void *, int);
void run_task__14TOKeyAncient03Fv(u8 *arg0);
extern const f32 lbl_805DB718;
extern const f32 lbl_805DB71C;
extern const f32 lbl_805DB720;
extern const f32 lbl_805DB724;
void TOKeyAncient03__vt15(u8 *arg0);
extern const f32 lbl_805DB738;
extern const f32 lbl_805DB73C;
extern const f32 lbl_805DB740;
extern const f32 lbl_805DB744;
void TOKeyCave01__vt15(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
extern RecoveredGlobal_8016BF68_lbl_80441B4C lbl_80441B4C;
extern s32 enable_v2_features;
void TOKeyCave01__vt17(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
extern RecoveredGlobal_8016BF68_lbl_80441B4C lbl_80441B4C;
extern s32 enable_v2_features;
void TOKeyCave01__vt16(s32 arg0);
u8 *load_resource_from_descriptor(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 load_gvm_texture_file(void *);
extern RecoveredGlobal_8016BC84_lbl_80441ACC lbl_80441ACC;
extern RecoveredGlobal_8016BC84_lbl_804B2B30 bm_fs_obj_o_doorpanel_resource_descriptor;
extern u32 TOKeyAncient03__model_archive;
extern void *TOKeyAncient03__texture_variants;
void load_resources__14TOKeyAncient03Fv(void);
s32 get_main_phase(void);
s32 is_split_screen();
u8 * TOKey__ct(void *);
M2C_UNK init_switch_id__5TOKeyFPv(void *);
extern M2C_UNK __vt__14TOKeyAncient03[];
extern s32 TOKeyAncient03__class_name;
extern u32 TOKeyAncient03__model_archive;
extern void *TOKeyAncient03__texture_variants;
extern const f32 lbl_805DB71C;
extern const f32 lbl_805DB720;
extern const f32 lbl_805DB72C;
extern const f32 lbl_805DB730;
u8 *TOKeyAncient03__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
extern const f32 lbl_805DB728;
extern const f32 lbl_805DB724;
void TOKeyAncient03__vt14(Obj_8016B9A4 *self);
void init_6x05_switch_changed__6TLobbyFPv(void *);
void finalize_and_send_60__6TLobbyFPv(void *);
s32 get_current_floor();
extern s32 local_client_id;
void send_switch_changed__11TOKeyCave01FPvi(Self_8016BF08 *self, s32 flags);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(int);
M2C_UNK set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern void *TOKeyAncient03__texture_variants;
extern s32 model_render_flags;
void render__14TOKeyAncient03Fv(u8 *arg0);
}

extern "C" {

void TOKeyAncient03__vt16(s32 arg0);
void TOKeyAncient03__vt17(s32 arg0);
void TOKeyCave01__vt23(void);
void *__dt__14TOKeyAncient03Fv(void *arg0, s16 arg1);
void cleanup_refs__14TOKeyAncient03Fv(void);
void *create__14TOKeyAncient03FPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TOKeyAncient03__vt17(s32 arg0) {
    play_sound_effect(0x4004B20D, arg0 + 0x38, 0, 0);
}

void TOKeyAncient03__vt16(s32 arg0) {
    play_sound_effect(0x4004B20D, arg0 + 0x38, 0, 0);
}

extern void *tl_05;

void TOKeyAncient03__vt15(u8 *arg0) {
    f32 temp_f1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF8) == 1) {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) + lbl_805DB718);
        if (lbl_805DB71C <= M2C_FIELD(arg0, f32 *, 0xEC)) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) - lbl_805DB718);
        if (M2C_FIELD(arg0, f32 *, 0xEC) <= lbl_805DB720) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 1;
        }
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (temp_f1 < lbl_805DB720) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 - lbl_805DB724);
    }
}

void TOKeyAncient03__vt14(Obj_8016B9A4 *self) {
    if (lbl_805DB728 < self->f) {
        self->f += lbl_805DB724;
    }
}

void run_task__14TOKeyAncient03Fv(u8 *arg0) {
    ((VObj_18 *)(arg0))->m12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
        ((VObj_18 *)(arg0))->m15();
        if (((VObj_18 *)(arg0))->m13() == 1) {
            send_switch_changed__14TOKeyAncient03FPvi((void *) (arg0), (int) (1));
            ((VObj_18 *)(arg0))->m16();
            M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        }
    } else {
        ((VObj_18 *)(arg0))->m14();
        if (((VObj_18 *)(arg0))->m13() != 1) {
            send_switch_changed__14TOKeyAncient03FPvi((void *) (arg0), (int) (0));
            ((VObj_18 *)(arg0))->m17();
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        }
    }
}

void render__14TOKeyAncient03Fv(u8 *arg0) {
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    if (((VObj_18_8016BABC *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(TOKeyAncient03__texture_variants, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0xD4) * 4))));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        temp_r31 = M2C_FIELD(arg0, u8 **, 0x34);
        post_translate_matrix((void *) (temp_r31 + 8));
        draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
            temp_r4 = model_render_flags;
            lbl_805D5660 = temp_r4;
            model_render_flags = temp_r4 | 0x10;
            set_chunk_material_color(arg0 + 0xE8);
        }
        temp_r31_2 = M2C_FIELD(temp_r31, u8 **, 0x2C);
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x68));
        post_translate_matrix((void *) (temp_r31_2 + 8));
        draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        temp_r31_3 = M2C_FIELD(temp_r31_2, u8 **, 0x2C);
        push_matrix();
        post_translate_matrix((void *) (temp_r31_3 + 8));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        pop_matrix();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
            model_render_flags = lbl_805D5660;
        }
        pop_matrix();
    }
}

void *create__14TOKeyAncient03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyAncient03__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOKeyAncient03__model_archive;
extern void *TOKeyAncient03__texture_variants;

void cleanup_refs__14TOKeyAncient03Fv(void) {
    if ((void *) TOKeyAncient03__texture_variants != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TOKeyAncient03__texture_variants, s32 *, 4));
        if ((void *) TOKeyAncient03__texture_variants != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyAncient03__texture_variants);
            TOKeyAncient03__texture_variants = NULL;
        }
    }
    if ((u32) TOKeyAncient03__model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)TOKeyAncient03__model_archive, 1);
        TOKeyAncient03__model_archive = 0U;
    }
}

extern M2C_UNK __vt__14TOKeyAncient03[];

typedef char RecoveredGlobal_8016BC84_lbl_80441ACC_size[sizeof(RecoveredGlobal_8016BC84_lbl_80441ACC) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8016BC84_lbl_804B2B30_size[sizeof(RecoveredGlobal_8016BC84_lbl_804B2B30) == 0x10 ? 1 : -1];
void load_resources__14TOKeyAncient03Fv(void) {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &bm_fs_obj_o_doorpanel_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&TOKeyAncient03__model_archive) = var_r0;
    temp_r3_2 = (s32 *)(alloc_buffer__11TOBoss4RockFPv(8));
    (*(s32 * *)&TOKeyAncient03__texture_variants) = temp_r3_2;
    *temp_r3_2 = M2C_FIELD(M2C_FIELD((*(u8 * *)&TOKeyAncient03__model_archive), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD((*(s32 * *)&TOKeyAncient03__texture_variants), s32 *, 4) = load_gvm_texture_file((void *) (&lbl_80441ACC.value));
}

void *__dt__14TOKeyAncient03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyAncient03;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOKeyAncient03__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TOKey__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016BD60___vt__14TOKeyAncient03 *)&__vt__14TOKeyAncient03).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TOKeyAncient03__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_switch_id__5TOKeyFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *(*(s32 * *)&TOKeyAncient03__texture_variants);
    M2C_FIELD(arg0, u8 **, 0x34) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOKeyAncient03__model_archive), u8 **, 0x42C), void **, 8));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB72C;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805DB730;
    if (get_main_phase() != 0xF) {
        if (is_split_screen() == 1) {
            goto block_2;
        }
    } else {
block_2:
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) != 2) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0) {
                M2C_FIELD(arg0, s32 *, 0xD0) = 1;
            } else {
                goto block_5;
            }
        } else {
block_5:
            M2C_FIELD(arg0, s32 *, 0xD0) = 0;
        }
    }
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DB71C;
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DB71C;
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB71C;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) lbl_805DB71C;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DB720;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DB720;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DB720;
    return arg0;
}

void TOKeyCave01__vt23(void) {  }
s32 TOKeyCave01__vt13(u8 *arg0) {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    switch (temp_r0) {
    case 0:
        if (is_split_screen() == 1) {
            var_r3 = is_any_player_in_range__5TOKeyFPv((void *) (arg0));
        } else {
            var_r3 = is_local_player_in_range__5TOKeyFPv((void *) (arg0));
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 1) || (var_r3 == 1)) {
            var_r31 = 1;
        }
        break;
    case 1:
        var_r31 = is_any_player_in_range__5TOKeyFPv((void *) (arg0));
        break;
    }
    return var_r31;
}

typedef char RecoveredGlobal_8016BF68_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016BF68_lbl_80441B4C) == 0x90 ? 1 : -1];

void send_switch_changed__11TOKeyCave01FPvi(Self_8016BF08 *self, s32 flags) {
    Pkt_8016BF08 pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.object = self->id;
    pkt.zero = local_client_id;
    pkt.switchId = self->switchId;
    pkt.area = get_current_floor();
    pkt.flags = flags;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

void TOKeyCave01__vt17(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 0x10) || (get_global_state__14TOKeyMachine01Fv() == 0x11))) {
        temp_r3 = M2C_FIELD(&lbl_80441B4C.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3 >= 0) {
            play_sound_effect((M2C_UNK)(temp_r3), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
        }
    } else {
        temp_r3_2 = M2C_FIELD(&lbl_80441B4C.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect((M2C_UNK)(temp_r3_2), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
        }
    }
}

typedef char RecoveredGlobal_8016C010_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016C010_lbl_80441B4C) == 0x90 ? 1 : -1];
void TOKeyCave01__vt16(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 0x10) || (get_global_state__14TOKeyMachine01Fv() == 0x11))) {
        temp_r3 = M2C_FIELD(&(*(RecoveredGlobal_8016C010_lbl_80441B4C *)&lbl_80441B4C).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3 >= 0) {
            play_sound_effect((M2C_UNK)(temp_r3), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
        }
    } else {
        temp_r3_2 = M2C_FIELD(&(*(RecoveredGlobal_8016C010_lbl_80441B4C *)&lbl_80441B4C).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect((M2C_UNK)(temp_r3_2), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
        }
    }
}

void TOKeyCave01__vt15(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF8) == 1) {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) + lbl_805DB738);
        if (lbl_805DB73C <= M2C_FIELD(arg0, f32 *, 0xEC)) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) - lbl_805DB738);
        if (M2C_FIELD(arg0, f32 *, 0xEC) <= lbl_805DB740) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 1;
        }
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (temp_f1 < lbl_805DB740) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 - lbl_805DB744);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xFC);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (temp_r4 - 0x333);
    }
}

}
