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

struct Obj_803C07E8 { u8 a; s8 b; };

extern "C" {
extern s8 lbl_805D74B8;
void set_global_flag__6TLobbyFc(s8 arg0);
extern s8 lbl_805D74B8;
u8 TLobby__sub_803BCCD8(void);
extern s32 lbl_805D7490;
void set_global_7490__6TLobbyFi(s32 arg0);
extern M2C_UNK lbl_805D4638;
extern s32 lbl_805D748C;
void TLobby__sub_803BD214(s32 arg0, s32 arg1);
extern s32 lbl_805D748C;
extern M2C_UNK lbl_805D4640;
void TLobby__sub_803BD240(s32 arg0, s32 arg1);
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
s32 TLobby__sub_803C07E8(Obj_803C07E8 *self);
}

extern "C" {

void shift_left_8__6TLobbyFPv(s32 *arg0);
u32 shift_right_8__6TLobbyFUi(u32 arg0);
void transform_vec3__6TLobbyFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);

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

s32 TLobby__sub_803C07E8(Obj_803C07E8 *self) {
    return self->b;
}

void TLobby__sub_803C07F4(u8 *arg0) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 4));
        if (temp_r3 != NULL) {
            clear_record__6TLobbyFPv(temp_r3);
        }
        init_once__6TLobbyFv();
        memset((void *) (arg0), (int) (0), (int) (0x9C));
        release_ref__6TLobbyFv();
    }
}
void TLobby__sub_803C0AD8(void) {
    memset((void *) (&(*(RecoveredGlobal_803C0AD8_lbl_80570AC0 *)&lbl_80570AC0).value), (int) (0), (int) (0x9C0));
}
void TLobby__sub_803C0B08(void) {
    TLobby__sub_803C406C();
    memset((void *) (&lbl_80570AC0.value), (int) (0), (int) (0x9C0));
}
void TLobby__sub_803C0B3C(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xAA);
    if (temp_r0 == 2) {
        EXIGetID((void *) (arg0));
        return;
    }
    if (temp_r0 == 1) {
        TLobby__sub_803C0F98((void *) (arg0));
        return;
    }
    if (temp_r0 == 0) {
        TLobby__sub_803C133C((void *) (arg0));
    }
}

typedef char RecoveredGlobal_803C0B08_lbl_80570AC0_size[sizeof(RecoveredGlobal_803C0B08_lbl_80570AC0) == 0x9C0 ? 1 : -1];
typedef char RecoveredGlobal_803C0AD8_lbl_80570AC0_size[sizeof(RecoveredGlobal_803C0AD8_lbl_80570AC0) == 0x9C0 ? 1 : -1];

}
