#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Disp_8026F9F4 { u8 p0[0x20]; s16 id; u8 p1[0x42]; void *windows[5]; };

typedef s32 M2C_UNK;
struct Vec2_80270244 { f32 x; f32 y; };

struct Params_80270244 { f32 x; f32 y; u8 pad8[0x28]; s32 f30; };

extern "C" {
int obj_getArrWord_254(void *p, int i);
void * get_player_by_client_id();
void *__nw__7TObjectFUl(int);
s32 fn_80244994(void *);
void TWindow__close(void *);
s32 set_field_1c__6TLobbyFPvf(void *, f32);
void *get_card_name_ptr__14TWindowComCardFPv(void *p);
s32 get_status_effect_icon_index(u32 arg0);
void set_selected_index__14TWindowComCardFPvi(void *arg0, s32 arg1);
void TWindowComCard__sub_80249D7C(u8 *arg0, s32 arg1);
void *TWindowComCard__sub_80249ED8(void *, void *, void *, s32, s32, s32);
f32 get_scale__20TWindowSubStatusDispFPv(void *p);
extern const f32 lbl_805DD38C;
extern const f32 lbl_805DD398;
void update_status_icons__14TWindowComCardFPvPv(Disp_8026F9F4 *arg0, void *arg1);
M2C_UNK draw_photon_blast_fan(s32, Vec2_80270244 *, Params_80270244 *, u32, s32, s32, f32, f32);
f32 trunc_float__17TWindowSubComCardFf(f32);
extern u32 photon_blast_gauge_ring_color_table[];
extern const f32 lbl_805DD388;
extern const f32 lbl_805DD3C8;
extern const f32 lbl_805DD3CC;
extern const f32 lbl_805DD3D0;
extern const f32 lbl_805DD3D4;
extern const f32 lbl_805DD3D8;
void draw_photon_blast_gauge_ring(s32 arg0, Params_80270244 *arg1, const Vec2_80270244 *arg2, f32 farg0, f32 farg1);
}

extern "C" {

struct VtBase4_8026f71c_more_8026f8cc_0 { void *vtable; };

struct VObj3_8026f71c_more_8026f8cc_0 : VtBase4_8026f71c_more_8026f8cc_0 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); };

struct Base_8026F77C_more_8026f8cc_0 { char pad[0x18]; };

struct VObj_8026F77C_more_8026f8cc_0 : Base_8026F77C_more_8026f8cc_0 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();virtual void m7();
    virtual void m8();virtual void m9();virtual void m10();virtual void m11();
    virtual void m12();virtual void m13();
    virtual int m14();
};

struct VObj_8026ff0c;

struct VObj_8026ff0c {
    char pad[0x18];
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8();
    virtual M2C_UNK m9();
    virtual M2C_UNK m10();
    virtual M2C_UNK m11();
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
    virtual M2C_UNK m18();
    virtual M2C_UNK m19();
    virtual M2C_UNK m20();
    virtual M2C_UNK m21();
    virtual M2C_UNK m22();
    virtual M2C_UNK m23();
    virtual M2C_UNK m24();
    virtual M2C_UNK m25();
    virtual M2C_UNK m26();
    virtual M2C_UNK m27();
    virtual M2C_UNK m28();
    virtual M2C_UNK m29();
    virtual M2C_UNK m30();
    virtual M2C_UNK m31();
};

struct Slots_80270060 { s32 type[4]; u32 id[4]; };

struct Vec2_80270394 { f32 x; f32 y; };

struct Rect_80270394 { f32 x0; f32 y0; f32 x1; f32 y1; f32 u0; f32 v0; f32 u1; f32 v1; };

