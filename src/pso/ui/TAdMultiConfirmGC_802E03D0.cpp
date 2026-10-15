#pragma defer_codegen on
#include "types.h"

struct Obj_802E0CB0 {
    u8 pad0[0x38]; f32 x, y, z; u8 pad44[0x5C - 0x44]; s32 rx, ry, rz;
    u8 pad68[0x104 - 0x68]; s32 mode; s32 idx; u8 pad10c[0x11C - 0x10C]; s32 f11C;
};

extern "C" {
extern const char lbl_804728D0[];
const char lbl_804728D0[] = "TAdChrSelPlayerGC";

void set_cursor_index__17TAdMultiConfirmGCFPvi(void *arg0, s32 arg1);
void *get_index__14TAdPlyStatusGCFv();
void set_status_param__14TAdPlyStatusGCFii(void *, void *);
s32 free_chcr_resources(void *, int);
void fn_802E0784(u8 *arg0);
void fn_802E0CB0(Obj_802E0CB0 *o);
}

struct Stack_802E0468
{
  f32 sp8;
  f32 spC;
  f32 sp10;
  f32 sp14;
};

extern "C" {
void play_phase_transition_sound__10TObjPlayerFi(s32);
void set_chunk_material_override_pair(s32, s32);
void set_chunk_material_color(void *);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void TObjPlayer__sub_802E0468(long long arg1, u8 *arg2, f32 farg0);
bool fn_802E0454(u8 *arg0);
}

extern "C" {

void TAdMultiConfirmGC__sub_802E03D0(void* p);
void TAdMultiConfirmGC__sub_802E0448(void* p);
int reset_cursor__17TAdMultiConfirmGCFPv(void* p);
int set_cursor_index_1__17TAdMultiConfirmGCFPv(void* p);
int set_cursor_index_2__17TAdMultiConfirmGCFPv(void* p);

typedef struct Stack_802E0468 Stack_802E0468;

}

extern "C" {
s32 post_translate_matrix(void *);
void TObjPlayer__sub_802E0580(void *, int, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from();
s32 push_matrix();
s32 pop_matrix();
s32 clear_flag_bit0__12TCharaMakingFv();
void draw_model_with_arg__10TObjPlayerFPvPv(void* p, void* a1);
s32 enable_making__12TCharaMakingFv();
s32 get_chara_making_data__14TAdPlyStatusGCFPv(int);
u32 get_field_498__14TAdPlyStatusGCFPv(int);
u32 get_field_49c__14TAdPlyStatusGCFPv(int);
s32 get_field_4a0__14TAdPlyStatusGCFPv(int);
s32 get_field_4a4__14TAdPlyStatusGCFPv(int);
s32 get_item_ptr__10TObjPlayerFPvi(void *, int);
s32 get_status_data__14TAdPlyStatusGCFPv(int);
s32 get_status_sub__14TAdPlyStatusGCFPv(int);
s32 set_global_param__8TObjFishFi();
void update_chara_making__10TObjPlayerFPv(u8 *arg0);
void update_chara_making__10TObjPlayerFPv(u8 *arg0);
void update_chara_making_if_state3__10TObjPlayerFPv(void* p);
}

extern "C" {

void draw_model_with_arg__10TObjPlayerFPvPv(void* p, void* a1);
int draw_model_with_callback__10TObjPlayerFPv(void*);
int set_motion_interpolation_flag(void*);

}

extern "C" {

void set_cursor_index__17TAdMultiConfirmGCFPvi(void *arg0, s32 arg1);

}

struct RecoveredGlobal_802E0784_lbl_804E2F78 {
    s32 value;
    u8 remaining[0x8C];
};

extern "C" {
s32 set_field_dc__10TObjPlayerFPvi(void *, int);
s32 set_field_d8__10TObjPlayerFPvi(void *, void *);
s32 set_animation__10TObjPlayerFPvs(void *, int);
extern RecoveredGlobal_802E0784_lbl_804E2F78 lbl_804E2F78;
extern u8 *TAdMultiPlyChrSelectGC__resource_bundle;
}

extern "C" {

typedef char RecoveredGlobal_802E0784_lbl_804E2F78_size[sizeof(RecoveredGlobal_802E0784_lbl_804E2F78) == 0x90 ? 1 : -1];

}

extern "C" {
s32 copy_player_visual_record(void *, void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 advance_animation_playback(void *);
u8 *get_entry__23TAdSinglePlyChrSelectGCFi(int);
u8 *get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int);
u8 *get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
void *init_appearance_load_request__10TNpcPlayerFPvPvii(void *, void *, void *, int);
s32 is_unloaded__12TChCrLoadAfsFPv(void *);
void set_load_state__14TAdPlyStatusGCFPvi(void *, int);
void update_model_load__10TNpcPlayerFPv(u8 *arg0);
}

extern "C" {

#define F(o, t) (*(t *)((s8 *)(arg0) + (o)))

}

struct RecoveredGlobal_802E0B60_lbl_804E2F68 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802E0B60_lbl_804E3008 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 __dt__10TObjMotionFv(void *, int);
s32 free__11TOBoss4RockFUi(int);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_802E0B60_lbl_804E2F68 lbl_804E2F68;
extern RecoveredGlobal_802E0B60_lbl_804E3008 lbl_804E3008;
u8 *fn_802E0B60(u8 *arg0, s16 arg1);
}

