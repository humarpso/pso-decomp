#include "pso/TSaveChCr.h"

void TSaveChCr::run_task() {}

TSaveChCr::~TSaveChCr() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TSaveChCr__sub_8033A0D0(void);
int TSaveChCr__sub_8033A138(void);
void close_window__9TSaveChCrFPv(void *arg0);
void *create__9TSaveChCrFPv(void *arg0);
void save_character__9TSaveChCrFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_801FF5E4(void*);
void *TSaveChCr__ct(void *, void *, void *);
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

int TSaveChCr__sub_8033A0D0(void) { return 0; }

int TSaveChCr__sub_8033A138(void) { return TAdSinglePlyChrSelectGC__sub_801FF5E4((void*)(0)); }
void save_character__9TSaveChCrFPv(void* p) { begin_action_from_char_select__10TObjPlayerFv(p); TAdSinglePlyChrSelectGC__sub_801FF5E4((void*)1); }

extern void *tl_03;

void *create__9TSaveChCrFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = TSaveChCr__ct(o, tl_03, arg0);
    }
    return o;
}

}
