#ifndef PSO_CLASS_PACKAGE
#include "pso/THunterGuildWarning.h"

extern "C" void close_windows__19THunterGuildWarningFPv(void*);
extern s32 THunterGuildWarning__data_805D6178;

struct HGW_802119F0 { u8 pad[0x1c]; s32 state; s32 timer; };
extern "C" s32 queue_destruction__7TObjectFv(u32);

void THunterGuildWarning::run_task() {
    HGW_802119F0 *self = (HGW_802119F0 *)this;
    switch (self->state) {
    case 0:
    case 1:
        if (--self->timer < 0) {
            queue_destruction__7TObjectFv((u32)self);
        }
        break;
    case 2:
        break;
    }
}

THunterGuildWarning::~THunterGuildWarning() {
    close_windows__19THunterGuildWarningFPv(this);
    THunterGuildWarning__data_805D6178 = 0;
}
#else
#if PSO_CLASS_PACKAGE == 0x80211648
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void queue_destruction__19THunterGuildWarningFv(void);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void*);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK queue_destruction__7TObjectFv(u32);

extern u32 THunterGuildWarning__data_805D6178;

void queue_destruction__19THunterGuildWarningFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((u32) THunterGuildWarning__data_805D6178 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void*)THunterGuildWarning__data_805D6178) != 0)) {
        queue_destruction__7TObjectFv(THunterGuildWarning__data_805D6178);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211690
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_instance__19THunterGuildWarningFi(s32 arg0);
M2C_UNK THunterGuildWarning__ct(void *, void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern u32 THunterGuildWarning__data_805D6178;
extern void *tl_05;

void create_instance__19THunterGuildWarningFi(s32 arg0) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((u32) THunterGuildWarning__data_805D6178 == 0U)) {
        void *obj = __nw__7TObjectFUl(0x34);
        if (obj != 0) {
            THunterGuildWarning__ct(obj, tl_05, arg0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802116EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_active__19THunterGuildWarningFv(void);

extern s32 THunterGuildWarning__data_805D6178;

u8 is_active__19THunterGuildWarningFv(void) {
    return (u8) (THunterGuildWarning__data_805D6178 != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211700
#include "types.h"

extern "C" {

void THunterGuildWarning__sub_80211700(void);

    extern int THunterGuildWarning__data_805D6178;
void THunterGuildWarning__sub_80211700(void) { THunterGuildWarning__data_805D6178 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021170C
#include "types.h"

extern "C" {

void THunterGuildWarning__sub_8021170C(void);

    extern int THunterGuildWarning__data_805D6178;
void THunterGuildWarning__sub_8021170C(void) { THunterGuildWarning__data_805D6178 = 0; }

}
#endif
#endif