extern "C" {

typedef char RecoveredGlobal_802E0B60_lbl_804E2F68_size[sizeof(RecoveredGlobal_802E0B60_lbl_804E2F68) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_802E0B60_lbl_804E3008_size[sizeof(RecoveredGlobal_802E0B60_lbl_804E3008) == 0x38 ? 1 : -1];

}

extern "C" {
s32 close_window__14TAdPlyStatusGCFPvi(u32, s32);
void set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
}

extern "C" {

void set_status_value__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
s32 set_status_index__14TAdPlyStatusGCFii(void *, s32);

}

extern "C" {

extern const f32 lbl_805DE8DC;
extern const f32 lbl_805DE8E0;
extern const f32 lbl_805DE8E4;
__declspec(section ".sdata2") void *const lbl_805DE8A8[1] = {
    (void *)0x3f800000,
};
__declspec(section ".sdata2") void *const lbl_805DE8AC[1] = {
    (void *)0x3b808081,
};
__declspec(section ".sdata2") void *const lbl_805DE8B0[1] = {
    (void *)0x41880000,
};
__declspec(section ".sdata2") void *const lbl_805DE8B4[1] = {
    (void *)0xc1280000,
};
__declspec(section ".sdata2") void *const lbl_805DE8B8[1] = {
    (void *)0xc2200000,
};
__declspec(section ".sdata2") void *const lbl_805DE8BC[1] = {
    (void *)0x0,
};
__declspec(section ".sdata2") void *const lbl_805DE8C0[1] = {
    (void *)0xc1600000,
};
__declspec(section ".sdata2") void *const lbl_805DE8C4[1] = {
    (void *)0x41e00000,
};
__declspec(section ".sdata2") void *const lbl_805DE8C8[1] = {
    (void *)0xc1200000,
};
__declspec(section ".sdata2") void *const lbl_805DE8CC[1] = {
    (void *)0xc2dc0000,
};
__declspec(section ".sdata2") void *const lbl_805DE8D0[1] = {
    (void *)0x43360b61,
};
__declspec(section ".sdata2") void *const lbl_805DE8D4[1] = {
    (void *)0x40e80000,
};
__declspec(section ".sdata2") void *const lbl_805DE8D8[1] = {
    (void *)0x41680000,
};
#define lbl_805DE8A8 (*(const f32 *)lbl_805DE8A8)
#define lbl_805DE8AC (*(const f32 *)lbl_805DE8AC)
#define lbl_805DE8B0 (*(const f32 *)lbl_805DE8B0)
#define lbl_805DE8B4 (*(const f32 *)lbl_805DE8B4)
#define lbl_805DE8B8 (*(const f32 *)lbl_805DE8B8)
#define lbl_805DE8BC (*(const f32 *)lbl_805DE8BC)
#define lbl_805DE8C0 (*(const f32 *)lbl_805DE8C0)
#define lbl_805DE8C4 (*(const f32 *)lbl_805DE8C4)
#define lbl_805DE8C8 (*(const f32 *)lbl_805DE8C8)
#define lbl_805DE8CC (*(const f32 *)lbl_805DE8CC)
#define lbl_805DE8D0 (*(const f32 *)lbl_805DE8D0)
#define lbl_805DE8D4 (*(const f32 *)lbl_805DE8D4)
#define lbl_805DE8D8 (*(const f32 *)lbl_805DE8D8)

}

extern "C" {

#pragma push
#pragma fp_contract on
#pragma pool_data off

void fn_802E0CB0(Obj_802E0CB0 *o) {
    o->f11C = 0;
    switch (o->mode) {
    case 0:
        o->x = lbl_805DE8B0;
        o->y = lbl_805DE8B4;
        o->z = lbl_805DE8B8;
        o->rx = 0;
        o->ry = 0xF3D5;
        o->rz = 0;
        o->f11C = 1;
        break;
    case 1:
    case 2:
        o->x = lbl_805DE8BC;
        o->y = lbl_805DE8B4;
        o->z = lbl_805DE8B8;
        o->rx = 0;
        o->ry = 0xF3D5;
        o->rz = 0;
        o->f11C = 1;
        break;
    case 3:
        o->x = lbl_805DE8C4 * o->idx + lbl_805DE8C0;
        o->y = lbl_805DE8C8;
        o->z = lbl_805DE8CC;
        o->rx = 0;
        o->ry = lbl_805DE8D0 * (lbl_805DE8D4 - lbl_805DE8D8 * o->idx);
        o->rz = 0;
        break;
    case 4:
        o->x = 19.0f * o->idx + -19.0f;
        o->y = lbl_805DE8C8;
        o->z = lbl_805DE8CC;
        o->rx = 0;
        o->ry = lbl_805DE8D0 * (9.8f - 9.8f * o->idx);
        o->rz = 0;
        break;
    case 5: {
        f32 xs[4] = { -21.5f, -8.0f, 7.0f, 23.5f };
        f32 zs[4] = { -110.0f, -118.56f, -110.0f, -118.56f };
        f32 rs[4] = { 11.6f, 3.86f, -3.64f, -11.21f };
        o->x = xs[o->idx];
        o->y = lbl_805DE8C8;
        o->z = zs[o->idx];
        o->rx = 0;
        o->ry = lbl_805DE8D0 * rs[o->idx];
        o->rz = 0;
        break;
    }
    }
}
#pragma pop

void set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0x104) = arg1;
    ((s32 (*)(void *, s32))fn_802E0CB0)(arg0, *(s32 *)((s8 *)arg0 + 0x104));
    u32 temp_r3 = ((u32)get_index__14TAdPlyStatusGCFv());
    if (temp_r3 != 0U) {
        close_window__14TAdPlyStatusGCFPvi(temp_r3, arg1);
    }
}