s16 obj_getS16_2BA(void *);
s16 get_field_2b8__14TItemProShieldFPv(int);
s32 is_inactive__10TObjPlayerFPv(void *);
s32 get_sub_value__8TItemMagFi();
s32 get_photon_blast_chain(Slots_80270060 *);
void * get_player_by_client_id();
s32 TLobby__sub_801C19D0(void *);
u8 get_rule_field_a__6TLobbyFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv();
void * get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK clear_visible_flag__20TWindowSubStatusDispFPv(void *);
M2C_UNK set_flag0_bit2__15TWindowHelpItemFPv(void *);
u32 get_field_20__17TWindowSubComCardFPv(void *);
M2C_UNK TWindowSubComCard__sub_802452DC(s32);
M2C_UNK TWindowSubComCard__sub_80245320(Rect_80270394 *, u8 *);
M2C_UNK TWindowSubComCard__sub_802454E4(s32);
s32 TWindowSubComCard__sub_80245558(u8 *, Vec2_80270394 *, Vec2_80270394 *);
M2C_UNK get_width__11TWindowCtrlFPv();
M2C_UNK apply_context_transform_to_rect(u8 *, Rect_80270394 *);
M2C_UNK start_text_color_transition(void *, M2C_UNK, f32);
M2C_UNK set_text_entry_string(void *, s32, M2C_UNK);
M2C_UNK set_sprite_uv_from_pixels(s32, f32, f32);
void start_hp_text_color_transition__20TWindowSubStatusDispFPv(u8 *arg0);
void init_gauge_entry__20TWindowSubStatusDispFPv(void *arg0);
void update_status_entry__20TWindowSubStatusDispFi(s32 arg0);
s32 update_hp_gauge__20TWindowSubStatusDispFi(s32 arg0);
s32 update_hp_entry__20TWindowSubStatusDispFPv(u8 *arg0);
void update_hp_tp_level__20TWindowSubStatusDispFPv(u8 *arg0);
void update_for_player_index__13TWindowLockOnFPvi(u8 *arg0, s32 arg1);
void update_lockon_window(u8 *arg0);
M2C_UNK update_photon_blast_player_marker(s32 arg0, s32 arg1);
s32 rand(void);
s32 strcmp(s32, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK begin_screen_draw(s32);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(Rect_80270394 *, f32);
M2C_UNK set_draw_texture_and_color(s32, s32);

extern M2C_UNK lbl_8044F5E4[];
extern M2C_UNK lbl_8050EA40[];
extern s32 lbl_805D63F0;
extern const f32 lbl_805DD388;
extern const f32 lbl_805DD38C;
extern const f32 lbl_805DD390;
extern const f32 lbl_805DD394;
extern const f32 lbl_805DD398;
extern const f32 lbl_805DD3A0;
extern const f32 lbl_805DD3A4;
extern const f32 lbl_805DD3A8;
extern const f32 lbl_805DD3AC;
extern const f32 lbl_805DD3B0;
extern const f32 lbl_805DD3B4;
extern const f32 lbl_805DD3B8;
extern const f32 lbl_805DD3BC;
extern const f32 lbl_805DD3C0;
extern const f32 lbl_805DD3C4;
extern const f32 lbl_805DD3DC;
extern const f32 lbl_805DD3E0;
extern const f32 lbl_805DD3E4;
extern const f32 lbl_805DD3E8;
extern const f32 lbl_805DD3EC;
extern const f32 lbl_805DD3F0;
extern const f32 lbl_805DD3F4;
extern const f32 lbl_805DD3F8;
extern const f32 lbl_805DD3FC;

extern "C" {
s32 get_photon_blast_chain(Slots_80270060 *);
}

void start_hp_text_color_transition__20TWindowSubStatusDispFPv(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(4))));
    M2C_FIELD(temp_r3, f32 *, 0x20) = (f32) (*(const f32 *)&lbl_805DD388);
    M2C_FIELD(temp_r3, f32 *, 0x24) = (f32) (*(const f32 *)&lbl_805DD388);
    start_text_color_transition((void *)(temp_r3), (M2C_UNK)(0xFF008CFCU), (*(const f32 *)&lbl_805DD38C));
}

void init_gauge_entry__20TWindowSubStatusDispFPv(void *arg0) {
    VObj3_8026f71c_more_8026f8cc_0 *temp_r3;
    f32 temp_f0;

    temp_r3 = (VObj3_8026f71c_more_8026f8cc_0 *) get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(3));
    temp_f0 = lbl_805DD388;
    M2C_FIELD(temp_r3, f32 *, 0x20) = temp_f0;
    M2C_FIELD(temp_r3, f32 *, 0x24) = temp_f0;
    temp_r3->m3();
    start_text_color_transition(temp_r3, 0xFF00FF15, lbl_805DD38C);
}

void update_status_entry__20TWindowSubStatusDispFi(s32 arg0) {
    void *temp_r31;
    VObj_8026F77C_more_8026f8cc_0 *temp_r3;

    get_width__11TWindowCtrlFPv();
    temp_r3 = (VObj_8026F77C_more_8026f8cc_0 *) get_player_by_client_id();
    if (temp_r3 != NULL) {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(2));
        M2C_FIELD(temp_r31, s32 *, 0x20) = temp_r3->m14() + 1;
    }
}

