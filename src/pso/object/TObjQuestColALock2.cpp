#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjQuestColALock2__create(void *arg0);
s32 TObjQuestColALock2__vt13(void *arg0);
void *__dt__18TObjQuestColALock2Fv(void *arg0, s16 arg1);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801B35AC(s32);
M2C_UNK TObjPlayer__sub_801B35E4(s32);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
s32 TObjPlayer__sub_801B5874(s32);
void *TObjQuestColALock2__ct(void *, void *, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__16TObjQuestColBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
s32 check_flag_100__10TObjPlayerFPv();
s32 update_trigger_state__12TObjQuestColFPvf(void *, f32);

extern void *lbl_805D5C50;

void *TObjQuestColALock2__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjQuestColALock2__ct(o, lbl_805D5C50, arg0);
    }
    return o;
}

extern M2C_UNK lbl_8050E208[];
extern s32 lbl_805D53A0;

s32 TObjQuestColALock2__vt13(void *arg0) {
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
        TObjPlayer__sub_801B4A18(arg0, -1);
        temp_r3_2 = update_trigger_state__12TObjQuestColFPvf(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
        if (temp_r3_2 == 1) {
            TObjPlayer__sub_801B35E4(temp_r3);
        }
        if (temp_r3_2 == 3) {
            TObjPlayer__sub_801B35AC(temp_r3);
        }
        if (temp_r3_2 == 0) {
            TObjPlayer__sub_801B35E4(temp_r3);
            if (TWindowShortListCtrl__check_controller_button((void *)((s8 *)lbl_8050E208 + 0x20), 4) != 0) {
                return 1;
            }
        }
        goto block_12;
    }
block_12:
    return 0;
}

extern M2C_UNK __vt__18TObjQuestColALock2[];

void *__dt__18TObjQuestColALock2Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjQuestColALock2;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__16TObjQuestColBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
