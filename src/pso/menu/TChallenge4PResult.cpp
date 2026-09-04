#ifndef PSO_CLASS_PACKAGE
#include "pso/TChallenge4PResult.h"

void TChallenge4PResult::run_task() {}

TChallenge4PResult::~TChallenge4PResult() {}
#else
#if PSO_CLASS_PACKAGE == 0x801B3B90
#include "types.h"

extern "C" {

int get_result_entry__18TChallenge4PResultFPv(void* p);
int get_player_rank__18TChallenge4PResultFPv(void* p);
int get_field_340__18TChallenge4PResultFPv(void* p);
int get_player_result__18TChallenge4PResultFPv(void* p);
int TObjPlayer__sub_801BF460(void*);
int TObjPlayer__sub_801BF47C(void*);
int TObjPlayer__sub_801BF488(void*);
int TObjPlayer__sub_801BF4A0(void*);

int get_result_entry__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF460((char*)p + 0x340); }
int get_player_rank__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF47C((char*)p + 0x340); }
int get_field_340__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF488((char*)p + 0x340); }
int get_player_result__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF4A0((char*)p + 0x340); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034B420
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TChallenge4PResult__sub_8034B420(void *arg0);

void TChallenge4PResult__sub_8034B420(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034B610
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__18TChallenge4PResultFii(int arg0, s32 arg1);
M2C_UNK TChallenge4PResult__ct(void *, s32, int, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
u32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_01;

void create__18TChallenge4PResultFii(int arg0, s32 arg1) {
    void *temp;

    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        temp = (void *) __nw__7TObjectFUl(0x7C);
        if (temp != NULL) {
            TChallenge4PResult__ct(temp, tl_01, arg0, arg1);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034B6E0
#include "types.h"

extern "C" {

void close_window__18TChallenge4PResultFPv(void* p);
int TWindow__close(void*);

void close_window__18TChallenge4PResultFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034B7C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TChallenge4PResult__sub_8034B720(void *, s32);
void TChallenge4PResult__sub_8034B8B0(void* p);
int queue_destruction__18TChallenge4PResultFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void init_timer__18TChallenge4PResultFPv(void *arg0) {
    TChallenge4PResult__sub_8034B720(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x2B, 5));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}
void init_result_state__18TChallenge4PResultFPv(void *arg0) {
    TChallenge4PResult__sub_8034B720(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x2B, 4));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}
void init__18TChallenge4PResultFPv(void *arg0) {
    TChallenge4PResult__sub_8034B720(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x2B, 3));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}
void TChallenge4PResult__sub_8034B8B0(void* p) { *(s32*)((char*)p + 0x1c) = 3; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034BA48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TChallenge4PResult__sub_8034B720(void *, s32);
void TChallenge4PResult__sub_8034B8B0(void* p);
int queue_destruction__18TChallenge4PResultFPv(void* p);
int queue_destruction__7TObjectFv(void*);

int queue_destruction__18TChallenge4PResultFPv(void* p) { return queue_destruction__7TObjectFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034BB90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_input__18TChallenge4PResultFPv(void *arg0);
M2C_UNK TChallenge4PResult__sub_8034B720(void *, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 get_map_id__13TRaderMapCoreFPv();
s32 TMCFormatSequence__sub_802693B4(u32);

extern u8 lbl_8050E208[];

void update_input__18TChallenge4PResultFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    u32 p;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        TChallenge4PResult__sub_8034B720(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x2B, 6));
    }
    p = M2C_FIELD(arg0, u32 *, 0x2C);
    if ((p != 0U) && (TMCFormatSequence__sub_802693B4(p) != 0)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r3 > 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r3 - 1);
            return;
        }
        if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x24)) != 0U) {
            temp_r5 = get_map_id__13TRaderMapCoreFPv() * 0x50;
            if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + temp_r5 + 0x20, 4, temp_r5) != 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
}

}
#endif
#endif
