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

struct Obj_803BE860 {
    u8 pad[0x1c4];
    u8 flag;
    f32 a, b, c, d, e, f;
};

struct Rec_803BE528 { u8 data[0x280]; };

struct Slot_803BCCE0 {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Slot_803BD110 {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Slot_803BD124 {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Slot_803BD0FC {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Slot_803BCD08 {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Slot_803BD0C8 {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Slot_803BD0E8 {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Slot_803BD174 {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Slot_803BDA2C {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Obj_803BDCB8 { u8 pad[0x281]; volatile u8 busy; };

struct Rec_803BE1EC { u32 f0; u32 f4; u32 f8; u32 fc; };

struct Slot_803BD138 {
    u8 pad_0[0x1c]; s32 f1c; u32 f20; u32 f24[4]; u8 pad_34[0x70 - 0x34];
    u16 f70; u8 pad_72[0x90 - 0x72]; u8 f90; u8 pad_91[3]; s32 f94; s32 f98;
    u8 f9c; u8 pad_9d[3]; u8 fa0; u8 pad_a1[0xd4 - 0xa1]; u8 fd4; u8 pad_d5[0xec - 0xd5];
    u8 fec; u8 pad_ed[0xf4 - 0xed];
};

struct Rec_803BD62C { u8 pad[0xBC]; };

struct Rec_803BD660 { u8 pad[0xBC]; };

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
s32 OSDisableInterrupts(void);
void TLobby__sub_803BE770(void);
s32 OSRestoreInterrupts(s32 level);
extern s32 lbl_805D7508;
extern u16 lbl_805D7504;
void TLobby__sub_803BE700(void);
void TLobby__sub_803BE8A0(Obj_803BE860 *self, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);
void TLobby__sub_803BE860(Obj_803BE860 *self);
s32 OSEnableInterrupts(void);
void TLobby__sub_803BE790(void);
s32 OSDisableInterrupts(void);
extern s32 lbl_805D7508;
extern u16 lbl_805D7504;
void TLobby__sub_803BE6D4(void);
extern u8 lbl_805D750C;
extern Rec_803BE528 *lbl_805D74EC;
Rec_803BE528 *TLobby__sub_803BE528(void);
s32 OSDisableInterrupts(void);
extern s32 lbl_805D7508;
extern u16 lbl_805D7504;
void TLobby__sub_803BE738(void);
extern u8 lbl_8056E118[];
extern u8 lbl_8056E098[][16];
u8 *TLobby__sub_803BB870(u8 a, u8 b);
extern u32 lbl_8056DE98[][16];
void TLobby__sub_803BADD0(u8 a, u8 b, u32 v);
extern s32 lbl_805D748C;
bool TLobby__sub_803BCCE0(s32 i);
extern s32 lbl_805D748C;
u16 TLobby__sub_803BD110(s32 i);
extern s32 lbl_805D748C;
void TLobby__sub_803BD124(s32 i, u8 v);
extern u32 lbl_805D4630;
u16 TLobby__sub_803BC91C(void);
extern s32 lbl_805D748C;
u8 TLobby__sub_803BD0FC(s32 i);
extern s32 lbl_805D748C;
void TLobby__sub_803BCD08(s32 i, s32 v);
extern s32 lbl_805D748C;
void TLobby__sub_803BD0C8(s32 i, s32 a, s32 b);
extern s32 lbl_805D748C;
u8 TLobby__sub_803BD0E8(s32 i);
extern s32 lbl_805D748C;
extern s8 lbl_805D74B8;
void TLobby__sub_803BD174(s32 i);
void TLobby__sub_803B58DC(u8 i, s32 a, s32 b);
void TLobby__sub_803BD5EC(u8 i, s32 a, s32 b);
u32 TLobby__sub_803BD800(u8 i);
void TLobby__sub_803BD9C0(void);
void TLobby__sub_803BDCD0(void *p);
void TLobby__sub_803BD884(void *self, void *p);
void TLobby__sub_803BE224(u8 i);
void TLobby__sub_803BD7E0(u8 i);
void TLobby__sub_803B59E4(u8 i);
void TLobby__sub_803BD60C(u8 i);
extern s32 lbl_805D748C;
bool TLobby__sub_803BDA2C(s32 i);
void *TLobby__sub_803BE0E0(u32 size);
void *TLobby__sub_803BD7C0(u32 size);
u32 ARGetBaseAddress(void);
u32 TLobby__sub_803BDEF0(void);
extern Obj_803BDCB8 lbl_8056E158;
void TLobby__sub_803BDCB8(void);
extern Rec_803BE1EC lbl_8056E660[];
u32 TLobby__sub_803BE1EC(u8 i, u32 *out);
void AIStartDMA(void);
void TLobby__sub_803BE508(void);
extern s32 lbl_805D748C;
extern s8 lbl_805D74B8; void TLobby__sub_803B8910(Slot_803BD138 *s, s32 x);
void TLobby__sub_803BD138(s32 i, s32 x);
extern RecoveredGlobal_803BD5C4_lbl_805663D8 lbl_805663D8;
void TLobby__sub_803B8A14(Rec_803BD62C *r, void *p);
void TLobby__sub_803BD62C(u8 i, void *p);
extern RecoveredGlobal_803BD5C4_lbl_805663D8 lbl_805663D8;
void TLobby__sub_803B8ABC(Rec_803BD660 *r, u32 x);
void TLobby__sub_803BD660(u8 i, u32 x);
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

void TLobby__sub_803BADD0(u8 a, u8 b, u32 v) {
    lbl_8056DE98[b][a] |= v;
}

u8 *TLobby__sub_803BB870(u8 a, u8 b) {
    if (b == 0xff) {
        return &lbl_8056E118[a];
    }
    return &lbl_8056E098[b][a];
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

u16 TLobby__sub_803BC91C(void) {
    lbl_805D4630 = lbl_805D4630 * 0xA8351D63;
    return lbl_805D4630 >> 6;
}

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

bool TLobby__sub_803BCCE0(s32 i) {
    return (*(Slot_803BCCE0 * *)&lbl_805D748C)[i].fec != 0;
}

void set_global_7490__6TLobbyFi(s32 arg0) {
    lbl_805D7490 = arg0;
}

void TLobby__sub_803BCD08(s32 i, s32 v) {
    (*(Slot_803BCD08 * *)&lbl_805D748C)[i].f1c = v;
}

void TLobby__sub_803BD0C8(s32 i, s32 a, s32 b) {
    (*(Slot_803BD0C8 * *)&lbl_805D748C)[i].f94 = a; (*(Slot_803BD0C8 * *)&lbl_805D748C)[i].f98 = b;
}

u8 TLobby__sub_803BD0E8(s32 i) {
    return (*(Slot_803BD0E8 * *)&lbl_805D748C)[i].f9c;
}

u8 TLobby__sub_803BD0FC(s32 i) {
    return (*(Slot_803BD0FC * *)&lbl_805D748C)[i].f90;
}

u16 TLobby__sub_803BD110(s32 i) {
    return (*(Slot_803BD110 * *)&lbl_805D748C)[i].f70;
}

void TLobby__sub_803BD124(s32 i, u8 v) {
    (*(Slot_803BD124 * *)&lbl_805D748C)[i].fa0 = v;
}

void TLobby__sub_803BD138(s32 i, s32 x) {
    (*(Slot_803BD138 * *)&lbl_805D748C)[i].fd4 = lbl_805D74B8; TLobby__sub_803B8910(&(*(Slot_803BD138 * *)&lbl_805D748C)[i], x);
}

void TLobby__sub_803BD174(s32 i) {
    (*(Slot_803BD174 * *)&lbl_805D748C)[i].f24[(u8)lbl_805D74B8] |= 0x40;
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

void TLobby__sub_803BD5EC(u8 i, s32 a, s32 b) {
    TLobby__sub_803B58DC(i, a, b);
}

void TLobby__sub_803BD60C(u8 i) {
    TLobby__sub_803B59E4(i);
}

void TLobby__sub_803BD62C(u8 i, void *p) {
    TLobby__sub_803B8A14(&((Rec_803BD62C *)&lbl_805663D8)[i], p);
}

void TLobby__sub_803BD660(u8 i, u32 x) {
    TLobby__sub_803B8ABC(&((Rec_803BD660 *)&lbl_805663D8)[i], x);
}

void *TLobby__sub_803BD7C0(u32 size) {
    return TLobby__sub_803BE0E0(size);
}

void TLobby__sub_803BD7E0(u8 i) {
    TLobby__sub_803BE224(i);
}

u32 TLobby__sub_803BD800(u8 i) {
    return TLobby__sub_803BE1EC(i, (u32 *)(0));
}

void TLobby__sub_803BD824(void) {
}

void TLobby__sub_803BD884(void *self, void *p) {
    TLobby__sub_803BDCD0(p);
}

void TLobby__sub_803BD9C0(void) {
    TLobby__sub_803BDCB8();
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

bool TLobby__sub_803BDA2C(s32 i) {
    return (*(Slot_803BDA2C * *)&lbl_805D748C)[i].fec == 1;
}

void TLobby__sub_803BDCB8(void) {
    while (lbl_8056E158.busy != 0) {
    }
}

u32 TLobby__sub_803BDEF0(void) {
    return ARGetBaseAddress();
}

void TLobby__sub_803BE000(s32 arg0, s32 arg1) {
    lbl_805D74CC -= (arg1 + 0x1F) & 0xFFFFFFE0;
}
void TLobby__sub_803BE0DC(void) {
}

u32 TLobby__sub_803BE1EC(u8 i, u32 *out) {
    if (out != 0) {
        *out = lbl_8056E660[i].f8;
    }
    return lbl_8056E660[i].f4;
}

void TLobby__sub_803BE3C4(void) {
    lbl_805D74F0 = 1;
    lbl_805D7500 = 1;
}

void TLobby__sub_803BE508(void) {
    AIStartDMA();
}

Rec_803BE528 *TLobby__sub_803BE528(void) {
    return &lbl_805D74EC[(u8)((lbl_805D750C + 2) % 4)];
}

#pragma push
#pragma scheduling off
void TLobby__sub_803BE6D4(void) {
    lbl_805D7508 = OSDisableInterrupts();
    lbl_805D7504 = 1;
}
#pragma pop

void TLobby__sub_803BE700(void) {
    if (--lbl_805D7504 == 0) {
        OSRestoreInterrupts(lbl_805D7508);
    }
}

void TLobby__sub_803BE738(void) {
    if (lbl_805D7504++ == 0) {
        lbl_805D7508 = OSDisableInterrupts();
    }
}

void TLobby__sub_803BE770(void) {
    OSDisableInterrupts();
}

void TLobby__sub_803BE790(void) {
    OSEnableInterrupts();
}

void TLobby__sub_803BE860(Obj_803BE860 *self) {
    self->flag = 0;
    TLobby__sub_803BE8A0(self, self->a, self->c, self->b, self->d, self->e, self->f);
}

}
