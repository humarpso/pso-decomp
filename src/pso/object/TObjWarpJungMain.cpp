#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct VBase_18_8019FB8C { char pad[0x18]; };

struct VObj_18_8019FB8C : VBase_18_8019FB8C {
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
s32 get_bml_model(s32, s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK free_children__12TObjDoorJungFPvPv(s32, u16);
M2C_UNK scroll_ginja_mesh_uvs(s32, s32, s32, u16, s32);
M2C_UNK PPCSync();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
int set_global_param__8TObjFishFi(void*);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
extern s32 lbl_8050DDC8[];
extern s32 lbl_805D53A4;
extern s32 TObjWarpJung__beam_bml_resource;
extern void *warp_jung_beam_motion;
extern int warp_jung_model_handle;
extern s32 lbl_805D5CB4;
extern s32 warp_jung_beam_mesh_node;
extern s32 warp_jung_beam_entry_index;
extern s32 lbl_805D5CC0;
extern s32 lbl_805D5CC4;
extern const f32 lbl_805DC040;
extern const f32 lbl_805DC044;
void render__16TObjWarpJungMainFv(VObj_18_8019FB8C *arg0);
M2C_UNK set_loss_flag__6TLobbyFPv(u32);
s32 get_localized_text_entry(M2C_UNK, s32);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);
M2C_UNK request_active_window_close();
M2C_UNK align_menu_entry_positions(u32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(u32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, s32);
u32 create_window_menu(M2C_UNK, M2C_UNK, s16);
M2C_UNK get_window_layout_position(M2C_UNK);
extern s32 lbl_804B964C[];
void TObjWarpJungMain__vt13(void *arg0, s16 arg1);
}

extern "C" {

struct VObjBase_801A0070 { char pad[0x18]; };

struct VObj_801A0070 : VObjBase_801A0070 {
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

struct RecoveredGlobal_8019FCFC_lbl_804B9658 {
    M2C_UNK value;
    u8 remaining[0x8];
};

typedef char RecoveredGlobal_8019FCFC_lbl_804B9658_size[sizeof(RecoveredGlobal_8019FCFC_lbl_804B9658) == 0xC ? 1 : -1];

struct VObjBase_801A0070_more_8019fe60_1 { char pad[0x18]; };

struct VObj_801A0070_more_8019fe60_1 : VObjBase_801A0070_more_8019fe60_1 {
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

struct Obj_8019FF24 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt18;
    u8 pad1C[0x38 - 0x1C];
    u8 f38[0x8C - 0x38];
    s32 f8C;
    u8 pad90[0xAC - 0x90];
    f32 fAC;
    u8 padB0[0xC0 - 0xB0];
    void *fC0;
    f32 fC4;
};

struct Obj_801A0224 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt18;
    u8 pad1C[0x38 - 0x1C];
    u8 f38[0x8C - 0x38];
    s32 f8C;
    u8 pad90[0xAC - 0x90];
    f32 fAC;
    u8 padB0[0xC0 - 0xB0];
    void *fC0;
    f32 fC4;
};

f32 get_random_float__8TObjFishFv(f32);
void queue_destruction__7TObjectFv(void *);
s32 get_bml_model(s32, s32);
s32 is_visible__17TWindowSubComCardFPv(void *);
void * alloc__23TAdSinglePlyChrSelectGCFPv(s32);
int confirm_area_transfer__12TObjAreaWarpFPvi(void*);
void handle_area_selection__12TObjAreaWarpFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void TObjAreaWarp__ct(void *);
int TObjWarpBase__vt12(void*);
s32 TObjWarpJungMain__vt16(u8 *arg0);
int TObjWarpJungMain__vt17(void* p);
void TObjWarpJungMain__vt12(void* p);
void run_task__16TObjWarpJungMainFv(u8 *arg0);
void * __dt__16TObjWarpJungMainFv(void *arg0, s16 arg1);
void * TObjWarpJung__create(void *arg0);
void render__12TObjWarpJungFv(u8 *arg0);
int TObjWarpJung__vt17(void* p);
void run_task__12TObjWarpJungFv(u8 *arg0);
void * __dt__12TObjWarpJungFv(void *arg0, s16 arg1);
Obj_801A0224 * TObjWarpJung__ct(Obj_801A0224 *self);
f32 get_static_field4_as_float__12TObjWarpJungFv(void);
void set_global_render_param__12TObjWarpJungFv(void);
void render_warp_effect__12TObjWarpJungFii(s32 arg0, s32 arg1);
M2C_UNK render_warp__12TObjWarpJungFPv(M2C_UNK);
M2C_UNK TObjWarpJung__sub_801A0404(M2C_UNK);
s32 update_warp_display__12TObjWarpJungFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
int clear_flag__11TWindowCtrlFv(void);
s32 get_selected_menu_value(void *);
void * init__13TAdVIConfigGCFPvf(void *, void *, f32);
s32 get_game_play_mode(void);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
M2C_UNK PPCSync();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
int set_global_param__8TObjFishFi(void*);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);

extern M2C_UNK __vt__12TObjWarpJung[];
extern M2C_UNK __vt__16TObjWarpJungMain[];
extern RecoveredGlobal_8019FCFC_lbl_804B9658 lbl_804B9658;
extern s32 lbl_805D3498;
extern s32 lbl_805D349C;
extern s32 TObjWarpJung__beam_bml_resource;
extern void *warp_jung_beam_motion;
extern int warp_jung_model_handle;
extern const f32 lbl_805DC040;
extern const f32 lbl_805DC044;
extern const f32 lbl_805DC048;
extern const f32 lbl_805DC04C;
extern const f32 lbl_805DC050;
extern const f32 lbl_805DC054;
extern void *tl_05;

void render__16TObjWarpJungMainFv(VObj_18_8019FB8C *arg0) {
    s32 i;
    if (arg0->m8(lbl_805DC040, lbl_805DC044) != 0) {
        if (lbl_805D53A4 != lbl_805D5CB4) {
            lbl_805D5CB4 = lbl_805D53A4;
            if (lbl_805D5CC4 >= 0) {
                scroll_ginja_mesh_uvs(warp_jung_beam_mesh_node, 0, 5, lbl_805D5CC4, 1);
            }
            PPCSync();
        }
        switch (M2C_FIELD(arg0, s32 *, 0x8C)) {
        case 0:
            if (warp_jung_beam_entry_index >= 0) {
                for (i = 0; i < 6; i++) {
                    free_children__12TObjDoorJungFPvPv(lbl_8050DDC8[i], warp_jung_beam_entry_index);
                }
            }
            break;
        case 1:
            if (lbl_805D5CC0 >= 0) {
                for (i = 0; i < 6; i++) {
                    free_children__12TObjDoorJungFPvPv(lbl_8050DDC8[i], lbl_805D5CC0);
                }
            }
            break;
        }
        set_global_param__8TObjFishFi((void *)warp_jung_model_handle);
        push_matrix();
        post_translate_matrix((u8 *)arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw_ginja_object(get_bml_model(TObjWarpJung__beam_bml_resource, 0));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion(get_bml_model(TObjWarpJung__beam_bml_resource, 1), *(s32 *)&warp_jung_beam_motion, M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

s32 TObjWarpJungMain__vt16(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xB0));
    if ((temp_r3 != NULL) && (is_visible__17TWindowSubComCardFPv(temp_r3) != 0)) {
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(&lbl_804B9658.value, M2C_UNK *, (get_selected_menu_value(M2C_FIELD(arg0, u8 **, 0xB0)) * 4));
        return 1;
    }
    return 0;
}

int TObjWarpJungMain__vt17(void* p) { return confirm_area_transfer__12TObjAreaWarpFPvi(p); }

void TObjWarpJungMain__vt12(void* p) { TObjWarpBase__vt12(p); clear_flag__11TWindowCtrlFv(); }

void TObjWarpJungMain__vt13(void *arg0, s16 arg1) {
    s32 var_r29;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = create_window_menu(get_window_layout_position(0x32), 3, arg1);
        for (var_r29 = 0; var_r29 < 3; var_r29++) {
            forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0xB0), get_localized_text_entry(9, lbl_804B964C[var_r29]), 0xE, var_r29);
        }
        calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        set_loss_flag__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        request_active_window_close();
        M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    }
}

