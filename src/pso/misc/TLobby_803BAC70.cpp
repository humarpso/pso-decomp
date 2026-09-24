#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803C0B08_lbl_80570AC0 {
    M2C_UNK value;
    u8 remaining[0x9BC];
};

struct RecoveredGlobal_803C0AD8_lbl_80570AC0 {
    M2C_UNK value;
    u8 remaining[0x9BC];
};

struct RecoveredGlobal_803BD5C4_lbl_805663D8 {
    M2C_UNK value;
    u8 remaining[0x6DC];
};

struct TLobbySlot_803BD214 {
    u8 pad_0[0x24];
    s32 flags;
    u8 pad_28[0xA4];
    u16 code_cc;
    u16 code_ce;
    u8 pad_d0[0x24];
};

extern "C" {
extern s8 lbl_805D74B8;
void set_global_flag__6TLobbyFc(s8 arg0);
extern s8 lbl_805D74B8;
u8 TLobby__sub_803BCCD8(void);
extern s32 lbl_805D7490;
void set_global_7490__6TLobbyFi(s32 arg0);
extern M2C_UNK lbl_805D4638;
extern s32 lbl_805D748C;
void TLobby__sub_803BD214(s32 index, u8 entry);
extern s32 lbl_805D748C;
extern M2C_UNK lbl_805D4640;
void TLobby__sub_803BD240(s32 index, u8 entry);
void TLobby__sub_803BD824(void);
void TLobby__sub_803BD9E0(void);
extern s32 lbl_805D747C;
void TLobby__sub_803BD9F8(void);
extern s32 lbl_805D748C;
s32 get_slot_value__6TLobbyFi(s32 arg0);
extern s32 lbl_805D74CC;
void TLobby__sub_803BE000(s32 arg0, s32 arg1);
void TLobby__sub_803BE0DC(void);
extern s32 lbl_805D74F0;
extern s32 lbl_805D7500;
void TLobby__sub_803BE3C4(void);
s32 get_offset_58__6TLobbyFi(s32 arg0);
M2C_UNK get_field_34__6TLobbyFPv(int);
void TLobby__sub_803BFE58(u8 *arg0);
M2C_UNK get_field30__6TLobbyFPv(int);
void dispatch_field4_event__6TLobbyFPv(u8 *arg0);
M2C_UNK get_field_2c__6TLobbyFPv(int);
void send_with_offset4_alt__6TLobbyFPv(u8 *arg0);
M2C_UNK get_field_28__6TLobbyFPv(int);
void notify_client__6TLobbyFPv(u8 *arg0);
M2C_UNK get_slot__6TLobbyFPv(int);
void TLobby__sub_803BFEE8(u8 *arg0);
M2C_UNK TLobby__sub_803C3ABC(int);
void send_packet_by_id__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C3AC4(int);
void notify_field_4_alt__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C3ACC(int);
void send_packet_by_id_2__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C3B38(int);
void send_with_offset4__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C3B44(int);
void notify_field_4__6TLobbyFPv(u8 *arg0);
M2C_UNK get_field_a8__6TLobbyFPv(int);
void TLobby__sub_803BFFC0(u8 *arg0);
void set_field_44__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_40__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_3c__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803BFFFC(u8 *arg0, s32 arg1, s32 arg2);
void set_count__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C0010(u8 *arg0);
M2C_UNK TLobby__sub_803C39CC(int);
void reset_flag__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803C0758(u8 *arg0);
M2C_UNK TLobby__sub_803C1A00(int);
void set_network_result__6TLobbyFPvi(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_803C1A24(int);
void set_param_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1);
void clear_record__6TLobbyFPv(void *);
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803C07F4(u8 *arg0);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C0B08_lbl_80570AC0 lbl_80570AC0;
void TLobby__sub_803C0AD8(void);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803C406C(void);
extern RecoveredGlobal_803C0B08_lbl_80570AC0 lbl_80570AC0;
void TLobby__sub_803C0B08(void);
s32 EXIGetID(void *);
s32 TLobby__sub_803C0F98(void *);
s32 TLobby__sub_803C133C(void *);
void TLobby__sub_803C0B3C(u8 *arg0);
extern RecoveredGlobal_803BD5C4_lbl_805663D8 lbl_805663D8;
void TLobby__sub_803BD5C4(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
u8 TLobby__sub_803BC774(u8 arg0);
}

extern "C" {

void shift_left_8__6TLobbyFPv(s32 *arg0);
u32 shift_right_8__6TLobbyFUi(u32 arg0);
void transform_vec3__6TLobbyFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);

void transform_vec3__6TLobbyFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + ((M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)))));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + ((M2C_FIELD(arg0, f32 *, 0x14) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 0x10) * M2C_FIELD(arg1, f32 *, 4)))));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + ((M2C_FIELD(arg0, f32 *, 0x20) * M2C_FIELD(arg1, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0x18) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 0x1C) * M2C_FIELD(arg1, f32 *, 4)))));
}

