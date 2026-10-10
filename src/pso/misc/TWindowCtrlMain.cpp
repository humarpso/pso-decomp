#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8024D520 { void *obj; u8 pad[0x18]; };

struct Obj_8024D520 { s32 id; u8 pad[0x14]; void *vt; };

struct WBase_8024D3C0 { u8 pad[0x18]; };

struct W_8024D3C0 : WBase_8024D3C0 { virtual ~W_8024D3C0(); };

struct WBase_8024D690 { u8 pad[0x18]; };

struct W_8024D690 : WBase_8024D690 { virtual ~W_8024D690(); };

extern "C" {
bool TWindowCtrlMain__sub_8024D868(u8 *arg0);
void *__nw__7TObjectFUl(u32);
void *__ct__7TObjectFP7TObject(void *, void *);
void init_fields__15TWindowCtrlMainFPv(void *);
void *TWindowCtrlClipOut__ct(void *, void *);
void *TWindowCtrlSub__ct(void *, void *);
void *TWindowCtrlScreen__ct(void *, void *);
extern u8 __vt__15TWindowCtrlMain[];
extern Ent_8024D520 TWindowCtrlMain__viewport_states[6];
extern s32 lbl_805D38D0;
extern void *tl_01;
extern void *tl_window;
extern void *tl_clipout;
extern void *tl_fadeafter;
extern void *TWindowCtrlMain__instance;
extern void *TWindowCtrlMain__window_task_root;
extern void *TWindowCtrlMain__screen_controller;
extern void *TWindowCtrlMain__sub_controller;
extern void *window_clip_out_instance;
Obj_8024D520 *TWindowCtrlMain__ct(Obj_8024D520 *arg0);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK release_ptr__15TWindowCtrlMainFPv(void *);
extern u8 __vt__15TWindowCtrlMain[];
extern Ent_8024D520 TWindowCtrlMain__viewport_states[6];
extern void *TWindowCtrlMain__instance;
extern void *TWindowCtrlMain__window_task_root;
extern void *TWindowCtrlMain__screen_controller;
extern void *TWindowCtrlMain__sub_controller;
extern void *window_clip_out_instance;
void *__dt__15TWindowCtrlMainFv(void *arg0, s16 arg1);
M2C_UNK free_window__15TWindowCtrlMainFv();
M2C_UNK release_ptr__15TWindowCtrlMainFPv(void *);
M2C_UNK free_keyboard_soft__15TWindowCtrlMainFv();
extern Ent_8024D520 TWindowCtrlMain__viewport_states[6];
extern void *TWindowCtrlMain__instance;
extern void *TWindowCtrlMain__window_task_root;
extern void *TWindowCtrlMain__screen_controller;
extern void *TWindowCtrlMain__sub_controller;
extern void *window_clip_out_instance;
void free_all_windows__15TWindowCtrlMainFv(void);
M2C_UNK load_hud_palette_textures();
void init_fields__15TWindowCtrlMainFPv(void *);
M2C_UNK get_or_create_instance__19TWindowKeyBoardSoftFv();
M2C_UNK TWindowCtrlMain__sub_8024EF30();
extern Ent_8024D520 TWindowCtrlMain__viewport_states[6];
extern void *TWindowCtrlMain__display_flags;
extern void *TWindowCtrlMain__instance;
extern void *TWindowCtrlMain__window_task_root;
extern void *TWindowCtrlMain__screen_controller;
extern void *TWindowCtrlMain__sub_controller;
extern void *window_clip_out_instance;
extern f32 window_depth_order_cursor;
extern const f32 lbl_805DCC58;
void reset_all__15TWindowCtrlMainFPv(void* _w0);
}

