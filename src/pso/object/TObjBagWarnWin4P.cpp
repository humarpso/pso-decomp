#include "pso/TObjBagWarnWin4P.h"

TObjBagWarnWin4P::~TObjBagWarnWin4P() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 check_can_open__16TObjBagWarnWin4PFv(void *);
void create_window__16TObjBagWarnWin4PFPv(u8 *arg0);
M2C_UNK TWindow__close(int);
s32 TWindowCtrlMain__sub_8024CE58();
void run_task__16TObjBagWarnWin4PFv(u8 *arg0);
}

extern "C" {

void *__ct__16TObjBagWarnWin4PFv(void *arg0);
void create_window__16TObjBagWarnWin4PFPv(u8 *arg0);
u32 TLobby__sub_80269CC0(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 TLobby__sub_8030A770();
s32 TLobby__sub_8030A7B0();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 TWindowCtrl__sub_8024AF74(u16);
s32 TWindowCtrl__sub_8024B054(u16);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
void __ct__7TObjectFP7TObject(void *);
int check_flag__10TObjPlayerFPvi(void*, int);
u32 get_card_window__17TWindowSubComCardFUi(s32);
s32 is_active__19THunterGuildWarningFv();
s32 is_level_capped__23TAdSinglePlyChrSelectGCFPv();
s32 is_not_split_screen__13TRaderMapCoreFv();
int is_player_flag_4000_set__11TWindowCtrlFPv(void* p);
s32 obj_getField1c();
M2C_UNK send_and_handle__6TLobbyFPvii(u32, void *, M2C_UNK);
M2C_UNK strncpy(void *, s32, M2C_UNK);

s32 check_can_open__16TObjBagWarnWin4PFv(void * _w0) {
    s32 var_r31;
    s32 var_r30;

    for (var_r31 = 0; var_r31 < 4; var_r31++) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) && (TWindowCtrl__sub_8024AF74(obj_getField1c()) != 0)) {
            return 0;
        }
    }
    for (var_r31 = 0; var_r31 < 4; var_r31++) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) && (TWindowCtrl__sub_8024B054(obj_getField1c()) != 0)) {
            return 0;
        }
    }
    if (is_active__19THunterGuildWarningFv() != 0) {
        return 0;
    }
    var_r31 = 0;
    var_r30 = 0;
    do {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U) && (get_card_window__17TWindowSubComCardFUi(var_r30) != 0U) && (is_level_capped__23TAdSinglePlyChrSelectGCFPv() != 0)) {
            var_r31 = 1;
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}

extern M2C_UNK lbl_80488E48[];

void run_task__16TObjBagWarnWin4PFv(u8 *arg0) {
    s32 temp_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        if (TWindowCtrlMain__sub_8024CE58() != 0) {
            if (check_can_open__16TObjBagWarnWin4PFv((void *)((void *) (arg0))) != 0) {
                temp_r0 = M2C_FIELD(arg0, s32 *, 0xA0) - 1;
                M2C_FIELD(arg0, s32 *, 0xA0) = temp_r0;
                if (temp_r0 < 0) {
                    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0xA0) = 0x1E;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) == 0) {
                create_window__16TObjBagWarnWin4PFPv((u8 *)((void *) (arg0)));
            }
        }
    } else if (check_can_open__16TObjBagWarnWin4PFv((void *)((void *) (arg0))) == 0) {
        TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x1C)));
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
        M2C_FIELD(arg0, s32 *, 0xA0) = 0x1E;
    }
}

void create_window__16TObjBagWarnWin4PFPv(u8 *arg0) {
    M2C_UNK r3 = TWindowSubComCard__sub_8026CBB8(0x5B);
    M2C_FIELD(arg0, u32 *, 0x1C) = TLobby__sub_80269CC0(r3, lbl_80488E48, 1, 4);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        strncpy(arg0 + 0x20, TQuestVmDownLoadServer__sub_8006EF6C(0x69), 0x7F);
        M2C_FIELD(arg0, s8 *, 0x9F) = 0;
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x1C), arg0 + 0x20, 0);
    }
}

extern M2C_UNK __vt__16TObjBagWarnWin4P[];
extern void *lbl_805D284C;

void *__ct__16TObjBagWarnWin4PFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjBagWarnWin4P;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D284C;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0xA0) = 0;
    return arg0;
}

}