void set_status_value__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    void *temp_r3;
    *(s32 *)((s8 *)arg0 + 0x110) = arg1;
    temp_r3 = get_index__14TAdPlyStatusGCFv();
    if (temp_r3 != 0U) {
        set_status_index__14TAdPlyStatusGCFii(temp_r3, *(s32 *)((s8 *)arg0 + 0x110));
    }
}

u8 *fn_802E0B60(u8 *arg0, s16 arg1) {
    s32 temp_r4;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804E3008.value;
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x10C) * 4;
        if ((u32) *(s32 *)((s8 *)(&lbl_804E2F68.value) + temp_r4) != 0U) {
            *(s32 *)((s8 *)(&lbl_804E2F68.value) + temp_r4) = 0;
        }
        temp_r3 = *(u32 *)((s8 *)arg0 + 0xE0);
        if (temp_r3 != 0U) {
            free__11TOBoss4RockFUi((int) (temp_r3));
            *(u32 *)((s8 *)arg0 + 0xE0) = 0U;
        }
        temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x170);
        if (temp_r3_2 != 0U) {
            free_chcr_resources((void *) (temp_r3_2), (int) (1));
            *(u32 *)((s8 *)arg0 + 0x170) = 0U;
            temp_r3_3 = (u32) get_index__14TAdPlyStatusGCFv();
            if (temp_r3_3 != 0U) {
                set_status_param__14TAdPlyStatusGCFii((void *) (temp_r3_3), (void *) (*(u32 *)((s8 *)arg0 + 0x170)));
            }
        }
        __dt__10TObjMotionFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

