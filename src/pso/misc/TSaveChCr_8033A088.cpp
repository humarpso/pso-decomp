#include "pso/TSaveChCr.h"

void TSaveChCr::run_task() {}

TSaveChCr::~TSaveChCr() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033A34C___vt__9TSaveChCr {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void *__nw__7TObjectFUl(int);
void *__ct__9TAdBackGCFv(void *, void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 poll_memcard_status(void *);
void TSaveChCr__sub_8033A0D0(void *arg0);
void TSaveChCr__sub_8033A184(void *, s32);
extern RecoveredGlobal_8033A34C___vt__9TSaveChCr __vt__9TSaveChCr;
extern s32 lbl_805D4280;
u8 *TSaveChCr__ct(u8 *arg0, u8 *arg1, s32 arg2);
}

extern "C" {

int TSaveChCr__sub_8033A138(void);
void close_window__9TSaveChCrFPv(void *arg0);
void *create__9TSaveChCrFPv(void *arg0);
void save_character__9TSaveChCrFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_801FF5E4(void*);
s32 TWindow__close(void *);
void *__nw__7TObjectFUl(int);
int begin_action_from_char_select__10TObjPlayerFv(void*);

void close_window__9TSaveChCrFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        M2C_FIELD(arg0, s32 *, 0x38) = 7;
    }
}

void TSaveChCr__sub_8033A0D0(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = __ct__9TAdBackGCFv(o, arg0);
    }
    M2C_FIELD(arg0, void **, 0x30) = o;
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        o2 = __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    M2C_FIELD(arg0, void **, 0x34) = o2;
}

int TSaveChCr__sub_8033A138(void) { return TAdSinglePlyChrSelectGC__sub_801FF5E4((void*)(0)); }
void save_character__9TSaveChCrFPv(void* p) { begin_action_from_char_select__10TObjPlayerFv(p); TAdSinglePlyChrSelectGC__sub_801FF5E4((void*)1); }

extern void *tl_03;

typedef char RecoveredGlobal_8033A34C___vt__9TSaveChCr_size[sizeof(RecoveredGlobal_8033A34C___vt__9TSaveChCr) == 0x18 ? 1 : -1];
u8 *TSaveChCr__ct(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__9TSaveChCr.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4280;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = poll_memcard_status(arg0);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    TSaveChCr__sub_8033A0D0(arg0);
    TSaveChCr__sub_8033A184(arg0, 0);
    return arg0;
}

void *create__9TSaveChCrFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = TSaveChCr__ct((u8 *)(o), (u8 *)(tl_03), (s32)(arg0));
    }
    return o;
}

}