void run_task__16TObjWarpJungMainFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DC048);
  if ((*((f32 *) (((s8 *) arg0) + 0xC4))) > ((f32) (((*((s32 *) (((s8 *) (*(u8 * *)&warp_jung_beam_motion)) + 4))) - 1) & 0xFFFFFFFF)))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DC04C;
  }
  handle_area_selection__12TObjAreaWarpFPv(arg0);
}

void *__dt__16TObjWarpJungMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjWarpJungMain;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_8019FF24 *TObjWarpJungMain__ct(Obj_8019FF24 *self) {
    TObjAreaWarp__ct(self);
    self->vt18 = __vt__16TObjWarpJungMain;
    self->f0 = lbl_805D349C;
    self->fC4 = lbl_805DC04C;
    self->f8C = get_random_float__8TObjFishFv(self->f8C % 2);
    if (get_game_play_mode() == 1 && self->f8C == 0) {
        queue_destruction__7TObjectFv(self);
        return self;
    }
    self->fAC = lbl_805DC050;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        void *p = alloc__23TAdSinglePlyChrSelectGCFPv(0x88);
        if (p != NULL) {
            p = init__13TAdVIConfigGCFPvf(p, self->f38, lbl_805DC054);
        }
        self->fC0 = p;
    } else {
        self->fC0 = NULL;
    }
    return self;
}

