#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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

}
