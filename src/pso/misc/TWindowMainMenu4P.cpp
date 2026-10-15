#include "types.h"
#include "pso/misc/TWindowMainMenu4P.h"

struct VBase_18_f8ef8c { char pad[0x18]; };

struct VObj_18_f8ef8c : VBase_18_f8ef8c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

struct RecoveredGlobal_802889A8_lbl_804D04F8 { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_802889A8_lbl_804D04F8_size[sizeof(RecoveredGlobal_802889A8_lbl_804D04F8) == 0x38 ? 1 : -1];

struct RecoveredGlobal_802889A8_lbl_804D0530 { s32 value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_802889A8_lbl_804D0530_size[sizeof(RecoveredGlobal_802889A8_lbl_804D0530) == 0x30 ? 1 : -1];

extern "C" {
s32 get_player_by_client_id(u32);
s32 is_ready__10TObjPlayerFv(void *);
void open__15TWindowMainMenuFPvi(void *, s32);
extern RecoveredGlobal_802889A8_lbl_804D04F8 lbl_804D04F8;
extern RecoveredGlobal_802889A8_lbl_804D0530 lbl_804D0530;
void TWindowMainMenu4P__vt4(u8 *arg0);
}

extern "C" {

void *TWindowMainMenu4P__ct(void *arg0);
void TWindowMainMenu4P__vt6(void *arg0);
void TWindowMainMenu4P__vt7(void* p);
void *__dt__17TWindowMainMenu4PFv(void *arg0, s16 arg1);
void TWindowMainMenu__ct(void *);
int TWindowMainMenu__sub_80263FE0(void*);
int handle_menu_selection__15TWindowMainMenuFPv(void*);
void __dl__7TObjectFPv(void *);
void __dt__15TWindowMainMenuFv(void *, int);
int close_active_submenu__15TWindowMainMenuFPv(void*);
s32 close_and_clear_flags__15TWindowMainMenuFPv();
int show_child_window__15TWindowMainMenuFv(void*);

void TWindowMainMenu4P__vt7(void* p) { if (close_active_submenu__15TWindowMainMenuFPv(p) != 0) { show_child_window__15TWindowMainMenuFv(p); } }

void TWindowMainMenu4P__vt6(void *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x4C) & 1) {
        close_and_clear_flags__15TWindowMainMenuFPv();
    }
}

void TWindowMainMenu4P__vt4(u8 *arg0) {
    u8 *temp_r3;
    if (!(*(s32 *)((s8 *)arg0 + 0x4C) & 1)) {
        temp_r3 = (u8 *)(get_player_by_client_id(*(u32 *)((s8 *)arg0 + 0x54)));
        if (temp_r3 != NULL) {
            if (is_ready__10TObjPlayerFv(temp_r3) != 0) {
                open__15TWindowMainMenuFPvi(arg0, (s32) &lbl_804D0530.value);
            } else {
                open__15TWindowMainMenuFPvi(arg0, (s32) &lbl_804D04F8.value);
            }
            ((VObj_18_f8ef8c *)(arg0))->m5();
        }
    }
}

void TWindowMainMenu4P::render() {  }
void TWindowMainMenu4P::run_task() { handle_menu_selection__15TWindowMainMenuFPv(this); TWindowMainMenu__sub_80263FE0(this); }

extern s32 __vt__17TWindowMainMenu4P[];

void *__dt__17TWindowMainMenu4PFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowMainMenu4P;
        __dt__15TWindowMainMenuFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__17TWindowMainMenu4P[];
extern void *TWindowMainMenu4P__name;

void *TWindowMainMenu4P__ct(void *arg0) {
    TWindowMainMenu__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowMainMenu4P;
    *(void **)((s8 *)arg0 + 0x0) = TWindowMainMenu4P__name;
    return arg0;
}

}
