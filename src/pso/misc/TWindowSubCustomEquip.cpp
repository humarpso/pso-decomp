#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_rotate_anim__21TWindowSubCustomEquipFPv(void *arg0);
void handle_cancel__21TWindowSubCustomEquipFPv(void *arg0);
void handle_decide__21TWindowSubCustomEquipFPv(void *arg0);
s32 is_selected__21TWindowSubCustomEquipFPv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubCustomEquip__sub_80276A38(void *, s32, M2C_UNK);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

void update_rotate_anim__21TWindowSubCustomEquipFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r4;

    var_r4 = 0xB200;
    if ((s8) M2C_FIELD(arg0, u8 *, 0x62) > 0) {
        var_r4 = 0x13200;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x68);
    if (var_r4 != temp_r3) {
        if ((s32) (u16) (var_r4 - temp_r3) < 0xC00) {
            M2C_FIELD(arg0, s32 *, 0x68) = var_r4;
        } else {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (temp_r3 + 0xC00);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) & 0x8000) {
        M2C_FIELD(arg0, s8 *, 0x64) = 0;
        M2C_FIELD(arg0, s8 *, 0x65) = 1;
        TWindowSubCustomEquip__sub_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68), 9);
        TWindowSubCustomEquip__sub_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68) + 0x8000, 0);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x64) = 1;
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
    TWindowSubCustomEquip__sub_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68) + 0x8000, 9);
    TWindowSubCustomEquip__sub_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68), 0);
}

void handle_cancel__21TWindowSubCustomEquipFPv(void *arg0) {
    if (is_selected__21TWindowSubCustomEquipFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

void handle_decide__21TWindowSubCustomEquipFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x6C), 2);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80275A88
#include "types.h"

extern "C" {

void TWindowSubCustomEquip__sub_80275A88(void);

void TWindowSubCustomEquip__sub_80275A88(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80275D9C
#include "types.h"

extern "C" {

int is_active__22TWindowSubCustomSelectFPv(void* p);
int fn_80275D90(void* p);
int is_selected__21TWindowSubCustomEquipFPv(void* p);
int TWindowSubCustomEquip__sub_80275DA8(void* p);

int is_selected__21TWindowSubCustomEquipFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubCustomEquip__sub_80275DA8(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802760AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_type_valid__21TWindowSubCustomEquipFPv(void *arg0);

s32 is_type_valid__21TWindowSubCustomEquipFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x62);
    switch ((s8) temp_r0) {
    case 0:
        return 0;
    default:
    case 1:
        return 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80276114
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_cursor_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
s32 set_effect_enabled__10TObjPlayerFii(M2C_UNK, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 TWindowActionPalette__sub_801C1DE0(s32, s32, s32);
s32 is_type_valid__21TWindowSubCustomEquipFPv(void *, u8);
s32 TWindowSubCustomEquip__sub_802760DC(void *, u8);

void get_cursor_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r29;

    if ((temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20)), (temp_r3 == 0U)) || (temp_r29 = set_effect_enabled__10TObjPlayerFii(temp_r3, 0), ((temp_r29 == 0) != 0))) {
        M2C_FIELD(arg1, s16 *, 0) = 0;
        M2C_FIELD(arg1, s16 *, 2) = 0;
        return;
    }
    temp_r31 = is_type_valid__21TWindowSubCustomEquipFPv(arg0, M2C_FIELD(arg0, u8 *, 0x62));
    temp_r3_2 = TWindowSubCustomEquip__sub_802760DC(arg0, M2C_FIELD(arg0, u8 *, 0x61));
    M2C_FIELD(arg1, s16 *, 0) = TWindowActionPalette__sub_801C1DE0(temp_r29, temp_r31, temp_r3_2);
    M2C_FIELD(arg1, s16 *, 2) = TWindowActionPalette__sub_801C1D7C(temp_r29, temp_r31, temp_r3_2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80276528
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_relative_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);

extern const f32 lbl_805DD568;
extern const f32 lbl_805DD56C;

void set_relative_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 8) - lbl_805DD568);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 0xC) - lbl_805DD56C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80276828
#include "types.h"

extern "C" {

void reset_selection__21TWindowSubCustomEquipFPv(void* p);
int TWindowSubCustomEquip__sub_8027654C(void*, void*);
int TWindowSubCustomEquip__sub_802766C8(void*, void*);

void reset_selection__21TWindowSubCustomEquipFPv(void* p) { TWindowSubCustomEquip__sub_802766C8(p, (void*)9); TWindowSubCustomEquip__sub_802766C8(p, (void*)0); TWindowSubCustomEquip__sub_8027654C(p, (void*)9); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80277158
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__21TWindowSubCustomEquipFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);

extern M2C_UNK __vt__21TWindowSubCustomEquip[];

void *__dt__21TWindowSubCustomEquipFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TWindowSubCustomEquip;
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x6C), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80277290
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_equip_index__21TWindowSubCustomEquipFPv(void *arg0);

s32 calc_equip_index__21TWindowSubCustomEquipFPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78) + (((s8) M2C_FIELD(arg0, u8 *, 0x70) + ((s8) M2C_FIELD(arg0, u8 *, 0x71) * 3)) * 4);
}

}
#endif
#endif
