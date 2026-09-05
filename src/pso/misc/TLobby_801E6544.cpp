#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_8020C1F0(int, int, void *);
void qst_op_if_zone_clear(s32 arg0, s32 arg1);
M2C_UNK push_op_arg__6TLobbyFi(int, void *);
void qst_op_nop_42_stack_push(s32 arg0);
void qst_op_jmpi_le(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_le(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_le(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_le(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_ge(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_ge(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_ge(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_ge(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_lt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_lt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_lt(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_lt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_gt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_gt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_gt(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_gt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_ne(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_ne(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_eq(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_eq(s32 arg0, s32 arg1, s32 arg2);
void TLobby__sub_801F2214(s32 arg0, u32 arg1);
void TLobby__sub_801F2234(s32 arg0, s32 arg1);
void qst_op_xor(s32 arg0, s32 arg1);
void qst_op_or(s32 arg0, s32 arg1);
void qst_op_and(s32 arg0, s32 arg1);
void qst_op_divi(s32 arg0, s32 arg1);
void qst_op_div(s32 arg0, s32 arg1);
void qst_op_mul(s32 arg0, s32 arg1);
void qst_op_subi(s32 arg0, s32 arg1);
void qst_op_add(s32 arg0, s32 arg1);
s32 TODoorVoShip__sub_801F44BC(void *);
void qst_op_gget(u16 arg0, s32 arg1);
M2C_UNK TLobby__sub_801F45FC(void *);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(void *);
void qst_op_glet(u16 arg0, s32 arg1);
}

extern "C" {

int TLobby__sub_801EF748(void* p);
int TLobby__sub_801EF768(void* p);
int TLobby__sub_801EF788(void* p);
void close_window__6TLobbyFv(void);
int qst_op_cam_adj(void* p);
int qst_op_cam_quake(void);
int qst_op_cam_zmin(void* p);
int qst_op_cam_zmout(void* p);
void qst_op_chk_ene_num(int a0);
void qst_op_fadein(void);
void qst_op_fadeout(void);
void qst_op_game_lev_reset_nop_86(void);
void qst_op_game_lev_super_nop_85(void);
void qst_op_jmp(int a0);
int qst_op_npc_nont(void* p);
int qst_op_npc_talk(void* p);
void qst_op_p_action_disable(void);
void qst_op_p_action_enable(void);
int qst_op_p_col(void* p);
int qst_op_p_noncol(void* p);
void set_slot__6TLobbyFi(int a0);
int TCameraCtrl__sub_8006D460(void*);
int TCameraCtrl__sub_8006D494(void*);
int TCameraCtrl__sub_8006D610(void*);
int TLobby__sub_801F2BCC(void);
int TLobby__sub_8020C118(void);
int TNpcPlayer__sub_8034E420(void*);
int TNpcPlayer__sub_8034E430(void*);
int TObjHashiVersus2__sub_801912A4(void*);
int TObjHashiVersus2__sub_801912B0(void*);
M2C_UNK TObjPlayer__sub_801B35AC();
M2C_UNK TObjPlayer__sub_801B3620();
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindow__close(void*);
M2C_UNK action_enable_if_present__10TObjPlayerFPv(s32);
int fn_8019608C(void*);
int init_fadeout_state__6TLobbyFi(void*);
int notify_all_battle_players__10TObjPlayerFv(void*);
M2C_UNK release_attached_resource__10TObjPlayerFPv(s32);
int set_fade_params__6TLobbyFi(void*);
int set_shake_preset__11TCameraCtrlFi(void*);
int update_4p_battle_ctrls__10TObjPlayerFv(void*);

int TLobby__sub_801EF748(void* p) { return notify_all_battle_players__10TObjPlayerFv(p); }
int TLobby__sub_801EF768(void* p) { return update_4p_battle_ctrls__10TObjPlayerFv(p); }
int TLobby__sub_801EF788(void* p) { return fn_8019608C(p); }

    extern int* TLobby__data_805D5E78;
void qst_op_chk_ene_num(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_8020C118(); }

extern s32 lbl_805D53A0;

void qst_op_if_zone_clear(s32 arg0, s32 arg1) {
    if (TLobby__sub_8020C1F0((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))), (int) ((s16) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, (((arg1 + 1) * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__data_805D5E78))) != 0) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void qst_op_p_action_enable(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B35AC();
        action_enable_if_present__10TObjPlayerFPv(temp_r3);
    }
}

extern s32 lbl_805D53A0;

void qst_op_p_action_disable(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B3620();
        release_attached_resource__10TObjPlayerFPv(temp_r3);
    }
}

int qst_op_p_col(void* p) { return TObjHashiVersus2__sub_801912A4(p); }
int qst_op_p_noncol(void* p) { return TObjHashiVersus2__sub_801912B0(p); }

int qst_op_npc_talk(void* p) { return TNpcPlayer__sub_8034E420(p); }
int qst_op_npc_nont(void* p) { return TNpcPlayer__sub_8034E430(p); }

int qst_op_cam_adj(void* p) { return TCameraCtrl__sub_8006D460(p); }

void qst_op_game_lev_reset_nop_86(void) {  }
void qst_op_game_lev_super_nop_85(void) {  }
int qst_op_cam_zmout(void* p) { return TCameraCtrl__sub_8006D494(p); }
int qst_op_cam_zmin(void* p) { return TCameraCtrl__sub_8006D610(p); }
int qst_op_cam_quake(void) { return set_shake_preset__11TCameraCtrlFi((void*)(2)); }

extern u32 TLobby__data_805D5E80;

void close_window__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D5E80 != 0U) {
        TWindow__close((void*)TLobby__data_805D5E80);
        TLobby__data_805D5E80 = 0U;
    }
}

    extern int TLobby__data_805D5E98;
void qst_op_fadeout(void) { init_fadeout_state__6TLobbyFi((void*)0); TLobby__data_805D5E98 = 8; }

    extern int TLobby__data_805D5E98;
void qst_op_fadein(void) { set_fade_params__6TLobbyFi((void*)0); TLobby__data_805D5E98 = 8; }

    extern int* TLobby__data_805D5E78;
void set_slot__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_801F2BCC(); }

    extern int* TLobby__data_805D5E74;
    extern int TLobby__data_805D5E90;

void qst_op_nop_42_stack_push(s32 arg0) {
    push_op_arg__6TLobbyFi((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__data_805D5E78)));
}

void qst_op_jmpi_le(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) <= arg1) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_le(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) <= (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmpi_le(s32 arg0, u32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) <= arg1) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmp_le(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) <= (u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_ge(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) >= arg1) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_ge(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) >= (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmpi_ge(s32 arg0, u32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) >= arg1) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmp_ge(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) >= (u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_lt(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) < arg1) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_lt(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) < (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmpi_lt(s32 arg0, u32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) < arg1) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmp_lt(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) < (u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_gt(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) > arg1) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_gt(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) > (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmpi_gt(s32 arg0, u32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) > arg1) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmp_gt(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) > (u32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_ne(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 != (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_ne(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) != (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_eq(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 == (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_eq(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) == (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__data_805D5E90) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void TLobby__sub_801F2214(s32 arg0, u32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) % arg1;
}

void TLobby__sub_801F2234(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) % M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_jmp(int a0) { TLobby__data_805D5E90 = TLobby__data_805D5E74[(unsigned short)(a0)]; }
void qst_op_xor(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) ^ M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}
void qst_op_or(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) | M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}
void qst_op_and(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) & M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}
void qst_op_divi(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r3) = (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r3) / arg1;
}
void qst_op_div(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) / (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}
void qst_op_mul(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) * M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}
void qst_op_subi(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r3) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r3) - arg1;
}
void qst_op_add(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) + M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}
void qst_op_gget(u16 arg0, s32 arg1) {
    if (TODoorVoShip__sub_801F44BC((void *) (arg0)) != 0) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
}
void qst_op_glet(u16 arg0, s32 arg1) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) != 0) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs((void *) (arg0));
        return;
    }
    TLobby__sub_801F45FC((void *) (arg0));
}

}
