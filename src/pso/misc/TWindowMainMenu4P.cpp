#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
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

struct RecoveredGlobal_802889A8_lbl_804D04F8 { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_802889A8_lbl_804D04F8_size[sizeof(RecoveredGlobal_802889A8_lbl_804D04F8) == 0x38 ? 1 : -1];

struct RecoveredGlobal_802889A8_lbl_804D0530 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_802889A8_lbl_804D0530_size[sizeof(RecoveredGlobal_802889A8_lbl_804D0530) == 0x30 ? 1 : -1];

extern "C" {
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 is_ready__10TObjPlayerFPv(void *);
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
void render__17TWindowMainMenu4PFv(void);
void run_task__17TWindowMainMenu4PFv(void* p);
void TWindowMainMenu__ct(void *);
int TWindowMainMenu__sub_80263FE0(void*);
int TWindowMainMenu__sub_802647CC(void*);
void __dl__7TObjectFPv(void *);
void __dt__15TWindowMainMenuFv(void *, int);
int close_active_submenu__15TWindowMainMenuFPv(void*);
M2C_UNK close_and_clear_flags__15TWindowMainMenuFPv();
int show_child_window__15TWindowMainMenuFPv(void*);

void TWindowMainMenu4P__vt7(void* p) { if (close_active_submenu__15TWindowMainMenuFPv(p) != 0) { show_child_window__15TWindowMainMenuFPv(p); } }

void TWindowMainMenu4P__vt6(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4C) & 1) {
        close_and_clear_flags__15TWindowMainMenuFPv();
    }
}

void TWindowMainMenu4P__vt4(u8 *arg0) {
    u8 *temp_r3;
    if (!(M2C_FIELD(arg0, s32 *, 0x4C) & 1)) {
        temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u32 *, 0x54)));
        if (temp_r3 != NULL) {
            if (is_ready__10TObjPlayerFPv(temp_r3) != 0) {
                open__15TWindowMainMenuFPvi(arg0, (s32) &lbl_804D0530.value);
            } else {
                open__15TWindowMainMenuFPvi(arg0, (s32) &lbl_804D04F8.value);
            }
            ((VObj_18_f8ef8c *)(arg0))->m5();
        }
    }
}

void render__17TWindowMainMenu4PFv(void) {  }
void run_task__17TWindowMainMenu4PFv(void* p) { TWindowMainMenu__sub_802647CC(p); TWindowMainMenu__sub_80263FE0(p); }

extern M2C_UNK __vt__17TWindowMainMenu4P[];

void *__dt__17TWindowMainMenu4PFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowMainMenu4P;
        __dt__15TWindowMainMenuFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__17TWindowMainMenu4P[];
extern void *lbl_805D3AF0;

void *TWindowMainMenu4P__ct(void *arg0) {
    TWindowMainMenu__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowMainMenu4P;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3AF0;
    return arg0;
}

}