s32 update_hp_gauge__20TWindowSubStatusDispFi(s32 arg0) {
    M2C_UNK var_r4;
    s32 var_r31;
    void *temp_r30;
    void *temp_r3;

    get_width__11TWindowCtrlFPv();
    temp_r3 = get_player_by_client_id();
    if (temp_r3 == NULL) {
        start_hp_text_color_transition__20TWindowSubStatusDispFPv((u8 *)(arg0));
        return 0xFF008CFC;
    }
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(4));
    M2C_FIELD(temp_r30, f32 *, 0x20) = (f32) obj_getS16_2BA(temp_r3);
    M2C_FIELD(temp_r30, f32 *, 0x24) = (f32) M2C_FIELD(temp_r3, s16 *, 0x32E);
    if (M2C_FIELD(temp_r30, f32 *, 0x24) > (lbl_805DD390 * M2C_FIELD(temp_r30, f32 *, 0x20))) {
        var_r31 = -1;
        var_r4 = 0xFF008CFC;
    } else {
        var_r4 = -0x3EEC;
        var_r31 = -0x3EEC;
    }
    start_text_color_transition(temp_r30, var_r4, lbl_805DD394);
    return var_r31;
}

s32 update_hp_entry__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 var_r30;
    s32 var_r4;
    u8 *temp_r31;
    u8 *temp_r3;
    get_width__11TWindowCtrlFPv();
    temp_r3 = (u8 *)(((u8 *)get_player_by_client_id()));
    if (temp_r3 == NULL) {
        init_gauge_entry__20TWindowSubStatusDispFPv((void *) (arg0));
        return 0xFF00FF15;
    }
    temp_r31 = (u8 *)(((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3)));
    M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) get_field_2b8__14TItemProShieldFPv((int) (temp_r3));
    if (M2C_FIELD(temp_r31, f32 *, 0x24) > (f32) M2C_FIELD(temp_r3, s16 *, 0x32C)) {
        M2C_FIELD(arg0, s32 *, 0x60) = 4;
    }
    M2C_FIELD(temp_r31, f32 *, 0x24) = (f32) M2C_FIELD(temp_r3, s16 *, 0x32C);
    if (M2C_FIELD(temp_r31, f32 *, 0x24) > (lbl_805DD390 * M2C_FIELD(temp_r31, f32 *, 0x20))) {
        var_r30 = -1;
        var_r4 = 0xFF00FF15;
    } else {
        var_r4 = 0xFFF2FF19;
        var_r30 = 0xFFF2FF19;
    }
    start_text_color_transition((void *)((int) (temp_r31)), (M2C_UNK)((int) (var_r4)), (f32) (lbl_805DD394));
    return var_r30;
}

void update_status_icons__14TWindowComCardFPvPv(Disp_8026F9F4 *arg0, void *arg1) {
    Slots_80270060 buf;
    s32 k;
    s32 count;
    s32 i;
    s32 j;
    s32 name;
    void *w;
    void *player;
    player = ((void *(*)(s32))get_player_by_client_id)(arg0->id);
    if (player == NULL || fn_80244994(arg0) == 0) {
        for (i = 0; i < 5; i++) {
            if (arg0->windows[i] != NULL) {
                TWindow__close(arg0->windows[i]);
                arg0->windows[i] = NULL;
            }
        }
        return;
    }
    count = 0;
    j = 0;
    i = ((s32 (*)(Slots_80270060 *, s32))get_photon_blast_chain)(&buf, arg0->id);
    if (i == 1 || i == 2) {
        for (i = 0; buf.type[i] != -1; i++) {
            if (buf.id[i] == arg0->id) {
                break;
            }
        }
        name = (s32)get_card_name_ptr__14TWindowComCardFPv((void *)i);
        w = arg0->windows[j];
        if (w == NULL) {
            w = __nw__7TObjectFUl(0x74);
            if (w != NULL) {
                w = TWindowComCard__sub_80249ED8(w, arg0, arg1, 0, name, arg0->id);
            }
            arg0->windows[j] = w;
            set_field_1c__6TLobbyFPvf(arg0->windows[j], lbl_805DD38C + get_scale__20TWindowSubStatusDispFPv(arg0));
        } else {
            TWindowComCard__sub_80249D7C((u8 *)w, 0);
            set_selected_index__14TWindowComCardFPvi(arg0->windows[j], name);
        }
        count = 1;
    } else if (arg0->windows[j] != NULL) {
        TWindow__close(arg0->windows[j]);
        arg0->windows[j] = NULL;
    }
    j++;
    for (k = 0; k < 4; k++, j++) {
        s32 word = obj_getArrWord_254(player, k);
        if (word == 0) {
            if (arg0->windows[j] != NULL) {
                TWindow__close(arg0->windows[j]);
                arg0->windows[j] = NULL;
            }
        } else {
            name = get_status_effect_icon_index(word);
            w = arg0->windows[j];
            if (w == NULL) {
                w = __nw__7TObjectFUl(0x74);
                if (w != NULL) {
                    w = TWindowComCard__sub_80249ED8(w, arg0, arg1, count, name, arg0->id);
                }
                arg0->windows[j] = w;
                set_field_1c__6TLobbyFPvf(arg0->windows[j], lbl_805DD398 + ((f32)k + get_scale__20TWindowSubStatusDispFPv(arg0)));
            } else {
                TWindowComCard__sub_80249D7C((u8 *)w, count);
                set_selected_index__14TWindowComCardFPvi(arg0->windows[j], name);
            }
            count++;
        }
    }
}

