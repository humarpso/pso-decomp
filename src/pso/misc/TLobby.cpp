#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int render__6TLobbyFv(void* p);

int get_instance__15TAdPlayerLoadGCFv(void*);

int render__6TLobbyFv(void* p) { return get_instance__15TAdPlayerLoadGCFv(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80019E24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_item_loader__6TLobbyFv(void);
void __dt__9TItemLoadFPvs(void*, int);

extern s32 lbl_805D49D8;
extern u32 lbl_805D49DC;

void free_item_loader__6TLobbyFv(void) {
    if ((u32) lbl_805D49DC != 0U) {
        __dt__9TItemLoadFPvs((void*)lbl_805D49DC, 1);
        lbl_805D49DC = 0U;
        lbl_805D49D8 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001D6A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_or_handle_packet__6TLobbyFPvPvPvPvUi(void *arg0, void *arg1, void *arg2, void *arg3, u32 arg4);
M2C_UNK TLobby__sub_8001D568(M2C_UNK, s32);
M2C_UNK TLobby__sub_8001D600(M2C_UNK, void *, s32);

void send_or_handle_packet__6TLobbyFPvPvPvPvUi(void *arg0, void *arg1, void *arg2, void *arg3, u32 arg4) {
    if (arg4 == 0U) {
        TLobby__sub_8001D600(0, arg1, M2C_FIELD(arg2, s32 *, 8));
        return;
    }
    TLobby__sub_8001D568(0, M2C_FIELD(arg1, s32 *, 8));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001D8D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 *free_and_delete__6TLobbyFPvs(u32 *arg0, s16 arg1);
M2C_UNK __dl__FPv(u32 *);
M2C_UNK xfree__FPv(u32);

u32 *free_and_delete__6TLobbyFPvs(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            xfree__FPv(*arg0);
            *arg0 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001D934
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init_memory_pool__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
u8 *fn_803DE864(s32, M2C_UNK);

u8 *init_memory_pool__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r5;

    M2C_FIELD(arg0, void **, 0) = fn_803DE864(arg3, 0x10);
    if ((void *) M2C_FIELD(arg0, void **, 0) != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = arg3;
        temp_r4 = (arg2 + 0x1F) & 0xFFFFFFE0;
        M2C_FIELD(arg0, s32 *, 8) = temp_r4;
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0));
        M2C_FIELD(arg0, void **, 0x2C) = temp_r3;
        temp_r5 = temp_r3 + 0x10;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), void **, 0) = temp_r5;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 4) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 8) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 0xC) = 0;
        M2C_FIELD(temp_r5, s32 *, 0) = 0;
        M2C_FIELD(temp_r5, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r5, s32 *, 8) = arg1;
        M2C_FIELD(temp_r5, s32 *, 0xC) = temp_r4;
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001D9E8
#include "types.h"

extern "C" {

void TLobby__sub_8001D9E8(void* p);

void TLobby__sub_8001D9E8(void* p) { *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0xc) = 0; *(s32*)((char*)p + 0x8) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DA88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_card_window_area__6TLobbyFv(void);
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);

s32 get_card_window_area__6TLobbyFv(void) {
    return get_card_window__17TWindowSubComCardFUi(0xFFFF) + 0x2050;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DB44
#include "types.h"

extern "C" {

int get_flag_bit0__6TLobbyFv(void);

    extern int TLobby__data_805D4A98;
int get_flag_bit0__6TLobbyFv(void) {  return (TLobby__data_805D4A98 & 0x1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DB50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_flag_bit0__6TLobbyFi(s32 arg0);
s32 get_flag_bit0__6TLobbyFv(s32);

extern s32 TLobby__data_805D4A98;

s32 set_flag_bit0__6TLobbyFi(s32 arg0) {
    s32 var_r3;
    s32 ret;

    ret = get_flag_bit0__6TLobbyFv(arg0);
    if (ret == arg0) {
        return 0;
    }
    var_r3 = TLobby__data_805D4A98 & 0xFFFFFFFE;
    if (arg0 != 0) {
        var_r3 = TLobby__data_805D4A98 | 1;
    }
    TLobby__data_805D4A98 = var_r3;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DBA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_active__6TLobbyFv(void);
s8 *get_card_window_area__6TLobbyFv();

s32 is_active__6TLobbyFv(void) {
    return *get_card_window_area__6TLobbyFv() == 0 ? 0 : 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DBE4
#include "types.h"

extern "C" {

int forward_8001DBD8__6TLobbyFPv(void* p);
int TLobby__sub_8001DC04(void* p);
int TLobby__sub_8001DBD8(void*);

int forward_8001DBD8__6TLobbyFPv(void* p) { return TLobby__sub_8001DBD8(p); }
int TLobby__sub_8001DC04(void* p) { return TLobby__sub_8001DBD8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DE08
#include "types.h"

extern "C" {

void broadcast__6TLobbyFPv(void* a0);
int broadcast_to_players__6TLobbyFii(void*, void*);

    extern int TLobby__data_805D4ABC;
void broadcast__6TLobbyFPv(void* a0) { broadcast_to_players__6TLobbyFii((void*)(TLobby__data_805D4ABC), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DE30
#include "types.h"

extern "C" {

void TLobby__sub_8001DE30(void* a0);
int TLobby__sub_8001DF58(void*, void*);

    extern int TLobby__data_805D4ABC;
void TLobby__sub_8001DE30(void* a0) { TLobby__sub_8001DF58((void*)(TLobby__data_805D4ABC), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DE58
#include "types.h"

extern "C" {

void copy_all_entries__6TLobbyFPv(void* a0);
int copy_all_entries__6TLobbyFii(void*, void*);

    extern int TLobby__data_805D4ABC;
void copy_all_entries__6TLobbyFPv(void* a0) { copy_all_entries__6TLobbyFii((void*)(TLobby__data_805D4ABC), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DE80
#include "types.h"

extern "C" {

void copy_data__6TLobbyFPv(void* a0);
int copy_all_data__6TLobbyFii(void*, void*);

    extern int TLobby__data_805D4ABC;
void copy_data__6TLobbyFPv(void* a0) { copy_all_data__6TLobbyFii((void*)(TLobby__data_805D4ABC), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DEA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8001DEA8(s32 arg0);

extern s32 TLobby__data_805D4ABC;

void TLobby__sub_8001DEA8(s32 arg0) {
    TLobby__data_805D4ABC = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DEB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void broadcast_to_players__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK TLobby__sub_8001DF0C(s32, s32);
s32 is_valid_player_index__6TLobbyFi();
s32 get_player_entry__6TLobbyFii(s32, s32);

void broadcast_to_players__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (is_valid_player_index__6TLobbyFi() != 0) {
        var_r31 = 0;
        do {
            TLobby__sub_8001DF0C(get_player_entry__6TLobbyFii(var_r31, arg0), arg1);
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DF58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8001DF58(s32 arg0, s32 arg1);
M2C_UNK copy_entry__6TLobbyFPvPv(s32, s32);
s32 is_valid_player_index__6TLobbyFi();
s32 get_entry__6TLobbyFii(s32, s32);

void TLobby__sub_8001DF58(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (is_valid_player_index__6TLobbyFi() != 0) {
        var_r31 = 0;
        do {
            copy_entry__6TLobbyFPvPv(get_entry__6TLobbyFii(var_r31, arg0), arg1);
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001DFB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_entry__6TLobbyFPvPv(void *arg0, void *arg1);

void copy_entry__6TLobbyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_all_entries__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK copy_from__6TLobbyFPvPv(s32, s32);
s32 is_valid_player_index__6TLobbyFi();
s32 TLobby__sub_8001E270(s32, s32);

void copy_all_entries__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (is_valid_player_index__6TLobbyFi() != 0) {
        var_r31 = 0;
        do {
            copy_from__6TLobbyFPvPv(TLobby__sub_8001E270(var_r31, arg0), arg1);
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E06C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_from__6TLobbyFPvPv(void *arg0, void *arg1);

void copy_from__6TLobbyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg1, s16 *, 0x14);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) M2C_FIELD(arg1, s16 *, 0x16);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(arg1, s16 *, 0x18);
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) M2C_FIELD(arg1, s16 *, 0x1A);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E0F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_all_data__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK copy_data__6TLobbyFPvPv(s32, s32);
s32 is_valid_player_index__6TLobbyFi();
s32 TLobby__sub_8001E2A8(s32, s32);

void copy_all_data__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (is_valid_player_index__6TLobbyFi() != 0) {
        var_r31 = 0;
        do {
            copy_data__6TLobbyFPvPv(TLobby__sub_8001E2A8(var_r31, arg0), arg1);
            var_r31 += 1;
        } while (var_r31 < 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E14C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_data__6TLobbyFPvPv(void *arg0, void *arg1);

void copy_data__6TLobbyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) M2C_FIELD(arg1, s16 *, 0xE);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E1B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_valid_player_index__6TLobbyFi(s32 arg0);

u8 is_valid_player_index__6TLobbyFi(s32 arg0) {
    s32 var_r0;

    var_r0 = 0;
    if ((arg0 >= 0) && (arg0 < 0x60)) {
        var_r0 = 1;
    }
    return (u8)var_r0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E1D8
#include "types.h"

extern "C" {

void dispatch_shared_handler_a__6TLobbyFPv(void* a0);
int get_player_entry__6TLobbyFii(void*, void*);

    extern int TLobby__data_805D4AB4;
void dispatch_shared_handler_a__6TLobbyFPv(void* a0) { get_player_entry__6TLobbyFii((void*)(TLobby__data_805D4AB4), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E200
#include "types.h"

extern "C" {

void* get_player_entry__6TLobbyFii(int a0, int a1);

    extern int TLobby__data_805D4AB0;
void* get_player_entry__6TLobbyFii(int a0, int a1) {  return (char*)(TLobby__data_805D4AB0) + a1 * 48; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E210
#include "types.h"

extern "C" {

void register_object__6TLobbyFPv(void* a0);
int get_entry__6TLobbyFii(void*, void*);

    extern int TLobby__data_805D4AB4;
void register_object__6TLobbyFPv(void* a0) { get_entry__6TLobbyFii((void*)(TLobby__data_805D4AB4), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E238
#include "types.h"

extern "C" {

void* get_entry__6TLobbyFii(int a0, int a1);

    extern int TLobby__data_805D4AAC;
void* get_entry__6TLobbyFii(int a0, int a1) {  return (char*)(TLobby__data_805D4AAC) + a1 * 32; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E248
#include "types.h"

extern "C" {

void dispatch_shared_handler_b__6TLobbyFPv(void* a0);
int TLobby__sub_8001E270(void*, void*);

    extern int TLobby__data_805D4AB4;
void dispatch_shared_handler_b__6TLobbyFPv(void* a0) { TLobby__sub_8001E270((void*)(TLobby__data_805D4AB4), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E270
#include "types.h"

extern "C" {

void* TLobby__sub_8001E270(int a0, int a1);

    extern int TLobby__data_805D4AA8;
void* TLobby__sub_8001E270(int a0, int a1) {  return (char*)(TLobby__data_805D4AA8) + a1 * 48; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E280
#include "types.h"

extern "C" {

void register_boss__6TLobbyFPv(void* a0);
int TLobby__sub_8001E2A8(void*, void*);

    extern int TLobby__data_805D4AB4;
void register_boss__6TLobbyFPv(void* a0) { TLobby__sub_8001E2A8((void*)(TLobby__data_805D4AB4), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E2A8
#include "types.h"

extern "C" {

void* TLobby__sub_8001E2A8(int a0, int a1);

    extern int TLobby__data_805D4AA4;
void* TLobby__sub_8001E2A8(int a0, int a1) {  return (char*)(TLobby__data_805D4AA4) + a1 * 36; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E2B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_difficulty__6TLobbyFi(s32 arg0);

extern s32 TLobby__data_805D4AB8;

void set_difficulty__6TLobbyFi(s32 arg0) {
    TLobby__data_805D4AB8 = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E2C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_difficulty__6TLobbyFi(s32 arg0);

extern s32 enable_v2_features;
extern s32 TLobby__data_805D4AB4;

void clamp_difficulty__6TLobbyFi(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    } else if ((s32) enable_v2_features != 0) {
        if (var_r3 >= 4) {
            var_r3 = 3;
        }
    } else if (var_r3 >= 3) {
        var_r3 = 2;
    }
    TLobby__data_805D4AB4 = var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E300
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_difficulty__6TLobbyFv(void);
M2C_UNK TLobby__sub_8001DC30();
M2C_UNK set_difficulty__6TLobbyFi();
M2C_UNK clamp_difficulty__6TLobbyFi(s32);
M2C_UNK get_instance__6TLobbyFv();

extern s32 TLobby__data_805D4AB4;
extern s32 TLobby__data_805D4AB8;
extern s32 lbl_805D5550;

void update_difficulty__6TLobbyFv(void) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = TLobby__data_805D4AB4;
    temp_r30 = TLobby__data_805D4AB8;
    clamp_difficulty__6TLobbyFi(lbl_805D5550);
    get_instance__6TLobbyFv();
    set_difficulty__6TLobbyFi();
    if (((s32) TLobby__data_805D4AB4 != temp_r31) || ((s32) TLobby__data_805D4AB8 != temp_r30)) {
        TLobby__sub_8001DC30();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E358
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_boss4_rock__6TLobbyFv(void);
void free__11TOBoss4RockFUi(void*);

extern u32 TLobby__data_805D4AA0;
extern s32 TLobby__data_805D4AA4;
extern s32 TLobby__data_805D4AA8;
extern s32 TLobby__data_805D4AAC;
extern s32 TLobby__data_805D4AB0;

void free_boss4_rock__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D4AA0 != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D4AA0);
        TLobby__data_805D4AA0 = 0U;
    }
    TLobby__data_805D4AA4 = 0;
    TLobby__data_805D4AA8 = 0;
    TLobby__data_805D4AAC = 0;
    TLobby__data_805D4AB0 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E5C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_instance__6TLobbyFv(void);

extern s32 lbl_805D6060;

s32 get_instance__6TLobbyFv(void) {
    return lbl_805D6060;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E780
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_alpha_shifted__6TLobbyFf(f32 farg0);

s32 __cvt_fp2unsigned(f32);
extern const f32 lbl_805D7ED4;

s32 calc_alpha_shifted__6TLobbyFf(f32 farg0) {
    return __cvt_fp2unsigned(lbl_805D7ED4 * farg0) << 0x18;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E7AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_result_windows__6TLobbyFv(void);
f32 calc_result_offset__6TLobbyFv(void);
M2C_UNK TWindowChallengeResult__sub_80228DB4(s32, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK TLobby__sub_8001DC24();
u32 fn_800FC0D8();
M2C_UNK TWindowSubStatusDisp__sub_80229080(M2C_UNK *);

extern M2C_UNK TLobby__data_8050AAAC[];
extern s32 TLobby__data_805D55AC;
extern s32 TLobby__data_805D55B0;
extern M2C_UNK lbl_805D7ED8;
extern M2C_UNK lbl_805D7EDC;

void close_result_windows__6TLobbyFv(void) {
    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080(TLobby__data_8050AAAC);
    TWindowSubStatusDisp__sub_80229080(&lbl_805D7ED8);
    TWindowChallengeResult__sub_80228DB4(TLobby__data_805D55AC, 2);
    TWindowSubStatusDisp__sub_80229080(&lbl_805D7EDC);
    TWindowChallengeResult__sub_80228DB4(TLobby__data_805D55B0 + 1, 2);
}

s32 get_main_phase();
extern M2C_UNK lbl_80434A90;
extern f32 TLobby__data_805D7EE0;

f32 calc_result_offset__6TLobbyFv(void) {
    f32 var_f31;

    var_f31 = TLobby__data_805D7EE0;
    if (get_main_phase() == 0xF) {
        close_result_windows__6TLobbyFv();
        TLobby__sub_8001DC24();
        var_f31 -= (f32) fn_800FC0D8();
    }
    return var_f31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001E870
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_phase_offset__6TLobbyFv(void);
s32 get_main_phase();

extern f32 lbl_805D7EE4;
extern f32 lbl_805D7EE8;

f32 calc_phase_offset__6TLobbyFv(void) {
    f32 var_f31;

    var_f31 = lbl_805D7EE4;
    if (get_main_phase() == 0xF) {
        var_f31 -= lbl_805D7EE8;
    }
    return var_f31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001ED70
#include "types.h"

extern "C" {

void TLobby__sub_8001ED70(void);

void TLobby__sub_8001ED70(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001ED88
#include "types.h"

extern "C" {

s32 TLobby__sub_8001ED88(void* p);
int fn_8001ED90(void* p);

s32 TLobby__sub_8001ED88(void* p) { return *(s32*)((char*)p + 0x428); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001EEF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8001EEF4(void);

extern s32 lbl_805D4AD4;

s32 TLobby__sub_8001EEF4(void) {
    return lbl_805D4AD4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001F0E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_and_notify__6TLobbyFPv(void *arg0);

void set_flag_and_notify__6TLobbyFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x41C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x420));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001F844
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_chr_select_data__6TLobbyFv(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
M2C_UNK TItemDrop__sub_800FE2D8();
void xfree__FPv(void*);

extern s32 lbl_805D4ACC;
extern u32 lbl_805D4AD8;

void free_chr_select_data__6TLobbyFv(void) {
    if ((u32) lbl_805D4AD8 != 0U) {
        xfree__FPv((void*)lbl_805D4AD8);
        lbl_805D4AD8 = 0U;
    }
    TItemDrop__sub_800FE2D8();
    safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D4ACC);
    lbl_805D4ACC = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001F88C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_download_buffers__6TLobbyFv(void);
M2C_UNK TItemDrop__sub_800FE2DC();
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 xmalloc__FUl(M2C_UNK);

extern s8 lbl_804FE148[];
extern s32 lbl_805D4ACC;
extern s32 lbl_805D4AD4;
extern s32 lbl_805D4AD8;

void init_download_buffers__6TLobbyFv(void) {
    lbl_805D4AD8 = xmalloc__FUl(0x4000);
    lbl_805D4ACC = alloc__22TQuestVmDownLoadServerFPv(0x40000);
    TItemDrop__sub_800FE2DC();
    lbl_805D4AD4 = 1;
    lbl_804FE148[0] = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001F948
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void increment_ref_and_set_flag__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_8001F8D8(void *, void *);

void increment_ref_and_set_flag__6TLobbyFPv(void *arg0) {
    s32 *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r4, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r4, s32 *, 0xC) + 1);
    TLobby__sub_8001F8D8(M2C_FIELD(arg0, void **, 0), temp_r4);
    temp_r3 = M2C_FIELD(arg0, s32 **, 4);
    *temp_r3 |= 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001FFD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_battle_state__6TLobbyFPv(void *arg0);

extern s32 lbl_805D4AD0;

void reset_battle_state__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x42C) = 0;
    M2C_FIELD(arg0, s32 *, 0x430) = 0;
    M2C_FIELD(arg0, s32 *, 0x434) = 0;
    M2C_FIELD(arg0, s32 *, 0x438) = 0;
    M2C_FIELD(arg0, s32 *, 0x43C) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x418) = 0;
    M2C_FIELD(arg0, s32 *, 0x428) = 0;
    lbl_805D4AD0 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002ADC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_game_mode__6TLobbyFv(void);

extern s32 lbl_805D586C;

s32 get_game_mode__6TLobbyFv(void) {
    return lbl_805D586C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002B058
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_header__6TLobbyFPvPv(void *arg0, void *arg1);

void copy_header__6TLobbyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(arg1, u8 *, 0xB);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002C140
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_char_select__6TLobbyFv(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern s32 lbl_805D4B50;
extern u32 lbl_805D4B54;

void free_char_select__6TLobbyFv(void) {
    if ((u32) lbl_805D4B54 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D4B54);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D4B54);
        lbl_805D4B54 = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D4B50, 1);
    lbl_805D4B50 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002C838
#include "types.h"

extern "C" {

s32 TObjBoss1Crater__sub_8002C7E4(void* p);
void update_boss1_objects__6TLobbyFv(void);
int forward_floor_2CB44__6TLobbyFPv(void* p);
void init_bosses__6TLobbyFv(void);
int free_char_select__6TLobbyFv(void);
int fn_8002C190(void);
int TObjBoss1Crater__sub_8002C7B4(void);
int TObjBoss1Crater__sub_8002C7B8(void);
int TObjBoss1Floor__sub_8002CB40(void);
int create_instance__14TObjBoss1FloorFv(void*);
int TObjBoss1Floor__sub_8002CB78(void);
int free_resources__12TBoss8DragonFv(void);
int TBoss8Dragon__sub_8002D5F8(void);
int TObjBoss1Rock__sub_8002E3CC(void);
int TObjBoss1Rock__sub_8002E3D0(void);

void update_boss1_objects__6TLobbyFv(void) { free_resources__12TBoss8DragonFv(); TObjBoss1Rock__sub_8002E3CC(); TObjBoss1Crater__sub_8002C7B4(); TObjBoss1Floor__sub_8002CB40(); free_char_select__6TLobbyFv(); }
int forward_floor_2CB44__6TLobbyFPv(void* p) { return create_instance__14TObjBoss1FloorFv(p); }
void init_bosses__6TLobbyFv(void) { fn_8002C190(); TObjBoss1Floor__sub_8002CB78(); TObjBoss1Crater__sub_8002C7B8(); TObjBoss1Rock__sub_8002E3D0(); TBoss8Dragon__sub_8002D5F8(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80049568
#include "types.h"

extern "C" {

void TLobby__sub_80049568(void);

    extern int lbl_805D4C3C;
void TLobby__sub_80049568(void) { lbl_805D4C3C = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800495BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_player_flag1__6TLobbyFPv(void *arg0);
M2C_UNK check_flag__10TObjPlayerFPvi(void *, M2C_UNK);

void check_player_flag1__6TLobbyFPv(void *arg0) {
    check_flag__10TObjPlayerFPvi(arg0, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004A90C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int is_boss_phase_reached__6TLobbyFv(void);
s32 get_phase__9TBoss4UroFPv(void*);

extern void* lbl_805D4D74;
extern s32 lbl_805D5550;

int is_boss_phase_reached__6TLobbyFv(void) {
    s32 temp_r3;

    if (lbl_805D4D74 == 0) {
        return 0;
    }
    temp_r3 = get_phase__9TBoss4UroFPv(lbl_805D4D74);
    if (lbl_805D5550 == 0) {
        return (temp_r3 >= 9) ? 1 : 0;
    }
    return (temp_r3 >= 0xE) ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80066EC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80066EC0(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern s32 lbl_805D4DD8;
extern u32 lbl_805D4DDC;

void TLobby__sub_80066EC0(void) {
    if ((u32) lbl_805D4DDC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D4DDC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D4DDC);
        lbl_805D4DDC = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D4DD8, 1);
    lbl_805D4DD8 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067410
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_pillar_demo__6TLobbyFv(void);
M2C_UNK TLobby__sub_80066EC0();
M2C_UNK fn_802898E8();
M2C_UNK TObjBoss5PillarDemo__sub_8028AB38();
M2C_UNK TObjBoss5PillarDemo__sub_8028ACE0();
M2C_UNK update_pillar__19TObjBoss5PillarCtrlFPv();
void queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D4DE0;

void cleanup_pillar_demo__6TLobbyFv(void) {
    if ((u32) lbl_805D4DE0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D4DE0);
        lbl_805D4DE0 = 0U;
    }
    TObjBoss5PillarDemo__sub_8028ACE0();
    update_pillar__19TObjBoss5PillarCtrlFPv();
    fn_802898E8();
    TObjBoss5PillarDemo__sub_8028AB38();
    TLobby__sub_80066EC0();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067458
#include "types.h"

extern "C" {

void cleanup_boss5_pillars__6TLobbyFv(void);
int fn_80066F10(void);
int fn_802898EC(void);
int update_active_pillar__19TObjBoss5PillarDemoFv(void);
int TObjBoss5PillarDemo__sub_8028ACE4(void);
int forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(void);

    extern int lbl_805D4DE0;
void cleanup_boss5_pillars__6TLobbyFv(void) { fn_80066F10(); update_active_pillar__19TObjBoss5PillarDemoFv(); fn_802898EC(); forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(); TObjBoss5PillarDemo__sub_8028ACE4(); lbl_805D4DE0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006EF90
#include "types.h"

extern "C" {

int TLobby__sub_8006EF90(void);

int TLobby__sub_8006EF90(void) { return 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006F278
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_challenge_time_limit__6TLobbyFv(void);
s32 TLobby__sub_8006F994(s32);
s32 is_flag_set__6TLobbyFv();

extern M2C_UNK lbl_8048C9D8[];

s32 calc_challenge_time_limit__6TLobbyFv(void) {
    s32 var_r3;

    if (is_flag_set__6TLobbyFv() == 0) {
        return 0x12C;
    }
    var_r3 = TLobby__sub_8006F994(M2C_FIELD(lbl_8048C9D8, s32 *, 0x10));
    if ((var_r3 < 0x3C) || (var_r3 > 0xE10)) {
        var_r3 = 0x12C;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006F314
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_challenge_time_range__6TLobbyFi(s32 arg0);
s32 is_id_out_of_range__6TLobbyFi(s32 arg0);
s32 calc_challenge_time_limit__6TLobbyFv();

s32 check_challenge_time_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < calc_challenge_time_limit__6TLobbyFv()) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}

s32 is_id_out_of_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < 0x3C) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006F9E0
#include "types.h"

extern "C" {

s32 mix_seed_checked__6TLobbyFi(s32 arg0);
s32 is_id_out_of_range__6TLobbyFi();
s32 mix_seed__6TLobbyFUs(s32);

s32 mix_seed_checked__6TLobbyFi(s32 arg0) {
    if ((arg0 == 0) || (is_id_out_of_range__6TLobbyFi() != 0)) {
        return 0;
    }
    return mix_seed__6TLobbyFUs(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006FA28
#include "types.h"

extern "C" {

s32 get_slot_clamped__6TLobbyFv(void);
s32 decode_slot__6TLobbyFUi();

s32 get_slot_clamped__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = decode_slot__6TLobbyFUi();
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006FA54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 decode_slot__6TLobbyFUi(u32 arg0);
s32 TLobby__sub_80071670(u32);

s32 decode_slot__6TLobbyFUi(u32 arg0) {
    s32 temp_r3;
    u32 temp_r31;

    temp_r31 = arg0 >> 0x10U;
    temp_r3 = TLobby__sub_80071670(temp_r31);
    if ((temp_r3 < 4) || (temp_r3 > 0xC)) {
        return -1;
    }
    return (u16) (temp_r31 ^ arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006FAA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 mix_seed__6TLobbyFUs(u16 arg0);
s32 TLobby__sub_8006FAE4();

s32 mix_seed__6TLobbyFUs(u16 arg0) {
    s32 temp_r3;

    temp_r3 = TLobby__sub_8006FAE4();
    return (temp_r3 << 0x10) | (temp_r3 ^ arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006FBE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8006FBE4(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

s32 TLobby__sub_8006FBE4(void) {
    s32 count;
    s32 i;

    count = 0;
    for (i = 0; i < 4; i += 1) {
        if (TPlayerBattleCtrl4P__sub_801BA74C(i) != 0U) {
            count += 1;
        }
    }
    return count;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006FF4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_time_window__6TLobbyFv(void);
void update_battle_cleanup_flag__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_8006FC7C(void *);
M2C_UNK TLobby__sub_8006FE7C();
M2C_UNK TLobby__sub_800722AC(s32);
M2C_UNK TLobby__sub_80072618();
s32 check_player_state_flag_2__6TLobbyFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TLobby__sub_80074034(s32);
M2C_UNK create_solo_play_win__6TLobbyFPv(s32);
M2C_UNK create_ch_time_win(s32);

extern M2C_UNK lbl_8048C9D8[];
extern s32 tl_07;

void create_time_window__6TLobbyFv(void) {
    TLobby__sub_8006FE7C();
    create_ch_time_win(tl_07);
    TLobby__sub_80074034(tl_07);
    if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x30) == 0) {
        create_solo_play_win__6TLobbyFPv(tl_07);
    }
}

extern M2C_UNK lbl_8048C9D8[];
extern s32 lbl_805D53A0;

void update_battle_cleanup_flag__6TLobbyFPv(void *arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return;
    }
    if (check_player_state_flag_2__6TLobbyFPv() != 0) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) && ((s32) M2C_FIELD(&lbl_8048C9D8, s32 *, 0x34) == 0)) {
            TLobby__sub_8006FC7C(arg0);
            TLobby__sub_800722AC(lbl_805D53A0);
            TLobby__sub_80072618();
        }
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80070550
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TCameraCtrl__sub_8006B368();
s32 TLobby__sub_80070078(void *);
s32 TLobby__sub_800739BC(void *);
s32 fn_80076B14(void *);
s32 init__23TAdSinglePlyChrSelectGCFv();
s32 TLobby__sub_8026A328();
int update_battle_cleanup_flag__6TLobbyFPv(void*);
int TLobby__sub_80070170(void*);
int TLobby__sub_800704CC(void* a0 = 0);
void cleanup_if_inactive__6TLobbyFPv(void* p);
void TLobby__sub_80070550(void);

void TLobby__sub_80070550(void) {  }
void cleanup_if_inactive__6TLobbyFPv(void* p) { if (TLobby__sub_800704CC(p) == 0) { TLobby__sub_80070170(p); update_battle_cleanup_flag__6TLobbyFPv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80070A00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_on_main_phase__6TLobbyFv(void);
M2C_UNK TLobby__sub_80074C20();
M2C_UNK TLobby__sub_8006F848(M2C_UNK *);
u32 create__10TChallengeFv();
M2C_UNK TObjTombstone__sub_800765B4();

s32 get_main_phase();
extern M2C_UNK lbl_804385B0[];
extern u32 lbl_805D4E28;
extern s32 lbl_805D4E2C;
extern s32 TLobby__data_805D4E30;

void init_on_main_phase__6TLobbyFv(void) {
    lbl_805D4E2C = 0;
    if ((u32) lbl_805D4E28 == 0U) {
        if (get_main_phase() != 0xF) {
            TLobby__data_805D4E30 = 0;
            return;
        }
        TLobby__sub_80074C20();
        if ((s32) TLobby__data_805D4E30 != 0) {
            lbl_805D4E28 = create__10TChallengeFv();
            lbl_805D4E2C = 1;
            TObjTombstone__sub_800765B4();
            TLobby__sub_8006F848(lbl_804385B0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80070B90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_state__6TLobbyFv(void);
s32 is_flag_set__6TLobbyFv();

extern M2C_UNK lbl_8048C9D8[];

s32 get_state__6TLobbyFv(void) {
    if (is_flag_set__6TLobbyFv() == 0) {
        return 0;
    }
    if (((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) != 1) && ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) != 0)) {
        M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) = 0;
    }
    return M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80070CDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dead_list_win__6TLobbyFv(void);
void draw_if_ready__6TLobbyFv(void);
s32 check_ready_state__6TLobbyFv(void);
s32 is_flag_set__6TLobbyFv();
s32 TLobby__sub_80070DA8();
s32 is_ready_to_draw__6TLobbyFv();
M2C_UNK fn_800733C4(void*);
M2C_UNK create__15TObjDeadListWinFPv(void*);

extern u32 lbl_805D4E28;

void update_dead_list_win__6TLobbyFv(void) {
    if ((is_flag_set__6TLobbyFv() != 0) && (is_ready_to_draw__6TLobbyFv() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        create__15TObjDeadListWinFPv((void*)lbl_805D4E28);
    }
}

extern u32 lbl_805D4E28;

void draw_if_ready__6TLobbyFv(void) {
    if ((is_flag_set__6TLobbyFv() != 0) && (is_ready_to_draw__6TLobbyFv() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        fn_800733C4((void*)lbl_805D4E28);
    }
}

extern M2C_UNK lbl_8048C9D8[];

s32 check_ready_state__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80070DA8();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80071410
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 add_entry__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_8006F910(void *, void *, int);
s32 is_flag_set__6TLobbyFv();

extern s8 lbl_8048C9D8[];

s32 add_entry__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r30;

    if ((is_flag_set__6TLobbyFv() == 0) || ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) < 0) || ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) >= 0x10)) {
        return 0;
    }
    temp_r30 = (unsigned char *) (lbl_8048C9D8 + (M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) * 0x1C) + 0x5C);
    TLobby__sub_8006F910((void *) (temp_r30), (void *) (arg0), (int) (0xC));
    TLobby__sub_8006F910((void *) (temp_r30 + 0xC), (void *) (arg1), (int) (0xC));
    M2C_FIELD(temp_r30, s32 *, 0x18) = arg2;
    M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) = (s32) (M2C_FIELD(lbl_8048C9D8, s32 *, 0x1C) + 1);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80071500
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_selected_layout__6TLobbyFi(s32 arg0);
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);

extern s32 lbl_8048C9D8[];

void set_selected_layout__6TLobbyFi(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = arg0;
    temp_r3 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if ((var_r31 < 0) || (var_r31 >= temp_r3)) {
        var_r31 = 0;
    }
    lbl_8048C9D8[0] = var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007154C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_remaining_char_slots__6TLobbyFv(void);
u8 *get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);

s32 calc_remaining_char_slots__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = 0x1E - *get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF);
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80071588
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_set_value__6TLobbyFf(f32 farg0);
s32 is_flag_set__6TLobbyFv();

extern M2C_UNK lbl_8048C9D8[];
extern f32 lbl_805D9108;
extern f32 lbl_805D910C;

s32 try_set_value__6TLobbyFf(f32 farg0) {
    if (is_flag_set__6TLobbyFv() == 0) {
        return 0;
    }
    if ((farg0 < lbl_805D9108) || (farg0 > lbl_805D910C)) {
        return 0;
    }
    M2C_FIELD(&lbl_8048C9D8, f32 *, 4) = farg0;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800715FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_split_screen_flag__6TLobbyFi(s32 arg0);
s32 is_flag_set__6TLobbyFv();

extern s32 lbl_805D5550;

s32 set_split_screen_flag__6TLobbyFi(s32 arg0) {
    if (is_flag_set__6TLobbyFv() == 0) {
        return 0;
    }
    lbl_805D5550 = arg0;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80071654
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80071654(s32 arg0);

s32 TLobby__sub_80071654(s32 arg0) {
    return ((arg0 * 8) & 0xF8) | (((arg0 << 9) & 0xF80000) | 0xFF000000 | ((arg0 << 6) & 0xF800));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072048
#include "types.h"

extern "C" {

void copy_header_struct__6TLobbyFPvPv(void* p, void* q);

void copy_header_struct__6TLobbyFPvPv(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800726F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_challenge_dead_flag__6TLobbyFPv(void *arg0);
void read_be16_field2__10TObjPlayerFPv(void *);
void bswap_32__FPUl(void *);

void bswap_challenge_dead_flag__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072724
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_80072724(void *arg0);
void TLobby__send_and_handle_60(void *);
void bswap_challenge_dead_flag__6TLobbyFPv(void *);

void TLobby__sub_80072724(void *arg0) {
    bswap_challenge_dead_flag__6TLobbyFPv(arg0);
    TLobby__send_and_handle_60(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072758
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80072758(u8 *arg0);

void TLobby__sub_80072758(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x9D;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007276C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void send_and_handle_60_wrapper__6TLobbyFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void TLobby__sub_800727A0(void *);

void send_and_handle_60_wrapper__6TLobbyFPv(void *arg0) {
    TLobby__sub_800727A0(arg0);
    TLobby__send_and_handle_60(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800727A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_800727A0(void *arg0);
void read_be16_field2__10TObjPlayerFPv(void *);
void bswap_32__FPUl(void *);

void TLobby__sub_800727A0(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
    bswap_32__FPUl((void *)((char *)arg0 + 16));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800727EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800727EC(u8 *arg0);

void TLobby__sub_800727EC(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x97;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072800
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void byteswap_challenge_time_packet__6TLobbyFPv(void *arg0);
void read_be16_field2__10TObjPlayerFPv(void *);
void bswap_32__FPUl(void *);

void byteswap_challenge_time_packet__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
    bswap_32__FPUl((void *)((char *)arg0 + 16));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007284C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void send_state__6TLobbyFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void byteswap_challenge_time_packet__6TLobbyFPv(void *);

void send_state__6TLobbyFPv(void *arg0) {
    byteswap_challenge_time_packet__6TLobbyFPv(arg0);
    TLobby__send_and_handle_60(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072880
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80072880(u8 *arg0);

void TLobby__sub_80072880(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x95;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072894
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void byteswap_challenge_packet__6TLobbyFPv(void *arg0);
void read_be16_field2__10TObjPlayerFPv(void *);
void bswap_32__FPUl(void *);

void byteswap_challenge_packet__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800728C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void send_challenge_packet__6TLobbyFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void byteswap_challenge_packet__6TLobbyFPv(void *);

void send_challenge_packet__6TLobbyFPv(void *arg0) {
    byteswap_challenge_packet__6TLobbyFPv(arg0);
    TLobby__send_and_handle_60(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800728FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800728FC(u8 *arg0);

void TLobby__sub_800728FC(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x8A;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072910
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap_6x7C_packet__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_80072994(s32);
M2C_UNK read_be16_field2__10TObjPlayerFPv();
M2C_UNK bswap_16__FPUs(s32);

void bswap_6x7C_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_16__FPUs(arg0 + 4);
    TLobby__sub_80072994(arg0 + 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007294C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_6x7C_packet__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60(s32);
M2C_UNK bswap_6x7C_packet__6TLobbyFi();

void send_6x7C_packet__6TLobbyFi(s32 arg0) {
    bswap_6x7C_packet__6TLobbyFi();
    TLobby__send_and_handle_60(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072980
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_pkt_cmd_7C__6TLobbyFPv(u8 *arg0);

void init_pkt_cmd_7C__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0x7C;
    M2C_FIELD(arg0, s8 *, 1) = 0x42;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072A44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_fields_0_4__6TLobbyFPv(void *arg0);
void bswap_32__FPUl(void *);

void bswap_fields_0_4__6TLobbyFPv(void *arg0) {
    bswap_32__FPUl(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072A78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_fields_4_8_12__6TLobbyFPv(void *arg0);
void bswap_32__FPUl(void *);

void bswap_fields_4_8_12__6TLobbyFPv(void *arg0) {
    bswap_32__FPUl((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072AB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_80072AB8(void *arg0);
void bswap_16__FPUs(void *);
void bswap_32__FPUl(void *);

void TLobby__sub_80072AB8(void *arg0) {
    bswap_16__FPUs((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
    bswap_32__FPUl((void *)((char *)arg0 + 16));
    bswap_32__FPUl((void *)((char *)arg0 + 20));
    bswap_32__FPUl((void *)((char *)arg0 + 24));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072B10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap_packet_field__6TLobbyFv(void);
M2C_UNK bswap_32__FPUl();

void bswap_packet_field__6TLobbyFv(void) {
    bswap_32__FPUl();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072B30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready_to_draw__6TLobbyFv(void);
s32 TLobby__sub_8006F23C();
s32 TLobby__sub_8006FBE4();

s32 is_ready_to_draw__6TLobbyFv(void) {
    if ((TLobby__sub_8006F23C() != 0) || (TLobby__sub_8006FBE4() <= 1)) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072B70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80072B70(u8 *arg0);
M2C_UNK TWindow__close(void *);

void TLobby__sub_80072B70(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072C38
#include "types.h"

extern "C" {

void close_window_2c__6TLobbyFPv(void* p);
int TWindow__close(void*);

void close_window_2c__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072C78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_loss_menu__6TLobbyFPv(void *arg0);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(u32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK set_loss_flag__6TLobbyFPv(u32);

void open_loss_menu__6TLobbyFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = check_room_seq_4__16TAdChrSelASlotGCFii(TWindowSubComCard__sub_8026CBB8(0x3A), 3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5B), 5, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5C), 5, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5D), 5, 2);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x2C));
        set_loss_flag__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x2C));
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, u32 *, 0x2C), 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072D48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_45_and_close_windows__6TLobbyFv(void);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK TLobby__sub_8024AC20(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);

extern s32 lbl_805D53A0;

void send_45_and_close_windows__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFPv() != 0)) {
        send_code_45_1__10TObjPlayerFi(temp_r3);
    }
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
    TLobby__sub_8024AC20(lbl_805D53A0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072DA0
#include "types.h"

extern "C" {

void show_ctrl_and_play_effect__6TLobbyFPv(void* a0);
int play_player_default_effect__6TLobbyFv(void*);
int TWindowCtrl__sub_8024AEAC(void*);

    extern int lbl_805D53A0;
void show_ctrl_and_play_effect__6TLobbyFPv(void* a0) { TWindowCtrl__sub_8024AEAC((void*)(lbl_805D53A0)); play_player_default_effect__6TLobbyFv(a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072DD8
#include "types.h"

extern "C" {

void play_default_effect__6TLobbyFPv(void* a0);
int play_player_default_effect__6TLobbyFv(void*);
int TObjPlayer__sub_8024ABDC(void*);

    extern int lbl_805D53A0;
void play_default_effect__6TLobbyFPv(void* a0) { TObjPlayer__sub_8024ABDC((void*)(lbl_805D53A0)); play_player_default_effect__6TLobbyFv(a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072E10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_player_default_effect__6TLobbyFv(void);
s32 check_player_flag1__6TLobbyFPv();
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);

extern s32 lbl_805D53A0;

void play_player_default_effect__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFPv() == 0)) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072E5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_challenge_lobby__6TLobbyFv(void);

extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

u8 is_challenge_lobby__6TLobbyFv(void) {
    return (u8) (lbl_805D53A0 == TLobby__data_805D53AC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072E74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_destroy_countdown__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_8006F2CC();
M2C_UNK TLobby__sub_80072B70(void *);
M2C_UNK close_window_2c__6TLobbyFPv(void *);
M2C_UNK send_45_and_close_windows__6TLobbyFv(void *);
M2C_UNK play_default_effect__6TLobbyFPv();
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_destroy_countdown__6TLobbyFPv(void *arg0) {
    s32 temp_r0;

    play_default_effect__6TLobbyFPv();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    if (temp_r0 <= 0) {
        TLobby__sub_8006F2CC();
        send_45_and_close_windows__6TLobbyFv(arg0);
        close_window_2c__6TLobbyFPv(arg0);
        TLobby__sub_80072B70(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072FD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_challenge_retry__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_80072308(s32);
M2C_UNK close_window_2c__6TLobbyFPv(void *);
M2C_UNK open_loss_menu__6TLobbyFPv(void *);
M2C_UNK send_45_and_close_windows__6TLobbyFv(void *);
M2C_UNK show_ctrl_and_play_effect__6TLobbyFPv();
M2C_UNK play_default_effect__6TLobbyFPv(void *);
M2C_UNK play_player_default_effect__6TLobbyFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

extern M2C_UNK lbl_8048D120[];
extern s8 lbl_8050E208[];

void update_challenge_retry__6TLobbyFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;

    show_ctrl_and_play_effect__6TLobbyFPv();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        open_loss_menu__6TLobbyFPv(arg0);
    }
    var_r31 = 0;
    if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x2C)) != 0) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x2C));
        if (temp_r3 == 2) {
            var_r31 = 1;
            goto block_6;
        }
        TLobby__sub_80072308(lbl_8048D120[temp_r3]);
        send_45_and_close_windows__6TLobbyFv(arg0);
        play_player_default_effect__6TLobbyFv(arg0);
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        return;
    }
block_6:
    if ((var_r31 != 0) || (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 2) != 0)) {
        close_window_2c__6TLobbyFPv(arg0);
        send_45_and_close_windows__6TLobbyFv(arg0);
        play_default_effect__6TLobbyFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007340C
#include "types.h"

extern "C" {

void set_loss_flag__6TLobbyFPv(void* p);
int is_visible__17TWindowSubComCardFPv(void* p);

void set_loss_flag__6TLobbyFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x200; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80073DAC
#include "types.h"

extern "C" {

void set_enemy_mode_flag__6TLobbyFv(void);

    extern int lbl_805D5ED8;
void set_enemy_mode_flag__6TLobbyFv(void) { lbl_805D5ED8 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80074A5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_solo_play_win__6TLobbyFPv(void *arg0);
void *TObjSoloPlayWin__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create_solo_play_win__6TLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = TObjSoloPlayWin__ct(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80076614
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_tombstone__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjTombstone__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_tombstone__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x238);
    if (o != NULL) {
        o = TObjTombstone__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077608
#include "types.h"

extern "C" {

void TLobby__sub_80077608(void);
void TLobby__sub_8007760C(void);
int TWindowSubSymbolChat__sub_800774E4(void*);

void TLobby__sub_80077608(void) {  }

    extern unsigned char lbl_804FF968[];
    extern unsigned char lbl_805D4E54;
void TLobby__sub_8007760C(void) { lbl_805D4E54 = 0; TWindowSubSymbolChat__sub_800774E4(lbl_804FF968); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077B60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_windows__6TLobbyFv(void);
void __dl__FPv(void*);

extern u32 lbl_805D4E58;
extern u32 lbl_805D4E5C;

void free_static_windows__6TLobbyFv(void) {
    if ((u32) lbl_805D4E5C != 0U) {
        __dl__FPv((void*)lbl_805D4E5C);
        lbl_805D4E5C = 0U;
    }
    if ((u32) lbl_805D4E58 != 0U) {
        __dl__FPv((void*)lbl_805D4E58);
        lbl_805D4E58 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077BAC
#include "types.h"

extern "C" {

void TLobby__sub_80077BAC(void);

    extern int lbl_805D4E58;
    extern int lbl_805D4E5C;
void TLobby__sub_80077BAC(void) { lbl_805D4E58 = 0; lbl_805D4E5C = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B858
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_tasks__6TLobbyFv(void);
M2C_UNK TCineCtrl__ct(u32, s32);
M2C_UNK TFogCtrl__sub_800FBB68();
M2C_UNK THunterGuildSeqOnlineTask__ct(u32, s32);
s32 is_scene_ready__6TLobbyFv();
M2C_UNK TLobby__sub_80208BD8();
M2C_UNK cleanup_game_objects__9TMainTaskFv();
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TTecLuker__sub_80233F8C();
M2C_UNK TWindowCtrlMain__ct();
M2C_UNK TWindowCtrl__ct(u32, s32);
M2C_UNK __ct__7TSwitchFv(u32, s32);
M2C_UNK __ct__8TTecCtrlFv(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create__13TRaderMapCoreFv();
M2C_UNK create__6TSceneFv();
M2C_UNK create_instance__10TSceneSoraFv();
M2C_UNK init_subobject__6TLobbyFPvPvPv(u32, s32, M2C_UNK);
M2C_UNK set_fade_params__6TLobbyFi(M2C_UNK);
M2C_UNK ct_register__6TLobbyFPv(u32, s32);
M2C_UNK TWindowTimer__sub_80198D98();
M2C_UNK create__11TSetManagerFv();
M2C_UNK TLobby__sub_8032BDC4(u32, s32);
M2C_UNK TLobby__sub_8033ED24(u32, s32);
M2C_UNK TNpcPlayer__sub_8034DD14(u32, s32);
M2C_UNK TLobby__sub_80351F3C();
s32 get_main_phase();
M2C_UNK init__13TQuestColCtrlFv();
s32 is_split_screen();

extern s32 tl_00;
extern s32 tl_01;
extern s32 tl_06;
extern s32 tl_particlemodel;
extern s32 tl_fade;

void create_tasks__6TLobbyFv(void) {
    u32 tmp;
    TFogCtrl__sub_800FBB68();
    if (is_split_screen() == 0) {
        tmp = __nw__7TObjectFUl(0x20);
        if (tmp != 0U) {
            init_subobject__6TLobbyFPvPvPv(tmp, tl_particlemodel, 1);
        }
        tmp = __nw__7TObjectFUl(0x20);
        if (tmp != 0U) {
            init_subobject__6TLobbyFPvPvPv(tmp, tl_particlemodel, 0);
        }
        tmp = __nw__7TObjectFUl(0x84);
        if (tmp != 0U) {
            TLobby__sub_8032BDC4(tmp, tl_particlemodel);
        }
        tmp = __nw__7TObjectFUl(0x24);
        if (tmp != 0U) {
            TLobby__sub_8033ED24(tmp, tl_particlemodel);
        }
    }
    cleanup_game_objects__9TMainTaskFv();
    create__6TSceneFv();
    create_instance__10TSceneSoraFv();
    create__11TSetManagerFv();
    TLobby__sub_80208BD8();
    tmp = __nw__7TObjectFUl(0x1C);
    if (tmp != 0U) {
        TWindowCtrlMain__ct();
    }
    tmp = __nw__7TObjectFUl(0xE8);
    if (tmp != 0U) {
        TWindowCtrl__ct(tmp, tl_00);
    }
    tmp = __nw__7TObjectFUl(0x2C);
    if (tmp != 0U) {
        ct_register__6TLobbyFPv(tmp, tl_fade);
    }
    set_fade_params__6TLobbyFi(0);
    tmp = __nw__7TObjectFUl(0x30);
    if (tmp != 0U) {
        TCineCtrl__ct(tmp, tl_00);
    }
    create__13TRaderMapCoreFv();
    TTecLuker__sub_80233F8C();
    tmp = __nw__7TObjectFUl(0x20);
    if (tmp != 0U) {
        TNpcPlayer__sub_8034DD14(tmp, tl_06);
    }
    tmp = __nw__7TObjectFUl(0x28);
    if (tmp != 0U) {
        __ct__7TSwitchFv(tmp, tl_00);
    }
    init__13TQuestColCtrlFv();
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        TLobby__sub_80351F3C();
    }
    if ((get_global_state__14TOKeyMachine01Fv() == 0xF) && (is_scene_ready__6TLobbyFv() != 0)) {
        TWindowTimer__sub_80198D98();
    }
    if ((get_main_phase() == 0xF) && ((get_global_state__14TOKeyMachine01Fv() == 0) || (get_global_state__14TOKeyMachine01Fv() == 0x12))) {
        tmp = __nw__7TObjectFUl(0x1C);
        if (tmp != 0U) {
            THunterGuildSeqOnlineTask__ct(tmp, tl_01);
        }
    }
    tmp = __nw__7TObjectFUl(0x24);
    if (tmp != 0U) {
        __ct__8TTecCtrlFv(tmp, tl_01);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BBEC
#include "types.h"

extern "C" {

void TLobby__sub_8007BBEC(void);

    extern short lbl_805D5C48;
void TLobby__sub_8007BBEC(void) { lbl_805D5C48 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BBF8
#include "types.h"

extern "C" {

void TLobby__sub_8007BBF8(void);

    extern short lbl_805D5C48;
void TLobby__sub_8007BBF8(void) { lbl_805D5C48 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BCF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_status_packet__6TLobbyFv(void);
M2C_UNK TLobby__sub_8007BC5C(M2C_UNK *);
M2C_UNK send_c6_packet__6TLobbyFPvPv(s32, M2C_UNK *);

extern s32 TLobby__data_805D5580;

void send_status_packet__6TLobbyFv(void) {
    char sp8[0x84];

    TLobby__sub_8007BC5C((M2C_UNK *) sp8);
    send_c6_packet__6TLobbyFPvPv(TLobby__data_805D5580, (M2C_UNK *) sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007C550
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_single_player_chr_select__6TLobbyFPv(void* arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C48C(void*, int);

s32 init_single_player_chr_select__6TLobbyFPv(void* arg0) {
    TAdSinglePlyChrSelectGC__sub_8007C48C(arg0, 0);
    return (s32)arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007EB20
#include "types.h"

extern "C" {

void TLobby__sub_8007EB20(s32 arg0, ...);
void TLobby__sub_8007EB70(void);

void TLobby__sub_8007EB20(s32 arg0, ...) {}
void TLobby__sub_8007EB70(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80082048
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_global_singleton__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D4ED0;

void destroy_global_singleton__6TLobbyFv(void) {
    if ((u32) lbl_805D4ED0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4ED0, 1);
        lbl_805D4ED0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008350C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_subobject__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_8048E5F4[];

void *init_subobject__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E5F4;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C1748
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_handles__6TLobbyFv(void);
s32 get_instance__6TLobbyFv();
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D5164;
extern u32 lbl_805D516C;

void cleanup_handles__6TLobbyFv(void) {
    if (get_instance__6TLobbyFv() == 0) {
        if ((u32) lbl_805D516C != 0U) {
            TLobby__sub_803DA16C((void*)lbl_805D516C);
            safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D516C);
            lbl_805D516C = 0U;
        }
    } else {
        lbl_805D516C = 0U;
    }
    if ((u32) lbl_805D5164 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5164, 1);
        lbl_805D5164 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C80D0
#include "types.h"

extern "C" {

void TLobby__sub_800C80D0(void);

void TLobby__sub_800C80D0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C80FC
#include "types.h"

extern "C" {

int bswap_packet_header__6TLobbyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);

int bswap_packet_header__6TLobbyFPv(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DBFF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_global_window__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D5258;

void free_global_window__6TLobbyFv(void) {
    if ((u32) lbl_805D5258 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5258, 1);
        lbl_805D5258 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F5CF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *alloc_tables__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK fn_800F58A4(void *, s32, s32, s32);
M2C_UNK fn_800F5A50();

extern s32 lbl_805D5318;
extern s32 lbl_805D531C;
extern s32 lbl_805D5320;

void *alloc_tables__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    lbl_805D5320 = 0;
    fn_800F5A50();
    M2C_FIELD(arg0, s32 *, 8) = alloc_buffer__11TOBoss4RockFPv(M2C_FIELD(arg0, s32 *, 4) * 8);
    M2C_FIELD(arg0, s32 *, 0xC) = alloc_buffer__11TOBoss4RockFPv(M2C_FIELD(arg0, s32 *, 0) * 4);
    lbl_805D5318 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xC);
    lbl_805D531C = temp_r6;
    lbl_805D5320 = 0;
    fn_800F58A4(arg0, arg1, arg2, temp_r6);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F7744
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800F7744(void);
void clear_flag_on_phase_e__6TLobbyFv(void);
s32 get_main_phase();

void TLobby__sub_800F7744(void) {  }

extern s32 lbl_805D5328;

void clear_flag_on_phase_e__6TLobbyFv(void) {
    if (get_main_phase() == 0xE) {
        lbl_805D5328 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F795C
#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TLobby__sub_800F7A50(void* p);
int TLobby__sub_800F7A64(void);

void bswap_field__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }
void broadcast_state__6TLobbyFPv(void* p) { bswap_field__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F79E0
#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TLobby__sub_800F7A50(void* p);
int TLobby__sub_800F7A64(void);

void bswap_enemy_state__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void TLobby__sub_800F7A1C(void* p) { bswap_enemy_state__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }
void TLobby__sub_800F7A50(void* p) { *(u8*)((char*)p + 0x0) = 10; *(u8*)((char*)p + 0x1) = 3; }
int TLobby__sub_800F7A64(void) { return 4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F7B84
#include "types.h"

extern "C" {

void reset_keyboard_control__6TLobbyFv(void);
void handle_disconnect_cleanup(void);
int TLobby__sub_800F7A8C(void);
int TLobby__sub_800F7B08(void);
int get_global_state__14TOKeyMachine01Fv(void);

void reset_keyboard_control__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_800F7A8C(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F7F5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_state__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_800F7FB8();
M2C_UNK TLobby__sub_800F8024();
M2C_UNK TLobby__sub_800F80D8();

void dispatch_state__6TLobbyFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 1:
        TLobby__sub_800F80D8();
        return;
    case 2:
        TLobby__sub_800F8024();
        return;
    case 3:
        TLobby__sub_800F7FB8();
    case 0:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8090
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_fadeout_state__6TLobbyFi(s32 arg0);

extern void *lbl_805D5330;
extern const f32 lbl_805DA8E8;

void init_fadeout_state__6TLobbyFi(s32 arg0) {
    if ((void *) lbl_805D5330 != NULL) {
        M2C_FIELD(lbl_805D5330, s32 *, 0x28) = arg0;
        M2C_FIELD(lbl_805D5330, f32 *, 0x1C) = (f32) lbl_805DA8E8;
        M2C_FIELD(lbl_805D5330, s8 *, 0x20) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x21) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x22) = 0;
        M2C_FIELD(lbl_805D5330, s32 *, 0x24) = 2;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8144
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_fade_params__6TLobbyFi(s32 arg0);

extern void *lbl_805D5330;
extern const f32 lbl_805DA904;

void set_fade_params__6TLobbyFi(s32 arg0) {
    if ((void *) lbl_805D5330 != NULL) {
        M2C_FIELD(lbl_805D5330, s32 *, 0x28) = arg0;
        M2C_FIELD(lbl_805D5330, f32 *, 0x1C) = (f32) lbl_805DA904;
        M2C_FIELD(lbl_805D5330, s8 *, 0x20) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x21) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x22) = 0;
        M2C_FIELD(lbl_805D5330, s32 *, 0x24) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F818C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_quest_thread_state__6TLobbyFv(void);

extern void *lbl_805D5330;

s32 get_quest_thread_state__6TLobbyFv(void) {
    if ((void *) lbl_805D5330 != NULL) {
        return M2C_FIELD(lbl_805D5330, s32 *, 0x24);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8208
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *ct_register__6TLobbyFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_80499970[];
extern void * lbl_805D5330;

void *ct_register__6TLobbyFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80499970;
    lbl_805D5330 = arg0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8530
#include "types.h"

extern "C" {

void TLobby__sub_800F8530(void);

void TLobby__sub_800F8530(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F85C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLobby__sub_800F85C0(void *arg0, s16 arg1);
void destroy_task_object__12TBoss3VoloptFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void set_value__15TWindowCtrlMainFii(void *, int);

extern M2C_UNK lbl_804999A0[];

void *TLobby__sub_800F85C0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999A0;
        set_value__15TWindowCtrlMainFii(M2C_FIELD(arg0, void **, 0x24), 0);
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8628
#include "types.h"

extern "C" {

void* init_entry_fields__6TLobbyFPviii(void* a0, int a1, int a2, int a3);
int init_object__12TBoss3VoloptFPvPv(void);

    extern unsigned char lbl_804999A0[];
    extern const float lbl_805DA8E8;
void* init_entry_fields__6TLobbyFPviii(void* a0, int a1, int a2, int a3) { init_object__12TBoss3VoloptFPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804999A0; *(int*)((char*)a0 + 0x28) = a2; *(float*)((char*)a0 + 0x1c) = lbl_805DA8E8; *(unsigned char*)((char*)a0 + 0x21) = 0; *(unsigned char*)((char*)a0 + 0x22) = 0; *(unsigned char*)((char*)a0 + 0x20) = 255; *(int*)((char*)a0 + 0x24) = a3; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F86FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLobby__sub_800F86FC(void *arg0, s16 arg1);
void *init_fade__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2);
void destroy_task_object__12TBoss3VoloptFPvs(void *, int);
void init_object__12TBoss3VoloptFPvPv(void *, void *);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804999B8[];

void *TLobby__sub_800F86FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999B8;
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_fade;
extern const f32 lbl_805DA904;
extern M2C_UNK lbl_804999B8[];

void *init_fade__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2) {
    init_object__12TBoss3VoloptFPvPv(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999B8;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805DA904;
    M2C_FIELD(arg0, u8 *, 0x20) = 0;
    M2C_FIELD(arg0, u8 *, 0x21) = 0;
    M2C_FIELD(arg0, u8 *, 0x22) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8AA8
#include "types.h"

extern "C" {

void reset_keyboard_state__6TLobbyFv(void);
int reset__16TKeyBoardControlFv(void);

    extern unsigned char lbl_805D535A;
void reset_keyboard_state__6TLobbyFv(void) { lbl_805D535A = 0; reset__16TKeyBoardControlFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8AD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800F8AD0(void);

extern u32 lbl_805D5350;
extern s8 lbl_805D535A;

void TLobby__sub_800F8AD0(void) {
    if ((u32) lbl_805D5350 != 0U) {
        lbl_805D535A = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8AF8
#include "types.h"

extern "C" {

void clear_callback_and_reset_keyboard__6TLobbyFv(void);
void TLobby__sub_800F8BD8(void);
int TKeyBoardControl__sub_8000F92C(void);
int set_keyboard_mode__6TLobbyFi(int);
int reset__16TKeyBoardControlFv(void);

void clear_callback_and_reset_keyboard__6TLobbyFv(void) { set_keyboard_mode__6TLobbyFi(0); reset__16TKeyBoardControlFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8BD8
#include "types.h"

extern "C" {

void clear_callback_and_reset_keyboard__6TLobbyFv(void);
void TLobby__sub_800F8BD8(void);
int TKeyBoardControl__sub_8000F92C(void);
int set_keyboard_mode__6TLobbyFi(int);
int reset__16TKeyBoardControlFv(void);

void TLobby__sub_800F8BD8(void) { reset__16TKeyBoardControlFv(); TKeyBoardControl__sub_8000F92C(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8D08
#include "types.h"

extern "C" {

void reset_read_state__6TLobbyFv(void);

    extern int lbl_805D5340;
    extern int lbl_805D5344;
    extern int lbl_805D5348;
void reset_read_state__6TLobbyFv(void) { lbl_805D5340 = 0; lbl_805D5344 = 0; lbl_805D5348 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8F34
#include "types.h"

extern "C" {

void TLobby__sub_800F8F34(void);

    extern unsigned char lbl_805D5358;
void TLobby__sub_800F8F34(void) { lbl_805D5358 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8F40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state_byte__6TLobbyFv(void);

extern s8 lbl_805D5358;
extern u8 lbl_805D5359;

void reset_state_byte__6TLobbyFv(void) {
    if ((u8) lbl_805D5359 == 0) {
        lbl_805D5358 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8F58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void wait_ready_loop__6TLobbyFv(void);
s32 TLobby__sub_800F8FB8();
M2C_UNK TLobby__sub_801384E4();
M2C_UNK set_state__15TAdPlayerLoadGCFi(M2C_UNK);
s32 get_main_phase();
M2C_UNK render_tick__Fv();

extern s8 lbl_805D5359;

void wait_ready_loop__6TLobbyFv(void) {
    lbl_805D5359 = 0;
loop_1:
    if (TLobby__sub_800F8FB8() != 1) {
        if (get_main_phase() == 0xF) {
            TLobby__sub_801384E4();
        }
        set_state__15TAdPlayerLoadGCFi(1);
        lbl_805D5359 = 1;
        render_tick__Fv();
        goto loop_1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9690
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 write_packet_header__6TLobbyFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);
s32 alloc_download_quest__6TLobbyFPviPv(u8 *arg0, s32 arg1, s32 *arg2);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C378(M2C_UNK *, void *, s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C48C(M2C_UNK *, s32);
M2C_UNK init_single_player_chr_select__6TLobbyFPv(M2C_UNK *);
M2C_UNK TLobby__sub_800F7DAC(void *, s32);
s32 alloc__22TQuestVmDownLoadServerFPv(s32);

struct Sp8_800f9690 { M2C_UNK8 data[240]; };
u32 write_packet_header__6TLobbyFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    struct Sp8_800f9690 sp8;
    u32 v0 = (u32)M2C_FIELD(arg0, s32 *, 0);
    s32 v4 = M2C_FIELD(arg0, s32 *, 4);

    if (v0 > arg3) {
        return 0U;
    }
    init_single_player_chr_select__6TLobbyFPv((M2C_UNK *)&sp8);
    TAdSinglePlyChrSelectGC__sub_8007C48C((M2C_UNK *)&sp8, v4);
    TAdSinglePlyChrSelectGC__sub_8007C378((M2C_UNK *)&sp8, arg0 + 8, arg1 - 8);
    TLobby__sub_800F7DAC(arg0 + 8, arg2);
    return v0;
}

struct Sp8_800f970c { M2C_UNK8 data[240]; };
s32 alloc_download_quest__6TLobbyFPviPv(u8 *arg0, s32 arg1, s32 *arg2) {
    struct Sp8_800f970c sp8;
    s32 v0 = M2C_FIELD(arg0, s32 *, 0);
    s32 v4 = M2C_FIELD(arg0, s32 *, 4);
    s32 ret;

    ret = alloc__22TQuestVmDownLoadServerFPv(v0);
    if (ret == 0) {
        return 0;
    }
    init_single_player_chr_select__6TLobbyFPv((M2C_UNK *)&sp8);
    TAdSinglePlyChrSelectGC__sub_8007C48C((M2C_UNK *)&sp8, v4);
    TAdSinglePlyChrSelectGC__sub_8007C378((M2C_UNK *)&sp8, arg0 + 8, arg1 - 8);
    TLobby__sub_800F7DAC(arg0 + 8, ret);
    if (arg2 != NULL) {
        *arg2 = v0;
    }
    return ret;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9A60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_800F9A60(void *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(int);
void TItemDrop__sub_800F9C00(void *);
void *ct_object__9TItemDropFPv(void *, void *);
void memset(void *, int, int);
void strncpy(void *, void *, int);

extern M2C_UNK lbl_8050113C[];
struct VOff_800F9A60_o_800f9a60 { char pad_0[0x28]; char f_28[1]; };

void TLobby__sub_800F9A60(void *arg0, void *arg1, void *arg2) {
    struct VOff_800F9A60_o_800f9a60 *o;
    o = (struct VOff_800F9A60_o_800f9a60 *)__nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = (struct VOff_800F9A60_o_800f9a60 *)ct_object__9TItemDropFPv(o, lbl_8050113C);
    }
    memset(o->f_28, 0, 17);
    strncpy(o->f_28, arg0, 16);
    M2C_FIELD(o, void **, 0x0) = o->f_28;
    M2C_FIELD(o, void **, 0x1C) = arg1;
    M2C_FIELD(o, void **, 0x20) = arg2;
    TItemDrop__sub_800F9C00(o);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9D38
#include "types.h"

extern "C" {

void set_stream_and_load_file__6TLobbyFi(int a0);
int load_file__8TGStreamFi(void);

    extern int lbl_805D5338;
void set_stream_and_load_file__6TLobbyFi(int a0) { lbl_805D5338 = a0; load_file__8TGStreamFi(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9D5C
#include "types.h"

extern "C" {

void set_stream_state__6TLobbyFi(int a0);
int TGStream__sub_800FDBA8(void);

    extern int lbl_805D5338;
void set_stream_state__6TLobbyFi(int a0) { lbl_805D5338 = a0; TGStream__sub_800FDBA8(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9DA0
#include "types.h"

extern "C" {

s32 get_file_size__6TLobbyFv(void);
int TLobby__sub_800FD944(void*);
s32 TLobby__sub_803CC500();
s32 TLobby__sub_803CCE9C(s32);
s32 TLobby__sub_803CD3A8(s32, s32);
int update_lobby_scene__6TSceneFPv(void* p);

s32 get_file_size__6TLobbyFv(void) {
    s32 temp_r31;
    s32 temp_r3;
    s32 uninit;

    temp_r3 = TLobby__sub_803CD3A8(uninit, 0);
    if (temp_r3 == 0) {
        return -1;
    }
    temp_r31 = TLobby__sub_803CC500();
    TLobby__sub_803CCE9C(temp_r3);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9DF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800F9DF4(int a0);
void run_frame__6TLobbyFv(void);
int TGStream__sub_800FDADC(void);
u32 TLoadCtrl__sub_800F9F00();
M2C_UNK TLobby__sub_800F8AD0();
M2C_UNK TLobby__sub_800F8F34();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK empty_func2__7TObjectFv(s32);
M2C_UNK empty_func__7TObjectFv(s32);
M2C_UNK fn_80141A30();
M2C_UNK fn_801E2C50();
M2C_UNK TLobby__sub_803382E4();
s8 func_801A5E54__Fv();
M2C_UNK func_803DCDFC__Fv();
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK render_nodes__7TObjectFv(s32);
M2C_UNK render_tick__Fv();
M2C_UNK run_tasks__7TObjectFv(s32);
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK system_reset();

    extern int lbl_805D5338;
void TLobby__sub_800F9DF4(int a0) { lbl_805D5338 = a0; TGStream__sub_800FDADC(); }

extern s32 tl_su;
extern s32 tl_camera;
extern s32 tl_07;
extern s32 tl_particle;
extern s32 tl_fade;

void run_frame__6TLobbyFv(void) {
    func_803DCDFC__Fv();
    TLobby__sub_800F8F34();
    run_tasks__7TObjectFv(tl_su);
    run_tasks__7TObjectFv(tl_camera);
    run_tasks__7TObjectFv(tl_07);
    run_tasks__7TObjectFv(tl_particle);
    if ((TLoadCtrl__sub_800F9F00() != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
        run_tasks__7TObjectFv(tl_fade);
    }
    set_depth_buffer_settings_1__Fv();
    render_nodes__7TObjectFv(tl_su);
    render_nodes__7TObjectFv(tl_07);
    render_nodes__7TObjectFv(tl_particle);
    if ((TLoadCtrl__sub_800F9F00() != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
        render_nodes__7TObjectFv(tl_fade);
    }
    empty_func__7TObjectFv(tl_su);
    empty_func2__7TObjectFv(tl_su);
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        system_reset();
        fn_801E2C50();
    }
    fn_80141A30();
    if (func_801A5E54__Fv() != 0) {
        TLobby__sub_800F8AD0();
    }
    TLobby__sub_803382E4();
    render_tick__Fv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9F4C
#include "types.h"

extern "C" {

void free_static_buffer__6TLobbyFPv(void* a0);
void alloc_from_heap__6TLobbyFPv(void* a0);
void pump_frames__6TLobbyFv(void);
int run_frame__6TLobbyFv();
s32 TLobby__sub_800F9FD0();
int TLobby__sub_800FA464();
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

    extern int lbl_805D537C;
void free_static_buffer__6TLobbyFPv(void* a0) { heap_free__5THeapFPv((void*)(lbl_805D537C), a0); }

    extern int lbl_805D537C;
void alloc_from_heap__6TLobbyFPv(void* a0) { heap_alloc__5THeapFUl((void*)(lbl_805D537C), a0); }

void pump_frames__6TLobbyFv(void) {
loop_1:
    if (TLobby__sub_800F9FD0() != 0) {
        TLobby__sub_800FA464();
        run_frame__6TLobbyFv();
        goto loop_1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA044
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_named_entry__6TLobbyFii(s32 arg0, s32 arg1);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, s32, M2C_UNK);

void add_named_entry__6TLobbyFii(s32 arg0, s32 arg1) {
    u8 *var_r31;

    var_r31 = alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = link_into_list__6TLobbyFPv();
    }
    strncpy(var_r31 + 8, arg1, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 4;
    M2C_FIELD(var_r31, s32 *, 0x64) = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA0A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_and_close__6TLobbyFv(void);
M2C_UNK pop_and_close__6TLobbyFv();

extern u8 *lbl_805D5360;
extern s32 lbl_805D536C;

void notify_and_close__6TLobbyFv(void) {
    M2C_UNK (*temp_r12)(void *);
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(lbl_805D5360, s32 **, 0x34);
    if (temp_r3 != NULL) {
        *temp_r3 = 1;
    }
    temp_r12 = M2C_FIELD(lbl_805D5360, M2C_UNK (**)(void *), 0x40);
    if (temp_r12 != NULL) {
        temp_r12(lbl_805D5360 + 0x44);
    }
    pop_and_close__6TLobbyFv();
    lbl_805D536C = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA100
#include "types.h"

extern "C" {

void destroy_instance__6TLobbyFv(void);
int TLobby__sub_803CCE9C(void*);

    extern int lbl_805D5374;
void destroy_instance__6TLobbyFv(void) { TLobby__sub_803CCE9C((void*)(lbl_805D5374)); lbl_805D5374 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA12C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void pop_and_close__6TLobbyFv(void);
M2C_UNK TLobby__sub_800FA7E0(void *, M2C_UNK);

extern void *lbl_805D5360;

void pop_and_close__6TLobbyFv(void) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(lbl_805D5360, void **, 0x38);
    TLobby__sub_800FA7E0(lbl_805D5360, 1);
    lbl_805D5360 = temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA164
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_file_load_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
s32 TLobby__sub_803CC500();
s32 TLobby__sub_803CC53C(s32);
M2C_UNK TLobby__sub_803CCE9C(s32);
s32 TLobby__sub_803CD3A8(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DE7BC(void *, s32, M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, s32, M2C_UNK);

struct Ent_800fa164;

s32 create_file_load_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4) {
    struct Ent_800fa164 *var_r31;
    s32 temp_r3;

    if (arg4 != NULL) {
        *arg4 = NULL;
    }
    temp_r3 = TLobby__sub_803CD3A8(arg0, 0);
    if (temp_r3 == 0) {
        return -2;
    }
    if (TLobby__sub_803CC500() > 0x40000) {
        TLobby__sub_803CCE9C(temp_r3);
        return -3;
    }
    var_r31 = (struct Ent_800fa164 *)alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = (struct Ent_800fa164 *)link_into_list__6TLobbyFPv();
    }
    strncpy((u8 *)var_r31 + 8, arg0, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 2;
    M2C_FIELD(var_r31, s32 *, 0x3C) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x30) = TLobby__sub_803CC53C(temp_r3);
    TLobby__sub_803CCE9C(temp_r3);
    M2C_FIELD(var_r31, s32 *, 0x34) = 0;
    M2C_FIELD(var_r31, u32 *, 0x40) = arg2;
    if (arg2 != 0U) {
        TLobby__sub_803DE7BC((u8 *)var_r31 + 0x44, arg3, 8);
    }
    if (arg4 != NULL) {
        *arg4 = var_r31;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA2A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_named_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4);
s32 TLobby__sub_803CC500(int);
s32 TLobby__sub_803CC53C(int);
M2C_UNK TLobby__sub_803CCE9C(int);
s32 TLobby__sub_803CD3A8(void *, int);
M2C_UNK TLobby__sub_803DE7BC(void *, void *, int);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, void *, int);

s32 create_named_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4) {
    u8 *var_r31;
    s32 temp_r3;

    if (arg4 != NULL) {
        *arg4 = NULL;
    }
    temp_r3 = TLobby__sub_803CD3A8((void *) (arg0), (int) (0));
    if (temp_r3 == 0) {
        return -2;
    }
    var_r31 = alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = link_into_list__6TLobbyFPv();
    }
    strncpy((void *) (var_r31 + 8), (void *) (arg0), (int) (0x20));
    M2C_FIELD(var_r31, s32 *, 0) = 1;
    M2C_FIELD(var_r31, s32 *, 0x28) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x2C) = TLobby__sub_803CC500((int) (temp_r3));
    M2C_FIELD(var_r31, s32 *, 0x30) = TLobby__sub_803CC53C((int) (temp_r3));
    TLobby__sub_803CCE9C((int) (temp_r3));
    M2C_FIELD(var_r31, s32 *, 0x34) = 0;
    M2C_FIELD(var_r31, u32 *, 0x40) = arg2;
    if (arg2 != 0U) {
        TLobby__sub_803DE7BC((void *) (var_r31 + 0x44), (void *) (arg3), (int) (8));
    }
    if (arg4 != NULL) {
        *arg4 = var_r31;
    }
    return M2C_FIELD(var_r31, s32 *, 0x2C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA388
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 request_file_read__6TLobbyFiiPvPv(s32 arg0, s32 arg1, s32 *arg2, void **arg3);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
s32 TLobby__sub_803CC500(s32);
s32 TLobby__sub_803CC53C(s32);
M2C_UNK TLobby__sub_803CCE9C(s32);
s32 TLobby__sub_803CD3A8(s32, M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, s32, M2C_UNK);

struct Ent_800fa388;

s32 request_file_read__6TLobbyFiiPvPv(s32 arg0, s32 arg1, s32 *arg2, void **arg3) {
    struct Ent_800fa388 *var_r31;
    s32 temp_r3;

    if (arg3 != NULL) {
        *arg3 = NULL;
    }
    temp_r3 = TLobby__sub_803CD3A8(arg0, 0);
    if (temp_r3 == 0) {
        return -2;
    }
    var_r31 = (struct Ent_800fa388 *)alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = (struct Ent_800fa388 *)link_into_list__6TLobbyFPv();
    }
    strncpy((u8 *)var_r31 + 8, arg0, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 1;
    M2C_FIELD(var_r31, s32 *, 0x28) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x2C) = TLobby__sub_803CC500(temp_r3);
    M2C_FIELD(var_r31, s32 *, 0x30) = TLobby__sub_803CC53C(temp_r3);
    TLobby__sub_803CCE9C(temp_r3);
    M2C_FIELD(var_r31, s32 **, 0x34) = arg2;
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    M2C_FIELD(var_r31, s32 *, 0x40) = 0;
    if (arg3 != NULL) {
        *arg3 = var_r31;
    }
    return M2C_FIELD(var_r31, s32 *, 0x2C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA73C
#include "types.h"

extern "C" {

void destroy_game_heap__6TLobbyFv(void);
int safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
int free_chr_select_data__6TLobbyFv(void);
int TLobby__sub_800FA260(void);
int __dt__5THeapFv(void*, void*);

    extern int lbl_805D5370;
    extern int lbl_805D537C;
void destroy_game_heap__6TLobbyFv(void) { TLobby__sub_800FA260(); safe_free__23TAdSinglePlyChrSelectGCFUi((void*)(lbl_805D5370)); free_chr_select_data__6TLobbyFv(); __dt__5THeapFv((void*)(lbl_805D537C), (void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA774
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_download_state__6TLobbyFv(void);
M2C_UNK init_download_buffers__6TLobbyFv();
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 __ct__5THeapFUli(M2C_UNK, M2C_UNK, M2C_UNK);
s32 __nw__5THeapFUl(M2C_UNK);

extern s32 lbl_805D5360;
extern s32 lbl_805D5364;
extern s32 lbl_805D5368;
extern s32 lbl_805D536C;
extern s32 lbl_805D5370;
extern s32 lbl_805D5374;
extern s32 lbl_805D5378;
extern s32 lbl_805D537C;

void init_download_state__6TLobbyFv(void) {
    s32 var_r0;

    init_download_buffers__6TLobbyFv();
    lbl_805D5370 = alloc__22TQuestVmDownLoadServerFPv(0x800);
    lbl_805D5364 = 0;
    lbl_805D5360 = 0;
    lbl_805D5374 = 0;
    lbl_805D536C = 0;
    lbl_805D5368 = 0;
    lbl_805D5378 = 0;
    var_r0 = __nw__5THeapFUl(0x14);
    if (var_r0 != 0) {
        var_r0 = __ct__5THeapFUli(var_r0, 0x4000, 0x20);
    }
    lbl_805D537C = var_r0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA848
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void link_into_list__6TLobbyFPv(void *arg0);

extern void *lbl_805D5360;
extern void *lbl_805D5364;
extern s32 lbl_805D5368;
extern s32 lbl_805D5378;

void link_into_list__6TLobbyFPv(void *arg0) {
    if ((void *) lbl_805D5360 == NULL) {
        lbl_805D5360 = arg0;
    }
    if ((void *) lbl_805D5364 != NULL) {
        M2C_FIELD(lbl_805D5364, void **, 0x38) = arg0;
    }
    lbl_805D5364 = arg0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    lbl_805D5368 += 1;
    M2C_FIELD(arg0, s32 *, 4) = lbl_805D5378++;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FC3CC
#include "types.h"

extern "C" {

void TLobby__sub_800FC3CC(void);
void set_ending_callback__6TLobbyFv(void);

void TLobby__sub_800FC3CC(void) {  }

    extern unsigned char lbl_8049C730[];
    extern int lbl_805D5398;
void set_ending_callback__6TLobbyFv(void) { lbl_805D5398 = (int)lbl_8049C730; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FD78C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_range__6TLobbyFPvi(void *arg0, s32 arg1);

void init_range__6TLobbyFPvi(void *arg0, s32 arg1) {
    s32 temp_r5;

    M2C_FIELD(arg0, s32 *, 4) = arg1;
    temp_r5 = arg1 + 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_r5;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_r5;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FDF7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void read_data_sync__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK reset_read_state__6TLobbyFv();
M2C_UNK set_read_params__6TLobbyFiii(s32 *, s32, s32);
M2C_UNK run_frame__6TLobbyFv();
s32 TLobby__sub_803CC4C0(s32);
M2C_UNK TLobby__sub_803CCB5C();

extern s32 lbl_805D53D4;

void read_data_sync__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = arg0;
    TLobby__sub_803CCB5C();
    set_read_params__6TLobbyFiii(&sp8, arg1, arg2);
loop_1:
    if (TLobby__sub_803CC4C0(sp8) != 3) {
        run_frame__6TLobbyFv();
        goto loop_1;
    }
    reset_read_state__6TLobbyFv();
    lbl_805D53D4 += arg1 << 0xB;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102DD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_matching_id__6TLobbyFiUs(s32 arg0, u16 arg1);

extern s32 lbl_805D53A0;
extern s32 lbl_805D5E50;

u8 is_matching_id__6TLobbyFiUs(s32 arg0, u16 arg1) {
    int var_r5;

    var_r5 = 0;
    if (((s32) lbl_805D5E50 == 0) && ((s32) arg1 == (s32) lbl_805D53A0)) {
        var_r5 = 1;
    }
    return (u8) var_r5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102E00
#include "types.h"

extern "C" {

void bswap_shop_item__6TLobbyFPv(void* p);
void send_item_and_handle_60__6TLobbyFPv(void* p);
void copy_item_data__6TLobbyFPvPv(void* p, void* q);
void TLobby__sub_80102EBC(void* p);
void bswap_6x5D__6TLobbyFPv(void* p);
void send_6x5D__6TLobbyFPv(void* p);
void* init_fields__6TLobbyFPv(void* p);
void init_default_fields__6TLobbyFPv(void* a0);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap__9TItemDataFv(void*);
int TObjPlayer__sub_80102CE0(void*);

void bswap_shop_item__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap__9TItemDataFv((char*)p + 0x4); }
void send_item_and_handle_60__6TLobbyFPv(void* p) { bswap_shop_item__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }
void copy_item_data__6TLobbyFPvPv(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u8*)((char*)p + 0x2) = *(u8*)((char*)q + 0x2); *(u8*)((char*)p + 0x3) = *(u8*)((char*)q + 0x3); *(u8*)((char*)p + 0x4) = *(u8*)((char*)q + 0x4); *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x5); *(u32*)((char*)p + 0x6) = *(u32*)((char*)q + 0x6); *(u16*)((char*)p + 0xa) = *(u16*)((char*)q + 0xa); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); }
void TLobby__sub_80102EBC(void* p) { *(u8*)((char*)p + 0x0) = 94; *(u8*)((char*)p + 0x1) = 6; }
void bswap_6x5D__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_80102CE0((char*)p + 0x8); bswap__9TItemDataFv((char*)p + 0x10); }
void send_6x5D__6TLobbyFPv(void* p) { bswap_6x5D__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }
void* init_fields__6TLobbyFPv(void* p) { init_default_fields__6TLobbyFPv((void*)(p)); *(unsigned char*)((char*)p + 0x24) = 2; *(unsigned char*)((char*)p + 0x25) = 0; *(unsigned char*)((char*)p + 0x26) = 0; *(unsigned char*)((char*)p + 0x27) = 0; *(unsigned char*)((char*)p + 0x1) = 10; return p; }

    extern const float lbl_805DAA88;
void init_default_fields__6TLobbyFPv(void* a0) { *(short*)((char*)a0 + 0x4) = 0; *(short*)((char*)a0 + 0x6) = 0; *(float*)((char*)a0 + 0xc) = lbl_805DAA88; *(float*)((char*)a0 + 0x8) = lbl_805DAA88; *(unsigned char*)((char*)a0 + 0x0) = 93; *(unsigned char*)((char*)a0 + 0x1) = 9; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102FCC
#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_8010314C();
void set_item_count__6TLobbyFPvs(void* p, s16 v);

void bswap_pick_up_item_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_32__FPUl(arg0 + 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80103010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
extern "C" {
M2C_UNK bswap_pick_up_item_request__6TLobbyFi();
M2C_UNK dispatch_packet__6TLobbyFPv(void *);
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK bswap_pick_up_item_packet__6TLobbyFi();
M2C_UNK TLobby__send_and_handle_60(void *);
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_8010314C();
void set_item_count__6TLobbyFPvs(void* p, s16 v);

void send_pick_up_item__6TLobbyFi(s32 arg0) {
    bswap_pick_up_item_packet__6TLobbyFi();
    TLobby__send_and_handle_60((void *) (arg0));
}

}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801030A8
#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_8010314C();
void set_item_count__6TLobbyFPvs(void* p, s16 v);

void bswap_pick_up_item_request__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80103114
#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_8010314C();
void set_item_count__6TLobbyFPvs(void* p, s16 v);

void set_item_count__6TLobbyFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
s32 drop_stacked_item_passthrough__6TLobbyFi(s32 arg0) {
    TLobby__sub_8010314C();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80103F5C
#include "types.h"

extern "C" {

void clear_object_count__6TLobbyFv(void);

    extern int lbl_805D5428;
void clear_object_count__6TLobbyFv(void) { lbl_805D5428 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80104038
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_boss_rocks__6TLobbyFv(void);
M2C_UNK clear_id__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK free__11TOBoss4RockFUi(s32);

extern u32 lbl_805D5418;
extern s32 lbl_805D541C;
extern s32 lbl_805D5420;
extern s32 lbl_805D5424;
extern s32 lbl_805D5428;
extern s32 lbl_805D542C;
extern M2C_UNK lbl_805D5430;

void free_boss_rocks__6TLobbyFv(void) {
    free__11TOBoss4RockFUi(lbl_805D542C);
    lbl_805D542C = 0;
    free__11TOBoss4RockFUi(lbl_805D5424);
    lbl_805D5424 = 0;
    lbl_805D5428 = 0;
    free__11TOBoss4RockFUi(lbl_805D5420);
    lbl_805D5420 = 0;
    free__11TOBoss4RockFUi(lbl_805D541C);
    lbl_805D541C = 0;
    if ((u32) lbl_805D5418 != 0U) {
        free__11TOBoss4RockFUi(lbl_805D5418 - 0x10);
    }
    lbl_805D5418 = 0U;
    clear_id__10TObjPlayerFPv(&lbl_805D5430);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801040BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_objects__6TLobbyFv(void);
M2C_UNK TLobby__sub_80103F68();
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
M2C_UNK clear_id__10TObjPlayerFPv(M2C_UNK *);
s32 TCheckRoomSequence__sub_80396920(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK drop_stacked_item_passthrough__6TLobbyFi[];
extern s32 lbl_805D5418;
extern s32 lbl_805D541C;
extern s32 lbl_805D5420;
extern s32 lbl_805D5424;
extern s32 lbl_805D5428;
extern s32 lbl_805D542C;
extern M2C_UNK lbl_805D5430;

void alloc_objects__6TLobbyFv(void) {
    lbl_805D5418 = TCheckRoomSequence__sub_80396920(alloc_buffer__11TOBoss4RockFPv(0x1E610), drop_stacked_item_passthrough__6TLobbyFi, 0, 0x24, 0xD80);
    lbl_805D541C = alloc_buffer__11TOBoss4RockFPv(0x48);
    lbl_805D5420 = alloc_buffer__11TOBoss4RockFPv(0x48);
    lbl_805D5424 = alloc_buffer__11TOBoss4RockFPv(0x40);
    lbl_805D5428 = 0;
    lbl_805D542C = alloc_buffer__11TOBoss4RockFPv(0x24);
    clear_id__10TObjPlayerFPv(&lbl_805D5430);
    TLobby__sub_80103F68();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80104144
#include "types.h"

extern "C" {

int get_lobby_flag__6TLobbyFv(void);

    extern int lbl_805D5868;
int get_lobby_flag__6TLobbyFv(void) {  return lbl_805D5868; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010414C
#include "types.h"

extern "C" {

void bswap_player_packet__6TLobbyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);

void bswap_player_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80104188
#include "types.h"

extern "C" {

void update_and_send__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_player_packet__6TLobbyFPv(void*);

void update_and_send__6TLobbyFPv(void* p) { bswap_player_packet__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801041BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801041BC(void *arg0);

void TLobby__sub_801041BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s8 *, 0) = 0x63;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801041D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801041D8(void);
M2C_UNK set_flags__10TObjPlayerFPvUi(M2C_UNK *, M2C_UNK);

extern M2C_UNK lbl_805D5430;

void TLobby__sub_801041D8(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D5430, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80104200
#include "types.h"

extern "C" {

void bswap_item__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__9TItemDataFv(void*);

void bswap_item__6TLobbyFPv(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap__9TItemDataFv((char*)p + 0x10); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80104350
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80104350(void);
void set_boss_buf_entry__6TLobbyFii(int a0, int a1);
int TLobby__sub_80104384(int a0);
s32 get_item_data__6TLobbyFUi(u32 arg0);
void forward_message__6TLobbyFiUi(s32 arg0, u32 arg1);
void mark_selected__6TLobbyFv(void);
int get_drop_flag__6TLobbyFv(void);
s32 TItemData__sub_8010C8B4();
M2C_UNK init_forward__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK TItemData__sub_8010E59C(u32, s32);

extern M2C_UNK lbl_805D5430;

void TLobby__sub_80104350(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D5430);
}

    extern int* lbl_805D54E8;
void set_boss_buf_entry__6TLobbyFii(int a0, int a1) { lbl_805D54E8[(unsigned short)(a1)] = a0; }

    extern int* lbl_805D54E8;
int TLobby__sub_80104384(int a0) {  return lbl_805D54E8[(unsigned short)(a0)]; }

s32 get_item_data__6TLobbyFUi(u32 arg0) {
    if (arg0 != 0U) {
        return TItemData__sub_8010C8B4();
    }
    return 0;
}

void forward_message__6TLobbyFiUi(s32 arg0, u32 arg1) {
    if (arg1 != 0U) {
        TItemData__sub_8010E59C(arg1, arg0);
    }
}

    extern int lbl_805D5448;
void mark_selected__6TLobbyFv(void) { lbl_805D5448 = 1; }

    extern int lbl_805D5448;
int get_drop_flag__6TLobbyFv(void) {  return lbl_805D5448; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80104464
#include "types.h"

extern "C" {

void TLobby__sub_80104464(void);
void handle_select_confirm__6TLobbyFv(void);
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 mark_selected__6TLobbyFv();
s32 fn_80077788();
s32 fn_80077790();
s32 fn_801058E8();

void TLobby__sub_80104464(void) {  }
void handle_select_confirm__6TLobbyFv(void) {
    if ((fn_80077790() == 1) || (fn_80077788() == 1)) {
        mark_selected__6TLobbyFv();
        if (get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) != 0U) {
            fn_801058E8();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80104604
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void forward_to_player__6TLobbyFiPv(int arg0, void *arg1);
void handle_player_event__6TLobbyFii(s32 arg0, s32 arg1);
s32 TObjPlayer__sub_80019248();
u32 get_item_field_6__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_equip_field_d04__10TObjPlayerFPv(s32, s32);
s32 TWindowSubComCard__sub_801058F8(s32);
u32 activate_d04_slot__10TObjPlayerFPv(s32);
u32 test_flag3__9TItemDataFPv(s32);
u32 get_item_field_2__9TItemDataFPv(s32);
M2C_UNK fn_801B849C(s32, void *);
M2C_UNK TObjPlayer__sub_801B9EDC(s32, s32);
M2C_UNK TObjPlayer__sub_801BA0F0(s32, s32, M2C_UNK);

s32 obj_isState3_324(s32);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

void forward_to_player__6TLobbyFiPv(int arg0, void *arg1) {
    s32 temp_r3;

    if (arg1 != NULL) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
        if ((temp_r3 != 0) && ((TObjPlayer__sub_80019248() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)) || ((TWindowSubComCard__sub_801058F8(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)))) {
            fn_801B849C(temp_r3, arg1);
            TObjPlayer__sub_801BA0F0(temp_r3, M2C_FIELD(arg1, s32 *, 0xC), 0);
        }
    }
}

s32 obj_isState3_324(s32);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

void handle_player_event__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    u32 var_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg0);
    if ((temp_r3 != 0) && ((TObjPlayer__sub_80019248() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)) || ((TWindowSubComCard__sub_801058F8(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)))) {
        var_r3 = 0U;
        switch (arg1) {
        case 0:
            var_r3 = get_item_field_6__10TObjPlayerFPv(temp_r3);
            break;
        case 1:
            var_r3 = get_item_field_2__9TItemDataFPv(temp_r3);
            break;
        case 2:
            var_r3 = test_flag3__9TItemDataFPv(temp_r3);
            break;
        case 3:
            var_r3 = activate_d04_slot__10TObjPlayerFPv(temp_r3);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            var_r3 = get_equip_field_d04__10TObjPlayerFPv(temp_r3, arg1 + 5);
            break;
        default:
            break;
        }
        if (var_r3 != 0U) {
            TObjPlayer__sub_801B9EDC(temp_r3, get_field_d8__10TObjPlayerFPv());
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80104820
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80104820(s32 arg0);

s32 TLobby__sub_80104820(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 0x12)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010540C
#include "types.h"

extern "C" {

int TLobby__sub_8010540C(void* p);
int TObjPlayer__sub_8011C974(void*);

int TLobby__sub_8010540C(void* p) { return TObjPlayer__sub_8011C974(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105A2C
#include "types.h"

extern "C" {

void dispatch_packet_wrapper__6TLobbyFPv(void* p);
int dispatch_packet__6TLobbyFPv(void*);
int TLobby__sub_80105A60(void*);

void dispatch_packet_wrapper__6TLobbyFPv(void* p) { TLobby__sub_80105A60(p); dispatch_packet__6TLobbyFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105A60
#include "types.h"

extern "C" {

void TLobby__sub_80105A60(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TLobby__sub_80105A60(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x12); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105B28
#include "types.h"

extern "C" {

void process_and_dispatch_packet__6TLobbyFPv(void* p);
int dispatch_packet__6TLobbyFPv(void*);
int bswap_6xa2_fields__6TLobbyFPv(void*);

void process_and_dispatch_packet__6TLobbyFPv(void* p) { bswap_6xa2_fields__6TLobbyFPv(p); dispatch_packet__6TLobbyFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105B5C
#include "types.h"

extern "C" {

void bswap_6xa2_fields__6TLobbyFPv(void* p);
int TLobby__sub_80105A60(void*);
int bswap_32__FPUl(void*);

void bswap_6xa2_fields__6TLobbyFPv(void* p) { TLobby__sub_80105A60(p); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); bswap_32__FPUl((char*)p + 0x20); bswap_32__FPUl((char*)p + 0x24); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105BA8
#include "types.h"

extern "C" {

void *build_6x06_guild_card_packet__6TLobbyFPv(void *arg0);
void build_6x06_send_guild_card(void);

void *build_6x06_guild_card_packet__6TLobbyFPv(void *arg0) {
    build_6x06_send_guild_card();
    *((u8 *)arg0 + 0) = 0xA2;
    *((u8 *)arg0 + 1) = 0x0A;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011B010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 free_rock_objects__6TLobbyFis(s32 arg0, s16 arg1);
M2C_UNK __dl__FPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);

extern s32 lbl_805D54E8;
extern s32 lbl_805D54EC;

s32 free_rock_objects__6TLobbyFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free__11TOBoss4RockFUi(lbl_805D54E8);
        lbl_805D54E8 = 0;
        free__11TOBoss4RockFUi(lbl_805D54EC);
        lbl_805D54EC = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011B074
#include "types.h"

extern "C" {

void* init_bosses__6TLobbyFPv(void* a0);
int TLobby__sub_8011AFB8(void);
int alloc_buffer__11TOBoss4RockFPv(void*);

    extern int lbl_805D54E0;
    extern int lbl_805D54E4;
    extern int lbl_805D54E8;
    extern int lbl_805D54EC;
void* init_bosses__6TLobbyFPv(void* a0) { lbl_805D54EC = alloc_buffer__11TOBoss4RockFPv((void*)48); lbl_805D54E8 = alloc_buffer__11TOBoss4RockFPv((void*)48); TLobby__sub_8011AFB8(); lbl_805D54E0 = 0; lbl_805D54E4 = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011B0C8
#include "types.h"

extern "C" {

void send_item_packet__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_item_packet__6TLobbyFPv(void*);

void send_item_packet__6TLobbyFPv(void* p) { bswap_item_packet__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011B0FC
#include "types.h"

extern "C" {

void bswap_item_packet__6TLobbyFPv(void* p);
int bswap_item__6TLobbyFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_item_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_item__6TLobbyFPv((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011B130
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *init_header_packet__6TLobbyFPv(void *arg0);
M2C_UNK init_header__6TLobbyFPv();

void *init_header_packet__6TLobbyFPv(void *arg0) {
    init_header__6TLobbyFPv();
    M2C_FIELD(arg0, s8 *, 0) = 0x5F;
    M2C_FIELD(arg0, s8 *, 0x28) = 2;
    M2C_FIELD(arg0, s8 *, 0x29) = 0;
    M2C_FIELD(arg0, s8 *, 0x2A) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0xB;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011B188
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_header__6TLobbyFPv(void *arg0);
void drop_stacked_item_passthrough__6TLobbyFi(void *);

void *init_header__6TLobbyFPv(void *arg0) {
    drop_stacked_item_passthrough__6TLobbyFi((void *)((char *)arg0 + 4));
    M2C_FIELD(arg0, u8 *, 0x0) = 95;
    M2C_FIELD(arg0, u8 *, 0x1) = 10;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011B1CC
#include "types.h"

extern "C" {

void bswap_packet__6TLobbyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);

void bswap_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011B208
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 apply_table_entry__6TLobbyFs(s16 arg0);
M2C_UNK copy_short_fields__6TLobbyFPvPv(s32);

extern s32 TLobby__data_805D6140;

s32 apply_table_entry__6TLobbyFs(s16 arg0) {
    if (arg0 > 0xB9F) {
        return 0;
    }
    copy_short_fields__6TLobbyFPvPv(TLobby__data_805D6140 + (arg0 * 4));
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011B24C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_short_fields__6TLobbyFPvPv(void *arg0, void *arg1);

void copy_short_fields__6TLobbyFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131744
#include "types.h"

extern "C" {

void TLobby__sub_80131744(s32 arg0, ...);

void TLobby__sub_80131744(s32 arg0, ...) {}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131794
#include "types.h"

extern "C" {

void debug_print__6TLobbyFii(s32 arg0, ...);

void debug_print__6TLobbyFii(s32 arg0, ...) {}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013292C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 select_download_type__6TLobbyFi(s32 arg0);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);

s32 select_download_type__6TLobbyFi(s32 arg0) {
    if (arg0 & 0x20) {
        return TQuestVmDownLoadServer__sub_8006EF6C(3);
    }
    if (arg0 & 0x40) {
        return TQuestVmDownLoadServer__sub_8006EF6C(4);
    }
    if (arg0 & 0x80) {
        return TQuestVmDownLoadServer__sub_8006EF6C(5);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132EC8
#include "types.h"

extern "C" {

int TLobby__sub_80132EC8(void);

int TLobby__sub_80132EC8(void) { return 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132ED0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_menu_cursor__6TLobbyFv(void);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();
s8 TLobby__sub_80132EC8();

extern s32 lbl_805D5544;

void update_menu_cursor__6TLobbyFv(void) {
    void *temp_r3;

    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 == NULL) {
        lbl_805D5544 = (s32) TLobby__sub_80132EC8();
        return;
    }
    if ((s8) M2C_FIELD(temp_r3, u8 *, 7) >= 5) {
        M2C_FIELD(temp_r3, u8 *, 7) = 1U;
    }
    lbl_805D5544 = (s32) (s8) M2C_FIELD(temp_r3, u8 *, 7);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132F44
#include "types.h"

extern "C" {

void free_keyboard_soft_resources__6TLobbyFv(void);
int free_instance__19TWindowKeyBoardSoftFv(void);
int free_resources__19TWindowKeyBoardSoftFv(void);

void free_keyboard_soft_resources__6TLobbyFv(void) { free_instance__19TWindowKeyBoardSoftFv(); free_resources__19TWindowKeyBoardSoftFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132F68
#include "types.h"

extern "C" {

void update_keyboard_menu__6TLobbyFv(void);
int TLanguage__ct(void*);
int TWindowKeyBoardSoft__sub_80132DA0(void*);
int update_menu_cursor__6TLobbyFv(void);

    extern int lbl_805D5544;
void update_keyboard_menu__6TLobbyFv(void) { update_menu_cursor__6TLobbyFv(); TWindowKeyBoardSoft__sub_80132DA0((void*)(lbl_805D5544)); TLanguage__ct((void*)(lbl_805D5544)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801349C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLobby__sub_801349C8(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804A7008[];

void *TLobby__sub_801349C8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A7008;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80134A20
#include "types.h"

extern "C" {

int TLobby__sub_80134A20(void* p);
int TQuestThread__sub_801F5C50(void*);

int TLobby__sub_80134A20(void* p) { return TQuestThread__sub_801F5C50(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80134A40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_by_index__6TLobbyFi(s32 arg0);
M2C_UNK clear_serial_buffer__22TAdEnterSerialAccessGCFv();
M2C_UNK clear_state();
M2C_UNK store_serial_access_key__22TAdEnterSerialAccessGCFiii(s32, s32, s32);

extern s32 TLobby__data_805D5580;

void dispatch_by_index__6TLobbyFi(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    if ((var_r3 > 3) || (var_r3 < 0)) {
        var_r3 = 0;
    }
    switch (var_r3) {
    case 0:
        clear_state();
        return;
    case 1:
        store_serial_access_key__22TAdEnterSerialAccessGCFiii(TLobby__data_805D5580 + 0x3F8A, TLobby__data_805D5580 + 0x3F9B, TLobby__data_805D5580 + 0x3F3A);
        return;
    case 2:
        clear_serial_buffer__22TAdEnterSerialAccessGCFv();
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80134CC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_option_state__6TLobbyFv(void);
s32 get_option_field_C__17TWindowOptionCtrlFv();

extern s32 lbl_805D5704;

s32 get_option_state__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_option_field_C__17TWindowOptionCtrlFv();
    switch (temp_r3) {
    case 0:
        return lbl_805D5704;
    case 1:
        return 0;
    case 2:
        return 1;
    default:
        return 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80134D54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_counters__6TLobbyFv(void);

extern void *TLobby__data_805D5580;

void clear_counters__6TLobbyFv(void) {
    M2C_FIELD(TLobby__data_805D5580, s32 *, 0xBC04) = 0;
    M2C_FIELD(TLobby__data_805D5580, s32 *, 0xBC18) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80134D74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void disconnect_protocol__6TLobbyFv(void);
M2C_UNK TProtocol__sub_801DCAD4(void *);

extern void *TLobby__data_805D5580;

void disconnect_protocol__6TLobbyFv(void) {
    void *temp_r3;
    temp_r3 = TLobby__data_805D5580;
    if (temp_r3 != NULL) {
        TProtocol__sub_801DCAD4(temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80134DA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80134DA0(int a0);
int init_once__6TLobbyFPv(void* p);
int TLobby__sub_80134DC8(void* p);
int TLobby__sub_80134DE8(void* p);
void reset_lobby_state__6TLobbyFv(void);
M2C_UNK TLobby__sub_8001E5D0();
int fn_800779A0(void*);
int TAdSinglePlyChrSelectGC__sub_80077AE8(void*);
M2C_UNK fn_801DB4E4(s32);
int init_once__6TLobbyFi(void*);

    extern int lbl_805D55A0;
void TLobby__sub_80134DA0(int a0) { lbl_805D55A0 = a0; }

int init_once__6TLobbyFPv(void* p) { return init_once__6TLobbyFi(p); }
int TLobby__sub_80134DC8(void* p) { return fn_800779A0(p); }
int TLobby__sub_80134DE8(void* p) { return TAdSinglePlyChrSelectGC__sub_80077AE8(p); }

extern s32 TLobby__data_805D5580;

void reset_lobby_state__6TLobbyFv(void) {
    TLobby__sub_8001E5D0();
    fn_801DB4E4(TLobby__data_805D5580);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80135FFC
#include "types.h"

extern "C" {

void TLobby__sub_80135FFC(void);

void TLobby__sub_80135FFC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137188
#include "types.h"

extern "C" {

void disable_window_flags__6TLobbyFPv(void* a0);
int set_window_flags_off__11TWindowCtrlFPvi(void*, void*);

    extern int lbl_805D53A0;
void disable_window_flags__6TLobbyFPv(void* a0) { set_window_flags_off__11TWindowCtrlFPvi((void*)(lbl_805D53A0), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137298
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_state__6TLobbyFi(s32 arg0);
M2C_UNK close_and_set_state_13__6TLobbyFv(M2C_UNK);
M2C_UNK reset_state__6TLobbyFv(M2C_UNK);
s32 TLobby__sub_80146740();
M2C_UNK fn_801DB474(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200B28();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200C00();

extern s32 TLobby__data_805D5580;

void handle_state__6TLobbyFi(s32 arg0) {
    s32 temp_r3;

    if (arg0 != 0) {
        TAdSinglePlyChrSelectGC__sub_80200C00();
        temp_r3 = TLobby__sub_80146740();
        switch (temp_r3) {
        case 0:
            fn_801DB474(TLobby__data_805D5580);
            return;
        case 1:
            close_and_set_state_13__6TLobbyFv(0x13);
            return;
        case 2:
            close_and_set_state_13__6TLobbyFv(0x14);
            return;
        }
    } else {
        reset_state__6TLobbyFv(0x20);
        TAdSinglePlyChrSelectGC__sub_80200B28();
        TAdSinglePlyChrSelectGC__sub_80200C00();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013731C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_position_update__6TLobbyFv(void);
M2C_UNK fn_801DB684(s32, s32, s32);
s32 increment_frame__23TAdSinglePlyChrSelectGCFv();
s32 get_player_count__23TAdSinglePlyChrSelectGCFv();

extern s32 TLobby__data_805D5580;

void send_position_update__6TLobbyFv(void) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = increment_frame__23TAdSinglePlyChrSelectGCFv();
    temp_r4 = get_player_count__23TAdSinglePlyChrSelectGCFv();
    fn_801DB684(TLobby__data_805D5580, temp_r4, temp_r31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137360
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void queue_static_object_destruction__6TLobbyFv(void);
M2C_UNK queue_destruction__7TObjectFv(s32);

extern s32 TLobby__data_805D5604;

void queue_static_object_destruction__6TLobbyFv(void) {
    queue_destruction__7TObjectFv(TLobby__data_805D5604);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801379C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state_flags__6TLobbyFv(void);
M2C_UNK buffer_reset();

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55D8;
extern s32 TLobby__data_805D55FC;

void reset_state_flags__6TLobbyFv(void) {
    buffer_reset();
    M2C_FIELD(TLobby__data_805D5580, s32 *, 0x191C) = 1;
    TLobby__data_805D55FC = 1;
    if ((s32) TLobby__data_805D5594 == 0xC) {
        TLobby__data_805D5590 = 5;
        TLobby__data_805D5594 = 0x17;
    }
    TLobby__data_805D55D8 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137A14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_all_objects__6TLobbyFv(void);
void queue_destruction__7TObjectFv(void*);

extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 lbl_805D55D4;
extern u32 TLobby__data_805D55D8;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern u32 lbl_805D55F8;

void destroy_all_objects__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55C8 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55C8);
        TLobby__data_805D55C8 = 0U;
    }
    if ((u32) TLobby__data_805D55CC != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55CC);
        TLobby__data_805D55CC = 0U;
    }
    if ((u32) TLobby__data_805D55D0 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55D0);
        TLobby__data_805D55D0 = 0U;
    }
    if ((u32) lbl_805D55D4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55D4);
        lbl_805D55D4 = 0U;
    }
    if ((u32) TLobby__data_805D55D8 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0U;
    }
    if ((u32) TLobby__data_805D55DC != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D55DC);
        TLobby__data_805D55DC = 0U;
    }
    if ((u32) lbl_805D55E0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55E0);
        lbl_805D55E0 = 0U;
    }
    if ((u32) lbl_805D55E4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55E4);
        lbl_805D55E4 = 0U;
    }
    if ((u32) lbl_805D55EC != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55EC);
        lbl_805D55EC = 0U;
    }
    if ((u32) lbl_805D55F0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55F0);
        lbl_805D55F0 = 0U;
    }
    if ((u32) lbl_805D55F4 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55F4);
        lbl_805D55F4 = 0U;
    }
    if ((u32) lbl_805D55F8 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D55F8);
        lbl_805D55F8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137C90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_player_window__6TLobbyFv(void);
void init_player_window_effect__6TLobbyFv(void);
M2C_UNK clear_lobby_flag__10TObjPlayerFPv();
M2C_UNK init_effect_5f0__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowCtrl__sub_8024AEAC(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);

extern s32 lbl_805D53A0;

void update_player_window__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        clear_lobby_flag__10TObjPlayerFPv();
    }
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
}

extern s32 lbl_805D53A0;

void init_player_window_effect__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        init_effect_5f0__10TObjPlayerFPv();
    }
    TWindowCtrl__sub_8024AEAC(lbl_805D53A0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137D00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_com_card_window__6TLobbyFv(void);
M2C_UNK close_all_windows__6TLobbyFv();
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 TWindowSubComCard__sub_80265BF8(void*);
M2C_UNK fn_801DB0AC(s32, s32);

extern s32 TLobby__data_805D5580;
extern u32 lbl_805D55E4;

void update_com_card_window__6TLobbyFv(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)lbl_805D55E4);
        if (is_visible__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            fn_801DB0AC(TLobby__data_805D5580, temp_r31);
            close_all_windows__6TLobbyFv();
            return;
        }
        if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137D7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_city_warp_menu__6TLobbyFv(void);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void open_city_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv(lbl_805D55E0);
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xB5);
    lbl_805D55E4 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 5);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x4C), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x48), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x49), 6, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x4A), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x4B), 6, 4);
    TWindowSubComCard__sub_80265F60(lbl_805D55E4);
    TWindowSubComCard__sub_80265C30(lbl_805D55E4);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E4);
    TLobby__data_805D5594 = 0x19;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137E60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_room_change__6TLobbyFi(s32 arg0);
void close_and_set_state_12__6TLobbyFv(void);
M2C_UNK init_player_window_effect__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK send_room_change__9TProtocolFi(s32, s32);

extern s32 TLobby__data_805D5580;
extern s32 TLobby__data_805D5588;
extern s32 TLobby__data_805D5594;

void send_room_change__6TLobbyFi(s32 arg0) {
    TLobby__data_805D5588 = 1;
    init_player_window_effect__6TLobbyFv();
    send_room_change__9TProtocolFi(TLobby__data_805D5580, arg0);
    TLobby__data_805D5594 = 0x13;
}

extern s32 TLobby__data_805D5594;

void close_and_set_state_12__6TLobbyFv(void) {
    close_all_windows__6TLobbyFv();
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D5594 = 0x12;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137ED4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_keyboard_window__6TLobbyFv(void);
s32 TKeyBoardControl__ct(s32, s32, s32, s32, s32, s32);
M2C_UNK *get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK TWindow__close(u32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
M2C_UNK fn_80131B18(s32, s32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(s32, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55D8;
extern u32 lbl_805D55F0;
extern s32 lbl_805D55F4;
extern s32 TLobby__data_805D5604;
extern M2C_UNK *lbl_805D5614;
extern u8 lbl_805D5618;
extern M2C_UNK lbl_805DB0B4;

void open_keyboard_window__6TLobbyFv(void) {
    s32 var_r0;
    s32 tmp_r3;

    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close(TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0U;
    }
    if ((u32) lbl_805D55F0 == 0U) {
        if ((s8) lbl_805D5618 == 0) {
            lbl_805D5614 = &lbl_805DB0B4;
            lbl_805D5618 = 1;
        }
        tmp_r3 = TWindowSubComCard__sub_8026CBB8(0xC3);
        lbl_805D55F0 = check_room_seq_4__16TAdChrSelASlotGCFii(tmp_r3, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55F0, get_seq_phase__6TLobbyFPv(0x44), 2, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55F0, lbl_805D5614, 2, 1);
        TWindowSubComCard__sub_80265F60(lbl_805D55F0);
        TWindowSubComCard__sub_80265C30(lbl_805D55F0);
        set_flag_40__16TAdChrSelASlotGCFPv(lbl_805D55F0);
    }
    var_r0 = __nw__7TObjectFUl(0x2C);
    if (var_r0 != 0) {
        var_r0 = TKeyBoardControl__ct(var_r0, TLobby__data_805D5604, 0x10, 0, 0, lbl_805D53A0);
    }
    lbl_805D55F4 = var_r0;
    set_sub_position__15TWindowMakeTeamFPvPv(lbl_805D55F4, TWindowSubComCard__sub_8026CBB8(0xC4));
    fn_80131B18(lbl_805D55F4, TWindowSubComCard__sub_8026CBB8(0xC5));
    TLobby__data_805D5594 = 9;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80137FEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_send_text_list__6TLobbyFv(void);
M2C_UNK init_player_window_effect__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK send_text_list__9TProtocolFv(s32);

extern s32 TLobby__data_805D5580;

void close_and_send_text_list__6TLobbyFv(void) {
    close_all_windows__6TLobbyFv();
    init_player_window_effect__6TLobbyFv();
    send_text_list__9TProtocolFv(TLobby__data_805D5580);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80138018
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_menu_windows__6TLobbyFv(void);
extern void TLobby__sub_8013703C(void);
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
M2C_UNK TWindow__close(s32);
M2C_UNK fn_801DB760(void *);

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void close_menu_windows__6TLobbyFv(void) {
    TLobby__sub_8013990C(6);
    TWindow__close(lbl_805D55E0);
    lbl_805D55E0 = 0;
    TWindow__close(lbl_805D55E4);
    lbl_805D55E4 = 0;
    M2C_FIELD(TLobby__data_805D5580, void **, 0xBBE4) = (void *)TLobby__sub_8013703C;
    fn_801DB760(TLobby__data_805D5580);
    TLobby__data_805D5594 = 8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80138080
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void return_to_main_menu__6TLobbyFv(void);
void TLobby__sub_8013703C();
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK fn_801DB7EC(void *);

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;

void return_to_main_menu__6TLobbyFv(void) {
    u32 t;

    TLobby__sub_8013990C(6);
    t = lbl_805D55E0;
    if (t != 0U) {
        TWindow__close(t);
        lbl_805D55E0 = 0U;
    }
    t = lbl_805D55E4;
    if (t != 0U) {
        TWindow__close(t);
        lbl_805D55E4 = 0U;
    }
    t = TLobby__data_805D55CC;
    if (t != 0U) {
        TWindow__close(t);
        TLobby__data_805D55CC = 0U;
    }
    t = TLobby__data_805D55C8;
    if (t != 0U) {
        TWindow__close(t);
        TLobby__data_805D55C8 = 0U;
    }
    t = TLobby__data_805D55D0;
    if (t != 0U) {
        TWindow__close(t);
        TLobby__data_805D55D0 = 0U;
    }
    M2C_FIELD(TLobby__data_805D5580, void **, 0xBBE4) = (void *)&TLobby__sub_8013703C;
    fn_801DB7EC(TLobby__data_805D5580);
    TLobby__data_805D5594 = 7;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80138140
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_warp_menu__6TLobbyFv(void);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void open_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv(lbl_805D55E0);
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xB5);
    lbl_805D55E4 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x3E), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x3F), 6, 1);
    TWindowSubComCard__sub_80265F60(lbl_805D55E4);
    TWindowSubComCard__sub_80265C30(lbl_805D55E4);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E4);
    TLobby__data_805D5594 = 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801381D0
#include "types.h"

extern "C" {

int close_all_windows__6TLobbyFPv(void* p);
int close_all_windows__6TLobbyFv(void*);

int close_all_windows__6TLobbyFPv(void* p) { return close_all_windows__6TLobbyFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801381F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_make_team_window__6TLobbyFi(s32 arg0);
s32 TWindowMakeTeam__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55EC;
extern s32 TLobby__data_805D5604;

void open_make_team_window__6TLobbyFi(s32 arg0) {
    s32 var_r4;

    var_r4 = __nw__7TObjectFUl(0x38);
    if (var_r4 != 0) {
        var_r4 = TWindowMakeTeam__ct(var_r4, TLobby__data_805D5604, arg0);
    }
    lbl_805D55EC = var_r4;
    TLobby__data_805D5594 = 0xA;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80138244
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_menu_window__6TLobbyFv(void);
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(s32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(u32);

extern s32 TLobby__data_805D5594;
extern u32 lbl_805D55E4;
extern s32 lbl_805D55E8;

void open_menu_window__6TLobbyFv(void) {
    u32 tmp_e4 = lbl_805D55E4;
    if (tmp_e4 != 0U) {
        open__17TWindowOptionCtrlFPv(tmp_e4);
    }
    TLobby__sub_8013990C(0x11);
    lbl_805D55E8 = check_room_seq_4__16TAdChrSelASlotGCFii(TWindowSubComCard__sub_8026CBB8(0xB6), 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E8, get_seq_phase__6TLobbyFPv(0x45), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E8, get_seq_phase__6TLobbyFPv(0x46), 6, 1);
    TWindowSubComCard__sub_80265F60(lbl_805D55E8);
    TWindowSubComCard__sub_80265C30(lbl_805D55E8);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E8);
    set_selected_index__17TWindowSubComCardFPvs(lbl_805D55E8, 0);
    TLobby__data_805D5594 = 0x18;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801382F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void request_game_list__6TLobbyFv(void);
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
M2C_UNK TWindow__close(void*);
M2C_UNK send_game_list__9TProtocolFv(s32);

extern s32 TLobby__data_805D5580;
extern s32 TLobby__data_805D5594;
extern void *lbl_805D55E0;
extern void *lbl_805D55E4;

void request_game_list__6TLobbyFv(void) {
    TLobby__sub_8013990C(4);
    if ((void *) lbl_805D55E0 != 0) {
        TWindow__close(lbl_805D55E0);
        lbl_805D55E0 = 0;
    }
    if ((void *) lbl_805D55E4 != 0) {
        TWindow__close(lbl_805D55E4);
        lbl_805D55E4 = 0;
    }
    send_game_list__9TProtocolFv(TLobby__data_805D5580);
    TLobby__data_805D5594 = 6;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80138354
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_warp_menu__6TLobbyFv(void);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);

extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void create_warp_menu__6TLobbyFv(void) {
    s32 temp_r3;
    open__17TWindowOptionCtrlFPv(lbl_805D55E0);
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xB5);
    lbl_805D55E4 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x39), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E4, get_seq_phase__6TLobbyFPv(0x3A), 6, 1);
    TWindowSubComCard__sub_80265F60(lbl_805D55E4);
    TWindowSubComCard__sub_80265C30(lbl_805D55E4);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E4);
    TLobby__data_805D5594 = 4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801383E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_set_state_13__6TLobbyFv(void);
void reset_state__6TLobbyFv(void);
void update_state__6TLobbyFv(void);
M2C_UNK init_player_window_effect__6TLobbyFv();
M2C_UNK TLobby__sub_801397E8();
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80244888(s32);

extern s32 TLobby__data_805D5594;

void close_and_set_state_13__6TLobbyFv(void) {
    TLobby__sub_801397E8();
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D5594 = 0xD;
}

extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B4;
extern s32 lbl_805D55C0;

void reset_state__6TLobbyFv(void) {
    TLobby__sub_801397E8();
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D55B4 = 0;
    TLobby__data_805D5594 = 0xC;
    lbl_805D55C0 = 1;
}

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B4;
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D55D8;
extern s32 TLobby__data_805D55FC;
extern u32 TLobby__data_805D5604;

void update_state__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D5604 != 0U) {
        if ((s32) TLobby__data_805D55FC == 0) {
            if ((s32) TLobby__data_805D5594 != 0xC) {
                TLobby__sub_8013990C(0x21);
                TWindowSubComCard__sub_80244888(TLobby__data_805D55D8);
                init_player_window_effect__6TLobbyFv();
                TLobby__data_805D55B4 = 0;
                TLobby__data_805D5594 = 0xC;
                if ((void *) TLobby__data_805D5580 != NULL) {
                    M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) = (u8) (M2C_FIELD(TLobby__data_805D5580, u8 *, 0x2A) | 1);
                }
            }
        } else {
            TLobby__data_805D5590 = 5;
            TLobby__data_805D5594 = 0x17;
        }
        lbl_805D55C0 = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801385A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_lobby_warp_menu__6TLobbyFv(void);
M2C_UNK init_player_window_effect__6TLobbyFv();
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
s32 get_seq_phase__6TLobbyFPv(M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55B0;
extern s32 lbl_805D55E0;

void open_lobby_warp_menu__6TLobbyFv(void) {
    M2C_UNK temp_r3;
    TLobby__sub_8013990C(3);
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xB4);
    if ((s32) TLobby__data_805D55B0 < 0xD) {
        lbl_805D55E0 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x35), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x36), 6, 1);
    } else {
        lbl_805D55E0 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 3);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x35), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x36), 6, 1);
        forward_trade_action_default__16TObjCityMainWarpFPviii(lbl_805D55E0, get_seq_phase__6TLobbyFPv(0x47), 6, 3);
    }
    TWindowSubComCard__sub_80265F60(lbl_805D55E0);
    TWindowSubComCard__sub_80265C30(lbl_805D55E0);
    set_ready_flag__18TCheckRoomSequenceFPv(lbl_805D55E0);
    init_player_window_effect__6TLobbyFv();
    TLobby__data_805D5594 = 3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801386A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_menu_mode_2__6TLobbyFv(void);
void set_menu_mode_1__6TLobbyFv(void);
void set_menu_mode_0__6TLobbyFv(void);
M2C_UNK TLobby__sub_8013990C(M2C_UNK);

extern s32 TLobby__data_805D5594;

void set_menu_mode_2__6TLobbyFv(void) {
    TLobby__sub_8013990C(2);
    TLobby__data_805D5594 = 0x15;
}

extern s32 TLobby__data_805D5594;

void set_menu_mode_1__6TLobbyFv(void) {
    TLobby__sub_8013990C(1);
    TLobby__data_805D5594 = 1;
}

extern s32 TLobby__data_805D5594;

void set_menu_mode_0__6TLobbyFv(void) {
    TLobby__sub_8013990C(0);
    TLobby__data_805D5594 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013872C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_lobby_ui__6TLobbyFv(void);
void close_all_windows__6TLobbyFv(void);
M2C_UNK update_player_window__6TLobbyFv();
M2C_UNK TWindow__close(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 TLobby__data_805D55D8;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55E8;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F8;

void destroy_lobby_ui__6TLobbyFv(void) {
    void *temp;
    temp = (void*)(u32)TLobby__data_805D55C8;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55C8 = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55CC;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55CC = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55D0;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55D0 = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55D8;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55D8 = 0U;
    }
    temp = (void*)(u32)TLobby__data_805D55DC;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        TLobby__data_805D55DC = 0U;
    }
    temp = (void*)(u32)lbl_805D55E0;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        lbl_805D55E0 = 0U;
    }
    temp = (void*)(u32)lbl_805D55E4;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        lbl_805D55E4 = 0U;
    }
    temp = (void*)(u32)lbl_805D55E8;
    if (temp != 0) {
        TWindow__close((void *)(temp));
        lbl_805D55E8 = 0U;
    }
    temp = (void*)(u32)lbl_805D55EC;
    if (temp != 0) {
        queue_destruction__7TObjectFv((void *)(temp));
        lbl_805D55EC = 0U;
    }
    temp = (void*)(u32)lbl_805D55F0;
    if (temp != 0) {
        queue_destruction__7TObjectFv((void *)(temp));
        lbl_805D55F0 = 0U;
    }
    temp = (void*)(u32)lbl_805D55F8;
    if (temp != 0) {
        queue_destruction__7TObjectFv((void *)(temp));
        lbl_805D55F8 = 0U;
    }
    TLobby__data_805D5594 = 0xE;
}

extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 TLobby__data_805D55D8;
extern u32 TLobby__data_805D55DC;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;
extern u32 lbl_805D55E8;
extern u32 lbl_805D55EC;
extern u32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern u32 lbl_805D55F8;

void close_all_windows__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55C8 != 0U) {
        TWindow__close((void *)(TLobby__data_805D55C8));
        TLobby__data_805D55C8 = 0U;
    }
    if ((u32) TLobby__data_805D55CC != 0U) {
        TWindow__close((void *)(TLobby__data_805D55CC));
        TLobby__data_805D55CC = 0U;
    }
    if ((u32) TLobby__data_805D55D0 != 0U) {
        TWindow__close((void *)(TLobby__data_805D55D0));
        TLobby__data_805D55D0 = 0U;
    }
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((void *)(TLobby__data_805D55D8));
        TLobby__data_805D55D8 = 0U;
    }
    if ((u32) TLobby__data_805D55DC != 0U) {
        TWindow__close((void *)(TLobby__data_805D55DC));
        TLobby__data_805D55DC = 0U;
    }
    if ((u32) lbl_805D55E0 != 0U) {
        TWindow__close((void *)(lbl_805D55E0));
        lbl_805D55E0 = 0U;
    }
    if ((u32) lbl_805D55E4 != 0U) {
        TWindow__close((void *)(lbl_805D55E4));
        lbl_805D55E4 = 0U;
    }
    if ((u32) lbl_805D55E8 != 0U) {
        TWindow__close((void *)(lbl_805D55E8));
        lbl_805D55E8 = 0U;
    }
    if ((u32) lbl_805D55EC != 0U) {
        queue_destruction__7TObjectFv((void *)(lbl_805D55EC));
        lbl_805D55EC = 0U;
    }
    if ((u32) lbl_805D55F0 != 0U) {
        queue_destruction__7TObjectFv((void *)(lbl_805D55F0));
        lbl_805D55F0 = 0U;
    }
    if ((u32) lbl_805D55F4 != 0U) {
        queue_destruction__7TObjectFv((void *)(lbl_805D55F4));
        lbl_805D55F4 = 0U;
    }
    if ((u32) lbl_805D55F8 != 0U) {
        queue_destruction__7TObjectFv((void *)(lbl_805D55F8));
        lbl_805D55F8 = 0U;
    }
    update_player_window__6TLobbyFv();
    TLobby__data_805D5594 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801389A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scroll_close__6TLobbyFv(void);
void handle_short_list_input__6TLobbyFv(void);
void update_short_list__6TLobbyFv(void);
M2C_UNK close__14TAdScrollWinGCFPv(u32);
M2C_UNK destroy_lobby_ui__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK TKeyBoardControl__sub_801A66B8();
M2C_UNK fn_801DA1DC(s32);
s32 TMCFormatSequence__sub_802693B4(u32);
M2C_UNK TLobby__sub_80269454(u32);

extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D5580;
extern u32 lbl_805D55F8;

void update_scroll_close__6TLobbyFv(void) {
    if ((u32) lbl_805D55F8 != 0U) {
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 0xE) != 0) {
            close__14TAdScrollWinGCFPv(lbl_805D55F8);
            lbl_805D55F8 = 0U;
            destroy_lobby_ui__6TLobbyFv();
            TKeyBoardControl__sub_801A66B8();
            fn_801DA1DC(TLobby__data_805D5580);
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55DC;

void handle_short_list_input__6TLobbyFv(void) {
    void *temp_r31;

    if ((u32) TLobby__data_805D55DC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (TMCFormatSequence__sub_802693B4(TLobby__data_805D55DC) == 0) {
                TLobby__sub_80269454(TLobby__data_805D55DC);
            } else {
                TWindow__close(TLobby__data_805D55DC);
                TLobby__data_805D55DC = 0U;
                close_all_windows__6TLobbyFv();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(TLobby__data_805D55DC);
            TLobby__data_805D55DC = 0U;
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    TKeyBoardControl__sub_801A66B8();
}

extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55CC;

void update_short_list__6TLobbyFv(void) {
    void *temp_r31;

    if ((u32) TLobby__data_805D55CC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (TMCFormatSequence__sub_802693B4(TLobby__data_805D55CC) == 0) {
                TLobby__sub_80269454(TLobby__data_805D55CC);
            } else {
                TWindow__close(TLobby__data_805D55CC);
                TLobby__data_805D55CC = 0U;
                close_all_windows__6TLobbyFv();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(TLobby__data_805D55CC);
            TLobby__data_805D55CC = 0U;
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    TKeyBoardControl__sub_801A66B8();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80138D3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GLE_80138D3C { char pad[0x1c]; };
struct GBig_80138D3C { char pad[0x1da8]; GLE_80138D3C arr[1]; };

extern "C" {

void handle_comcard_window__6TLobbyFv(void);
M2C_UNK destroy_lobby_ui__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 is_keyboard_active__17TWindowSubComCardFPv(u32);
s32 update_keyboard__17TWindowSubComCardFPv(u32);
M2C_UNK TWindow__close(s32);
s32 realloc_buffer__17TWindowSubComCardFPv(u32);
M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK send_action__9TProtocolFR13GameListEntryPcPc(GBig_80138D3C *, GLE_80138D3C *, M2C_UNK *, s32, GBig_80138D3C *);

extern GBig_80138D3C *TLobby__data_805D5580;
extern s32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern s32 lbl_805D5600;
extern M2C_UNK TLobby__data_805DB0B0;

void handle_comcard_window__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55F4 != 0U) {
        if (is_keyboard_active__17TWindowSubComCardFPv(lbl_805D55F4) != 0) {
            queue_destruction__7TObjectFv(lbl_805D55F4);
            lbl_805D55F4 = 0U;
            close_all_windows__6TLobbyFv();
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv(lbl_805D55F4) != 0) {
            temp_r3 = realloc_buffer__17TWindowSubComCardFPv(lbl_805D55F4);
            send_action__9TProtocolFR13GameListEntryPcPc(TLobby__data_805D5580, &TLobby__data_805D5580->arr[lbl_805D5600], &TLobby__data_805DB0B0, temp_r3, TLobby__data_805D5580);
            free__11TOBoss4RockFUi(temp_r3);
            queue_destruction__7TObjectFv(lbl_805D55F4);
            lbl_805D55F4 = 0U;
            TWindow__close(lbl_805D55F0);
            lbl_805D55F0 = 0;
            destroy_lobby_ui__6TLobbyFv();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80138F24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_create_game_window__6TLobbyFv(void);
M2C_UNK destroy_lobby_ui__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
s32 is_enabled__15TWindowMakeTeamFPv(u32);
s32 TWindowMakeTeam__sub_80264B24(u32);
s32 TWindowMakeTeam__sub_80264B38(u32);
s32 TLobby__sub_8013AD50(u32);
s32 TLobby__sub_8013AD5C(u32);
s8 get_mode__6TLobbyFPv(u32);
s8 TLobby__sub_8013AD6C(u32);
s32 TLobby__sub_8013AD74(u32);
M2C_UNK send_create_game__9TProtocolFPcPcUcUcUcUc(s32, s32, s32, u8, u8, u8, s32);

extern s32 TLobby__data_805D5580;
extern u32 lbl_805D55EC;

void handle_create_game_window__6TLobbyFv(void) {
    s32 temp_r3;
    s32 temp_r30;
    u8 temp_r29;
    u8 temp_r28;
    u8 temp_r27;
    s32 temp_r0;

    if ((u32) lbl_805D55EC != 0U) {
        if (TLobby__sub_8013AD74(lbl_805D55EC) != 0) {
            temp_r3 = TWindowMakeTeam__sub_80264B38(lbl_805D55EC);
            if (temp_r3 != 0) {
                temp_r30 = TWindowMakeTeam__sub_80264B24(lbl_805D55EC);
                temp_r29 = TLobby__sub_8013AD6C(lbl_805D55EC) == 2;
                temp_r28 = is_enabled__15TWindowMakeTeamFPv(lbl_805D55EC);
                temp_r27 = get_mode__6TLobbyFPv(lbl_805D55EC) == 1;
                temp_r0 = TLobby__sub_8013AD5C(lbl_805D55EC);
                send_create_game__9TProtocolFPcPcUcUcUcUc(TLobby__data_805D5580, temp_r3, temp_r30, temp_r28, temp_r29, temp_r27, temp_r0);
                destroy_lobby_ui__6TLobbyFv();
                return;
            }
            close_all_windows__6TLobbyFv();
            return;
        }
        if (TLobby__sub_8013AD50(lbl_805D55EC) != 0) {
            close_all_windows__6TLobbyFv();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013900C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__6TLobbyFv(void);
M2C_UNK close_all_windows__6TLobbyFv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK TKeyBoardControl__sub_801A66B8();
M2C_UNK fn_801DB4E4(s32);
s32 TMCFormatSequence__sub_802693B4(u32);
M2C_UNK TLobby__sub_80269454(u32);

extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D5580;
extern u32 TLobby__data_805D55DC;

void update__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55DC != 0U) {
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 8) != 0) {
            if (TMCFormatSequence__sub_802693B4(TLobby__data_805D55DC) == 0) {
                TLobby__sub_80269454(TLobby__data_805D55DC);
            } else {
                TWindow__close(TLobby__data_805D55DC);
                TLobby__data_805D55DC = 0U;
                close_all_windows__6TLobbyFv();
                fn_801DB4E4(TLobby__data_805D5580);
            }
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    TKeyBoardControl__sub_801A66B8();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80139274
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_com_card__6TLobbyFv(void);
M2C_UNK close_menu_windows__6TLobbyFv();
M2C_UNK return_to_main_menu__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK close_com_card_window__6TLobbyFv();
s32 is_visible__17TWindowSubComCardFPv(void*);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

extern u32 lbl_805D55E4;

void handle_com_card__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55E4 != 0U) {
        if (is_visible__17TWindowSubComCardFPv((void*)lbl_805D55E4) != 0) {
            close_com_card_window__6TLobbyFv();
            temp_r3 = TWindowSubComCard__sub_80265BF8(lbl_805D55E4);
            switch (temp_r3) {
            case 0:
                return_to_main_menu__6TLobbyFv();
                return;
            case 1:
                close_menu_windows__6TLobbyFv();
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801393F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_menu_window__6TLobbyFv(void);
void handle_warp_menu_input__6TLobbyFv(void);
M2C_UNK open_city_warp_menu__6TLobbyFv();
M2C_UNK close_and_send_text_list__6TLobbyFv();
M2C_UNK open_warp_menu__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFPv();
M2C_UNK open_menu_window__6TLobbyFv();
M2C_UNK request_game_list__6TLobbyFv();
M2C_UNK create_warp_menu__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
s32 is_visible__17TWindowSubComCardFPv(void*);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 TWindowSubComCard__sub_80265BF8(void*);

extern u32 lbl_805D55E4;

void update_menu_window__6TLobbyFv(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)((void*)lbl_805D55E4));
        if (is_visible__17TWindowSubComCardFPv((void*)(lbl_805D55E4)) != 0) {
            switch (temp_r31) {
            case 0:
                request_game_list__6TLobbyFv();
                return;
            case 1:
                open_menu_window__6TLobbyFv();
                return;
            case 2:
                close_all_windows__6TLobbyFPv();
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

extern u32 lbl_805D55E0;

void handle_warp_menu_input__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55E0 != 0U) {
        if (is_visible__17TWindowSubComCardFPv((void*)((void*)lbl_805D55E0)) != 0) {
            temp_r3 = TWindowSubComCard__sub_80265BF8((void*)(lbl_805D55E0));
            switch (temp_r3) {
            case 0:
                create_warp_menu__6TLobbyFv();
                return;
            case 1:
                open_warp_menu__6TLobbyFv();
                return;
            case 2:
                close_and_send_text_list__6TLobbyFv();
                return;
            case 3:
                open_city_warp_menu__6TLobbyFv();
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E0) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80139538
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GameListEntry_80139538 { char pad[0x1C]; };
struct Root_80139538 { char pad[0x1DA8]; struct GameListEntry_80139538 entries[1]; };

extern "C" {

void handle_game_list_select__6TLobbyFv(void);
M2C_UNK close_and_set_state_12__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK TWindow__close(u32);
s32 get_status_flag__6TLobbyFPv(u32);
s32 get_flag_bit2__6TLobbyFPv(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);
M2C_UNK send_action__9TProtocolFR13GameListEntryPcPc(void *, void *, M2C_UNK *, M2C_UNK *);

extern struct Root_80139538 *TLobby__data_805D5580;
extern u32 TLobby__data_805D55D0;
extern M2C_UNK TLobby__data_805DB0B0;

void handle_game_list_select__6TLobbyFv(void) {
    s32 temp_r31;

    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            temp_r31 = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            send_action__9TProtocolFR13GameListEntryPcPc(TLobby__data_805D5580, &TLobby__data_805D5580->entries[temp_r31], &TLobby__data_805DB0B0, &TLobby__data_805DB0B0);
            close_and_set_state_12__6TLobbyFv();
            return;
        }
        if (get_flag_bit2__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            close_all_windows__6TLobbyFv();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80139860
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_com_card_window__6TLobbyFv(void);
void TWindow__close(void*);

extern u32 TLobby__data_805D55D8;

void close_com_card_window__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((void*)TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A14C
#include "types.h"

extern "C" {

int get_seq_phase__6TLobbyFPv(void* p);
void TLobby__sub_8013A16C(void);
void TLobby__sub_8013A170(s32 arg0, ...);
int fn_8013ADD0(void*);

int get_seq_phase__6TLobbyFPv(void* p) { return fn_8013ADD0(p); }
void TLobby__sub_8013A16C(void) {  }
void TLobby__sub_8013A170(s32 arg0, ...) {}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A23C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8013A23C(s32 arg0);
M2C_UNK __ct__16TPlyGuildCardTagFv();

s32 TLobby__sub_8013A23C(s32 arg0) {
    __ct__16TPlyGuildCardTagFv();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A2A4
#include "types.h"

extern "C" {

void* init_char_data__6TLobbyFPv(void* p);
void TLobby__sub_8013A2DC(void);
void bswap_6x6E_sync_game_state__6TLobbyFPv(void* p);
void open_hard_keyboard__6TLobbyFPv(void* p);
int __ct__12TPlyCharDataFv(void*);
int __ct__16TPlyGuildCardTagFv(void*);
int bswap_16__FPUs(void*);
int test_card_flag__19TWindowKeyBoardHardFii(void*, void*);

void* init_char_data__6TLobbyFPv(void* p) { __ct__16TPlyGuildCardTagFv(p); __ct__12TPlyCharDataFv((char*)p + 0x20); return p; }
void TLobby__sub_8013A2DC(void) {  }
void bswap_6x6E_sync_game_state__6TLobbyFPv(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void open_hard_keyboard__6TLobbyFPv(void* p) { test_card_flag__19TWindowKeyBoardHardFii(p, (void*)262144); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A450
#include "types.h"

extern "C" {

void bswap_inventory__6TLobbyFPv(void* p);
void set_player_count__6TLobbyFi(int a0);
int bswap_32__FPUl(void*);
int bswap__17TPlyInventoryItemFv(void*);

void bswap_inventory__6TLobbyFPv(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 30; i++) { bswap__17TPlyInventoryItemFv((char*)p + 0x4 + i * 28); } } }

    extern int lbl_805D5D6C;
void set_player_count__6TLobbyFi(int a0) { lbl_805D5D6C = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A4E4
#include "types.h"

extern "C" {

int TLobby__sub_8013A4E4(void* p);
int bswap_header_fields__6TLobbyFi(void*);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_8013A578(void* p);
void TLobby__sub_8013A5C0(void* p);
s32 TLobby__sub_801E44D8(s32, s32);
void* TObjPlayer__sub_8013A788(void* p, void* a1);
int TObjPlayer__sub_8013A820(void* a0 = 0, void* a1 = 0);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap_packet_header__6TLobbyFPv();

int TLobby__sub_8013A4E4(void* p) { return bswap_header_fields__6TLobbyFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A504
#include "types.h"

extern "C" {

int TObjPlayer__sub_8013A820(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_8013A788(void* p, void* a1);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap_packet_header__6TLobbyFPv();
s32 TLobby__sub_801E44D8(s32, s32);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_8013A578(void* p);
void TLobby__sub_8013A5C0(void* p);

void bswap_header_fields__6TLobbyFi(s32 arg0) {
    bswap_16__FPUs(arg0 + 2);
    bswap_32__FPUl(arg0 + 4);
}
void bswap_and_handle_packet__6TLobbyFii(s32 arg0, s32 arg1) {
    bswap_packet_header__6TLobbyFPv();
    TLobby__sub_801E44D8(arg0, arg1);
}
void TLobby__sub_8013A578(void* p) { *(u8*)((char*)p + 0x0) = 111; *(u8*)((char*)p + 0x1) = 129; }
void send_packet_60__6TLobbyFi(s32 arg0) {
    bswap_packet_header__6TLobbyFPv();
    TLobby__send_and_handle_60(arg0);
}
void TLobby__sub_8013A5C0(void* p) { *(u8*)((char*)p + 0x0) = 114; *(u8*)((char*)p + 0x1) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A874
#include "types.h"

extern "C" {

void bswap_fields__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void bswap_fields__6TLobbyFPv(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A8AC
#include "types.h"

extern "C" {

void bswap_header_3words__6TLobbyFPv(void* p);
int bswap_32__FPUl(void*);

void bswap_header_3words__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A95C
#include "types.h"

extern "C" {

void TLobby__sub_8013A95C(void* p);
void TLobby__sub_8013A9C0(void* p);
void TLobby__sub_8013A9F4(void* p);
void bswap_6x6B__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TLobby__sub_8013A95C(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); }

void TLobby__sub_8013A9C0(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }

void TLobby__sub_8013A9F4(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); }

void bswap_6x6B__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013AD38
#include "types.h"

extern "C" {

int get_status_flag__6TLobbyFPv(void* p);
int get_flag_bit2__6TLobbyFPv(void* p);
int TLobby__sub_8013AD50(void* p);
s32 TLobby__sub_8013AD5C(void* p);
u8 get_mode__6TLobbyFPv(void* p);
u8 TLobby__sub_8013AD6C(void* p);
int TLobby__sub_8013AD74(void* p);
void set_ready_flag__18TCheckRoomSequenceFPv(void* p);

int get_status_flag__6TLobbyFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }
int get_flag_bit2__6TLobbyFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }
int TLobby__sub_8013AD50(void* p) { return (*(u8*)((char*)p + 0x1d) >> 1) & 0x1; }
s32 TLobby__sub_8013AD5C(void* p) { return *(s32*)((char*)p + 0x20); }
u8 get_mode__6TLobbyFPv(void* p) { return *(u8*)((char*)p + 0x1e); }
u8 TLobby__sub_8013AD6C(void* p) { return *(u8*)((char*)p + 0x1e); }
int TLobby__sub_8013AD74(void* p) { return *(u8*)((char*)p + 0x1d) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013AD8C
#include "types.h"

extern "C" {

void init_serial_access__6TLobbyFv(void);

int TAdEnterSerialAccessGC__sub_8013ADB0(void);
int TAdEnterSerialAccessGC__sub_80321A24(void);

void init_serial_access__6TLobbyFv(void) { TAdEnterSerialAccessGC__sub_8013ADB0(); TAdEnterSerialAccessGC__sub_80321A24(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013ADF0
#include "types.h"

extern "C" {

void heap_alloc__6TLobbyFPv(void* a0);
int heap_alloc__5THeapFUl(void*, void*);

    extern int obj_heap;
void heap_alloc__6TLobbyFPv(void* a0) { heap_alloc__5THeapFUl((void*)(obj_heap), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013FFA8
#include "types.h"

extern "C" {

void update_floor__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);

void set_range__6TLobbyFPviii(void* a0, int a1, int a2, int a3) { *(int*)((char*)a0 + 0x7220) = a1; *(int*)((char*)a0 + 0x7224) = a3; *(int*)((char*)a0 + 0x7228) = (a1 + a2); }
void update_floor__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014005C
#include "types.h"

extern "C" {

void update_floor_a__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_floor_a__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801400F4
#include "types.h"

extern "C" {

void update_floor_state__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_floor_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014018C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8014018C(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK update_current_floor__6TLobbyFv();
M2C_UNK TLobby__sub_80227248();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK refresh_render_state__6TLobbyFv();
M2C_UNK reset_keyboard_control__6TLobbyFv();

extern M2C_UNK lbl_804A7358[];

void TLobby__sub_8014018C(void) {
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    TLobby__sub_80227248();
    TLobby__sub_800FD6A0(lbl_804A7358, 8);
    update_current_floor__6TLobbyFv();
    reset_keyboard_control__6TLobbyFv();
    TLobby__sub_8007BA20();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80140308
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80140308(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK refresh_render_state__6TLobbyFv();
M2C_UNK reset_keyboard_control__6TLobbyFv();
M2C_UNK update_current_floor__6TLobbyFv();

extern M2C_UNK lbl_804A7360[];

void TLobby__sub_80140308(void) {
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    TLobby__sub_800FD6A0(lbl_804A7360, 8);
    reset_keyboard_control__6TLobbyFv();
    update_current_floor__6TLobbyFv();
    TLobby__sub_8007BA20();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801403B4
#include "types.h"

extern "C" {

void TLobby__sub_801403B4(void);
void TLobby__sub_801403B8(void);
s32 spawn_boss3_volopt_ctrl__6TLobbyFv(void);
void reset_subsystems__6TLobbyFv(void);
s32 init_lobby_scene__6TLobbyFv(void);
s32 TBoss3VoloptCtrl__ct();
s32 create_tasks__6TLobbyFv();
int TLobby__sub_8007BA20(void);
s32 check_disconnect_conditions__6TLobbyFv();
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
s32 TLobby__sub_80227FB4();
s32 get_global_state__14TOKeyMachine01Fv();
s32 TObjLight__sub_80133D78();
int free_heap__13TParticleCtrlFv(void);
s32 init_heap__13TParticleCtrlFPv(s32);
u32 __nw__7TObjectFUl(s32);
int reset_keyboard_control__6TLobbyFv(void);
s32 create__16TBoss4CheckEmptyFv();

void TLobby__sub_801403B4(void) {  }
void TLobby__sub_801403B8(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }
s32 spawn_boss3_volopt_ctrl__6TLobbyFv(void) {
    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    if (__nw__7TObjectFUl(0x24) != 0U) {
        TBoss3VoloptCtrl__ct();
    }
    return 1;
}
void reset_subsystems__6TLobbyFv(void) { free_heap__13TParticleCtrlFv(); refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }
s32 init_lobby_scene__6TLobbyFv(void) {
    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    init_heap__13TParticleCtrlFPv(0x10000);
    create__16TBoss4CheckEmptyFv();
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801404CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_floor_state__6TLobbyFv(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK update_current_floor__6TLobbyFv();
M2C_UNK TLobby__sub_80227248();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK refresh_render_state__6TLobbyFv();
M2C_UNK free_heap__13TParticleCtrlFv();
M2C_UNK reset_keyboard_control__6TLobbyFv();

extern M2C_UNK lbl_804A7368[];

void cleanup_floor_state__6TLobbyFv(void) {
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    TLobby__sub_80227248();
    TLobby__sub_800FD6A0(lbl_804A7368, 8);
    free_heap__13TParticleCtrlFv();
    update_current_floor__6TLobbyFv();
    reset_keyboard_control__6TLobbyFv();
    TLobby__sub_8007BA20();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801405EC
#include "types.h"

extern "C" {

void run_floor_update__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void run_floor_update__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801406AC
#include "types.h"

extern "C" {

void update_floor_and_windows__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_floor_and_windows__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014074C
#include "types.h"

extern "C" {

void update_scene__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_scene__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801407EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_boss3_scene__6TLobbyFv(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK update_current_floor__6TLobbyFv();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK refresh_render_state__6TLobbyFv();
M2C_UNK reset_keyboard_control__6TLobbyFv();
M2C_UNK TTecRaFoie__sub_80226254();

extern M2C_UNK lbl_804A7370[];

void cleanup_boss3_scene__6TLobbyFv(void) {
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    TTecRaFoie__sub_80226254();
    TLobby__sub_800FD6A0(lbl_804A7370, 0x60);
    reset_keyboard_control__6TLobbyFv();
    update_current_floor__6TLobbyFv();
    TLobby__sub_8007BA20();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80140830
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 setup_scene__6TLobbyFv(void);
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK TLobby__sub_800FD6F8(M2C_UNK *, M2C_UNK);
M2C_UNK reset_settings_to_default__6TLobbyFPv(M2C_UNK *);
M2C_UNK TLobby__sub_80207E44();
M2C_UNK TLobby__sub_8021EF84();
M2C_UNK TLobby__sub_80227FB4();
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TObjBgmColCtrl__sub_8017E3B8();
M2C_UNK TObjLight__sub_80133D78();
M2C_UNK TQuestBgmCtrl__ct(void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_8006EBC4(s32);
M2C_UNK fn_801815F8(void *, s32);

extern M2C_UNK lbl_804A7370[];
extern M2C_UNK lbl_8050EA40[];
extern s32 tl_05;
extern s32 tl_07;

s32 setup_scene__6TLobbyFv(void) {
    void *obj;

    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    TLobby__sub_80207E44();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    TLobby__sub_8021EF84();
    TLobby__sub_800FD6F8(lbl_804A7370, 0x60);
    reset_settings_to_default__6TLobbyFPv(lbl_8050EA40);
    create_tasks__6TLobbyFv();
    TObjBgmColCtrl__sub_8017E3B8();
    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        obj = __nw__7TObjectFUl(0x78);
        if (obj != NULL) {
            fn_801815F8(obj, tl_05);
        }
    }
    obj = __nw__7TObjectFUl(0x1C);
    if (obj != NULL) {
        TQuestBgmCtrl__ct(obj, tl_05);
    }
    fn_8006EBC4(tl_07);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801408E0
#include "types.h"

extern "C" {

void update_floor_objects__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_floor_objects__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80140980
#include "types.h"

extern "C" {

void update_all__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_all__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80140A24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_floor_download__6TLobbyFv(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK update_current_floor__6TLobbyFv();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK refresh_render_state__6TLobbyFv();
M2C_UNK TQuestVmDownLoadServer__sub_801F8E4C();
M2C_UNK reset_keyboard_control__6TLobbyFv();

extern M2C_UNK lbl_804A73D0[];

void update_floor_download__6TLobbyFv(void) {
    TQuestVmDownLoadServer__sub_801F8E4C();
    reset_keyboard_control__6TLobbyFv();
    update_current_floor__6TLobbyFv();
    TLobby__sub_800FD6A0(lbl_804A73D0, 0x30);
    TLobby__sub_8022743C();
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    TLobby__sub_8007BA20();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80140AEC
#include "types.h"

extern "C" {

void update_floor_alt__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_floor_alt__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80140BAC
#include "types.h"

extern "C" {

void update_floor_b__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_floor_b__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80140C4C
#include "types.h"

extern "C" {

void refresh_floor_state__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void refresh_floor_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80140D20
#include "types.h"

extern "C" {

void run_floor_update_2__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void run_floor_update_2__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80140FF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_map_csn_ctrl__6TLobbyFv(void);
void *TMapCsnCtrl__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;
extern void *lbl_805D5650;

void create_map_csn_ctrl__6TLobbyFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x81C);
    if (o != NULL) {
        o = TMapCsnCtrl__ct(o, tl_05);
    }
    lbl_805D5650 = o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80141030
#include "types.h"

extern "C" {

void* TLobby__sub_80141030(void* p);

void* TLobby__sub_80141030(void* p) { return (char*)p + 0xac; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80142920
#include "types.h"

extern "C" {

void TLobby__sub_80142920(void);
int TLobby__sub_80142944(void* p);
int TObjFish__sub_803E46BC(void);
int get_id__15TPlyPhotonChairFPv(void);

void TLobby__sub_80142920(void) { get_id__15TPlyPhotonChairFPv(); TObjFish__sub_803E46BC(); }
int TLobby__sub_80142944(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80145E40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_80145E40(void);
s32 is_status_zero__6TLobbyFv(void);
s32 TLobby__sub_803F517C(u8 *);

    extern unsigned short lbl_805D56CC;
int TLobby__sub_80145E40(void) {  return (lbl_805D56CC & 0x1); }

s32 is_status_zero__6TLobbyFv(void) {
    u8 sp8;

    if ((TLobby__sub_803F517C(&sp8) == 0) && (sp8 == 0)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80145E90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_state_active__6TLobbyFv(void);
s32 TLobby__sub_803F5678(void *);

s32 is_state_active__6TLobbyFv(void) {
    u8 sp8;

    if (TLobby__sub_803F5678((void *) (&sp8)) != 0) {
        return 0;
    }
    if (sp8 == 0) {
        return 0;
    }
    return (u32) __cntlzw(1 - sp8) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801461EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_keyboard_buffer__6TLobbyFv(void);
s32 poll_connect__6TLobbyFv(void);
void flush_pending_flag2__6TLobbyFv(void);
void set_battle_flag__6TLobbyFi(s32 arg0);
M2C_UNK send_and_handle__6TLobbyFPv();
int TLobby__sub_80145A94(void);
int TLobby__sub_803F4B68(void*);
M2C_UNK TLobby__sub_804219D0(M2C_UNK, M2C_UNK, s32);
M2C_UNK TLobby__sub_80421A50(M2C_UNK, M2C_UNK, s32);
s16 TLobby__sub_80426BD8();
s8 func_801A5E54__Fv();
int xmalloc__FUl(void);

    extern int lbl_805D56C8;
    extern short lbl_805D56CE;
    extern int lbl_805D56D0;
void init_keyboard_buffer__6TLobbyFv(void) { lbl_805D56D0 = 0; lbl_805D56CE = 0; lbl_805D56C8 = 0; TLobby__sub_803F4B68((void*)0); lbl_805D56C8 = xmalloc__FUl(); TLobby__sub_80145A94(); }

s32 poll_connect__6TLobbyFv(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if (var_r31 > 0x12C) {
        return 0;
    }
    var_r31 += 1;
    send_and_handle__6TLobbyFPv();
    if (func_801A5E54__Fv() != 0) {
        return 1;
    }
    if (TLobby__sub_80426BD8() == 1) {
        return 2;
    }
    goto loop_1;
}

extern s32 lbl_805D56F8;
extern s32 lbl_805D56FC;

void flush_pending_flag2__6TLobbyFv(void) {
    if (lbl_805D56F8 & 2) {
        TLobby__sub_804219D0(0, 0, lbl_805D56FC);
        lbl_805D56F8 &= 0xFFFFFFFD;
    }
}

extern s32 lbl_805D56F8;
extern s32 lbl_805D56FC;

void set_battle_flag__6TLobbyFi(s32 arg0) {
    lbl_805D56FC = arg0;
    lbl_805D56F8 |= 2;
    TLobby__sub_80421A50(0, 0, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80146724
#include "types.h"

extern "C" {

int TLobby__sub_80146724(void);

int TLobby__sub_80146724(void) { return 3; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80146740
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_80146740(void);
s32 query_task_active__6TLobbyFv(void);
int TLobby__sub_8014677C(void);
int get_link_status_value__6TLobbyFv(void);
int TLobby__sub_80145DB4(void*);
s32 get_task_count__6TLobbyFv();

int TLobby__sub_80146740(void) { return 0; }

extern s32 lbl_805D5710;

s32 query_task_active__6TLobbyFv(void) {
    if ((s32) lbl_805D5710 != 0) {
        return get_task_count__6TLobbyFv();
    }
    return 0;
}

int TLobby__sub_8014677C(void) { return TLobby__sub_80145DB4((void*)(1)); }
int get_link_status_value__6TLobbyFv(void) { return TLobby__sub_80145DB4((void*)(4)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801468A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup__6TLobbyFv(void);
M2C_UNK TLobby__sub_801469B8();
M2C_UNK TLobby__sub_80147284();
M2C_UNK TLobby__sub_80421620();
void xfree__FPv(void*);

extern s32 lbl_805D56F8;
extern u32 lbl_805D5700;
extern s32 lbl_805D5704;

void cleanup__6TLobbyFv(void) {
    if ((s32) lbl_805D5704 != 0) {
        TLobby__sub_801469B8();
    } else {
        TLobby__sub_80147284();
    }
    if (lbl_805D56F8 & 8) {
        TLobby__sub_80421620();
        lbl_805D56F8 &= 0xFFFFFFF7;
    }
    if ((u32) lbl_805D5700 != 0U) {
        xfree__FPv((void*)lbl_805D5700);
        lbl_805D5700 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801469B8
#include "types.h"

extern "C" {

int TLobby__sub_801469B8(void* p);
int TLobby__sub_801469D8(void*);

int TLobby__sub_801469B8(void* p) { return TLobby__sub_801469D8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80146C7C
#include "types.h"

extern "C" {

void call_146CA0_with_5708__6TLobbyFv(void);
int TLobby__sub_80146CA0(void*);

    extern int lbl_805D5708;
void call_146CA0_with_5708__6TLobbyFv(void) { TLobby__sub_80146CA0((void*)(lbl_805D5708)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80146D68
#include "types.h"

extern "C" {

void* TLobby__sub_80146D68(int a0);

    extern unsigned char lbl_8050C784[];
void* TLobby__sub_80146D68(int a0) {  return (char*)lbl_8050C784 + a0 * 460; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014715C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8014715C(void* p, void* q);
void teardown_boss2__6TLobbyFv(void);
M2C_UNK TLobby__sub_8040A3C0();
M2C_UNK TLobby__sub_8040AD64();

void TLobby__sub_8014715C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

extern s32 lbl_805D570C;

void teardown_boss2__6TLobbyFv(void) {
    if ((s32) lbl_805D570C != 0) {
        TLobby__sub_8040AD64();
        TLobby__sub_8040A3C0();
        lbl_805D570C = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80147284
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80147284(void);
M2C_UNK teardown_boss2__6TLobbyFv();
M2C_UNK TLobby__sub_803FB1A4(s16 *);
M2C_UNK flush_pending_flag2__6TLobbyFv();
M2C_UNK TLobby__sub_803FAFDC();
M2C_UNK TLobby__sub_80423064(s16, M2C_UNK);

extern s32 lbl_805D2D00;
extern s32 lbl_805D56F8;

s32 TLobby__sub_80147284(void) {
    s16 sp8;

    if ((s32) lbl_805D2D00 != -1) {
        TLobby__sub_80423064((s16) lbl_805D2D00, 0);
        sp8 = 1;
        TLobby__sub_803FB1A4(&sp8);
    }
    flush_pending_flag2__6TLobbyFv();
    if (lbl_805D56F8 & 4) {
        TLobby__sub_803FAFDC();
        lbl_805D56F8 &= 0xFFFFFFFB;
    }
    teardown_boss2__6TLobbyFv();
    lbl_805D2D00 = -1;
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80147978
#include "types.h"

extern "C" {

void TLobby__sub_80147978(void);

void TLobby__sub_80147978(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80156B18
#include "types.h"

extern "C" {

int bswap_60_header__6TLobbyFPv(void* p);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_80156BA8(void* p);
s32 bswap_32__FPUl(s32);
int bswap_header__6TLobbyFi(void*);
s32 read_be16_field2__10TObjPlayerFPv();

int bswap_60_header__6TLobbyFPv(void* p) { return bswap_header__6TLobbyFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80156B38
#include "types.h"

extern "C" {
int bswap_60_header__6TLobbyFPv(void);

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_80156BA8(void* p);

void bswap_header__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
}
void update_and_send_60__6TLobbyFi(s32 arg0) {
    bswap_60_header__6TLobbyFPv();
    TLobby__send_and_handle_60(arg0);
}
void TLobby__sub_80156BA8(void* p) { *(u8*)((char*)p + 0x0) = 11; *(u8*)((char*)p + 0x1) = 3; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015ABD0
#include "types.h"

extern "C" {

void TLobby__sub_8015ABD0(void);
void TLobby__sub_8015ABD4(void);

void TLobby__sub_8015ABD0(void) {  }
void TLobby__sub_8015ABD4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015C8C4
#include "types.h"

extern "C" {

void TLobby__sub_8015C8C4(void);
int TLobby__sub_8015C8C8(void);
int TLobby__sub_8015C8D0(void);

void TLobby__sub_8015C8C4(void) {  }
int TLobby__sub_8015C8C8(void) { return 1; }
int TLobby__sub_8015C8D0(void) { return 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015C944
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void byteswap_and_send__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60(void *);
void init_packet_67_04__6TLobbyFPv(void* p);
void TOCtrlDubchik__sub_8015C9D0(void);
void TObjPlayer__sub_8015C940(void);
s32 bswap_32__FPUl(s32);
M2C_UNK byteswap_event_packet__6TLobbyFi();
s32 read_be16_field2__10TObjPlayerFPv();

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void byteswap_and_send__6TLobbyFi(s32 arg0) {
    byteswap_event_packet__6TLobbyFi();
    TLobby__send_and_handle_60((void *) (arg0));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015C978
#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
void TObjPlayer__sub_8015C940(void);
void init_packet_67_04__6TLobbyFPv(void* p);
void TOCtrlDubchik__sub_8015C9D0(void);

void byteswap_event_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
}
void init_packet_67_04__6TLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 103; *(u8*)((char*)p + 0x1) = 4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80160804
#include "types.h"

extern "C" {

void update_and_send_60__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_60_header__6TLobbyFPv(void*);

void update_and_send_60__6TLobbyFPv(void* p) { bswap_60_header__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016ACC8
#include "types.h"

extern "C" {
void bswap_6x05_switch_flag__5TOKeyFPv(void* p);

int fn_8016AD3C(void* a0 = 0);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
void set_type__14TOKeyAncient01FPv(void* p);
void TOKeyAncient01__vt23(void);

void finalize_and_send_60__6TLobbyFPv(void* p) { bswap_6x05_switch_flag__5TOKeyFPv(p); TLobby__send_and_handle_60(p); }
void* init_6x05_switch_changed__6TLobbyFPv(void* p) { fn_8016AD3C(p); *(unsigned char*)(p) = 5; *(unsigned char*)((char*)p + 0x1) = 3; return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801819FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_map_resources__6TLobbyFv(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern s32 lbl_805D5B28;
extern u32 lbl_805D5B2C;

void free_map_resources__6TLobbyFv(void) {
    if ((u32) lbl_805D5B2C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B2C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B2C);
        lbl_805D5B2C = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D5B28, 1);
    lbl_805D5B28 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80181AAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80181AE8 { char pad[0x18]; };
struct VObj_80181AE8 : Base_80181AE8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void run_action_14_if_ready__6TLobbyFPv(void* p);
void process_lobby_action_14__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_801819E4(M2C_UNK);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
int is_phase_e__9TObjEneDDFPv(void*);

void run_action_14_if_ready__6TLobbyFPv(void* p) { if (is_phase_e__9TObjEneDDFPv(p) != 0) { process_lobby_action_14__6TLobbyFPv((u8 *)(p)); } }

extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBBE0;
extern const f32 lbl_805DBBE4;

void process_lobby_action_14__6TLobbyFPv(u8 *arg0) {
    if (((VObj_80181AE8 *)arg0)->m8(lbl_805DBBE0, lbl_805DBBE4) != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TLobby__sub_801819E4(0xE);
        TObjBoss2Tunnel__sub_803DB470();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801838D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Fn801838D4Base_801838d4 { char pad[0x18]; };
struct Fn801838D4VObj_801838d4 : Fn801838D4Base_801838d4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void draw_model__6TLobbyFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_800F5BC0(s32, s16, M2C_UNK);

extern u32 lbl_805D5B38;
extern s32 lbl_805D5B3C;
extern s32 lbl_805D5B40;
extern s32 lbl_805D5B44;
extern s32 lbl_805D5B48;
extern const f32 lbl_805DBC44;
extern const f32 lbl_805DBC48;

void draw_model__6TLobbyFPv(u8 *arg0) {
    if (((u32) lbl_805D5B38 != 0U) && (((Fn801838D4VObj_801838d4*)arg0)->m8(lbl_805DBC44, lbl_805DBC48) != 0)) {
        set_global_param__8TObjFishFi(lbl_805D5B44);
        TObjPlayer__sub_800F5BC0(lbl_805D5B48, (s16) M2C_FIELD(arg0, s32 *, 0x90), 0);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_803E46BC(lbl_805D5B3C);
        TObjFish__sub_803E46BC(lbl_805D5B40);
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80184CE0
#include "types.h"

extern "C" {

int TLobby__sub_80184CE0(void* p);
int TLobby__sub_80184D00(void*);

int TLobby__sub_80184CE0(void* p) { return TLobby__sub_80184D00(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018A20C
#include "types.h"

extern "C" {

void dispatch_fish_event__6TLobbyFPv(void* a0);
int TObjFish__sub_8001EDC4(void*, void*);

    extern int lbl_805D5B88;
void dispatch_fish_event__6TLobbyFPv(void* a0) { TObjFish__sub_8001EDC4((void*)(lbl_805D5B88), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018A234
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_chr_select_slot__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D5B88;
extern u32 lbl_805D5B8C;

void free_chr_select_slot__6TLobbyFv(void) {
    if ((u32) lbl_805D5B8C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B8C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B8C);
        lbl_805D5B8C = 0U;
    }
    if ((u32) lbl_805D5B88 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5B88, 1);
        lbl_805D5B88 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018A388
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_char_select_resources__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D5B78;
extern u32 lbl_805D5B7C;

void free_char_select_resources__6TLobbyFv(void) {
    if ((u32) lbl_805D5B7C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B7C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B7C);
        lbl_805D5B7C = 0U;
    }
    if ((u32) lbl_805D5B78 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5B78, 1);
        lbl_805D5B78 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80190FD0
#include "types.h"

extern "C" {

void TLobby__sub_80190FD0(int a0);
void TLobby__sub_80190FD8(void);

    extern int lbl_805D3360;
void TLobby__sub_80190FD0(int a0) { lbl_805D3360 = a0; }

void TLobby__sub_80190FD8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80191218
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_npc__6TLobbyFPv(void *arg0);
void TLobby__sub_80191264(void);
void TLobby__sub_80191270(void);
void *TLobby__sub_8019118C(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create_npc__6TLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TLobby__sub_8019118C(o, tl_05, arg0);
    }
    return o;
}

    extern int lbl_805D3360;
void TLobby__sub_80191264(void) { lbl_805D3360 = -1; }

    extern int lbl_805D3360;
void TLobby__sub_80191270(void) { lbl_805D3360 = -1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80191F80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_idle__6TLobbyFv(void);

extern s32 TLobby__data_805D5594;

u8 is_idle__6TLobbyFv(void) {
    return (u8) (TLobby__data_805D5594 == 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80197F74
#include "types.h"

extern "C" {

void TLobby__sub_80197F74(void);

void TLobby__sub_80197F74(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80197FC4
#include "types.h"

extern "C" {

void TLobby__sub_80197FC4(void);

    extern int lbl_805D5C58;
void TLobby__sub_80197FC4(void) { lbl_805D5C58 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A253C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_limits__6TLobbyFv(void);
void TLobby__sub_801A2550(void);
void TLobby__sub_801A2554(void);

extern s16 lbl_805D5CD2;
extern s16 lbl_805D5CD4;

void init_limits__6TLobbyFv(void) {
    lbl_805D5CD2 = 0x1000;
    lbl_805D5CD4 = 0x4000;
}

void TLobby__sub_801A2550(void) {  }

extern s16 lbl_805D5CD0;
extern s16 lbl_805D5CD2;
extern s16 lbl_805D5CD4;

void TLobby__sub_801A2554(void) {
    lbl_805D5CD0 = 0;
    lbl_805D5CD2 = 0x1000;
    lbl_805D5CD4 = 0x4000;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2D90
#include "types.h"

extern "C" {

void TLobby__sub_801A2DF4(void);
void TLobby__sub_801A2DF8(void);
void TLobby__sub_801A2DFC(void);
void reset_keyboard_input__6TLobbyFv(void);
void shutdown_keyboard_control__6TLobbyFv(void);
int TKeyBoardControl__sub_8000F92C(void);
int TKeyBoardControl__sub_8000F95C(void);
int TKeyBoardControl__sub_8000F9A4(void);
int reset__16TKeyBoardControlFv(void);
int clear_counter__6TLobbyFv(void);
int reset_quest_state__6TLobbyFv(void);

void reset_keyboard_input__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); TKeyBoardControl__sub_8000F92C(); TKeyBoardControl__sub_8000F9A4(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); }
void shutdown_keyboard_control__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); reset_quest_state__6TLobbyFv(); TKeyBoardControl__sub_8000F92C(); TKeyBoardControl__sub_8000F9A4(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); }
void TLobby__sub_801A2DF4(void) {  }
void TLobby__sub_801A2DF8(void) {  }
void TLobby__sub_801A2DFC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2E84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_char_to_players__6TLobbyFv(void);
void reset_quest_state__6TLobbyFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
M2C_UNK THunterGuildSeqOffline__sub_80213430();
M2C_UNK TLobby__sub_80103F68();
M2C_UNK TLobby__sub_8011AFB8();
M2C_UNK clear_counter__6TLobbyFv();
M2C_UNK clear_quest_state__6TLobbyFv();
M2C_UNK reset_quest_counter__6TLobbyFv();
M2C_UNK set_cleanup_flag__6TLobbyFv();
M2C_UNK reset_door_state__6TLobbyFv();
M2C_UNK TObjCityMainWarp__sub_80186634();
M2C_UNK reset_instance__8TObjDoorFv();
M2C_UNK TObjPlayer__sub_801BDEF8(s32, s32, u32);
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022942C();
M2C_UNK apply_all_players__9TTecLukerFv();
void enable_all_battle_ctrl__10TNpcPlayerFv();
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(u32);

extern s32 lbl_805D53A0;
extern s32 lbl_805D53A8;

void apply_char_to_players__6TLobbyFv(void) {
    s32 var_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    if (is_split_screen() != 0) {
        var_r31 = 0;
        do {
            if (TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) != 0) {
                temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
                if (temp_r3 != 0U) {
                    TObjPlayer__sub_801BDEF8(var_r31, lbl_805D53A8 + var_r31, temp_r3);
                }
            }
            var_r31 += 1;
        } while (var_r31 < 4);
        return;
    }
    temp_r3_2 = get_char_index__23TAdSinglePlyChrSelectGCFUi(lbl_805D53A0);
    if (temp_r3_2 != 0U) {
        TObjPlayer__sub_801BDEF8(0, lbl_805D53A8, temp_r3_2);
    }
}

extern u32 lbl_805D5EE8;

void reset_quest_state__6TLobbyFv(void) {
    TRaderMapCore__sub_801F9540();
    TSwitch__sub_8022942C();
    apply_all_players__9TTecLukerFv();
    TLobby__sub_8011AFB8();
    TLobby__sub_80103F68();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) lbl_805D5EE8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EE8);
    }
    TObjCityMainWarp__sub_80186634();
    THunterGuildSeqOffline__sub_80213430();
    clear_counter__6TLobbyFv();
    reset_door_state__6TLobbyFv();
    reset_instance__8TObjDoorFv();
    set_cleanup_flag__6TLobbyFv();
    reset_quest_counter__6TLobbyFv();
    clear_quest_state__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A3988
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801A3988(void);
s32 TCameraCtrl__sub_8006B368();
M2C_UNK TLobby__sub_801A35C8();
M2C_UNK TLobby__sub_801A3698();

void TLobby__sub_801A3988(void) {
    if (TCameraCtrl__sub_8006B368() != 0) {
        TLobby__sub_801A35C8();
        return;
    }
    TLobby__sub_801A3698();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A3C18
#include "types.h"

extern "C" {

void reset_door_state__6TLobbyFv(void);

    extern int lbl_805D58F8;
void reset_door_state__6TLobbyFv(void) { lbl_805D58F8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A3C40
#include "types.h"

extern "C" {

unsigned char TLobby__sub_801A3C40(void);

    extern unsigned char lbl_805D4DF8;
unsigned char TLobby__sub_801A3C40(void) {  return lbl_805D4DF8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A3C48
#include "types.h"

extern "C" {

void set_flag_and_update__6TLobbyFv(void);
void init_chr_select__6TLobbyFv(void);
void reset_to_chr_select__6TLobbyFv(void);
void TLobby__sub_801A3CF8(void);
int TLobby__sub_8013998C(void);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F95C(void);
int TKeyBoardControl__sub_8000F9CC(int);
int clear_counter__6TLobbyFv(void);
int TLobby__sub_801A4C6C(void*);
int reset__16TKeyBoardControlFv(void);
int TKeyBoardControl__sub_801A66B8(void);
int init__23TAdSinglePlyChrSelectGCFv(void);
int free_objects__6TLobbyFv(void);

    extern unsigned char lbl_80515BA0[];
    extern int TLobby__data_805D5CEC;
void set_flag_and_update__6TLobbyFv(void) { TLobby__data_805D5CEC = (TLobby__data_805D5CEC | 0x1); TLobby__sub_801A4C6C(lbl_80515BA0); }

void init_chr_select__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); TLobby__sub_8013998C(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void reset_to_chr_select__6TLobbyFv(void) { TKeyBoardControl__sub_801A66B8(); TLobby__sub_8013998C(); free_objects__6TLobbyFv(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void TLobby__sub_801A3CF8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A3E8C
#include "types.h"

extern "C" {

int TLobby__sub_801A3E8C(void);
void TLobby__sub_801A3E94(void);

int TLobby__sub_801A3E8C(void) { return 0; }
void TLobby__sub_801A3E94(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A3FEC
#include "types.h"

extern "C" {

int send_and_handle__6TLobbyFPv(void* p);
int TLobby__sub_801A400C(void*);

int send_and_handle__6TLobbyFPv(void* p) { return TLobby__sub_801A400C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A4208
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_objects__6TLobbyFv(void);
M2C_UNK TObjCityMainWarp__sub_80186634();
M2C_UNK reset_instance__8TObjDoorFv();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022942C();
M2C_UNK apply_all_players__9TTecLukerFv();
M2C_UNK TLobby__sub_80103F68();
M2C_UNK clear_counter__6TLobbyFv();
M2C_UNK clear_quest_state__6TLobbyFv();
M2C_UNK reset_quest_counter__6TLobbyFv();
M2C_UNK set_cleanup_flag__6TLobbyFv();
M2C_UNK reset_door_state__6TLobbyFv();
M2C_UNK THunterGuildSeqOffline__sub_80213430();
void enable_all_battle_ctrl__10TNpcPlayerFv();
M2C_UNK queue_destruction__7TObjectFv(u32);

extern u32 lbl_805D5EE8;

void free_objects__6TLobbyFv(void) {
    TRaderMapCore__sub_801F9540();
    TSwitch__sub_8022942C();
    apply_all_players__9TTecLukerFv();
    TLobby__sub_80103F68();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) lbl_805D5EE8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EE8);
    }
    TObjCityMainWarp__sub_80186634();
    THunterGuildSeqOffline__sub_80213430();
    clear_counter__6TLobbyFv();
    reset_door_state__6TLobbyFv();
    reset_instance__8TObjDoorFv();
    set_cleanup_flag__6TLobbyFv();
    reset_quest_counter__6TLobbyFv();
    clear_quest_state__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A497C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_camera_state__6TLobbyFv(void);
s32 TCameraCtrl__sub_8006B368();
M2C_UNK TLobby__sub_801A46D8();
M2C_UNK TLobby__sub_801A4820();

void update_camera_state__6TLobbyFv(void) {
    if (TCameraCtrl__sub_8006B368() != 0) {
        TLobby__sub_801A46D8();
        return;
    }
    TLobby__sub_801A4820();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A4C1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_periodic_tick__6TLobbyFv(void);
M2C_UNK fn_801D9E50(void*);

extern s32 lbl_805D53A4;
extern u32 TLobby__data_805D5580;
extern s32 TLobby__data_805D5E24;

void update_periodic_tick__6TLobbyFv(void) {
    if ((TLobby__data_805D5E24 & 1) && ((lbl_805D53A4 % 900) == 0) && ((u32) TLobby__data_805D5580 != 0U)) {
        fn_801D9E50((void*)TLobby__data_805D5580);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A4C6C
#include "types.h"

extern "C" {

void TLobby__sub_801A4C6C(void* p);
void set_value__6TLobbyFPvi(void* p, s32 v);

void TLobby__sub_801A4C6C(void* p) { *(u32*)((char*)p + 0x20) |= 0x1; }
void set_value__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A4C84
#include "types.h"

extern "C" {

void reset_counter__6TLobbyFv(void);

    extern int lbl_805D4E2C;
void reset_counter__6TLobbyFv(void) { lbl_805D4E2C = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A5478
#include "types.h"

extern "C" {

void TLobby__sub_801A5478(void);
int free__11TOBoss4RockFUi(void*);

    extern int lbl_805D5CF8;
void TLobby__sub_801A5478(void) { free__11TOBoss4RockFUi((void*)(lbl_805D5CF8)); lbl_805D5CF8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A54E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_801a54e8 { char pad[0x18]; };
struct VObj_801a54e8 : VBase_801a54e8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8(void *, s32);
};

extern "C" {

void TLobby__sub_801A54E8(u8 *arg0);

void TLobby__sub_801A54E8(u8 *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x8B8);
    if (temp_r4 > 0) {
        if (temp_r4 & 3) {
            M2C_FIELD(arg0, s32 *, 0x8B8) = (s32) (temp_r4 + 3);
            M2C_FIELD(arg0, s32 *, 0x8B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x8B8) & 0xFFFFFFFC);
        }
        ((VObj_801a54e8 *) arg0)->m8(arg0 + 0x8BC, M2C_FIELD(arg0, s32 *, 0x8B8));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B07E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_801B07E0(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();

s32 TLobby__sub_801B07E0(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B0810
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_field1c_packet__6TLobbyFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0438(M2C_UNK *);
M2C_UNK TFontSmallLobby__sub_801C044C(M2C_UNK *);
s16 obj_getField1c(s32);
s32 obj_isState2_324();

void send_field1c_packet__6TLobbyFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TFontSmallLobby__sub_801C0438((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        TFontSmallLobby__sub_801C044C((M2C_UNK *)&sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B08F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_801B08F0(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();

s32 TLobby__sub_801B08F0(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B0920
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_font_state__6TLobbyFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0480(M2C_UNK *);
M2C_UNK TFontSmallLobby__sub_801C0494(M2C_UNK *);
s16 obj_getField1c(s32);
s32 obj_isState2_324();

void send_font_state__6TLobbyFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TFontSmallLobby__sub_801C0480((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        TFontSmallLobby__sub_801C0494((M2C_UNK *)&sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B0A90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_switch_available__6TLobbyFPvi(void *arg0, s32 arg1);
u8 get_field_ec__12TOSwitchItemFPv();
s32 is_technique_ready__8TTecCtrlFv();
u32 start_inventory_update__10TObjPlayerFPvi(s32, s32);
u32 get_owner_if_alive__10TObjPlayerFPv();
u8 fn_801D719C(M2C_UNK *);
u8 fn_801D71D0(M2C_UNK *);

extern M2C_UNK lbl_8050EA40[];

s32 check_switch_available__6TLobbyFPvi(void *arg0, s32 arg1) {
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        if (fn_801D71D0(lbl_8050EA40) == 2) {
            if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
                return 0;
            }
            if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
                return 0;
            }
            if (get_field_ec__12TOSwitchItemFPv() == 0) {
                return 0;
            }
            goto block_8;
        }
block_8:
        if (fn_801D719C(lbl_8050EA40) == 1) {
            if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
                return 0;
            }
            if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
                return 0;
            }
            if (get_field_ec__12TOSwitchItemFPv() == 2) {
                return 0;
            }
            goto block_15;
        }
        goto block_15;
    }
block_15:
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B1254
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801B1254(s32 arg0);
M2C_UNK fn_801C0510(M2C_UNK *);
M2C_UNK TLobby__sub_801C0524(M2C_UNK *);
s16 obj_getField1c(s32);
s32 obj_isState2_324();

void TLobby__sub_801B1254(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        fn_801C0510((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        TLobby__sub_801C0524((M2C_UNK *)&sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C25B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_all_battle_flags__6TLobbyFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 obj_testFlags30(u32, M2C_UNK);

s32 check_all_battle_flags__6TLobbyFv(void) {
    u32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
loop_1:
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
    if ((temp_r3 != 0U) && (obj_testFlags30(temp_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C295C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_battle_mode_data__6TLobbyFv(void);
M2C_UNK send_set_battle_mode_data__6TLobbyFPv(void *);

M2C_UNK build_6x7D_set_battle_mode_data(void *);

struct S801C295C { M2C_UNK f0; s8 f4; s8 pad[0x13]; };

void send_battle_mode_data__6TLobbyFv(void) {
    struct S801C295C sp8;

    build_6x7D_set_battle_mode_data(&sp8);
    sp8.f4 = 5;
    send_set_battle_mode_data__6TLobbyFPv(&sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C2990
#include "types.h"

extern "C" {

void clear_counter__6TLobbyFPv(void* a0);

    extern int lbl_805D5DB0;
void clear_counter__6TLobbyFPv(void* a0) { *(int*)((char*)a0 + 0x270) = 0; lbl_805D5DB0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C29A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 check_timeout__6TLobbyFPv(void *arg0);
s32 get_game_mode__6TLobbyFv();

extern s32 lbl_805D5DB0;

u8 check_timeout__6TLobbyFPv(void *arg0) {
    if ((s32) lbl_805D5DB0 >= get_game_mode__6TLobbyFv()) {
        M2C_FIELD(arg0, s32 *, 0x270) = 2;
    }
    return (u8) (M2C_FIELD(arg0, s32 *, 0x270) == 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C2AD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_270__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_801C29F0();

void set_flag_270__6TLobbyFPv(void *arg0) {
    TLobby__sub_801C29F0();
    M2C_FIELD(arg0, s32 *, 0x270) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C2BCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_all_players_ready__6TLobbyFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

extern u8 lbl_805D5DBC;

s32 check_all_players_ready__6TLobbyFv(void) {
    u8 *var_r31;
    s32 var_r30;
    s32 var_r29;

    var_r31 = &lbl_805D5DBC;
    var_r30 = 1;
    var_r29 = 0;
loop_1:
    if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r29) != 0U) && ((s8) *var_r31 == 0)) {
        var_r30 = 0;
    } else {
        var_r29 += 1;
        var_r31 += 1;
        if (var_r29 < 4) {
            goto loop_1;
        }
    }
    return var_r30;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C2E98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__6TLobbyFPv(void *arg0);
M2C_UNK set_flag_270__6TLobbyFPv();
M2C_UNK close_and_play_effect__6TLobbyFii(u16, M2C_UNK);
M2C_UNK TLobby__sub_8020BB18();
M2C_UNK TLobby__sub_8020BCE4();
M2C_UNK TOMineTrap__sub_8016FCC4();
s32 update_battle_controller__10TObjPlayerFv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK set_type__10TObjPlayerFPvi(s32, M2C_UNK);
M2C_UNK obj_set_flag_20000();
M2C_UNK destroy__23TAdSinglePlyChrSelectGCFv();
M2C_UNK fn_801C5454(s32);
M2C_UNK fn_801F57B4(s32);
M2C_UNK fn_8020910C(s32);

extern s32 lbl_805D53A0;
extern s32 tl_00;
extern s32 tl_01;

void init__6TLobbyFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;
    u32 temp_r3_2;

    set_flag_270__6TLobbyFPv();
    close_and_play_effect__6TLobbyFii((u16) lbl_805D53A0, 1);
    temp_r3 = update_battle_controller__10TObjPlayerFv();
    if (temp_r3 != 0) {
        obj_set_flag_20000();
        set_type__10TObjPlayerFPvi(temp_r3 + 0x644, 0xE10);
    }
    TOMineTrap__sub_8016FCC4();
    fn_8020910C(tl_01);
    fn_801F57B4(tl_00);
    TLobby__sub_8020BCE4();
    destroy__23TAdSinglePlyChrSelectGCFv();
    TLobby__sub_8020BB18();
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    do {
        temp_r3_2 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if (temp_r3_2 != 0U) {
            fn_801C5454(temp_r3_2 + 0x7C4);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C3130
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_ref__6TLobbyFPv(u8 *arg0);
void *deleting_dtor__6TLobbyFPvs(void *arg0, s16 arg1);
void *init_with_name__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
s32 assign_player_id__6TLobbyFv(void);
void send_neg50__6TLobbyFPvPv(void* p, void* a1);
s32 TObjPlayer__sub_801AFFD0();
s32 update_battle_controller__10TObjPlayerFv();
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int fn_801C23A8(void*, void*);
M2C_UNK set_battle_mode__19TPlayerBattleCtrl4PFPvi(s32, s32);
int TLobby__sub_8022727C(void*);
M2C_UNK TObjBgmColCtrl__sub_802274B8(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void release_ref__6TLobbyFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 <= 0) {
        TObjBgmColCtrl__sub_802274B8(arg0 + 0x20);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK lbl_804C3E88[];

void *deleting_dtor__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3E88;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804C3E88[];
void strncpy(void *, void *, int);

void *init_with_name__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3E88;
    M2C_FIELD(arg0, void **, 0x1C) = arg3;
    strncpy((void *)((char *)arg0 + 32), arg2, 32);
    return arg0;
}

s32 assign_player_id__6TLobbyFv(void) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3_2 = update_battle_controller__10TObjPlayerFv();
    if (temp_r3_2 == 0) {
        return 0;
    }
    temp_r3 = TObjPlayer__sub_801AFFD0();
    set_battle_mode__19TPlayerBattleCtrl4PFPvi(temp_r3_2 + 0x7AC, temp_r3);
    return temp_r3;
}

void send_neg50__6TLobbyFPvPv(void* p, void* a1) { TLobby__sub_8022727C(p); fn_801C23A8((void*)-50, a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C36E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801C36E4(void *arg0, void *arg1);

void TLobby__sub_801C36E4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C38A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801C38A4(void);
void init_and_set_flag__6TLobbyFv(void);
int inc_player_count__10TObjPlayerFv(void);
int TLobby__sub_801B09A4(void);

extern void *TLobby__data_805D5D98;

void TLobby__sub_801C38A4(void) {
    if ((void *) TLobby__data_805D5D98 != NULL) {
        M2C_FIELD(TLobby__data_805D5D98, s32 *, 0x24) = 0;
    }
}

    extern int lbl_805D5DB4;
void init_and_set_flag__6TLobbyFv(void) { TLobby__sub_801B09A4(); inc_player_count__10TObjPlayerFv(); lbl_805D5DB4 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C39C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1);
u32 TPlayerBattleCtrl__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

M2C_UNK strncpy(s32, s32, M2C_UNK);
extern u32 TLobby__data_805D5D98;
extern s32 TLobby__data_805D5DA0;
extern s32 tl_00;

void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 var_r3;

    if ((u32) TLobby__data_805D5D98 == 0U) {
        var_r3 = __nw__7TObjectFUl(0x278);
        if (var_r3 != 0U) {
            var_r3 = TPlayerBattleCtrl__ct(var_r3, tl_00);
        }
        TLobby__data_805D5D98 = var_r3;
    }
    if ((u32) TLobby__data_805D5D98 != 0U) {
        strncpy(TLobby__data_805D5D98 + 0x68, arg1, 0x200);
        TLobby__data_805D5DA0 = arg0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C40C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_battle_result__6TLobbyFii(int arg0, s32 arg1);
void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1);
s32 TLobby__sub_801C417C(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK TWindowCtrl__sub_8024AEAC(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK fn_8024ACEC(s32);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi();

extern s32 lbl_805D53A0;

void handle_battle_result__6TLobbyFii(int arg0, s32 arg1) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        send_code_45_1__10TObjPlayerFi();
    }
    if (arg1 != 0) {
        TWindowChat__sub_8024AD30(lbl_805D53A0);
        clear_flag__11TWindowCtrlFv();
        TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
    }
}

M2C_UNK request_active_window_close();
extern s32 lbl_805D53A0;

void close_and_play_effect__6TLobbyFii(int arg0, s32 arg1) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        play_effect_default__10TObjPlayerFii(temp, -1);
    }
    if (arg1 != 0) {
        fn_8024ACEC(lbl_805D53A0);
        request_active_window_close();
        TWindowCtrl__sub_8024AEAC(lbl_805D53A0);
    }
}

extern void *TLobby__data_805D5DA0;

s32 TLobby__sub_801C417C(void) {
    return M2C_FIELD(TLobby__data_805D5DA0, s32 *, 0x24) * 0x3C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D3518
#include "types.h"

extern "C" {

s32 set_field4__10TObjPlayerFPvi(s32, s32);
s32 create_node__9TItemListFPvPvPvPv(s32, s32, s32, s32);
s32 copy_item_data__9TItemListFPv(s32, s32);
s32 TItemList__sub_801D5844(s32);
s32 TItemList__sub_801D5854(s32, s32);
s32 free_if_positive__6TLobbyFis(s32 arg0, s16 arg1);
int __dl__FPv();
int TItemList__sub_801D3B00(void*, void*, void*, void*);
int TItemList__sub_801D5804(void*);
int TItemList__sub_801D5838(void* a0 = 0);
int TItemList__sub_801D5868(void*, void*);
void fn_801D371C(void* p, void* q);

s32 free_if_positive__6TLobbyFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D4AEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801D4AEC { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_801D4AEC : Base_801D4AEC {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m27(s16);
VA
VA
VA
VA
VA
VA
    virtual s32 m34();
    virtual void m35(s32);
};

extern "C" {

void reduce_item_amount__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK unequip_item__10TObjPlayerFiPv(s32, void *);
s32 TObjPlayer__sub_801C1A70(void *);
void *get_owner_if_alive__10TObjPlayerFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);

void reduce_item_amount__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    VObj_801D4AEC *temp_r3;

    temp_r3 = (VObj_801D4AEC *)get_owner_if_alive__10TObjPlayerFPv(arg2);
    if ((temp_r3 != NULL) && (arg3 >= 0)) {
        if ((temp_r3->m34() - arg3) > 0) {
            temp_r3->m35(arg3);
            return;
        }
        if (TObjPlayer__sub_801C1A70(temp_r3) != 0) {
            unequip_item__10TObjPlayerFiPv(arg1, temp_r3);
        }
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (temp_r4 - 1);
        temp_r3->m27(temp_r4);
        queue_destruction__7TObjectFv(arg2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D4BB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 use_item__6TLobbyFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_801D4C28(void* a0, int a1, int a2, int a3);
void set_globals_and_update__6TLobbyFPvii(void* a0, int a1, int a2);
int set_globals_and_notify__6TLobbyFPvii(void* a0, int a1, int a2);
int TLobby__sub_801D5004(void*);
int TLobby__sub_801D50E0(void*);
M2C_UNK TObjPlayer__sub_80011138(s32, s32);
int TObjPlayer__sub_801D52A8(void*);
M2C_UNK reduce_item_amount__6TLobbyFPviii(s32, s32, s32, s32);
s32 start_inventory_update__10TObjPlayerFPvi(s32, s32);

s32 use_item__6TLobbyFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 == -1) {
        TObjPlayer__sub_80011138(arg1, arg3);
        return 1;
    }
    temp_r3 = start_inventory_update__10TObjPlayerFPvi(arg0, arg2);
    if (temp_r3 == 0) {
        return 0;
    }
    reduce_item_amount__6TLobbyFPviii(arg0, arg1, temp_r3, arg3);
    return 1;
}

    extern int lbl_805D5DE0;
    extern unsigned char lbl_805D5E04;
    extern unsigned char lbl_805D5E05;
void TLobby__sub_801D4C28(void* a0, int a1, int a2, int a3) { lbl_805D5DE0 = a1; lbl_805D5E04 = a2; lbl_805D5E05 = a3; TLobby__sub_801D5004((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern int lbl_805D5DE0;
    extern unsigned char lbl_805D5E04;
void set_globals_and_update__6TLobbyFPvii(void* a0, int a1, int a2) { lbl_805D5DE0 = a1; lbl_805D5E04 = a2; TLobby__sub_801D50E0((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern int lbl_805D5DE4;
    extern int lbl_805D5DF4;
int set_globals_and_notify__6TLobbyFPvii(void* a0, int a1, int a2) { lbl_805D5DE4 = a2; lbl_805D5DF4 = 0; TObjPlayer__sub_801D52A8((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D6BF8
#include "types.h"

extern "C" {

void update_all_children__6TLobbyFPv(void* p);
int update_child_player__6TLobbyFi(void*);
int reset_particle_ctrl__10TObjPlayerFPv(void*);

void update_all_children__6TLobbyFPv(void* p) { reset_particle_ctrl__10TObjPlayerFPv(p); update_child_player__6TLobbyFi((char*)p + 0x8); update_child_player__6TLobbyFi((char*)p + 0x18); update_child_player__6TLobbyFi((char*)p + 0x28); update_child_player__6TLobbyFi((char*)p + 0x38); update_child_player__6TLobbyFi((char*)p + 0x48); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D6DC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_volume__6TLobbyFPvUc(void *arg0, u8 arg1);

void set_volume__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 > 0x63U) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x10) = var_r4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D6E28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_validated_field_0x11__6TLobbyFPvUc(void *arg0, u8 arg1);
s16 clamp_player_index__6TLobbyFPv(void *arg0);
void set_clamped_index__6TLobbyFPvs(void *arg0, s16 arg1);
void set_clamped_value_1c__6TLobbyFPvi(void *arg0, s32 arg1);
u8 get_clamped_level__6TLobbyFPv(void *arg0);
s32 get_max_level__10TObjPlayerFv();
s32 is_invalid_slot__10TObjPlayerFUc(u8);
u8 ret_801D78E4();

void set_validated_field_0x11__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if ((is_invalid_slot__10TObjPlayerFUc(var_r31) == 0) && (var_r31 > 0x1DU)) {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x11) = var_r31;
}

s16 clamp_player_index__6TLobbyFPv(void *arg0) {
    s16 var_r31;

    var_r31 = M2C_FIELD(arg0, s16 *, 0x14);
    if ((var_r31 < 0) || (var_r31 > get_max_level__10TObjPlayerFv())) {
        var_r31 = 0;
    }
    return var_r31;
}

void set_clamped_index__6TLobbyFPvs(void *arg0, s16 arg1) {
    s16 var_r31;

    var_r31 = arg1;
    if ((var_r31 < 0) || (var_r31 > get_max_level__10TObjPlayerFv())) {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x14) = var_r31;
}

void set_clamped_value_1c__6TLobbyFPvi(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0x278D0)) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
}

u8 get_clamped_level__6TLobbyFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x18);
    if (temp_r0 >= 0x1E) {
        return ret_801D78E4();
    }
    return (u8) temp_r0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D76B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_settings_to_default__6TLobbyFPv(u8 *arg0);
s32 TItemDrop__sub_80107B04();
M2C_UNK set_volume__6TLobbyFPvUc(void *, M2C_UNK);
M2C_UNK set_validated_field_0x11__6TLobbyFPvUc(void *, M2C_UNK);
M2C_UNK set_clamped_index__6TLobbyFPvs(void *, M2C_UNK);
M2C_UNK set_clamped_value_1c__6TLobbyFPvi(void *, M2C_UNK);
M2C_UNK set_field_0xE__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_d__6TLobbyFPvUc(void *, s32);
M2C_UNK set_clamped_field_c__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_b__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_a__6TLobbyFPvUc(void *, s32);
M2C_UNK set_byte9_clamped__6TLobbyFPvUc(void *, s32);
M2C_UNK set_difficulty__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field7_clamped__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_0x6__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_5__6TLobbyFPvUc(void *, s32);
M2C_UNK set_clamped_field_4__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_3__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_2__6TLobbyFPvUc(void *, s32);
M2C_UNK set_validated_field_0x1__6TLobbyFPvUc(void *, s32);
M2C_UNK set_section_id__6TLobbyFPvUc(void *, s32);
s32 ret_801D78F4(void *);
s32 ret_801D78FC(void *);
s32 ret_801D7904(void *);
s32 ret_801D790C(void *);
s32 ret_801D7914(void *);
s32 ret_801D791C(void *);
s32 ret_801D7924(void *);
s32 ret_801D792C(void *);
s32 ret_801D7934(void *);
s32 ret_801D793C(void *);
s32 ret_801D7944(void *);
s32 ret_801D794C(void *);
s32 ret_801D7954(void *);
s32 ret_801D795C(void *);

void reset_settings_to_default__6TLobbyFPv(u8 *arg0) {
    s32 temp_r0;
    s32 var_ctr;
    s32 var_r4;

    set_section_id__6TLobbyFPvUc(arg0, TItemDrop__sub_80107B04());
    set_validated_field_0x1__6TLobbyFPvUc(arg0, ret_801D795C(arg0));
    set_field_2__6TLobbyFPvUc(arg0, ret_801D7954(arg0));
    set_field_3__6TLobbyFPvUc(arg0, ret_801D794C(arg0));
    set_clamped_field_4__6TLobbyFPvUc(arg0, ret_801D7944(arg0));
    set_field_5__6TLobbyFPvUc(arg0, ret_801D793C(arg0));
    set_field_0x6__6TLobbyFPvUc(arg0, ret_801D7934(arg0));
    set_field7_clamped__6TLobbyFPvUc(arg0, ret_801D792C(arg0));
    set_difficulty__6TLobbyFPvUc(arg0, ret_801D7924(arg0));
    set_byte9_clamped__6TLobbyFPvUc(arg0, ret_801D791C(arg0));
    set_field_a__6TLobbyFPvUc(arg0, ret_801D7914(arg0));
    set_field_b__6TLobbyFPvUc(arg0, ret_801D790C(arg0));
    set_clamped_field_c__6TLobbyFPvUc(arg0, ret_801D7904(arg0));
    set_field_d__6TLobbyFPvUc(arg0, ret_801D78FC(arg0));
    set_field_0xE__6TLobbyFPvUc(arg0, ret_801D78F4(arg0));
    set_volume__6TLobbyFPvUc(arg0, 0);
    set_validated_field_0x11__6TLobbyFPvUc(arg0, 0xFF);
    set_clamped_index__6TLobbyFPvs(arg0, 0);
    set_clamped_value_1c__6TLobbyFPvi(arg0, 0xA);
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    for (var_r4 = 0; var_r4 < 4; var_r4++) {
        *(arg0 + var_r4 + 0x20) = 0x14;
    }
    M2C_FIELD(arg0, s8 *, 0xF) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801DA7DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801DA7DC { char pad[0x18]; };
struct VObj_801DA7DC : Base_801DA7DC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m_call(void *a1, M2C_UNK a2);
};

extern "C" {

void send_c6_packet__6TLobbyFPvPv(void *arg0, void *arg1);
M2C_UNK bswap_c6_packet__6TLobbyFPv(void *);

void send_c6_packet__6TLobbyFPvPv(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1910) != 0) {
        M2C_FIELD(arg1, u8 *, 0) = 0xC6;
        M2C_FIELD(arg1, s16 *, 2) = 0x7C;
        bswap_c6_packet__6TLobbyFPv(arg1);
        ((VObj_801DA7DC *)arg0)->m_call(arg1, 0x7C);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E2F94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_with_camera__6TLobbyFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK TCameraCtrl__sub_80069024();
M2C_UNK TLobby__sub_80228154(s32, s32, s32, f32);

void draw_with_camera__6TLobbyFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    TCameraCtrl__sub_80069024();
    TLobby__sub_80228154(arg0, arg1, arg2, farg0);
    TCameraCtrl__sub_80068EF0();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E43E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_command__6TLobbyFPvUi(void *arg0, u32 arg1);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK TLobby__sub_801E3FA4(void *);
M2C_UNK send_pso_data_long2__9TProtocolFcR17long_game_commandUl(void*, u32, void *, s32);

extern u32 lbl_805D53A0;
extern u32 TLobby__data_805D5580;
extern s32 lbl_805D5E50;

void send_command__6TLobbyFPvUi(void *arg0, u32 arg1) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 4);
    bswap_32__FPUl(&sp8);
    if ((u32) lbl_805D53A0 == arg1) {
        lbl_805D5E50 = 1;
        TLobby__sub_801E3FA4(arg0);
        lbl_805D5E50 = 0;
        return;
    }
    if ((u32) TLobby__data_805D5580 != 0U) {
        send_pso_data_long2__9TProtocolFcR17long_game_commandUl((void*)TLobby__data_805D5580, arg1, arg0, sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E4464
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_packet__6TLobbyFPv(void *arg0);
M2C_UNK TProtocol__sub_801DC084(u32, s32, void *, s32);
M2C_UNK TLobby__sub_801E3FA4(void *);

s32 get_main_phase();
extern s32 TLobby__data_805D53AC;
extern u32 TLobby__data_805D5580;
extern s32 lbl_805D5E50;

void dispatch_packet__6TLobbyFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 1) * 4;
    if (get_main_phase() == 0xE) {
        lbl_805D5E50 = 1;
        TLobby__sub_801E3FA4(arg0);
        lbl_805D5E50 = 0;
        return;
    }
    if ((u32) TLobby__data_805D5580 != 0U) {
        TProtocol__sub_801DC084(TLobby__data_805D5580, TLobby__data_805D53AC, arg0, temp_r31);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E45D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_players__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60();
M2C_UNK fn_801A5544(void *, s32);
M2C_UNK TLobby__sub_801E3FA4(s32);

extern s32 TLobby__data_805D5598;
extern void *lbl_805D5E48;
extern s32 lbl_805D5E50;

void update_players__6TLobbyFi(s32 arg0) {
    void *var_r31;

    if ((s32) TLobby__data_805D5598 == 1) {
        TLobby__send_and_handle_60();
        return;
    }
    if ((void *) lbl_805D5E48 != NULL) {
        var_r31 = M2C_FIELD(lbl_805D5E48, void **, 0x14);
        while (var_r31 != NULL) {
            fn_801A5544(var_r31, arg0);
            var_r31 = M2C_FIELD(var_r31, void **, 0xC);
        }
    }
    lbl_805D5E50 = 1;
    TLobby__sub_801E3FA4(arg0);
    lbl_805D5E50 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E4650
#include "types.h"

extern "C" {

void bswap_switch_activate_token__6TLobbyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);

void bswap_switch_activate_token__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E6544
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void capture_chat_sensor__6TLobbyFi(s32 arg0);
M2C_UNK TOChatSensorCapture__sub_8015A99C(u16, s32);
M2C_UNK TOChatSensor__sub_8015B108();

extern s32 lbl_805D53A0;

void capture_chat_sensor__6TLobbyFi(s32 arg0) {
    TOChatSensor__sub_8015B108();
    TOChatSensorCapture__sub_8015A99C((u16) lbl_805D53A0, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E67D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void append_card_window_text__6TLobbyFv(void);
M2C_UNK append_string(void *);
u32 get_card_window__17TWindowSubComCardFUi(int);

extern M2C_UNK lbl_80449C6C[];

void append_card_window_text__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi((int) (0xFFFF));
    if (temp_r3 != 0U) {
        append_string((void *) (temp_r3 + 0x2254));
        return;
    }
    append_string((void *) (lbl_80449C6C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E6BB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TLobby__sub_801E6BB8(void);
u8 read_byte_advance__6TLobbyFv(void);

extern u8 *TLobby__data_805D5ED0;

u8 TLobby__sub_801E6BB8(void) {
    return (u8) ((s8) *TLobby__data_805D5ED0 == 0);
}

extern u8 *TLobby__data_805D5ED0;

u8 read_byte_advance__6TLobbyFv(void) {
    u8 *temp_r3;

    temp_r3 = TLobby__data_805D5ED0;
    TLobby__data_805D5ED0 = temp_r3 + 1;
    return *temp_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E6C2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801E6C2C(s8 arg0);

extern s8 *lbl_805D5ED4;

void TLobby__sub_801E6C2C(s8 arg0) {
    s8 *temp_r4;

    temp_r4 = lbl_805D5ED4;
    lbl_805D5ED4 = temp_r4 + 1;
    *temp_r4 = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E6C40
#include "types.h"

extern "C" {

void TLobby__sub_801E6C40(int a0, int a1);

    extern int TLobby__data_805D5ED0;
    extern int lbl_805D5ED4;
void TLobby__sub_801E6C40(int a0, int a1) { TLobby__data_805D5ED0 = a0; lbl_805D5ED4 = a1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E6DA0
#include "types.h"

extern "C" {

void create_singleton__6TLobbyFv(void);
int create_singleton__6TLobbyFPv(void*);

    extern int tl_01;
void create_singleton__6TLobbyFv(void) { create_singleton__6TLobbyFPv((void*)(tl_01)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E6EF8
#include "types.h"

extern "C" {

void create_chat_sensor_capture__6TLobbyFv(void);
int create_instance__19TOChatSensorCaptureFPv(void*);

    extern int tl_01;
void create_chat_sensor_capture__6TLobbyFv(void) { create_instance__19TOChatSensorCaptureFPv((void*)(tl_01)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E6F78
#include "types.h"

extern "C" {

void TLobby__sub_801E6F78(int a0);

    extern int TLobby__data_80512220[];
    extern int TLobby__data_805D5EA4;
void TLobby__sub_801E6F78(int a0) { int old = TLobby__data_805D5EA4; TLobby__data_805D5EA4 = old + 1; TLobby__data_80512220[old] = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E7124
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void request_1c38_1_7__6TLobbyFv(void);
void reset_and_set_mode__6TLobbyFv(void);
M2C_UNK TLobby__sub_801F1C38(M2C_UNK, M2C_UNK);
int TLobby__sub_801F1C8C(void*, void*);

void request_1c38_1_7__6TLobbyFv(void) {
    TLobby__sub_801F1C38(1, 7);
}

    extern int TLobby__data_805D5EA4;
void reset_and_set_mode__6TLobbyFv(void) { TLobby__data_805D5EA4 = 0; TLobby__sub_801F1C8C((void*)1, (void*)7); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E765C
#include "types.h"

extern "C" {

void close_active_window__6TLobbyFi(int a0);
int set_close_flag__11TWindowCtrlFv(void);
int close_window_if_active(void*);
int set_flag_bit2__11TWindowCtrlFv(void);

    int request_active_window_close(void);
    extern int* TLobby__data_805D5E78;
    extern int lbl_805D53A0;
    extern unsigned char TLobby__data_805D5E88;
    extern int TLobby__data_805D5E98;
void close_active_window__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = -1; TLobby__data_805D5E88 = a0; TLobby__data_805D5E98 = 12; set_flag_bit2__11TWindowCtrlFv(); close_window_if_active((void*)(lbl_805D53A0)); request_active_window_close(); set_close_flag__11TWindowCtrlFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E76E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_help_window__6TLobbyFv(void);
void send_data__6TLobbyFv(void);
s32 TWindowHelpItem__ct(s32, s32, s32);
s32 TWindowShortListCtrl__sub_80278E48(s32, M2C_UNK *, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK clear_quest_vm_flag__6TLobbyFv();
M2C_UNK free_luker_object__6TLobbyFv(void);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK save_and_close__20TShopArmorListWindowFPv();
M2C_UNK send_data__6TLobbyFi(s32);
M2C_UNK TLobby__sub_8032CD7C(s32, s32);

extern M2C_UNK lbl_80449B2C[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5EBC;
extern s32 TLobby__data_805D5EC0;

void create_help_window__6TLobbyFv(void) {
    s32 var_r31;

    TLobby__data_805D5EBC = TWindowShortListCtrl__sub_80278E48(TWindowSubComCard__sub_8026CBB8(3), lbl_80449B2C, lbl_805D53A0);
    save_and_close__20TShopArmorListWindowFPv();
    var_r31 = __nw__7TObjectFUl(0xBC);
    if (var_r31 != 0) {
        var_r31 = TWindowHelpItem__ct(var_r31, TWindowSubComCard__sub_8026CBB8(2), lbl_805D53A0);
    }
    TLobby__data_805D5EC0 = var_r31;
}

struct Glob_80512220 { s32 field0; char pad[0x100]; };
extern struct Glob_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D6CC0;
extern s32 TLobby__data_805D6CC8;

void send_data__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220.field0;
    free_luker_object__6TLobbyFv();
    send_data__6TLobbyFi(temp_r31);
    TLobby__sub_8032CD7C(TLobby__data_805D6CC0, TLobby__data_805D6CC8);
    clear_quest_vm_flag__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E7E18
#include "types.h"

extern "C" {

void set_handler_entry__6TLobbyFi(int a0);
int TWindowSubComCard__sub_8007AFB8(void);

    extern int* TLobby__data_805D5E78;
void set_handler_entry__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TWindowSubComCard__sub_8007AFB8(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E8154
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_player_battle__6TLobbyFv(void);
M2C_UNK TObjPlayer__sub_801B8DE8(u32, s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

extern s32 TLobby__data_80512220[];
extern s32 lbl_805D53A0;

void notify_player_battle__6TLobbyFv(void) {
    s32 temp_r31;
    u32 ret;

    temp_r31 = TLobby__data_80512220[0];
    ret = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (ret != 0U) {
        TObjPlayer__sub_801B8DE8(ret, temp_r31, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E8228
#include "types.h"

extern "C" {

int get_selected_slot__6TLobbyFPv(void* p);
int destroy__6TLobbyFPv(void* p);
int init_graph__6TLobbyFPv(void* p);
int destroy_singleton__6TLobbyFv(void*);
int init_graph__6TLobbyFv(void*);
int get_selected_slot__6TLobbyFv(void*);

int get_selected_slot__6TLobbyFPv(void* p) { return get_selected_slot__6TLobbyFv(p); }
int destroy__6TLobbyFPv(void* p) { return destroy_singleton__6TLobbyFv(p); }
int init_graph__6TLobbyFPv(void* p) { return init_graph__6TLobbyFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E8478
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag3__6TLobbyFv(void);
void free_static__6TLobbyFv(void);
M2C_UNK clear_flag_3__7TObjectFv(void *);
M2C_UNK TMainTask__sub_801F34D0(void *);

extern void *tl_03;

void clear_flag3__6TLobbyFv(void) {
    void *self = tl_03;
    if (self != NULL) {
        clear_flag_3__7TObjectFv(self);
    }
}

extern void *tl_03;

void free_static__6TLobbyFv(void) {
    void *temp = tl_03;
    if (temp != 0) {
        TMainTask__sub_801F34D0(temp);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E90AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag__6TLobbyFv(void);
void free_child__6TLobbyFv(void);
M2C_UNK clear_flag_3__7TObjectFv(void *);
M2C_UNK TMainTask__sub_801F34D0(void *);

extern void *tl_04;

void clear_flag__6TLobbyFv(void) {
    void *temp = tl_04;
    if (temp != 0) {
        clear_flag_3__7TObjectFv(temp);
    }
}

extern void *tl_04;

void free_child__6TLobbyFv(void) {
    void *temp = tl_04;
    if (temp != 0) {
        TMainTask__sub_801F34D0(temp);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E93E0
#include "types.h"

extern "C" {

int TLobby__sub_801E93E0(void* p);
int TCameraCtrl__sub_8006CCEC(void*);

int TLobby__sub_801E93E0(void* p) { return TCameraCtrl__sub_8006CCEC(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E95B0
#include "types.h"

extern "C" {

int TLobby__sub_801E95B0(void* p);
int find_player_143__6TLobbyFv(void);
int set_active_player__10TObjPlayerFi(void*);
int TLobby__sub_801F3568(void*);

int TLobby__sub_801E95B0(void* p) { return TLobby__sub_801F3568(p); }
int find_player_143__6TLobbyFv(void) { return set_active_player__10TObjPlayerFi((void*)(143)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E99DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_hunter_guild_seq__6TLobbyFv(void);
void reset_random_enemies_mode__6TLobbyFv(void);
s32 TCameraCtrl__sub_8006B368();
int TKeyBoardControl__sub_8000F950(void);
u32 __nw__7TObjectFUl(M2C_UNK);
int clear_counter__6TLobbyFv(void);
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(void *, s32, M2C_UNK *);

    extern int evt2_random_enemies_mode;
void reset_random_enemies_mode__6TLobbyFv(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }

extern s32 tl_00;

void create_hunter_guild_seq__6TLobbyFv(void) {
    void *temp_r3;
    if ((TCameraCtrl__sub_8006B368() == 1) && ((temp_r3 = (void*)__nw__7TObjectFUl(0x28)) != 0U)) {
        init__22THunterGuildSeqOfflineFPvPvPv(temp_r3, tl_00, (M2C_UNK *)reset_random_enemies_mode__6TLobbyFv);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E9B98
#include "types.h"

extern "C" {

void update_and_apply_alloc__6TLobbyFv(void);
int update_alloc_size__6TLobbyFv(void*);
int TLobby__sub_8032CD7C(void*, void*);

    extern int TLobby__data_805D6CC0;
    extern int TLobby__data_805D6CC8;
void update_and_apply_alloc__6TLobbyFv(void) { update_alloc_size__6TLobbyFv((void*)0); TLobby__sub_8032CD7C((void*)(TLobby__data_805D6CC0), (void*)(TLobby__data_805D6CC8)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E9C7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_story_select__6TLobbyFi(s32 arg0);
int TLobby__sub_801E9CD0(void* p);
void cache_player_field__6TLobbyFv(void);
void update_by_screen_mode__6TLobbyFv(void);
void update_split_screen__6TLobbyFv(void);
s32 set_state__16TAdStorySelectGCFi(s32);
int TLobby__sub_801EA5FC(void*);
M2C_UNK TLobby__sub_80070AFC();
M2C_UNK update_dead_list_win__6TLobbyFv();
void *get_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK update_screen__6TLobbyFPv();
M2C_UNK TLobby__sub_80291DC0();

void set_story_select__6TLobbyFi(s32 arg0) {
    switch (arg0) {
    case 0:
        set_state__16TAdStorySelectGCFi(0);
        return;
    case 1:
        set_state__16TAdStorySelectGCFi(1);
        return;
    default:
        set_state__16TAdStorySelectGCFi(0);
        return;
    }
}
int TLobby__sub_801E9CD0(void* p) { return TLobby__sub_801EA5FC(p); }

extern s32 TLobby__data_805D5EC4;

void cache_player_field__6TLobbyFv(void) {
    s32 var_r0;
    void *temp_r3;

    temp_r3 = get_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, 0xE284);
    } else {
        var_r0 = 0;
    }
    TLobby__data_805D5EC4 = var_r0;
}

s32 is_split_screen();

void update_by_screen_mode__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        update_screen__6TLobbyFPv();
        return;
    }
    update_dead_list_win__6TLobbyFv();
}

s32 is_split_screen();

void update_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291DC0();
        return;
    }
    TLobby__sub_80070AFC();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EA05C
#include "types.h"

extern "C" {

void set_handler__6TLobbyFi(int a0);
int get_game_mode__6TLobbyFv(void);

    extern int* TLobby__data_805D5E78;
void set_handler__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = get_game_mode__6TLobbyFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EA65C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_or_create_handle__6TLobbyFv(void);
u32 get_serial_access__22TQuestVmDownLoadServerFPv();
u32 poll_serial_access__22TQuestVmDownLoadServerFPv();

extern u32 TLobby__data_805D5EC4;

void get_or_create_handle__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = get_serial_access__22TQuestVmDownLoadServerFPv();
    TLobby__data_805D5EC4 = temp_r3;
    if (temp_r3 == 0U) {
        TLobby__data_805D5EC4 = poll_serial_access__22TQuestVmDownLoadServerFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EA728
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_split_screen__6TLobbyFv(void);
void apply_split_screen__6TLobbyFv(void);
M2C_UNK TLobby__sub_80070BE8(M2C_UNK);
M2C_UNK TLobby__sub_80291EAC(M2C_UNK);

s32 is_split_screen();

void handle_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291EAC(0);
        return;
    }
    TLobby__sub_80070BE8(0);
}

s32 is_split_screen();

void apply_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291EAC(1);
        return;
    }
    TLobby__sub_80070BE8(1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EA818
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_or_send__6TLobbyFv(void);
M2C_UNK draw_if_ready__6TLobbyFv();
M2C_UNK draw_if_ready2__6TLobbyFv();

s32 is_split_screen();

void draw_or_send__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        draw_if_ready2__6TLobbyFv();
        return;
    }
    draw_if_ready__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EA8E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801EA8E8(void);
M2C_UNK TLobby__sub_8020DBCC();
M2C_UNK clear_buffer__12TQuestThreadFPv(u32);
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022945C();
M2C_UNK TLobby__sub_80070C50();
M2C_UNK TLobby__sub_801036CC();
M2C_UNK fn_801F57B4(s32);
M2C_UNK TLobby__sub_802089B0();
M2C_UNK init_sub_objects__6TLobbyFv();
M2C_UNK TLobby__sub_80291FC0();

s32 is_split_screen();
extern u32 lbl_805D5EE8;
extern s32 tl_00;

void TLobby__sub_801EA8E8(void) {
    TLobby__sub_801036CC();
    if ((u32) lbl_805D5EE8 != 0U) {
        clear_buffer__12TQuestThreadFPv(lbl_805D5EE8);
    }
    fn_801F57B4(tl_00);
    init_sub_objects__6TLobbyFv();
    TLobby__sub_8020DBCC();
    TLobby__sub_802089B0();
    TSwitch__sub_8022945C();
    TRaderMapCore__sub_801F9540();
    if (is_split_screen() == 1) {
        TLobby__sub_80291FC0();
        return;
    }
    TLobby__sub_80070C50();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EB228
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_guild_card_tag__6TLobbyFi(s32 arg0);
M2C_UNK __ct__16TPlyGuildCardTagFv(s32);

s32 init_guild_card_tag__6TLobbyFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EB568
#include "types.h"

extern "C" {

int forward_802272B4__6TLobbyFPv(void* p);
int TLobby__sub_801EB588(void* p);
void TLobby__sub_801EB5A8(void);
int TLobby__sub_802272B4(void*);
int TLobby__sub_8022733C(void*);

int forward_802272B4__6TLobbyFPv(void* p) { return TLobby__sub_802272B4(p); }
int TLobby__sub_801EB588(void* p) { return TLobby__sub_8022733C(p); }
void TLobby__sub_801EB5A8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EBE6C
#include "types.h"

extern "C" {

int TLobby__sub_801EBE6C(void);
int enable_mine_trap__6TLobbyFv(void);
void init_menu_state__6TLobbyFi(int a0);
int set_trap_count__10TOMineTrapFi(void*);
int create__16TObjItemOKWindowFPv(void*);

int TLobby__sub_801EBE6C(void) { return set_trap_count__10TOMineTrapFi((void*)(0)); }
int enable_mine_trap__6TLobbyFv(void) { return set_trap_count__10TOMineTrapFi((void*)(1)); }

    extern int* TLobby__data_805D5E78;
    extern unsigned char TLobby__data_805D5E88;
    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB8;
    extern int tl_01;
void init_menu_state__6TLobbyFi(int a0) { TLobby__data_805D5EB8 = create__16TObjItemOKWindowFPv((void*)(tl_01)); TLobby__data_805D5E78[(unsigned char)(a0)] = 0; TLobby__data_805D5E88 = a0; TLobby__data_805D5E98 = 11; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EC3DC
#include "types.h"

extern "C" {

void init_window__6TLobbyFv(void);
void init_state__6TLobbyFv(void);
int create__18TObjItemNameSelectFPv(void*);
int create__17TObjItemNameEntryFPv(void*);

    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB4;
    extern int tl_01;
void init_window__6TLobbyFv(void) { TLobby__data_805D5EB4 = create__18TObjItemNameSelectFPv((void*)(tl_01)); TLobby__data_805D5E98 = 10; }

    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB0;
    extern int tl_01;
void init_state__6TLobbyFv(void) { TLobby__data_805D5EB0 = create__17TObjItemNameEntryFPv((void*)(tl_01)); TLobby__data_805D5E98 = 9; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EC6C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_main_phase__6TLobbyFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK handle_main_phase__6TLobbyFi();

extern s32 lbl_805D53A0;

void update_main_phase__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        handle_main_phase__6TLobbyFi();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EC7A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_801EC7A0(void);
int TLobby__sub_801EC7C4(void);
void dispatch_first_player__6TLobbyFv(void);
int TLobby__sub_801EC834(void* p);
int TLobby__sub_801EC854(void* p);
int TLobby__sub_801EC874(void* p);
int forward_801F36D8__6TLobbyFPv(void* p);
int set_instance__10TOMineTrapFi(void*);
M2C_UNK TLobby__sub_8006F848(s32);
int clear_quest_state__6TLobbyFv(void*);
int reset_quest_counter__6TLobbyFv(void*);
int TLobby__sub_801F36BC(void*);
int TLobby__sub_801F36D8(void*);

int TLobby__sub_801EC7A0(void) { return set_instance__10TOMineTrapFi((void*)(0)); }
int TLobby__sub_801EC7C4(void) { return set_instance__10TOMineTrapFi((void*)(1)); }

s32 is_split_screen(void);
extern s32 TLobby__data_80512220[];

void dispatch_first_player__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220[0];
    if (is_split_screen() == 1) {
        TLobby__sub_8006F848(temp_r31);
        return;
    }
    TLobby__sub_8006F848(temp_r31);
}

int TLobby__sub_801EC834(void* p) { return clear_quest_state__6TLobbyFv(p); }
int TLobby__sub_801EC854(void* p) { return TLobby__sub_801F36BC(p); }
int TLobby__sub_801EC874(void* p) { return reset_quest_counter__6TLobbyFv(p); }
int forward_801F36D8__6TLobbyFPv(void* p) { return TLobby__sub_801F36D8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801ECFBC
#include "types.h"

extern "C" {

int TLobby__sub_801ECFBC(void* p);
int TNpcPlayer__sub_8014DC30(void*);

int TLobby__sub_801ECFBC(void* p) { return TNpcPlayer__sub_8014DC30(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801ED50C
#include "types.h"

extern "C" {

int TLobby__sub_801ED50C(void* p);
int TBoss1Dragon__sub_8002A378(void*);

int TLobby__sub_801ED50C(void* p) { return TBoss1Dragon__sub_8002A378(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801ED6CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_split_screen__6TLobbyFv(void);
M2C_UNK set_split_screen_flag__6TLobbyFi(s32);
M2C_UNK try_set_split_screen__6TLobbyFi(s32);

s32 is_split_screen(void);
extern s32 TLobby__data_80512220[];

void dispatch_split_screen__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220[0];
    if (is_split_screen() == 1) {
        try_set_split_screen__6TLobbyFi(temp_r31);
        return;
    }
    set_split_screen_flag__6TLobbyFi(temp_r31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801ED718
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_split_screen_camera__6TLobbyFv(void);
M2C_UNK TObjPlayer__sub_80071BC0(s32);
M2C_UNK TLobby__sub_80292730(s32);

s32 is_split_screen(void);
struct Glob_80512220 { s32 field0; char pad[0x100]; };
extern struct Glob_80512220 TLobby__data_80512220;

void update_split_screen_camera__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220.field0;
    if (is_split_screen() == 1) {
        TLobby__sub_80292730(temp_r31);
        return;
    }
    TObjPlayer__sub_80071BC0(temp_r31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801ED8B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_player_count__6TLobbyFv(void);
u32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);
M2C_UNK set_selected_layout__6TLobbyFi(u32);
M2C_UNK clamp_and_store_layout_index__6TLobbyFi(u32);

s32 is_split_screen();
extern u32 TLobby__data_80512220[];

void apply_player_count__6TLobbyFv(void) {
    u32 temp_r30;
    u32 temp_r31;

    temp_r30 = TLobby__data_80512220[0];
    temp_r31 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if (is_split_screen() == 1) {
        if (temp_r30 < temp_r31) {
            clamp_and_store_layout_index__6TLobbyFi(temp_r30);
            return;
        }
        clamp_and_store_layout_index__6TLobbyFi(0U);
        return;
    }
    if (temp_r30 < temp_r31) {
        set_selected_layout__6TLobbyFi(temp_r30);
        return;
    }
    set_selected_layout__6TLobbyFi(0U);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EDDDC
#include "types.h"

extern "C" {

int TLobby__sub_801EDDDC(void);
int TLobby__sub_801EDE00(void);
int set_mode__13TRaderMapCoreFi(void*);

int TLobby__sub_801EDDDC(void) { return set_mode__13TRaderMapCoreFi((void*)(0)); }
int TLobby__sub_801EDE00(void) { return set_mode__13TRaderMapCoreFi((void*)(1)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EDECC
#include "types.h"

extern "C" {

void store_status__6TLobbyFi(int a0);
int TLobby__sub_801B0974(void);

    extern int* TLobby__data_805D5E78;
void store_status__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_801B0974(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EDF30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_quest_bgm_ctrl__6TLobbyFv(void);
void* TQuestBgmCtrl__ct(void*, s32);
void* __nw__7TObjectFUl(u32);

extern s32 tl_05;

void create_quest_bgm_ctrl__6TLobbyFv(void) {
    void* obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        TQuestBgmCtrl__ct(obj, tl_05);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE008
#include "types.h"

extern "C" {

int forward_801F36E4__6TLobbyFPv(void* p);
int TLobby__sub_801EE028(void* p);
int set_cleanup_flag__6TLobbyFv(void*);
int TLobby__sub_801F36E4(void*);

int forward_801F36E4__6TLobbyFPv(void* p) { return TLobby__sub_801F36E4(p); }
int TLobby__sub_801EE028(void* p) { return set_cleanup_flag__6TLobbyFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE09C
#include "types.h"

extern "C" {

int TLobby__sub_801EE09C(void* p);
int TBoss1Dragon__sub_8002A3A0(void*);

int TLobby__sub_801EE09C(void* p) { return TBoss1Dragon__sub_8002A3A0(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE188
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_active_battle__6TLobbyFv(void);
void sync_battle_ctrl_4p__6TLobbyFv(void);
void reset_battle_camera__6TLobbyFv(void);
M2C_UNK TCameraCtrl__sub_8006A410(M2C_UNK, M2C_UNK);
M2C_UNK reset_battle_camera__11TCameraCtrlFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK player_flag_1__6TLobbyFPv();
M2C_UNK stop_battle__10TObjPlayerFPv();

extern s32 lbl_805D53A0;

void handle_active_battle__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        stop_battle__10TObjPlayerFPv();
    }
}

extern s32 lbl_805D53A0;

void sync_battle_ctrl_4p__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        player_flag_1__6TLobbyFPv();
    }
}

extern s32 lbl_805D53A0;

void reset_battle_camera__6TLobbyFv(void) {
    u32 temp_r3;
    reset_battle_camera__11TCameraCtrlFPv();
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0U) {
        TCameraCtrl__sub_8006A410(temp_r3, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE40C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_local_player__6TLobbyFv(void);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TObjPlayer__sub_801B3FD8();
M2C_UNK forward_1BF500_at_63c__10TObjPlayerFPv(s32);

extern s32 lbl_805D53A0;

void update_local_player__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B3FD8();
        forward_1BF500_at_63c__10TObjPlayerFPv(temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE44C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void attach_battle_ctrl__6TLobbyFv(void);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK attach_battle_ctrl_sub__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_801B4044();

extern s32 lbl_805D53A0;

void attach_battle_ctrl__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B4044();
        attach_battle_ctrl_sub__10TObjPlayerFPv(temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE48C
#include "types.h"

extern "C" {

void TLobby__sub_801EE48C(void);
int TObjPlayer__sub_8024ABDC(void*);

    extern int lbl_805D53A0;
void TLobby__sub_801EE48C(void) { TObjPlayer__sub_8024ABDC((void*)(lbl_805D53A0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE4B0
#include "types.h"

extern "C" {

void process_static_805D53A0__6TLobbyFv(void);
int TLobby__sub_8024AC20(void*);

    extern int lbl_805D53A0;
void process_static_805D53A0__6TLobbyFv(void) { TLobby__sub_8024AC20((void*)(lbl_805D53A0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE4D4
#include "types.h"

extern "C" {

void TLobby__sub_801EE4D4(void);
int TLobby__sub_801EE4D8(void);
int THunterGuildSeqOffline__sub_801F3718(void*);

void TLobby__sub_801EE4D4(void) {  }
int TLobby__sub_801EE4D8(void) { return THunterGuildSeqOffline__sub_801F3718((void*)(-1)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE4FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_guild_offline__6TLobbyFUs(u16 arg0);
int THunterGuildSeqOffline__sub_801F3718(void*);
void TLobby__sub_801EE4D4(void);
int TLobby__sub_801EE4D8(void);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void notify_guild_offline__6TLobbyFUs(u16 arg0) {
    THunterGuildSeqOffline__sub_801F3718((void *) (arg0));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE63C
#include "types.h"

extern "C" {

void set_table_entry__6TLobbyFi(int a0);
int TLobby__sub_803DF1CC(void);

    extern int* TLobby__data_805D5E78;
void set_table_entry__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_803DF1CC(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EE6A0
#include "types.h"

extern "C" {

int TLobby__sub_801EE6A0(void* p);
int create_alt_timer__6TLobbyFPv(void* p);
void open_door__6TLobbyFv(void);
void update_doors__6TLobbyFv(void);
int reset_instance__8TObjDoorFv(void);
int TObjDoor__sub_801F3754(void);
int TWindowCtrl__sub_8024A4EC(void*);
int create_alt_timer__11TWindowCtrlFv(void*);
int reset_door_state__6TLobbyFv(void);
int TObjDoor__sub_801F3760(void);

int TLobby__sub_801EE6A0(void* p) { return TWindowCtrl__sub_8024A4EC(p); }
int create_alt_timer__6TLobbyFPv(void* p) { return create_alt_timer__11TWindowCtrlFv(p); }
void open_door__6TLobbyFv(void) { reset_door_state__6TLobbyFv(); reset_instance__8TObjDoorFv(); }
void update_doors__6TLobbyFv(void) { TObjDoor__sub_801F3760(); TObjDoor__sub_801F3754(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EEF70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_battle_ctrl_player__6TLobbyFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TObjPlayer__sub_80011160(s32, s32);

extern s32 TLobby__data_80512220[];
extern s32 lbl_805D53A0;

void notify_battle_ctrl_player__6TLobbyFv(void) {
    s32 temp_r31;
    u32 ret;

    temp_r31 = TLobby__data_80512220[0];
    ret = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (ret != 0U) {
        TObjPlayer__sub_80011160(ret, temp_r31);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EF24C
#include "types.h"

extern "C" {

int TLobby__sub_801EF24C(void* p);
int TObjCityMainWarp__sub_80186634(void*);

int TLobby__sub_801EF24C(void* p) { return TObjCityMainWarp__sub_80186634(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EF560
#include "types.h"

extern "C" {

int forward_npc_player__6TLobbyFPv(void* p);
void cleanup_luker_and_quest_flag__6TLobbyFv(void);
void clear_quest_vm__6TLobbyFv(void);
int fn_80197E64(void);
int TLobby__sub_80197F74(void);
int clear_quest_vm_flag__6TLobbyFv(void);
int free_luker_object__6TLobbyFv(void);
int TNpcPlayer__sub_8034E02C(void*);

int forward_npc_player__6TLobbyFPv(void* p) { return TNpcPlayer__sub_8034E02C(p); }
void cleanup_luker_and_quest_flag__6TLobbyFv(void) { free_luker_object__6TLobbyFv(); TLobby__sub_80197F74(); clear_quest_vm_flag__6TLobbyFv(); }
void clear_quest_vm__6TLobbyFv(void) { free_luker_object__6TLobbyFv(); fn_80197E64(); clear_quest_vm_flag__6TLobbyFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801EF748
#include "types.h"

extern "C" {

int TLobby__sub_801EF748(void* p);
int TLobby__sub_801EF768(void* p);
int TLobby__sub_801EF788(void* p);
int fn_8019608C(void*);
int notify_all_battle_players__10TObjPlayerFv(void*);
int update_4p_battle_ctrls__10TObjPlayerFv(void*);

int TLobby__sub_801EF748(void* p) { return notify_all_battle_players__10TObjPlayerFv(p); }
int TLobby__sub_801EF768(void* p) { return update_4p_battle_ctrls__10TObjPlayerFv(p); }
int TLobby__sub_801EF788(void* p) { return fn_8019608C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F1804
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_window__6TLobbyFv(void);
M2C_UNK TWindow__close(void*);

extern u32 TLobby__data_805D5E80;

void close_window__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D5E80 != 0U) {
        TWindow__close((void*)TLobby__data_805D5E80);
        TLobby__data_805D5E80 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F1CE0
#include "types.h"

extern "C" {

void set_slot__6TLobbyFi(int a0);
int TLobby__sub_801F2BCC(void);

    extern int* TLobby__data_805D5E78;
void set_slot__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_801F2BCC(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F2974
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ent_A { s32 a; M2C_UNK (*fn)(s32, s32); };

extern "C" {

void dispatch_command__6TLobbyFi(s32 arg0);
s32 read_packet_byte__6TLobbyFv(struct Ent_A *);

s32 read_be_u16();
extern struct Ent_A lbl_804C69D8[];

void dispatch_command__6TLobbyFi(s32 arg0) {
    M2C_UNK (*temp_r31)(s32, s32);
    s32 temp_r30;
    struct Ent_A *e;

    e = (struct Ent_A *) (u8 *) lbl_804C69D8;
    e = (struct Ent_A *) ((u8 *) e + (arg0 * 8));
    temp_r31 = e->fn;
    temp_r30 = read_packet_byte__6TLobbyFv(e);
    temp_r31(temp_r30, read_be_u16());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F2BFC
#include "types.h"

extern "C" {

int get_indexed_offset__6TLobbyFi(int a0);

extern int TLobby__data_80512240[];
extern int TLobby__data_805D5E8C;
void push_op_arg__6TLobbyFi(int a0)
{
  int new_var;
  new_var = (TLobby__data_805D5E8C = (0, TLobby__data_805D5E8C));
  TLobby__data_805D5E8C = TLobby__data_805D5E8C + 0x1;
  TLobby__data_80512240[new_var] = a0;
}

    extern int* TLobby__data_805D5E74;
    extern int TLobby__data_805D5E70;
int get_indexed_offset__6TLobbyFi(int a0) {  return (TLobby__data_805D5E70 + TLobby__data_805D5E74[(unsigned short)(a0)]); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F2D2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

unsigned char read_packet_byte__6TLobbyFv(void);
s32 dispatch_quest__6TLobbyFi(s32 arg0);
void close_windows__6TLobbyFv(void);
M2C_UNK TLobby__sub_801F2EF4(s32);
M2C_UNK TLobby__sub_801F301C();
M2C_UNK TWindow__close(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);

    extern unsigned char* TLobby__data_805D5E70;
    extern int TLobby__data_805D5E90;
unsigned char read_packet_byte__6TLobbyFv(void) { return TLobby__data_805D5E70[TLobby__data_805D5E90++]; }

s32 dispatch_quest_opcode();

s32 dispatch_quest__6TLobbyFi(s32 arg0) {
    s32 temp_r31;

    TLobby__sub_801F301C();
    temp_r31 = dispatch_quest_opcode();
    TLobby__sub_801F2EF4(arg0);
    return temp_r31;
}

extern u32 TLobby__data_805D5E7C;
extern u32 TLobby__data_805D5E80;
extern u32 TLobby__data_805D5E84;
extern u32 TLobby__data_805D5EB0;
extern u32 TLobby__data_805D5EB4;
extern u32 TLobby__data_805D5EB8;
extern u32 TLobby__data_805D5EBC;
extern u32 TLobby__data_805D5EC0;

void close_windows__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D5E7C != 0U) {
        TWindow__close(TLobby__data_805D5E7C);
        TLobby__data_805D5E7C = 0U;
    }
    if ((u32) TLobby__data_805D5E80 != 0U) {
        TWindow__close(TLobby__data_805D5E80);
        TLobby__data_805D5E80 = 0U;
    }
    if ((u32) TLobby__data_805D5E84 != 0U) {
        TWindow__close(TLobby__data_805D5E84);
        TLobby__data_805D5E84 = 0U;
    }
    if ((u32) TLobby__data_805D5EB0 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB0);
        TLobby__data_805D5EB0 = 0U;
    }
    if ((u32) TLobby__data_805D5EB4 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB4);
        TLobby__data_805D5EB4 = 0U;
    }
    if ((u32) TLobby__data_805D5EB8 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB8);
        TLobby__data_805D5EB8 = 0U;
    }
    if ((u32) TLobby__data_805D5EBC != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EBC);
        TLobby__data_805D5EBC = 0U;
    }
    if ((u32) TLobby__data_805D5EC0 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EC0);
        TLobby__data_805D5EC0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3274
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_quest_vm_flag__6TLobbyFv(void);
void free_luker_object__6TLobbyFv(void);
M2C_UNK clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void*);
M2C_UNK set_flag_4__9TObjLukerFPv(void*);

extern u32 lbl_805D5EE8;

void clear_quest_vm_flag__6TLobbyFv(void) {
    if ((u32) lbl_805D5EE8 != 0U) {
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv((void*)lbl_805D5EE8);
    }
}

extern u32 lbl_805D5EE8;

void free_luker_object__6TLobbyFv(void) {
    if ((u32) lbl_805D5EE8 != 0U) {
        set_flag_4__9TObjLukerFPv((void*)lbl_805D5EE8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F32CC
#include "types.h"

extern "C" {

void set_flag_40000__6TLobbyFPv(void *arg0);
int check_flag_24576__6TLobbyFPv(void* p);
int TLobby__sub_801F3384(void* p);
int TLobby__sub_801F33A8(void* p);
int TLobby__sub_801F33CC(void* p);
int TLobby__sub_801F33F0(void* p);
int test_flag_16__6TLobbyFPv(void* p);
int set_flag_4__6TLobbyFPv(void* p);
int TLobby__sub_801F345C(void* p);
int fn_801F3480(void* p);
int fn_801F34A0(void* p);
s32 get_field_d4(void* p);
s32 fn_get_field_3ac(void* p);
void set_floor__6TLobbyFPvs(void* p, s16 v);
int TLobby__sub_800822E8(void*, int);
int has_item_flag_4096__10TObjPlayerFPv(void*);
int check_technique_flag__10TObjPlayerFPv(void*);

void set_flag_80000__6TLobbyFi(s32 arg0) {
    TLobby__sub_800822E8((void*)(arg0), 0x80000);
}
void set_flag_40000__6TLobbyFPv(void *arg0) {
    TLobby__sub_800822E8(arg0, 0x40000);
}
void TLobby__sub_801F3314(s32 arg0) {
    TLobby__sub_800822E8((void*)(arg0), 0x10000);
}
void set_flag_8000__6TLobbyFi(s32 arg0) {
    TLobby__sub_800822E8((void*)(arg0), 0x8000);
}
int check_flag_24576__6TLobbyFPv(void* p) { return TLobby__sub_800822E8(p, 24576); }
int TLobby__sub_801F3384(void* p) { return TLobby__sub_800822E8(p, 1024); }
int TLobby__sub_801F33A8(void* p) { return TLobby__sub_800822E8(p, 512); }
int TLobby__sub_801F33CC(void* p) { return TLobby__sub_800822E8(p, 256); }
int TLobby__sub_801F33F0(void* p) { return TLobby__sub_800822E8(p, 224); }
int test_flag_16__6TLobbyFPv(void* p) { return TLobby__sub_800822E8(p, 16); }
int set_flag_4__6TLobbyFPv(void* p) { return TLobby__sub_800822E8(p, 4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F345C
#include "types.h"

extern "C" {

void set_flag_40000__6TLobbyFPv(void *arg0);
int check_flag_24576__6TLobbyFPv(void* p);
int TLobby__sub_801F3384(void* p);
int TLobby__sub_801F33A8(void* p);
int TLobby__sub_801F33CC(void* p);
int TLobby__sub_801F33F0(void* p);
int test_flag_16__6TLobbyFPv(void* p);
int set_flag_4__6TLobbyFPv(void* p);
int TLobby__sub_801F345C(void* p);
int fn_801F3480(void* p);
int fn_801F34A0(void* p);
s32 get_field_d4(void* p);
s32 fn_get_field_3ac(void* p);
void set_floor__6TLobbyFPvs(void* p, s16 v);
int TLobby__sub_800822E8(void*, int);
int has_item_flag_4096__10TObjPlayerFPv(void*);
int check_technique_flag__10TObjPlayerFPv(void*);

int TLobby__sub_801F345C(void* p) { return TLobby__sub_800822E8(p, 2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F34E0
#include "types.h"

extern "C" {

void set_flag_40000__6TLobbyFPv(void *arg0);
int check_flag_24576__6TLobbyFPv(void* p);
int TLobby__sub_801F3384(void* p);
int TLobby__sub_801F33A8(void* p);
int TLobby__sub_801F33CC(void* p);
int TLobby__sub_801F33F0(void* p);
int test_flag_16__6TLobbyFPv(void* p);
int set_flag_4__6TLobbyFPv(void* p);
int TLobby__sub_801F345C(void* p);
int fn_801F3480(void* p);
int fn_801F34A0(void* p);
s32 get_field_d4(void* p);
s32 fn_get_field_3ac(void* p);
void set_floor__6TLobbyFPvs(void* p, s16 v);
int TLobby__sub_800822E8(void*, int);
int has_item_flag_4096__10TObjPlayerFPv(void*);
int check_technique_flag__10TObjPlayerFPv(void*);

void set_floor__6TLobbyFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x11a) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F34E8
#include "types.h"

extern "C" {

void TLobby__sub_801F34E8(int a0, int a1);

    extern unsigned char lbl_805D6CD9;
    extern short lbl_805D6CDA;
void TLobby__sub_801F34E8(int a0, int a1) { lbl_805D6CD9 = a1; lbl_805D6CDA = (a0 + 0x1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F34F8
#include "types.h"

extern "C" {

int TLobby__sub_801F34F8(void);

    extern int TLobby__data_805D6CCC;
int TLobby__sub_801F34F8(void) {  return TLobby__data_805D6CCC; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3620
#include "types.h"

extern "C" {

int copy_position__6TLobbyFPv(void* p);
int TLobby__sub_801F3694(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int set_flags__10TObjPlayerFPvUi(void*, int);

int copy_position__6TLobbyFPv(void* p) { return VecCopy__FP3VecPC3Vec(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3694
#include "types.h"

extern "C" {

int copy_position__6TLobbyFPv(void* p);
int TLobby__sub_801F3694(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int set_flags__10TObjPlayerFPvUi(void*, int);

int TLobby__sub_801F3694(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x10, 2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F36BC
#include "types.h"

extern "C" {

void TLobby__sub_801F36BC(void);

    extern int lbl_805D5FDC;
void TLobby__sub_801F36BC(void) { lbl_805D5FDC = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F36C8
#include "types.h"

extern "C" {

void set_lobby_id__6TLobbyFi(int a0);
void set_global_805D3614__6TLobbyFi(int a0);
void TLobby__sub_801F36D8(void);
void TLobby__sub_801F36E4(void);
int TLobby__sub_801F36F0(void);
int TLobby__sub_801F36F8(void);
int TLobby__sub_801F3700(void);
int TLobby__sub_801F3708(void);

    extern int lbl_805D5FD8;
void set_lobby_id__6TLobbyFi(int a0) { lbl_805D5FD8 = a0; }

    extern int lbl_805D3614;
void set_global_805D3614__6TLobbyFi(int a0) { lbl_805D3614 = a0; }

    extern int lbl_805D5C80;
void TLobby__sub_801F36D8(void) { lbl_805D5C80 = 1; }

    extern int lbl_805D3458;
void TLobby__sub_801F36E4(void) { lbl_805D3458 = 0; }

int TLobby__sub_801F36F0(void) { return -1; }
int TLobby__sub_801F36F8(void) { return 0; }
int TLobby__sub_801F3700(void) { return -1; }
int TLobby__sub_801F3708(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3774
#include "types.h"

extern "C" {

void TLobby__sub_801F3774(void);

void TLobby__sub_801F3774(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3A24
#include "types.h"

extern "C" {

void build_6x75_update_quest_flag_dc(void* p);
s32 TLobby__send_and_handle_60(s32);
s32 bswap_16__FPUs(s32);
s32 read_be16_field2__10TObjPlayerFPv();
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 alloc__22TQuestVmDownLoadServerFPv();
s32 update_lobby_scene__6TSceneFPv();
s32 TLobby__sub_800F9DF4(s32, s32);
s32 rebuild_all__6TLobbyFi(s32);

void refresh_quest_list__6TLobbyFi(s32 arg0) {
    s32 temp_r3;

    if (update_lobby_scene__6TSceneFPv() >= 0) {
        temp_r3 = alloc__22TQuestVmDownLoadServerFPv();
        if (temp_r3 != 0) {
            TLobby__sub_800F9DF4(arg0, temp_r3);
            rebuild_all__6TLobbyFi(temp_r3);
            safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3C24
#include "types.h"

extern "C" {

void rebuild_all__6TLobbyFi(int a0);
int TLobby__sub_801F3B30(void);
int TLobby__sub_801F3BC4(void);
int TLobby__sub_801F4340(void);
int free_boss4rock__6TLobbyFv(void);
int TLobby__sub_8020A2AC(void);
int rebuild_entry__6TLobbyFPv(void);
int init_sub_state__6TLobbyFPv(void);

    extern int TLobby__data_805D5EE0;
    extern short TLobby__data_805D6134;
void rebuild_all__6TLobbyFi(int a0) { TLobby__data_805D5EE0 = a0; TLobby__sub_801F3BC4(); init_sub_state__6TLobbyFPv(); TLobby__sub_8020A2AC(); TLobby__sub_801F3B30(); free_boss4rock__6TLobbyFv(); rebuild_entry__6TLobbyFPv(); TLobby__sub_801F4340(); TLobby__data_805D6134 = 1; TLobby__data_805D5EE0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3FFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_msg_type2__6TLobbyFi(s32 arg0);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK TLobby__sub_801F3A80(void *, s32);
s32 get_player_floor__6TLobbyFi(s32);
M2C_UNK TLobby__sub_8020A9C4(void *, u32, s32);
M2C_UNK TLobby__sub_8020B374(s32, void *, s32);

extern u8 *TLobby__data_805D5EE0;

s32 handle_msg_type2__6TLobbyFi(s32 arg0) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 *temp_r31;
    u8 *var_r31;

    if ((var_r31 = TLobby__data_805D5EE0) != NULL) {
loop_1:
        sp14 = M2C_FIELD(var_r31, s32 *, 0);
        sp10 = M2C_FIELD(var_r31, s32 *, 4);
        spC = M2C_FIELD(var_r31, s32 *, 8);
        sp8 = M2C_FIELD(var_r31, s32 *, 0xC);
        bswap_32__FPUl(&sp14);
        bswap_32__FPUl(&sp10);
        bswap_32__FPUl(&spC);
        bswap_32__FPUl(&sp8);
        if ((sp14 == 2) && (spC == arg0)) {
            temp_r31 = var_r31 + 0x10;
            TLobby__sub_801F3A80(temp_r31, sp8);
            TLobby__sub_8020A9C4(temp_r31, (u32) sp8 / 72U, get_player_floor__6TLobbyFi(spC));
            TLobby__sub_8020B374(spC, temp_r31, sp8);
            return 1;
        }
        if (sp14 != 0) {
            var_r31 += sp10;
            goto loop_1;
        }
        goto block_6;
    }
block_6:
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F40E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_msg_type1__6TLobbyFi(s32 arg0);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK TLobby__sub_801F3AD8(void *, s32);
s32 get_player_floor__6TLobbyFi(s32);
M2C_UNK TLobby__sub_8020AA94(void *, u32, s32);
M2C_UNK TLobby__sub_8020B3E4(s32, void *, s32);

extern u8 *TLobby__data_805D5EE0;

s32 handle_msg_type1__6TLobbyFi(s32 arg0) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 *temp_r31;
    u8 *var_r31;

    if ((var_r31 = TLobby__data_805D5EE0) != NULL) {
loop_1:
        sp14 = M2C_FIELD(var_r31, s32 *, 0);
        sp10 = M2C_FIELD(var_r31, s32 *, 4);
        spC = M2C_FIELD(var_r31, s32 *, 8);
        sp8 = M2C_FIELD(var_r31, s32 *, 0xC);
        bswap_32__FPUl(&sp14);
        bswap_32__FPUl(&sp10);
        bswap_32__FPUl(&spC);
        bswap_32__FPUl(&sp8);
        if ((sp14 == 1) && (spC == arg0)) {
            temp_r31 = var_r31 + 0x10;
            TLobby__sub_801F3AD8(temp_r31, sp8);
            TLobby__sub_8020AA94(temp_r31, (u32) sp8 / 68U, get_player_floor__6TLobbyFi(spC));
            TLobby__sub_8020B3E4(spC, temp_r31, sp8);
            return 1;
        }
        if (sp14 != 0) {
            var_r31 += sp10;
            goto loop_1;
        }
        goto block_6;
    }
block_6:
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F41D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_quest_list__6TLobbyFv(void);
M2C_UNK rebuild_all__6TLobbyFi();
M2C_UNK update_and_reset__6TLobbyFi();
M2C_UNK open_session__6TLobbyFi();
M2C_UNK TLobby__sub_801A2514(u16);
M2C_UNK TLobby__sub_801A2528(u16);
M2C_UNK refresh_quest_list__6TLobbyFi();
M2C_UNK get_data__12TQuestListVMFv();
M2C_UNK get_quest_list_flag__16TQuestListOnlineFv();
M2C_UNK fn_801F43A8();
M2C_UNK TLobby__sub_8020B2DC();
M2C_UNK TLobby__sub_8020B308(s32);

extern s32 evt2_random_enemies_mode;
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60E8;
extern s32 TLobby__data_805D60EC;
extern s32 TLobby__data_805D6148;
extern s32 TLobby__data_805D614C;

void setup_quest_list__6TLobbyFv(void) {
    TLobby__data_805D60E0 = 0;
    TLobby__data_805D60E4 = 0;
    TLobby__data_805D60E8 = 0;
    TLobby__data_805D60EC = 0;
    switch ((s32) evt2_random_enemies_mode) {
    case 1:
        fn_801F43A8();
        open_session__6TLobbyFi();
        break;
    case 2:
        get_quest_list_flag__16TQuestListOnlineFv();
        update_and_reset__6TLobbyFi();
        break;
    case 3:
        get_data__12TQuestListVMFv();
        update_and_reset__6TLobbyFi();
        break;
    case 4:
        get_quest_list_flag__16TQuestListOnlineFv();
        rebuild_all__6TLobbyFi();
        break;
    case 5:
        fn_801F43A8();
        refresh_quest_list__6TLobbyFi();
        break;
    }
    TLobby__sub_801A2528((u16) TLobby__data_805D60E8);
    TLobby__sub_801A2514((u16) TLobby__data_805D60EC);
    TLobby__data_805D6148 = TLobby__data_805D60E0;
    TLobby__data_805D614C = TLobby__data_805D60E4;
    TLobby__sub_8020B308(TLobby__data_805D60E0);
    TLobby__sub_8020B2DC();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F429C
#include "types.h"

extern "C" {

void update_and_reset__6TLobbyFi(int a0);
int TLobby__sub_801F3E1C(void);
int TLobby__sub_801F4340(void);

    extern int TLobby__data_805D5EE0;
    extern short TLobby__data_805D6134;
void update_and_reset__6TLobbyFi(int a0) { TLobby__data_805D5EE0 = a0; TLobby__sub_801F3E1C(); TLobby__sub_801F4340(); TLobby__data_805D6134 = 1; TLobby__data_805D5EE0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F42D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_session__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_801F3E1C();
M2C_UNK TLobby__sub_801F4340();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 alloc__22TQuestVmDownLoadServerFPv();
s32 update_lobby_scene__6TSceneFPv();
M2C_UNK TLobby__sub_800F9DF4(s32, s32);

extern s32 TLobby__data_805D5EE0;
extern s16 TLobby__data_805D6134;

void open_session__6TLobbyFi(s32 arg0) {
    s32 t;

    if (update_lobby_scene__6TSceneFPv() >= 0) {
        t = (TLobby__data_805D5EE0 = alloc__22TQuestVmDownLoadServerFPv());
        if (t != 0) {
            TLobby__sub_800F9DF4(arg0, t);
            TLobby__sub_801F3E1C();
            TLobby__sub_801F4340();
            TLobby__data_805D6134 = 1;
            safe_free__23TAdSinglePlyChrSelectGCFUi(TLobby__data_805D5EE0);
            TLobby__data_805D5EE0 = 0;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F487C
#include "types.h"

extern "C" {

void reset_camera_if_fullscreen__6TLobbyFPv(void* p);
int TCameraCtrl__sub_80068958(void*);
int TLobby__sub_801F494C(void);
int is_not_split_screen__13TRaderMapCoreFv(void*);

void reset_camera_if_fullscreen__6TLobbyFPv(void* p) { if (is_not_split_screen__13TRaderMapCoreFv(p) == 1) { TCameraCtrl__sub_80068958((void*)0); TLobby__sub_801F494C(); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802075F4
#include "types.h"

extern "C" {

void TLobby__sub_802075F4(void);

void TLobby__sub_802075F4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80207718
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_player_floor__6TLobbyFi(s32 idx);
s32 TLobby__sub_802077CC(s32, struct Buf12_80207718 *);

struct Buf12_80207718 { s32 a, b, c; };

s32 get_player_floor__6TLobbyFi(s32 idx) {
    struct Buf12_80207718 buf;

    if (TLobby__sub_802077CC(idx, &buf) == 1) {
        return buf.a;
    }
    return -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80207D10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_story_select_state__6TLobbyFv(void);
M2C_UNK set_state__16TAdStorySelectGCFi(void*);

extern s32 lbl_805D3628;

void reset_story_select_state__6TLobbyFv(void) {
    if ((s32) lbl_805D3628 != -1) {
        set_state__16TAdStorySelectGCFi((void*)lbl_805D3628);
        lbl_805D3628 = -1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80207DA8
#include "types.h"

extern "C" {

void reset_story_select__6TLobbyFv(void);
s32 is_scene_ready__6TLobbyFv(void);
int TLobby__sub_80207E24(void* p);
void TLobby__sub_80207E44(void);
int TLobby__sub_80207E48(void* p);
int lookup_scene_object__6TLobbyFPv(void* p);
int set_state__16TAdStorySelectGCFi(void*);
int TLobby__sub_802077CC(void*);
int TLobby__sub_8020780C(void*);
int TOBoss4Rock__sub_802078A4(void*);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_status__6TSceneFv();

    extern int lbl_805D3628;
void reset_story_select__6TLobbyFv(void) { set_state__16TAdStorySelectGCFi((void*)0); lbl_805D3628 = -1; }

s32 is_scene_ready__6TLobbyFv(void) {
    s32 temp_r3;

    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        return 0;
    }
    temp_r3 = get_status__6TSceneFv();
    if ((temp_r3 >= 0xD) && (temp_r3 < 0xF)) {
        return 1;
    }
    return 0;
}
int TLobby__sub_80207E24(void* p) { return TLobby__sub_8020780C(p); }
void TLobby__sub_80207E44(void) {  }
int TLobby__sub_80207E48(void* p) { return TOBoss4Rock__sub_802078A4(p); }
int lookup_scene_object__6TLobbyFPv(void* p) { return TLobby__sub_802077CC(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80207EF0
#include "types.h"

extern "C" {

int reset_story_select__6TLobbyFPv(void* p);
int TLobby__sub_80207F10(void* p);
int reset_story_select__6TLobbyFv(void*);

int reset_story_select__6TLobbyFPv(void* p) { return reset_story_select__6TLobbyFv(p); }
int TLobby__sub_80207F10(void* p) { return reset_story_select__6TLobbyFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80207FFC
#include "types.h"

extern "C" {

void update_current_floor__6TLobbyFv(void);
int TLobby__sub_80207F80(void);
int get_global_state__14TOKeyMachine01Fv(void);

void update_current_floor__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_80207F80(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020809C
#include "types.h"

extern "C" {

void update_key_machine__6TLobbyFv(void);
int get_global_state__14TOKeyMachine01Fv(void);
int TLobby__sub_80208020(void);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);

void update_key_machine__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_80208020(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80208280
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_drop_item_mode__6TLobbyFv(void);
s32 get_instance__6TLobbyFv();
s32 get_main_phase();
s32 is_split_screen();

extern s32 lbl_805D5550;

s32 get_drop_item_mode__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_main_phase();
    switch (temp_r3) {
    case 15:
        if ((get_instance__6TLobbyFv() == 0) && ((s32) lbl_805D5550 == 3)) {
            return 3;
        }
        return 2;
    case 14:
        if (is_split_screen() == 1) {
            if ((get_instance__6TLobbyFv() == 0) && ((s32) lbl_805D5550 == 3)) {
                return 3;
            }
            return 2;
        }
        if ((get_instance__6TLobbyFv() == 0) && ((s32) lbl_805D5550 == 3)) {
            return 1;
        }
        return 0;
    default:
        return 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80208340
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_drop_item__6TLobbyFv(void);
s32 *TItemDrop__sub_800F94BC(s32, u32);
s32 update_lobby_scene__6TSceneFPv(s32);
s32 get_drop_item_mode__6TLobbyFv();

extern s32 lbl_804C9390[];
extern s32 TLobby__data_805D6068;
extern s32 lbl_805D606C;
extern s32 *lbl_805D6070;
extern u32 lbl_805D6074;

void update_drop_item__6TLobbyFv(void) {
    s32 *temp_r3;
    s32 temp_r0;
    s32 temp_r30;

    lbl_805D606C = 0;
    lbl_805D6070 = NULL;
    if ((u32) lbl_805D6074 != 0U) {
        temp_r30 = get_drop_item_mode__6TLobbyFv();
        if (update_lobby_scene__6TSceneFPv(lbl_804C9390[temp_r30]) <= 0x24B8) {
            temp_r3 = TItemDrop__sub_800F94BC(lbl_804C9390[temp_r30], lbl_805D6074);
            lbl_805D6070 = temp_r3;
            if (temp_r3 != NULL) {
                temp_r0 = *temp_r3;
                lbl_805D606C = temp_r0;
                TLobby__data_805D6068 = temp_r0;
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802083C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802083C0(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern s32 TLobby__data_805D6068;
extern s32 lbl_805D606C;
extern s32 lbl_805D6070;
extern u32 lbl_805D6074;

void TLobby__sub_802083C0(void) {
    if ((u32) lbl_805D6074 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D6074);
        lbl_805D6074 = 0U;
        lbl_805D6070 = 0;
        lbl_805D606C = 0;
        TLobby__data_805D6068 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80208400
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_item_data__6TLobbyFv(void);
s32 *TItemDrop__sub_800F94BC(s32, u32);
u32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 update_lobby_scene__6TSceneFPv(s32);
s32 get_drop_item_mode__6TLobbyFv();

extern s32 lbl_804C9390[];
extern s32 TLobby__data_805D6068;
extern s32 lbl_805D606C;
extern s32 *lbl_805D6070;
extern u32 lbl_805D6074;

void load_item_data__6TLobbyFv(void) {
    s32 *temp_r3_2;
    s32 temp_r0;
    s32 temp_r30;
    u32 temp_r3;

    lbl_805D606C = 0;
    lbl_805D6070 = NULL;
    temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x24B8);
    lbl_805D6074 = temp_r3;
    if (temp_r3 != 0U) {
        temp_r30 = get_drop_item_mode__6TLobbyFv();
        if (update_lobby_scene__6TSceneFPv(lbl_804C9390[temp_r30]) <= 0x24B8) {
            temp_r3_2 = TItemDrop__sub_800F94BC(lbl_804C9390[temp_r30], lbl_805D6074);
            lbl_805D6070 = temp_r3_2;
            if (temp_r3_2 != NULL) {
                temp_r0 = *temp_r3_2;
                lbl_805D606C = temp_r0;
                TLobby__data_805D6068 = temp_r0;
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80208488
#include "types.h"

extern "C" {

void relink_objects__6TLobbyFv(void);
int link_matching_objects__6TLobbyFss(void);

    extern int lbl_805D6080;
void relink_objects__6TLobbyFv(void) { link_matching_objects__6TLobbyFss(); lbl_805D6080 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802085FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int link_matching_objects__6TLobbyFPv(void* p);
int spawn_objects_at_pos__6TLobbyFPv(void* p);
void TLobby__sub_8020863C(void);
void TLobby__sub_80208648(void);
void TLobby__sub_8020864C(s32 arg0);
int link_matching_objects__6TLobbyFss(void*);
int spawn_objects_at_pos__6TLobbyFss(void*);

int link_matching_objects__6TLobbyFPv(void* p) { return link_matching_objects__6TLobbyFss(p); }
int spawn_objects_at_pos__6TLobbyFPv(void* p) { return spawn_objects_at_pos__6TLobbyFss(p); }

    extern int lbl_805D6080;
void TLobby__sub_8020863C(void) { lbl_805D6080 = 1; }

void TLobby__sub_80208648(void) {  }

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_8020864C;

M2C_UNK read_be_u32(void *);
extern Ent_8020864C lbl_804C93A8[];

void TLobby__sub_8020864C(s32 arg0) {
    Ent_8020864C *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = lbl_804C93A8;
    temp_r3 += (u8)arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(read_be_u32(temp_r3));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802086EC
#include "types.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void dispatch_stream_command__6TLobbyFUc(u8 arg0);

M2C_UNK read_stream_u16(void *);
typedef struct Ent_ {
    s32 a;
    M2C_UNK (*fn)(M2C_UNK);
} Ent;
extern Ent lbl_804C93A8[];
void dispatch_stream_command__6TLobbyFUc(u8 arg0) {
    M2C_UNK (*temp_r31)(M2C_UNK);
    Ent *temp_r3;
    temp_r3 = lbl_804C93A8;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(read_stream_u16(temp_r3));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80208734
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void invoke_command__6TLobbyFi(s32 arg0);

extern u8 lbl_804C93A8[];

void invoke_command__6TLobbyFi(s32 arg0) {
    u8 *temp_r3 = lbl_804C93A8;
    temp_r3 += ((u8)arg0) * 8;

    M2C_FIELD(temp_r3, M2C_UNK (**)(void *), 4)(temp_r3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80208804
#include "types.h"

extern "C" {

unsigned char TLobby__sub_80208804(void);

    extern unsigned char* lbl_805D6078;
    extern int lbl_805D607C;
unsigned char TLobby__sub_80208804(void) { return lbl_805D6078[lbl_805D607C++]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80208884
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80208884(void* a0);
void set_destroy_event__6TLobbyFi(int a0);
void spawn_destroy_event__6TLobbyFPv(void *arg0);
void TLobby__sub_80208900(void);
s32 get_destroy_event_obj__6TLobbyFv();
M2C_UNK TNpcPlayer__sub_8034E5A8(s16);
M2C_UNK TSetEvtDestroy__ct(void *, s32, void *);
void *__nw__7TObjectFUl(M2C_UNK);

    extern int lbl_805D6078;
    extern int lbl_805D607C;
void TLobby__sub_80208884(void* a0) { lbl_805D6078 = *(int*)((char*)a0 + 0x0); lbl_805D607C = *(int*)((char*)a0 + 0x4); }

    extern int lbl_805D6090;
void set_destroy_event__6TLobbyFi(int a0) { lbl_805D6090 = a0; }

extern s32 tl_01;

void spawn_destroy_event__6TLobbyFPv(void *arg0) {
    void *obj;

    if (get_destroy_event_obj__6TLobbyFv() != -1) {
        TNpcPlayer__sub_8034E5A8(M2C_FIELD(arg0, s16 *, 8));
    }
    obj = __nw__7TObjectFUl(0x34);
    if (obj != NULL) {
        TSetEvtDestroy__ct(obj, tl_01, arg0);
    }
    set_destroy_event__6TLobbyFi(-1);
}

void TLobby__sub_80208900(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80208D98
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 add_player__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_80208904(s32);
M2C_UNK move_data__6TLobbyFv(s32, s32, s32);
s32 heap_alloc__5THeapFUl(s32, s32);

extern M2C_UNK lbl_805139F8[];
extern s32 lbl_805D6094;

s32 add_player__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 temp_r3;

    if (arg0 > 0x11) {
        return 0;
    }
    temp_r29 = arg0 * 4;
    if ((u32) *((s32 *)((s8 *)lbl_805139F8 + temp_r29)) != 0U) {
        return 0;
    }
    temp_r3 = heap_alloc__5THeapFUl(lbl_805D6094, arg2);
    if (temp_r3 != 0) {
        move_data__6TLobbyFv(temp_r3, arg1, arg2);
        *((s32 *)((s8 *)lbl_805139F8 + temp_r29)) = temp_r3;
        TLobby__sub_80208904(arg0);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80208FFC
#include "types.h"

extern "C" {

int get_team_state__6TLobbyFPv(void* p);
int TLobby__sub_80208E30(void*);

int get_team_state__6TLobbyFPv(void* p) { return TLobby__sub_80208E30(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80209090
#include "types.h"

extern "C" {

void free_heap__6TLobbyFv(void);
int __dt__5THeapFv(void*, void*);

    extern int lbl_805D6094;
void free_heap__6TLobbyFv(void) { __dt__5THeapFv((void*)(lbl_805D6094), (void*)1); lbl_805D6094 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80209104
#include "types.h"

extern "C" {

int get_destroy_event_obj__6TLobbyFv(void);

    extern int lbl_805D6090;
int get_destroy_event_obj__6TLobbyFv(void) {  return lbl_805D6090; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80209524
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *free_boss4rock__6TLobbyFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);

void *free_boss4rock__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 4));
        __dl__FPv(M2C_FIELD(arg0, void **, 0));
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020970C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void append_swapped_u32__6TLobbyFPv(s32 *arg0);
void append_entity_entry__6TLobbyFi(s32 arg0);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK move_data__6TLobbyFv(s32, s32 *, M2C_UNK);

extern u32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void append_swapped_u32__6TLobbyFPv(s32 *arg0) {
    s32 sp8;

    if ((u32) lbl_805D60C4 != 0U) {
        sp8 = *arg0;
        bswap_32__FPUl(&sp8);
        move_data__6TLobbyFv((s32)(lbl_805D60C4 + lbl_805D60C8), (s32 *)(&sp8), (M2C_UNK)(4));
        lbl_805D60C8 += 4;
    }
}

extern u32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void append_entity_entry__6TLobbyFi(s32 arg0) {
    if ((u32) lbl_805D60C4 != 0U) {
        move_data__6TLobbyFv((s32)(lbl_805D60C4 + lbl_805D60C8), (s32 *)(arg0), (M2C_UNK)(1));
        lbl_805D60C8 += 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80209BD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 pick_random_slot__6TLobbyFPv(s16 *arg0);
M2C_UNK TLobby__sub_802098AC(s16 *);
M2C_UNK TLobby__sub_802099FC(s16 *, s32);
M2C_UNK TLobby__sub_80209AEC(s32 *, s32 *);

extern s32 lbl_8044BAF8[];

s32 pick_random_slot__6TLobbyFPv(s16 *arg0) {
    s32 spC;
    s32 sp8;

    TLobby__sub_80209AEC(&spC, &sp8);
    if ((spC != -1) && (sp8 != -1)) {
        *arg0 = (s16) lbl_8044BAF8[sp8];
        TLobby__sub_802099FC(arg0, spC);
        TLobby__sub_802098AC(arg0);
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80209CF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 clamp_min_drop__6TLobbyFUi(u32 arg0);
u32 TItemDrop__sub_80107B0C(s32);

extern s32 lbl_805D60A0;

u32 clamp_min_drop__6TLobbyFUi(u32 arg0) {
    u32 var_r3;

    var_r3 = TItemDrop__sub_80107B0C(lbl_805D60A0);
    if (var_r3 < arg0) {
        var_r3 = arg0;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020A188
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_buffers__6TLobbyFii(s32 arg0, s32 arg1);
void free_boss4rock__6TLobbyFv(void);
int free_boss4rock__6TLobbyFPvs(void*, void*);
u32 TLobby__sub_802095EC(s32, s32);
u32 TLobby__sub_8020967C(s32, s32);
u32 TLobby__sub_80209C58(s32, s32);
M2C_UNK TLobby__sub_80209D34(s32);
int __dl__FPv(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);

extern u32 lbl_805D60A8;
extern u32 lbl_805D60AC;
extern u32 lbl_805D60B0;
extern s32 lbl_805D60B4;
extern s32 lbl_805D60BC;
extern s32 lbl_805D60C0;
extern s32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void init_buffers__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 temp_r3;

    lbl_805D60A8 = TLobby__sub_80209C58(arg1, arg0);
    lbl_805D60AC = TLobby__sub_8020967C(arg1, arg0);
    temp_r3 = TLobby__sub_802095EC(arg1, arg0);
    lbl_805D60B0 = temp_r3;
    if (((u32) lbl_805D60A8 != 0U) && ((u32) lbl_805D60AC != 0U) && (temp_r3 != 0U)) {
        lbl_805D60B4 = alloc__22TQuestVmDownLoadServerFPv(0x9000);
        lbl_805D60BC = alloc__22TQuestVmDownLoadServerFPv(0x1400);
        lbl_805D60C0 = 0;
        lbl_805D60C4 = alloc__22TQuestVmDownLoadServerFPv(0x1000);
        lbl_805D60C8 = 0;
        TLobby__sub_80209D34(arg0);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D60C4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D60BC);
        lbl_805D60BC = 0;
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D60B4);
        lbl_805D60B4 = 0;
    }
}

    extern int lbl_805D60A0;
    extern int lbl_805D60A4;
void free_boss4rock__6TLobbyFv(void) { free_boss4rock__6TLobbyFPvs((void*)(lbl_805D60A4), (void*)1); lbl_805D60A4 = 0; __dl__FPv((void*)(lbl_805D60A0)); lbl_805D60A0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020A350
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap_quad_word__6TLobbyFPv(void* p);
void TLobby__sub_8020A394(void* p);
void TLobby__sub_8020A3D0(void *arg0, void *arg1);
void bswap_vec3__6TLobbyFPv(void* p);
void swap_header_endian__6TLobbyFPv(void* p);
void TLobby__sub_8020A48C(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void bswap_quad_word__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void TLobby__sub_8020A394(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); }

void TLobby__sub_8020A3D0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

void bswap_vec3__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void swap_header_endian__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); }

void TLobby__sub_8020A48C(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x16); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); bswap_16__FPUs((char*)p + 0x1c); bswap_16__FPUs((char*)p + 0x1e); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020A568
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020A568(void* p);
void bswap__6TLobbyFPv(void* p);
void TLobby__sub_8020A618(void *arg0, void *arg1);
void swap_endian_header__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TLobby__sub_8020A568(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void bswap__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap_16__FPUs((char*)p + 0x12); bswap_32__FPUl((char*)p + 0x14); }

void TLobby__sub_8020A618(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) M2C_FIELD(arg1, s16 *, 0xE);
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) M2C_FIELD(arg1, s16 *, 0x12);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
}

void swap_endian_header__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020A744
#include "types.h"

extern "C" {

void init_sub_objects__6TLobbyFv(void);
int rebuild_entry__6TLobbyFPv(void);
int init_sub_state__6TLobbyFPv(void);

void init_sub_objects__6TLobbyFv(void) { init_sub_state__6TLobbyFPv(); rebuild_entry__6TLobbyFPv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020AB30
#include "types.h"

extern "C" {

int rebuild_entry__6TLobbyFPv(void* p);
int TLobby__sub_8020C458(void*);

int rebuild_entry__6TLobbyFPv(void* p) { return TLobby__sub_8020C458(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020AD20
#include "types.h"

extern "C" {

int init_sub_state__6TLobbyFPv(void* p);
int TLobby__sub_8020C500(void*);

int init_sub_state__6TLobbyFPv(void* p) { return TLobby__sub_8020C500(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020B03C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_data_60F0__6TLobbyFv(void);
s32 init_handle__6TLobbyFi(s32 arg0);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
u32 alloc__22TQuestVmDownLoadServerFPv();

extern u32 TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;

void free_data_60F0__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D60F0 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D60F0);
        TLobby__data_805D60F0 = 0U;
        TLobby__data_805D60F4 = 0;
    }
}

extern u32 TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;

s32 init_handle__6TLobbyFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = alloc__22TQuestVmDownLoadServerFPv();
    TLobby__data_805D60F0 = temp_r3;
    if (temp_r3 != 0U) {
        TLobby__data_805D60F4 = arg0;
        return 1;
    }
    TLobby__data_805D60F0 = 0U;
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020B334
#include "types.h"

extern "C" {

int resolve_matching_object__6TLobbyFPv(void* p);
int get_object_count__6TLobbyFPv(void* p);
int get_matching_object__6TLobbyFv(void*);
int get_object_count__6TLobbyFv(void*);

int resolve_matching_object__6TLobbyFPv(void* p) { return get_matching_object__6TLobbyFv(p); }
int get_object_count__6TLobbyFPv(void* p) { return get_object_count__6TLobbyFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020B588
#include "types.h"

extern "C" {

void bswap_4_words__6TLobbyFPv(void* p);
int bswap_32__FPUl(void*);

void bswap_4_words__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020BC08
#include "types.h"

extern "C" {

void init_scene_objects__6TLobbyFv(void);
int TObjPlayer__sub_800196EC(void);
int TQuestThread__sub_801F5B5C(void);
int TRaderMapCore__sub_801F9630(int);
int TLobby__sub_802089B0(void);
int init_sub_objects__6TLobbyFv(void);
int create_objects__6TLobbyFi(void);
int attach_objects_by_id__6TLobbyFi(void);
int TLobby__sub_8020DBCC(void);
int TSwitch__sub_8022945C(void);

void init_scene_objects__6TLobbyFv(void) { init_sub_objects__6TLobbyFv(); TLobby__sub_8020DBCC(); TLobby__sub_802089B0(); TSwitch__sub_8022945C(); TRaderMapCore__sub_801F9630(1); TObjPlayer__sub_800196EC(); attach_objects_by_id__6TLobbyFi(); TObjPlayer__sub_800196EC(); create_objects__6TLobbyFi(); TQuestThread__sub_801F5B5C(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020C608
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(s32);
};

extern "C" {

s32 spawn_matching_objects__6TLobbyFssi(s16 arg0, s16 arg1, s32 arg2);
u8 *TLobby__sub_8020CCF4(void *);
u8 *resolve_matching_object__6TLobbyFPv(s32);
s32 get_object_type__6TLobbyFi(s32);
M2C_UNK TLobby__sub_8020E484(s32, void *);

extern s32 TLobby__data_805D60FC;
extern s32 TLobby__data_805D6144;

s32 spawn_matching_objects__6TLobbyFssi(s16 arg0, s16 arg1, s32 arg2) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r29;
    s32 var_r28;
    u8 *temp_r3_2;

    var_r30 = 0;
    if ((s32) TLobby__data_805D60FC < 0) {
        return 0;
    }
    var_r29 = resolve_matching_object__6TLobbyFPv(TLobby__data_805D60FC);
    temp_r31 = get_object_type__6TLobbyFi(TLobby__data_805D60FC);
    for (var_r28 = 0; var_r28 < temp_r31; var_r28 += 1, var_r29 += 0x48) {
        temp_r3 = M2C_FIELD(var_r29, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && ((s16) M2C_FIELD(var_r29, s16 *, 0xC) == arg0) && ((s16) M2C_FIELD(var_r29, s16 *, 0xE) == arg1)) {
            temp_r3_2 = TLobby__sub_8020CCF4(var_r29);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(var_r29, void **, 0x44) = temp_r3_2;
                M2C_FIELD(var_r29, s16 *, 2) = (s16) (M2C_FIELD(var_r29, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(var_r29, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(var_r29, s16 *, 0xE);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(var_r29, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = var_r29;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *)temp_r3_2)->m77(TLobby__data_805D6144 + (temp_r0 * 0xC));
                }
                TLobby__sub_8020E484(arg2, temp_r3_2);
                var_r30 += 1;
            } else {
                M2C_FIELD(var_r29, void **, 0x44) = NULL;
            }
        }
    }
    return var_r30;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020C8A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(s32);
};

extern "C" {

s32 link_matching_objects__6TLobbyFss(s16 arg0, s16 arg1);
u8 *TLobby__sub_8020CCF4(void *);
u8 *resolve_matching_object__6TLobbyFPv(s32);
s32 get_object_type__6TLobbyFi(s32);

extern s32 TLobby__data_805D60FC;
extern s32 TLobby__data_805D6144;

s32 link_matching_objects__6TLobbyFss(s16 arg0, s16 arg1) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r29;
    s32 var_r28;
    u8 *temp_r3_2;

    var_r30 = 0;
    if ((s32) TLobby__data_805D60FC < 0) {
        return 0;
    }
    var_r29 = resolve_matching_object__6TLobbyFPv(TLobby__data_805D60FC);
    temp_r31 = get_object_type__6TLobbyFi(TLobby__data_805D60FC);
    for (var_r28 = 0; var_r28 < temp_r31; var_r28 += 1, var_r29 += 0x48) {
        temp_r3 = M2C_FIELD(var_r29, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && ((s16) M2C_FIELD(var_r29, s16 *, 0xC) == arg0) && ((s16) M2C_FIELD(var_r29, s16 *, 0xE) == arg1)) {
            temp_r3_2 = TLobby__sub_8020CCF4(var_r29);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(var_r29, void **, 0x44) = temp_r3_2;
                M2C_FIELD(var_r29, s16 *, 2) = (s16) (M2C_FIELD(var_r29, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(var_r29, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(var_r29, s16 *, 0xE);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(var_r29, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = var_r29;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *)temp_r3_2)->m77(TLobby__data_805D6144 + (temp_r0 * 0xC));
                }
                var_r30 += 1;
            } else {
                M2C_FIELD(var_r29, void **, 0x44) = NULL;
            }
        }
    }
    return var_r30;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CB34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 spawn_objects_at_pos__6TLobbyFss(s16 arg0, s16 arg1);
u8 *TLobby__sub_8020D054(void *);
u8 *get_object_count__6TLobbyFPv(s32);
s32 get_obj_table_entry__6TLobbyFi(s32);

struct VObj8020 {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};
extern s32 TLobby__data_805D60FC;
extern s32 TLobby__data_805D6140;

s32 spawn_objects_at_pos__6TLobbyFss(s16 arg0, s16 arg1) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r29;
    s32 var_r28;
    u8 *temp_r3_2;

    var_r30 = 0;
    var_r29 = get_object_count__6TLobbyFPv(TLobby__data_805D60FC);
    temp_r31 = get_obj_table_entry__6TLobbyFi(TLobby__data_805D60FC);
    for (var_r28 = 0; var_r28 < temp_r31; var_r28++, var_r29 += 0x44) {
        temp_r3 = M2C_FIELD(var_r29, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && ((s16) M2C_FIELD(var_r29, s16 *, 0xC) == arg0) && ((s16) M2C_FIELD(var_r29, s16 *, 0xA) == arg1)) {
            temp_r3_2 = TLobby__sub_8020D054(var_r29);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(var_r29, void **, 0x40) = temp_r3_2;
                M2C_FIELD(var_r29, s16 *, 2) = (s16) (M2C_FIELD(var_r29, s16 *, 2) | 0x12);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(var_r29, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(var_r29, s16 *, 0xA);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(var_r29, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = var_r29;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj8020*)temp_r3_2)->m4(TLobby__data_805D6140 + (temp_r0 * 4), 0);
                }
                var_r30 += 1;
            } else {
                M2C_FIELD(var_r29, void **, 0x40) = NULL;
            }
        }
    }
    return var_r30;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CCD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020CCD0(void *arg0, void *arg1);

void TLobby__sub_8020CCD0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CD44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77(s32);
};

extern "C" {

void create_objects__6TLobbyFi(s32 arg0);
u8 *TLobby__sub_8020CCF4(void *);
u8 *resolve_matching_object__6TLobbyFPv();
s32 get_object_type__6TLobbyFi(s32);

extern s32 TLobby__data_805D6144;

void create_objects__6TLobbyFi(s32 arg0) {
    s16 temp_r3;
    s16 temp_r0;
    s32 count;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = resolve_matching_object__6TLobbyFPv();
    count = get_object_type__6TLobbyFi(arg0);
    for (i = 0; i < count; i++, ptr += 0x48) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xE) == 0))) {
            temp_r3_2 = TLobby__sub_8020CCF4(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x44) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(ptr, s16 *, 0xE);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *) temp_r3_2)->m77(TLobby__data_805D6144 + (temp_r0 * 0xC));
                }
            } else {
                M2C_FIELD(ptr, void **, 0x44) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CE4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct CE4C_VBase_8020ce4c { char pad[0x18]; };
struct CE4C_VObj_8020ce4c : CE4C_VBase_8020ce4c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m79(s32);
};

extern "C" {

void assign_display_objects__6TLobbyFPvi(u8 *arg0, s32 arg1);
u8 *TLobby__sub_8020CCF4(void *);

extern s32 TLobby__data_805D6144;

void assign_display_objects__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    s16 temp_r3;
    s16 temp_r0;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = arg0;
    for (i = 0; i < arg1; i++, ptr += 0x48) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xE) == 0))) {
            temp_r3_2 = TLobby__sub_8020CCF4(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x44) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(ptr, s16 *, 0xE);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((CE4C_VObj_8020ce4c *) temp_r3_2)->m79(TLobby__data_805D6144 + (temp_r0 * 0xC));
                }
            } else {
                M2C_FIELD(ptr, void **, 0x44) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CFC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020CFC8(void *arg0, void *arg1);

void TLobby__sub_8020CFC8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020D0B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};

extern "C" {

void attach_objects_by_id__6TLobbyFi(s32 arg0);
u8 *TLobby__sub_8020D054(void *);
u8 *get_object_count__6TLobbyFPv();
s32 get_obj_table_entry__6TLobbyFi(s32);

extern s32 TLobby__data_805D6140;

void attach_objects_by_id__6TLobbyFi(s32 arg0) {
    s16 temp_r3;
    s16 temp_r0;
    s32 count;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = get_object_count__6TLobbyFPv();
    count = get_obj_table_entry__6TLobbyFi(arg0);
    for (i = 0; i < count; i++, ptr += 0x44) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 0x10) || (temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xA) == 0))) {
            temp_r3_2 = TLobby__sub_8020D054(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x40) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *) temp_r3_2)->m4(TLobby__data_805D6140 + (temp_r0 * 4), 0);
                }
            } else {
                M2C_FIELD(ptr, void **, 0x40) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020D1BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8020d1bc { char pad[0x18]; };
struct VObj_8020d1bc : VBase_8020d1bc {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};

extern "C" {

void assign_objects_to_slots__6TLobbyFPvi(u8 *arg0, s32 arg1);
u8 *TLobby__sub_8020D054(void *);

extern s32 TLobby__data_805D6140;

void assign_objects_to_slots__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    s16 temp_r3;
    s16 temp_r0;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = arg0;
    for (i = 0; i < arg1; i++, ptr += 0x44) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 0x10) || (temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xA) == 0))) {
            temp_r3_2 = TLobby__sub_8020D054(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x40) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj_8020d1bc *) temp_r3_2)->m4(TLobby__data_805D6140 + (temp_r0 * 4), 0);
                }
            } else {
                M2C_FIELD(ptr, void **, 0x40) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020D6D0
#include "types.h"

extern "C" {

int TLobby__sub_8020D6D0(void* p);
int TLobby__sub_8020D5AC(void*);

int TLobby__sub_8020D6D0(void* p) { return TLobby__sub_8020D5AC(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020D94C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020D94C(void);
void free__11TOBoss4RockFUi(void*);

extern u32 TLobby__data_805D611C;
extern s32 TLobby__data_805D6120;
extern u32 TLobby__data_805D6124;
extern s32 TLobby__data_805D6128;

void TLobby__sub_8020D94C(void) {
    if ((u32) TLobby__data_805D611C != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D611C);
        TLobby__data_805D611C = 0U;
        TLobby__data_805D6120 = 0;
    }
    if ((u32) TLobby__data_805D6124 != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D6124);
        TLobby__data_805D6124 = 0U;
        TLobby__data_805D6128 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020DFD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__6TLobbyFv(void);
void __dt__5THeapFv(void*, int);
void free_and_delete__6TLobbyFPvs(void*, int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern u32 TLobby__data_805D6104;
extern u32 TLobby__data_805D6108;
extern u32 TLobby__data_805D6138;
extern u32 TLobby__data_805D613C;
extern u32 TLobby__data_805D6140;
extern u32 TLobby__data_805D6144;

void free_resources__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6144 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D6144);
        TLobby__data_805D6144 = 0U;
    }
    if ((u32) TLobby__data_805D6140 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D6140);
        TLobby__data_805D6140 = 0U;
    }
    if ((u32) TLobby__data_805D6108 != 0U) {
        __dt__5THeapFv((void*)TLobby__data_805D6108, 1);
        TLobby__data_805D6108 = 0U;
    }
    if ((u32) TLobby__data_805D6104 != 0U) {
        free_and_delete__6TLobbyFPvs((void*)TLobby__data_805D6104, 1);
        TLobby__data_805D6104 = 0U;
    }
    if ((u32) TLobby__data_805D613C != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D613C);
        TLobby__data_805D613C = 0U;
    }
    if ((u32) TLobby__data_805D6138 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D6138);
        TLobby__data_805D6138 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020E3BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020E3BC(void);
void TLobby__sub_8020E3C0(void);
int get_matching_object__6TLobbyFv(void);
int get_object_count__6TLobbyFv(void);
s32 TLobby__sub_8037F1C8(M2C_UNK);

void TLobby__sub_8020E3BC(void) {  }

extern s32 lbl_805D612C;
extern s32 lbl_805D6130;

void TLobby__sub_8020E3C0(void) {
    lbl_805D6130 = 0x100000;
    lbl_805D612C = TLobby__sub_8037F1C8(0x100000);
}

    extern int TLobby__data_805D6114;
int get_matching_object__6TLobbyFv(void) {  return TLobby__data_805D6114; }

    extern int TLobby__data_805D610C;
int get_object_count__6TLobbyFv(void) {  return TLobby__data_805D610C; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020ED20
#include "types.h"

extern "C" {

void set_shop_armor_list_flag__6TLobbyFii(int a0, int a1);
int TLobby__sub_8020ED44(void);

    extern int lbl_805D615C;
void set_shop_armor_list_flag__6TLobbyFii(int a0, int a1) { lbl_805D615C = a1; TLobby__sub_8020ED44(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020EDBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_rocks__6TLobbyFv(void);
M2C_UNK TLobby__sub_800F957C(u32);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern u32 lbl_80513D78[];
extern u32 lbl_805D6158;

void free_rocks__6TLobbyFv(void) {
    s32 var_r28 = 3;
    u32 *var_r29 = lbl_80513D78;
    s32 var_r30 = 0;
    s32 var_r31 = 3;
    do {
        u32 v = (u32)var_r29[var_r31];
        if (v != 0U) {
            free__11TOBoss4RockFUi(v);
            var_r29[var_r31] = (u32)var_r30;
        }
        var_r28 -= 1;
        var_r31 -= 1;
    } while (var_r28 >= 0);
    if ((u32) lbl_805D6158 != 0U) {
        TLobby__sub_800F957C(lbl_805D6158);
        lbl_805D6158 = var_r30;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020EED8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 pop_byte__6TLobbyFPv(u8 *arg0);

s32 pop_byte__6TLobbyFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_r4 > 0) {
        temp_r0 = temp_r4 - 1;
        M2C_FIELD(arg0, s32 *, 0x64) = temp_r0;
        return (u8)*(arg0 + temp_r0);
    }
    return -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020F028
#include "types.h"

extern "C" {

s32 TLobby__sub_8030A7B0();
s32 is_not_split_screen__13TRaderMapCoreFv();
void reset_counter_64__6TLobbyFPv(void* p);

void reset_counter_64__6TLobbyFPv(void* p) { *(s32*)((char*)p + 0x64) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211C1C
#include "types.h"

extern "C" {

int get_selected_quest_id__6TLobbyFPv(void* p);
int get_selected_quest_id__16TQuestListOnlineFv(void*);

int get_selected_quest_id__6TLobbyFPv(void* p) { return get_selected_quest_id__16TQuestListOnlineFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211CE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_main_phase__6TLobbyFi(s32 arg0);
s32 create_lobby_object_05(s32);
s32 create_tl05_object__6TLobbyFPv(s32);
s32 create__22THunterGuildSeqOfflineFPv(s32);

s32 get_main_phase();
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

s32 handle_main_phase__6TLobbyFi(s32 arg0) {
    if (get_main_phase() == 0xE) {
        return create__22THunterGuildSeqOfflineFPv(arg0);
    }
    if (get_main_phase() == 0xF) {
        if ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC) {
            return create_tl05_object__6TLobbyFPv(arg0);
        }
        return create_lobby_object_05(arg0);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211F0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_guild_or_quest_phase__6TLobbyFv(void);
M2C_UNK THunterGuildSeqOffline__sub_8021339C();
M2C_UNK THunterGuildWarning__sub_8021170C();
M2C_UNK TQuestListOnline__sub_802155B4();
M2C_UNK THunterGuildSeqOffline__sub_80213CA4();
M2C_UNK THunterGuildSeqOffline__sub_80214A5C();
s32 get_main_phase();

void update_guild_or_quest_phase__6TLobbyFv(void) {
    if (get_main_phase() == 0xE) {
        THunterGuildSeqOffline__sub_8021339C();
        THunterGuildWarning__sub_8021170C();
    }
    if (get_main_phase() == 0xF) {
        TQuestListOnline__sub_802155B4();
        THunterGuildSeqOffline__sub_80214A5C();
        THunterGuildSeqOffline__sub_80213CA4();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211FA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_tl05_object__6TLobbyFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void *THunterGuildSeqOffline__sub_80214B3C(void *, void *, void *);

extern void *tl_05;

void *create_tl05_object__6TLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = THunterGuildSeqOffline__sub_80214B3C(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80215AE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_all__6TLobbyFi(s32 arg0);
void free_window__6TLobbyFv(void);
M2C_UNK TLobby__sub_80215720(s32);
M2C_UNK TLobby__sub_8021587C(s32);
M2C_UNK TLobby__sub_8021599C(s32);
s32 TLobby__sub_80215ABC();
void TLobby__sub_800F957C(void*);

extern u32 lbl_805D61C0;
extern s32 lbl_805D61C4;
extern s32 lbl_805D61C8;

void update_all__6TLobbyFi(s32 arg0) {
    if ((u32) lbl_805D61C0 != 0U) {
        lbl_805D61C8 = 0;
        lbl_805D61C4 = TLobby__sub_80215ABC();
        TLobby__sub_8021599C(arg0);
        TLobby__sub_8021587C(arg0);
        TLobby__sub_80215720(arg0);
    }
}

extern u32 lbl_805D61C0;

void free_window__6TLobbyFv(void) {
    if ((u32) lbl_805D61C0 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D61C0);
        lbl_805D61C0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802173F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_global__6TLobbyFv(void);
void TLobby__sub_800F957C(void*);

extern u32 lbl_805D61D8;

void free_global__6TLobbyFv(void) {
    if ((u32) lbl_805D61D8 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D61D8);
        lbl_805D61D8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80217424
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag_if_not_split_screen__6TLobbyFv(void);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern s32 lbl_805D61D8;

void clear_flag_if_not_split_screen__6TLobbyFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
        lbl_805D61D8 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021A010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_all_lobbies__6TLobbyFv(void);
M2C_UNK TLobby__sub_801F45FC(s32);

extern M2C_UNK lbl_8044BF58[];

void update_all_lobbies__6TLobbyFv(void) {
    s32 var_r29;
    M2C_UNK *var_r30;
    s32 var_r31;

    var_r29 = 0;
    var_r30 = lbl_8044BF58;
    var_r31 = 0;
    do {
        TLobby__sub_801F45FC(var_r30[var_r31]);
        var_r29 += 1;
        var_r31 += 2;
    } while (var_r29 < 0x1A);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021A360
#include "types.h"

extern "C" {

void update_lobbies_and_events__6TLobbyFPv(void* p);
int update_all_lobbies__6TLobbyFv(void*);
int update_event_unlocks__12TODoorVoShipFv(void*);

void update_lobbies_and_events__6TLobbyFPv(void* p) { update_all_lobbies__6TLobbyFv(p); update_event_unlocks__12TODoorVoShipFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021B268
#include "types.h"

extern "C" {

void set_position__6TLobbyFPvff(void* p, f32 a, f32 b);

void set_position__6TLobbyFPvff(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0xa8) = a; *(f32*)((char*)p + 0xac) = b; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021B274
#include "types.h"

extern "C" {

int TLobby__sub_8021B274(int a0);

    extern int lbl_80513D68[];
int TLobby__sub_8021B274(int a0) {  return lbl_80513D68[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021F074
#include "types.h"

extern "C" {

void TLobby__sub_8021F074(void);
int TLobby__sub_8020ECA8(void);
int TLobby__sub_8022559C(void);
int TLobby__sub_802243D4(void);

    extern int lbl_805D6244;
void TLobby__sub_8021F074(void) { TLobby__sub_8022559C(); TLobby__sub_8020ECA8(); TLobby__sub_802243D4(); lbl_805D6244 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021F0A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8021F0A4(void);
M2C_UNK TLobby__sub_8020ECA8();
M2C_UNK TLobby__sub_8022559C();
s32 get_task_id__14TFontSmallTaskFPv(M2C_UNK *);
M2C_UNK TLobby__sub_802243D4();

extern M2C_UNK TLobby__data_805011D8[];
extern s32 lbl_805D5550;
extern s32 lbl_805D6238;
extern s32 lbl_805D6240;
extern s32 lbl_805D6244;

void TLobby__sub_8021F0A4(void) {
    s32 temp_r3;

    TLobby__sub_8022559C();
    TLobby__sub_8020ECA8();
    TLobby__sub_802243D4();
    lbl_805D6244 = 0;
    temp_r3 = get_task_id__14TFontSmallTaskFPv(TLobby__data_805011D8);
    lbl_805D6238 = temp_r3;
    if (temp_r3 < 0) {
        lbl_805D6238 = 0;
    }
    if ((s32) lbl_805D6238 > 9) {
        lbl_805D6238 = 9;
    }
    lbl_805D6240 = lbl_805D5550;
    if ((s32) lbl_805D5550 < 0) {
        lbl_805D6240 = 0;
    }
    if ((s32) lbl_805D6240 > 3) {
        lbl_805D6240 = 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80221820
#include "types.h"

extern "C" {

int get_shop_value__6TLobbyFv(void);

    extern int lbl_805D61C8;
int get_shop_value__6TLobbyFv(void) {  return lbl_805D61C8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80222D24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_singleton__6TLobbyFv(void);
void TLobby__sub_800F957C(void*);

extern u32 lbl_805D6258;

void free_singleton__6TLobbyFv(void) {
    if ((u32) lbl_805D6258 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6258);
        lbl_805D6258 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80222D58
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_named_lobby_object__6TLobbyFv(void);

s32 create_named_object(s32);
extern M2C_UNK lbl_804CA288[];
extern s32 lbl_805D5544;
extern s32 lbl_805D6238;
extern s32 lbl_805D6258;

void create_named_lobby_object__6TLobbyFv(void) {
    if (((s32) lbl_805D6238 < 0) || ((s32) lbl_805D6238 > 9)) {
        lbl_805D6238 = 0;
    }
    lbl_805D6258 = create_named_object(lbl_804CA288[lbl_805D5544]);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802230F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 compare_version__6TLobbyFPvPv(void *arg0, void *arg1);
s32 compare_greater__6TLobbyFPvPv(void *arg0, void *arg1);
u32 TLobby__sub_8022318C(u8 *arg0, u8 *arg1);

s32 compare_version__6TLobbyFPvPv(void *arg0, void *arg1) {
    u32 b, a;

    a = M2C_FIELD(arg0, u8 *, 0);
    b = M2C_FIELD(arg1, u8 *, 0);
    if (a > b) {
        return 1;
    }
    if (a == b) {
        {
            u32 b2, a2;
            a2 = M2C_FIELD(arg0, u8 *, 1);
            b2 = M2C_FIELD(arg1, u8 *, 1);
            if (a2 > b2) {
                return 1;
            }
            if (a2 == b2) {
                if ((u8) M2C_FIELD(arg0, u8 *, 2) > (u8) M2C_FIELD(arg1, u8 *, 2)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

s32 compare_greater__6TLobbyFPvPv(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0);
    temp_r0 = M2C_FIELD(arg1, u8 *, 0);
    if (temp_r5 > temp_r0) {
        return 1;
    }
    if ((temp_r5 == temp_r0) && ((u8) M2C_FIELD(arg0, u8 *, 1) > (u8) M2C_FIELD(arg1, u8 *, 1))) {
        return 1;
    }
    return 0;
}

u32 TLobby__sub_8022318C(u8 *arg0, u8 *arg1) {
    return (u32) (*arg1 - *arg0) >> 0x1FU;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802231A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void swap_item_data__6TLobbyFPvPv(M2C_UNK *arg0, M2C_UNK *arg1);
M2C_UNK copy_item_data__6TLobbyFPvPv(M2C_UNK *, M2C_UNK *);

void swap_item_data__6TLobbyFPvPv(M2C_UNK *arg0, M2C_UNK *arg1) {
    M2C_UNK sp8[8];

    copy_item_data__6TLobbyFPvPv(sp8, arg0);
    copy_item_data__6TLobbyFPvPv(arg0, arg1);
    copy_item_data__6TLobbyFPvPv(arg1, sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802232F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_802232F8(void *arg0, void *arg1);

s32 TLobby__sub_802232F8(void *arg0, void *arg1) {
    u32 b, a;

    a = M2C_FIELD(arg0, u8 *, 0);
    b = M2C_FIELD(arg1, u8 *, 0);
    if (a > b) {
        return 1;
    }
    if (a == b) {
        {
            u32 b2, a2;
            a2 = M2C_FIELD(arg0, u8 *, 1);
            b2 = M2C_FIELD(arg1, u8 *, 1);
            if (a2 > b2) {
                return 1;
            }
            if (a2 == b2) {
                if ((u8) M2C_FIELD(arg0, u8 *, 2) > (u8) M2C_FIELD(arg1, u8 *, 2)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022448C
#include "types.h"

extern "C" {

void set_6264_and_call_2244B0__6TLobbyFii(int a0, int a1);
int TLobby__sub_802244B0(void);

    extern int lbl_805D6264;
void set_6264_and_call_2244B0__6TLobbyFii(int a0, int a1) { lbl_805D6264 = a1; TLobby__sub_802244B0(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80224544
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct SRock_80224544;

extern "C" {

void free_all_rocks__6TLobbyFv(void);
M2C_UNK TLobby__sub_800F957C(u32);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern M2C_UNK lbl_80513F20[];
extern u32 lbl_805D6260;

void free_all_rocks__6TLobbyFv(void) {
    s32 var_r28 = 3;
    M2C_UNK *var_r29 = lbl_80513F20;
    s32 var_r30 = 0;
    s32 var_r31 = 3;
    do {
        u32 v = (u32)var_r29[var_r31];
        if (v != 0U) {
            free__11TOBoss4RockFUi(v);
            var_r29[var_r31] = (M2C_UNK)var_r30;
        }
        var_r28 -= 1;
        var_r31 -= 1;
    } while (var_r28 >= 0);
    if ((u32) lbl_805D6260 != 0U) {
        TLobby__sub_800F957C(lbl_805D6260);
        lbl_805D6260 = var_r30;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802249C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_level_tier__6TLobbyFi(s32 arg0);
s32 level_to_reward__6TLobbyFi(s32 arg0);

extern s32 lbl_805D6240;

s32 get_level_tier__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D6240 != 3) {
        if ((arg0 >= 1) && (arg0 <= 0xA)) {
            return 0;
        }
        if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
            return 1;
        }
        if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
            return 2;
        }
        if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
            return 3;
        }
        if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
            return 4;
        }
        if (arg0 >= 0x65) {
            return 4;
        }
        return -1;
    }
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 1;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 2;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 3;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x63)) {
        return 4;
    }
    if ((arg0 >= 0x64) && (arg0 <= 0x96)) {
        return 5;
    }
    if (arg0 >= 0x97) {
        return 6;
    }
    return -1;
}

s32 level_to_reward__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0xA;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 0xC;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 0xC;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x64)) {
        return 0x10;
    }
    if (arg0 >= 0x65) {
        return 0x10;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80225238
#include "types.h"

extern "C" {

void TLobby__sub_80225238(int a0, int a1);
int TLobby__sub_8022525C(void);

    extern int lbl_805D626C;
void TLobby__sub_80225238(int a0, int a1) { lbl_805D626C = a1; TLobby__sub_8022525C(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802257EC
#include "types.h"

extern "C" {

void try_close__6TLobbyFPv(void* p);
int TLobby__sub_80225A08(void*);
int TLobby__sub_80225B90(void*);

void try_close__6TLobbyFPv(void* p) { if (TLobby__sub_80225B90(p) == 0) { TLobby__sub_80225A08(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80225C44
#include "types.h"

extern "C" {

int TLobby__sub_80225C44(void* p);
int TLobby__sub_80225C64(void* p);
void* get_com_card_list__6TLobbyFPv(void* p);
void TLobby__sub_80225C8C(void* p);
int is_flag_set__6TLobbyFPv(void* p);
s32 get_lobby_id__6TLobbyFPv(void* p);
int get_short_mail_ctrl__6TLobbyFv(void);
int TLobby__sub_80225B40(void*);

int TLobby__sub_80225C44(void* p) { return TLobby__sub_80225B40(p); }
int TLobby__sub_80225C64(void* p) { return TLobby__sub_80225B40(p); }
void* get_com_card_list__6TLobbyFPv(void* p) { return (char*)p + 0x8; }
void TLobby__sub_80225C8C(void* p) { *(u8*)((char*)p + 0xcc) &= 0xfffffffd; }
int is_flag_set__6TLobbyFPv(void* p) { return *(u8*)((char*)p + 0xcc) & 0x1; }
s32 get_lobby_id__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int lbl_805D6274;
int get_short_mail_ctrl__6TLobbyFv(void) {  return lbl_805D6274; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80225CB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80225CB8(void);

extern u16 lbl_805D63FC;

void TLobby__sub_80225CB8(void) {
    lbl_805D63FC |= 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80225CC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_lobby_flag__6TLobbyFv(void);

extern u16 lbl_805D63FC;

void clear_lobby_flag__6TLobbyFv(void) {
    lbl_805D63FC &= 0xFFFE;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80226070
#include "types.h"

extern "C" {

void set_and_notify__6TLobbyFi(int a0);
int TLobby__sub_802261E0(void*);

    extern int lbl_805D6280;
    extern int lbl_805D6284;
void set_and_notify__6TLobbyFi(int a0) { lbl_805D6284 = a0; TLobby__sub_802261E0((void*)(lbl_805D6280)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80226098
#include "types.h"

extern "C" {

void reset_global__6TLobbyFv(void);
int TLobby__sub_8022614C(void*);

    extern int lbl_805D6294;
    extern int lbl_805D6298;
void reset_global__6TLobbyFv(void) { lbl_805D6298 = 0; TLobby__sub_8022614C((void*)(lbl_805D6294)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802260C4
#include "types.h"

extern "C" {

void close_option_window__6TLobbyFv(void);
int TLobby__sub_802261E0(void*);

    extern int lbl_805D6280;
    extern int lbl_805D6284;
void close_option_window__6TLobbyFv(void) { lbl_805D6284 = 0; TLobby__sub_802261E0((void*)(lbl_805D6280)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802260F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_layout_positions__6TLobbyFv(void);
M2C_UNK reset_global__6TLobbyFv();
M2C_UNK close_option_window__6TLobbyFv();
s32 TLobby__sub_80226328(void);

extern s32 lbl_805D627C;
extern s32 lbl_805D6290;
extern s32 lbl_805D62A4;

void init_layout_positions__6TLobbyFv(void) {
    lbl_805D627C = -0x50;
    lbl_805D62A4 = -0x5A;
    if (TLobby__sub_80226328() == 1) {
        lbl_805D627C -= 0x32;
    }
    lbl_805D6290 = -0xA;
    close_option_window__6TLobbyFv();
    reset_global__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80226144
#include "types.h"

extern "C" {

int get_lobby_data__6TLobbyFv(void);

    extern int lbl_805D6280;
int get_lobby_data__6TLobbyFv(void) {  return lbl_805D6280; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80226308
#include "types.h"

extern "C" {

int TLobby__sub_80226308(void* p);
int TLobby__sub_80226328(void*);

int TLobby__sub_80226308(void* p) { return TLobby__sub_80226328(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802268F4
#include "types.h"

extern "C" {

void update_lobby_subsystems__6TLobbyFv(void);
int TLobby__sub_8022644C(void);
int TLobby__sub_80227248(void);

void update_lobby_subsystems__6TLobbyFv(void) { TLobby__sub_8022644C(); TLobby__sub_80227248(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80226B64
#include "types.h"

extern "C" {

int TLobby__sub_80226B64(void);
int TLobby__sub_80226308(void);
int update_lobby_subsystems__6TLobbyFv(void);
int init_layout_positions__6TLobbyFv(void);

    extern int lbl_805D62B0;
    extern int lbl_805D62B4;
    extern int lbl_805D62B8;
int TLobby__sub_80226B64(void) { update_lobby_subsystems__6TLobbyFv(); init_layout_positions__6TLobbyFv(); TLobby__sub_80226308(); lbl_805D62B4 = 0; lbl_805D62B8 = 0; lbl_805D62B0 = 1; return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80226C68
#include "types.h"

extern "C" {

int set_and_notify_default__6TLobbyFv(void);
int send_neg30__6TLobbyFv(void);
int set_and_notify__6TLobbyFi(void*);

int set_and_notify_default__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(0)); }
int send_neg30__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(-30)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80226D5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_bgm_resource__6TLobbyFv(void);
M2C_UNK TLobby__sub_803C9CBC(s32);
M2C_UNK init_layout_positions__6TLobbyFv();

extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D6330;

void release_bgm_resource__6TLobbyFv(void) {
    if ((s32) lbl_805D6330 != 0) {
        TLobby__sub_803C9CBC(M2C_FIELD(lbl_804CB850, s32 *, 4));
        lbl_805D6330 = 0;
        init_layout_positions__6TLobbyFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80227A2C
#include "types.h"

extern "C" {

int free__6TLobbyFPv(void* p);
int TLobby__sub_80227A4C(void* p);
void TLobby__sub_80227A6C(void);
int TLobby__sub_80227A70(void* p);
void TLobby__sub_80227A90(void);
void TLobby__sub_80227A94(void);
int TLobby__sub_80227AA0(void);
int TLobby__sub_8022804C(void*);
int xfree__FPv(void*);
int xmalloc__FUl(void*);

int free__6TLobbyFPv(void* p) { return xfree__FPv(p); }
int TLobby__sub_80227A4C(void* p) { return xmalloc__FUl(p); }
void TLobby__sub_80227A6C(void) {  }
int TLobby__sub_80227A70(void* p) { return TLobby__sub_8022804C(p); }
void TLobby__sub_80227A90(void) {  }

    extern int lbl_805D3710;
    extern int lbl_805D6314;
void TLobby__sub_80227A94(void) { lbl_805D6314 = lbl_805D3710; }

    extern int lbl_805D6288;
int TLobby__sub_80227AA0(void) {  return lbl_805D6288; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80227AF8
#include "types.h"

extern "C" {

int TLobby__sub_80227AF8(void* p);
int TLobby__sub_8023F754(void*);

int TLobby__sub_80227AF8(void* p) { return TLobby__sub_8023F754(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80227BFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_camera_state_active__6TLobbyFv(void);
void set_mode__6TLobbyFi(s32 arg0);
u16 TCameraCtrl__sub_8006A5DC();
M2C_UNK set_mode__6TLobbyFPvi(M2C_UNK *, s32);
M2C_UNK on_set_mode__6TLobbyFv(M2C_UNK);

s32 is_camera_state_active__6TLobbyFv(void) {
    if ((TCameraCtrl__sub_8006A5DC() == 5) || (TCameraCtrl__sub_8006A5DC() == 9)) {
        return 1;
    }
    return 0;
}

extern M2C_UNK lbl_80514F64[];

void set_mode__6TLobbyFi(s32 arg0) {
    switch (arg0) {
    case 0:
        on_set_mode__6TLobbyFv(1);
        break;
    case 1:
        on_set_mode__6TLobbyFv(0);
        break;
    case 2:
        on_set_mode__6TLobbyFv(0);
        break;
    }
    set_mode__6TLobbyFPvi(lbl_80514F64, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80227D14
#include "types.h"

extern "C" {

int TLobby__sub_80227D14(void* p);
int TLobby__sub_80227D38(void);
int TLobby__sub_8023F8B0(void*, int);
int TLobby__sub_8023FF64(void*);

int TLobby__sub_80227D14(void* p) { return TLobby__sub_8023F8B0(p, 64); }
int TLobby__sub_80227D38(void) { return TLobby__sub_8023FF64((void*)(0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80227F7C
#include "types.h"

extern "C" {

void refresh_render_state__6TLobbyFv(void);
int TLobby__sub_80227B48(float);
int TLobby__sub_802405B0(void*, void*);
int render_tick__Fv(void);

    extern unsigned char lbl_80514F64[];
    extern float lbl_805DC76C;
void refresh_render_state__6TLobbyFv(void) { TLobby__sub_802405B0(lbl_80514F64, (void*)0); TLobby__sub_80227B48(lbl_805DC76C); render_tick__Fv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80228500
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_ready_flag_unless_locked__6TLobbyFPv(void *arg0);
void set_area__6TLobbyFPvi(void *arg0, s32 arg1);
s32 TLobby__sub_80207770(s32);
s32 get_global_state__14TOKeyMachine01Fv();

void clear_ready_flag_unless_locked__6TLobbyFPv(void *arg0) {
    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFE);
    }
}

void set_area__6TLobbyFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = TLobby__sub_80207770(M2C_FIELD(arg0, s32 *, 0xC));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80228818
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_range_zero__6TLobbyFPv(void* arg0);
M2C_UNK init_range__6TLobbyFPvi(void*, int);

s32 init_range_zero__6TLobbyFPv(void* arg0) {
    init_range__6TLobbyFPvi(arg0, 0);
    return (s32)arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80228AF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
void memset(void *, int, int);

extern M2C_UNK lbl_804CC048[];

void *construct__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC048;
    M2C_FIELD(arg0, void **, 0x10A0) = arg2;
    M2C_FIELD(arg0, void **, 0x10A4) = arg3;
    memset((void *)((char *)arg0 + 28), 0, 4096);
    M2C_FIELD(arg0, u32 *, 0x109C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80228C84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80228C84 { char pad[0x18]; };
struct VObj_80228C84 : Base_80228C84 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
};

extern "C" {

void refresh_player_status__6TLobbyFv(void);
void *TPlayerBattleCtrl4P__sub_801BA74C();
M2C_UNK TWindowSubStatusDisp__sub_80229080();

void refresh_player_status__6TLobbyFv(void) {
    struct VObj_80228C84 *o = (struct VObj_80228C84 *)TPlayerBattleCtrl4P__sub_801BA74C();
    if (o != NULL) {
        o->m10();
        TWindowSubStatusDisp__sub_80229080();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023F734
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 advance_rng__6TLobbyFPv(void *arg0);

s32 advance_rng__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2AC) = (s32) ((M2C_FIELD(arg0, s32 *, 0x2AC) * 0x10DCD) + 1);
    return M2C_FIELD(arg0, s32 *, 0x2AC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023F7C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_field_2a4__6TLobbyFPv(void* p);
s32 get_field_0x280__6TLobbyFPv(void* p);
void set_menu_index__6TLobbyFPvi(void* p, s32 v);
void set_mode__6TLobbyFPvi(void *arg0, s32 arg1);
void set_clamped_field27c__6TLobbyFPvf(void *arg0, f32 farg0);
s32 TLobby__sub_803AA35C(s32);

f32 get_field_2a4__6TLobbyFPv(void* p) { return *(f32*)((char*)p + 0x2a4); }
s32 get_field_0x280__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x280); }
void set_menu_index__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x280) = v; }
void set_mode__6TLobbyFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        TLobby__sub_803AA35C(0);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    case 1:
        TLobby__sub_803AA35C(1);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    case 2:
        TLobby__sub_803AA35C(2);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    }
}

extern f32 lbl_805DC9C0;
extern f32 lbl_805DC9C4;

void set_clamped_field27c__6TLobbyFPvf(void *arg0, f32 farg0) {
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_805DC9C0) {
        var_f1 = lbl_805DC9C0;
    }
    if (var_f1 > lbl_805DC9C4) {
        var_f1 = lbl_805DC9C4;
    }
    M2C_FIELD(arg0, f32 *, 0x27C) = var_f1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023FCAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_ready__6TLobbyFPv(void *arg0);

u8 is_ready__6TLobbyFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x298) == 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802401C8
#include "types.h"

extern "C" {

int TLobby__sub_802401C8(void);

int TLobby__sub_802401C8(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024074C
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 validate_and_set_selection__6TLobbyFPvi(void *arg0, s32 arg1);
M2C_UNK TLobby__sub_802405B0(void *, M2C_UNK);
M2C_UNK TLobby__sub_803AA2FC(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_804CD9A8[];

s32 validate_and_set_selection__6TLobbyFPvi(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 0x16)) {
        return 4;
    }
    if ((arg1 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x288) == -1)) {
        return 8;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x288) > 0) {
        TLobby__sub_802405B0(arg0, 0);
    }
    TLobby__sub_803AA2FC(0x7F, 0, 0xFF);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x298) != 1) {
        return 9;
    }
    M2C_FIELD(arg0, s32 *, 0x2B0) = -1;
    M2C_FIELD(arg0, s32 *, 0x2B4) = (s32) lbl_804CD9A8[arg1];
    M2C_FIELD(arg0, s32 *, 0x29C) = arg1;
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80240808
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_80240808(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);

void *TLobby__sub_80240808(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x294) = 0;
        M2C_FIELD(arg0, s32 *, 0x290) = 0;
        M2C_FIELD(arg0, s32 *, 0x288) = -1;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802409AC
#include "types.h"

extern "C" {

void set_field0__6TLobbyFPvi(void* p, s32 v);

void set_field0__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802409B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_field9c__6TLobbyFPvf(void *arg0, f32 farg0);

extern f32 TLobby__data_805DC9E0;
extern f32 lbl_805DC9E4;
extern f32 lbl_805DC9E8;

void clamp_field9c__6TLobbyFPvf(void *arg0, f32 farg0) {
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < TLobby__data_805DC9E0) {
        M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DC9E4;
        return;
    }
    if (var_f1 > lbl_805DC9E8) {
        var_f1 = lbl_805DC9E8;
    }
    M2C_FIELD(arg0, f32 *, 0x9C) = var_f1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802409E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_308__6TLobbyFPv(s32);
void TLobby__sub_802409E4(void* p);

void TLobby__sub_802409E4(void* p) { *(s16*)((char*)p + 0x92) = 5; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80240A50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_308__6TLobbyFPv(s32);
void TLobby__sub_802409E4(void* p);

void update__6TLobbyFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if ((u32) (M2C_FIELD(arg0, s32 *, 0x80) + 0x77780000) == 0x8888U) {
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r4 > 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
        if (temp_r0 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x84) = 0;
            M2C_FIELD(arg0, s32 *, 0x80) = 0;
            M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
        } else {
            M2C_FIELD(arg0, s32 *, 0x78) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x7C) * (temp_r4 - temp_r0)) / temp_r4);
            M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) - get_field_308__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0)));
        }
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + M2C_FIELD(arg0, s32 *, 0x70) + M2C_FIELD(arg0, s32 *, 0x78));
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) + 0x2000);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) > 0x3FFF) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0x3FFF;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80240F38
#include "types.h"

extern "C" {

void TLobby__sub_80240F38(void);

void TLobby__sub_80240F38(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80241A0C
#include "types.h"

extern "C" {

void TLobby__sub_80241A0C(void);

void TLobby__sub_80241A0C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80241BA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_params__6TLobbyFPv(void *arg0);

void clamp_params__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (((M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x40)) + M2C_FIELD(arg0, s32 *, 0x3C)) + M2C_FIELD(arg0, s32 *, 0x44)) + 0x7F;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (0x40 - (M2C_FIELD(arg0, s32 *, 0x50) + M2C_FIELD(arg0, s32 *, 0x54)));
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x58) + M2C_FIELD(arg0, s32 *, 0x60)) + 0x40);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x280));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) < 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) < 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0x7F;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242148
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_80242148(void *arg0, s16 arg1);
void TLobby__sub_8024218C(void* p);
s32 get_field_308__6TLobbyFPv(void* p);
int forward_8024273C__6TLobbyFPv(void* p);
s32 __dl__FPv(void *);
int TLobby__sub_8024273C(void*);

void *TLobby__sub_80242148(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
void TLobby__sub_8024218C(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 get_field_308__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x308); }
int forward_8024273C__6TLobbyFPv(void* p) { return TLobby__sub_8024273C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802422EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802422EC(void *arg0, void *arg1);

void TLobby__sub_802422EC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242444
#include "types.h"

extern "C" {

void* get_com_card_entry__6TLobbyFi(int a0);

    extern unsigned char lbl_80517F9C[];
void* get_com_card_entry__6TLobbyFi(int a0) {  return (char*)lbl_80517F9C + a0 * 188; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242618
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_player_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1);
s32 get_com_card_list__6TLobbyFPv();
M2C_UNK TLobby__sub_802422EC(void *, void *, int);
void *TLobby__sub_80242458(void *, void *);
void *TLobby__sub_802424D8(void *);
M2C_UNK get_id__6TLobbyFPv(void *);
s32 get_sub_disp_ptr__20TWindowSubStatusDispFPv(void *);
M2C_UNK __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension(void *, void *);
u32 find_card_by_id__17TWindowSubComCardFUi();
M2C_UNK strncpy(void *, void *, int);

extern s32 lbl_805D63D8;

void init_player_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1) {
    s32 temp_r5;
    void *p;

    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    temp_r5 = lbl_805D63D8;
    lbl_805D63D8 = temp_r5 + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_r5;
    TLobby__sub_802422EC((void *) (arg0 + 0x4C), (void *) (arg1 + 0x10), (int) (temp_r5));
    __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension((void *) (arg0 + 0x58), (void *) (arg1 + 0x60));
    get_id__6TLobbyFPv((void *) (arg0));
    if (find_card_by_id__17TWindowSubComCardFUi() == 0U) {
        strncpy((void *) (arg0 + 8), (void *) (get_sub_disp_ptr__20TWindowSubStatusDispFPv((void *) (arg0))), (int) (0x10));
    } else {
        strncpy((void *) (arg0 + 8), (void *) (get_com_card_list__6TLobbyFPv()), (int) (0x10));
    }
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    p = TLobby__sub_802424D8((void *) (arg1 + 0x1C));
    p = TLobby__sub_80242458(p, (void *) (arg0 + 0x19));
    p = TLobby__sub_80242458(p, (void *) (arg0 + 0x2A));
    p = TLobby__sub_80242458(p, (void *) (arg0 + 0x2A));
    TLobby__sub_80242458(p, (void *) (arg0 + 0x3B));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242814
#include "types.h"

extern "C" {

void TLobby__sub_8024285C(void* p);
void reset_state_805D63DC__6TLobbyFv(void*);
void reset_state__6TLobbyFPv(void* p);
int clear_flag_bit2__6TLobbyFv(void);

    extern int lbl_805D63DC;
void reset_state_805D63DC__6TLobbyFv(void*) { lbl_805D63DC = 0; clear_flag_bit2__6TLobbyFv(); }

void reset_state__6TLobbyFPv(void* p) { reset_state_805D63DC__6TLobbyFv((void*)(p)); }
void TLobby__sub_8024285C(void* p) { reset_state_805D63DC__6TLobbyFv((void*)(p)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802428C4
#include "types.h"

extern "C" {

void* TLobby__sub_802428C4(void* p);
s32 TLobby__sub_802428F8(void* p);
int get_com_card_data__6TLobbyFv(void);
int fn_80077AA4(void*);

void* TLobby__sub_802428C4(void* p) { fn_80077AA4((char*)p + 0x58); return p; }
s32 TLobby__sub_802428F8(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int lbl_805D63DC;
int get_com_card_data__6TLobbyFv(void) {  return lbl_805D63DC; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242910
#include "types.h"

extern "C" {

s32 get_id__6TLobbyFPv(void* p);
void* get_sub_disp_ptr__20TWindowSubStatusDispFPv(void* p);

s32 get_id__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242918
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80242918(void);
void clear_flag_bit2__6TLobbyFv(void);

extern u16 lbl_805D63FC;

void TLobby__sub_80242918(void) {
    lbl_805D63FC |= 4;
}

extern u16 lbl_805D63FC;

void clear_flag_bit2__6TLobbyFv(void) {
    lbl_805D63FC &= 0xFFFFFFFB;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80243370
#include "types.h"

extern "C" {

int get_global_63e0__6TLobbyFv(void);

    extern int lbl_805D63E0;
int get_global_63e0__6TLobbyFv(void) {  return lbl_805D63E0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80243378
#include "types.h"

extern "C" {

void load_player_data__6TLobbyFv(void);
int TAdPlayerLoadGC__sub_801E263C(void*, void*, void*, void*);

    extern int lbl_805D63E0;
void load_player_data__6TLobbyFv(void) { TAdPlayerLoadGC__sub_801E263C((void*)0, (void*)0, (void*)(lbl_805D63E0), (void*)0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802433A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802433A8(void);
void xfree__FPv(void*);

extern u32 lbl_805D63E0;

void TLobby__sub_802433A8(void) {
    if ((u32) lbl_805D63E0 != 0U) {
        xfree__FPv((void*)lbl_805D63E0);
        lbl_805D63E0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80244D2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field_1c__6TLobbyFPvf(void *arg0, f32 farg0);
M2C_UNK TWindowCtrlMain__sub_8026CC28();
M2C_UNK TWindowCtrlMain__sub_8026CCA4(void *);

void set_field_1c__6TLobbyFPvf(void *arg0, f32 farg0) {
    TWindowCtrlMain__sub_8026CC28();
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    TWindowCtrlMain__sub_8026CCA4(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024A148
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_card_window_state__6TLobbyFv(void);
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);
M2C_UNK TLobby__sub_80077798(s32, s32 *);
s32 open_hard_keyboard__6TLobbyFPv(s32);
M2C_UNK fn_801DB244(s32, s32 *);

extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5580;

void send_card_window_state__6TLobbyFv(void) {
    s32 sp8[5];
    s32 temp_r31;

    temp_r31 = get_card_window__17TWindowSubComCardFUi(0xFFFF);
    sp8[0] = open_hard_keyboard__6TLobbyFPv(lbl_805D53A0) ? 1 : 0;
    TLobby__sub_80077798(temp_r31 + 0x22EC, sp8);
    fn_801DB244(TLobby__data_805D5580, sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266E0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_cursor_entry__6TLobbyFPv(void *arg0);
M2C_UNK get_cursor_pos__14TWindowSubItemFPv();
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void select_cursor_entry__6TLobbyFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    get_cursor_pos__14TWindowSubItemFPv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802676A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_status_disp_entry__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *);
M2C_UNK init_display__20TWindowSubStatusDispFPvii(s32, s32, s32);

void add_status_disp_entry__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x72) < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        init_display__20TWindowSubStatusDispFPvii(get_array_entry__20TWindowSubStatusDispFPvi(arg0), arg1, arg2);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80269C6C
#include "types.h"

extern "C" {

int send_and_handle__6TLobbyFPvii(void* p, int a1, int a2);
int fn_80269A0C(void*, int, int, int);

int send_and_handle__6TLobbyFPvii(void* p, int a1, int a2) { return fn_80269A0C(p, a1, a2, -1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80269D24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_window_mode_4__6TLobbyFPvii(void *arg0, M2C_UNK arg1, M2C_UNK arg2);
void update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
M2C_UNK TLobby__sub_80269CC0(void *, M2C_UNK, M2C_UNK, M2C_UNK);
f32 TWindowSubStatusDisp__sub_803D647C(f32);

void set_window_mode_4__6TLobbyFPvii(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    TLobby__sub_80269CC0(arg0, arg1, arg2, 4);
}

extern const f32 lbl_805DD238;

void update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1) {
    set_window_mode_4__6TLobbyFPvii((void *)(arg0), (M2C_UNK)(arg1), (M2C_UNK)((s32) TWindowSubStatusDisp__sub_803D647C((M2C_FIELD(arg1, f32 *, 4) - lbl_805DD238) / lbl_805DD238) + 2));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026A328
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8026A328(void);
M2C_UNK heap_free__5THeapFPv(s32, u32);

extern s32 lbl_805D6460;
extern u32 lbl_805D6464;

void TLobby__sub_8026A328(void) {
    if ((u32) lbl_805D6464 != 0U) {
        heap_free__5THeapFPv(lbl_805D6460, lbl_805D6464);
        lbl_805D6464 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026B06C
#include "types.h"

extern "C" {

void set_field_90__6TLobbyFPvi(void* p, s32 v);

void set_field_90__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x90) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026DE30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_list_entry__20TWindowSubStatusDispFPvUcii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0);
void TWindowSetLevelUp__sub_8026DE28(void* p, s32 v);

void add_list_entry__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x72) < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        init_list_entry__20TWindowSubStatusDispFPvUcii(get_array_entry__20TWindowSubStatusDispFPvi(arg0), arg1, arg2, arg3);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80271E48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_packet__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK TLobby__sub_80077798(s32, M2C_UNK *);
M2C_UNK fn_801DB1B4(s32, M2C_UNK *);

extern s32 TLobby__data_805D5580;

void send_packet__6TLobbyFii(s32 arg0, s32 arg1) {
    M2C_UNK sp8[4];

    TLobby__sub_80077798(arg1, sp8);
    fn_801DB1B4(TLobby__data_805D5580, sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028A7C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_shared_objects__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D64C8;
extern u32 lbl_805D64CC;

void free_shared_objects__6TLobbyFv(void) {
    if ((u32) lbl_805D64CC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D64CC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D64CC);
        lbl_805D64CC = 0U;
    }
    if ((u32) lbl_805D64C8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D64C8, 1);
        lbl_805D64C8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028C50C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TLobby__sub_8028C50C(void);
f64 cancel_dvd_async();

f32 TLobby__sub_8028C50C(void) {
    return (f32) cancel_dvd_async();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028D714
#include "types.h"

extern "C" {

int start_load_default__6TLobbyFPv(void* p);
int TLobby__sub_8028D628(void*, int);

int start_load_default__6TLobbyFPv(void* p) { return TLobby__sub_8028D628(p, 0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028D800
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_single_player_chr_select__6TLobbyFv(void);
void alloc_download_server__6TLobbyFv(void);
void free_chr_select_singleton__6TLobbyFv(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
u32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);

extern u32 lbl_805D6518;
extern u32 lbl_805D651C;

void free_single_player_chr_select__6TLobbyFv(void) {
    if (((u32) lbl_805D6518 != 0U) && ((u32) lbl_805D651C != 0U)) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)((void*)lbl_805D651C));
        lbl_805D651C = 0U;
    }
}

extern u32 lbl_805D6518;
extern u32 lbl_805D651C;

void alloc_download_server__6TLobbyFv(void) {
    if (((u32) lbl_805D6518 != 0U) && ((u32) lbl_805D651C == 0U)) {
        lbl_805D651C = alloc__22TQuestVmDownLoadServerFPv(0x50000);
        if ((u32) lbl_805D651C == 0U) {
            return;
        }
    }
}

extern u32 lbl_805D6518;

void free_chr_select_singleton__6TLobbyFv(void) {
    if ((u32) lbl_805D6518 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)((void*)lbl_805D6518));
        lbl_805D6518 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028EA28
#include "types.h"

extern "C" {

void free_all_resources__6TLobbyFv(void);
int free_global__23TAdSinglePlyChrSelectGCFv(void);
int free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(void);
int TCameraCtrl__sub_80069318(void);
int TKeyBoardControl__sub_80131F5C(void);
int TLobby__sub_8001FE7C(void*, void*);
int TLobby__sub_800FC3CC(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int TWindowCtrlMain__sub_8024D690(void);
int free_keyboard_soft_resources__6TLobbyFv(void);
int fn_80291138(void);
int fn_80291268(void);
int reset__11TCameraCtrlFv(void);

    extern int lbl_805D6528;
void free_all_resources__6TLobbyFv(void) { fn_80291138(); TLobby__sub_8022743C(); TLobby__sub_8001FE7C((void*)(lbl_805D6528), (void*)1); lbl_805D6528 = 0; free_global__23TAdSinglePlyChrSelectGCFv(); free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(); fn_80291268(); reset__11TCameraCtrlFv(); TCameraCtrl__sub_80069318(); TWindowCtrlMain__sub_8024D690(); TKeyBoardControl__sub_80131F5C(); TLobby__sub_800FC3CC(); free_keyboard_soft_resources__6TLobbyFv(); refresh_render_state__6TLobbyFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80291D94
#include "types.h"

extern "C" {

void update_screen__6TLobbyFPv(void* p);
int TLobby__sub_80293080(void*);
int is_multi_ready__6TLobbyFv(void);

void update_screen__6TLobbyFPv(void* p) { if (TLobby__sub_80293080(p) != 0) { is_multi_ready__6TLobbyFv(); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80291E54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_normalized_mode__6TLobbyFv(void);
s32 TLobby__sub_80293080();

extern M2C_UNK lbl_804DB1F0[];

s32 get_normalized_mode__6TLobbyFv(void) {
    if (TLobby__sub_80293080() == 0) {
        return 0;
    }
    if (((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x2C) != 1) && ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x2C) != 0)) {
        M2C_FIELD(lbl_804DB1F0, s32 *, 0x2C) = 0;
    }
    return M2C_FIELD(lbl_804DB1F0, s32 *, 0x2C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80291F14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_if_ready2__6TLobbyFv(void);
s32 check_ready_status__6TLobbyFv(void);
s32 TLobby__sub_80291F9C();
s32 TLobby__sub_80293080();
s32 is_multi_ready__6TLobbyFv();
M2C_UNK create__20TObjChallenge4PRetryFPv(void*);

extern u32 lbl_805D6580;

void draw_if_ready2__6TLobbyFv(void) {
    if ((TLobby__sub_80293080() != 0) && (is_multi_ready__6TLobbyFv() != 0) && ((u32) lbl_805D6580 != 0U)) {
        create__20TObjChallenge4PRetryFPv((void*)lbl_805D6580);
    }
}

extern M2C_UNK lbl_804DB1F0[];

s32 check_ready_status__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80291F9C();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80292268
#include "types.h"

extern "C" {

int TLobby__sub_80292268(void);

int TLobby__sub_80292268(void) { return 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80292678
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_camera_height_if_valid__6TLobbyFf(f32 farg0);
s32 try_set_split_screen__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80293080();

extern M2C_UNK lbl_804DB1F0[];
extern f32 lbl_805DD9D0;
extern f32 lbl_805DD9D4;

s32 set_camera_height_if_valid__6TLobbyFf(f32 farg0) {
    if (TLobby__sub_80293080() == 0) {
        return 0;
    }
    if ((farg0 < lbl_805DD9D0) || (farg0 > lbl_805DD9D4)) {
        return 0;
    }
    M2C_FIELD(&lbl_804DB1F0, f32 *, 4) = farg0;
    return 1;
}

extern s32 lbl_805D5550;

s32 try_set_split_screen__6TLobbyFi(s32 arg0) {
    if (TLobby__sub_80293080() == 0) {
        return 0;
    }
    lbl_805D5550 = arg0;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80292950
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_and_store_layout_index__6TLobbyFi(s32 arg0);
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);

extern s32 lbl_804DB1F0[];

void clamp_and_store_layout_index__6TLobbyFi(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = arg0;
    temp_r3 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if ((var_r31 < 0) || (var_r31 >= temp_r3)) {
        var_r31 = 0;
    }
    lbl_804DB1F0[0] = var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80292D34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_min_challenge_progress__6TLobbyFv(void);
s32 TLobby__sub_80292CA4(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_layout_id__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubStatusDisp__sub_8006F190(M2C_UNK);

s32 calc_min_challenge_progress__6TLobbyFv(void) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r30;

    TWindowSubStatusDisp__sub_8006F190(-1);
    var_r31 = get_layout_id__20TWindowSubStatusDispFv();
    var_r30 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U) {
            temp_r3 = TLobby__sub_80292CA4(var_r30);
            if (var_r31 > temp_r3) {
                var_r31 = temp_r3;
            }
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80292E90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_clamped_time_limit__6TLobbyFv(void);
s32 TLobby__sub_8006F994(s32);
s32 TLobby__sub_80293080();

extern M2C_UNK lbl_804DB1F0[];

s32 get_clamped_time_limit__6TLobbyFv(void) {
    s32 var_r3;

    if (TLobby__sub_80293080() == 0) {
        return 0x12C;
    }
    var_r3 = TLobby__sub_8006F994(M2C_FIELD(lbl_804DB1F0, s32 *, 0x10));
    if ((var_r3 < 0x3C) || (var_r3 > 0xE10)) {
        var_r3 = 0x12C;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80292EE4
#include "types.h"

extern "C" {

s32 is_value_out_of_range__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80292F34(s32 arg0);
int TLobby__sub_80292F5C(void* p);
int get_instance__11TCameraCtrlFv(void*);
s32 get_clamped_time_limit__6TLobbyFv();

s32 is_value_out_of_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < get_clamped_time_limit__6TLobbyFv()) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}
s32 TLobby__sub_80292F34(s32 arg0) {
    if ((arg0 < 0x3C) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}
int TLobby__sub_80292F5C(void* p) { return get_instance__11TCameraCtrlFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80293000
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_retry_selection__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80293080();

extern M2C_UNK lbl_804DB1F0[];

void set_retry_selection__6TLobbyFi(s32 arg0) {
    s32 var_r31;

    var_r31 = arg0;
    if (TLobby__sub_80293080() != 0) {
        if ((var_r31 < 0) || (var_r31 > 1)) {
            var_r31 = 0;
        }
        M2C_FIELD(lbl_804DB1F0, s32 *, 0x24) = var_r31;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80293054
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_global__6TLobbyFv(void);
M2C_UNK queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D6580;

void destroy_global__6TLobbyFv(void) {
    if ((u32) lbl_805D6580 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D6580);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80293080
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80293080(void);

extern u32 lbl_805D6580;
extern s32 lbl_805D658C;

s32 TLobby__sub_80293080(void) {
    if (((s32) lbl_805D658C == 1) || ((u32) lbl_805D6580 != 0U)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802930A8
#include "types.h"

extern "C" {

void TLobby__sub_802930A8(void);

    extern int lbl_805D6588;
    extern int lbl_805D658C;
void TLobby__sub_802930A8(void) { lbl_805D658C = 0; lbl_805D6588 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802930B8
#include "types.h"

extern "C" {

void TLobby__sub_802930B8(void);

    extern int lbl_805D6588;
    extern int lbl_805D658C;
void TLobby__sub_802930B8(void) { lbl_805D658C = 1; lbl_805D6588 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802930C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_challenge4p__6TLobbyFv(void);
void *TChallenge4P__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_su;

void *create_challenge4p__6TLobbyFv(void) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TChallenge4P__ct(o, tl_su);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80293104
#include "types.h"

extern "C" {

int destroy_tombstone__6TLobbyFPv(void* p);
int TLobby__sub_80293124(void* p);
int TObjTombstone__sub_800765B4(void*);
int destroy__13TObjTombstoneFv(void*);

int destroy_tombstone__6TLobbyFPv(void* p) { return destroy__13TObjTombstoneFv(p); }
int TLobby__sub_80293124(void* p) { return TObjTombstone__sub_800765B4(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802933B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_time_window2__6TLobbyFv(void);
M2C_UNK TLobby__sub_802932EC();
M2C_UNK TLobby__sub_80074034(s32);
M2C_UNK create_solo_play_win__6TLobbyFPv(s32);
M2C_UNK create_ch_time_win(s32);

extern M2C_UNK lbl_804DB1F0[];
extern s32 tl_07;

void create_time_window2__6TLobbyFv(void) {
    TLobby__sub_802932EC();
    create_ch_time_win(tl_07);
    TLobby__sub_80074034(tl_07);
    if ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x30) == 0) {
        create_solo_play_win__6TLobbyFPv(tl_07);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80293610
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void maybe_handle_destruction__6TLobbyFPv(void* p);
void update_destruction_countdown__6TLobbyFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1510();
int TLobby__sub_802933FC(void*);
int TLobby__sub_8029359C(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);

void maybe_handle_destruction__6TLobbyFPv(void* p) { if (TLobby__sub_8029359C((void*)(p)) == 0) { TLobby__sub_802933FC(p); } }

void update_destruction_countdown__6TLobbyFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1510() != 1) {
        if (TLobby__sub_8029359C((void*)(arg0)) == 1) {
            queue_destruction__7TObjectFv(arg0);
        }
        maybe_handle_destruction__6TLobbyFPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80299A60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void refresh_lobby_state__6TLobbyFv(void);
s32 init_particle_model__6TLobbyFv(void);
void update_field_state__6TLobbyFv(void);
M2C_UNK create_tasks__6TLobbyFv();
int TLobby__sub_8007BA20(void);
s32 check_disconnect_conditions__6TLobbyFv();
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
M2C_UNK TLobby__sub_80227FB4();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK TObjLight__sub_80133D78();
u32 __nw__7TObjectFUl(M2C_UNK);
int reset_keyboard_control__6TLobbyFv(void);
M2C_UNK create_instance__10TSceneSoraFPv(void*, s32);
M2C_UNK create__15TBoss6EmptyWarpFv();
int fn_802FE9E0(void);
s32 is_split_screen();

void refresh_lobby_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

extern s32 tl_particlemodel;

s32 init_particle_model__6TLobbyFv(void) {
    void* obj;
    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    if ((is_split_screen() == 0) && ((obj = (void*)__nw__7TObjectFUl(0x3C)) != 0)) {
        create_instance__10TSceneSoraFPv(obj, tl_particlemodel);
    }
    create__15TBoss6EmptyWarpFv();
    return 1;
}

void update_field_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_802FE9E0(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80299B90
#include "types.h"

extern "C" {

void update_subsystems__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int fn_802F105C(void);

void update_subsystems__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_802F105C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80299C4C
#include "types.h"

extern "C" {

void update_floor_state_deferred__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_floor_state_deferred__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80299D38
#include "types.h"

extern "C" {

void update_scene_alt__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);

void update_scene_alt__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80299E44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_multi_ready__6TLobbyFv(void);
void close_window_field30__6TLobbyFPv(void* p);
void open_message_window__6TLobbyFPv(void *arg0);
void close_window__6TLobbyFPv(void* p);
void open_giveup_window__6TLobbyFPv(void *arg0);
void send_giveup_to_all_players__6TLobbyFv(void);
void close_giveup_window__6TLobbyFPv(void* a0);
void play_all_players_effect__6TLobbyFPv(void* a0);
void play_effect_all_players__6TLobbyFPv(void*);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK TLobby__sub_8024AC20(int);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
u32 set_window_mode_4__6TLobbyFPvii(M2C_UNK, M2C_UNK *, M2C_UNK);
s32 TLobby__sub_80292F5C();
s32 TLobby__sub_80292F7C();
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
int TWindowCtrl__sub_8024AEAC(void*);
M2C_UNK TWindowCtrl__sub_8024AEF0(int);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(u32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
int TWindow__close(void*);
M2C_UNK set_loss_flag__6TLobbyFPv(u32);
int TObjPlayer__sub_8024ABDC(void*);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(int);

s32 is_multi_ready__6TLobbyFv(void) {
    if ((TLobby__sub_80292F7C() != 0) || (TLobby__sub_80292F5C() <= 1)) {
        return 0;
    }
    return 1;
}

void close_window_field30__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x30) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x30))); *(int*)((char*)p + 0x30) = 0; } }

extern M2C_UNK lbl_804DBE9C[];

void open_message_window__6TLobbyFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close((void*)(M2C_FIELD(arg0, void **, 0x30)));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x30) = set_window_mode_4__6TLobbyFPvii(TWindowSubComCard__sub_8026CBB8(0x39), lbl_804DBE9C, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), TQuestVmDownLoadServer__sub_8006EF6C(0x5E), 1);
    }
}

void close_window__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x2c))); *(int*)((char*)p + 0x2c) = 0; } }

void open_giveup_window__6TLobbyFPv(void *arg0) {
    u32 temp;

    temp = M2C_FIELD(arg0, u32 *, 0x2C);
    if (temp != 0U) {
        TWindow__close((void*)(temp));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = check_room_seq_4__16TAdChrSelASlotGCFii(TWindowSubComCard__sub_8026CBB8(0x3A), 3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5B), 5, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5C), 5, 1);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x2C));
        set_loss_flag__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x2C));
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, u32 *, 0x2C), 0);
    }
}

void send_giveup_to_all_players__6TLobbyFv(void) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int)(var_r31));
        if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFPv() != 0)) {
            send_code_45_1__10TObjPlayerFi(temp_r3);
        }
        TWindowCtrl__sub_8024AEF0(var_r31);
        TLobby__sub_8024AC20(var_r31);
        var_r31 += 1;
    } while (var_r31 < 4);
}

    extern int lbl_805D53A0;
void close_giveup_window__6TLobbyFPv(void* a0) { TWindowCtrl__sub_8024AEAC((void*)(lbl_805D53A0)); play_effect_all_players__6TLobbyFPv((void*)(a0)); }

    extern int lbl_805D53A0;
void play_all_players_effect__6TLobbyFPv(void* a0) { TObjPlayer__sub_8024ABDC((void*)(lbl_805D53A0)); play_effect_all_players__6TLobbyFPv((void*)(a0)); }

void play_effect_all_players__6TLobbyFPv(void*) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    do {
        var_r30 = TPlayerBattleCtrl4P__sub_801BA74C((int)(var_r31));
        if (var_r30 != 0) {
            if (check_player_flag1__6TLobbyFPv() == 0) {
                play_effect_default__10TObjPlayerFii(var_r30, -1);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029A16C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TLobby__sub_8029A16C(void);

extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

u8 TLobby__sub_8029A16C(void) {
    return (u8) (lbl_805D53A0 == TLobby__data_805D53AC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029A184
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void countdown_and_destroy__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_80292FB8();
M2C_UNK close_window_field30__6TLobbyFPv(void *);
M2C_UNK close_window__6TLobbyFPv(void *);
M2C_UNK send_giveup_to_all_players__6TLobbyFv(void *);
M2C_UNK play_all_players_effect__6TLobbyFPv();
M2C_UNK queue_destruction__7TObjectFv(void *);

void countdown_and_destroy__6TLobbyFPv(void *arg0) {
    s32 temp_r0;

    play_all_players_effect__6TLobbyFPv();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    if (temp_r0 <= 0) {
        TLobby__sub_80292FB8();
        send_giveup_to_all_players__6TLobbyFv(arg0);
        close_window__6TLobbyFPv(arg0);
        close_window_field30__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029A304
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_retry_menu_select__6TLobbyFPv(void *arg0);
M2C_UNK set_retry_selection__6TLobbyFi(M2C_UNK);
M2C_UNK open_giveup_window__6TLobbyFPv(void *);
M2C_UNK send_giveup_to_all_players__6TLobbyFv(void *);
M2C_UNK close_giveup_window__6TLobbyFPv();
M2C_UNK play_effect_all_players__6TLobbyFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

extern M2C_UNK lbl_804DBE90[];

void handle_retry_menu_select__6TLobbyFPv(void *arg0) {
    s32 temp_r3;

    close_giveup_window__6TLobbyFPv();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        open_giveup_window__6TLobbyFPv(arg0);
    }
    if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x2C)) != 0) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x2C));
        if (temp_r3 != 2) {
            set_retry_selection__6TLobbyFi(lbl_804DBE90[temp_r3]);
            send_giveup_to_all_players__6TLobbyFv(arg0);
            play_effect_all_players__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x24) = 1;
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029A398
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_challenge_4p_retry__6TLobbyFPv(void *arg0);
M2C_UNK send_giveup_to_all_players__6TLobbyFv(void *);
M2C_UNK close_giveup_window__6TLobbyFPv(void *);
M2C_UNK play_all_players_effect__6TLobbyFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();

extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void update_challenge_4p_retry__6TLobbyFPv(void *arg0) {
    play_all_players_effect__6TLobbyFPv();
    if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        send_giveup_to_all_players__6TLobbyFv(arg0);
        close_giveup_window__6TLobbyFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029B2A4
#include "types.h"

extern "C" {

int TLobby__sub_8029B2A4(void* p);
int TOKeyJungleMain__sub_8029B2C4(void*);

int TLobby__sub_8029B2A4(void* p) { return TOKeyJungleMain__sub_8029B2C4(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029FE94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_global_buffers__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D660C;
extern u32 lbl_805D6610;
extern u32 lbl_805D6614;

void free_global_buffers__6TLobbyFv(void) {
    if ((u32) lbl_805D6614 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6614);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6614);
        lbl_805D6614 = 0U;
    }
    if ((u32) lbl_805D6610 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6610);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6610);
        lbl_805D6610 = 0U;
    }
    if ((u32) lbl_805D660C != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D660C, 1);
        lbl_805D660C = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A018C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_chr_select_slots__6TLobbyFv(void);
M2C_UNK TLobby__sub_8001FE7C(M2C_UNK, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D6600;
extern u32 lbl_805D6604;
extern u32 lbl_805D6608;

void free_chr_select_slots__6TLobbyFv(void) {
    if ((u32) lbl_805D6608 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6608);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6608);
        lbl_805D6608 = 0U;
    }
    if ((u32) lbl_805D6604 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6604);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6604);
        lbl_805D6604 = 0U;
    }
    if ((u32) lbl_805D6600 != 0U) {
        TLobby__sub_8001FE7C(lbl_805D6600, 1);
        lbl_805D6600 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A0F3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_dialog_global__6TLobbyFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6630;

void free_dialog_global__6TLobbyFv(void) {
    if ((u32) lbl_805D6630 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6630);
        lbl_805D6630 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A1918
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802A1918(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6640;

void TLobby__sub_802A1918(void) {
    if ((u32) lbl_805D6640 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6640);
        lbl_805D6640 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A5120
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_dialing_gc__6TLobbyFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6668;

void free_dialing_gc__6TLobbyFv(void) {
    if ((u32) lbl_805D6668 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6668);
        lbl_805D6668 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A6080
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802A5C7C(void *);
s32 fn_802A5CB8(void *);
s32 fn_802A5CC4(void *, s32);
s32 alloc_buffer__15TWindowSnapShotFPv(void *);
s32 open_stream__15TWindowSnapShotFPvi(void *, s32);
s32 init__15TWindowSnapShotFPvi();
int TObjChip__vt8(void*, void*);
int TWindowSnapShot__sub_802A5D28(void*);
int reset__15TWindowSnapShotFPv(void*);
int get_width__15TWindowSnapShotFv(void);
void set_mode__15TWindowSnapShotFPvi(void* p, s32 v);
s32 get_buffer_size__15TWindowSnapShotFPv(void* p);
void fn_802A6070(void* p, s32 v);
void fn_802A6078(void* p, s32 v);
int get_max_players__6TLobbyFv(void);

int get_max_players__6TLobbyFv(void) { return 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7290
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TLobby__sub_802A7260(void* a0 = 0);
int TLobby__sub_802A7278(void* a0 = 0);

void TLobby__sub_802A7318(void* p);
void TObjSeabedSuisoBrakable__vt17(void);

s32 get_valid_child__6TLobbyFPv(void *arg0) {
    if (TLobby__sub_802A7260((void*)(M2C_FIELD(arg0, s32 *, 4))) != 0) {
        return M2C_FIELD(arg0, s32 *, 4);
    }
    return 0;
}
s32 validate_handle__6TLobbyFPv(s32 *arg0) {
    if (TLobby__sub_802A7278((void*)(*arg0)) != 0) {
        return *arg0;
    }
    return 0;
}
void TLobby__sub_802A7318(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7328
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A7328 { char pad[0x8]; };
struct VObj_802A7328 : Base_802A7328 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual void m34();  virtual void m35();
    virtual void m36();  virtual void m37();  virtual void m38();  virtual void m39();
    virtual void m40();  virtual void m41();  virtual void m42();  virtual void m43();
    virtual void m44();  virtual void m45();  virtual void m46();  virtual void m47();
    virtual void m48();  virtual void m49();  virtual void m50();  virtual void m51();
    virtual void m52();  virtual void m53();  virtual void m54();  virtual void m55();
    virtual void m56();  virtual void m57();  virtual void m58();  virtual void m59();
    virtual void m60();  virtual void m61();  virtual void m62();  virtual void m63();
    virtual void m64();  virtual void m65();  virtual void m66();  virtual void m67();
    virtual void m68();  virtual void m69();  virtual void m70();  virtual void m71();
    virtual void m72();  virtual s32 m73();
};

extern "C" {

s32 calc_cell_offset__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);

extern s32 lbl_805D6680;

s32 calc_cell_offset__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    struct VObj_802A7328 *o = (struct VObj_802A7328 *)arg0;
    return lbl_805D6680 + ((arg2 + (arg1 * o->m73())) << 0xE);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A752C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A752C { char pad[0x8]; };
struct VObj_802A752C : Base_802A752C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
};

extern "C" {

s32 handle_message__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TLobby__sub_802A7848(void *, s32);
s32 TLobby__sub_802A7868(void *, s32, s32);
s32 TLobby__sub_802A7994(void *, s32, s32, s32);
M2C_UNK forward_801C210C__10TObjPlayerFPv(void *, s32);

s32 handle_message__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (TLobby__sub_802A7868(arg0, arg2, arg3) != 0) {
        return 1;
    }
    forward_801C210C__10TObjPlayerFPv(arg0, arg2);
    TLobby__sub_802A7848(arg0, arg3);
    temp_r3 = TLobby__sub_802A7994(arg0, arg1, arg2, arg3);
    if (temp_r3 != 0) {
        ((VObj_802A752C *)arg0)->m12();
    }
    return temp_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7640
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802A7640(void);
void free__11TOBoss4RockFUi(void*);

extern u32 lbl_805D6680;

void TLobby__sub_802A7640(void) {
    if ((u32) lbl_805D6680 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6680);
        lbl_805D6680 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7674
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_boss4rock_buffer__6TLobbyFv(void);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);

extern s32 lbl_805D6680;

void alloc_boss4rock_buffer__6TLobbyFv(void) {
    lbl_805D6680 = alloc_buffer__11TOBoss4RockFPv(0x100000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A769C
#include "types.h"

extern "C" {

void TLobby__sub_802A769C(void);
void enable_and_refresh__6TLobbyFv(void);
int TLobby__sub_802A7640(void);
int alloc_boss4rock_buffer__6TLobbyFv(void);
int set_photon_chair_flag__6TLobbyFi(int);

void TLobby__sub_802A769C(void) { TLobby__sub_802A7640(); set_photon_chair_flag__6TLobbyFi(0); }
void enable_and_refresh__6TLobbyFv(void) { set_photon_chair_flag__6TLobbyFi(1); alloc_boss4rock_buffer__6TLobbyFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A76EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__6TLobbyFPvs(void *arg0, s16 arg1);
M2C_UNK TLobby__sub_802A7AF8(M2C_UNK, M2C_UNK *);
M2C_UNK free__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804DDBF0[];

void *__dt__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804DDBF0;
        TLobby__sub_802A7AF8((M2C_UNK)arg0, 0);
        if (arg1 > 0) {
            free__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7744
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *ct_variant__6TLobbyFPv(void *arg0);
void* TLobby__sub_802A7780(void* p);
void* TLobby__sub_802A7788(void* p);
int TLobby__sub_802A7790(void);
void TLobby__sub_802A7B50(void *);

extern M2C_UNK lbl_804DDBF0[];

void *ct_variant__6TLobbyFPv(void *arg0) {
    TLobby__sub_802A7B50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x8) = lbl_804DDBF0;
    return arg0;
}

void* TLobby__sub_802A7780(void* p) { return (char*)p + 0xc; }
void* TLobby__sub_802A7788(void* p) { return (char*)p + 0xc; }

    extern int lbl_805D6680;
int TLobby__sub_802A7790(void) {  return lbl_805D6680; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7848
#include "types.h"

extern "C" {

int TLobby__sub_802A7848(void* p);
int TLobby__sub_802A7868(void* p);
void set_photon_chair_flag__6TLobbyFi(int a0);
int fn_802A7238(void*);
int set_field_4__6TLobbyFPvi(void*);

int TLobby__sub_802A7848(void* p) { return set_field_4__6TLobbyFPvi(p); }
int TLobby__sub_802A7868(void* p) { return fn_802A7238(p); }

    extern int lbl_805D6688;
void set_photon_chair_flag__6TLobbyFi(int a0) { lbl_805D6688 = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7890
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field_4__6TLobbyFPvi(void* p, s32 v);
s32 get_hold_effect_size_by_type__6TLobbyFv(void);
s32 send_packet__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 get_hold_effect_count__10TObjPlayerFv(void);
s32 write_packet_header__6TLobbyFPviiUi(s32, s32, s32, M2C_UNK);
M2C_UNK send_type2_event__6TLobbyFiii(s32, s32, s32);
M2C_UNK free__11TOBoss4RockFUi(s32);

void set_field_4__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
s32 get_hold_effect_size_by_type__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_hold_effect_count__10TObjPlayerFv();
    switch (temp_r3) {
    case 0:
        return 0x38;
    case 1:
        return 0x10;
    default:
        return 0;
    }
}

struct _VBase802A78E4_802a78e4 { char pad[8]; };
struct _VObj802A78E4_802a78e4 : _VBase802A78E4_802a78e4 { virtual s32 m0(s32, s32); };

s32 send_packet__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r3;
    s32 temp_r0;

    temp_r31_2 = (arg3 + 0x1F) & 0xFFFFFFE0;
    temp_r3 = alloc_buffer__11TOBoss4RockFPv(temp_r31_2);
    if (temp_r3 == 0) {
        return 0;
    }
    send_type2_event__6TLobbyFiii(arg4, temp_r3, temp_r31_2);
    temp_r0 = ((_VObj802A78E4_802a78e4*)arg0)->m0(arg1, arg2);
    temp_r31 = write_packet_header__6TLobbyFPviiUi(temp_r3, arg3, temp_r0, 0x4000);
    free__11TOBoss4RockFUi(temp_r3);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7AE4
#include "types.h"

extern "C" {

void TLobby__sub_802A7AE4(void* p, void* q);

void TLobby__sub_802A7AE4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7B8C
#include "types.h"

extern "C" {

int TLobby__sub_802A7B8C(void);
int TLobby__sub_802A7B94(void);
int TLobby__sub_802A7B9C(void);
int TLobby__sub_802A7BA4(void);
void TLobby__sub_802A7BAC(void);
int TLobby__sub_802A7BB0(void);
s32 get_param__6TLobbyFPv(void* p);
s32 get_field_04__6TLobbyFPv(void* p);
void TLobby__sub_802A7BC8(void* p);

int TLobby__sub_802A7B8C(void) { return 0; }
int TLobby__sub_802A7B94(void) { return 0; }
int TLobby__sub_802A7B9C(void) { return 0; }
int TLobby__sub_802A7BA4(void) { return 0; }
void TLobby__sub_802A7BAC(void) {  }
int TLobby__sub_802A7BB0(void) { return 0; }
s32 get_param__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_04__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TLobby__sub_802A7BC8(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7BD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802A7BD8(void);
void free__11TOBoss4RockFUi(void*);

extern u32 lbl_805D6694;

void TLobby__sub_802A7BD8(void) {
    if ((u32) lbl_805D6694 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6694);
        lbl_805D6694 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7CBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_slot_position__6TLobbyFii(s32 arg0, s32 arg1);
void send_type2_event__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_8001D4D8(M2C_UNK, s32, s32, s32, s32);
s32 fn_802A5B2C(s32);
s32 fn_802A5B50(s32, s32);
s32 fn_802A5BB4(s32);
M2C_UNK fn_802A6070(s32, s32);
M2C_UNK fn_802A6078(s32, s32);

extern s32 lbl_805D6694;
extern s32 lbl_805D669C;

void set_slot_position__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = fn_802A5BB4(lbl_805D6694);
    temp_r31 = lbl_805D6694 + temp_r31;
    temp_r31 = temp_r31 + arg0 * 8;
    fn_802A6078(arg1, lbl_805D669C + fn_802A5B50(temp_r31, lbl_805D6694));
    fn_802A6070(arg1, fn_802A5B2C(temp_r31));
}

void send_type2_event__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    TLobby__sub_8001D4D8(2, arg0, arg1, arg2, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AF198
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802AF198(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6700;

void TLobby__sub_802AF198(void) {
    if ((u32) lbl_805D6700 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6700);
        lbl_805D6700 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AF5FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_mist_ctrl__6TLobbyFPvPv(void *arg0, void *arg1);
void *TObjMistCtrl__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_mist_ctrl__6TLobbyFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = TObjMistCtrl__ct(o, arg0, arg1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C78EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802C78EC(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D67F0;

void TLobby__sub_802C78EC(void) {
    if ((u32) lbl_805D67F0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D67F0);
        lbl_805D67F0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D1EFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_trade_field_4__6TLobbyFii(s32 arg0, s32 arg1);
void *get_trade_obj_ptr__6TLobbyFPv(s32);

void set_trade_field_4__6TLobbyFii(s32 arg0, s32 arg1) {
    M2C_FIELD(get_trade_obj_ptr__6TLobbyFPv(arg0 + 0xF8), s32 *, 4) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2020
#include "types.h"

extern "C" {

void update_both_halves__6TLobbyFPv(void* p);
int TLobby__sub_802D2358(void*);

void update_both_halves__6TLobbyFPv(void* p) { TLobby__sub_802D2358(p); TLobby__sub_802D2358((char*)p + 0xf8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2054
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_stale_entries__6TLobbyFPv(u8 *arg0);
u32 TLobby__sub_80101AB0();

void clear_stale_entries__6TLobbyFPv(u8 *arg0) {
    u8 *var_r29;
    s32 var_r28;

    var_r29 = arg0;
    var_r28 = 0;
    do {
        if (((u32) (M2C_FIELD(var_r29, s32 *, 0) + 0x10000) != 0xFFFFU) && ((TLobby__sub_80101AB0() == 0U) || ((s32) M2C_FIELD(var_r29, s32 *, 4) <= 0))) {
            M2C_FIELD(var_r29, s32 *, 0) = -1;
            M2C_FIELD(var_r29, s32 *, 4) = 0;
        }
        var_r28 += 1;
        var_r29 += 8;
    } while (var_r28 < 0x1E);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D22F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TLobby__sub_802D2334(void);
void TLobby__sub_802D22F0(void* p, void* q);
void* get_trade_obj_ptr__6TLobbyFPv(void* p);

void TLobby__sub_802D22F0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void* get_trade_obj_ptr__6TLobbyFPv(void* p) { return (char*)p + 0xf0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D237C
#include "types.h"

extern "C" {

void prepare_trade_packet__6TLobbyFPv(void* a0);
int byteswap_trade_packet__6TLobbyFPv(void);

    extern int lbl_805D53A0;
void prepare_trade_packet__6TLobbyFPv(void* a0) { *(short*)((char*)a0 + 0x2) = lbl_805D53A0; byteswap_trade_packet__6TLobbyFPv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2B64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_reset_choice__6TLobbyFi(s32 arg0);
M2C_UNK reset__6TLobbyFi();
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);

extern u8 TLobby__data_805D688B;

void handle_reset_choice__6TLobbyFi(s32 arg0) {
    if ((s8) TLobby__data_805D688B != 0) {
        switch (arg0) {
        case 0:
            get_message_10__20TWindowSubStatusDispFPv(0xEC);
            reset__6TLobbyFi();
            return;
        case 1:
            get_message_10__20TWindowSubStatusDispFPv(0xEB);
            reset__6TLobbyFi();
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2CE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag400__6TLobbyFv(void);
void check_flags_and_proceed__6TLobbyFv(void);
M2C_UNK TLobby__sub_802D2D64();
M2C_UNK TLobby__sub_801DA2A4(s32);

extern s32 TLobby__data_805D5580;
extern u16 lbl_805D6888;

void clear_flag400__6TLobbyFv(void) {
    if (lbl_805D6888 & 0x400) {
        TLobby__sub_801DA2A4(TLobby__data_805D5580);
        lbl_805D6888 &= 0xFFFFFBFF;
    }
}

extern u32 TLobby__data_805D6894;
extern u32 TLobby__data_805D6898;
extern u32 TLobby__data_805D689C;

void check_flags_and_proceed__6TLobbyFv(void) {
    if (((u32) TLobby__data_805D6894 == 0U) && ((u32) TLobby__data_805D6898 == 0U) && ((u32) TLobby__data_805D689C == 0U)) {
        TLobby__sub_802D2D64();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2DCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_sub_status_disp__6TLobbyFi(s32 arg0);
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK TLobby__sub_8001DC24();
M2C_UNK refresh_player_status__6TLobbyFv(s32);
M2C_UNK TWindowSubStatusDisp__sub_80229080();

extern s32 lbl_805D53A0;

void update_sub_status_disp__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D53A0 == arg0) {
        get_message_10__20TWindowSubStatusDispFPv(0xF0);
        return;
    }
    TWindowSubStatusDisp__sub_802290E0();
    refresh_player_status__6TLobbyFv(arg0);
    get_message_10__20TWindowSubStatusDispFPv(0xEF);
    TWindowSubStatusDisp__sub_80229080();
    TLobby__sub_8001DC24();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2E28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_802D2E28_0x30 {
    char pad[0x18];
    virtual void vm0();
    virtual void vm1();
    virtual void vm2();
    virtual void vm3();
    virtual void vm4();
    virtual void vm5();
    virtual void vm6();
    virtual void vm7();
    virtual void vm8();
    virtual void vm9();
    virtual void vma();
};

extern "C" {

s32 show_event_message__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
s32 TLobby__sub_8001DC24();
void *TLobby__sub_80101AB0(s32);
M2C_UNK refresh_player_status__6TLobbyFv(s32);
M2C_UNK TWindowSubStatusDisp__sub_80229080();

extern s32 lbl_805D53A0;

s32 show_event_message__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    switch (arg1) {
    case 0:
        return 0;
    case 1:
        if (arg0 == (s32) lbl_805D53A0) {
            return get_message_10__20TWindowSubStatusDispFPv(0xF4);
        }
        TWindowSubStatusDisp__sub_802290E0();
        refresh_player_status__6TLobbyFv(arg0);
        get_message_10__20TWindowSubStatusDispFPv(0xEA);
        TWindowSubStatusDisp__sub_80229080();
        return TLobby__sub_8001DC24();
    case 2:
        temp_r3 = TLobby__sub_80101AB0(arg2);
        if (temp_r3 == NULL) {
            return 0;
        }
        TWindowSubStatusDisp__sub_802290E0();
        if (arg0 == (s32) lbl_805D53A0) {
            get_message_10__20TWindowSubStatusDispFPv(0xF3);
            TWindowSubStatusDisp__sub_80229080();
        } else {
            refresh_player_status__6TLobbyFv(arg0);
            get_message_10__20TWindowSubStatusDispFPv(0xE8);
            TWindowSubStatusDisp__sub_80229080();
        }
        ((VObj_802D2E28_0x30 *)temp_r3)->vma();
        TWindowSubStatusDisp__sub_80229080();
        get_message_10__20TWindowSubStatusDispFPv(0xE9);
        TWindowSubStatusDisp__sub_80229080();
        return TLobby__sub_8001DC24();
    case 3:
        if (arg0 == (s32) lbl_805D53A0) {
            return get_message_10__20TWindowSubStatusDispFPv(0xF2);
        }
        TWindowSubStatusDisp__sub_802290E0();
        refresh_player_status__6TLobbyFv(arg0);
        get_message_10__20TWindowSubStatusDispFPv(0xE7);
        TWindowSubStatusDisp__sub_80229080();
        return TLobby__sub_8001DC24();
    case 4:
        return get_message_10__20TWindowSubStatusDispFPv(0xEE);
    default:
        return 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2F7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__6TLobbyFv(void);
s32 is_trade_active();
M2C_UNK reset__15TLobby_802D2F7CFPv(s32);
M2C_UNK fn_80330A40(s32);
M2C_UNK reset_impl__15TLobby_802D2F7CFPv(s32);

extern u16 lbl_805D6888;
extern s8 TLobby__data_805D688A;
extern s8 TLobby__data_805D688B;
extern s32 TLobby__data_805D688C;
extern s32 lbl_805D6890;
extern const u32 TLobby__data_805D6894;
extern const u32 TLobby__data_805D6898;
extern const u32 TLobby__data_805D689C;

void reset__6TLobbyFv(void) {
    if (is_trade_active() == 0) {
        TLobby__data_805D688A = 4;
        TLobby__data_805D688B = 0;
        TLobby__data_805D688C = 0;
        lbl_805D6890 = 0;
        lbl_805D6888 &= 0xFFFFF80F;
        if ((u32) TLobby__data_805D689C != 0U) {
            reset_impl__15TLobby_802D2F7CFPv(TLobby__data_805D689C);
        }
        if ((u32) TLobby__data_805D6898 != 0U) {
            fn_80330A40(TLobby__data_805D6898);
        }
        if ((u32) TLobby__data_805D6894 != 0U) {
            reset__15TLobby_802D2F7CFPv(TLobby__data_805D6894);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D2FF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__6TLobbyFi(s32 arg0);
s32 is_trade_active();
M2C_UNK TLobby__sub_8024AAA0(s32, M2C_UNK);
M2C_UNK TLobby_802D2F7C__sub_80339910(u32, s32);

extern s32 lbl_805D53A0;
extern u16 lbl_805D6888;
extern s8 TLobby__data_805D688A;
extern s8 TLobby__data_805D688B;
extern s32 TLobby__data_805D688C;
extern s32 lbl_805D6890;
extern u32 TLobby__data_805D689C;

void reset__6TLobbyFi(s32 arg0) {
    if (is_trade_active() == 0) {
        TLobby__data_805D688B = 0;
        TLobby__data_805D688A = 4;
        TLobby__data_805D688C = 0;
        lbl_805D6890 = 0;
        lbl_805D6888 &= 0xFFFFF80F;
        TLobby__sub_8024AAA0(lbl_805D53A0, 0x1E);
        u32 temp_r3 = TLobby__data_805D689C;
        if (temp_r3 != 0U) {
            TLobby_802D2F7C__sub_80339910(temp_r3, arg0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D3380
#include "types.h"

extern "C" {

void TLobby__sub_802D3380(void);

void TLobby__sub_802D3380(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D344C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_music_state__6TLobbyFPv(void *arg0);
void update_flag_by_state__6TLobbyFPv(void *arg0);
M2C_UNK notify_child_if_present__19TWindowSubTradeMainFPvi(u32, s32);

extern u16 lbl_805D6888;
extern u32 TLobby__data_805D6898;

void update_music_state__6TLobbyFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 0:
        lbl_805D6888 |= 0x200;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 2);
        }
        break;
    case 4:
        lbl_805D6888 &= 0xFFFFFDFF;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
        }
        break;
    }
}

extern u16 lbl_805D6888;
extern u32 TLobby__data_805D6898;

void update_flag_by_state__6TLobbyFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 0:
        lbl_805D6888 |= 0x40;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
        }
        break;
    case 4:
        lbl_805D6888 &= 0xFFFFFFBF;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 0);
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D37C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_battle_mode__6TLobbyFv(void);
M2C_UNK TLobby__sub_802D2D64();
M2C_UNK TLobby__sub_802D3070(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowSubTradeMain__sub_802D3924(s32);

extern s32 lbl_805D53A0;
extern u8 TLobby__data_805D688B;

void update_battle_mode__6TLobbyFv(void) {
    if ((s8) TLobby__data_805D688B != 0) {
        if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) {
            TLobby__sub_802D2D64();
            return;
        }
        if (TWindowSubTradeMain__sub_802D3924(lbl_805D53A0) == 0) {
            TLobby__sub_802D3070(lbl_805D53A0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D388C
#include "types.h"

extern "C" {

void close_trade_request__6TLobbyFv(void);
int TWindowTradeRequest__sub_80249FCC(void);

    extern short lbl_805D6888;
void close_trade_request__6TLobbyFv(void) { lbl_805D6888 = 0; TWindowTradeRequest__sub_80249FCC(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D3AA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802D3AA8(void);

extern u16 lbl_805D63FC;

void TLobby__sub_802D3AA8(void) {
    lbl_805D63FC |= 8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D71E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_npc_enemy__6TLobbyFsiiiff(s16 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1);
u8 *TObjNpcEnemy__sub_802D732C();
M2C_UNK copy_position_data(void *, s32);

void spawn_npc_enemy__6TLobbyFsiiiff(s16 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1) {
    u8 *temp_r3;

    temp_r3 = TObjNpcEnemy__sub_802D732C();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0) = arg0;
        M2C_FIELD(temp_r3, s16 *, 2) = 1;
        M2C_FIELD(temp_r3, f32 *, 4) = farg1;
        M2C_FIELD(temp_r3, s32 *, 8) = arg1;
        M2C_FIELD(temp_r3, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_r3, f32 *, 0x10) = farg0;
        copy_position_data(temp_r3 + 0x14, arg3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D79EC
#include "types.h"

extern "C" {

int forward_npc_enemy__6TLobbyFPv(void* p);
int TLobby__sub_802D7A0C(void* p);
int TObjNpcEnemy__sub_802D73F8(void*);

int forward_npc_enemy__6TLobbyFPv(void* p) { return TObjNpcEnemy__sub_802D73F8(p); }
int TLobby__sub_802D7A0C(void* p) { return TObjNpcEnemy__sub_802D73F8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E03C8
#include "types.h"

extern "C" {

unsigned char get_trade_mode__6TLobbyFv(void);

    extern unsigned char TLobby__data_805D688A;
unsigned char get_trade_mode__6TLobbyFv(void) {  return TLobby__data_805D688A; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80300098
#include "types.h"

extern "C" {

void set_ad_field__6TLobbyFPvi(void* p, s32 v);
void TLobby__sub_803000A0(void);
int set_player_count__6TLobbyFi(int);
int TLobby__sub_802930A8(void);

void set_ad_field__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xa4) = v; }
void TLobby__sub_803000A0(void) { TLobby__sub_802930A8(); set_player_count__6TLobbyFi(0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030A6A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_online_ready__6TLobbyFv(void);
s32 is_camera_ctrl_active__6TLobbyFv(void);
s32 is_ready__6TLobbyFv(void);
s32 TLobby__sub_8030A770(void);
s32 get_instance__11TCameraCtrlFv();
s32 TCameraCtrl__sub_8006B368();
s32 get_instance__6TLobbyFv();
s32 TLobby__sub_8030A7B0();
s32 get_online_ready_flag__6TLobbyFv();
s32 is_not_split_screen__13TRaderMapCoreFv();

extern s32 lbl_805D5550;

s32 is_online_ready__6TLobbyFv(void) {
    if (((s32) lbl_805D5550 == 3) && (get_instance__6TLobbyFv() == 0)) {
        return 1;
    }
    if (get_online_ready_flag__6TLobbyFv() != 0) {
        return 1;
    }
    return 0;
}

s32 is_camera_ctrl_active__6TLobbyFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return get_instance__11TCameraCtrlFv();
    }
    return 1;
}

s32 is_ready__6TLobbyFv(void) {
    if ((TLobby__sub_8030A7B0() == 2) && (TCameraCtrl__sub_8006B368() == 1)) {
        return 1;
    }
    return 0;
}

s32 TLobby__sub_8030A770(void) {
    if ((TLobby__sub_8030A7B0() == 1) && (TCameraCtrl__sub_8006B368() == 1)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030A834
#include "types.h"

extern "C" {

int get_online_ready_flag__6TLobbyFv(void);

    extern int lbl_805D5FDC;
int get_online_ready_flag__6TLobbyFv(void) {  return lbl_805D5FDC; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803255F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_char_select_singleton__6TLobbyFv(void);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D6C50;

void free_char_select_singleton__6TLobbyFv(void) {
    if ((u32) lbl_805D6C50 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6C50);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6C50);
        lbl_805D6C50 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80328F7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80328F7C { char pad[0x8]; };
struct VObj_80328F7C : Base_80328F7C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual s32 m73();
};
struct Base_80329044 { char pad[0x8]; };
struct VObj_80329044 : Base_80329044 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75(s32);
};

extern "C" {

s32 get_cell_address__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
s32 is_valid_state__6TLobbyFPvi(void *unused, s32 arg1);
void check_valid_state__6TLobbyFi(s32 arg0);
void set_player_handle_valid__6TLobbyFPv(void *arg0);
s32 is_handle_valid__10TObjPlayerFPv();

extern s32 lbl_805D6C80;

s32 get_cell_address__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    struct VObj_80328F7C *o = (struct VObj_80328F7C *)arg0;
    return lbl_805D6C80 + ((arg2 + (arg1 * o->m73())) << 0xE);
}

s32 is_valid_state__6TLobbyFPvi(void *unused, s32 arg1) {
    switch (arg1) {
    case 0:
    case 3:
        return 0;
    case 1:
    case 2:
    case 4:
    case 5:
        return 1;
    default:
        return 0;
    }
}

void check_valid_state__6TLobbyFi(s32 arg0) {
    is_valid_state__6TLobbyFPvi((void *)(arg0), (s32)(is_handle_valid__10TObjPlayerFPv()));
}

void set_player_handle_valid__6TLobbyFPv(void *arg0) {
    struct VObj_80329044 *o = (struct VObj_80329044 *)arg0;
    o->m75(is_handle_valid__10TObjPlayerFPv());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803291C8
#include "types.h"

extern "C" {

int TLobby__sub_803291C8(void);
s32 update_state_6c84__6TLobbyFi(s32 arg0);
s32 TLobby__sub_802A7994(s32, s32, s32, s32);
s32 apply_state_6c84__6TLobbyFv();
s32 apply_player_flag_2__6TLobbyFv();
s32 init_object_flag__6TLobbyFv();
s32 set_flag_1_at_6c84__6TLobbyFv();

int TLobby__sub_803291C8(void) { return 1; }
s32 update_state_6c84__6TLobbyFi(s32 arg0) {
    if (set_flag_1_at_6c84__6TLobbyFv() == 0) {
        init_object_flag__6TLobbyFv();
        TLobby__sub_802A7994(arg0, 0, 0, 0);
    }
    if (apply_player_flag_2__6TLobbyFv() == 0) {
        apply_state_6c84__6TLobbyFv();
        TLobby__sub_802A7994(arg0, 1, 1, 0);
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80329244
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_singleton_805D6C80__6TLobbyFv(void);
void free__11TOBoss4RockFUi(void*);

extern u32 lbl_805D6C80;

void free_singleton_805D6C80__6TLobbyFv(void) {
    if ((u32) lbl_805D6C80 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6C80);
        lbl_805D6C80 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80329278
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_work_buffer__6TLobbyFv(void);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);

extern s32 lbl_805D6C80;

void alloc_work_buffer__6TLobbyFv(void) {
    lbl_805D6C80 = alloc_buffer__11TOBoss4RockFPv(0x1C0000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803292A0
#include "types.h"

extern "C" {

void update_photon_chairs__6TLobbyFv(void);
void update_photon_chair__6TLobbyFv(void);
int set_photon_chair_flag__6TLobbyFi(int);
int free_static_model__15TPlyPhotonChairFv(void);
s32 TPlyPhotonChair__sub_8035B2DC();
int free_singleton_805D6C80__6TLobbyFv(void);
u32 alloc_work_buffer__6TLobbyFv();
int clear_flag_at_6c84__6TLobbyFv(void);

void update_photon_chairs__6TLobbyFv(void) { free_static_model__15TPlyPhotonChairFv(); free_singleton_805D6C80__6TLobbyFv(); set_photon_chair_flag__6TLobbyFi(0); clear_flag_at_6c84__6TLobbyFv(); }
void update_photon_chair__6TLobbyFv(void) {
    set_photon_chair_flag__6TLobbyFi(0);
    if (alloc_work_buffer__6TLobbyFv() == 0U) {
        set_photon_chair_flag__6TLobbyFi(1);
        return;
    }
    TPlyPhotonChair__sub_8035B2DC();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80329310
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_80329310(void *arg0, s16 arg1);
M2C_UNK TLobby__sub_802A7AF8(void *, M2C_UNK);
M2C_UNK free__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804ED7D0[];

void *TLobby__sub_80329310(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804ED7D0;
        TLobby__sub_802A7AF8(arg0, 0);
        if (arg1 > 0) {
            free__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80329368
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *init_vtable8__6TLobbyFPv(void *arg0);
void init_player_forward__6TLobbyFv(void);
void TLobby__sub_802A7B50(void *);
M2C_UNK init_forward__10TObjPlayerFPv(M2C_UNK *);

extern M2C_UNK lbl_804ED7D0[];

void *init_vtable8__6TLobbyFPv(void *arg0) {
    TLobby__sub_802A7B50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x8) = lbl_804ED7D0;
    return arg0;
}

extern M2C_UNK lbl_805D6C84;

void init_player_forward__6TLobbyFv(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D6C84);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803293C8
#include "types.h"

extern "C" {

int is_invalid_state__6TLobbyFPv(void* p);
int TLobby__sub_803293F0(void* p);
int is_valid_state__6TLobbyFPvi(void*);
int check_valid_state__6TLobbyFi(void*);

int is_invalid_state__6TLobbyFPv(void* p) { return (is_valid_state__6TLobbyFPvi(p)) == 0; }
int TLobby__sub_803293F0(void* p) { return (check_valid_state__6TLobbyFi(p)) == 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80329470
#include "types.h"

extern "C" {

int TLobby__sub_80329470(void);

    extern int lbl_805D6C80;
int TLobby__sub_80329470(void) {  return lbl_805D6C80; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80329600
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_state_6c84__6TLobbyFv(void);
void apply_player_flag_2__6TLobbyFv(void);
void init_object_flag__6TLobbyFv(void);
void set_flag_1_at_6c84__6TLobbyFv(void);
void clear_flag_at_6c84__6TLobbyFv(void);
M2C_UNK set_flags__10TObjPlayerFPvUi(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK clear_id__10TObjPlayerFPv(M2C_UNK *);

extern M2C_UNK lbl_805D6C84;

void apply_state_6c84__6TLobbyFv(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D6C84, 2);
}

extern M2C_UNK lbl_805D6C84;

void apply_player_flag_2__6TLobbyFv(void) {
    TObjPlayer__sub_8001BEF8(&lbl_805D6C84, 2);
}

extern M2C_UNK lbl_805D6C84;

void init_object_flag__6TLobbyFv(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D6C84, 1);
}

extern M2C_UNK lbl_805D6C84;

void set_flag_1_at_6c84__6TLobbyFv(void) {
    TObjPlayer__sub_8001BEF8(&lbl_805D6C84, 1);
}

extern M2C_UNK lbl_805D6C84;

void clear_flag_at_6c84__6TLobbyFv(void) {
    clear_id__10TObjPlayerFPv(&lbl_805D6C84);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032BD20
#include "types.h"

extern "C" {

void run_locked_update__6TLobbyFPv(void* p);
int TAdEnterPasswordGC__sub_8032BBF0(void*);
int TAdEnterPasswordGC__sub_8032BC1C(void*);

void run_locked_update__6TLobbyFPv(void* p) { *(int*)((char*)p + 0x1c) = 1; TAdEnterPasswordGC__sub_8032BC1C(p); *(int*)((char*)p + 0x1c) = 0; TAdEnterPasswordGC__sub_8032BBF0(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032BE30
#include "types.h"

extern "C" {

void TLobby__sub_8032BE30(void);
void TLobby__sub_8032BE3C(void);

    extern int lbl_805D6CB8;
void TLobby__sub_8032BE30(void) { lbl_805D6CB8 = 0; }

    extern int lbl_805D6CB8;
void TLobby__sub_8032BE3C(void) { lbl_805D6CB8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032C6AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_singleton__6TLobbyFv(void);
void init_graph__6TLobbyFv(void);
M2C_UNK set_graph_param__8TDLGraphFPvi(M2C_UNK, M2C_UNK);
u32 create__8TDLGraphFv();
void queue_destruction__7TObjectFv(void*);

extern M2C_UNK TLobby__data_805434A8[];
extern u32 TLobby__data_805D6CC4;

void destroy_singleton__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6CC4 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D6CC4);
        TLobby__data_805D6CC4 = 0U;
    }
    M2C_FIELD(TLobby__data_805434A8, s8 *, 7) = 0;
}

extern u32 TLobby__data_805D6CC4;

void init_graph__6TLobbyFv(void) {
    u32 temp_r3;

    if ((u32) TLobby__data_805D6CC4 == 0U) {
        temp_r3 = create__8TDLGraphFv();
        TLobby__data_805D6CC4 = temp_r3;
        if (temp_r3 != 0U) {
            set_graph_param__8TDLGraphFPvi(temp_r3, 2);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032C730
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_buffer__6TLobbyFv(void);
void xfree__FPv(void*);

extern u32 TLobby__data_805D6CC0;
extern s32 TLobby__data_805D6CC8;

void free_buffer__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6CC0 != 0U) {
        xfree__FPv((void*)TLobby__data_805D6CC0);
        TLobby__data_805D6CC0 = 0U;
    }
    TLobby__data_805D6CC8 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032C76C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_buffer__6TLobbyFv(void);
s32 xmalloc__FUl(M2C_UNK);

extern s32 TLobby__data_805D6CC0;
extern s32 TLobby__data_805D6CC8;

void alloc_buffer__6TLobbyFv(void) {
    TLobby__data_805D6CC0 = 0;
    TLobby__data_805D6CC8 = 0;
    TLobby__data_805D6CC0 = xmalloc__FUl(0x40000);
    TLobby__data_805D6CC8 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032C854
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_data__6TLobbyFi(s32 arg0);
void update_alloc_size__6TLobbyFv(void);
u32 update_lobby_scene__6TSceneFPv();
M2C_UNK TLobby__sub_800F9DF4(s32, u32);
M2C_UNK TAdWarningBaseGC__sub_8032CF70(void*);
u32 get_alloc_size__16TAdWarningBaseGCFv();
u32 TAdWarningBaseGC__sub_8032D020();

extern u32 TLobby__data_805D6CC0;
extern u32 TLobby__data_805D6CC8;

void send_data__6TLobbyFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = update_lobby_scene__6TSceneFPv();
    TLobby__data_805D6CC8 = temp_r3;
    if (temp_r3 > 0x40000U) {
        TLobby__data_805D6CC8 = 0U;
        return;
    }
    if ((u32) TLobby__data_805D6CC0 != 0U) {
        TLobby__sub_800F9DF4(arg0, TLobby__data_805D6CC0);
        return;
    }
    TLobby__data_805D6CC8 = 0U;
}

extern u32 TLobby__data_805D6CC0;
extern u32 TLobby__data_805D6CC8;

void update_alloc_size__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = TAdWarningBaseGC__sub_8032D020();
    TLobby__data_805D6CC8 = temp_r3;
    if (temp_r3 > 0x40000U) {
        TLobby__data_805D6CC8 = 0U;
        return;
    }
    if ((u32) TLobby__data_805D6CC0 != 0U) {
        TAdWarningBaseGC__sub_8032CF70((void*)TLobby__data_805D6CC0);
        TLobby__data_805D6CC8 = get_alloc_size__16TAdWarningBaseGCFv();
        return;
    }
    TLobby__data_805D6CC8 = 0U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032C91C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_8032C91C(void* p);
u8 get_selected_slot__6TLobbyFv(void);
M2C_UNK TDLGraph__sub_8007F6F8(s32, M2C_UNK);
s32 TLobby__sub_801F34F8();
int TLobby__sub_804326DC(void*);
s32 TLobby__sub_80432858(M2C_UNK, u8 *);

int TLobby__sub_8032C91C(void* p) { return TLobby__sub_804326DC(p); }

extern u32 TLobby__data_805D6CC4;

u8 get_selected_slot__6TLobbyFv(void) {
    u8 sp8;

    if (TLobby__sub_801F34F8() == 3) {
        if (TLobby__sub_80432858(3, &sp8) == 0) {
            return 0U;
        }
        if ((u32) TLobby__data_805D6CC4 != 0U) {
            TDLGraph__sub_8007F6F8(sp8 + 1, 0x65);
        }
        return sp8;
    }
    return 0U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032CDC0
#include "types.h"

extern "C" {

void TLobby__sub_8032CDC0(void);

    extern unsigned char lbl_805D6CD9;
    extern short lbl_805D6CDA;
void TLobby__sub_8032CDC0(void) { lbl_805D6CD9 = 0; lbl_805D6CDA = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032CDD0
#include "types.h"

extern "C" {

void TLobby__sub_8032CDD0(void* p);
void TLobby__sub_8032CDEC(void);

void TLobby__sub_8032CDD0(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s16*)((char*)p + 0x4) = 0; *(u8*)((char*)p + 0x6) = 0; *(u8*)((char*)p + 0x7) = 0; }

    extern int lbl_805D6CE8;
    extern int lbl_805D6CEC;
void TLobby__sub_8032CDEC(void) { lbl_805D6CEC = 0; lbl_805D6CE8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032CDFC
#include "types.h"

extern "C" {

int TLobby__sub_8032CDFC(void* p);
int queue_destruction__7TObjectFv(void*);

int TLobby__sub_8032CDFC(void* p) { return queue_destruction__7TObjectFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335E08
#include "types.h"

extern "C" {

void* init_camera_state__6TLobbyFPvi(void* a0, int a1);
int __ct__7TObjectFP7TObject(void);

    extern unsigned char lbl_804EE458[];
    extern const float lbl_805DF8B4;
    extern const float lbl_805DF8C0;
void* init_camera_state__6TLobbyFPvi(void* a0, int a1) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_804EE458; *(int*)((char*)a0 + 0x1c) = a1; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x24) = 0; *(float*)((char*)a0 + 0x28) = lbl_805DF8C0; *(float*)((char*)a0 + 0x2c) = lbl_805DF8B4; *(float*)((char*)a0 + 0x30) = lbl_805DF8B4; *(float*)((char*)a0 + 0x34) = lbl_805DF8B4; *(int*)((char*)a0 + 0x38) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335E74
#include "types.h"

extern "C" {

void TLobby__sub_80335E74(void);
void TLobby__sub_80335E78(void);

void TLobby__sub_80335E74(void) {  }
void TLobby__sub_80335E78(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335F40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_80335F40(void);
void *dt__6TLobbyFPvs(void *arg0, s16 arg1);
void *ct_with_parent__6TLobbyFPvPv(void *arg0, void *arg1);
void TLobby__sub_80335FE0(void);
void TLobby__sub_80335FE4(void);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TLobby__sub_80335F40(void) {  }

extern M2C_UNK lbl_804EE470[];

void *dt__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EE470;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804EE470[];

void *ct_with_parent__6TLobbyFPvPv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EE470;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    return arg0;
}

void TLobby__sub_80335FE0(void) {  }
void TLobby__sub_80335FE4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335FF4
#include "types.h"

extern "C" {

void* get_record__6TLobbyFi(int a0);

    extern unsigned char lbl_804EE9A4[];
void* get_record__6TLobbyFi(int a0) {  return (char*)lbl_804EE9A4 + a0 * 32; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336030
#include "types.h"

extern "C" {

int TLobby__sub_80336030(void* p);
int TAdTrialAgreementGC__sub_8033596C(void*);

int TLobby__sub_80336030(void* p) { return TAdTrialAgreementGC__sub_8033596C(*(void**)((char*)p + 0x24)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803360CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void queue_destruction_and_cleanup__6TLobbyFv(void);
void destroy_download_server__6TLobbyFv(void);
M2C_UNK TLobby__sub_8033612C(void*);
M2C_UNK set_flag_and_clear_download__6TLobbyFPv(void*);
M2C_UNK queue_destruction__7TObjectFv();

extern u32 lbl_805D6D40;

void queue_destruction_and_cleanup__6TLobbyFv(void) {
    queue_destruction__7TObjectFv();
    if ((u32) lbl_805D6D40 != 0U) {
        TLobby__sub_8033612C((void*)lbl_805D6D40);
    }
}

extern u32 lbl_805D6D40;

void destroy_download_server__6TLobbyFv(void) {
    queue_destruction__7TObjectFv();
    if ((u32) lbl_805D6D40 != 0U) {
        set_flag_and_clear_download__6TLobbyFPv((void*)lbl_805D6D40);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803361C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
void TLobby__sub_803361FC(void);

void set_flag_and_clear_download__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x24));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803361FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
void TLobby__sub_803361FC(void);

void TLobby__sub_803361FC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336200
#include "types.h"

extern "C" {

void open_keyboard__6TLobbyFv(void);
void request_change_game_mode__6TLobbyFv(void);
void enter_game_mode_change__6TLobbyFv(void);
void enter_chg_game_mode__6TLobbyFv(void);
int set_mode_change_state__21TAdMultiChgGameModeGCFv(void);
int set_mode_0x15__21TAdMultiChgGameModeGCFv(void);
int set_game_mode_state__21TAdMultiChgGameModeGCFv(void);
int TKeyBoardControl__sub_8000F9CC(void*);

    extern int lbl_805D6D44;
void open_keyboard__6TLobbyFv(void) { lbl_805D6D44 = 3; TKeyBoardControl__sub_8000F9CC((void*)19); }

    extern int lbl_805D6D44;
void request_change_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 2; set_mode_change_state__21TAdMultiChgGameModeGCFv(); }

    extern int lbl_805D6D44;
void enter_game_mode_change__6TLobbyFv(void) { lbl_805D6D44 = 1; set_game_mode_state__21TAdMultiChgGameModeGCFv(); }

    extern int lbl_805D6D44;
void enter_chg_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 0; set_mode_0x15__21TAdMultiChgGameModeGCFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033633C
#include "types.h"

extern "C" {

void TLobby__sub_8033633C(void);

void TLobby__sub_8033633C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033645C
#include "types.h"

extern "C" {

void TLobby__sub_8033645C(void* p);
int queue_destruction__7TObjectFv(void*);

void TLobby__sub_8033645C(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033649C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__6TLobbyFPvs(void *arg0, s16 arg1);
M2C_UNK TCameraCtrl__sub_800694A8();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK TLobby__sub_8033645C(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804EEF64[];
extern s32 lbl_805D6D40;

void *destroy__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EEF64;
        lbl_805D6D40 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20));
        }
        TLobby__sub_8033645C(arg0);
        TCameraCtrl__sub_800694A8();
        TLobby__sub_8022743C();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336D98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80336D98(void *arg0);
void *TLobby__sub_80336DA8(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TLobby__sub_80336D98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
}

extern M2C_UNK lbl_804EEF80[];

void *TLobby__sub_80336DA8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EEF80;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336E00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct__6TLobbyFPvPv(void *arg0, void *arg1);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_804EEF80[];

void *construct__6TLobbyFPvPv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EEF80;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336E44
#include "types.h"

extern "C" {

void TLobby__sub_80336E44(void);

void TLobby__sub_80336E44(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336E48
#include "types.h"

extern "C" {

void TLobby__sub_80336E48(void);

    extern int lbl_805D6D50;
void TLobby__sub_80336E48(void) { lbl_805D6D50 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336E54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_global_flags__6TLobbyFi(s32 arg0);

extern s32 lbl_805D6D50;

void set_global_flags__6TLobbyFi(s32 arg0) {
    lbl_805D6D50 |= arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336E64
#include "types.h"

extern "C" {

void TLobby__sub_80336E64(void);
void TLobby__sub_80336E68(void);

void TLobby__sub_80336E64(void) {  }
void TLobby__sub_80336E68(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803383FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_flag2_request__6TLobbyFv(void);
M2C_UNK TLobby__sub_803DA16C(M2C_UNK *);

extern M2C_UNK lbl_804EF1DC[];
extern s32 lbl_805D6D58;

void handle_flag2_request__6TLobbyFv(void) {
    if (lbl_805D6D58 & 2) {
        TLobby__sub_803DA16C(lbl_804EF1DC);
        lbl_805D6D58 &= 0xFFFFFFFD;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80338E9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_object__6TLobbyFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void *fn_80338F3C(void *, void *);

void *create_object__6TLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x8C);
    if (o != NULL) {
        o = fn_80338F3C(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033A810
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_global_object__6TLobbyFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6D78;

void free_global_object__6TLobbyFv(void) {
    if ((u32) lbl_805D6D78 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6D78);
        lbl_805D6D78 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033ECB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_object__6TLobbyFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void *);

extern M2C_UNK lbl_804EFA88[];
extern s32 lbl_805D6DA0;

void *destroy_object__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFA88;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x1C));
        }
        lbl_805D6DA0 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034C18C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_once__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_8034C1D0(u32, s32);

extern s32 lbl_805D6E98;
extern u32 lbl_805D6E9C;

void init_once__6TLobbyFi(s32 arg0) {
    if (!(lbl_805D6E98 & 2) && (lbl_805D6E9C != 0U)) {
        lbl_805D6E98 |= 2;
        TLobby__sub_8034C1D0(lbl_805D6E9C, arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034C23C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_once_data__6TLobbyFUi(u32 arg0);
void flush_pending_send__6TLobbyFv(void);
s32 get_card_window_field__6TLobbyFv(void);
M2C_UNK TLobby__sub_801DA548(u32, s32);
M2C_UNK TLobby__sub_801DA65C(u32);
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);

extern u32 TLobby__data_805D5580;
extern s32 lbl_805D6E98;
extern u32 lbl_805D6E9C;

void init_once_data__6TLobbyFUi(u32 arg0) {
    if ((u32) lbl_805D6E9C == 0U) {
        lbl_805D6E9C = arg0;
        lbl_805D6E98 &= 0xFFFFFFFD;
        if ((u32) TLobby__data_805D5580 != 0U) {
            TLobby__sub_801DA65C(TLobby__data_805D5580);
        }
    }
}

extern u32 TLobby__data_805D5580;
extern s32 lbl_805D6E98;

void flush_pending_send__6TLobbyFv(void) {
    if (lbl_805D6E98 & 1) {
        if ((u32) TLobby__data_805D5580 != 0U) {
            TLobby__sub_801DA548(TLobby__data_805D5580, get_card_window_field__6TLobbyFv());
        }
        lbl_805D6E98 &= 0xFFFFFFFE;
    }
}

s32 get_card_window_field__6TLobbyFv(void) {
    return get_card_window__17TWindowSubComCardFUi(0xFFFF) + 0x20FC;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034C374
#include "types.h"

extern "C" {

void reset_info_board__6TLobbyFv(void);

    extern int lbl_805D6E98;
    extern int lbl_805D6E9C;
void reset_info_board__6TLobbyFv(void) { lbl_805D6E98 = 0; lbl_805D6E9C = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80351DF8
#include "types.h"

extern "C" {

void TLobby__sub_80351DF8(void);

void TLobby__sub_80351DF8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80351E64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_connected__6TLobbyFv(void);

extern void *lbl_805D6EC0;

s32 is_connected__6TLobbyFv(void) {
    if ((void *) lbl_805D6EC0 != NULL) {
        return ((u32) M2C_FIELD(lbl_805D6EC0, u32 *, 0x1C) >> 2U) & 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80351E84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_lobby_obj_active__6TLobbyFv(void);
int get_lobby_type__6TLobbyFv(void);

extern void *lbl_805D6EC0;

s32 is_lobby_obj_active__6TLobbyFv(void) {
    if ((void *) lbl_805D6EC0 != NULL) {
        return ((u32) M2C_FIELD(lbl_805D6EC0, u32 *, 0x1C) >> 1U) & 1;
    }
    return 0;
}

    extern int lbl_805D6EC4;
int get_lobby_type__6TLobbyFv(void) {  return lbl_805D6EC4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80351F3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_80351F3C(void);
void *__nw__7TObjectFUl(int);
void *TLobby__sub_80351FDC(void *);

extern void *lbl_805D6EC0;

void TLobby__sub_80351F3C(void) {
    void *o;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TLobby__sub_80351FDC(o);
    }
    lbl_805D6EC0 = o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80351F74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_and_clear_instance__6TLobbyFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const M2C_UNK lbl_804F0EA8[];
extern s32 lbl_805D6EC0;

void *destroy_and_clear_instance__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_804F0EA8;
        queue_destruction__7TObjectFv(arg0);
        lbl_805D6EC0 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035202C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8035202C(void);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D6EC4;

void TLobby__sub_8035202C(void) {
    if ((u32) lbl_805D6EC4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6EC4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6EC4);
        lbl_805D6EC4 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035D540
#include "types.h"

extern "C" {

void set_timer__6TLobbyFPvf(void* p, f32 v);
s32 TLobby__sub_80269C90(void);
s32 TLobby__sub_80269CA4(s32 a0 = 0);
s32 TLobby__sub_80269DA4(s32 a0 = 0, s32 a1 = 0);
s32 TWindowMessageScroll__ct(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 __nw__7TObjectFUl(s32 a0 = 0);

void set_timer__6TLobbyFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x94) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035D548
#include "types.h"

extern "C" {

s32 TWindowMessageScroll__ct(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TLobby__sub_80269DA4(s32 a0 = 0, s32 a1 = 0);
s32 TLobby__sub_80269CA4(s32 a0 = 0);
s32 TLobby__sub_80269C90(void);
s32 __nw__7TObjectFUl(s32 a0 = 0);
void set_timer__6TLobbyFPvf(void* p, f32 v);

s32 open_message_scroll_window__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r31;

    TLobby__sub_80269CA4(0x23);
    TLobby__sub_80269DA4(arg1, 1);
    var_r31 = __nw__7TObjectFUl(0x9C);
    if (var_r31 != 0) {
        var_r31 = TWindowMessageScroll__ct(var_r31, arg0, arg2);
    }
    TLobby__sub_80269C90();
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036A37C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_dialing_message_window__6TLobbyFPvPv(void *arg0, void *arg1);
void *TAdDialingMessageWindow__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_dialing_message_window__6TLobbyFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TAdDialingMessageWindow__ct(o, arg0, arg1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036B3B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_boss4_rock__6TLobbyFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(s32);

extern M2C_UNK lbl_804F3640[];
extern s32 lbl_805D7008;

void *destroy_boss4_rock__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F3640;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
        lbl_805D7008 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036B4C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_singleton__6TLobbyFPv(void *arg0);
void TLobby__sub_8036B50C(void);
void TLobby__sub_8036B510(void);
void *TLobby__sub_8036B424(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *lbl_805D7008;

void create_singleton__6TLobbyFPv(void *arg0) {
    void *o;
    if (lbl_805D7008 == NULL) {
        o = __nw__7TObjectFUl(0x30);
        if (o != NULL) {
            TLobby__sub_8036B424(o, arg0);
        }
    }
}

void TLobby__sub_8036B50C(void) {  }
void TLobby__sub_8036B510(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036DBC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_singleton_805D7018__6TLobbyFv(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 lbl_805D7018;

void free_singleton_805D7018__6TLobbyFv(void) {
    if ((u32) lbl_805D7018 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D7018);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D7018);
        lbl_805D7018 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036F81C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 destroy_ep3_exist__6TLobbyFis(s32 arg0, s16 arg1);
void *reset_counters__6TLobbyFPv(void *arg0);
M2C_UNK TAdEp3Exist__sub_8036F574();
M2C_UNK __dl__FPv(s32);
M2C_UNK free_if_valid__11TAdEp3ExistFis(s32, s32);

s32 destroy_ep3_exist__6TLobbyFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_if_valid__11TAdEp3ExistFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void *reset_counters__6TLobbyFPv(void *arg0) {
    TAdEp3Exist__sub_8036F574();
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803A2CEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_com_card_value__6TLobbyFv(void);
f32 stop_end_text__6TLobbyFv(void);
f32 TLobby__sub_803A2D34(void);
f32 get_angle_as_float__6TLobbyFv(void);
f32 TLobby__sub_803A2D7C(void);
f64 stop__10TAdEndTextFv();
f64 TLobby__sub_803A2410();
f64 TWindowSubComCard__sub_803A24E4();
f64 TLobby__sub_803A2AFC();
f64 fn_803A2BD4();

f32 get_com_card_value__6TLobbyFv(void) {
    return (f32) TWindowSubComCard__sub_803A24E4();
}

f32 stop_end_text__6TLobbyFv(void) {
    return (f32) stop__10TAdEndTextFv();
}

f32 TLobby__sub_803A2D34(void) {
    return (f32) fn_803A2BD4();
}

f32 get_angle_as_float__6TLobbyFv(void) {
    return (f32) TLobby__sub_803A2AFC();
}

f32 TLobby__sub_803A2D7C(void) {
    return (f32) TLobby__sub_803A2410();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803AA864
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803AA864(void);

void TLobby__sub_803AA864(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803AB0E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803AB0E0(void);

void TLobby__sub_803AB0E0(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803AE420
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803AE420(u8 *arg0, u8 *arg1);

s32 TLobby__sub_803AE420(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803AE4C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803AE4C4(u16 *arg0, u16 *arg1);

s32 TLobby__sub_803AE4C4(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803AE5FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1);

s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803AE6CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803AE6CC(u8 *arg0, u8 *arg1);

s32 TLobby__sub_803AE6CC(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803AE75C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803AE75C(u16 *arg0, u16 *arg1);

s32 TLobby__sub_803AE75C(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803B2920
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803B2920(u8 *arg0);

s32 TLobby__sub_803B2920(u8 *arg0) {
    M2C_FIELD(arg0, void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803B4CEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803B4CEC(void);

extern s16 lbl_805D7450;

void TLobby__sub_803B4CEC(void) {
    lbl_805D7450 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BAC70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void transform_vec3__6TLobbyFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);

void transform_vec3__6TLobbyFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + ((M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)))));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + ((M2C_FIELD(arg0, f32 *, 0x14) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 0x10) * M2C_FIELD(arg1, f32 *, 4)))));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + ((M2C_FIELD(arg0, f32 *, 0x20) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0x18) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 0x1C) * M2C_FIELD(arg1, f32 *, 4)))));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BCA40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void shift_left_8__6TLobbyFPv(s32 *arg0);

void shift_left_8__6TLobbyFPv(s32 *arg0) {
    *arg0 <<= 8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BCA98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 shift_right_8__6TLobbyFUi(u32 arg0);

u32 shift_right_8__6TLobbyFUi(u32 arg0) {
    return arg0 >> 8U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BCCD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_global_flag__6TLobbyFc(s8 arg0);

extern s8 lbl_805D74B8;

void set_global_flag__6TLobbyFc(s8 arg0) {
    lbl_805D74B8 = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BCCD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TLobby__sub_803BCCD8(void);

extern u8 lbl_805D74B8;

u8 TLobby__sub_803BCCD8(void) {
    return lbl_805D74B8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BCD00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_global_7490__6TLobbyFi(s32 arg0);

extern s32 lbl_805D7490;

void set_global_7490__6TLobbyFi(s32 arg0) {
    lbl_805D7490 = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BD824
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803BD824(void);

void TLobby__sub_803BD824(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BD9E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803BD9E0(void);

void TLobby__sub_803BD9E0(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BD9F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803BD9F8(void);
s32 get_slot_value__6TLobbyFi(s32 arg0);

extern s32 lbl_805D747C;

void TLobby__sub_803BD9F8(void) {
    lbl_805D747C = 0;
}

extern s32 lbl_805D748C;

s32 get_slot_value__6TLobbyFi(s32 arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (lbl_805D748C + (arg0 * 0xF4));
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0xEC) == 0) {
        return -1;
    }
    return M2C_FIELD(temp_r3, s32 *, 0xE8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BE0DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803BE0DC(void);

void TLobby__sub_803BE0DC(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BE3C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803BE3C4(void);

extern s32 lbl_805D74F0;
extern s32 lbl_805D7500;

void TLobby__sub_803BE3C4(void) {
    lbl_805D74F0 = 1;
    lbl_805D7500 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803BFE50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_offset_58__6TLobbyFi(s32 arg0);
void TLobby__sub_803BFE58(u8 *arg0);
void dispatch_field4_event__6TLobbyFPv(u8 *arg0);
void send_with_offset4_alt__6TLobbyFPv(u8 *arg0);
void notify_client__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803BFEE8(u8 *arg0);
void send_packet_by_id__6TLobbyFPv(u8 *arg0);
void notify_field_4_alt__6TLobbyFPv(u8 *arg0);
void send_packet_by_id_2__6TLobbyFPv(u8 *arg0);
void send_with_offset4__6TLobbyFPv(u8 *arg0);
void notify_field_4__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803BFFC0(u8 *arg0);
void set_field_44__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_40__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_3c__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803BFFFC(u8 *arg0, s32 arg1, s32 arg2);
void set_count__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C0010(u8 *arg0);
M2C_UNK get_field_34__6TLobbyFPv(int);
M2C_UNK get_field30__6TLobbyFPv(int);
M2C_UNK get_field_2c__6TLobbyFPv(int);
M2C_UNK get_field_28__6TLobbyFPv(int);
M2C_UNK get_slot__6TLobbyFPv(int);
M2C_UNK TLobby__sub_803C3ABC(int);
M2C_UNK TLobby__sub_803C3AC4(int);
M2C_UNK TLobby__sub_803C3ACC(int);
M2C_UNK TLobby__sub_803C3B38(int);
M2C_UNK TLobby__sub_803C3B44(int);
M2C_UNK get_field_a8__6TLobbyFPv(int);

s32 get_offset_58__6TLobbyFi(s32 arg0) {
    return arg0 + 0x58;
}

void TLobby__sub_803BFE58(u8 *arg0) {
    get_field_34__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void dispatch_field4_event__6TLobbyFPv(u8 *arg0) {
    get_field30__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void send_with_offset4_alt__6TLobbyFPv(u8 *arg0) {
    get_field_2c__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void notify_client__6TLobbyFPv(u8 *arg0) {
    get_field_28__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFEE8(u8 *arg0) {
    get_slot__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void send_packet_by_id__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3ABC((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void notify_field_4_alt__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3AC4((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void send_packet_by_id_2__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3ACC((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void send_with_offset4__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3B38((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void notify_field_4__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3B44((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFFC0(u8 *arg0) {
    get_field_a8__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void set_field_44__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

void set_field_40__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void set_field_3c__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

void TLobby__sub_803BFFFC(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
}

void set_count__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
}

s32 TLobby__sub_803C0010(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C0720
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_flag__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803C0758(u8 *arg0);
void set_network_result__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_param_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_803C39CC(int);
M2C_UNK TLobby__sub_803C1A00(int);
M2C_UNK TLobby__sub_803C1A24(int);

void reset_flag__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C39CC((int) (M2C_FIELD(arg0, s32 *, 4)));
    M2C_FIELD(arg0, s8 *, 1) = 0;
}

void TLobby__sub_803C0758(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 1;
}

void set_network_result__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    TLobby__sub_803C1A00((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void set_param_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    TLobby__sub_803C1A24((int) (M2C_FIELD(arg0, s32 *, 4)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C19D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C19D8(void);
extern M2C_UNK (*lbl_805D7510)();

void TLobby__sub_803C19D8(void) {
    lbl_805D7510();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C1A58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_network_state__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C1A8C();
M2C_UNK TLobby__sub_803C1DC4();

void dispatch_network_state__6TLobbyFPv(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0xAA) == 1) {
        TLobby__sub_803C1A8C();
        return;
    }
    TLobby__sub_803C1DC4();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C25F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_by_state__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C263C();
M2C_UNK TLobby__sub_803C2A00();
M2C_UNK TLobby__sub_803C2D38();

void dispatch_by_state__6TLobbyFPv(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xAA);
    if (temp_r0 == 2) {
        TLobby__sub_803C263C();
        return;
    }
    if (temp_r0 == 1) {
        TLobby__sub_803C2A00();
        return;
    }
    TLobby__sub_803C2D38();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C3974
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_a0__6TLobbyFPv(u8 *arg0);
s32 get_field_0xa4__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803C3984(u8 *arg0);
void TLobby__sub_803C39CC(u8 *arg0);
void TLobby__sub_803C3A04(u8 *arg0);
M2C_UNK reset_field_0C__6TLobbyFPv(int);
M2C_UNK reset_client_state__6TLobbyFPv(int);

s32 get_field_a0__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA0);
}

s32 get_field_0xa4__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void TLobby__sub_803C3984(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 3) {
        reset_field_0C__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

void TLobby__sub_803C39CC(u8 *arg0) {
    reset_client_state__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void TLobby__sub_803C3A04(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C3A1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_scroll__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);

void init_scroll__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s16 *, 0xA8) == 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = arg1;
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (arg2 / (s8) M2C_FIELD(arg0, u8 *, 0xF));
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (arg2 / (s32) (((s8) M2C_FIELD(arg0, u8 *, 0xD) / 8) * (s8) M2C_FIELD(arg0, u8 *, 0xE)));
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C3A8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_entry_id__6TLobbyFPv(u8 *arg0);
s32 get_field_34__6TLobbyFPv(u8 *arg0);
s32 get_field30__6TLobbyFPv(u8 *arg0);
s32 get_field_2c__6TLobbyFPv(u8 *arg0);
s32 get_field_28__6TLobbyFPv(u8 *arg0);
s16 get_slot__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803C3ABC(u8 *arg0);
s32 TLobby__sub_803C3AC4(u8 *arg0);

s32 get_entry_id__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 get_field_34__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 get_field30__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 get_field_2c__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 get_field_28__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s16 get_slot__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x24);
}

s32 TLobby__sub_803C3ABC(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 TLobby__sub_803C3AC4(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C3B44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803C3B44(u8 *arg0);
s16 get_field_a8__6TLobbyFPv(u8 *arg0);

s32 TLobby__sub_803C3B44(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s16 get_field_a8__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xA8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C3B54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_0x3c__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803C3B5C(u8 *arg0, s32 arg1, s32 arg2);

s32 get_field_0x3c__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

void TLobby__sub_803C3B5C(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    M2C_FIELD(arg0, s32 *, 0x8C) = arg2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C3E3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_record__6TLobbyFPv(u8 *arg0);
M2C_UNK clear_record_data__6TLobbyFPv(int);
M2C_UNK memset(void *, int, int);

void clear_record__6TLobbyFPv(u8 *arg0) {
    if (arg0 != NULL) {
        clear_record_data__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
        memset((void *) (arg0), (int) (0), (int) (0xB8));
        M2C_FIELD(arg0, s16 *, 0) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C403C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_progress_info__6TLobbyFPvPvPvPv(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3);

s32 get_progress_info__6TLobbyFPvPvPvPv(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x9C);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x40) - M2C_FIELD(arg0, s32 *, 0x9C);
    *arg3 = M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(arg0, s32 *, 0x98);
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C45E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_packet_flags__6TLobbyFPvi(u8 *arg0, s32 arg1);

void set_packet_flags__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C45EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_entry__6TLobbyFi(s32 arg0);
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
M2C_UNK memset(void *, int, int);

void clear_entry__6TLobbyFi(s32 arg0) {
    if (arg0 != 0) {
        init_once__6TLobbyFv();
        memset((void *) (arg0), (int) (0), (int) (0x30));
        release_ref__6TLobbyFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C4630
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_ref__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D3988();

extern s32 lbl_805D7518;

void release_ref__6TLobbyFv(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D7518 - 1;
    lbl_805D7518 = temp_r0;
    if (temp_r0 == 0) {
        TLobby__sub_803D3988();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C4660
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_once__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D39C0();

extern s32 lbl_805D7518;

void init_once__6TLobbyFv(void) {
    if ((s32) lbl_805D7518 == 0) {
        TLobby__sub_803D39C0();
    }
    lbl_805D7518 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C4698
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C4698(void);

extern s32 lbl_805D7518;

void TLobby__sub_803C4698(void) {
    lbl_805D7518 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C4C3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_global_805D7520__6TLobbyFi(s32 arg0);
void dispatch_receive_update__6TLobbyFv(void);
M2C_UNK TLobby__sub_803C4C78();
M2C_UNK TLobby__sub_803C4F14();

extern s32 lbl_805D7520;

void set_global_805D7520__6TLobbyFi(s32 arg0) {
    lbl_805D7520 = arg0;
}

extern s32 lbl_805D7520;

void dispatch_receive_update__6TLobbyFv(void) {
    if ((s32) lbl_805D7520 == 0) {
        TLobby__sub_803C4F14();
        return;
    }
    TLobby__sub_803C4C78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C5828
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_params__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK TLobby__sub_803D33F4();

extern s32 lbl_805D7528;
extern s32 lbl_805D752C;

void set_params__6TLobbyFii(s32 arg0, s32 arg1) {
    lbl_805D7528 = arg0;
    lbl_805D752C = arg1;
    TLobby__sub_803D33F4();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C5930
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dec_ref_and_shutdown__6TLobbyFv(void);
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
M2C_UNK TLobby__sub_803C5850();
M2C_UNK si_get_type_async__6TLobbyFv();
M2C_UNK shutdown_cleanup__6TLobbyFv();
M2C_UNK TLobby__sub_803CC134();
M2C_UNK TLobby__sub_803D1C24();
M2C_UNK TLobby__sub_803D259C();
M2C_UNK TLobby__sub_803D2E04();
M2C_UNK TLobby__sub_803D2E94();
M2C_UNK TLobby__sub_803D3194();
M2C_UNK TLobby__sub_803D3678(int, void *);
M2C_UNK TLobby__sub_803C0AD8();

extern s32 lbl_805D7538;
extern s32 lbl_805D753C;

void dec_ref_and_shutdown__6TLobbyFv(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D7538 - 1;
    lbl_805D7538 = temp_r0;
    if (temp_r0 == 0) {
        shutdown_cleanup__6TLobbyFv();
        TLobby__sub_803CC134();
        si_get_type_async__6TLobbyFv();
        TLobby__sub_803D1C24();
        init_once__6TLobbyFv();
        TLobby__sub_803D3678((int) (2), (void *) (1));
        TLobby__sub_803D3678((int) (2), (void *) (3));
        TLobby__sub_803D3678((int) (4), (void *) (lbl_805D753C));
        TLobby__sub_803D3194();
        release_ref__6TLobbyFv();
        init_once__6TLobbyFv();
        TLobby__sub_803C0AD8();
        TLobby__sub_803C5850();
        TLobby__sub_803D259C();
        TLobby__sub_803D2E04();
        TLobby__sub_803D2E94();
        release_ref__6TLobbyFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C5AA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 ar_alloc__6TLobbyFv(void);
s32 get_state_zero__6TLobbyFv(void);
s32 process_connection_state__6TLobbyFv(void);
M2C_UNK ARAlloc();
M2C_UNK TLobby__sub_803C9608();
s32 TLobby__sub_803CB844();
M2C_UNK TLobby__sub_803CBA38();
M2C_UNK TLobby__sub_803CE240();
M2C_UNK TLobby__sub_803D1444();

s32 ar_alloc__6TLobbyFv(void) {
    ARAlloc();
    return 0;
}

s32 get_state_zero__6TLobbyFv(void) {
    TLobby__sub_803C9608();
    return 0;
}

s32 process_connection_state__6TLobbyFv(void) {
    if (TLobby__sub_803CB844() == 1) {
        TLobby__sub_803D1444();
        TLobby__sub_803CE240();
    } else {
        TLobby__sub_803CBA38();
        TLobby__sub_803D1444();
        TLobby__sub_803CE240();
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C5D00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C5D00(u8 *arg0);
M2C_UNK TLobby__sub_803D13C0(int);

void TLobby__sub_803C5D00(u8 *arg0) {
    TLobby__sub_803D13C0((int) (M2C_FIELD(arg0, s32 *, 0x94)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C5E58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C5E58(void);
void TLobby__sub_803C5E68(void);

extern s32 lbl_805D7548;

void TLobby__sub_803C5E58(void) {
    lbl_805D7548 -= 1;
}

extern s32 lbl_805D7548;

void TLobby__sub_803C5E68(void) {
    lbl_805D7548 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C60F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C60F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_803C610C(u8 *arg0);
void TLobby__sub_803C6118(u8 *arg0);

void TLobby__sub_803C60F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x60) = arg3;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x11C;
}

void TLobby__sub_803C610C(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 1;
}

void TLobby__sub_803C6118(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C84D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field_10_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803C8514(u8 *arg0, s32 arg1);
void set_buffer__6TLobbyFPvPv(u8 *arg0, void **arg1);
s32 get_field_14__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803C8578(u8 *arg0, s32 arg1);
s32 set_range__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_803C8594(u8 *arg0, s32 *arg1, s32 *arg2);
M2C_UNK TLobby__sub_803CF100(int, int, int);
M2C_UNK TLobby__sub_803CF1A8(int);

void set_field_10_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    TLobby__sub_803CF100((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10)), (int) (0));
    TLobby__sub_803CF1A8((int) (M2C_FIELD(arg0, s32 *, 8)));
}

void TLobby__sub_803C8514(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg1 << 0xB);
}

void set_buffer__6TLobbyFPvPv(u8 *arg0, void **arg1) {
    s32 temp_r3;
    u8 *temp_r5;

    M2C_FIELD(arg0, void ***, 4) = arg1;
    temp_r5 = (unsigned char *) (*arg1);
    temp_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(arg1, 0, temp_r5);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3;
}

s32 get_field_14__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 TLobby__sub_803C8578(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    return 1;
}

s32 set_range__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    return 1;
}

s32 TLobby__sub_803C8594(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x1C);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x18);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C8990
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_scroll_position__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_coords__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);

void set_scroll_position__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x14) + 0x7FF) / 2048);
}

void set_coords__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C8AE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_scroll_offset__6TLobbyFPvi(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_803CF100(int, int, int);
s32 TLobby__sub_803CF1A8(int);

s32 set_scroll_offset__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    TLobby__sub_803CF100((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10) + arg1), (int) (0));
    return TLobby__sub_803CF1A8((int) (M2C_FIELD(arg0, s32 *, 8))) - M2C_FIELD(arg0, s32 *, 0x10);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C9090
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void si_get_type_async__6TLobbyFv(void);
M2C_UNK SIGetTypeAsync();

void si_get_type_async__6TLobbyFv(void) {
    SIGetTypeAsync();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C90E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void on_set_mode__6TLobbyFv(void);
M2C_UNK set_global_805D7520__6TLobbyFi();

void on_set_mode__6TLobbyFv(void) {
    set_global_805D7520__6TLobbyFi();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C9348
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field98__6TLobbyFPvc(u8 *arg0, s8 arg1);
void TLobby__sub_803C9350(u8 *arg0, s32 arg1);

void set_field98__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x98) = arg1;
}

void TLobby__sub_803C9350(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C94B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C94B8(void);
void TLobby__sub_803C94D8(void);
M2C_UNK set_params__6TLobbyFii();

void TLobby__sub_803C94B8(void) {
    set_params__6TLobbyFii();
}

void TLobby__sub_803C94D8(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C9600
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_field_60__6TLobbyFPv(u8 *arg0);

s16 get_field_60__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x60);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C96A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field_6d__6TLobbyFPvc(u8 *arg0, s8 arg1);
void TLobby__sub_803C96A8(u8 *arg0, s32 arg1);
s16 TLobby__sub_803C96B0(u8 *arg0);
void set_field_40_and_notify__6TLobbyFPvs(u8 *arg0, s16 arg1);
M2C_UNK trigger_sub_task__6TLobbyFv(int);

void set_field_6d__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x6D) = arg1;
}

void TLobby__sub_803C96A8(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

s16 TLobby__sub_803C96B0(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x40);
}

void set_field_40_and_notify__6TLobbyFPvs(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x40) = arg1;
    trigger_sub_task__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0xC)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C9740
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803C9740(u8 *arg0);
s32 apply_if_v2__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803C97B8(u8 *arg0);
s32 send_packet_by_id__6TLobbyFPv(int);
s32 send_with_offset4__6TLobbyFPv(int);
s32 notify_field_4__6TLobbyFPv(int);

s32 TLobby__sub_803C9740(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return send_with_offset4__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

s32 apply_if_v2__6TLobbyFPv(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return notify_field_4__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

s32 TLobby__sub_803C97B8(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return send_packet_by_id__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803C9C84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_rate_mode__6TLobbyFi(s32 arg0);

extern s32 lbl_805D7560;
extern s32 lbl_805D7570;

void set_rate_mode__6TLobbyFi(s32 arg0) {
    if (arg0 == 1) {
        lbl_805D7570 = 0x176A;
    } else if (arg0 == 2) {
        lbl_805D7570 = 0x1388;
    }
    lbl_805D7560 = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CB384
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_receive_check__6TLobbyFPv(u8 *arg0);
s32 get_size__6TLobbyFPv(u8 *arg0);
void reset_field_0C__6TLobbyFPv(u8 *arg0);
void reset_client_state__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803CB4A4(u8 *arg0);
s32 post_request__6TLobbyFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 try_post_command__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 get_client_count__6TLobbyFPv(u8 *arg0);
u32 PADReceiveCheckCallback(int, int, int, void *, int, int);
u32 dispatch_receive_update__6TLobbyFv(int, int, int, void *, int, void *, int, int);
M2C_UNK memset(void *, int, int);

extern s32 lbl_805D7588;

void update_receive_check__6TLobbyFPv(u8 *arg0) {
    u32 temp_r0;
    u32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 1) {
        M2C_FIELD(arg0, s32 *, 0xC) = 2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 2) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 1) {
            M2C_FIELD(arg0, u32 *, 0x10) = PADReceiveCheckCallback((int) (M2C_FIELD(arg0, s32 *, 0x18)), (int) (M2C_FIELD(arg0, s32 *, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (void *) (arg0 + 0x28), (int) (M2C_FIELD(arg0, s16 *, 0x30)), (int) (M2C_FIELD(arg0, s16 *, 0x32)));
        } else {
            M2C_FIELD(arg0, u32 *, 0x10) = dispatch_receive_update__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0x18)), (int) (M2C_FIELD(arg0, s32 *, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (void *) (arg0 + 0x28), (int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (arg0 + 0x2C), (int) (M2C_FIELD(arg0, s16 *, 0x30)), (int) (M2C_FIELD(arg0, s16 *, 0x32)));
            temp_r0 = M2C_FIELD(arg0, u32 *, 0x10);
            temp_r3 = temp_r0 >> 0x1FU;
            if ((s32) (((temp_r0 & 1) ^ temp_r3) - temp_r3) == 1) {
                lbl_805D7588 = 1;
            }
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 3;
    }
}

s32 get_size__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void reset_field_0C__6TLobbyFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 3) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

void reset_client_state__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    memset((void *) (arg0 + 0x28), (int) (0), (int) (8));
}

void TLobby__sub_803CB4A4(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    }
}

s32 post_request__6TLobbyFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 2;
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
        M2C_FIELD(arg0, s32 *, 0x20) = arg3;
        M2C_FIELD(arg0, s32 *, 0x24) = arg4;
        return 1;
    }
    return 0;
}

s32 try_post_command__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
        M2C_FIELD(arg0, s32 *, 0x20) = arg3;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        return 1;
    }
    return 0;
}

s32 get_client_count__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CB538
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_record_data__6TLobbyFPv(s32 *arg0);
M2C_UNK memset(void *, int, int);

void clear_record_data__6TLobbyFPv(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
        memset((void *) (arg0), 0, 0x34);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CB570
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CB570(u8 *arg0, u8 *arg1, s16 *arg2);

void TLobby__sub_803CB570(u8 *arg0, u8 *arg1, s16 *arg2) {
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) *arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBA18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBA18(void);
void TLobby__sub_803CBA38(void);
M2C_UNK TLobby__sub_803D3344();
M2C_UNK TLobby__sub_803D33F4();

void TLobby__sub_803CBA18(void) {
    TLobby__sub_803D33F4();
}

void TLobby__sub_803CBA38(void) {
    TLobby__sub_803D3344();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBE20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBE20(void);
M2C_UNK run_step_60c8__6TLobbyFv();

void TLobby__sub_803CBE20(void) {
    run_step_60c8__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBE40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBE40(u8 *arg0);
M2C_UNK apply_field__6TLobbyFv(int);

void TLobby__sub_803CBE40(u8 *arg0) {
    apply_field__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0xC)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBE64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBE64(u8 *arg0);
M2C_UNK TLobby__sub_803CBEC8(int);

void TLobby__sub_803CBE64(u8 *arg0) {
    TLobby__sub_803CBEC8((int) (M2C_FIELD(arg0, s32 *, 0xC)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBE88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_step_60c8__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D60C8();

void run_step_60c8__6TLobbyFv(void) {
    TLobby__sub_803D60C8();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBEA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_field__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D4408();

void apply_field__6TLobbyFv(void) {
    TLobby__sub_803D4408();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBEC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBEC8(void);
M2C_UNK TLobby__sub_803D4418();

void TLobby__sub_803CBEC8(void) {
    TLobby__sub_803D4418();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBEE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 run_step_4430__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D4430();

s32 run_step_4430__6TLobbyFv(void) {
    TLobby__sub_803D4430();
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBF0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBF0C(void);

void TLobby__sub_803CBF0C(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBF10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBF10(void);
M2C_UNK TLobby__sub_803D4428();

void TLobby__sub_803CBF10(void) {
    TLobby__sub_803D4428();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBF30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBF30(void);
M2C_UNK TLobby__sub_803D4438();

void TLobby__sub_803CBF30(void) {
    TLobby__sub_803D4438();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBF50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBF50(void);
void trigger_sub_task__6TLobbyFv(void);
void TLobby__sub_803CBF90(void);
void TLobby__sub_803CBFB0(void);
void run_sequence__6TLobbyFv(void);
void TLobby__sub_803CBFF0(void);
void query_available_size__6TLobbyFv(void);
void TLobby__sub_803CC030(void);
void dispatch_packet__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D4448();
M2C_UNK TLobby__sub_803D4540();
M2C_UNK TLobby__sub_803D4654();
M2C_UNK TLobby__sub_803D4704();
M2C_UNK TLobby__sub_803D4714();
M2C_UNK get_packet_size__6TLobbyFPv();
M2C_UNK get_available_size__6TLobbyFPv();
M2C_UNK TLobby__sub_803D4CA0();
M2C_UNK TLobby__sub_803D504C();

void TLobby__sub_803CBF50(void) {
    TLobby__sub_803D4448();
}

void trigger_sub_task__6TLobbyFv(void) {
    TLobby__sub_803D4540();
}

void TLobby__sub_803CBF90(void) {
    TLobby__sub_803D4654();
}

void TLobby__sub_803CBFB0(void) {
    TLobby__sub_803D4704();
}

void run_sequence__6TLobbyFv(void) {
    TLobby__sub_803D4714();
}

void TLobby__sub_803CBFF0(void) {
    get_packet_size__6TLobbyFPv();
}

void query_available_size__6TLobbyFv(void) {
    get_available_size__6TLobbyFPv();
}

void TLobby__sub_803CC030(void) {
    TLobby__sub_803D4CA0();
}

void dispatch_packet__6TLobbyFv(void) {
    TLobby__sub_803D504C();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CC0B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_step_5210__6TLobbyFv(void);
void flush_update__6TLobbyFv(void);
void shutdown_cleanup__6TLobbyFv(void);
void TLobby__sub_803CC114(void);
M2C_UNK TLobby__sub_803D5210();
M2C_UNK TLobby__sub_803D5DD0();
M2C_UNK TLobby__sub_803D5F10();
M2C_UNK TLobby__sub_803D60A8();

void run_step_5210__6TLobbyFv(void) {
    TLobby__sub_803D5210();
}

void flush_update__6TLobbyFv(void) {
    TLobby__sub_803D60A8();
}

void shutdown_cleanup__6TLobbyFv(void) {
    TLobby__sub_803D5DD0();
}

void TLobby__sub_803CC114(void) {
    TLobby__sub_803D5F10();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CC274
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void invalidate_cache__6TLobbyFv(void);
M2C_UNK DCInvalidateRange();

void invalidate_cache__6TLobbyFv(void) {
    DCInvalidateRange();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CD804
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CD804(void);
M2C_UNK TLobby__sub_803CCE9C(void *);

extern s32 lbl_805D75D4;
extern s32 lbl_805D75D8;
extern s32 lbl_805D75DC;
extern s32 lbl_805D75E8;

void TLobby__sub_803CD804(void) {
    TLobby__sub_803CCE9C((void *) (lbl_805D75D8));
    lbl_805D75D8 = 0;
    lbl_805D75D4 = -1;
    lbl_805D75DC = 0;
    lbl_805D75E8 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CE1D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_scroll_offset__6TLobbyFPv(u8 *arg0);

s32 get_scroll_offset__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2B0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CE1E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_4__6TLobbyFPvc(u8 *arg0, s8 arg1);
void set_client_slot__6TLobbyFPvc(u8 *arg0, s8 arg1);

void set_flag_4__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 4) = arg1;
}

void set_client_slot__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 3) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CE200
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scroll_impl__6TLobbyFv(void);
void TLobby__sub_803CE220(void);
M2C_UNK TLobby__sub_803D1FD4();
M2C_UNK lock_enter__6TLobbyFv();

void update_scroll_impl__6TLobbyFv(void) {
    TLobby__sub_803D1FD4();
}

void TLobby__sub_803CE220(void) {
    lock_enter__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CE478
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scroll__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803CE544(u32 arg0, s32 arg1);
M2C_UNK set_scroll_position__6TLobbyFPvi(int, void *);
M2C_UNK TLobby__sub_803C8A14(int);
M2C_UNK set_scroll_offset__6TLobbyFPvi(int, int);
M2C_UNK TLobby__sub_803CE198(int, int, void *, void *);
s32 get_scroll_offset__6TLobbyFPv(int);
M2C_UNK update_scroll_impl__6TLobbyFv();
M2C_UNK TLobby__sub_803CE220();

void update_scroll__6TLobbyFPv(u8 *arg0) {
    s32 spC;
    s32 sp8;

    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1B0) + 1);
    if (((s32) M2C_FIELD(arg0, u8 *, 0x1A8) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B0) >= (s32) M2C_FIELD(arg0, s32 *, 0x1BC))) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(arg0, s32 *, 0x1B8);
    }
    if (((s32) M2C_FIELD(arg0, u8 *, 0x1A9) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B0) < get_scroll_offset__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4))))) {
        TLobby__sub_803CE220();
        TLobby__sub_803CE198((int) (M2C_FIELD(arg0, s32 *, 4)), (int) (M2C_FIELD(arg0, s32 *, 0x1B0)), (void *) (&spC), (void *) (&sp8));
        set_scroll_offset__6TLobbyFPvi((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (spC / 2048));
        set_scroll_position__6TLobbyFPvi((int) (M2C_FIELD(arg0, s32 *, 8)), (void *) ((s32) (spC + sp8) / 2048));
        TLobby__sub_803C8A14((int) (M2C_FIELD(arg0, s32 *, 8)));
        update_scroll_impl__6TLobbyFv();
    }
}

extern u32 lbl_805D75F8;
extern s32 lbl_805D75FC;

void TLobby__sub_803CE544(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        lbl_805D75F8 = 0U;
        lbl_805D75FC = 0;
        return;
    }
    lbl_805D75F8 = arg0;
    lbl_805D75FC = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CFE68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void call_callback__6TLobbyFv(void);
void TLobby__sub_803CFE9C(void);
extern M2C_UNK (*lbl_805D75F8)(s32);

extern s32 lbl_805D75FC;

void call_callback__6TLobbyFv(void) {
    if (((M2C_UNK (*)(s32)) lbl_805D75F8) != NULL) {
        lbl_805D75F8(lbl_805D75FC);
    }
}

void TLobby__sub_803CFE9C(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D0C28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D0C28(s32 arg0, s32 arg1);

extern s32 lbl_805D7608;
extern s32 lbl_805D760C;

void TLobby__sub_803D0C28(s32 arg0, s32 arg1) {
    lbl_805D760C = arg0;
    lbl_805D7608 = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D0EB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_callback__6TLobbyFUii(u32 arg0, s32 arg1);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D1FD4();
M2C_UNK lock_enter__6TLobbyFv();

extern u32 lbl_805D7618;
extern s32 lbl_805D761C;

void set_callback__6TLobbyFUii(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        lbl_805D7618 = 0U;
        lbl_805D761C = 0;
        return;
    }
    lbl_805D7618 = arg0;
    lbl_805D761C = arg1;
}

void notify_dvd_read__6TLobbyFv(void) {
    TLobby__sub_803D1FD4();
}

void enter_lock__6TLobbyFv(void) {
    lock_enter__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D0F58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D0F58(void);
extern M2C_UNK (*lbl_805D7620)(s32, s32);

extern s32 lbl_805D7624;
extern s32 lbl_805D7628;

void TLobby__sub_803D0F58(void) {
    if (((M2C_UNK (*)(s32, s32)) lbl_805D7620) != NULL) {
        lbl_805D7620(lbl_805D7624, lbl_805D7628);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D2010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void lock_enter__6TLobbyFv(void);
s32 OSDisableInterrupts();

extern s32 lbl_805D7638;
extern s32 lbl_805D763C;

void lock_enter__6TLobbyFv(void) {
    if ((s32) lbl_805D7638 == 0) {
        lbl_805D763C = OSDisableInterrupts();
    }
    lbl_805D7638 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D23B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_count_or_cancel__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803D240C(u8 *arg0);
void TLobby__sub_803D2420(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_803D242C(u8 *arg0);

s32 get_count_or_cancel__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_UNK (*temp_r12)(s32, M2C_UNK);

    if (arg1 == 1) {
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (arg1 == 0) {
        return 0;
    }
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x1C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x20), -3);
    }
    return 0;
}

void TLobby__sub_803D240C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void TLobby__sub_803D2420(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
}

s32 TLobby__sub_803D242C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D25DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D25DC(void);
M2C_UNK memset(void *, int, int);

extern M2C_UNK lbl_80587400[];
extern s32 lbl_805D7640;

void TLobby__sub_803D25DC(void) {
    if ((s32) lbl_805D7640 == 0) {
        memset((void *) (lbl_80587400), (int) (0), (int) (0x480));
    }
    lbl_805D7640 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D2628
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_24__6TLobbyFPv(u8 *arg0);
s32 get_field20__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803D2638(u8 *arg0);

s32 get_field_24__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 get_field20__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

s32 TLobby__sub_803D2638(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D2BA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_slot_count__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803D2C04(u8 *arg0);
void TLobby__sub_803D2C20(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_803D2C2C(u8 *arg0);
void clear_entry__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803D1FD4();
M2C_UNK lock_enter__6TLobbyFv();
M2C_UNK memset(void *, int, int);

s32 get_slot_count__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_UNK (*temp_r12)(s32, M2C_UNK);

    if (arg1 == 1) {
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x10);
    }
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x28);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x2C), -3);
    }
    return 0;
}

void TLobby__sub_803D2C04(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void TLobby__sub_803D2C20(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
}

s32 TLobby__sub_803D2C2C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

void clear_entry__6TLobbyFPv(u8 *arg0) {
    lock_enter__6TLobbyFv();
    if (arg0 != NULL) {
        memset((void *) (arg0), (int) (0), (int) (0x30));
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    TLobby__sub_803D1FD4();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D2ED4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D2ED4(void);
M2C_UNK memset(void *, int, int);

extern M2C_UNK lbl_8058A880[];
extern s32 lbl_805D7650;

void TLobby__sub_803D2ED4(void) {
    if ((s32) lbl_805D7650 == 0) {
        memset((void *) (lbl_8058A880), (int) (0), (int) (0xC00));
    }
    lbl_805D7650 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D3194
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D3194(void);

extern s32 lbl_805D7658;

void TLobby__sub_803D3194(void) {
    lbl_805D7658 -= 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D3988
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D3988(void);
void TLobby__sub_803D39C0(void);

extern M2C_UNK lbl_805D7664;

void TLobby__sub_803D3988(void) {
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_805D7664, M2C_UNK (**)(s32), 0)) != NULL) {
        M2C_FIELD(&lbl_805D7664, M2C_UNK (**)(s32), 0)(M2C_FIELD(&lbl_805D7664, s32 *, 4));
    }
}

extern M2C_UNK lbl_805D766C;

void TLobby__sub_803D39C0(void) {
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_805D766C, M2C_UNK (**)(s32), 0)) != NULL) {
        M2C_FIELD(&lbl_805D766C, M2C_UNK (**)(s32), 0)(M2C_FIELD(&lbl_805D766C, s32 *, 4));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D3B84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_handle__6TLobbyFPv(u8 *arg0);
extern M2C_UNK (*lbl_805D7678)(s32, M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_803D3988();
M2C_UNK TLobby__sub_803D39C0();

extern M2C_UNK lbl_8047E0C8[];
extern s32 lbl_805D767C;

void release_handle__6TLobbyFPv(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D7678) != NULL) {
            lbl_805D7678(lbl_805D767C, lbl_8047E0C8, 0);
        }
    } else {
        TLobby__sub_803D39C0();
        M2C_FIELD(arg0, s8 *, 1) = 0;
        TLobby__sub_803D3988();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D439C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D439C(s32 arg0, s32 arg1);

extern s32 lbl_805D7678;
extern s32 lbl_805D767C;

void TLobby__sub_803D439C(s32 arg0, s32 arg1) {
    lbl_805D7678 = arg0;
    lbl_805D767C = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D43C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void process_pending_request__6TLobbyFv(void);
void acquire_lock__6TLobbyFv(void);
void TLobby__sub_803D4408(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_803D1FD4();
M2C_UNK lock_enter__6TLobbyFv();

void process_pending_request__6TLobbyFv(void) {
    TLobby__sub_803D1FD4();
}

void acquire_lock__6TLobbyFv(void) {
    lock_enter__6TLobbyFv();
}

void TLobby__sub_803D4408(u8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x74) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D4428
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803D4428(void);
s32 TLobby__sub_803D4430(void);
void TLobby__sub_803D4438(u8 *arg0, s32 arg1);

s32 TLobby__sub_803D4428(void) {
    return 0;
}

s32 TLobby__sub_803D4430(void) {
    return 0;
}

void TLobby__sub_803D4438(u8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D4704
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D4704(u8 *arg0, s32 arg1);

void TLobby__sub_803D4704(u8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D4B68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 get_packet_size__6TLobbyFPv(u8 *arg0);
u32 get_available_size__6TLobbyFPv(u8 *arg0);

u32 get_packet_size__6TLobbyFPv(u8 *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    void **temp_r3;
    u8 *temp_r5;

    if (arg0 == NULL) {
        return -1U;
    }
    temp_r3 = M2C_FIELD(arg0, void ***, 0x28);
    temp_r5 = (unsigned char *) (*temp_r3);
    var_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(temp_r3, 0, temp_r5);
    if (arg0 == NULL) {
        var_r0 = -1;
    } else {
        var_r0 = M2C_FIELD(arg0, u32 *, 8) & 1;
    }
    if (var_r0 == 1) {
        if (arg0 == NULL) {
            var_r0_2 = -1;
        } else {
            var_r0_2 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1U) & 1;
        }
        if ((var_r0_2 == 0) && (var_r3 > 0)) {
            var_r3 = 0x2000;
        }
    }
    return (u32) var_r3 >> 1U;
}

u32 get_available_size__6TLobbyFPv(u8 *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    void **temp_r3;
    u8 *temp_r5;

    if (arg0 == NULL) {
        return -1U;
    }
    temp_r3 = M2C_FIELD(arg0, void ***, 0x28);
    temp_r5 = (unsigned char *) (*temp_r3);
    var_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(temp_r3, 1, temp_r5);
    if (arg0 == NULL) {
        var_r0 = -1;
    } else {
        var_r0 = M2C_FIELD(arg0, u32 *, 8) & 1;
    }
    if (var_r0 == 1) {
        if (arg0 == NULL) {
            var_r0_2 = -1;
        } else {
            var_r0_2 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1U) & 1;
        }
        if ((var_r0_2 == 0) && (var_r3 < 0x2000)) {
            var_r3 = 0;
        }
    }
    return (u32) var_r3 >> 1U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D60A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D60A8(void);
M2C_UNK TLobby__sub_803D6190();

void TLobby__sub_803D60A8(void) {
    TLobby__sub_803D6190();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D6190
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D6190(s32 arg0, s32 arg1);

extern s32 lbl_805D76A0;
extern s32 lbl_805D76A4;

void TLobby__sub_803D6190(s32 arg0, s32 arg1) {
    lbl_805D76A0 = arg0;
    lbl_805D76A4 = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DDD20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803DDD20(s32 arg0);

extern s32 lbl_805D77A0;
extern s32 lbl_805D77A4;

void TLobby__sub_803DDD20(s32 arg0) {
    lbl_805D77A4 = arg0;
    lbl_805D77A0 = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DDD40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803DDD40(s32 arg0, s32 arg1);

extern s32 lbl_805D77A0;
extern s32 lbl_805D77A4;

void TLobby__sub_803DDD40(s32 arg0, s32 arg1) {
    switch (arg1) {
    case 1:
        lbl_805D77A0 += arg0;
        return;
    case 0:
        lbl_805D77A0 = lbl_805D77A4 + arg0;
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DE778
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void move_data__6TLobbyFv(void);
M2C_UNK memmove();

void move_data__6TLobbyFv(void) {
    memmove();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DF1FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_delta__6TLobbyFii(s32 arg0, s32 arg1);

s32 calc_delta__6TLobbyFii(s32 arg0, s32 arg1) {
    return arg1 - arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E2D50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_player_state__6TLobbyFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void reset_player_state__6TLobbyFv(void) {
    TObjPlayer__sub_803E2248();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F4AD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803F4AD8(s32 arg0);

extern s32 lbl_805D79A4;

s32 TLobby__sub_803F4AD8(s32 arg0) {
    if (arg0 < 4) {
        lbl_805D79A4 = arg0;
    }
    return lbl_805D79A4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F4B10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803F4B10(s32 arg0);

extern s32 lbl_805D79A8;

s32 TLobby__sub_803F4B10(s32 arg0) {
    if (arg0 < 2) {
        lbl_805D79A8 = arg0;
    }
    return lbl_805D79A8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F7678
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F7678(void);
s32 TLobby__sub_803F767C(void);

void TLobby__sub_803F7678(void) {

}

s32 TLobby__sub_803F767C(void) {
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F76F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F76F0(void);

void TLobby__sub_803F76F0(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F778C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F778C(void);

void TLobby__sub_803F778C(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F77E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F77E0(void);

void TLobby__sub_803F77E0(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F7980
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F7980(void);

void TLobby__sub_803F7980(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F79AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F79AC(void);
void TLobby__sub_803F79B0(u8 *arg0);
void TLobby__sub_803F79BC(void);

void TLobby__sub_803F79AC(void) {

}

void TLobby__sub_803F79B0(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 8) = 0x28;
}

void TLobby__sub_803F79BC(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F7D54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F7D54(s32 arg0);
void TLobby__sub_803F7D5C(s32 arg0);

extern s32 lbl_805D7A2C;

void TLobby__sub_803F7D54(s32 arg0) {
    lbl_805D7A2C = arg0;
}

extern s32 lbl_805D7A30;

void TLobby__sub_803F7D5C(s32 arg0) {
    lbl_805D7A30 -= arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F808C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F808C(void);

void TLobby__sub_803F808C(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F811C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803F811C(s16 *arg0);

s32 TLobby__sub_803F811C(s16 *arg0) {
    *arg0 = 0;
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F86BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F86BC(void);

void TLobby__sub_803F86BC(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F8794
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F8794(void);
void init_params__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803F87C4(void);
void TLobby__sub_803F87C8(u8 *arg0);
void TLobby__sub_803F87DC(void);

void TLobby__sub_803F8794(void) {

}

extern s16 lbl_805D47FC;
extern s32 lbl_805D4800;
extern s32 lbl_805D7A44;

void init_params__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) lbl_805D47FC;
    M2C_FIELD(arg0, s32 *, 8) = (s32) lbl_805D4800;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) lbl_805D4800;
    M2C_FIELD(arg0, s16 *, 0xA0) = 0x64;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D7A44;
}

void TLobby__sub_803F87C4(void) {

}

extern s16 lbl_805D47FA;
extern s32 lbl_805D7A40;

void TLobby__sub_803F87C8(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) lbl_805D47FA;
    M2C_FIELD(arg0, s32 *, 8) = (s32) lbl_805D7A40;
}

void TLobby__sub_803F87DC(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F8864
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F8864(void);

void TLobby__sub_803F8864(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F88E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F88E0(void);

void TLobby__sub_803F88E0(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F892C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F892C(void);

void TLobby__sub_803F892C(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F8958
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F8958(void);

void TLobby__sub_803F8958(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F89A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F89A0(void);

void TLobby__sub_803F89A0(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F89D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F89D8(void);

void TLobby__sub_803F89D8(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F8A08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F8A08(void);

void TLobby__sub_803F8A08(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F8A24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F8A24(void);

void TLobby__sub_803F8A24(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F8A9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F8A9C(void);

void TLobby__sub_803F8A9C(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F8B78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803F8B78(void);

void TLobby__sub_803F8B78(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F9CF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803F9CF4(s32 arg0);

extern s32 lbl_805D4810;

s32 TLobby__sub_803F9CF4(s32 arg0) {
    if ((arg0 < 0) || (arg0 > 0x1F)) {
        return -1;
    }
    lbl_805D4810 = arg0;
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803FA234
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803FA234(void);
void TLobby__sub_803FA238(u8 *arg0);

void TLobby__sub_803FA234(void) {

}

void TLobby__sub_803FA238(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803FA280
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803FA280(void);

void TLobby__sub_803FA280(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803FC138
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_remaining__6TLobbyFi(s32 arg0);

extern u16 lbl_805D7A78;

s32 get_remaining__6TLobbyFi(s32 arg0) {
    return lbl_805D7A78 - arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803FC458
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_active_flag__6TLobbyFPv(u8 *arg0);

s32 set_active_flag__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA0) = 2;
    M2C_FIELD(arg0, u8 *, 0xA2) = (u8) (M2C_FIELD(arg0, u8 *, 0xA2) | 0x20);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x20);
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803FD08C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & 0xFFFFFFBF);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x80);
    if ((u8) M2C_FIELD(arg0, u8 *, 0) < 1U) {
        M2C_FIELD(arg0, u8 *, 0) = 1U;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803FD490
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803FD490(s16 arg0);
s32 TLobby__sub_803FD4B4(s16 arg0);
s32 TLobby__sub_803FD4D8(s16 arg0);
s32 TLobby__sub_803FD4FC(s16 arg0);

s32 TLobby__sub_803FD490(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FD4B4(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FD4D8(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FD4FC(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803FE844
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803FE844(void);
void TLobby__sub_803FE84C(void);

s32 TLobby__sub_803FE844(void) {
    return 0;
}

void TLobby__sub_803FE84C(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803FF1B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_target_index__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_filter_index__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_filter_id__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_target_slot__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_target_id__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 TLobby__sub_803FF2CC(u8 *arg0, s32 arg1);

s32 set_target_index__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFF7FF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x800);
    }
    return 0;
}

s32 set_filter_index__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFDFF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x200);
    }
    return 0;
}

s32 set_filter_id__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFF7FF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x800);
    }
    return 0;
}

s32 set_target_slot__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFDFF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x200);
    }
    return 0;
}

s32 set_target_id__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFFF7);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 8);
    }
    return 0;
}

s32 TLobby__sub_803FF2CC(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFFF7);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 8);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803FF374
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803FF374(u8 *arg0);

void TLobby__sub_803FF374(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80400988
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80400988(void);

void TLobby__sub_80400988(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80400B98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80400B98(u8 *arg0);

void TLobby__sub_80400B98(u8 *arg0) {
    *M2C_FIELD(arg0, s8 **, 0xC) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80401CE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 get_field_4__6TLobbyFPv(u8 *arg0);

u16 get_field_4__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, u16 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80402E14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 mark_ready__6TLobbyFPv(u8 *arg0);
void set_active__6TLobbyFPv(u8 *arg0);

s32 mark_ready__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x38) = 2;
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 0x20);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x20);
    return 0;
}

void set_active__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x38) = 1;
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 0x10);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x10);
    M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD(arg0, u8 *, 0x3C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80406FA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1);
void init_packet_header__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);

void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 4;
}

void init_packet_header__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 3;
}

void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80414870
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80414870(u8 *arg0);

s32 TLobby__sub_80414870(u8 *arg0) {
    u8 temp_r3;

    if ((u8) M2C_FIELD(arg0, u8 *, 0) != 0xFE) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, u8 *, 1);
    if (!(temp_r3 & 0x80) || (temp_r3 & 0x40)) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8041549C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8041549C(s16 arg0);
s32 TLobby__sub_804154C0(s16 arg0);
s32 TLobby__sub_804154E4(s16 arg0);
s32 TLobby__sub_80415508(s16 arg0);

s32 TLobby__sub_8041549C(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

s32 TLobby__sub_804154C0(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

s32 TLobby__sub_804154E4(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

s32 TLobby__sub_80415508(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8041A994
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_position__6TLobbyFPv(u8 *arg0);

void clear_position__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x25C) = 0;
    M2C_FIELD(arg0, s16 *, 0x25E) = 0;
    M2C_FIELD(arg0, s16 *, 0x260) = 0;
    M2C_FIELD(arg0, s16 *, 0x262) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8041D384
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_slot_index__6TLobbyFPv(u8 *arg0);

void reset_slot_index__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x320) = -1;
    M2C_FIELD(arg0, s32 *, 0x328) = (s32) M2C_FIELD(arg0, s32 *, 0x324);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8041ED24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_534__6TLobbyFPv(u8 *arg0);
s32 get_field_d8__6TLobbyFPv(u8 *arg0);
s32 get_score__6TLobbyFPv(u8 *arg0);
s32 get_queue_diff__6TLobbyFPv(u8 *arg0);
s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);

s32 get_field_534__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534);
}

s32 get_field_d8__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xD8);
}

s32 get_score__6TLobbyFPv(u8 *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0x204) >> 7U) & 1) {
        return M2C_FIELD(arg0, s32 *, 0x34);
    }
    return M2C_FIELD(arg0, s32 *, 0x20) + M2C_FIELD(arg0, s32 *, 0x34);
}

s32 get_queue_diff__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534) - M2C_FIELD(arg0, s32 *, 0xD8);
}

s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0x204) >> 7U) & 1) {
        return M2C_FIELD(arg0, s32 *, 0x530);
    }
    return M2C_FIELD(arg0, s32 *, 0x530) - M2C_FIELD(arg0, s32 *, 0x20);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x804245DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_task_count__6TLobbyFv(void);

extern s32 lbl_805D4820;

s32 get_task_count__6TLobbyFv(void) {
    return lbl_805D4820;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80426440
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80426440(void);

s32 TLobby__sub_80426440(void) {
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80428358
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80428358(void);

s32 TLobby__sub_80428358(void) {
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80429544
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_buffer_pool__6TLobbyFv(void);

extern u32 lbl_805D7C04;
extern s32 lbl_805D7C08;
extern s32 lbl_805D7C0C;
extern u32 lbl_805D7C10;
extern u32 lbl_805D7C14;
extern u32 lbl_805D7C18;
extern s32 lbl_805D7C1C;
extern s32 lbl_805D7C20;
extern s32 lbl_805D7C24;
extern s32 lbl_805D7C28;

void reset_buffer_pool__6TLobbyFv(void) {
    lbl_805D7C0C = 0;
    lbl_805D7C24 = 0;
    lbl_805D7C28 = 0;
    if ((u32) lbl_805D7C04 != 0U) {
        lbl_805D7C10 = lbl_805D7C04;
        lbl_805D7C14 = lbl_805D7C04;
        lbl_805D7C18 = lbl_805D7C04;
        lbl_805D7C1C = lbl_805D7C04 + lbl_805D7C08;
        lbl_805D7C20 = lbl_805D7C08;
        return;
    }
    lbl_805D7C10 = 0U;
    lbl_805D7C14 = 0U;
    lbl_805D7C18 = 0U;
    lbl_805D7C1C = 0;
    lbl_805D7C20 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013998C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8013998C(void);
M2C_UNK TProtocol__sub_801DCAD4(void*);

extern u32 TLobby__data_805D5580;

void TLobby__sub_8013998C(void) {
    if ((u32) TLobby__data_805D5580 != 0U) {
        TProtocol__sub_801DCAD4((void*)TLobby__data_805D5580);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013A4A8
#include "types.h"

extern "C" {

void TLobby__sub_8013A4A8(void* p, void* a1);
s32 TLobby__send_and_handle_60(s32);
int TLobby__sub_8013A4E4(void* a0 = 0);
void TLobby__sub_8013A578(void* p);
void TLobby__sub_8013A5C0(void* p);
s32 TLobby__sub_801E44D8(s32, s32);
void* TObjPlayer__sub_8013A788(void* p, void* a1);
int TObjPlayer__sub_8013A820(void* a0 = 0, void* a1 = 0);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
int bswap_header_fields__6TLobbyFi(void*);
s32 bswap_packet_header__6TLobbyFPv();
int send_command__6TLobbyFPvUi(void* a0 = 0, void* a1 = 0);

void TLobby__sub_8013A4A8(void* p, void* a1) { TLobby__sub_8013A4E4(p); send_command__6TLobbyFPvUi(p, a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A1FD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TLobby__sub_801A2078(s32);
u16 TLobby__sub_801A20C8(s32);
u16 fn_801A210C(s32);
s32 TContainerAncient01__sub_8020335C(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
int TObjRoomId__sub_801A1E2C(void);
void TLobby__sub_801A1FD8(void);

void TLobby__sub_801A1FD8(void) {  }
u16 TLobby__sub_801A1FDC(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (M2C_FIELD(arg0, u16 *, 0x1C) == 0xFFFF) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x30) & 0x70000000;
        switch (temp_r3) {
        case 0x10000000:
            M2C_FIELD(arg0, u16 *, 0x1C) = fn_801A210C(arg1);
            break;
        case 0x20000000:
            M2C_FIELD(arg0, u16 *, 0x1C) = TLobby__sub_801A20C8(arg1);
            break;
        default:
        case 0x40000000:
            M2C_FIELD(arg0, u16 *, 0x1C) = TLobby__sub_801A2078(arg1);
            break;
        }
    }
    return M2C_FIELD(arg0, u16 *, 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80103074
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
extern "C" {
M2C_UNK bswap_pick_up_item_request__6TLobbyFi();
M2C_UNK dispatch_packet__6TLobbyFPv(void *);
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK bswap_pick_up_item_packet__6TLobbyFi();
M2C_UNK TLobby__send_and_handle_60(void *);
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_8010314C();
void set_item_count__6TLobbyFPvs(void* p, s16 v);

}

void send_pick_up_item_request__6TLobbyFi(s32 arg0) {
    bswap_pick_up_item_request__6TLobbyFi();
    dispatch_packet__6TLobbyFPv((void *) (arg0));
}

}

}
#endif
#endif