void update_model_load__10TNpcPlayerFPv(u8 *arg0) {
    void *p;
    void *idx;
    s32 t;
    switch (F(0xFC, s32)) {
    case 0:
        if (F(0x170, void *) != NULL) {
            free_chcr_resources(F(0x170, void *), 1);
            F(0x170, void *) = NULL;
        }
        if (F(0x100, s32) != 0) {
            F(0xFC, s32) = F(0x100, s32) - 1;
            F(0x100, s32) = 0;
        }
        break;
    case 1:
        if (F(0x170, void *) != NULL) {
            free_chcr_resources(F(0x170, void *), 1);
            F(0x170, void *) = NULL;
        }
        if (F(0x100, s32) != 0) {
            F(0xFC, s32) = F(0x100, s32) - 1;
            F(0x100, s32) = 0;
            break;
        }
        switch (F(0x104, s32)) {
        case 0:
            copy_player_visual_record(arg0 + 0x120, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) + 0x370);
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0x4AC);
            if (p != NULL) {
                p = init_appearance_load_request__10TNpcPlayerFPvPvii(p, arg0, arg0 + 0x120, 0);
            }
            F(0x170, void *) = p;
            F(0x60, s32) = 0xF3D5;
            break;
        case 1:
            copy_player_visual_record(arg0 + 0x120, get_entry__23TAdSinglePlyChrSelectGCFi(F(0x110, s32)) + 0x370);
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0x4AC);
            if (p != NULL) {
                p = init_appearance_load_request__10TNpcPlayerFPvPvii(p, arg0, arg0 + 0x120, 0);
            }
            F(0x170, void *) = p;
            F(0x60, s32) = 0xF3D5;
            break;
        case 2:
            copy_player_visual_record(arg0 + 0x120, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) + 0x370);
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0x4AC);
            if (p != NULL) {
                p = init_appearance_load_request__10TNpcPlayerFPvPvii(p, arg0, arg0 + 0x120, 0);
            }
            F(0x170, void *) = p;
            F(0x60, s32) = 0xF3D5;
            break;
        case 3:
        case 4:
        case 5:
            copy_player_visual_record(arg0 + 0x120, get_char_table_entry__23TAdSinglePlyChrSelectGCFi(F(0x10C, s32)) + 0x370);
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0x4AC);
            if (p != NULL) {
                p = init_appearance_load_request__10TNpcPlayerFPvPvii(p, arg0, arg0 + 0x120, F(0x10C, s32));
            }
            F(0x170, void *) = p;
            break;
        }
        fn_802E0784(arg0);
        F(0xFC, s32) = 2;
        break;
    case 2:
        if (F(0x100, s32) != 0) {
            if (F(0x170, void *) != NULL) {
                free_chcr_resources(F(0x170, void *), 1);
                F(0x170, void *) = NULL;
            }
            F(0xFC, s32) = F(0x100, s32) - 1;
            F(0x100, s32) = 0;
        } else if (is_unloaded__12TChCrLoadAfsFPv(F(0x170, void *)) != 0) {
            F(0xFC, s32) = 3;
            F(0x118, s32) = 0;
        }
        break;
    case 3:
        if (F(0x100, s32) != 0) {
            if (F(0x170, void *) != NULL) {
                free_chcr_resources(F(0x170, void *), 1);
                F(0x170, void *) = NULL;
            }
            F(0xFC, s32) = F(0x100, s32) - 1;
            F(0x100, s32) = 0;
        } else {
            if (F(0x11C, s32) == 1) {
                F(0x60, s32) = F(0x60, s32) - 0x100;
            }
            F(0x118, s32) = F(0x118, s32) + 1;
            t = F(0x118, s32);
            if (t == 0x384 || t == 0x708) {
                set_cursor_index_1__17TAdMultiConfirmGCFPv(arg0);
            } else if (t == 0x546) {
                set_cursor_index_2__17TAdMultiConfirmGCFPv(arg0);
            }
            if (F(0x118, s32) == 0x8CA) {
                reset_cursor__17TAdMultiConfirmGCFPv(arg0);
                F(0x118, s32) = 0;
            }
            advance_animation_playback(arg0);
        }
        break;
    }
    idx = get_index__14TAdPlyStatusGCFv();
    if (idx != NULL) {
        set_load_state__14TAdPlyStatusGCFPvi(idx, F(0xFC, s32));
        set_status_param__14TAdPlyStatusGCFii(idx, F(0x170, void *));
    }
}

void fn_802E0784(u8 *arg0) {
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (&lbl_804E2F78.value));
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (*(s32 *)((s8 *)TAdMultiPlyChrSelectGC__resource_bundle + 0x430)));
    set_cursor_index__17TAdMultiConfirmGCFPvi((void *) (arg0), (int) (0));
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (*(s16 *)((s8 *)arg0 + 0xB8)));
}

void set_cursor_index__17TAdMultiConfirmGCFPvi(void *arg0, s32 arg1) {
    s16 temp_r4;

    *(s16 *)((s8 *)arg0 + 0xB8) = (s16) (arg1 * 3);
    temp_r4 = *(s16 *)((s8 *)arg0 + 0xB8);
    if ((temp_r4 < 0) || (temp_r4 > 8)) {
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    }
    if (*(s32 *)((s8 *)arg0 + 0x154) & 2) {
        *(s16 *)((s8 *)arg0 + 0xB8) = (s16) (*(s16 *)((s8 *)arg0 + 0xB8) + 1);
        if ((s32) *(u8 *)((s8 *)arg0 + 0x151) == 6) {
            *(s16 *)((s8 *)arg0 + 0xB8) = (s16) (*(s16 *)((s8 *)arg0 + 0xB8) + 1);
        }
    }
}