extern "C" {

void TWindowCtrlMain__sub_8024D838(void);
void TWindowCtrlMain__sub_8024D85C(void* p);
void spawn_palette_slot_light__15TWindowCtrlMainFPv(void* p);
void free_member__15TWindowCtrlMainFPv(void* p);
s32 get_main_menu_message__15TWindowCtrlMainFPv(void *arg0);
void render__15TWindowCtrlMainFv(void* p);
int run_task__15TWindowCtrlMainFv(void* p);
void update_child_2c__15TWindowCtrlMainFPv(void* p);
void update_field28__15TWindowCtrlMainFPv(void* p);
int TCameraCtrl__sub_80068EF0(void);
int restore_full_screen_view__11TCameraCtrlFv(void);
int TWindowCtrlMain__sub_8024CE24(void);
s32 TWindowMainMenu__sub_8024E3D4(void *);
s32 TWindowMainMenu__sub_8024E3E0(void *);
int begin_effect_render__13TParticleCtrlFv(void);
int end_effect_render__13TParticleCtrlFv(void);
int spawn_action_palette_slot_light(void*);
int open_submenu__15TWindowSubEquipFii(void*);
int render_nodes__7TObjectFv(void);
int reset_transform_state__10TObjPlayerFv(void*);
int send_and_handle__6TLobbyFPvii(void*);
int try_open_battle_menu__15TWindowMainMenuFPvs(void*);
int update_com_card__9TWindowDDFPv(void*);

void render__15TWindowCtrlMainFv(void* p) { reset_transform_state__10TObjPlayerFv(p); begin_effect_render__13TParticleCtrlFv(); restore_full_screen_view__11TCameraCtrlFv(); TWindowCtrlMain__sub_8024CE24(); render_nodes__7TObjectFv(); TCameraCtrl__sub_80068EF0(); end_effect_render__13TParticleCtrlFv(); }
int run_task__15TWindowCtrlMainFv(void* p) { return update_com_card__9TWindowDDFPv(p); }

void *__dt__15TWindowCtrlMainFv(void *arg0, s16 arg1) {
    W_8024D3C0 *root;
    s32 i;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 **, 0x18) = __vt__15TWindowCtrlMain;
        root = (W_8024D3C0 *)TWindowCtrlMain__window_task_root;
        TWindowCtrlMain__window_task_root = NULL;
        if (window_clip_out_instance != NULL) {
            delete (W_8024D3C0 *)window_clip_out_instance;
            window_clip_out_instance = NULL;
        }
        if (TWindowCtrlMain__sub_controller != NULL) {
            delete (W_8024D3C0 *)TWindowCtrlMain__sub_controller;
            TWindowCtrlMain__sub_controller = NULL;
        }
        if (TWindowCtrlMain__screen_controller != NULL) {
            delete (W_8024D3C0 *)TWindowCtrlMain__screen_controller;
            TWindowCtrlMain__screen_controller = NULL;
        }
        for (i = 5; i >= 0; i--) {
            release_ptr__15TWindowCtrlMainFPv(&TWindowCtrlMain__viewport_states[i]);
        }
        if (TWindowCtrlMain__instance != NULL) {
            delete (W_8024D3C0 *)TWindowCtrlMain__instance;
            TWindowCtrlMain__instance = NULL;
        }
        if (root != NULL) {
            delete root;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_8024D520 *TWindowCtrlMain__ct(Obj_8024D520 *arg0) {
    Ent_8024D520 *e;
    s32 i;
    void *p;
    __ct__7TObjectFP7TObject(arg0, tl_fadeafter);
    arg0->vt = __vt__15TWindowCtrlMain;
    arg0->id = lbl_805D38D0;
    if (TWindowCtrlMain__window_task_root == 0) {
        p = __nw__7TObjectFUl(0x1C);
        if (p != 0) {
            p = __ct__7TObjectFP7TObject(p, 0);
        }
        TWindowCtrlMain__window_task_root = p;
    }
    if (TWindowCtrlMain__instance == 0) {
        p = __nw__7TObjectFUl(0x1C);
        if (p != 0) {
            p = __ct__7TObjectFP7TObject(p, TWindowCtrlMain__window_task_root);
        }
        TWindowCtrlMain__instance = p;
    }
    for (i = 0; i < 6; i++) {
        e = &TWindowCtrlMain__viewport_states[i];
        init_fields__15TWindowCtrlMainFPv(e);
        p = __nw__7TObjectFUl(0x1C);
        if (p != 0) {
            p = __ct__7TObjectFP7TObject(p, TWindowCtrlMain__window_task_root);
        }
        e->obj = p;
    }
    if (TWindowCtrlMain__screen_controller == 0) {
        p = __nw__7TObjectFUl(0x1C);
        if (p != 0) {
            p = TWindowCtrlScreen__ct(p, tl_window);
        }
        TWindowCtrlMain__screen_controller = p;
    }
    if (TWindowCtrlMain__sub_controller == 0) {
        p = __nw__7TObjectFUl(0x1C);
        if (p != 0) {
            p = TWindowCtrlSub__ct(p, tl_01);
        }
        TWindowCtrlMain__sub_controller = p;
    }
    if (window_clip_out_instance == 0) {
        p = __nw__7TObjectFUl(0x1C);
        if (p != 0) {
            p = TWindowCtrlClipOut__ct(p, tl_clipout);
        }
        window_clip_out_instance = p;
    }
    return arg0;
}

void free_all_windows__15TWindowCtrlMainFv(void) {
    W_8024D690 *root;
    s32 i;
    root = (W_8024D690 *)TWindowCtrlMain__window_task_root;
    TWindowCtrlMain__window_task_root = NULL;
    if (window_clip_out_instance != NULL) {
        delete (W_8024D690 *)window_clip_out_instance;
        window_clip_out_instance = NULL;
    }
    if (TWindowCtrlMain__sub_controller != NULL) {
        delete (W_8024D690 *)TWindowCtrlMain__sub_controller;
        TWindowCtrlMain__sub_controller = NULL;
    }
    if (TWindowCtrlMain__screen_controller != NULL) {
        delete (W_8024D690 *)TWindowCtrlMain__screen_controller;
        TWindowCtrlMain__screen_controller = NULL;
    }
    for (i = 5; i >= 0; i--) {
        release_ptr__15TWindowCtrlMainFPv(&TWindowCtrlMain__viewport_states[i]);
    }
    if (TWindowCtrlMain__instance != NULL) {
        delete (W_8024D690 *)TWindowCtrlMain__instance;
        TWindowCtrlMain__instance = NULL;
    }
    if (root != NULL) {
        delete root;
    }
    free_keyboard_soft__15TWindowCtrlMainFv();
    free_window__15TWindowCtrlMainFv();
}

void reset_all__15TWindowCtrlMainFPv(void* _w0) {
    s32 i;
    load_hud_palette_textures();
    TWindowCtrlMain__sub_8024EF30();
    get_or_create_instance__19TWindowKeyBoardSoftFv();
    TWindowCtrlMain__display_flags = 0;
    TWindowCtrlMain__window_task_root = 0;
    TWindowCtrlMain__screen_controller = 0;
    TWindowCtrlMain__sub_controller = 0;
    window_clip_out_instance = 0;
    TWindowCtrlMain__instance = 0;
    window_depth_order_cursor = lbl_805DCC58;
    for (i = 0; i < 6; i++) {
        init_fields__15TWindowCtrlMainFPv(&TWindowCtrlMain__viewport_states[i]);
    }
}

void TWindowCtrlMain__sub_8024D838(void) { reset_all__15TWindowCtrlMainFPv((void*)((void*)(0))); }
void TWindowCtrlMain__sub_8024D85C(void* p) { *(s16*)((char*)p + 0x20) = 60; }

bool TWindowCtrlMain__sub_8024D868(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x20) <= 0;
}

void update_child_2c__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) send_and_handle__6TLobbyFPvii(m); }
void spawn_palette_slot_light__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x34); if (m) spawn_action_palette_slot_light(m); }
void update_field28__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) open_submenu__15TWindowSubEquipFii(m); }
void free_member__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) try_open_battle_menu__15TWindowMainMenuFPvs(m); }
s32 get_main_menu_message__15TWindowCtrlMainFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x28);
    if (p == 0) {
        return 0;
    }
    return TWindowMainMenu__sub_8024E3D4(p);
}

}