#pragma push
#pragma scheduling off
u8 TLobby__sub_803BC774(u8 arg0) {
    switch (arg0) {
    case 0x80:
        return 0x80U;
    case 0x81:
        return 0x82U;
    case 0x82:
        return 0xA0U;
    case 0x83:
        return 0xA1U;
    case 0x84:
        return 0x83U;
    case 0x85:
        return 0x84U;
    case 0x86:
        return 0xA2U;
    case 0x87:
        return 0xA3U;
    case 0x88:
        return 0xA4U;
    default:
        return arg0;
    }
}
#pragma pop

void shift_left_8__6TLobbyFPv(s32 *arg0) {
    *arg0 <<= 8;
}

u32 shift_right_8__6TLobbyFUi(u32 arg0) {
    return arg0 >> 8U;
}
void set_global_flag__6TLobbyFc(s8 arg0) {
    lbl_805D74B8 = arg0;
}
u8 TLobby__sub_803BCCD8(void) {
    return (*(u8 *)&lbl_805D74B8);
}
void set_global_7490__6TLobbyFi(s32 arg0) {
    lbl_805D7490 = arg0;
}
void TLobby__sub_803BD214(s32 index, u8 entry) {
    TLobbySlot_803BD214 *slot = &((TLobbySlot_803BD214 *)lbl_805D748C)[index];
    slot->code_cc = ((u16 *)&lbl_805D4638)[entry];
    slot->flags |= 0x100;
}
void TLobby__sub_803BD240(s32 index, u8 entry) {
    TLobbySlot_803BD214 *slot = &((TLobbySlot_803BD214 *)lbl_805D748C)[index];
    slot->code_ce = ((u16 *)&lbl_805D4640)[entry];
    slot->flags |= 0x80;
}

#pragma push
#pragma scheduling off
typedef char RecoveredGlobal_803BD5C4_lbl_805663D8_size[sizeof(RecoveredGlobal_803BD5C4_lbl_805663D8) == 0x6E0 ? 1 : -1];
void TLobby__sub_803BD5C4(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *temp_r3;
    temp_r3 = (u8 *)&lbl_805663D8.value + (arg0 * 0xBC);
    M2C_FIELD(temp_r3, s32 *, 0xAC) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0xB4) = arg2;
    M2C_FIELD(temp_r3, s32 *, 0xB0) = arg3;
    M2C_FIELD(temp_r3, s32 *, 0xB8) = arg4;
}
#pragma pop

void TLobby__sub_803BD824(void) {
}
void TLobby__sub_803BD9E0(void) {
}
void TLobby__sub_803BD9F8(void) {
    lbl_805D747C = 0;
}
s32 get_slot_value__6TLobbyFi(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (unsigned char *) (lbl_805D748C + (arg0 * 0xF4));
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0xEC) == 0) {
        return -1;
    }
    return M2C_FIELD(temp_r3, s32 *, 0xE8);
}
void TLobby__sub_803BE000(s32 arg0, s32 arg1) {
    lbl_805D74CC -= (arg1 + 0x1F) & 0xFFFFFFE0;
}
void TLobby__sub_803BE0DC(void) {
}
void TLobby__sub_803BE3C4(void) {
    lbl_805D74F0 = 1;
    lbl_805D7500 = 1;
}
}