#pragma push
#pragma fp_contract on
void apply_random_shake(u8 *arg0) {
    s32 ang;
    f32 dist;

    if (*(u32 *)(arg0 + 0x60) != 0) {
        (*(u32 *)(arg0 + 0x60))--;
        ang = (s32)(lbl_805DD3A0 * (lbl_805DD3A4 * (f32)rand()));
        dist = lbl_805DD3A8 * (lbl_805DD3A4 * (f32)rand());
        *(f32 *)(arg0 + 0x40) += dist * cos_table_lookup(ang);
        *(f32 *)(arg0 + 0x44) += dist * sin_table_lookup(ang);
    }
}
extern int fold_flush_0;
#pragma pop

void update_hp_tp_level__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31 = ((s32 (*)(void *, int))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, 6);
    M2C_FIELD(temp_r31, s32 *, 0x2C) = ((s32 (*)(void *))update_hp_entry__20TWindowSubStatusDispFPv)((void *) (arg0));
    temp_r31_2 = ((s32 (*)(void *, int))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, 7);
    M2C_FIELD(temp_r31_2, s32 *, 0x2C) = update_hp_gauge__20TWindowSubStatusDispFi((s32) arg0);
    update_status_entry__20TWindowSubStatusDispFi((s32) arg0);
}

void update_for_player_index__13TWindowLockOnFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    struct VObj_8026ff0c *temp_r30;
    u8 *temp_r29;

    temp_r30 = ((VObj_8026ff0c * (*)(s32))get_player_by_client_id)(arg1);
    if (temp_r30 == NULL) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    temp_r29 = (u8 *)temp_r30 + 0x85C;
    if (temp_r29 == NULL) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    temp_r31 = temp_r30->m10();
    if (temp_r31 == 0) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    if (is_inactive__10TObjPlayerFPv(temp_r30) == 0) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    clear_visible_flag__20TWindowSubStatusDispFPv(arg0);
    if ((get_field_20__17TWindowSubComCardFPv(arg0) == 0U) || (strcmp(get_field_20__17TWindowSubComCardFPv(arg0), temp_r31) != 0)) {
        set_text_entry_string(arg0, temp_r31, 0x20);
    }
    if (temp_r30->m31() != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0xFFFF0000;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r29, s32 *, 0x18);
}

void update_lockon_window(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = ((s32 (*)(void *, int))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, 1);
    ((void (*)(void *, s32))update_for_player_index__13TWindowLockOnFPvi)((void *) temp_r31, ((s32 (*)(void *))get_width__11TWindowCtrlFPv)((void *) (arg0)));
}

