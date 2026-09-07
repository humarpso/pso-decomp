#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 close__6TMovieFis(s32 arg0, s16 arg1);

M2C_UNK __dl__FPv(s32);
M2C_UNK release__6TMovieFPv();
M2C_UNK free_buffer__6TMovieFPv(s32);
M2C_UNK TLobby__sub_8022743C();

s32 close__6TMovieFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        release__6TMovieFPv();
        free_buffer__6TMovieFPv(arg0);
        TLobby__sub_8022743C();
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80143BBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void flush_cache__6TMovieFv(void);
M2C_UNK DCStoreRangeNoSync(s32, s32);
M2C_UNK VIFlush();
u32 VIGetNextField();

extern s32 lbl_805D5688;
extern s32 lbl_805D5694;
extern s32 lbl_805D569C;

void flush_cache__6TMovieFv(void) {
    if (VIGetNextField() == 0U) {
        DCStoreRangeNoSync(lbl_805D5688, lbl_805D5694);
        VIFlush();
        lbl_805D569C += 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143C94
#include "types.h"

extern "C" {

void TMovie__sub_80143C94(int a0, int a1, int a2);

    extern int lbl_805D56A0;
    extern int lbl_805D56A4;
    extern int lbl_805D56A8;
void TMovie__sub_80143C94(int a0, int a1, int a2) { lbl_805D56A0 = a0; lbl_805D56A4 = a1; lbl_805D56A8 = a2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143CA4
#include "types.h"

extern "C" {

void flush_and_reset__6TMovieFv(void);
int TMovie__sub_80143CC8(void);
int flush_cache__6TMovieFv(void);
int VIWaitForRetrace(void*);

void flush_and_reset__6TMovieFv(void) { flush_cache__6TMovieFv(); TMovie__sub_80143CC8(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143CC8
#include "types.h"

extern "C" {

int TMovie__sub_80143CC8(void* p);
int VIWaitForRetrace(void*);

int TMovie__sub_80143CC8(void* p) { return VIWaitForRetrace(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143CE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_frame_buffer_size__6TMovieFii(s32 arg0, s32 arg1);

extern void *lbl_805D2CE8;
extern s32 lbl_805D568C;
extern s32 lbl_805D5690;
extern s32 lbl_805D5694;

void calc_frame_buffer_size__6TMovieFii(s32 arg0, s32 arg1) {
    lbl_805D568C = arg0;
    lbl_805D5690 = arg1;
    lbl_805D5694 = ((M2C_FIELD(lbl_805D2CE8, u16 *, 4) + 0xF) & 0xFFF0) * M2C_FIELD(lbl_805D2CE8, u16 *, 8) * 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143E90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 stop_if_advanced__6TMovieFPv(void *arg0);
M2C_UNK TObjPlayer__sub_80084038(M2C_UNK, M2C_UNK, f32);

extern f32 lbl_805DB178;

s32 stop_if_advanced__6TMovieFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x58) >= 2) {
        TObjPlayer__sub_80084038(-1, 0, lbl_805DB178);
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143ECC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_finished__6TMovieFPv(void *arg0);

M2C_UNK TMovie__sub_80143C00();

s32 check_finished__6TMovieFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x58) >= 2) {
        TMovie__sub_80143C00();
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143F38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stop__6TMovieFPv(void *arg0);

M2C_UNK stop_if_advanced__6TMovieFPv();
M2C_UNK check_finished__6TMovieFPv();

void update_stop__6TMovieFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
        check_finished__6TMovieFPv();
        return;
    }
    stop_if_advanced__6TMovieFPv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143F6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release__6TMovieFPv(void *arg0);

void release__6TMovieFPv(void *arg0) {
    void **temp_r3;
    void *temp_r4;

    temp_r3 = M2C_FIELD(arg0, void ***, 4);
    temp_r4 = *temp_r3;
    M2C_FIELD(temp_r4, M2C_UNK (**)(void **, void *), 0x14)(temp_r3, temp_r4);
    M2C_FIELD(arg0, void ***, 4) = NULL;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80144250
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy__6TMovieFPvPv(void* p, void* q);
void free_buffer__6TMovieFPv(void *arg0);
M2C_UNK TObjPlayer__sub_80084614();
M2C_UNK xfree__FPv(void *);

void copy__6TMovieFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(u32*)((char*)p + 0x18) = *(u32*)((char*)q + 0x18); *(u32*)((char*)p + 0x1c) = *(u32*)((char*)q + 0x1c); *(u32*)((char*)p + 0x20) = *(u32*)((char*)q + 0x20); *(u32*)((char*)p + 0x24) = *(u32*)((char*)q + 0x24); *(u32*)((char*)p + 0x28) = *(u32*)((char*)q + 0x28); *(u32*)((char*)p + 0x2c) = *(u32*)((char*)q + 0x2c); *(u32*)((char*)p + 0x30) = *(u32*)((char*)q + 0x30); *(u32*)((char*)p + 0x34) = *(u32*)((char*)q + 0x34); *(u32*)((char*)p + 0x38) = *(u32*)((char*)q + 0x38); *(u32*)((char*)p + 0x3c) = *(u32*)((char*)q + 0x3c); }

extern M2C_UNK (*lbl_805D6B2C)();

void free_buffer__6TMovieFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x9C) != 0U) {
        xfree__FPv(M2C_FIELD(arg0, void **, 0x9C));
        M2C_FIELD(arg0, u32 *, 0x9C) = 0U;
    }
    lbl_805D6B2C();
    TObjPlayer__sub_80084614();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801443C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__6TMovieFv(void *arg0, s16 arg1);
M2C_UNK close__6TMovieFis(u32, M2C_UNK);
M2C_UNK render_until_finished__6TMovieFv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK TLobby__sub_8022776C();
M2C_UNK fn_80320358(u32, M2C_UNK);
M2C_UNK render_tick__Fv();

extern void *__vt__6TMovie[];

void *__dt__6TMovieFv(void *arg0, s16 arg1) {
    M2C_UNK (*temp_r12)(void *);
    u32 t;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__6TMovie;
        render_until_finished__6TMovieFv(arg0);
        render_tick__Fv();
        t = M2C_FIELD(arg0, u32 *, 0x20);
        if (t != 0U) {
            close__6TMovieFis(t, 1);
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        render_tick__Fv();
        render_tick__Fv();
        t = M2C_FIELD(arg0, u32 *, 0x1C);
        if (t != 0U) {
            fn_80320358(t, 1);
            M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
        }
        render_tick__Fv();
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x44);
        if (temp_r12 != NULL) {
            temp_r12(arg0);
        }
        TLobby__sub_8022776C();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80144484
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_until_finished__6TMovieFv(void);

s32 TLobby__sub_800F8FB8();
M2C_UNK render_tick__Fv();
s32 DVDCheckDisk();

void render_until_finished__6TMovieFv(void) {
loop_1:
    if ((DVDCheckDisk() == 0) && (TLobby__sub_800F8FB8() == 0)) {
        render_tick__Fv();
        goto loop_1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801444C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_skip_input__6TMovieFPv(void *arg0);
s32 TMovie__sub_80143EFC(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
s32 TAdEndText__sub_8001B41C();
s32 TLobby__sub_800F8FB8();
M2C_UNK fn_801449E4();
M2C_UNK fn_801449F0();
s32 check_reset_button__16TKeyBoardControlFv();
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, M2C_UNK);
s8 fn_802A1144();
s8 func_801A5E54__Fv();

extern s8 lbl_8050E208[];
extern s8 lbl_8050E3B8[];

s32 check_skip_input__6TMovieFPv(void *arg0) {
    void *var_r31;
    s32 var_r30;
    s8 temp_r3;

    if (TAdEndText__sub_8001B41C() != 0) {
        if ((TLobby__sub_800F8FB8() == 0) || (TMovie__sub_80143EFC(M2C_FIELD(arg0, s32 *, 0x20)) != 0) || (func_801A5E54__Fv() != 0)) {
            if ((TLobby__sub_800F8FB8() == 0) || (func_801A5E54__Fv() != 0)) {
                fn_801449F0();
            }
            return 1;
        }
        goto block_return0;
    }
    temp_r3 = fn_802A1144();
    switch (temp_r3) {
    case 0:
        var_r31 = lbl_8050E3B8 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 4) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 2) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x400) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x200) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 8) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x10) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x20) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x40) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x80) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x20000) != 0) goto block_fn_8000F91C;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 0x10000) != 0) goto block_fn_8000F91C;
        var_r31 = lbl_8050E208 + 0x160;
        if (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(var_r31, 4) != 0) goto block_fn_8000F91C;
        if (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(var_r31, 2) != 0) goto block_fn_8000F91C;
        if (TLobby__sub_800F8FB8() == 0) goto block_fn_8000F91C;
        if (check_reset_button__16TKeyBoardControlFv() != 0) goto block_fn_8000F91C;
        if (TMovie__sub_80143EFC(M2C_FIELD(arg0, s32 *, 0x20)) == 0) goto block_return0;
