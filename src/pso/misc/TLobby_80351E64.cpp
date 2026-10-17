#include "types.h"
#include "pso/misc/TUnk_804F0EA8.h"
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_80351FDC_lbl_804F0EA8 { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80351FDC_lbl_804F0EA8_size[sizeof(RecoveredGlobal_80351FDC_lbl_804F0EA8) == 0x18 ? 1 : -1];

struct L_80351EAC { u8 pad[0x1C]; u32 flags; s32 mode; };

extern "C" {
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
s32 queue_destruction__7TObjectFv(void *);
extern const s32 lbl_804F0EA8[];
extern void *lobby_event_theme_controller;
s32 TLobby__sub_803DA16C(void*);
extern int lobby_main_texture_gvm;
void TLobby__sub_8035202C(void);
int load_gvm_texture_file(void*);
    extern unsigned char lbl_80478E20[];
void load_obj_lobby_main(void);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 *tl_00;
u8 *TLobby__sub_80351FDC(u8 *arg0);
s32 get_theme_lobby_type(void);
void TLobby__sub_80351DF8(void *, s32);
void TLobby__sub_80351F3C(void);
void *__nw__7TObjectFUl(int);

s32 TLobby::is_connected() {
    if ((void *) lobby_event_theme_controller != NULL) {
        return ((u32) *(u32 *)((s8 *)lobby_event_theme_controller + 0x1C) >> 2U) & 1;
    }
    return 0;
}

s32 TLobby::is_lobby_obj_active() {
    if ((void *) lobby_event_theme_controller != NULL) {
        return ((u32) *(u32 *)((s8 *)lobby_event_theme_controller + 0x1C) >> 1U) & 1;
    }
    return 0;
}

int TLobby::get_lobby_type() {  return lobby_main_texture_gvm; }

void TUnk_804F0EA8::run_task() {
    L_80351EAC *arg0 = (L_80351EAC *)this;
    s32 mode = TLobby::get_filtered_event_theme();
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
void *TUnk_804F0EA8::destroy_and_clear_instance(s16 arg1) {
    if (this != NULL) {
        *(const s32 **)((s8 *)this + 0x18) = lbl_804F0EA8;
        queue_destruction__7TObjectFv(this);
        (*(s32 *)&lobby_event_theme_controller) = 0;
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

u8 *TLobby__sub_80351FDC(u8 *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_00);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80351FDC_lbl_804F0EA8 *)&lbl_804F0EA8).value;
    *(s32 *)((s8 *)arg0 + 0x20) = TLobby::get_filtered_event_theme();
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

void TLobby__sub_8035202C(void) {
    if ((u32) (*(u32 *)&lobby_main_texture_gvm) != 0U) {
        TLobby__sub_803DA16C((void*)(*(u32 *)&lobby_main_texture_gvm));
        TAdSinglePlyChrSelectGC::safe_free((*(u32 *)&lobby_main_texture_gvm));
        (*(u32 *)&lobby_main_texture_gvm) = 0U;
    }
}
void load_obj_lobby_main(void) { lobby_main_texture_gvm = load_gvm_texture_file(lbl_80478E20); }
s32 get_theme_lobby_type(void) {
    s32 r = TLobby::get_filtered_event_theme();
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
