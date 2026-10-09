#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8034CC68_lbl_80478C3C {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
M2C_UNK send_and_handle__6TLobbyFPvii(s32, s32, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
extern const RecoveredGlobal_8034CC68_lbl_80478C3C lbl_80478C3C;
void set_message_index__26TWindowSubInformationBoardFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

s32 open_keyboard__26TWindowSubInformationBoardFi(s32 arg0);
void set_page__26TWindowSubInformationBoardFPvi(void *arg0, s32 arg1);
void show_card_a7__26TWindowSubInformationBoardFPv(void *arg0);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 get_info_board_ptr__6TLobbyFv();
s32 get_window_layout_position(M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);
s32 get_card_window_field__6TLobbyFv();
M2C_UNK get_keyboard_field_6c__15TWindowMakeTeamFPv(s32, s32);
M2C_UNK send_and_handle__6TLobbyFPvii(s32, s32, M2C_UNK);
M2C_UNK set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
M2C_UNK set_window_mode_4__6TLobbyFPvii(M2C_UNK, M2C_UNK *, M2C_UNK);

void set_page__26TWindowSubInformationBoardFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) != arg1) && (arg1 != -1)) {
        temp_r3 = get_info_board_ptr__6TLobbyFv();
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = arg1;
            send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x34), temp_r3 + (arg1 * 0xBC) + 0x14, 0x80);
        }
    }
}

extern s32 local_client_id;

typedef char RecoveredGlobal_8034CC68_lbl_80478C3C_size[sizeof(RecoveredGlobal_8034CC68_lbl_80478C3C) == 0xC ? 1 : -1];
void set_message_index__26TWindowSubInformationBoardFPvi(u8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
        send_and_handle__6TLobbyFPvii((s32)(M2C_FIELD(arg0, u8 **, 0x34)), (s32)(get_message_10__20TWindowSubStatusDispFPv((int) (M2C_FIELD(&lbl_80478C3C.value, M2C_UNK *, (arg1 * 4))))), (M2C_UNK)(0x80));
    }
}

s32 open_keyboard__26TWindowSubInformationBoardFi(s32 arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, arg0, 0xC6, 5, 4, local_client_id);
    }
    get_keyboard_field_6c__15TWindowMakeTeamFPv(var_r31, get_card_window_field__6TLobbyFv());
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, get_window_layout_position((M2C_UNK)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

extern M2C_UNK lbl_80478C34[];

void show_card_a7__26TWindowSubInformationBoardFPv(void *arg0) {
    M2C_UNK temp_r3;
    temp_r3 = get_window_layout_position((M2C_UNK)(0xA7));
    set_window_mode_4__6TLobbyFPvii(temp_r3, lbl_80478C34, 1);
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
}

}
