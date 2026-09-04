#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowSubComCard__sub_80272034(void);
int TWindowSubComCard__sub_802721D8(void);
void apply_selection__17TWindowSubComCardFi(s32 arg0);
void cleanup__17TWindowSubComCardFPv(void* p);
void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1);
void handle_close_flag__17TWindowSubComCardFPv(void *arg0);
void init_layout__17TWindowSubComCardFv(void);
void send_cmd_133__17TWindowSubComCardFv(void);
void send_command__17TWindowSubComCardFi(s32 arg0);
void send_state_if_dirty__17TWindowSubComCardFPv(u8 *arg0);
int TLobby__sub_802421C4(void);
s32 TWindowComCard__sub_80249980(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TWindowSubComCard__sub_8007A860(s32);
int TWindowSubComCard__sub_8007A8F8(void);
s32 TWindowSubComCard__sub_8007BC04(s32 a0 = 0);
int TWindowSubComCard__sub_80265BF8(void*);
s32 TWindowSubComCard__sub_8026CBB8(s32 a0 = 0);
s32 create__14TWindowComCardFPvPv(s32 a0 = 0, s32 a1 = 0);
s32 create_card_list__17TWindowSubComCardFiiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
int fn_802754EC(void);
int get_card_id__17TWindowSubComCardFPv(void);
int get_message_10__20TWindowSubStatusDispFPv(void*);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
M2C_UNK send_card_window_state__6TLobbyFv();
M2C_UNK send_status_packet__6TLobbyFv();

void handle_close_flag__17TWindowSubComCardFPv(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D) & 2) {
        send_status_packet__6TLobbyFv();
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) & 0xFFFFFFFD);
    }
}

void send_state_if_dirty__17TWindowSubComCardFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D) & 1) {
        send_card_window_state__6TLobbyFv();
        M2C_FIELD(arg0, s8 *, 0x1D) = (s8) (M2C_FIELD(arg0, s8 *, 0x1D) & ~1);
    }
}

int TWindowSubComCard__sub_80272034(void) { return 0; }

void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1) { get_message_10__20TWindowSubStatusDispFPv((char*)a1 + 0xa6); }
void apply_selection__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8007BC04(0);
    TWindowComCard__sub_80249980(TWindowSubComCard__sub_8026CBB8(0x92), arg0, temp_r31);
}
void send_command__17TWindowSubComCardFi(s32 arg0) {
    create__14TWindowComCardFPvPv(TWindowSubComCard__sub_8026CBB8(0x86), arg0);
}
void init_layout__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8007BC04(0);
    create_card_list__17TWindowSubComCardFiiii(TWindowSubComCard__sub_8026CBB8(0x91), temp_r31, 0x1C, 1);
}
void send_cmd_133__17TWindowSubComCardFv(void) { TWindowSubComCard__sub_8026CBB8(133); fn_802754EC(); }
void cleanup__17TWindowSubComCardFPv(void* p) { TWindowSubComCard__sub_80265BF8(*(void**)((char*)p + 0x84)); TWindowSubComCard__sub_8007A8F8(); get_card_id__17TWindowSubComCardFPv(); TLobby__sub_802421C4(); }

int TWindowSubComCard__sub_802721D8(void) { return 0; }

}
