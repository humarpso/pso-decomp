#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_8026385C {
    u8 pad00[0x24];
    u8 m24[0x38];
    s32 refresh_flags;
    u8 pad60[4];
    s32 retention;
    u8 pad68[8];
    void (Win_8026385C::*refresh)();
};

typedef s32 M2C_UNK;
struct Obj_80263370;
typedef void (Obj_80263370::*Cb_80263370)();
struct Lock_80263370 {
    u8 pad0[0x20];
    s16 player;
    u8 pad22[2];
    u8 sub[0x34 - 0x24];
    f32 dist;
    f32 w;
    f32 h;
    u8 pad40[0x50 - 0x40];
    s32 i50;
    u8 pad54[0x6C - 0x54];
    f32 scale;
    Cb_80263370 cb;
};

struct Ent_80263370 { u16 flags; u8 pad2[6]; f32 y; u8 padc[4]; f32 w; u8 pad14[8]; u8 kind; };

struct Ent2_80263370 { u16 flags; u8 pad2[0xE]; s32 grade; };

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void update_photon_blast_player_marker(s32, u32);
void TWindowLockOn__sub_80262FDC(u8 *arg0);
s32 obj_isState3_324(void *);
s32 obj_testFlags30(s32, M2C_UNK);
s32 get_target_id__13TWindowLockOnFPv(void *);
s32 is_script_controlled__10TObjPlayerFPv(void *);
bool TWindowLockOn__sub_80262DC4(s32 arg0);
void TWindow__close(void *);
void update_fade__17TWindowSubComCardFPv(void *);
void initialize_subwindow__9TWindowDDFPv(void *);
void update_window_entry_list(void *, void *);
void validate_target__13TWindowLockOnFPv(void *);
void run_task__13TWindowLockOnFv(Win_8026385C *w);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void TWindowSubStatusDisp__sub_80257D44(void *, void *, int);
void init_item_row__20TWindowSubStatusDispFPvPvi(void *, void *, s32);
void calc_row_width__20TWindowSubStatusDispFv(void *);
u8 get_field_ec__12TOSwitchItemFPv(void *);
u8 calc_display_grade__5TItemFPv(void *);
f32 get_item_star_row_width(void *);
f32 get_target_distance__13TWindowLockOnFv(s32);
extern u8 lbl_804D00DC[];
extern Cb_80263370 lbl_804D0288;
extern const f32 TWindowLockOn__data_805DD110;
extern const f32 lbl_805DD114;
extern const f32 lbl_805DD118;
extern const f32 lbl_805DD11C;
extern const f32 lbl_805DD120;
M2C_UNK TWindowLockOn__update_for_item(s32 a0, s32 a1);
}

