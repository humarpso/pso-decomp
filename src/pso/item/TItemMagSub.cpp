#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TItemMagSub__sub_801159BC(void* p);
int TItemMagSub__sub_801159A4(void* p);
int TItemMagSub__sub_801159B0(void* p);

int TItemMagSub__sub_801159A4(void* p) { return (*(u8*)((char*)p + 0x0) >> 5) & 0x1; }
int TItemMagSub__sub_801159B0(void* p) { return *(u8*)((char*)p + 0x0) & 0x7; }
int TItemMagSub__sub_801159BC(void* p) { return *(u32*)((char*)p + 0x18c) & 0x20; }

}
#else
#if PSO_CLASS_PACKAGE == 0x80110F34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 has_feed_flag__11TItemMagSubFPv(void *arg0);
s32 TLobby__sub_800822E8(s32, M2C_UNK);

u8 has_feed_flag__11TItemMagSubFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((TLobby__sub_800822E8(M2C_FIELD(arg0, s32 *, 0xF0), 4) != 0) || (TLobby__sub_800822E8(M2C_FIELD(arg0, s32 *, 0xF0), 0x10) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110F90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_mag_active__11TItemMagSubFPv(void *arg0);

s32 is_active__8TItemMagFPv(u32);

s32 is_mag_active__11TItemMagSubFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (is_active__8TItemMagFPv(M2C_FIELD(arg0, u32 *, 0xF0)) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80114524
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemMagSub__sub_80114524(void *arg0);

void TItemMagSub__sub_80114524(void *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = 0x28;
    M2C_FIELD(arg0, s8 *, 0xE) = 0x12;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801145B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stat__11TItemMagSubFPv(void *arg0);
s32 is_level_maxed__11TItemMagSubFPv();

void update_stat__11TItemMagSubFPv(void *arg0) {
    s8 temp_r3;
    s32 temp_r3_2;
    s16 temp_r3_3;
    s16 temp_r0;

    if (is_level_maxed__11TItemMagSubFPv() == 0) {
        temp_r3 = M2C_FIELD(arg0, s8 *, 0);
        if (temp_r3 & 0x10) {
            temp_r3_2 = M2C_FIELD(arg0, s16 *, 2) + M2C_FIELD(arg0, s16 *, 6);
            M2C_FIELD(arg0, s16 *, 2) = temp_r3_2;
            if (((s16) temp_r3_2 != 0) && ((s16) M2C_FIELD(arg0, s16 *, 6) < (s16) M2C_FIELD(arg0, s16 *, 2))) {
                M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg0, s16 *, 4);
            }
        } else if (temp_r3 & 8) {
            M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + (s8) M2C_FIELD(arg0, u8 *, 1));
            temp_r3_3 = M2C_FIELD(arg0, s16 *, 6);
            if (temp_r3_3 < (s16) M2C_FIELD(arg0, s16 *, 2)) {
                M2C_FIELD(arg0, s16 *, 2) = temp_r3_3;
                M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & 0xFFFFFFF7);
            }
        } else {
            M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) - (s8) M2C_FIELD(arg0, u8 *, 1));
            if ((s16) M2C_FIELD(arg0, s16 *, 2) < (s16) (temp_r3_3 = M2C_FIELD(arg0, s16 *, 4))) {
                M2C_FIELD(arg0, s16 *, 2) = temp_r3_3;
                M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) | 8);
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80114714
#include "types.h"

extern "C" {

u8 is_level_maxed__11TItemMagSubFPv(u8 *arg0);

u8 is_level_maxed__11TItemMagSubFPv(u8 *arg0) {
    return (u8) (((*arg0 & 0xE0) - 0xE0) == 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80114A30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag2__11TItemMagSubFPv(void *arg0);
M2C_UNK clear_flags64__11TItemMagSubFPvUi(void *, M2C_UNK);

void clear_flag2__11TItemMagSubFPv(void *arg0) {
    if ((u32) arg0 != 0U) {
        clear_flags64__11TItemMagSubFPvUi(arg0, 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80114A5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_stats__11TItemMagSubFPv(u8 *arg0);

M2C_UNK memset(void *, int, int);
extern const f32 TItemMagSub__data_805DABC8;

void reset_stats__11TItemMagSubFPv(u8 *arg0) {
    memset(arg0 + 0x34, 0, 0xC);
    memset(arg0 + 0x58, 0, 0xC);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TItemMagSub__data_805DABC8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80114C80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2);
f32 TBoss8Dragon__sub_803D64C0(s32);

void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2) {
    *arg1 = *arg1 + M2C_FIELD(arg2, s32 *, 0xC);
    *arg0 = M2C_FIELD(arg2, f32 *, 0) * TBoss8Dragon__sub_803D64C0(*arg1 + M2C_FIELD(arg2, s32 *, 8));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801151A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_feed_level__11TItemMagSubFPv(void *arg0);

s32 calc_feed_level__11TItemMagSubFPv(void *arg0) {
    s32 temp_r3;
    void **temp_r4_2;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_3;

    temp_r3_2 = M2C_FIELD(arg0, void **, 0x20);
    temp_r4_2 = M2C_FIELD(temp_r3_2, void ***, 0xF8);
    temp_r3 = M2C_FIELD(temp_r3_2, s32 *, 0x60);
    if (temp_r4_2 != NULL) {
        temp_r4_3 = *temp_r4_2;
        if (temp_r4_3 != NULL) {
            temp_r4 = M2C_FIELD(temp_r4_3, void **, 4);
            if (temp_r4 != NULL) {
                return temp_r3 + M2C_FIELD(temp_r4, s16 *, 4);
            }
        }
    }
    return temp_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801156D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__11TItemMagSubFPvs(void *arg0, s16 arg1);
void *TItemMagSub__vt0(void *arg0, s16 arg1);
void __dt__7TObjectFv(void *, int);
void free_to_heap__11TItemMagSubFPv(void *);

extern M2C_UNK __vt__11TItemMagSub[];

void *TItemMagSub__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TItemMagSub;
        destroy__11TItemMagSubFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049F5A0[];

void *destroy__11TItemMagSubFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F5A0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80115780
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__11TItemMagSubFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);

extern const f32 TItemMagSub__data_805DABC8;

void reset__11TItemMagSubFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0xAC, M2C_FIELD(arg0, s32 *, 0x20) + 0x2FC);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801158F0
#include "types.h"

extern "C" {

void clear_flag_64__11TItemMagSubFPv(void* p);
void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v);
int set_grow_flag__15TItemMagGrowEffFPv(void* p);
int fn_80115948(void* p);
int fn_80115954(void* p);
int set_flags64__8TItemMagFPvUi(void*, int);

void clear_flag_64__11TItemMagSubFPv(void* p) { clear_flags64__11TItemMagSubFPvUi(p, 64); }
void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x64) &= ~v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80115960
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_scaled_value__11TItemMagSubFPv(void *arg0);

extern const f64 TItemMagSub__data_8043E5C8;
extern const f32 TItemMagSub__data_805DABCC;

s32 calc_scaled_value__11TItemMagSubFPv(void *arg0) {
    return (s32) (TItemMagSub__data_805DABCC * (f32) M2C_FIELD(arg0, s16 *, 2));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803642D8
#include "types.h"

extern "C" {

void free_to_heap__11TItemMagSubFPv(void* a0);
int heap_free__5THeapFPv(void*, void*);

    extern int obj_heap;
void free_to_heap__11TItemMagSubFPv(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

}
#endif
#endif
