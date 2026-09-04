#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803BD824(void);
void TLobby__sub_803BD9E0(void);
void TLobby__sub_803BD9F8(void);
void TLobby__sub_803BE0DC(void);
void TLobby__sub_803BE3C4(void);
void TLobby__sub_803BFE58(u8 *arg0);
void TLobby__sub_803BFEE8(u8 *arg0);
void TLobby__sub_803BFFC0(u8 *arg0);
void TLobby__sub_803BFFFC(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_803C0010(u8 *arg0);
void TLobby__sub_803C0758(u8 *arg0);
void dispatch_field4_event__6TLobbyFPv(u8 *arg0);
s32 get_offset_58__6TLobbyFi(s32 arg0);
s32 get_slot_value__6TLobbyFi(s32 arg0);
void notify_client__6TLobbyFPv(u8 *arg0);
void notify_field_4__6TLobbyFPv(u8 *arg0);
void notify_field_4_alt__6TLobbyFPv(u8 *arg0);
void reset_flag__6TLobbyFPv(u8 *arg0);
void send_packet_by_id_2__6TLobbyFPv(u8 *arg0);
void send_packet_by_id__6TLobbyFPv(u8 *arg0);
void send_with_offset4__6TLobbyFPv(u8 *arg0);
void send_with_offset4_alt__6TLobbyFPv(u8 *arg0);
void set_count__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_3c__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_40__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_44__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_network_result__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_param_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_803C1A00(int);
M2C_UNK TLobby__sub_803C1A24(int);
M2C_UNK TLobby__sub_803C39CC(int);
M2C_UNK TLobby__sub_803C3ABC(int);
M2C_UNK TLobby__sub_803C3AC4(int);
M2C_UNK TLobby__sub_803C3ACC(int);
M2C_UNK TLobby__sub_803C3B38(int);
M2C_UNK TLobby__sub_803C3B44(int);
M2C_UNK get_field30__6TLobbyFPv(int);
M2C_UNK get_field_28__6TLobbyFPv(int);
M2C_UNK get_field_2c__6TLobbyFPv(int);
M2C_UNK get_field_34__6TLobbyFPv(int);
M2C_UNK get_field_a8__6TLobbyFPv(int);
M2C_UNK get_slot__6TLobbyFPv(int);

void TLobby__sub_803BD824(void) {

}

void TLobby__sub_803BD9E0(void) {

}

extern s32 lbl_805D747C;

void TLobby__sub_803BD9F8(void) {
    lbl_805D747C = 0;
}

extern s32 lbl_805D748C;

s32 get_slot_value__6TLobbyFi(s32 arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (lbl_805D748C + (arg0 * 0xF4));
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0xEC) == 0) {
        return -1;
    }
    return M2C_FIELD(temp_r3, s32 *, 0xE8);
}

void TLobby__sub_803BE0DC(void) {

}

extern s32 lbl_805D74F0;
extern s32 lbl_805D7500;

void TLobby__sub_803BE3C4(void) {
    lbl_805D74F0 = 1;
    lbl_805D7500 = 1;
}

s32 get_offset_58__6TLobbyFi(s32 arg0) {
    return arg0 + 0x58;
}

void TLobby__sub_803BFE58(u8 *arg0) {
    get_field_34__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void dispatch_field4_event__6TLobbyFPv(u8 *arg0) {
    get_field30__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void send_with_offset4_alt__6TLobbyFPv(u8 *arg0) {
    get_field_2c__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void notify_client__6TLobbyFPv(u8 *arg0) {
    get_field_28__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFEE8(u8 *arg0) {
    get_slot__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void send_packet_by_id__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3ABC((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void notify_field_4_alt__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3AC4((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void send_packet_by_id_2__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3ACC((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void send_with_offset4__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3B38((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void notify_field_4__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3B44((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void TLobby__sub_803BFFC0(u8 *arg0) {
    get_field_a8__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void set_field_44__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

void set_field_40__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void set_field_3c__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

void TLobby__sub_803BFFFC(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
}

void set_count__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
}

s32 TLobby__sub_803C0010(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

void reset_flag__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C39CC((int) (M2C_FIELD(arg0, s32 *, 4)));
    M2C_FIELD(arg0, s8 *, 1) = 0;
}

void TLobby__sub_803C0758(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 1;
}

void set_network_result__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    TLobby__sub_803C1A00((int) (M2C_FIELD(arg0, s32 *, 4)));
}

void set_param_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    TLobby__sub_803C1A24((int) (M2C_FIELD(arg0, s32 *, 4)));
}

}