void update_chara_making_if_state3__10TObjPlayerFPv(void* p) { if (*(int*)((char*)p + 0xfc) == 3) { update_chara_making__10TObjPlayerFPv((u8 *)(p)); } }

void update_chara_making__10TObjPlayerFPv(u8 *arg0) {
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
    get_status_sub__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170)));
    set_global_param__8TObjFishFi();
    draw_model_with_arg__10TObjPlayerFPvPv((void*)((void *) (arg0)), (void*)((int) (get_field_4a4__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170))))));
    get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (int) (0x3A));
    push_matrix_from();
    get_status_data__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170)));
    set_global_param__8TObjFishFi();
    get_field_4a0__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170)));
    ((s32 (*)())play_phase_transition_sound__10TObjPlayerFi)();
    pop_matrix();
    if (get_field_49c__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170))) != 0U) {
        get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (int) (0x3B));
        push_matrix_from();
        get_chara_making_data__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170)));
        set_global_param__8TObjFishFi();
        enable_making__12TCharaMakingFv();
        get_field_49c__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170)));
        ((s32 (*)())play_phase_transition_sound__10TObjPlayerFi)();
        clear_flag_bit0__12TCharaMakingFv();
        pop_matrix();
    }
    if (get_field_498__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170))) != 0U) {
        get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (int) (0x3B));
        push_matrix_from();
        get_chara_making_data__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170)));
        set_global_param__8TObjFishFi();
        enable_making__12TCharaMakingFv();
        TObjPlayer__sub_802E0580((void *)((void *) (arg0)), (int)((int) (get_field_498__14TAdPlyStatusGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x170))))), (void *)((void *) (arg0 + 0x120)));
        clear_flag_bit0__12TCharaMakingFv();
        pop_matrix();
    }
    pop_matrix();
}

void draw_model_with_arg__10TObjPlayerFPvPv(void* p, void* a1) { *(void**)((char*)p + 0x34) = a1; set_motion_interpolation_flag(p); draw_model_with_callback__10TObjPlayerFPv(p); }

void TObjPlayer__sub_802E0580(void * _w0, int _w1, void * _w2) {
    ((s32 (*)(f32))TObjPlayer__sub_802E0468)(lbl_805DE8A8);
}

void TObjPlayer__sub_802E0468(long long arg1, u8 *arg2, f32 farg0) {
  Stack_802E0468 stack;
  int new_var;
  lbl_805D5660 = model_render_flags;
  lbl_805D5664 = chunk_polygon_flags_and_mask;
  lbl_805D5668 = chunk_polygon_flags_or_mask;
  model_render_flags |= 0x10;
  new_var = 1;
  if (farg0 < lbl_805DE8A8)
  {
    set_chunk_material_override_pair(-new_var, 0x800);
  }
  stack.sp8 = farg0;
  stack.spC = lbl_805DE8AC * ((f32) (*((s16 *) (((s8 *) arg2) + 0x42))));
  stack.sp10 = lbl_805DE8AC * ((f32) (*((s16 *) (((s8 *) arg2) + 0x44))));
  stack.sp14 = lbl_805DE8AC * ((f32) (*((s16 *) (((s8 *) arg2) + 0x46))));
  set_chunk_material_color(&stack.sp8);
  play_phase_transition_sound__10TObjPlayerFi(arg1);
  chunk_polygon_flags_and_mask = lbl_805D5664;
  chunk_polygon_flags_or_mask = lbl_805D5668;
  model_render_flags = lbl_805D5660;
}

bool fn_802E0454(u8 *arg0) {
    return *(s32 *)((s8 *)arg0 + 0xFC) == 3;
}

void TAdMultiConfirmGC__sub_802E0448(void* p) { *(s32*)((char*)p + 0x11c) = 1; }

int reset_cursor__17TAdMultiConfirmGCFPv(void* p) { return ((int (*)(void *, int))set_cursor_index__17TAdMultiConfirmGCFPvi)(p, 0); }

int set_cursor_index_1__17TAdMultiConfirmGCFPv(void* p) { return ((int (*)(void *, int))set_cursor_index__17TAdMultiConfirmGCFPvi)(p, 1); }

int set_cursor_index_2__17TAdMultiConfirmGCFPv(void* p) { return ((int (*)(void *, int))set_cursor_index__17TAdMultiConfirmGCFPvi)(p, 2); }

void TAdMultiConfirmGC__sub_802E03D0(void* p) { *(s32*)((char*)p + 0x118) = 0; }

}
