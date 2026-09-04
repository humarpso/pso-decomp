#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_decrement__18TWindowInputNumberFPv(void *arg0);
void move_cursor_next__18TWindowInputNumberFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void handle_decrement__18TWindowInputNumberFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x63) = (u8) (M2C_FIELD(arg0, u8 *, 0x63) - 1);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x63) < 0) {
        if (M2C_FIELD(arg0, u16 *, 0x60) & 1) {
            M2C_FIELD(arg0, u8 *, 0x63) = 0U;
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x63) = (u8) (M2C_FIELD(arg0, u8 *, 0x62) - 1);
    }
}

void move_cursor_next__18TWindowInputNumberFPv(void *arg0) {
    u8 temp_r4;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x63) = (u8) (M2C_FIELD(arg0, u8 *, 0x63) + 1);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x63) >= (s8) (temp_r4 = M2C_FIELD(arg0, u8 *, 0x62))) {
        if (M2C_FIELD(arg0, u16 *, 0x60) & 1) {
            M2C_FIELD(arg0, u8 *, 0x63) = (u8) (temp_r4 - 1);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x63) = 0U;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80211608
#include "types.h"

extern "C" {

int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int TAdSinglePlyChrSelectGC__sub_80211584(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TShopWindowBase__sub_802115F0(void);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);

int is_confirmed__18TWindowInputNumberFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 1) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255E3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 is_confirmed__18TWindowInputNumberFPv();
s32 TWindowHelpItem__sub_80255DDC(void* p);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

void mark_confirmed__18TWindowInputNumberFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 8) && (is_confirmed__18TWindowInputNumberFPv() == 0)) {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 4);
    }
}
void confirm_input__18TWindowInputNumberFPv(void *arg0) {
    s32 temp_r3;
    u32 temp;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x6C);
    if ((temp_r3 < (s32) M2C_FIELD(arg0, s32 *, 0x64)) || (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x68))) {
        TBoss3Volopt__sub_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 2);
    temp = (u32) M2C_FIELD(arg0, u32 *, 0x70);
    if (temp != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(temp, 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255F20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__18TWindowInputNumberFPv(void *arg0);
void update_value__18TWindowInputNumberFPv(void *arg0);
M2C_UNK TWindowInputNumber__sub_802561E8(void *);
M2C_UNK TWindowInputNumber__sub_802562F0(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_8044EE0C[];

void update__18TWindowInputNumberFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) - lbl_8044EE0C[(s8) M2C_FIELD(arg0, u8 *, 0x63)]);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) < (s32) M2C_FIELD(arg0, s32 *, 0x64)) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x68);
    }
    TWindowInputNumber__sub_802562F0(arg0);
    TWindowInputNumber__sub_802561E8(arg0);
}

extern M2C_UNK lbl_8044EE0C[];

void update_value__18TWindowInputNumberFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + lbl_8044EE0C[(s8) M2C_FIELD(arg0, u8 *, 0x63)]);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) > (s32) M2C_FIELD(arg0, s32 *, 0x68)) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x64);
    }
    TWindowInputNumber__sub_802562F0(arg0);
    TWindowInputNumber__sub_802561E8(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80256138
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_value__18TWindowInputNumberFPvf(void *arg0, f32 farg0);
M2C_UNK TWindowInputNumber__sub_802561E8(void *);
M2C_UNK save_position__17TWindowSubComCardFPv();

void set_value__18TWindowInputNumberFPvf(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = farg0;
    save_position__17TWindowSubComCardFPv();
    TWindowInputNumber__sub_802561E8(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80256170
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__18TWindowInputNumberFPvi(void *arg0, s32 arg1);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);

extern const f32 lbl_805DCE18;

struct WindowNum { char pad[0x70]; };
void create__18TWindowInputNumberFPvi(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) {
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
        if (var_r0 != 0U) {
            u32 saved = var_r0;
            var_r0 = TWindowSubStatusDisp__sub_802880BC(saved, arg1, M2C_FIELD(arg0, s16 *, 0x20));
        }
        M2C_FIELD(arg0, u32 *, 0x70) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x40);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DCE18);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80256618
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__18TWindowInputNumberFv(u8 *arg0);
s32 is_confirmed__18TWindowInputNumberFPv(void *);
M2C_UNK TWindowInputNumber__sub_802563A0(void *, int, int, int);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(void *, int);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);

void render__18TWindowInputNumberFv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80244C0C((void *) (arg0), (void *) (arg0 + 0x74));
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    temp_r31 = is_confirmed__18TWindowInputNumberFPv((void *) (arg0));
    TWindowInputNumber__sub_802563A0((void *) (arg0), (int) (temp_r3), (int) (get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) M2C_FIELD(arg0, s8 *, 0x63))), (int) (temp_r31));
    {
        void *temp_ptr = (void *) M2C_FIELD(arg0, u32 *, 0x70);
        if (temp_ptr != NULL) {
            forward_render__20TWindowSubStatusDispFPv(temp_ptr, (int) (temp_r3));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802569F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TWindowInputNumberFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);

extern M2C_UNK __vt__18TWindowInputNumber[];

void *__dt__18TWindowInputNumberFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowInputNumber;
        if (M2C_FIELD(arg0, void **, 0x70) != NULL) { destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x70), 1); }
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80256B4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_locked__18TWindowInputNumberFPvi(void *arg0, s32 arg1);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, M2C_UNK, M2C_UNK, M2C_UNK);

extern s8 lbl_8050E208[];

s32 is_locked__18TWindowInputNumberFPvi(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x60) & 0x20) {
        return 0;
    }
    return apply_choice__20TWindowChoiceSettingFiiii(lbl_8050E208 + 0x160, arg1, 6, 1);
}

}
#endif
#endif
