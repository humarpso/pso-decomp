#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void release_keyboard__19TWindowKeyBoardHardFPv(void* p);
int TWindowKeyBoardHard__sub_8025CC48(void*);

void release_keyboard__19TWindowKeyBoardHardFPv(void* p) { void* m = *(void**)((char*)p + 0x70); if (m) TWindowKeyBoardHard__sub_8025CC48(m); }

}
#else
#if PSO_CLASS_PACKAGE == 0x801FBA48
#include "types.h"

extern "C" {

int is_card_flag_set__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int is_card_flag_set__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025EB68
#include "types.h"

extern "C" {

int TWindowKeyBoardHard__sub_8025EB68(void* p);
int call_1A529C_with_32__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_0x80__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_16__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_64__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int TWindowKeyBoardHard__sub_8025EB68(void* p) { return (*(u16*)((char*)p + 0x60) >> 3) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025EB74
#include "types.h"

extern "C" {

int TWindowKeyBoardHard__sub_8025EB68(void* p);
int test_card_flag_0x80__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_64__19TWindowKeyBoardHardFPv(void* p);
int call_1A529C_with_32__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_16__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int test_card_flag_0x80__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 128); }
int test_card_flag_64__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 64); }
int call_1A529C_with_32__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 32); }
int test_card_flag_16__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 16); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026017C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TWindowKeyBoardHardFv(void *arg0);
s32 is_key_active__19TWindowKeyBoardHardFPv();
s32 draw_default_entry__9TWindowDDFi(void *);
M2C_UNK TWindowKeyBoardHard__sub_80260020(void *, s32);

void render__19TWindowKeyBoardHardFv(void *arg0) {
    s32 temp;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x68) > 0) && (is_key_active__19TWindowKeyBoardHardFPv() == 0)) {
        temp = draw_default_entry__9TWindowDDFi(arg0);
        TWindowKeyBoardHard__sub_80260020(arg0, temp);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802601D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TWindowKeyBoardHardFv(void *arg0, s16 arg1);
void run_task__19TWindowKeyBoardHardFv(void *arg0);
s32 is_key_active__16TKeyBoardControlFPv(void *);
s32 is_key_active__19TWindowKeyBoardHardFPv();
void __dl__7TObjectFPv(void *);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK TWindowKeyBoardHard__sub_8025CC48(void *);
s32 TKeyBoardControl__sub_8025EC54(void *);
M2C_UNK TKeyBoardControl__sub_8025FBE8(void *);
M2C_UNK TKeyBoardControl__sub_8025FC60(void *);

extern s32 lbl_805D5544;

void run_task__19TWindowKeyBoardHardFv(void *arg0) {
    s32 temp_r3_2;
    void *temp_r3;

    if ((void *) M2C_FIELD(arg0, void **, 0x70) != NULL) {
        if ((is_key_active__19TWindowKeyBoardHardFPv() == 0) && (is_key_active__16TKeyBoardControlFPv(M2C_FIELD(arg0, void **, 0x70)) == 0)) {
            if (TKeyBoardControl__sub_8025EC54(arg0) != 0) {
                if ((s32) lbl_805D5544 == 0) {
                    M2C_FIELD(arg0, s32 *, 0x68) = 0x3C;
                }
                M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFEFF);
                temp_r3 = M2C_FIELD(arg0, void **, 0x70);
                M2C_FIELD(temp_r3, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3, s32 *, 0xB4) & 0xFFFFFFBF);
                if (!(M2C_FIELD(arg0, s32 *, 0x60) & 0x40)) {
                    TWindowKeyBoardHard__sub_8025CC48(M2C_FIELD(arg0, void **, 0x70));
                }
            }
            TKeyBoardControl__sub_8025FC60(arg0);
            TKeyBoardControl__sub_8025FBE8(arg0);
        }
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x68);
        if (temp_r3_2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (temp_r3_2 - 1);
        }
        initialize_subwindow__9TWindowDDFPv(arg0);
        update_fade__17TWindowSubComCardFPv(arg0);
    }
}

extern M2C_UNK __vt__19TWindowKeyBoardHard[];

void *__dt__19TWindowKeyBoardHardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowKeyBoardHard;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026038C
#include "types.h"

extern "C" {

void set_bits_shift7__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1);
void update_card_window_page_flags__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1);
void clear_card_window_flag__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1);
void set_card_window_flag__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1);
int TWindowKeyBoardHard__sub_8026042C(void* p);
int TWindowKeyBoardHard__sub_80260438(void* p);
int is_key_active__19TWindowKeyBoardHardFPv(void* p);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);

void set_bits_shift7__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 7, -0x81);
}
void update_card_window_page_flags__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 6, -0x41);
}
void clear_card_window_flag__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 4, -0x11);
}
void set_card_window_flag__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 5, -0x21);
}
int TWindowKeyBoardHard__sub_8026042C(void* p) { return (*(u32*)((char*)p + 0x60) >> 6) & 0x1; }
int TWindowKeyBoardHard__sub_80260438(void* p) { return (*(u32*)((char*)p + 0x60) >> 10) & 0x1; }
int is_key_active__19TWindowKeyBoardHardFPv(void* p) { return *(u32*)((char*)p + 0x60) & 0x200; }

}
#endif
#endif
