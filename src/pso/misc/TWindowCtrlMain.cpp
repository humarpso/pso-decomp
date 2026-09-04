#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int run_task__15TWindowCtrlMainFv(void* p);
void render__15TWindowCtrlMainFv(void* p);
int TWindowCtrlMain__sub_8024CE24(void);
int TCameraCtrl__sub_80068EF0(void);
int TCameraCtrl__sub_80069024(void);
int reset_transform_state__10TObjPlayerFv(void*);
int begin_effect_render__13TParticleCtrlFv(void);
int end_effect_render__13TParticleCtrlFv(void);
int update_com_card__9TWindowDDFPv(void*);
int render_nodes__7TObjectFv(void);

void render__15TWindowCtrlMainFv(void* p) { reset_transform_state__10TObjPlayerFv(p); begin_effect_render__13TParticleCtrlFv(); TCameraCtrl__sub_80069024(); TWindowCtrlMain__sub_8024CE24(); render_nodes__7TObjectFv(); TCameraCtrl__sub_80068EF0(); end_effect_render__13TParticleCtrlFv(); }
int run_task__15TWindowCtrlMainFv(void* p) { return update_com_card__9TWindowDDFPv(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x800FC91C
#include "types.h"

extern "C" {

int get_instance__15TWindowCtrlMainFv(void);

    extern int TWindowCtrlMain__data_805D6404;
int get_instance__15TWindowCtrlMainFv(void) {  return TWindowCtrlMain__data_805D6404; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FC924
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_card_status__15TWindowCtrlMainFi(s32 arg0);
M2C_UNK fn_800FCCC8(s32, s32);
s32 get_card_status_bits__20TWindowShortListCtrlFv();

void advance_card_status__15TWindowCtrlMainFi(s32 arg0) {
    s32 var_r4;

    var_r4 = get_card_status_bits__20TWindowShortListCtrlFv() + 1;
    if (var_r4 >= 5) {
        var_r4 = 0;
    }
    fn_800FCCC8(arg0, var_r4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024674C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_window__15TWindowCtrlMainFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D63F0;

void free_window__15TWindowCtrlMainFv(void) {
    if ((u32) lbl_805D63F0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D63F0);
        lbl_805D63F0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C820
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_8024C820 {
    char pad[0x18];
    virtual void m0(int);
};

extern "C" {

void release_ptr__15TWindowCtrlMainFPv(void **arg0);

void release_ptr__15TWindowCtrlMainFPv(void **arg0) {
    VObj_8024C820 *obj = (VObj_8024C820 *)*arg0;
    if (obj) {
        if (obj) {
            obj->m0(1);
        }
        *arg0 = NULL;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024C874
#include "types.h"

extern "C" {

void init_fields__15TWindowCtrlMainFPv(void* a0);

    extern const float TWindowCtrlMain__data_805DCC18;
    extern const float TWindowCtrlMain__data_805DCC1C;
    extern const float TWindowCtrlMain__data_805DCC20;
void init_fields__15TWindowCtrlMainFPv(void* a0) { *(int*)((char*)a0 + 0x0) = 0; *(int*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0x8) = TWindowCtrlMain__data_805DCC18; *(float*)((char*)a0 + 0xc) = TWindowCtrlMain__data_805DCC18; *(float*)((char*)a0 + 0x10) = TWindowCtrlMain__data_805DCC18; *(float*)((char*)a0 + 0x14) = TWindowCtrlMain__data_805DCC1C; *(float*)((char*)a0 + 0x18) = TWindowCtrlMain__data_805DCC20; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024CB74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_scale__15TWindowCtrlMainFv(void);

extern f32 lbl_805D6418;

f32 get_scale__15TWindowCtrlMainFv(void) {
    return lbl_805D6418;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024CB7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrlMain__sub_8024CB7C(void);
void TWindowCtrlMain__sub_8024CB8C(void);
f32 get_field_18__15TWindowCtrlMainFv(void);
f32 get_ctrl_field14__15TWindowCtrlMainFv(void);
f32 get_field10__15TWindowCtrlMainFv(void);
f32 get_position_z__15TWindowCtrlMainFv(void);
void set_field18__15TWindowCtrlMainFf(f32 farg0);
void set_depth__15TWindowCtrlMainFf(f32 farg0);
void *TWindowCtrlMain__sub_8024CC8C();

    extern int TWindowCtrlMain__data_805D6400;
void TWindowCtrlMain__sub_8024CB7C(void) { TWindowCtrlMain__data_805D6400 = (TWindowCtrlMain__data_805D6400 | 0x1); }

    extern int TWindowCtrlMain__data_805D6400;
void TWindowCtrlMain__sub_8024CB8C(void) { TWindowCtrlMain__data_805D6400 = (TWindowCtrlMain__data_805D6400 & 0xfffffffe); }

f32 get_field_18__15TWindowCtrlMainFv(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0x18);
}

f32 get_ctrl_field14__15TWindowCtrlMainFv(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0x14);
}

f32 get_field10__15TWindowCtrlMainFv(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0x10);
}

f32 get_position_z__15TWindowCtrlMainFv(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0xC);
}

void set_field18__15TWindowCtrlMainFf(f32 farg0) {
    M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0x18) = farg0;
}

void set_depth__15TWindowCtrlMainFf(f32 farg0) {
    M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0xC) = farg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024CD5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowCtrlMain__sub_8024CD5C(void);
void set_value__15TWindowCtrlMainFii(s32 arg0, s32 arg1);
int TWindowCtrlMain__sub_8024CDB0(void* p);
void * TWindowCtrlMain__sub_8024CC8C(void);
int TWindowCtrlMain__sub_8024CDD0(void*);

s32 TWindowCtrlMain__sub_8024CD5C(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), s32 *, 4);
}
void set_value__15TWindowCtrlMainFii(s32 arg0, s32 arg1) {
    M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), s32 *, 4) = arg1;
}
int TWindowCtrlMain__sub_8024CDB0(void* p) { return TWindowCtrlMain__sub_8024CDD0(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024D838
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowMainMenu__sub_8024E3D4(void *);
s32 TWindowMainMenu__sub_8024E3E0(void *);
int TWindowCtrlMain__sub_8024D838(void);
void TWindowCtrlMain__sub_8024D85C(void* p);
void update_child_2c__15TWindowCtrlMainFPv(void* p);
void TWindowCtrlMain__sub_8024D8A8(void* p);
void update_field28__15TWindowCtrlMainFPv(void* p);
void free_member__15TWindowCtrlMainFPv(void* p);
int fn_802437C4(void*);
int TWindowCtrlMain__sub_8024D7C0(void*);
int open_submenu__15TWindowSubEquipFii(void*);
int try_open_battle_menu__15TWindowMainMenuFPvs(void*);
int send_and_handle__6TLobbyFPvii(void*);

int TWindowCtrlMain__sub_8024D838(void) { return TWindowCtrlMain__sub_8024D7C0((void*)(0)); }
void TWindowCtrlMain__sub_8024D85C(void* p) { *(s16*)((char*)p + 0x20) = 60; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024D87C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowMainMenu__sub_8024E3D4(void *);
s32 TWindowMainMenu__sub_8024E3E0(void *);
int TWindowCtrlMain__sub_8024D838(void);
void TWindowCtrlMain__sub_8024D85C(void* p);
void update_child_2c__15TWindowCtrlMainFPv(void* p);
void TWindowCtrlMain__sub_8024D8A8(void* p);
void update_field28__15TWindowCtrlMainFPv(void* p);
void free_member__15TWindowCtrlMainFPv(void* p);
int fn_802437C4(void*);
int TWindowCtrlMain__sub_8024D7C0(void*);
int open_submenu__15TWindowSubEquipFii(void*);
int try_open_battle_menu__15TWindowMainMenuFPvs(void*);
int send_and_handle__6TLobbyFPvii(void*);

void update_child_2c__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) send_and_handle__6TLobbyFPvii(m); }
void TWindowCtrlMain__sub_8024D8A8(void* p) { void* m = *(void**)((char*)p + 0x34); if (m) fn_802437C4(m); }
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
#endif
#if PSO_CLASS_PACKAGE == 0x8024EEF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_keyboard_soft__15TWindowCtrlMainFv(void);
void free_singleton__19TWindowKeyBoardSoftFUis(void*, int);

extern u32 lbl_805D6420;

void free_keyboard_soft__15TWindowCtrlMainFv(void) {
    if ((u32) lbl_805D6420 != 0U) {
        free_singleton__19TWindowKeyBoardSoftFUis((void*)lbl_805D6420, 1);
        lbl_805D6420 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024EF30
#include "types.h"

extern "C" {

void TWindowCtrlMain__sub_8024EF30(void);

    extern int lbl_805D6420;
void TWindowCtrlMain__sub_8024EF30(void) { lbl_805D6420 = 0; }

}
#endif
#endif
