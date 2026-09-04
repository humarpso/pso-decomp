#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_thanks_state__12TBoss6ThanksFPv(void *arg0);
void mark_done__12TBoss6ThanksFPv(void* p);

void advance_thanks_state__12TBoss6ThanksFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

int TBoss6Thanks__sub_8035CCD0(void*);

void mark_done__12TBoss6ThanksFPv(void* p) { if (TBoss6Thanks__sub_8035CCD0(p) != 0) { *(int*)((char*)p + 0x24) = 1; *(int*)((char*)p + 0x1c) = 1; } }

}
#else
#if PSO_CLASS_PACKAGE == 0x8035CE40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_fade_out__12TBoss6ThanksFPv(void *arg0);
M2C_UNK TBoss6Thanks__sub_8035CB88(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80479C08;
extern const f32 lbl_805E01A4;
extern const f32 lbl_805E01A8;
extern const f32 lbl_805E01AC;

void update_fade_out__12TBoss6ThanksFPv(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 1) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x34) == 0) {
            TBoss3Volopt__sub_8022675C(0x40033231, 0, 0, 0);
        }
        TBoss6Thanks__sub_8035CB88(arg0);
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (lbl_805E01A4 * (lbl_805E01A8 - ((f32) M2C_FIELD(arg0, s32 *, 0x34) / lbl_805E01AC)));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x34);
        if (temp_r3 == 0x78) {
            TBoss3Volopt__sub_8022675C(0x40033232, 0, 0, 0);
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r3 + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035D1F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TBoss6ThanksFv(void);
void *TBoss6Thanks__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__12TBoss6ThanksFv(void) {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = TBoss6Thanks__ct(o, tl_02);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035D270
#include "types.h"

extern "C" {

s32 fn_8035CAE0();
int TBoss6Thanks__sub_8035D270(void* p);
int check_ship_door__12TBoss6ThanksFv(void*);

int TBoss6Thanks__sub_8035D270(void* p) { return check_ship_door__12TBoss6ThanksFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035D290
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_dispatch_darkfalz_phase__12TBoss6ThanksFv(void);
M2C_UNK dispatch_darkfalz_phase__12TBoss6ThanksFv();
s32 fn_8035D2EC();
s32 get_main_phase();
s32 is_split_screen();

extern s32 lbl_805D5550;

s32 try_dispatch_darkfalz_phase__12TBoss6ThanksFv(void) {
    if (((s32) lbl_805D5550 == 0) || ((get_main_phase() == 0xE) && (is_split_screen() == 0)) || (fn_8035D2EC() == 0)) {
        return 0;
    }
    dispatch_darkfalz_phase__12TBoss6ThanksFv();
    return 1;
}

}
#endif
#endif