void *TObjWarpJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjWarpJung__ct)(o, tl_05, arg0);
    }
    return o;
}

void render__12TObjWarpJungFv(u8 *arg0) {
    s32 temp_r0;

    if (((VObj_801A0070_more_8019fe60_1*)arg0)->m8(lbl_805DC040, lbl_805DC044) != 0) {
        if (update_warp_display__12TObjWarpJungFv() != 0) {
            PPCSync();
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
        switch (temp_r0) {
        case 0:
            TObjWarpJung__sub_801A0404(0);
            break;
        case 1:
            TObjWarpJung__sub_801A0404(1);
            break;
        }
        ((M2C_UNK (*)(void))set_global_render_param__12TObjWarpJungFv)();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        render_warp__12TObjWarpJungFPv(0);
        begin_effect_render__13TParticleCtrlFv();
        ((M2C_UNK (*)(M2C_UNK, s32))render_warp_effect__12TObjWarpJungFii)(1, (s32) M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

int TObjWarpJung__vt17(void* p) { return confirm_area_transfer__12TObjAreaWarpFPvi(p); }

void run_task__12TObjWarpJungFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DC048);
  if ((*((f32 *) (((s8 *) arg0) + 0xC4))) > ((f32) (((*((s32 *) (((s8 *) (*(u8 * *)&warp_jung_beam_motion)) + 4))) - 1) & 0xFFFFFFFF)))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DC04C;
  }
  handle_area_selection__12TObjAreaWarpFPv(arg0);
}

void *__dt__12TObjWarpJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjWarpJung;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_801A0224 *TObjWarpJung__ct(Obj_801A0224 *self) {
    TObjAreaWarp__ct(self);
    self->vt18 = __vt__12TObjWarpJung;
    self->f0 = lbl_805D3498;
    self->fC4 = lbl_805DC04C;
    self->f8C = get_random_float__8TObjFishFv(self->f8C % 2);
    if (get_game_play_mode() == 1 && self->f8C == 1) {
        queue_destruction__7TObjectFv(self);
        return self;
    }
    self->fAC = lbl_805DC050;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        void *p = alloc__23TAdSinglePlyChrSelectGCFPv(0x88);
        if (p != NULL) {
            p = init__13TAdVIConfigGCFPvf(p, self->f38, lbl_805DC054);
        }
        self->fC0 = p;
    } else {
        self->fC0 = NULL;
    }
    return self;
}

f32 get_static_field4_as_float__12TObjWarpJungFv(void) {
    return (f32) M2C_FIELD(warp_jung_beam_motion, u32 *, 4);
}

void set_global_render_param__12TObjWarpJungFv(void) { set_global_param__8TObjFishFi((void*)(warp_jung_model_handle)); }

void render_warp_effect__12TObjWarpJungFii(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = get_bml_model(TObjWarpJung__beam_bml_resource, arg0);
    draw_ginja_model_with_motion(temp_r3, (*(s32 *)&warp_jung_beam_motion), (f32) arg1);
}

}
