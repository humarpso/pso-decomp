#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_f8ef8c { char pad[0x18]; };

struct VObj_18_f8ef8c : VBase_18_f8ef8c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5();
};

struct RecoveredGlobal_80288490_lbl_804D0460 { M2C_UNK value; u8 remaining[0x3C]; };
typedef char RecoveredGlobal_80288490_lbl_804D0460_size[sizeof(RecoveredGlobal_80288490_lbl_804D0460) == 0x40 ? 1 : -1];

struct RecoveredGlobal_80288490_lbl_804D04A0 { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80288490_lbl_804D04A0_size[sizeof(RecoveredGlobal_80288490_lbl_804D04A0) == 0x38 ? 1 : -1];

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 is_ready__10TObjPlayerFPv(void *);
void open__15TWindowMainMenuFPvi(void *, s32);
int create_char_select_slot__17TWindowMainMenu1PFPv(void*);
extern RecoveredGlobal_80288490_lbl_804D0460 lbl_804D0460;
extern RecoveredGlobal_80288490_lbl_804D04A0 lbl_804D04A0;
void TWindowMainMenu1P__vt4(u8 *arg0);
}

extern "C" {

void TWindowMainMenu1P__vt5(u8 *arg0);
void TWindowMainMenu1P__vt6(void *arg0);
void TWindowMainMenu1P__vt7(void* p);
void *__dt__15TWindowUserSortFv(void *arg0, s16 arg1);
void run_task__15TWindowUserSortFv(void* p);
M2C_UNK TCameraCtrl__sub_800695A0(void *);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
void __dl__7TObjectFPv(void *);
int close_active_submenu__15TWindowMainMenuFPv(void*);
M2C_UNK close_and_clear_flags__15TWindowMainMenuFPv();
int create_char_select_slot__17TWindowMainMenu1PFPv(void*);
void destroy_window_base__9TWindowDDFPvs(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

void render__15TWindowUserSortFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__15TWindowUserSortFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

extern M2C_UNK __vt__15TWindowUserSort[];

void *__dt__15TWindowUserSortFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowUserSort;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TWindowMainMenu1P__vt7(void* p) { if (close_active_submenu__15TWindowMainMenuFPv(p) != 0) { create_char_select_slot__17TWindowMainMenu1PFPv(p); } }

void TWindowMainMenu1P__vt5(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (!(temp_r3 & 2)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r3 | 2);
        TCameraCtrl__sub_800695A0(arg0 + 0x64);
    }
}

void TWindowMainMenu1P__vt6(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4C) & 1) {
        close_and_clear_flags__15TWindowMainMenuFPv();
    }
}
void TWindowMainMenu1P__vt4(u8 *arg0) {
    u8 *temp_r3;
    if (!(M2C_FIELD(arg0, s32 *, 0x4C) & 1)) {
        temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u32 *, 0x54)));
        if (temp_r3 != NULL) {
            if (is_ready__10TObjPlayerFPv(temp_r3) != 0) {
                open__15TWindowMainMenuFPvi(arg0, (s32) &lbl_804D04A0.value);
            } else {
                open__15TWindowMainMenuFPvi(arg0, (s32) &lbl_804D0460.value);
            }
            create_char_select_slot__17TWindowMainMenu1PFPv((void*)(arg0));
            ((VObj_18_f8ef8c *)(arg0))->m5();
        }
    }
}

}
