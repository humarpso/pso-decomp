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

struct RecoveredGlobal_8016C474_lbl_80441BE8 { char value[0x1A]; };
typedef char RecoveredGlobal_8016C474_lbl_80441BE8_size[sizeof(RecoveredGlobal_8016C474_lbl_80441BE8) == 0x1A ? 1 : -1];

struct RecoveredGlobal_8016C474_lbl_80441C04 { char value[0x19]; };
typedef char RecoveredGlobal_8016C474_lbl_80441C04_size[sizeof(RecoveredGlobal_8016C474_lbl_80441C04) == 0x19 ? 1 : -1];

struct RecoveredGlobal_8016C474_lbl_804B2BB8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016C474_lbl_804B2BB8_size[sizeof(RecoveredGlobal_8016C474_lbl_804B2BB8) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8016C474_lbl_804B2BD0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016C474_lbl_804B2BD0_size[sizeof(RecoveredGlobal_8016C474_lbl_804B2BD0) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8016C5F8___vt__11TOKeyCave01 { M2C_UNK value; u8 remaining[0x6C]; };

struct Pkt_8016C79C { u8 code, words; u16 object, zero, reserved, switchId; u8 area, flags; };

struct Self_8016C79C { u8 pad[0x1C]; u16 id; u8 pad1e[0xC8 - 0x1E]; s32 switchId; };

struct VBase_8016C280 { char pad[0x18]; };

struct VObj_8016C280 : VBase_8016C280 {
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
s32 TOKeyCol__vt13(u8 *arg0);
M2C_UNK send_switch_changed__11TOKeyCave01FPvi(void *, int);
void run_task__11TOKeyCave01Fv(u8 *arg0);
u8 *load_resource_from_descriptor(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u8 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 load_gvm_texture_file(void *);
s32 is_global_state_in_table__19TContainerAncient01Fv();
s32 get_global_state__14TOKeyMachine01Fv();
extern RecoveredGlobal_8016C474_lbl_80441BE8 lbl_80441BE8;
extern RecoveredGlobal_8016C474_lbl_80441C04 lbl_80441C04;
extern RecoveredGlobal_8016C474_lbl_804B2BB8 bm_fs_obj_do_doa_panel_resource_descriptor;
extern RecoveredGlobal_8016C474_lbl_804B2BD0 fs_obj_key_jungle_resource_descriptor;
extern u32 TOKeyCave01__resource_bundle;
extern s32 *TOKeyCave01__texture_lists;
extern s32 lbl_805D5A20;
void load_resources__11TOKeyCave01Fv(void);
s32 get_main_phase(void);
u8 * TOKey__ct(void *);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
M2C_UNK init_switch_id__5TOKeyFPv(void *);
extern M2C_UNK __vt__11TOKeyCave01[];
extern s32 TOKeyCave01__class_name;
extern u32 TOKeyCave01__resource_bundle;
extern s32 *TOKeyCave01__texture_lists;
extern const f32 lbl_805DB73C;
extern const f32 lbl_805DB740;
extern const f32 lbl_805DB74C;
extern const f32 lbl_805DB750;
extern const f32 lbl_805DB754;
u8 *TOKeyCave01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void init_6x05_switch_changed__6TLobbyFPv(void *);
void finalize_and_send_60__6TLobbyFPv(void *);
s32 get_current_floor();
extern s32 local_client_id;
void send_switch_changed__8TOKeyColFPvi(Self_8016C79C *self, s32 flags);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(int);
int set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 *TOKeyCave01__texture_lists;
extern s32 lbl_805D5A20;
extern s32 model_render_flags;
void render__11TOKeyCave01Fv(u8 *arg0);
}

extern "C" {

void TOKeyCave01__vt14(void *arg0);
void TOKeyCol__vt23(void);
void *__dt__11TOKeyCave01Fv(void *arg0, s16 arg1);
void *create__11TOKeyCave01FPv(void *arg0);
void free_objects__11TOKeyCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern f32 lbl_805DB744;
extern f32 lbl_805DB748;

void TOKeyCave01__vt14(void *arg0) {
    s32 temp_r4;

    if (lbl_805DB748 < M2C_FIELD(arg0, f32 *, 0x6C)) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) + lbl_805DB744);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xFC);
    if (temp_r4 < 0x2000) {
        M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (temp_r4 + 0x333);
    }
}

extern void *tl_05;

void run_task__11TOKeyCave01Fv(u8 *arg0) {
    ((VObj_18 *)(arg0))->m12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
        ((VObj_18 *)(arg0))->m15();
        if (((VObj_18 *)(arg0))->m13() == 1) {
            send_switch_changed__11TOKeyCave01FPvi((void *) (arg0), (int) (1));
            ((VObj_18 *)(arg0))->m16();
            M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        }
    } else {
        ((VObj_18 *)(arg0))->m14();
        if (((VObj_18 *)(arg0))->m13() != 1) {
            send_switch_changed__11TOKeyCave01FPvi((void *) (arg0), (int) (0));
            ((VObj_18 *)(arg0))->m17();
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        }
    }
}

