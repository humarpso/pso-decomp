#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_kanji_mode__19TWindowKeyBoardSoftFPv(void *arg0);
void set_kana_mode__19TWindowKeyBoardSoftFPv(void *arg0);
M2C_UNK update_input__19TWindowKeyBoardSoftFPvPv(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_803E66D0(void *, M2C_UNK *);
M2C_UNK TWindowKeyBoardSoft__sub_803E6704(void *, M2C_UNK *);

void set_kanji_mode__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp8[0x200];

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        TWindowKeyBoardSoft__sub_803E66D0(sp8, (M2C_UNK *)(sp8 + 0x100));
        M2C_FIELD(arg0, s32 *, 0xA8) = 0xF0;
        update_input__19TWindowKeyBoardSoftFPvPv(arg0, sp8);
    }
}

void set_kana_mode__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp8[0x200];

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        TWindowKeyBoardSoft__sub_803E6704(sp8, (M2C_UNK *)(sp8 + 0x100));
        M2C_FIELD(arg0, s32 *, 0xA8) = 0xF1;
        update_input__19TWindowKeyBoardSoftFPvPv(arg0, sp8);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80080BCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void delete_chars__19TWindowKeyBoardSoftFPvii(u8 *arg0, s32 arg1, s32 arg2);
void delete_char__19TWindowKeyBoardSoftFPv(u8 *arg0);

void delete_chars__19TWindowKeyBoardSoftFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    u16 *var_r4;
    u16 *var_r6;
    u16 temp_r0;

    var_r6 = (unsigned short *) (M2C_FIELD(arg0, s32 *, 0) + (arg1 * 2));
    if ((s32) *var_r6 != 0) {
        var_r4 = var_r6 + arg2;
        do {
            *var_r6 = *var_r4;
            var_r6 += 1;
            temp_r0 = *var_r4;
            var_r4 += 1;
        } while ((s32) temp_r0 != 0);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - arg2);
    }
}

