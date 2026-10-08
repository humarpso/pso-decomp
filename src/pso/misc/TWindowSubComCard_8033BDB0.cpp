#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase { char pad[0x18]; };

struct VObj : VBase { virtual void m0(int); };

#include <stddef.h>
#include "pso/misc/TWindowSubComCard.h"
struct Stack_8033C024 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8033C024 { s32 words[3]; void (TWindowSubComCard::*action)(); };

struct RecoveredGlobal_8033C024_lbl_804EF940 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

struct O_8033C1CC { u8 pad[0x34]; void *p; u8 pad2[0x44 - 0x38]; s32 f44; };

extern "C" {
s32 poll_memcard_status__15TAdPlayerLoadGCFPv(void *);
void TWindowSubComCard__sub_8033C10C(u8 *arg0);
void TWindow__close(void *);
void TWindowSubComCard__sub_8033BF90(u8 *arg0);
extern RecoveredGlobal_8033C024_lbl_804EF940 lbl_804EF940;
void TWindowSubComCard__sub_8033C024(u8 *arg0, s32 arg1);
u32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
void reparent_to_main_ctrl__17TWindowSubComCardFi(s32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(u32, s16);
M2C_UNK align_menu_entry_positions(u32);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(u32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, u32, M2C_UNK, M2C_UNK);
u32 create_window_menu(M2C_UNK *, M2C_UNK, M2C_UNK);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK *, M2C_UNK);
M2C_UNK complete_reveal__14TWindowMessageFPv(u32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, u32, M2C_UNK);
u32 create_message_window__6TLobbyFiiUis(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
u32 update_window_mode_from_progress__6TLobbyFiPv(M2C_UNK *, M2C_UNK *);
M2C_UNK clear_flag70_bit4__17TWindowOptionCtrlFPv(u32);
extern M2C_UNK lbl_80477DB4[];
extern M2C_UNK lbl_80477DBC[];
extern M2C_UNK lbl_804EF8D8[];
extern const f32 lbl_805D6D98;
void create_message_and_menu__17TWindowSubComCardFPvUiiUiUi(void *arg0, u32 arg1, s32 arg2, u32 arg3, u32 arg4);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_selected_menu_value(void *);
void TWindowSubComCard__sub_8033C1CC(O_8033C1CC *arg0);
}

extern "C" {

void TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
struct O_8033C1CC; void TWindowSubComCard__sub_8033C1CC(O_8033C1CC *);
void reset__17TWindowSubComCardFPv(void *arg0);
s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
void render__16TCheckMemoryCardFv(void);
int update_card_display__17TWindowSubComCardFPvPvPvPvPv(void*, int, int, int, int);

void create_message_and_menu__17TWindowSubComCardFPvUiiUiUi(void *arg0, u32 arg1, s32 arg2, u32 arg3, u32 arg4) {
    u32 msg;
    if (M2C_FIELD(arg0, u32 *, 0x30) != 0U || M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        M2C_FIELD(arg0, u32 *, 0x30) = create_message_window__6TLobbyFiiUis(lbl_80477DB4, lbl_80477DBC, 1, 4);
    } else {
        M2C_FIELD(arg0, u32 *, 0x30) = update_window_mode_from_progress__6TLobbyFiPv(lbl_80477DB4, lbl_80477DBC);
    }
    if (M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
        return;
    }
    if (M2C_FIELD(arg0, u32 *, 0x30) != 0U && M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        reparent_to_main_ctrl__17TWindowSubComCardFi(M2C_FIELD(arg0, s32 *, 0x30));
    }
    if (arg1 != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), arg1, 3);
    }
    complete_reveal__14TWindowMessageFPv(M2C_FIELD(arg0, u32 *, 0x30));
    if (arg2 == -1) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        M2C_FIELD(arg0, u32 *, 0x34) = create_window_menu(lbl_804EF8D8, 2, 4);
    } else {
        M2C_FIELD(arg0, u32 *, 0x34) = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_804EF8D8, 2);
    }
    if (M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
        return;
    }
    if (M2C_FIELD(arg0, u32 *, 0x34) != 0U && M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        reparent_to_main_ctrl__17TWindowSubComCardFi(M2C_FIELD(arg0, s32 *, 0x34));
    }
    msg = arg3;
    if (arg3 == 0U) {
        msg = get_message_10__20TWindowSubStatusDispFPv(0x5B);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x34), msg, 5, 0);
    if (arg2 != -2) {
        msg = arg4;
        if (arg4 == 0U) {
            msg = get_message_10__20TWindowSubStatusDispFPv(0x5C);
        }
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x34), msg, 5, 1);
    }
    update_layout_height__17TWindowSubComCardFPvf(M2C_FIELD(arg0, u32 *, 0x34), lbl_805D6D98);
    align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0x34));
    if (arg2 != -2) {
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, u32 *, 0x34), arg2);
    } else {
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, u32 *, 0x34), 0);
    }
    clear_flag70_bit4__17TWindowOptionCtrlFPv(M2C_FIELD(arg0, u32 *, 0x34));
}

