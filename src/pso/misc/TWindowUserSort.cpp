#include "types.h"
#include "pso/misc/TWindowUserSort.h"

struct VBase_18_f8ef8c { char pad[0x18]; };

struct VObj_18_f8ef8c : VBase_18_f8ef8c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

struct RecoveredGlobal_80288490_lbl_804D0460 { s32 value; u8 remaining[0x3C]; };
typedef char RecoveredGlobal_80288490_lbl_804D0460_size[sizeof(RecoveredGlobal_80288490_lbl_804D0460) == 0x40 ? 1 : -1];

struct RecoveredGlobal_80288490_lbl_804D04A0 { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80288490_lbl_804D04A0_size[sizeof(RecoveredGlobal_80288490_lbl_804D04A0) == 0x38 ? 1 : -1];

struct RecoveredGlobal_80288380_lbl_804D304C {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80288380___vt__15TWindowUserSort {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFl();
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
s32 get_player_by_client_id(u32);
s32 is_ready__10TObjPlayerFv(void *);
void open__15TWindowMainMenuFPvi(void *, s32);
int create_char_select_slot__17TWindowMainMenu1PFv(void*);
extern RecoveredGlobal_80288490_lbl_804D0460 lbl_804D0460;
extern RecoveredGlobal_80288490_lbl_804D04A0 lbl_804D04A0;
void TWindowMainMenu1P__vt4(u8 *arg0);
u8 * construct_base__9TWindowDDFPvPvsPv(void *, s32, s16, s32);
void fill_card_text_entries__20TWindowSubStatusDispFl(void *, s32);
extern RecoveredGlobal_80288380_lbl_804D304C lbl_804D304C;
extern s32 __vt__15TWindowUserSort[];
extern s32 TWindowUserSort__name;
u8 *TWindowUserSort__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TWindowMainMenu1P__vt5(u8 *arg0);
void TWindowMainMenu1P__vt6(void *arg0);
void TWindowMainMenu1P__vt7(void* p);
void *__dt__15TWindowUserSortFv(void *arg0, s16 arg1);
s32 TCameraCtrl__sub_800695A0(void *);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);
int close_active_submenu__15TWindowMainMenuFPv(void*);
s32 close_and_clear_flags__15TWindowMainMenuFPv();
int create_char_select_slot__17TWindowMainMenu1PFv(void*);
void destroy_window_base__9TWindowDDFs(void *, int);
int initialize_subwindow__9TWindowDDFv(void*);
int update_fade__17TWindowSubComCardFv(void*);

void render__15TWindowUserSortFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFl();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void TWindowUserSort::run_task() { initialize_subwindow__9TWindowDDFv(this); update_fade__17TWindowSubComCardFv(this); update_window_entry_list(this, (char*)this + 0x24); }

extern s32 __vt__15TWindowUserSort[];

void *__dt__15TWindowUserSortFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TWindowUserSort;
        destroy_window_base__9TWindowDDFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80288380_lbl_804D304C_size[sizeof(RecoveredGlobal_80288380_lbl_804D304C) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80288380___vt__15TWindowUserSort_size[sizeof(RecoveredGlobal_80288380___vt__15TWindowUserSort) == 0x18 ? 1 : -1];
u8 *TWindowUserSort__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_base__9TWindowDDFPvPvsPv(arg0, (s32) &lbl_804D304C.value, 4, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80288380___vt__15TWindowUserSort *)&__vt__15TWindowUserSort).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowUserSort__name;
    *(s32 *)((s8 *)arg0 + 0x60) = arg2;
    fill_card_text_entries__20TWindowSubStatusDispFl(arg0 + 0x24, arg2);
    return arg0;
}

void TWindowMainMenu1P__vt7(void* p) { if (close_active_submenu__15TWindowMainMenuFPv(p) != 0) { create_char_select_slot__17TWindowMainMenu1PFv(p); } }

void TWindowMainMenu1P__vt5(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = *(s32 *)((s8 *)arg0 + 0x4C);
    if (!(temp_r3 & 2)) {
        *(s32 *)((s8 *)arg0 + 0x4C) = (s32) (temp_r3 | 2);
        TCameraCtrl__sub_800695A0(arg0 + 0x64);
    }
}

void TWindowMainMenu1P__vt6(void *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x4C) & 1) {
        close_and_clear_flags__15TWindowMainMenuFPv();
    }
}
void TWindowMainMenu1P__vt4(u8 *arg0) {
    u8 *temp_r3;
    if (!(*(s32 *)((s8 *)arg0 + 0x4C) & 1)) {
        temp_r3 = (u8 *)(get_player_by_client_id(*(u32 *)((s8 *)arg0 + 0x54)));
        if (temp_r3 != NULL) {
            if (is_ready__10TObjPlayerFv(temp_r3) != 0) {
                open__15TWindowMainMenuFPvi(arg0, (s32) &lbl_804D04A0.value);
            } else {
                open__15TWindowMainMenuFPvi(arg0, (s32) &lbl_804D0460.value);
            }
            create_char_select_slot__17TWindowMainMenu1PFv((void*)(arg0));
            ((VObj_18_f8ef8c *)(arg0))->m5();
        }
    }
}

}