void delete_char__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    u16 *var_r4;
    u16 *var_r5;
    u16 temp_r0;

    var_r5 = (unsigned short *) (M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) * 2));
    if ((s32) *var_r5 != 0) {
        var_r4 = var_r5 + 1;
        do {
            *var_r5 = *var_r4;
            var_r5 += 1;
            temp_r0 = *var_r4;
            var_r4 += 1;
        } while ((s32) temp_r0 != 0);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008100C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state__19TWindowKeyBoardSoftFPv(void *arg0);

void reset_state__19TWindowKeyBoardSoftFPv(void *arg0) {
    s16 *temp_r3;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_r3 = M2C_FIELD(arg0, s16 **, 0);
    if (temp_r3 != NULL) {
        *temp_r3 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132A5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Inner_80132A5C { char pad8[0x8]; u32 f8; };
struct Outer_80132A5C { struct Inner_80132A5C *f0; };

extern "C" {

void free_instance__19TWindowKeyBoardSoftFv(void);
M2C_UNK TLobby__sub_803DA16C(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

extern struct Outer_80132A5C *lbl_805D5540;

void free_instance__19TWindowKeyBoardSoftFv(void) {
    if (lbl_805D5540 != NULL) {
        struct Inner_80132A5C *inner = lbl_805D5540->f0;
        if (inner->f8 != 0U) {
            TLobby__sub_803DA16C(lbl_805D5540);
        }
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5540);
        lbl_805D5540 = NULL;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132AA8
#include "types.h"

extern "C" {

void free_resources__19TWindowKeyBoardSoftFv(void);
int TLobby__sub_800F957C(void*);

    extern int lbl_805D5538;
    extern int lbl_805D553C;
    extern int TWindowKeyBoardSoft__data_805D5548;
void free_resources__19TWindowKeyBoardSoftFv(void) { TLobby__sub_800F957C((void*)(lbl_805D5538)); TWindowKeyBoardSoft__data_805D5548 = 0; lbl_805D553C = 0; lbl_805D5538 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80132E58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_language__19TWindowKeyBoardSoftFc(s8 arg0);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TLanguage__ct(s32);
M2C_UNK free_instance__19TWindowKeyBoardSoftFv();
M2C_UNK TWindowKeyBoardSoft__sub_80132DA0(s8);
M2C_UNK free_resources__19TWindowKeyBoardSoftFv();

extern s32 lbl_805D5544;

s32 set_language__19TWindowKeyBoardSoftFc(s8 arg0) {
    void *temp_r3;

    if ((s32) lbl_805D5544 == arg0) {
        return 0;
    }
    free_instance__19TWindowKeyBoardSoftFv();
    free_resources__19TWindowKeyBoardSoftFv();
    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s8 *, 7) = arg0;
    }
    lbl_805D5544 = (s32)(s8) arg0;
    TWindowKeyBoardSoft__sub_80132DA0((s8) lbl_805D5544);
    TLanguage__ct(lbl_805D5544);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80228BEC
#include "types.h"

extern "C" {

s32 strnlen__19TWindowKeyBoardSoftFPvUi(s8 *str, u32 max);

s32 strnlen__19TWindowKeyBoardSoftFPvUi(s8 *str, u32 max) {
    u32 i;
    if (str == 0) {
        return 0;
    }
    i = 0;
    while (*str != 0) {
        if (i >= max) {
            return max;
        }
        str++;
        i++;
    }
    return i;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024E838
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_bounds__19TWindowKeyBoardSoftFPvffff(void* p, f32 a, f32 b, f32 c, f32 d);
void TWindowKeyBoardSoft__sub_8024E84C(void *arg0);
void animate_scale__19TWindowKeyBoardSoftFPv(void *arg0);
s32 is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(void *arg0, void *arg1);

void set_bounds__19TWindowKeyBoardSoftFPvffff(void* p, f32 a, f32 b, f32 c, f32 d) { *(f32*)((char*)p + 0x3c) = a; *(f32*)((char*)p + 0x40) = b; *(f32*)((char*)p + 0x44) = c; *(f32*)((char*)p + 0x48) = d; }

extern const f32 lbl_805DCC8C;

void TWindowKeyBoardSoft__sub_8024E84C(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) - lbl_805DCC8C);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg0, f32 *, 0x44) - lbl_805DCC8C);
}

extern const f32 lbl_805DCC90;

void animate_scale__19TWindowKeyBoardSoftFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + lbl_805DCC90);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - lbl_805DCC90);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + lbl_805DCC90);
}

s32 is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg1, f32 *, 8) < M2C_FIELD(arg0, f32 *, 0x3C)) || (M2C_FIELD(arg1, f32 *, 0xC) < M2C_FIELD(arg0, f32 *, 0x40)) || (M2C_FIELD(arg1, f32 *, 0) > M2C_FIELD(arg0, f32 *, 0x44)) || (M2C_FIELD(arg1, f32 *, 4) > M2C_FIELD(arg0, f32 *, 0x48))) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024EA00
#include "types.h"