#pragma push
#pragma fp_contract on
void TWindowSubComCard__sub_8033BF90(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if (temp_r3 != NULL) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
            if (temp_r3 != NULL) {
                ((VObj *)temp_r3)->m0(1);
            }
        } else {
            TWindow__close(temp_r3);
        }
        M2C_FIELD(arg0, u8 **, 0x30) = NULL;
        M2C_FIELD(arg0, s32 *, 0x38) = 7;
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
    if (temp_r3_2 != NULL) {
        TWindow__close(temp_r3_2);
        M2C_FIELD(arg0, u8 **, 0x34) = NULL;
        M2C_FIELD(arg0, s32 *, 0x38) = 7;
    }
}
#pragma pop

typedef char MemberActionStorage_8033C024_size[sizeof(MemberActionStorage_8033C024) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8033C024_lbl_804EF940_size[sizeof(RecoveredGlobal_8033C024_lbl_804EF940) == 0x60 ? 1 : -1];
void TWindowSubComCard__sub_8033C024(u8 *arg0, s32 arg1) {
    MemberActionStorage_8033C024 member_action;
    typedef char sp8_offset[(offsetof(Stack_8033C024, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8033C024, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8033C024, sp10) == 0x8) ? 1 : -1];
    Stack_8033C024 stack;
    u8 *temp_r6;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        temp_r6 = (u8 *)&lbl_804EF940.value + (M2C_FIELD(arg0, s32 *, 0x20) * 0x18);
        member_action.words[0] = M2C_FIELD(temp_r6, s32 *, 0);
        member_action.words[1] = M2C_FIELD(temp_r6, s32 *, 4);
        member_action.words[2] = M2C_FIELD(temp_r6, s32 *, 8);
        if (member_action.action != 0) {
            (((TWindowSubComCard *)((void *) (arg0)))->*member_action.action)();
        }
    }
}

void reset__17TWindowSubComCardFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = poll_memcard_status__15TAdPlayerLoadGCFPv((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    TWindowSubComCard__sub_8033C024((u8 *)(arg0), (s32)(0));
}

void TWindowSubComCard__sub_8033C10C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = poll_memcard_status__15TAdPlayerLoadGCFPv((void *)(arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) {
            TWindowSubComCard__sub_8033C024((u8 *)((void *)((void *) (arg0))), (s32)((s32)((int) (1))));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    }
}

void TWindowSubComCard__sub_8033C178(void* p) { TWindowSubComCard__sub_8033BF90((u8 *)(p)); }
void TWindowSubComCard__sub_8033C198(void) {  }
int TWindowSubComCard__sub_8033C19C(void* p) { return update_card_display__17TWindowSubComCardFPvPvPvPvPv(p, 0, -1, -1, -1); }
void TWindowSubComCard__sub_8033C1CC(O_8033C1CC *arg0) {
    if (arg0->p == 0 || is_visible__17TWindowSubComCardFPv(arg0->p) == 0) {
        return;
    }
    switch (get_selected_menu_value(arg0->p)) {
    case 0:
        arg0->f44 = 1;
        break;
    }
}

}
