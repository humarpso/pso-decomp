#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D4C24;
bool TBoss3Volopt__sub_8003CB94(void);
}

extern "C" {

int TBoss3Volopt__sub_8003CB48(void);
void alloc_idle_event__12TBoss3VoloptFv(void);
void handle_6x16_vol_opt_boss_actions(void *arg0);
void handle_6x17_set_entity_position_and_angle(u8 *arg0);
void update_phase__12TBoss3VoloptFv(void);
void TCameraCtrl__sub_8003CFFC(int);
M2C_UNK TCameraCtrl__sub_8006A410(void *, M2C_UNK);
s32 TODoorVoShip__sub_801F44BC(s32);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
u8 *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int alloc_event__12TBoss3VoloptFsi(void*, void*);
M2C_UNK bswap_position__12TBoss3VoloptFPv();
s32 dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
s32 dispatch_state__16TBoss3VoloptCtrlFi(s32);
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
void move_data__6TLobbyFv(void *, void *, int);
void swap_6x16_fields__12TBoss3VoloptFPv(void *);
int update_if_active__12TBoss3VoloptFv(void*);

void update_phase__12TBoss3VoloptFv(void) {
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x2A);
    if (get_main_phase() == 0xF) {
        dispatch_state__16TBoss3VoloptCtrlFi(0);
        return;
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        dispatch_state__16TBoss3VoloptCtrlFi(5);
        return;
    }
    if (TODoorVoShip__sub_801F44BC(0x2F) != 0) {
        dispatch_state__16TBoss3VoloptCtrlFi(2);
        return;
    }
    dispatch_state__16TBoss3VoloptCtrlFi(1);
}
int TBoss3Volopt__sub_8003CB48(void) { return update_if_active__12TBoss3VoloptFv((void*)(0)); }
void alloc_idle_event__12TBoss3VoloptFv(void) { alloc_event__12TBoss3VoloptFsi((void*)160, (void*)0); }

extern s32 lbl_805D53A0;

bool TBoss3Volopt__sub_8003CB94(void) {
    return lbl_805D4C24 != 0;
}

void handle_6x17_set_entity_position_and_angle(u8 *arg0) {
    u8 *temp_r3;

    bswap_position__12TBoss3VoloptFPv();
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(temp_r3 + 0x38, arg0 + 4);
        M2C_FIELD(temp_r3, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        TObjPlayer__sub_80154E3C(temp_r3);
        if ((s32) M2C_FIELD(arg0, u16 *, 2) == (s32) lbl_805D53A0) {
            TCameraCtrl__sub_8006A410(temp_r3, 0);
        }
    }
}

extern M2C_UNK lbl_804FEE74[];
extern u32 lbl_805D4C44;

void handle_6x16_vol_opt_boss_actions(void *arg0) {
    swap_6x16_fields__12TBoss3VoloptFPv(arg0);
    move_data__6TLobbyFv(lbl_804FEE74, (void *)((char *)arg0 + 4), 6);
    TCameraCtrl__sub_8003CFFC(M2C_FIELD(arg0, s16 *, 0xA));
    lbl_805D4C44 = -1;
}

}