extern "C" {

s32 try_open__19TWindowKeyBoardSoftFii(s32 arg0, s32 arg1);
int TWindowKeyBoardSoft__sub_8024E6D8(s32, s32);
s32 TWindowKeyBoardSoft__sub_8024E8E8();

s32 try_open__19TWindowKeyBoardSoftFii(s32 arg0, s32 arg1) {
    if (TWindowKeyBoardSoft__sub_8024E8E8() == 0) {
        return 0;
    }
    TWindowKeyBoardSoft__sub_8024E6D8(arg0, arg1);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024EDA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 open_singleton__19TWindowKeyBoardSoftFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TWindowKeyBoardSoft__sub_8024EA50(u32, s32, s32, s32, s32);

extern u32 lbl_805D6420;

u32 open_singleton__19TWindowKeyBoardSoftFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((u32) lbl_805D6420 == 0U) {
        return 0U;
    }
    TWindowKeyBoardSoft__sub_8024EA50(lbl_805D6420, arg0, arg1, arg2, arg3);
    return lbl_805D6420;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024EE44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 free_singleton__19TWindowKeyBoardSoftFUis(u32 arg0, s16 arg1);
void init_layout__19TWindowKeyBoardSoftFPv(void* a0);
M2C_UNK __dl__FPv(u32);

extern u32 lbl_805D6420;

u32 free_singleton__19TWindowKeyBoardSoftFUis(u32 arg0, s16 arg1) {
    if (arg0 != 0U) {
        if ((u32) lbl_805D6420 == arg0) {
            lbl_805D6420 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

    extern const float lbl_805DCC78;
    extern const float lbl_805DCC94;
void init_layout__19TWindowKeyBoardSoftFPv(void* a0) { *(float*)((char*)a0 + 0x0) = lbl_805DCC94; *(float*)((char*)a0 + 0x4) = lbl_805DCC94; *(float*)((char*)a0 + 0x8) = lbl_805DCC94; *(float*)((char*)a0 + 0xc) = lbl_805DCC94; *(float*)((char*)a0 + 0x10) = lbl_805DCC94; *(float*)((char*)a0 + 0x14) = lbl_805DCC94; *(float*)((char*)a0 + 0x18) = lbl_805DCC94; *(float*)((char*)a0 + 0x1c) = lbl_805DCC94; *(float*)((char*)a0 + 0x3c) = lbl_805DCC94; *(float*)((char*)a0 + 0x40) = lbl_805DCC94; *(float*)((char*)a0 + 0x44) = lbl_805DCC94; *(float*)((char*)a0 + 0x48) = lbl_805DCC94; *(float*)((char*)a0 + 0x20) = lbl_805DCC94; *(float*)((char*)a0 + 0x24) = lbl_805DCC94; *(float*)((char*)a0 + 0x28) = lbl_805DCC78; *(float*)((char*)a0 + 0x2c) = lbl_805DCC78; *(int*)((char*)a0 + 0x30) = 0; *(int*)((char*)a0 + 0x34) = -1; *(float*)((char*)a0 + 0x38) = lbl_805DCC94; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B8C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
int is_flag_4_set__17TWindowSubComCardFPv(void* p);
s32 get_state__19TWindowKeyBoardSoftFPv(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);

s32 get_state__19TWindowKeyBoardSoftFPv(void* p) { return *(s32*)((char*)p + 0x70); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B928
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
int is_flag_4_set__17TWindowSubComCardFPv(void* p);
s32 get_state__19TWindowKeyBoardSoftFPv(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);

void TWindowKeyBoardSoft__sub_8025B928(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B9D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
int is_flag_4_set__17TWindowSubComCardFPv(void* p);
s32 get_state__19TWindowKeyBoardSoftFPv(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);

void update_input_state__19TWindowKeyBoardSoftFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            update__19TWindowKeyBoardSoftFPv();
            return;
        }
        select_next__19TWindowKeyBoardSoftFPv();
        return;
    }
    if (temp_r4 & 2) {
        convert_input_text__19TWindowKeyBoardSoftFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025C3EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
int is_flag_4_set__17TWindowSubComCardFPv(void* p);
s32 get_state__19TWindowKeyBoardSoftFPv(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);

void update_input_state2__19TWindowKeyBoardSoftFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            update__19TWindowKeyBoardSoftFPv();
            return;
        }
        select_next__19TWindowKeyBoardSoftFPv();
        return;
    }
    if (temp_r4 & 2) {
        convert_input_text__19TWindowKeyBoardSoftFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025C5F4
#include "types.h"

extern "C" {

int get_field_6c__19TWindowKeyBoardSoftFPv(void* p);
int TWindowKeyBoardSoft__sub_8008081C(void*);

int get_field_6c__19TWindowKeyBoardSoftFPv(void* p) { return TWindowKeyBoardSoft__sub_8008081C((char*)p + 0x6c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025C7BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
M2C_UNK reset_state__19TWindowKeyBoardSoftFPv(void *);

void init__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    reset_state__19TWindowKeyBoardSoftFPv(arg0 + 0x84);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (arg0 + 0x6C);
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & ~0x86);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025CB04
#include "types.h"

extern "C" {

int get_flag__11TWindowChatFPv(void* a0 = 0);
int TWindowChat__sub_8025CB70(void* a0 = 0);
void flush_if_flagged__11TWindowChatFPv(void* p);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);

int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025D338
#include "types.h"

extern "C" {

void update_input__19TWindowKeyBoardSoftFPvPv(void* p, void* a1);
int TWindowKeyBoardSoft__sub_8025D1C8(void*, void*);
int TWindowKeyBoardSoft__sub_8025D264(void*, void*);

void update_input__19TWindowKeyBoardSoftFPvPv(void* p, void* a1) { TWindowKeyBoardSoft__sub_8025D1C8(p, *(void**)((char*)p + 0xa0)); TWindowKeyBoardSoft__sub_8025D264(p, a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025D774
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void process_input__19TWindowKeyBoardSoftFPv(u8 *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_8025CF50(void *, int, int);
s32 TWindowKeyBoardSoft__sub_803E676C(void *, void *);

void process_input__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    u8 sp108[0x100];
    u8 sp8[0x100];
    s32 temp_r3;
    u8 *temp_r5;

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        temp_r3 = TWindowKeyBoardSoft__sub_803E676C((void *) (sp8), (void *) (sp108));
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0xAC) = temp_r3;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xA0), u8 *, 2) = (u8) M2C_FIELD(arg0, s32 *, 0xA8);
            temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA0));
            M2C_FIELD(arg0, void **, 0xA0) = (void *) (temp_r5 - ((s8) M2C_FIELD(temp_r5, u8 *, 0) + 3));
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xA0), u8 *, 2);
            TWindowKeyBoardSoft__sub_8025CF50((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xA8)), (int) (temp_r5));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025D994
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_next__19TWindowKeyBoardSoftFPv(void *arg0);
void update__19TWindowKeyBoardSoftFPv(void *arg0);
M2C_UNK update_input__19TWindowKeyBoardSoftFPvPv(void *, void *);
s32 TWindowKeyBoardSoft__sub_8025D378(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_803E6868(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_803E689C(void *, void *);

void select_next__19TWindowKeyBoardSoftFPv(void *arg0) {
    struct { u8 _pad[0x100]; } sp108;
    struct { u8 _pad[0x100]; } sp8;

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        do {
            TWindowKeyBoardSoft__sub_803E6868(&sp8, &sp108);
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) > (s32) M2C_FIELD(arg0, s32 *, 0xAC)) {
                M2C_FIELD(arg0, s32 *, 0xA8) = 1;
            }
        } while (TWindowKeyBoardSoft__sub_8025D378(arg0, &sp8) == 0);
        update_input__19TWindowKeyBoardSoftFPvPv(arg0, &sp8);
    }
}

void update__19TWindowKeyBoardSoftFPv(void *arg0) {
    u8 sp108[0x100];
    u8 sp8[0x100];

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        do {
            TWindowKeyBoardSoft__sub_803E689C(sp8, sp108);
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(arg0, s32 *, 0xAC);
            }
        } while (TWindowKeyBoardSoft__sub_8025D378(arg0, sp8) == 0);
        update_input__19TWindowKeyBoardSoftFPvPv(arg0, sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025DA98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void convert_input_text__19TWindowKeyBoardSoftFPv(void *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_8025CFA8(void *, M2C_UNK *);
M2C_UNK TWindowKeyBoardSoft__sub_8025D47C(void *, M2C_UNK *, s8 *);
s32 TWindowKeyBoardSoft__sub_8025D544(void *, M2C_UNK *, s8 *);
s32 fn_8025CE00(void *, u8 *);
M2C_UNK TWindowKeyBoardSoft__sub_8025DBDC(void *, M2C_UNK);
s32 TWindowKeyBoardSoft__sub_803E68D0(u8 *, M2C_UNK *, s8 *);

M2C_UNK strncpy(M2C_UNK *, u8 *, M2C_UNK);

void convert_input_text__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp108[0x100];
    s8 sp8[0x100];
    u16 *var_r3;
    int temp_r0;
    u8 *var_r4;

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x80)) {
        TWindowKeyBoardSoft__sub_8025DBDC(arg0, 1);
    }
    var_r3 = M2C_FIELD(arg0, u16 **, 0x84);
    var_r4 = M2C_FIELD(arg0, u8 **, 0x9C);
    while ((temp_r0 = *var_r3) != 0) {
        *var_r4 = (u8) (temp_r0 >> 8);
        if ((s8) *var_r4 != 0) {
            var_r4 += 1;
        }
        temp_r0 = *var_r3;
        var_r3 = (u16 *)((u8 *)var_r3 + 2);
        *var_r4 = (u8) temp_r0;
        var_r4 += 1;
    }
    *var_r4 = 0;
    M2C_FIELD(arg0, u8 **, 0xA0) = (u8 *) M2C_FIELD(arg0, u8 **, 0x9C);
    if (fn_8025CE00(arg0, M2C_FIELD(arg0, u8 **, 0x9C)) != 0) {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x10);
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        M2C_FIELD(arg0, s32 *, 0xA8) = 1;
        strncpy((M2C_UNK *)sp8, M2C_FIELD(arg0, u8 **, 0x9C), 0x100);
        sp108[0] = 0;
    } else {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & 0xFFFFFFEF);
        M2C_FIELD(arg0, s32 *, 0xAC) = TWindowKeyBoardSoft__sub_803E68D0(M2C_FIELD(arg0, u8 **, 0x9C), (M2C_UNK *)sp8, sp108);
        M2C_FIELD(arg0, s32 *, 0xA8) = 1;
        TWindowKeyBoardSoft__sub_8025CFA8(arg0, (M2C_UNK *)sp8);
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = 0x94;
    if (TWindowKeyBoardSoft__sub_8025D544(arg0, (M2C_UNK *)sp8, sp108) != 0) {
        TWindowKeyBoardSoft__sub_8025D47C(arg0, (M2C_UNK *)sp8, sp108);
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80260450
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_cursor_step__19TWindowKeyBoardSoftFiPvPv(s32 arg0, s32 *arg1, s32 *arg2);
s32 TWindowSubMag__sub_802627D8(s32);
s32 is_cursor_locked__13TWindowSubMagFPv(s32);
s32 get_flag_bit6__13TWindowSubMagFPv(s32);
s32 get_flag_bit5__13TWindowSubMagFPv();

extern s32 lbl_805D5544;

void calc_cursor_step__19TWindowKeyBoardSoftFiPvPv(s32 arg0, s32 *arg1, s32 *arg2) {
    switch ((s32) lbl_805D5544) {
    case 0:
        if ((get_flag_bit5__13TWindowSubMagFPv() != 0) || (get_flag_bit6__13TWindowSubMagFPv(arg0) != 0) || (is_cursor_locked__13TWindowSubMagFPv(arg0) != 0)) {
            *arg1 = 4;
            *arg2 = 4;
            return;
        }
        if (TWindowSubMag__sub_802627D8(arg0) != 0) {
            *arg1 = 4;
            *arg2 = 5;
            return;
        }
        *arg1 = 0;
        *arg2 = 5;
        return;
    case 1:
        if ((get_flag_bit5__13TWindowSubMagFPv() != 0) || (get_flag_bit6__13TWindowSubMagFPv(arg0) != 0) || (is_cursor_locked__13TWindowSubMagFPv(arg0) != 0)) {
            *arg1 = 0;
            *arg2 = 0;
            return;
        }
        *arg1 = 0;
        *arg2 = 1;
        return;
    case 2:
    case 3:
    case 4:
        if ((get_flag_bit5__13TWindowSubMagFPv() != 0) || (get_flag_bit6__13TWindowSubMagFPv(arg0) != 0) || (is_cursor_locked__13TWindowSubMagFPv(arg0) != 0)) {
            *arg1 = 0;
            *arg2 = 0;
            return;
        }
        if (TWindowSubMag__sub_802627D8(arg0) != 0) {
            *arg1 = 0;
            *arg2 = 1;
            return;
        }
        *arg1 = 0;
        *arg2 = 2;
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802606D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_key_index__19TWindowKeyBoardSoftFiii(s32 arg1, s32 arg2, s32 arg3);

s32 calc_key_index__19TWindowKeyBoardSoftFiii(s32 arg1, s32 arg2, s32 arg3) {
    return arg2 + (arg3 * 0x10);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026119C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_focus_flags__19TWindowKeyBoardSoftFPv(void *arg0);

extern s32 lbl_805D5544;

void update_focus_flags__19TWindowKeyBoardSoftFPv(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;

    if ((s32) lbl_805D5544 != 0) {
        if ((s32) lbl_805D5544 < 0) {
            return;
        }
        return;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x64) == 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r4, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r4, s32 *, 0xB4) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r3, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3, s32 *, 0xB4) & 0xFFFFFFBF);
        return;
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x6C);
    M2C_FIELD(temp_r4_2, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0xB4) & 0xFFFFFFFE);
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x6C);
    M2C_FIELD(temp_r3_2, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0xB4) | 0x40);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80261440
