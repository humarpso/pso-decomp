#include "pso/TObjDeadListWin.h"

void TObjDeadListWin::run_task() {}

TObjDeadListWin::~TObjDeadListWin() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
void update_countdown__15TObjDeadListWinFPv(void *arg0);
M2C_UNK TObjDeadListWin__sub_80073B38(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;
void run_task__15TObjDeadListWinFv(u8 *arg0);
}

extern "C" {

void build_dead_list_window__15TObjDeadListWinFPv(u8 *arg0);
void *create__15TObjDeadListWinFPv(void *arg0);
void update_countdown__15TObjDeadListWinFPv(void *arg0);
M2C_UNK strcat(void *, void *);
void *TObjDeadListWin__ct(void *, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindow__close(void *);
void *__nw__7TObjectFUl(int);
s32 check_player_flag1__6TLobbyFPv(s32);
s32 obj_testFlags30(M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, void *, M2C_UNK);
u32 set_window_mode_4__6TLobbyFPvii(void *, void *, M2C_UNK);

extern M2C_UNK lbl_8048D168[];
extern M2C_UNK lbl_805D9140;
extern M2C_UNK lbl_805D9144;

void build_dead_list_window__15TObjDeadListWinFPv(u8 *arg0) {
    s8 sp8[0x44];
    s32 var_r31;
    s32 var_r30;
    u8 *temp_r4;

    M2C_FIELD(arg0, u32 *, 0x20) = set_window_mode_4__6TLobbyFPvii((void *) TWindowSubComCard__sub_8026CBB8(0x3C), lbl_8048D168, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
        sp8[0] = 0;
        strcat(sp8, &lbl_805D9140);
        var_r30 = 0;
        var_r31 = 0;
        do {
            temp_r4 = arg0 + var_r31;
            if ((s8) M2C_FIELD(temp_r4, u8 *, 0x28) != 0) {
                strcat(sp8, temp_r4 + 0x28);
                if (var_r30 != 3) {
                    strcat(sp8, &lbl_805D9144);
                }
            }
            var_r30 += 1;
            var_r31 += 0x10;
        } while (var_r30 < 4);
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x20), sp8, 2);
    }
}

extern s32 lbl_805D53A0;

void update_countdown__15TObjDeadListWinFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3 == 0) || (obj_testFlags30(temp_r3, 0x02000000) != 0)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((check_player_flag1__6TLobbyFPv(temp_r3) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0x5A)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0x5A;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    if (temp_r0 < 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        queue_destruction__7TObjectFv(arg0);
    }
}

void run_task__15TObjDeadListWinFv(u8 *arg0) {
    s32 temp_r0;
    if (TPlayerBattleCtrl4P__sub_801BA74C((s32)((void *) (lbl_805D53A0))) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        TObjDeadListWin__sub_80073B38((void *) (arg0));
        return;
    case 1:
        update_countdown__15TObjDeadListWinFPv((void *) (arg0));
        return;
    }
}

void *create__15TObjDeadListWinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TObjDeadListWin__ct(o, arg0);
    }
    return o;
}

}