void render__11TOKeyCave01Fv(u8 *arg0) {
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    if (((VObj_8016C280 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        set_global_param__8TObjFishFi((int) TOKeyCave01__texture_lists[M2C_FIELD(arg0, s32 *, 0xD4)]);
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
            set_chunk_material_color((void *) (arg0 + 0xE8));
        }
        begin_effect_render__13TParticleCtrlFv();
        temp_r31_2 = M2C_FIELD(temp_r31, u8 **, 0x2C);
        push_matrix();
        switch ((s32) lbl_805D5A20) {
        case 0:
            post_translate_matrix((void *) (arg0 + 0x68));
            break;
        case 1:
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xFC)));
            break;
        }
        post_translate_matrix((void *) (temp_r31_2 + 8));
        draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        temp_r31_3 = M2C_FIELD(temp_r31_2, u8 **, 0x2C);
        push_matrix();
        post_translate_matrix((void *) (temp_r31_3 + 8));
        draw_ginja_model((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
        pop_matrix();
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
            set_chunk_material_color((void *) chunk_material_color_half_alpha_f32);
            model_render_flags = lbl_805D5660;
        }
        pop_matrix();
    }
}

void *create__11TOKeyCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TOKeyCave01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOKeyCave01__resource_bundle;
extern s32 *TOKeyCave01__texture_lists;

void free_objects__11TOKeyCave01Fv(void) {
    if ((s32 *) TOKeyCave01__texture_lists != NULL) {
        free_if_valid__10TObjPlayerFi(*TOKeyCave01__texture_lists);
        if ((s32 *) TOKeyCave01__texture_lists != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyCave01__texture_lists);
            TOKeyCave01__texture_lists = NULL;
        }
    }
    if ((u32) TOKeyCave01__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TOKeyCave01__resource_bundle, 1);
        TOKeyCave01__resource_bundle = 0U;
    }
}

extern M2C_UNK __vt__11TOKeyCave01[];

void load_resources__11TOKeyCave01Fv(void) {
    s32 temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *var_r0;
    u8 *var_r0_2;
    temp_r31 = get_global_state__14TOKeyMachine01Fv();
    if ((is_global_state_in_table__19TContainerAncient01Fv() == 1) || (temp_r31 == 0x1C) || (temp_r31 == 0x1D)) {
        temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &fs_obj_key_jungle_resource_descriptor.value, 0, 0, 0));
        }
        (*(u8 * *)&TOKeyCave01__resource_bundle) = var_r0;
        (*(u8 * *)&TOKeyCave01__texture_lists) = alloc_buffer__11TOBoss4RockFPv(8);
        M2C_FIELD((*(u8 * *)&TOKeyCave01__texture_lists), s32 *, 0) = load_gvm_texture_file((void *) (&lbl_80441BE8.value));
        M2C_FIELD((*(u8 * *)&TOKeyCave01__texture_lists), s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOKeyCave01__resource_bundle), u8 **, 0x42C), s32 *, 0xC);
        lbl_805D5A20 = 1;
        return;
    }
    temp_r3_2 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0_2 = (u8 *)(temp_r3_2);
    if (var_r0_2 != NULL) {
        var_r0_2 = (u8 *)(load_resource_from_descriptor(temp_r3_2, 1, &bm_fs_obj_do_doa_panel_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&TOKeyCave01__resource_bundle) = var_r0_2;
    (*(u8 * *)&TOKeyCave01__texture_lists) = alloc_buffer__11TOBoss4RockFPv(8);
    M2C_FIELD((*(u8 * *)&TOKeyCave01__texture_lists), s32 *, 0) = load_gvm_texture_file((void *) (&lbl_80441C04.value));
    M2C_FIELD((*(u8 * *)&TOKeyCave01__texture_lists), s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOKeyCave01__resource_bundle), u8 **, 0x42C), s32 *, 0xC);
    lbl_805D5A20 = 0;
}

void *__dt__11TOKeyCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOKeyCave01;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOKeyCave01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TOKey__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016C5F8___vt__11TOKeyCave01 *)&__vt__11TOKeyCave01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TOKeyCave01__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_switch_id__5TOKeyFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *TOKeyCave01__texture_lists;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOKeyCave01__resource_bundle), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB74C;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB750;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805DB754;
    if (get_main_phase() != 0xF) {
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
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
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DB73C;
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DB73C;
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB73C;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) lbl_805DB73C;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DB740;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DB740;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DB740;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    return arg0;
}

void TOKeyCol__vt23(void) {  }
s32 TOKeyCol__vt13(u8 *arg0) {
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
void send_switch_changed__8TOKeyColFPvi(Self_8016C79C *self, s32 flags) {
    Pkt_8016C79C pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.object = self->id;
    pkt.zero = local_client_id;
    pkt.switchId = self->switchId;
    pkt.area = get_current_floor();
    pkt.flags = flags;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

}