extern "C" {

void TWindowLockOn__sub_80262FD8(void);
void *__dt__13TWindowLockOnFv(void *arg0, s16 arg1);
void render__13TWindowLockOnFv(u8 *arg0);
void update_for_target__13TWindowLockOnFii(s32 arg0, s32 arg1);
M2C_UNK TWindowLockOn__update_for_enemy(s32, s32);
M2C_UNK TWindowLockOn__update_for_other_player(s32, s32);
s32 setup_window_draw_context(void *, void *);
M2C_UNK draw_window_frame(void *, int);
M2C_UNK draw_visible_window_entries(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257CB8(s32);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 obj_testFlags30(s32, M2C_UNK);

bool TWindowLockOn__sub_80262DC4(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    if (obj_testFlags30((s32)((void *) (arg0)), (M2C_UNK)((int) (0x10000000))) != 0) {
        if ((obj_isState3_324((void *) (arg0)) != 0) || (is_script_controlled__10TObjPlayerFPv((void *) (arg0)) != 0)) {
            return 0;
        }
        return 1;
    }
    if (obj_testFlags30((s32)((void *) (arg0)), (M2C_UNK)((int) (0x20000000))) != 0) {
        if (obj_testFlags30((s32)((void *) (arg0)), (M2C_UNK)((int) (0x40000000))) != 0) {
            return 0;
        }
        return get_target_id__13TWindowLockOnFPv((void *) (arg0)) != 0;
    }
    return obj_testFlags30((s32)((void *) (arg0)), (M2C_UNK)((int) (0x80000000))) != 0;
}

void TWindowLockOn__sub_80262FD8(void) {  }

void TWindowLockOn__sub_80262FDC(u8 *arg0) {
    update_photon_blast_player_marker(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0), (u32) M2C_FIELD(arg0, u16 *, 0x60));
}

#pragma push
#pragma fp_contract on
#define arg0 ((Lock_80263370 *)a0)
#define item ((void *)a1)
M2C_UNK TWindowLockOn__update_for_item(s32 a0, s32 a1) {
    Ent_80263370 *e;
    Ent_80263370 *e2;
    f32 r;
    TWindowSubStatusDisp__sub_80257D44(arg0->sub, lbl_804D00DC, arg0->player);
    arg0->cb = lbl_804D0288;
    e = (Ent_80263370 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    init_item_row__20TWindowSubStatusDispFPvPvi(e, item, 0);
    calc_row_width__20TWindowSubStatusDispFv(e);
    e->y = lbl_805DD114;
    if (e->kind != 0x33) {
        e->y += lbl_805DD118;
    }
    arg0->w = e->w;
    arg0->h = lbl_805DD11C;
    e2 = (Ent_80263370 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    if (get_field_ec__12TOSwitchItemFPv(item) == 0 || get_field_ec__12TOSwitchItemFPv(item) == 1) {
        ((Ent2_80263370 *)e2)->grade = calc_display_grade__5TItemFPv(item);
        arg0->h += lbl_805DD120;
        e2->flags &= ~2;
        r = get_item_star_row_width(e2);
        if (arg0->w < r) {
            arg0->w = r;
        }
    } else {
        e2->flags |= 2;
    }
    arg0->w += TWindowLockOn__data_805DD110;
    arg0->dist = get_target_distance__13TWindowLockOnFv(0x1E) - arg0->h * arg0->scale;
    arg0->i50 = 0;
}
#undef arg0
#undef item
#pragma pop

void update_for_target__13TWindowLockOnFii(s32 arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_80257CB8(arg0 + 0x24);
    if (obj_testFlags30(arg1, 0x10000000) != 0) {
        TWindowLockOn__update_for_other_player(arg0, arg1);
        return;
    }
    if (obj_testFlags30(arg1, 0x80000000) != 0) {
        TWindowLockOn__update_for_item((s32)(arg0), (s32)(arg1));
        return;
    }
    if (obj_testFlags30(arg1, 0x20000000) != 0) {
        TWindowLockOn__update_for_enemy(arg0, arg1);
    }
}

void render__13TWindowLockOnFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = setup_window_draw_context(arg0, arg0 + 0x68);
    draw_window_frame(arg0, temp_r3);
    if ((M2C_FIELD(arg0, f32 *, 0x30) == M2C_FIELD(arg0, f32 *, 0x40)) && (M2C_FIELD(arg0, f32 *, 0x34) == M2C_FIELD(arg0, f32 *, 0x44)) && (M2C_FIELD(arg0, f32 *, 0x38) == M2C_FIELD(arg0, f32 *, 0x48)) && (M2C_FIELD(arg0, f32 *, 0x3C) == M2C_FIELD(arg0, f32 *, 0x4C))) {
        draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    }
}

s32 find_entity_by_id(u16);
void *__nw__7TObjectFUl(u32);
void *TWindowLockOn__ct(void *, s32, u16);
void *create_for_target__13TWindowLockOnFiUs(s32 arg0, u16 arg1);

void *create_for_target__13TWindowLockOnFiUs(s32 arg0, u16 arg1) {
    void *p;
    if (arg1 == 0xFFFF) {
        return NULL;
    }
    if (((s32 (*)(s32))TWindowLockOn__sub_80262DC4)(find_entity_by_id(arg1)) == 0) {
        return NULL;
    }
    p = __nw__7TObjectFUl(0x7C);
    if (p != NULL) {
        p = TWindowLockOn__ct(p, arg0, arg1);
    }
    return p;
}

extern M2C_UNK __vt__13TWindowLockOn[];

void run_task__13TWindowLockOnFv(Win_8026385C *w) {
    s32 old;
    w->refresh_flags = 0x01000000;
    if (w->refresh) {
        (w->*w->refresh)();
    }
    validate_target__13TWindowLockOnFPv(w);
    initialize_subwindow__9TWindowDDFPv(w);
    update_fade__17TWindowSubComCardFPv(w);
    update_window_entry_list(w, w->m24);
    old = w->retention;
    w->retention = old - 1;
    if (old < 0) {
        TWindow__close(w);
    }
}

void *__dt__13TWindowLockOnFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowLockOn;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
