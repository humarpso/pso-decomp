#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80351FDC_lbl_804F0EA8 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80351FDC_lbl_804F0EA8_size[sizeof(RecoveredGlobal_80351FDC_lbl_804F0EA8) == 0x18 ? 1 : -1];

struct L_80351EAC { u8 pad[0x1C]; u32 flags; s32 mode; };

extern "C" {
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern const M2C_UNK lbl_804F0EA8[];
extern void *lobby_event_theme_controller;
void *destroy_and_clear_instance__6TLobbyFPvs(void *arg0, s16 arg1);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
extern int lobby_main_texture_gvm;
void TLobby__sub_8035202C(void);
int load_gvm_texture_file(void*);
    extern unsigned char lbl_80478E20[];
extern int lobby_main_texture_gvm;
void load_obj_lobby_main(void);
void __ct__7TObjectFP7TObject(void *, void *);
s32 get_filtered_event_theme__6TLobbyFv(void);
extern const M2C_UNK lbl_804F0EA8[];
extern u8 *tl_00;
u8 *TLobby__sub_80351FDC(u8 *arg0);
s32 get_filtered_event_theme__6TLobbyFv(void);
s32 get_theme_lobby_type(void);
void TLobby__sub_80351DF8(void *, s32);
s32 get_filtered_event_theme__6TLobbyFv(void);
void update_event_theme_flags__6TLobbyFPv(L_80351EAC *arg0);
}

extern "C" {

void TLobby__sub_80351F3C(void);
int get_lobby_type__6TLobbyFv(void);
s32 is_connected__6TLobbyFv(void);
s32 is_lobby_obj_active__6TLobbyFv(void);
void *__nw__7TObjectFUl(int);

extern void *lobby_event_theme_controller;

s32 is_connected__6TLobbyFv(void) {
    if ((void *) lobby_event_theme_controller != NULL) {
        return ((u32) M2C_FIELD(lobby_event_theme_controller, u32 *, 0x1C) >> 2U) & 1;
    }
    return 0;
}

extern void *lobby_event_theme_controller;

s32 is_lobby_obj_active__6TLobbyFv(void) {
    if ((void *) lobby_event_theme_controller != NULL) {
        return ((u32) M2C_FIELD(lobby_event_theme_controller, u32 *, 0x1C) >> 1U) & 1;
    }
    return 0;
}

    extern int lobby_main_texture_gvm;
int get_lobby_type__6TLobbyFv(void) {  return lobby_main_texture_gvm; }

extern void *lobby_event_theme_controller;

void update_event_theme_flags__6TLobbyFPv(L_80351EAC *arg0) {
    s32 mode = get_filtered_event_theme__6TLobbyFv();
    arg0->flags &= ~7;
    if (arg0->mode != mode) {
        arg0->flags |= 1;
        if (arg0->mode == 0) {
            arg0->flags |= 2;
        } else if (mode == 0) {
            arg0->flags |= 4;
        }
        arg0->mode = mode;
    }
    TLobby__sub_80351DF8(arg0, mode);
}

void TLobby__sub_80351F3C(void) {
    void *o;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TLobby__sub_80351FDC((u8 *)(o));
    }
    lobby_event_theme_controller = o;
}
void *destroy_and_clear_instance__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_804F0EA8;
        queue_destruction__7TObjectFv(arg0);
        (*(s32 *)&lobby_event_theme_controller) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TLobby__sub_80351FDC(u8 *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_00);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80351FDC_lbl_804F0EA8 *)&lbl_804F0EA8).value;
    M2C_FIELD(arg0, s32 *, 0x20) = get_filtered_event_theme__6TLobbyFv();
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

void TLobby__sub_8035202C(void) {
    if ((u32) (*(u32 *)&lobby_main_texture_gvm) != 0U) {
        TLobby__sub_803DA16C((void*)(*(u32 *)&lobby_main_texture_gvm));
        safe_free__23TAdSinglePlyChrSelectGCFUi((*(u32 *)&lobby_main_texture_gvm));
        (*(u32 *)&lobby_main_texture_gvm) = 0U;
    }
}
void load_obj_lobby_main(void) { lobby_main_texture_gvm = load_gvm_texture_file(lbl_80478E20); }
s32 get_theme_lobby_type(void) {
    s32 r = get_filtered_event_theme__6TLobbyFv();
    switch (r) {
    case 12:
        r = 0;
        break;
    case 13:
        r = 8;
        break;
    }
    return r;
}

}