#include "types.h"

extern "C" {

void close__19TWindowKeyBoardSoftFPv(void* p);
int fn_8025CD10(void*);
int update_focus_flags__19TWindowKeyBoardSoftFPv(void*);

void close__19TWindowKeyBoardSoftFPv(void* p) { if (*(unsigned int*)((char*)p + 0x6c) != 0) { fn_8025CD10(*(void**)((char*)p + 0x6c)); update_focus_flags__19TWindowKeyBoardSoftFPv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026262C
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowKeyBoardSoft__sub_8026262C(void *arg0);
s32 is_key_active__16TKeyBoardControlFPv(u32);
M2C_UNK TWindowKeyBoardSoft__sub_80260904(void *, s32);
M2C_UNK TWindowKeyBoardSoft__sub_80260E30(void *, s32);
s32 fn_80244994();
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
s32 is_player_input_active(s16);
M2C_UNK TWindowKeyBoardSoft__sub_80260808(void *, s32);
M2C_UNK TWindowKeyBoardSoft__sub_8026088C(void *, s32);
M2C_UNK TWindowKeyBoardSoft__sub_80261204(void *, s32);

extern const f32 lbl_805DD0D4;

void TWindowKeyBoardSoft__sub_8026262C(void *arg0) {
    f32 temp_f0;
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        if ((fn_80244994() != 0) && (is_key_active__16TKeyBoardControlFPv(M2C_FIELD(arg0, u32 *, 0x6C)) == 0)) {
            temp_r3 = is_player_input_active(M2C_FIELD(arg0, s16 *, 0x20));
            TWindowKeyBoardSoft__sub_80261204(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_80260E30(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_80260904(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_8026088C(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_80260808(arg0, temp_r3);
        }
        initialize_subwindow__9TWindowDDFPv(arg0);
        update_fade__17TWindowSubComCardFPv(arg0);
        M2C_FIELD(arg0, f32 *, 0x68) -= lbl_805DD0D4 * M2C_FIELD(arg0, f32 *, 0x68);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802626E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__19TWindowKeyBoardSoftFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804D0004[];

void *destroy__19TWindowKeyBoardSoftFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0004;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
