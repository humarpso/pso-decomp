#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjQuestColA__vt14(void* p);
int destroy_board__17TQuestThreadBoardFv(void*);
int create__12TQuestThreadFi(void*);

void TObjQuestColA__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80196880
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestColA__create(void *arg0);
void *TObjQuestColA__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *lbl_805D5C50;

void *TObjQuestColA__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjQuestColA__ct(o, lbl_805D5C50, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80196900
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjQuestColA__vt13(void *arg0);
s32 check_flag_100__10TObjPlayerFPv();
s32 TObjPlayer__sub_801B5874(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 update_trigger_state__12TObjQuestColFPvf(void *, f32);
M2C_UNK TObjPlayer__sub_801B35AC(s32);
M2C_UNK TObjPlayer__sub_801B35E4(s32);

extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;

s32 TObjQuestColA__vt13(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        if (check_flag_100__10TObjPlayerFPv() != 0) {
            TObjPlayer__sub_801B35AC(temp_r3);
            return 0;
        }
        if (TObjPlayer__sub_801B5874(temp_r3) != 0) {
            TObjPlayer__sub_801B35AC(temp_r3);
            return 0;
        }
        temp_r3_2 = update_trigger_state__12TObjQuestColFPvf(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
        if (temp_r3_2 == 1) {
            TObjPlayer__sub_801B35E4(temp_r3);
        }
        if (temp_r3_2 == 3) {
            TObjPlayer__sub_801B35AC(temp_r3);
        }
        if (temp_r3_2 == 0) {
            TObjPlayer__sub_801B35E4(temp_r3);
            if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0) {
                return 1;
            }
        }
        goto block_12;
    }
block_12:
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801969DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestColA__ct(void *arg0);
void TObjQuestColBase__ct(void *);

extern M2C_UNK __vt__13TObjQuestColA[];
extern void *lbl_805D33F0;

void *TObjQuestColA__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjQuestColA;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33F0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80196FE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjQuestColAFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__16TObjQuestColBaseFv(void *, int);

extern M2C_UNK __vt__13TObjQuestColA[];

void *__dt__13TObjQuestColAFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjQuestColA;
        __dt__16TObjQuestColBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