block_fn_8000F91C:
        TKeyBoardControl__sub_8000F91C(9);
        return 1;
    case 1:
        var_r30 = 0;
        if (check_reset_button__16TKeyBoardControlFv() != 0) {
            var_r30 = 1;
        }
        var_r31 = lbl_8050E3B8 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 2) != 0) goto block_call_func;
        if (TWindowShortListCtrl__check_controller_button(var_r31, 8) != 0) goto block_call_func;
        var_r31 = lbl_8050E208 + 0x160;
        if (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(var_r31, 4) != 0) goto block_call_func;
        if (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(var_r31, 2) != 0) goto block_call_func;
        if (TLobby__sub_800F8FB8() == 0) goto block_call_func;
        if (var_r30 != 0) goto block_call_func;
        if (TMovie__sub_80143EFC(M2C_FIELD(arg0, s32 *, 0x20)) == 0) goto block_return0;
block_call_func:
        if ((func_801A5E54__Fv() != 0) || (var_r30 != 0)) {
            fn_801449E4();
        }
        return 1;
    }
block_return0:
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DCFE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_callback__6TMovieFv(void);
extern M2C_UNK (*lbl_805D7718)();

void run_callback__6TMovieFv(void) {
    if (((M2C_UNK (*)()) lbl_805D7718) != NULL) {
        lbl_805D7718();
    }
}

}
#endif
#endif
