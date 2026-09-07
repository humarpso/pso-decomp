#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802D2C38_lbl_804E1920 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

extern "C" {
M2C_UNK TLobby__sub_802D30E8();
M2C_UNK byteswap_trade_packet__6TLobbyFPv();
extern RecoveredGlobal_802D2C38_lbl_804E1920 lbl_804E1920;
extern u8 TLobby__data_805D688A;
extern u8 TLobby__data_805D688B;
void handle_6xA6_modify_trade_proposal(u8 *arg0);
}

extern "C" {

void check_flags_and_proceed__6TLobbyFv(void);
void clear_flag400__6TLobbyFv(void);
void handle_6xA7(void);
void handle_reset_choice__6TLobbyFi(s32 arg0);
M2C_UNK send_cancel_trade__9TProtocolFv(s32);
M2C_UNK TLobby__sub_802D2D64();
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK reset__6TLobbyFi();

extern u8 TLobby__data_805D688B;

void handle_reset_choice__6TLobbyFi(s32 arg0) {
    if ((s8) TLobby__data_805D688B != 0) {
        switch (arg0) {
        case 0:
            get_message_10__20TWindowSubStatusDispFPv(0xEC);
            reset__6TLobbyFi();
            return;
        case 1:
            get_message_10__20TWindowSubStatusDispFPv(0xEB);
            reset__6TLobbyFi();
            break;
        }
    }
}

void handle_6xA7(void) {  }

extern s32 TLobby__data_805D5580;
extern u16 lbl_805D6888;

typedef char RecoveredGlobal_802D2C38_lbl_804E1920_size[sizeof(RecoveredGlobal_802D2C38_lbl_804E1920) == 0x140 ? 1 : -1];
void handle_6xA6_modify_trade_proposal(u8 *arg0) {
    M2C_UNK (*temp_r12)(void *);
    u16 temp_r3;
    u8 temp_r5;
    byteswap_trade_packet__6TLobbyFPv();
    temp_r3 = M2C_FIELD(arg0, u16 *, 2);
    if ((temp_r3 < 4U) && (temp_r5 = M2C_FIELD(arg0, u8 *, 4), ((temp_r5 < 8U) != 0))) {
        if (((s8) TLobby__data_805D688A != 4) && ((s32) temp_r3 != (s8) TLobby__data_805D688A)) {
            if ((temp_r5 == 0) && ((u8) M2C_FIELD(arg0, u8 *, 5) == 0)) {
                TLobby__sub_802D30E8();
            }
        } else {
            temp_r12 = M2C_FIELD(((u8 *)(((u8 *)(&lbl_804E1920.value) + ((s8) TLobby__data_805D688B << 5))) + ((temp_r5 * 4) & 0x3FC)), M2C_UNK (**)(void *), 0);
            if (temp_r12 != NULL) {
                temp_r12(arg0);
            }
        }
    }
}

void clear_flag400__6TLobbyFv(void) {
    if (lbl_805D6888 & 0x400) {
        send_cancel_trade__9TProtocolFv(TLobby__data_805D5580);
        lbl_805D6888 &= 0xFFFFFBFF;
    }
}

extern u32 TLobby__data_805D6894;
extern u32 TLobby__data_805D6898;
extern u32 TLobby__data_805D689C;

void check_flags_and_proceed__6TLobbyFv(void) {
    if (((u32) TLobby__data_805D6894 == 0U) && ((u32) TLobby__data_805D6898 == 0U) && ((u32) TLobby__data_805D689C == 0U)) {
        TLobby__sub_802D2D64();
    }
}

}
