#ifndef PSO_CLASS_PACKAGE
#include "pso/TSaveChCr.h"

void TSaveChCr::run_task() {}

TSaveChCr::~TSaveChCr() {}
#else
#if PSO_CLASS_PACKAGE == 0x80339B64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8000F9CC(s32);
s32 poll_memcard_status();
s32 TSaveChCr__sub_8033A138(void *);
s32 save_character__9TSaveChCrFPv(void *);
int TKeyBoardControl__sub_8000F9B0(void);
int TSaveChCr__sub_80339F30(void*);
int TSaveChCr__sub_8033A184(void*, void*);
int queue_destruction__7TObjectFv(void*);
void destroy_if_keyboard_idle__9TSaveChCrFPv(void* p);
void save_if_dirty__9TSaveChCrFPv(void* p);
int TSaveChCr__sub_80339B94(void* p);
int close_and_advance_to_3__9TSaveChCrFPv(void* p);
int close_and_advance_step2__9TSaveChCrFPv(void* p);
void TSaveChCr__sub_80339CE4(void);
int save_1__9TSaveChCrFPv(void* p);
int close_and_advance__9TSaveChCrFPvPv(void*, int);
int close_window__9TSaveChCrFPv(void*);

void destroy_if_keyboard_idle__9TSaveChCrFPv(void* p) { if (*(int*)((char*)p + 0x38) == 0) { queue_destruction__7TObjectFv(p); TKeyBoardControl__sub_8000F9B0(); } }
int TSaveChCr__sub_80339B94(void* p) { return close_window__9TSaveChCrFPv(p); }
void save_if_dirty__9TSaveChCrFPv(void* p) { if (TSaveChCr__sub_80339F30(p) != 0) { TSaveChCr__sub_8033A184(p, (void*)4); } }
int close_and_advance_to_3__9TSaveChCrFPv(void* p) { return close_and_advance__9TSaveChCrFPvPv(p, 3); }
void update_save_status__9TSaveChCrFPv(void *arg0) {
    s32 var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = poll_memcard_status();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
            TSaveChCr__sub_8033A184((void*)(arg0), (void*)(1));
            return;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
            var_r3 = save_character__9TSaveChCrFPv(arg0);
        } else {
            var_r3 = TSaveChCr__sub_8033A138(arg0);
        }
        if (var_r3 == 7) {
            TSaveChCr__sub_8033A184((void*)(arg0), (void*)(4));
            return;
        }
        queue_destruction__7TObjectFv((void*)(arg0));
        TKeyBoardControl__sub_8000F9CC(9);
    }
}
int close_and_advance_step2__9TSaveChCrFPv(void* p) { return close_and_advance__9TSaveChCrFPvPv(p, 2); }
void TSaveChCr__sub_80339CE4(void) {  }
int save_1__9TSaveChCrFPv(void* p) { return close_and_advance__9TSaveChCrFPvPv(p, 1); }
void update_save_state__9TSaveChCrFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (!(temp_r4 & 2)) {
        if (temp_r4 & 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
                close_and_advance__9TSaveChCrFPvPv((void*)(arg0), 0);
            }
        } else {
            if (temp_r4 & 4) {
                TSaveChCr__sub_8033A184((void*)(arg0), (void*)(1));
                return;
            }
            if (temp_r4 == 0) {
                TSaveChCr__sub_8033A184((void*)(arg0), (void*)(2));
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80339F30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TSaveChCr__sub_80339F30(void);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);

s32 TSaveChCr__sub_80339F30(void) {
    return TObjCMProportion__sub_8029916C(4) ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033A088
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindow__close(void *);
int begin_action_from_char_select__10TObjPlayerFv(void*);
int TSaveChCr__sub_8033A138(void);
int TAdSinglePlyChrSelectGC__sub_801FF5E4(void*);

void close_window__9TSaveChCrFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        M2C_FIELD(arg0, s32 *, 0x38) = 7;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033A138
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindow__close(void *);
int begin_action_from_char_select__10TObjPlayerFv(void*);
int TSaveChCr__sub_8033A138(void);
int TAdSinglePlyChrSelectGC__sub_801FF5E4(void*);

int TSaveChCr__sub_8033A138(void) { return TAdSinglePlyChrSelectGC__sub_801FF5E4((void*)(0)); }
void save_character__9TSaveChCrFPv(void* p) { begin_action_from_char_select__10TObjPlayerFv(p); TAdSinglePlyChrSelectGC__sub_801FF5E4((void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033A3D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__9TSaveChCrFPv(void *arg0);
void *TSaveChCr__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *create__9TSaveChCrFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = TSaveChCr__ct(o, tl_03, arg0);
    }
    return o;
}

}
#endif
#endif
