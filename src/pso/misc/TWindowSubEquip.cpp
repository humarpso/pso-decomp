#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_displayed_item__15TWindowSubEquipFPv(void *arg0);
void update__15TWindowSubEquipFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_slot_value__10TObjPlayerFPvi(s32, s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(s32, s32);
M2C_UNK TWindowHelpItem__sub_802558D0(s32, s32);
s32 select_cursor_entry__6TLobbyFPv(s32);

void update_displayed_item__15TWindowSubEquipFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x38));
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, s32 *, 0x30), temp_r3);
    }
}

void update__15TWindowSubEquipFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r3;
    s32 temp_r0;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x28));
    if (temp_r3 != 0) {
        temp_r0 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x34));
        if (get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, temp_r0) == 0U) {
            var_r3 = -1;
        } else {
            var_r3 = get_field_d8__10TObjPlayerFPv();
        }
        if (var_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
            M2C_FIELD(arg0, s32 *, 0x20) = var_r3;
            TWindowHelpItem__sub_802558D0(M2C_FIELD(arg0, s32 *, 0x30), var_r3);
        }
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80263B28
#include "types.h"

extern "C" {

void set_scale_f__15TWindowSubEquipFPv(void* a0);

    extern const float lbl_805DD138;
void set_scale_f__15TWindowSubEquipFPv(void* a0) { *(float*)((char*)a0 + 0x58) = lbl_805DD138; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80263B34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_submenu__15TWindowSubEquipFii(s32 arg0, s32 arg1);
M2C_UNK destroy_submenu__15TWindowMainMenuFPv();
M2C_UNK TWindowSubEquip__sub_8026417C(s32, s16);

void open_submenu__15TWindowSubEquipFii(s32 arg0, s32 arg1) {
    destroy_submenu__15TWindowMainMenuFPv();
    TWindowSubEquip__sub_8026417C(arg0, (s16) arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80275C0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__15TWindowSubEquipFPvs(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804D1160[];

void *destroy__15TWindowSubEquipFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D1160;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80277F48
#include "types.h"

extern "C" {

void render__15TWindowSubEquipFv(void);

void render__15TWindowSubEquipFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80278174
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TWindowSubEquipFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__15TWindowSubEquip[];

void *__dt__15TWindowSubEquipFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowSubEquip;
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80279044
#include "types.h"

extern "C" {

void TWindowSubEquip__sub_80279044(void* p);
int TObjPlayer__sub_80279178(void*);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void TWindowSubEquip__sub_80279044(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80279054
#include "types.h"

extern "C" {

int TShopArmorListWindow__sub_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int TObjPlayer__sub_80279178(void*);
void TWindowSubEquip__sub_80279044(void* p);

void update_window__15TWindowSubEquipFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); TObjPlayer__sub_80279178(p); TShopArmorListWindow__sub_80266CF8(p); }

}
#endif
#endif
