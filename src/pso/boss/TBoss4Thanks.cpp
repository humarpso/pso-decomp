#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_thanks_state__12TBoss4ThanksFPv(void *arg0);
void mark_done__12TBoss4ThanksFPv(void* p);

void advance_thanks_state__12TBoss4ThanksFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

int TBoss4Thanks__sub_8035C4A4(void*);

void mark_done__12TBoss4ThanksFPv(void* p) { if (TBoss4Thanks__sub_8035C4A4(p) != 0) { *(int*)((char*)p + 0x24) = 1; *(int*)((char*)p + 0x1c) = 1; } }

}
#else
#if PSO_CLASS_PACKAGE == 0x8035C5C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_fade_out__12TBoss4ThanksFPv(void *arg0);
M2C_UNK TBoss4Thanks__sub_8035C35C(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80479B88;
extern const f32 lbl_805E0188;
extern const f32 lbl_805E018C;
extern const f32 lbl_805E0190;

void update_fade_out__12TBoss4ThanksFPv(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 1) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0) {
            TBoss3Volopt__sub_8022675C(0x40033231, 0, 0, 0);
        }
        TBoss4Thanks__sub_8035C35C(arg0);
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (lbl_805E0188 * (lbl_805E018C - ((f32) M2C_FIELD(arg0, s32 *, 0x30) / lbl_805E0190)));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_r3 == 0x78) {
            TBoss3Volopt__sub_8022675C(0x40033232, 0, 0, 0);
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r3 + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035C8F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TBoss4ThanksFv(void);
void *TBoss4Thanks__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__12TBoss4ThanksFv(void) {
    void *o = __nw__7TObjectFUl(0x54);
    if (o != NULL) {
        o = TBoss4Thanks__ct(o, tl_02);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035C96C
#include "types.h"

extern "C" {

s32 fn_8035C2B4();
int TBoss4Thanks__sub_8035C96C(void* p);
int is_door_0x97_open__12TBoss4ThanksFv(void*);

int TBoss4Thanks__sub_8035C96C(void* p) { return is_door_0x97_open__12TBoss4ThanksFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035C98C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_ready__12TBoss4ThanksFv(void);
M2C_UNK dispatch_main_phase__12TBoss4ThanksFv();
s32 fn_8035C9E8();
s32 get_main_phase();
s32 is_split_screen();

extern s32 lbl_805D5550;

s32 check_ready__12TBoss4ThanksFv(void) {
    if (((s32) lbl_805D5550 == 0) || ((get_main_phase() == 0xE) && (is_split_screen() == 0)) || (fn_8035C9E8() == 0)) {
        return 0;
    }
    dispatch_main_phase__12TBoss4ThanksFv();
    return 1;
}

}
#endif
#endif