M2C_UNK update_photon_blast_player_marker(s32 arg0, s32 arg1) {
    Slots_80270060 s;
    s32 type;
    u32 key;
    s32 r;
    s32 i;
    u8 *p;
    key = arg1;
    type = -1;
    if (key != 0xFFFF) {
        r = get_photon_blast_chain(&s);
        if (r == 1 || r == 2) {
            s32 t;
            for (i = 0; (t = s.type[i]) != -1; i++) {
                if (s.id[i] == key) {
                    break;
                }
            }
            type = t;
        }
        switch (type) {
        case 5:
            set_sprite_uv_from_pixels(arg0, lbl_805DD388, lbl_805DD3AC);
            break;
        case 4:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3B0, lbl_805DD3AC);
            break;
        case 3:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3B4, lbl_805DD3AC);
            break;
        case 1:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3B8, lbl_805DD3AC);
            break;
        case 2:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3BC, lbl_805DD3AC);
            break;
        case 0:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3C0, lbl_805DD3AC);
            break;
        default:
            if (get_rule_field_a__6TLobbyFPv(lbl_8050EA40) == 1 && (p = ((u8 * (*)(u32))get_player_by_client_id)(key)) != 0) {
                key = TLobby__sub_801C19D0(p + 0x828) - 1;
            }
            set_sprite_uv_from_pixels(arg0, lbl_805DD3B0 * key, lbl_805DD3C4);
            break;
        }
    }
}

void update_status_help_item(s32 arg0) {
    s32 var_r31;

    var_r31 = get_width__11TWindowCtrlFPv();
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        var_r31 = 0;
    }
    update_photon_blast_player_marker((s32)(((s32 (*)(s32, M2C_UNK))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, 0)), (s32)(var_r31));
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void draw_photon_blast_gauge_ring(s32 arg0, Params_80270244 *arg1, const Vec2_80270244 *arg2, f32 farg0, f32 farg1) {
    Vec2_80270244 p;
    u32 n;
    if (farg0 > lbl_805DD3C8) {
        farg0 = lbl_805DD3C8;
    }
    n = trunc_float__17TWindowSubComCardFf(lbl_805DD3CC * farg0);
    farg0 -= lbl_805DD3D0 * n;
    if (arg1->f30 >= 0) {
        p.x = arg1->x + arg2->x;
        p.y = arg1->y + arg2->y;
        draw_photon_blast_fan(arg0, &p, arg1, photon_blast_gauge_ring_color_table[n], 0, 0xD700, lbl_805DD388, farg1);
        draw_photon_blast_fan(arg0, &p, arg1, photon_blast_gauge_ring_color_table[++n], lbl_805DD3D8 - lbl_805DD3CC * (lbl_805DD3D8 * farg0), 0xD700, lbl_805DD3D4, farg1);
    }
}
#pragma pop

void draw_background__19TWindowSimpleStatusFv(u8 *arg0, u8 *arg1) {
    Rect_80270394 r;
    Vec2_80270394 pos;
    Vec2_80270394 size;
    f32 scale;
    f32 f;

    get_width__11TWindowCtrlFPv();
    if (((u32 (*)(void))get_player_by_client_id)() != 0) {
        f = get_sub_value__8TItemMagFi();
    } else {
        f = lbl_805DD388;
    }
    draw_photon_blast_gauge_ring((s32)(arg0), (Params_80270244 *)(arg1), (const Vec2_80270244 *)(lbl_8044F5E4), f, lbl_805DD3DC);
    pos.x = lbl_805DD3E0 + M2C_FIELD(arg1, f32 *, 0x10);
    pos.y = lbl_805DD398 + M2C_FIELD(arg1, f32 *, 0x14);
    size.x = lbl_805DD3E4;
    size.y = lbl_805DD3E8;
    scale = lbl_805DD3EC / M2C_FIELD(arg0, f32 *, 0x54);
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(0xB, M2C_FIELD(arg1, s32 *, 0x34));
    r.x0 = pos.x;
    r.y0 = pos.y;
    r.x1 = r.x0 + size.x;
    r.y1 = r.y0 + size.y;
    r.u0 = lbl_805DD3F0;
    r.v0 = lbl_805DD3F4;
    r.u1 = lbl_805DD3F8;
    r.v1 = lbl_805DD3FC;
    apply_context_transform_to_rect(arg1, &r);
    draw_textured_quad_at_depth(&r, scale);
    get_player__20TWindowSubStatusDispFv();
    if (TWindowSubComCard__sub_80245558(arg1, &pos, &size) != 0) {
        TWindowSubComCard__sub_802454E4(0xB);
        TWindowSubComCard__sub_80245320(&r, arg1);
        TWindowSubComCard__sub_802452DC(0xB);
    }
}

}
