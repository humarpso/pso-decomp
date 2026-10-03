#pragma dont_inline on
#include "types.h"
#include "pso/audio/SoundMixVoice.h"
#include "pso/audio/SoundReverb.h"
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

typedef struct Lob_803BBFB8 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x238 - 0x218];
    u16 v;
} Lob_803BBFB8;

typedef struct Lob_803BC000 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x25C - 0x218];
    u16 v;
} Lob_803BC000;

typedef struct Lob_803BC048 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x280 - 0x218];
    u16 v;
} Lob_803BC048;

typedef struct Lob_803BC090 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x2A4 - 0x218];
    u16 v;
} Lob_803BC090;

typedef struct Lob_803BC0D8 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x2C8 - 0x218];
    u16 v;
} Lob_803BC0D8;

typedef struct Lob_803BC120 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x2EC - 0x218];
    u16 v;
} Lob_803BC120;

typedef struct Lob_803BC168 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x310 - 0x218];
    u16 v;
} Lob_803BC168;

typedef struct Lob_803BC1B0 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x358 - 0x218];
    u16 v;
} Lob_803BC1B0;

typedef struct Lob_803BC1F8 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x37C - 0x218];
    u16 v;
} Lob_803BC1F8;

typedef struct Lob_803BC240 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x3A0 - 0x218];
    u16 v;
} Lob_803BC240;

typedef struct Lob_803BC288 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x3C4 - 0x218];
    u16 v;
} Lob_803BC288;

typedef struct Lob_803BC2D0 {
    u8 pad0[0x121];
    u8 b121;
    u8 b122;
    u8 pad123[0x214 - 0x123];
    s32 flags;
    u8 pad218[0x3E8 - 0x218];
    u16 v;
} Lob_803BC2D0;

struct Slot_803BCEC8 {
    u8 pad_0[0x24]; u32 f24[0x1f];
    u8 pad_a0[0xec - 0xa0]; u8 fec; u8 ffd; u8 fee; u8 pad_ef[5];
};

struct Slot_803BD19C {
    u8 pad_0[0x24]; u32 f24[4]; u32 f34; u32 f38[0x1f];
    u8 pad_b4[0xe4 - 0xb4 - 0x0]; u8 fe4; u8 pad_e5[0xf4 - 0xe5];
};

typedef M2C_UNK (*RecoveredCallback_d26337a2813d)();

struct Cb_803BE7D8 { s32 a; void (*fn)(s32); };

struct Slot_803BD26C {
    u8 pad_0[0xd0]; s16 fd0; s16 fd2; u8 pad_d4[0xf0 - 0xd4]; u32 ff0;
};

struct Ent_803BB8F0 { u8 code; u8 flags; u8 pad[2]; s32 val; };

struct Obj_803BB8F0 { Ent_803BB8F0 ents[4]; u8 pad20[2]; u8 count; };

struct Obj_803BC7E4 { u8 pad[0x121]; u8 b121; u8 b122; u8 pad123[0x1C4 - 0x123]; s16 v1c4; u8 pad1c6[0x1D0 - 0x1C6]; s16 v1d0; };

struct Obj_803BC884 { u8 pad[0x121]; u8 b121; u8 b122; };

struct Slot_803BD694 {
    u8 pad_0[0x20]; u32 f20; u8 pad_24[0x78 - 0x24]; u32 f78; u8 pad_7c[0x90 - 0x7C];
    u8 f90; u8 pad_91[0xEC - 0x91]; u8 fec; u8 pad_ed[0xF4 - 0xED];
};

struct Hdr_803BD8A8 { u32 f0; u32 info; };

struct Hdr_803BD93C { u32 f0; u32 info; };

typedef u8 * (*RecoveredCallback_fa840eeea008)(u8 *, u32);

#define SLOTS_803BCD1C (*(Slot_803BCD1C **)&lbl_805D748C)
struct Blk_803BCD1C { s32 w[8]; };

struct Slot_803BCD1C {
    u8 pad_0[0x18]; s32 f18; s32 f1c; u8 pad_20[4]; s32 f24[19]; s16 f70; u8 pad_72[2];
    Blk_803BCD1C f74; u8 pad_94[0xA4 - 0x94]; s8 fa4; u8 pad_a5[0xB8 - 0xA5];
    s32 fb8; s32 fbc; s16 fc0; u8 pad_c2[2]; s32 fc4; u8 pad_c8[0xE4 - 0xC8];
    u8 fe4; u8 fe5; u8 fe6; u8 fe7; u8 pad_e8[0xF0 - 0xE8]; s32 ff0;
};

#define SLOTS_803BCF18 (*(Slot_803BCF18 **)&lbl_805D748C)
struct Slot_803BCF18 {
    u8 pad_0[0x24]; s32 f24; u8 pad_28[0xA4 - 0x28]; s8 fa4; u8 pad_a5[0xB8 - 0xA5];
    s32 fb8; s32 fbc; u16 fc0; u8 pad_c2[2]; s32 fc4; s8 fc8; s8 fc9; s8 fca; u8 pad_cb[0xF4 - 0xCB];
};

struct ArgA_803BCF18 { u16 f0; u16 f2; u16 f4; u16 f6; };

struct ArgB_803BCF18 { s32 f0; s32 f4; u16 f8; u16 fa; };

struct Req_803BDAE4 {
    void *next; s32 owner; s32 type; s32 prio; u8 *src; u32 dst; u32 len; void *cb; void *f20; void *f24;
};

struct Q_803BDAE4 { Req_803BDAE4 reqs[16]; volatile u8 wp; volatile u8 count; };

typedef struct S_803BF408 {
    u8 pad0[0x1A8];
    f32 f1A8;
} S_803BF408;

struct Src_803BF884 {
    s32 *dest;
    s32 *smpBase;
    s32 *old;
    u32 posLo;
    u32 posHi;
    u32 pitchLo;
    u32 pitchHi;
};

struct Work_803BF884 {
    s32 *lastLeft[3];
    s32 *lastRight[3];
    s32 *lastSur[3];
    u8 currentLast;
    s32 oldLeft[4];
    s32 oldRight[4];
    s32 oldSur[4];
    u32 currentPosLo;
    u32 currentPosHi;
    s32 pitchOffset;
    u32 pitchOffsetPeriodCount;
    u32 pitchOffsetPeriod;
    Src_803BF884 src;
};

struct Info_803BF884 {
    s32 *left;
    s32 *right;
    s32 *surround;
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
void TLobby__sub_803BD26C(s32 i, u8 mode);
M2C_UNK TLobby__sub_803B89B4(void *);
void TLobby__sub_803BD598(s32 arg0);
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
extern SoundStudioMixView lbl_805663D8[];
void set_sound_aux_bus_callbacks(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
u8 TLobby__sub_803BC774(u8 arg0);
s32 OSDisableInterrupts(void);
void TLobby__sub_803BE770(void);
s32 OSRestoreInterrupts(s32 level);
extern s32 lbl_805D7508;
extern u16 lbl_805D7504;
void sound_enable_irq(void);
s32 create_sound_reverb_state(SoundReverb *self, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);
void init_sound_reverb(Obj_803BE860 *self);
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
void sound_disable_irq(void);
extern u8 lbl_8056E118[];
extern u8 lbl_8056E098[][16];
u8 *TLobby__sub_803BB870(u8 a, u8 b);
extern u32 lbl_8056DE98[][16];
void TLobby__sub_803BADD0(u8 a, u8 b, u32 v);
extern s32 lbl_805D748C;
bool is_sound_hw_voice_active(s32 i);
extern s32 lbl_805D748C;
u16 TLobby__sub_803BD110(s32 i);
extern s32 lbl_805D748C;
void TLobby__sub_803BD124(s32 i, u8 v);
extern u32 lbl_805D4630;
u16 TLobby__sub_803BC91C(void);
extern s32 lbl_805D748C;
u8 TLobby__sub_803BD0FC(s32 i);
extern s32 lbl_805D748C;
void set_sound_hw_voice_priority(s32 i, s32 v);
extern s32 lbl_805D748C;
void TLobby__sub_803BD0C8(s32 i, s32 a, s32 b);
extern s32 lbl_805D748C;
u8 TLobby__sub_803BD0E8(s32 i);
extern s32 lbl_805D748C;
extern s8 lbl_805D74B8;
void key_off_sound_hw_voice(s32 i);
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
extern SoundStudioMixView lbl_805663D8[];
void TLobby__sub_803B8A14(Rec_803BD62C *r, void *p);
void TLobby__sub_803BD62C(u8 i, void *p);
extern SoundStudioMixView lbl_805663D8[];
void TLobby__sub_803B8ABC(Rec_803BD660 *r, u32 x);
void TLobby__sub_803BD660(u8 i, u32 x);
extern u8 lbl_8056E098[][16];
extern u8 lbl_8056E118[];
void TLobby__sub_803BB8AC(u8 arg0, u8 arg1);
extern M2C_UNK lbl_80567958[];
extern M2C_UNK lbl_805679D8[];
void TLobby__sub_803BBAA8(u8 arg0, u8 arg1, u8 arg2);
void *memcpy(void *dst, const void *src, u32 n);
extern u8 lbl_8047C310[];
extern u8 lbl_8047C398[];
extern u8 lbl_80567A18[][0x10][0x86];
extern u8 lbl_8056BD18[][0x86];
extern M2C_UNK lbl_80567958[];
extern M2C_UNK lbl_805679D8[];
u8 TLobby__sub_803BBAEC(u8 arg0, u8 arg1);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BBFB8(Lob_803BBFB8 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC000(Lob_803BC000 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC048(Lob_803BC048 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC090(Lob_803BC090 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC0D8(Lob_803BC0D8 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC120(Lob_803BC120 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC168(Lob_803BC168 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC1B0(Lob_803BC1B0 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC1F8(Lob_803BC1F8 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC240(Lob_803BC240 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC288(Lob_803BC288 *arg0);
u16 calc_sound_controller_value(void *, void *, int, int);
u16 TLobby__sub_803BC2D0(Lob_803BC2D0 *arg0);
extern s16 lbl_804F7168[];
s16 TLobby__sub_803BC93C(s32 arg0);
u32 TLobby__sub_803A6F18(void *);
void TLobby__sub_803BCA50(u32 *arg0, s32 arg1);
extern s32 lbl_805D748C;
extern s8 lbl_805D74B8;
void TLobby__sub_803BCEC8(s32 i);
extern s32 lbl_805D748C;
extern s8 lbl_805D74B8;
void TLobby__sub_803BD19C(s32 i, u16 v);
M2C_UNK PPCSync();
u32 DSPCheckMailToDSP();
M2C_UNK DSPSendMailToDSP(void *);
M2C_UNK update_sound_dsp_voices(void *, int);
extern u16 lbl_805D7474;
extern s32 lbl_805D7478;
extern s32 lbl_805D74F0;
void TLobby__sub_803BE614(s32 arg0);
s32 OSGetTick();
extern s32 lbl_805D74FC;
u32 TLobby__sub_803BE688(void);
extern RecoveredCallback_d26337a2813d lbl_805D74BC;
f32* TLobby__sub_803BE7B0(s32 bytes);
extern RecoveredCallback_d26337a2813d lbl_805D74BC;
void TLobby__sub_803BE7D8(s32 arg0);
void reverb_aux_callback(u8 arg0, u8 *arg1, u8 *arg2);
u8 TLobby__sub_803BC774(u8 arg0);
void TLobby__sub_803BB8F0(Obj_803BB8F0 *arg0, u8 arg1, s32 arg2, u8 arg3, u32 arg4);
u8 TLobby__sub_803BC774(u8 arg0);
u16 TLobby__sub_803BB5E4(u8 arg0, u8 arg1, u8 arg2);
u16 TLobby__sub_803BC7E4(Obj_803BC7E4 *arg0, u8 arg1);
u8 TLobby__sub_803BC774(u8 arg0);
void TLobby__sub_803BB3C8(u8 arg0, u8 arg1, u8 arg2, s16 arg3);
void TLobby__sub_803BC884(Obj_803BC884 *arg0, u8 arg1, s16 arg2);
extern s32 lbl_805D748C;
u32 TLobby__sub_803BD694(s32 arg0);
void DCStoreRange(void *addr, u32 nBytes);
u32 TLobby__sub_803BE1EC(u8 i, u32 *out);
void TLobby__sub_803BD738(u8 *base, u32 offset, u32 len, u8 i, void *cb, void *arg);
void TLobby__sub_803BD8A8(Hdr_803BD8A8 **arg0, u32 *arg1);
void TLobby__sub_803BE000(s32 arg0, s32 arg1);
void TLobby__sub_803BD93C(Hdr_803BD93C *arg0, u32 arg1);
void TLobby__sub_803BE6D4(void);
void sound_enable_irq(void);
void TLobby__sub_803BE508(void);
u32 TLobby__sub_803BE43C(void *fn, u32 arg1, u32 arg2);
u32 TLobby__sub_803B5500(u8 arg0, u8 arg1, bool arg2);
u32 TLobby__sub_803BE554(u32 arg0);
void TLobby__sub_803BCAA0(void);
extern s32 lbl_805D7490;
extern s8 lbl_805D74C6;
extern s8 lbl_805D74C7;
s32 TLobby__sub_803BCC0C(u32 arg0, s32 arg1, s32 arg2, u32 arg3);
void DCFlushRange(void *addr, u32 nBytes);
extern s32 lbl_805D74CC;
extern RecoveredCallback_fa840eeea008 lbl_805D74D4;
extern u32 lbl_805D74D8;
s32 TLobby__sub_803BDF10(u8 *src, u32 size);
extern Rec_803BE1EC lbl_8056E660[];
extern s32 lbl_805D74CC;
extern s32 lbl_805D74D0;
extern Rec_803BE1EC *lbl_805D74DC;
extern Rec_803BE1EC *lbl_805D74E0;
extern Rec_803BE1EC *lbl_805D74E4;
void *TLobby__sub_803BE0E0(u32 arg0);
void TLobby__sub_803BD214(s32 index, u8 entry);
void TLobby__sub_803BD240(s32 index, u8 entry);
void TLobby__sub_803BD26C(s32 i, u8 mode);
extern s8 lbl_805D74B8;
void start_sound_sample_voice(s32 n, s16 arg1, Blk_803BCD1C *arg2, u32 arg3, s32 arg4, s32 arg5, u32 arg6, u8 arg7);
u16 TLobby__sub_803B3ED8(s32);
extern u8 lbl_804F68DC[];
void set_sound_hw_voice_envelope(s32 n, void *arg1, u8 mode);
s32 OSDisableInterrupts(void);
s32 OSRestoreInterrupts(s32 level);
M2C_UNK ARQPostRequest(Req_803BDAE4 *, s32, s32, s32, u8 *, u32, u32, void *);
void TLobby__sub_803BDA4C(void);
extern Obj_803BDCB8 lbl_8056E158;
extern Obj_803BDCB8 lbl_8056E3DC;
void TLobby__sub_803BDAE4(u8 *src, u32 dst, u32 len, s32 dir, void *cb, void *arg);
void TLobby__sub_803BED6C(void *, void *, f32, f32);
void process_sound_reverb_block(void *, void *, int);
void process_sound_reverb_callback(void *arg0, void *arg1, void *arg2, S_803BF408 *arg3);
extern s32 lbl_805D748C;
extern SoundStudioMixView lbl_805663D8[];
extern u16 lbl_8047C420[];
void apply_sound_mix_curve(u32 p, SoundMixCurveOutput *out, s32 x, s32 a3, bool f7, bool f8, f32 a, f32 b, f32 c);
void set_sound_voice_mix(s32 idx, u32 p, u32 x, s32 a3, f32 a, f32 b, f32 c);
void TLobby__sub_803BF500(void *);
void TLobby__sub_803BF698(void *);
void TLobby__sub_803BF884(u8 reason, Info_803BF884 *info, Work_803BF884 *c);
extern u32 lbl_80557348[];
extern const f32 lbl_805E0C48;
u32 TLobby__sub_803BD828(u32 arg0);
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

void TLobby__sub_803BB4F0(u8 arg0, u8 arg1, u32 arg2) {
    u8 *src = arg2 != 0 ? lbl_8047C310 : lbl_8047C398;
    u8 *dst;
    s32 i;

    if (arg1 != 0xFF) {
        dst = lbl_80567A18[arg1][arg0];
    } else {
        dst = lbl_8056BD18[arg0];
    }
    if (arg2 != 0) {
        memcpy(dst, src, 0x86);
    } else {
        for (i = 0; i < 0x86; i++) {
            if (src[i] != 0xFF) {
                dst[i] = src[i];
            }
        }
    }
    TLobby__sub_803BBAA8(arg0, arg1, 0xFF);
}

u8 *TLobby__sub_803BB870(u8 a, u8 b) {
    if (b == 0xff) {
        return &lbl_8056E118[a];
    }
    return &lbl_8056E098[b][a];
}

void TLobby__sub_803BB8AC(u8 arg0, u8 arg1) {
    s8 *var_r3;
    if (arg1 != 0xFF) {
        var_r3 = (s8 *)&lbl_8056E098[arg1][arg0];
    } else {
        var_r3 = (s8 *)&lbl_8056E118[arg0];
    }
    *var_r3 = 2;
}

void TLobby__sub_803BB8F0(Obj_803BB8F0 *arg0, u8 arg1, s32 arg2, u8 arg3, u32 arg4) {
    u32 n;
    if (arg3 == 0) {
        arg0->count = 0;
    }
    n = arg0->count;
    if (n < 4) {
        arg0->count = n + 1;
        if (arg4 == 0) {
            arg1 = TLobby__sub_803BC774(arg1);
        } else {
            arg3 |= 0x10;
        }
        arg0->ents[(u8)n].code = arg1;
        arg0->ents[(u8)n].flags = arg3;
        arg0->ents[(u8)n].val = arg2;
    }
}

void TLobby__sub_803BBAA8(u8 arg0, u8 arg1, u8 arg2) {
    if (arg1 != 0xFF) {
        M2C_FIELD(((u8 *)(((u8 *)(lbl_80567958) + (arg1 * 0x10))) + arg0), s8 *, 0) = arg2;
        return;
    }
    M2C_FIELD(((u8 *)(lbl_805679D8) + arg0), s8 *, 0) = arg2;
}

u8 TLobby__sub_803BBAEC(u8 arg0, u8 arg1) {
    if (arg1 != 0xFF) {
        return M2C_FIELD(((u8 *)(((u8 *)(lbl_80567958) + (arg1 * 0x10))) + arg0), u8 *, 0);
    }
    return M2C_FIELD(((u8 *)(lbl_805679D8) + arg0), u8 *, 0);
}

u16 TLobby__sub_803BBFB8(Lob_803BBFB8 *arg0) {
    if (!(arg0->flags & 1)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~1;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x218, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC000(Lob_803BC000 *arg0) {
    if (!(arg0->flags & 2)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~2;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x23C, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC048(Lob_803BC048 *arg0) {
    if (!(arg0->flags & 4)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~4;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x260, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC090(Lob_803BC090 *arg0) {
    if (!(arg0->flags & 8)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~8;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x284, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC0D8(Lob_803BC0D8 *arg0) {
    if (!(arg0->flags & 0x10)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~0x10;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x2A8, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC120(Lob_803BC120 *arg0) {
    if (!(arg0->flags & 0x20)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~0x20;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x2CC, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC168(Lob_803BC168 *arg0) {
    if (!(arg0->flags & 0x40)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~0x40;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x2F0, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC1B0(Lob_803BC1B0 *arg0) {
    if (!(arg0->flags & 0x100)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~0x100;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x338, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC1F8(Lob_803BC1F8 *arg0) {
    if (!(arg0->flags & 0x200)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~0x200;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x35C, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC240(Lob_803BC240 *arg0) {
    if (!(arg0->flags & 0x400)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~0x400;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x380, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC288(Lob_803BC288 *arg0) {
    if (!(arg0->flags & 0x800)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~0x800;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x3A4, arg0->b121, arg0->b122);
}

u16 TLobby__sub_803BC2D0(Lob_803BC2D0 *arg0) {
    if (!(arg0->flags & 0x1000)) {
        return arg0->v;
    }
    arg0->flags = arg0->flags & ~0x1000;
    return calc_sound_controller_value(arg0, (u8 *)arg0 + 0x3C8, arg0->b121, arg0->b122);
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

u16 TLobby__sub_803BC7E4(Obj_803BC7E4 *arg0, u8 arg1) {
    switch (TLobby__sub_803BC774(arg1)) {
    case 0xA0:
        return arg0->v1c4 * 2 + 0x2000;
    case 0xA1:
        return arg0->v1d0 * 2 + 0x2000;
    default:
        return arg0->b121 != 0xFF ? TLobby__sub_803BB5E4(arg1, arg0->b121, arg0->b122) : 0;
    }
}

void TLobby__sub_803BC884(Obj_803BC884 *arg0, u8 arg1, s16 arg2) {
    s16 v = arg2 < 0 ? 0 : (arg2 > 0x3FFF ? 0x3FFF : arg2);
    s32 k;
    k = TLobby__sub_803BC774(arg1);
    if ((k >= 0xA2 || k < 0xA0) && arg0->b121 != 0xFF) {
        TLobby__sub_803BB3C8(arg1, arg0->b121, arg0->b122, v);
    }
}

u16 TLobby__sub_803BC91C(void) {
    lbl_805D4630 = lbl_805D4630 * 0xA8351D63;
    return lbl_805D4630 >> 6;
}

s16 TLobby__sub_803BC93C(s32 arg0) {
    s16 *tbl = lbl_804F7168;
    u32 t = arg0 & 0xFFF;
    if (t < 0x400U) {
        return tbl[t];
    }
    if (t < 0x800U) {
        return tbl[0x3FF - (t & 0x3FF)];
    }
    if (t < 0xC00U) {
        return -tbl[t & 0x3FF];
    }
    return -tbl[0x3FF - (t & 0x3FF)];
}

void shift_left_8__6TLobbyFPv(s32 *arg0) {
    *arg0 <<= 8;
}

void TLobby__sub_803BCA50(u32 *arg0, s32 arg1) {
    M2C_FIELD(arg0, u32 *, 0) = (u32) (((u32) (M2C_FIELD(arg0, u32 *, 0) << 0x10) / TLobby__sub_803A6F18((void *) (arg1))) * 0x3E8) >> 5U;
}

u32 shift_right_8__6TLobbyFUi(u32 arg0) {
    return arg0 >> 8U;
}

s32 TLobby__sub_803BCC0C(u32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    TLobby__sub_803BE6D4();
    lbl_805D74C7 = 0;
    lbl_805D74C6 = 0;
    lbl_805D7490 = 0;
    if (TLobby__sub_803BE43C((void *)TLobby__sub_803BCAA0, arg3, arg0) != 0 &&
        TLobby__sub_803B5500(arg1, arg2, (arg3 & 1) != 0) != 0 &&
        TLobby__sub_803BE554(arg3) != 0) {
        sound_enable_irq();
        TLobby__sub_803BE508();
        return 0;
    }
    return -1;
}

void set_global_flag__6TLobbyFc(s8 arg0) {
    lbl_805D74B8 = arg0;
}
u8 TLobby__sub_803BCCD8(void) {
    return (*(u8 *)&lbl_805D74B8);
}

bool is_sound_hw_voice_active(s32 i) {
    return (*(Slot_803BCCE0 * *)&lbl_805D748C)[i].fec != 0;
}

void set_global_7490__6TLobbyFi(s32 arg0) {
    lbl_805D7490 = arg0;
}

void set_sound_hw_voice_priority(s32 i, s32 v) {
    (*(Slot_803BCD08 * *)&lbl_805D748C)[i].f1c = v;
}

void start_sound_sample_voice(s32 n, s16 arg1, Blk_803BCD1C *arg2, u32 arg3, s32 arg4, s32 arg5, u32 arg6, u8 arg7) {
    u8 i;
    s32 flags = 0;
    for (i = 0; i <= (u8)lbl_805D74B8; i++) {
        flags |= SLOTS_803BCD1C[n].f24[i] & 0x20;
        SLOTS_803BCD1C[n].f24[i] = 0;
    }
    SLOTS_803BCD1C[n].f24[0] = flags;
    SLOTS_803BCD1C[n].f1c = arg4;
    SLOTS_803BCD1C[n].f18 = arg5;
    SLOTS_803BCD1C[n].ff0 = 0;
    SLOTS_803BCD1C[n].f70 = arg1;
    SLOTS_803BCD1C[n].f74 = *arg2;
    if (arg3 != 0) {
        SLOTS_803BCD1C[n].fa4 = 0;
        SLOTS_803BCD1C[n].fb8 = 0;
        SLOTS_803BCD1C[n].fbc = 0;
        SLOTS_803BCD1C[n].fc0 = 0x7FFF;
        SLOTS_803BCD1C[n].fc4 = 0;
    }
    SLOTS_803BCD1C[n].fe4 = 0xFF;
    SLOTS_803BCD1C[n].fe5 = 0xFF;
    SLOTS_803BCD1C[n].fe6 = 0xFF;
    SLOTS_803BCD1C[n].fe7 = 0xFF;
    if (arg6 != 0) {
        TLobby__sub_803BD214(n, 0);
        TLobby__sub_803BD240(n, 1);
    }
    TLobby__sub_803BD26C(n, arg7);
}

void TLobby__sub_803BCEC8(s32 i) {
    Slot_803BCEC8 *s = &(*(Slot_803BCEC8 **)&lbl_805D748C)[i];
    if (s->fec == 1 && (u8)lbl_805D74B8 == 0) {
        s->fee = 1;
    }
    (*(Slot_803BCEC8 **)&lbl_805D748C)[i].f24[(u8)lbl_805D74B8] |= 0x20;
}

void set_sound_hw_voice_envelope(s32 n, void *arg1, u8 mode) {
    u32 v;
    switch (mode) {
    case 0: {
        ArgA_803BCF18 *a = (ArgA_803BCF18 *)arg1;
        SLOTS_803BCF18[n].fa4 = 0;
        SLOTS_803BCF18[n].fb8 = a->f0;
        SLOTS_803BCF18[n].fbc = a->f2;
        if ((v = a->f4 << 3) > 0x7FFF) {
            v = 0x7FFF;
        }
        SLOTS_803BCF18[n].fc0 = v;
        SLOTS_803BCF18[n].fc4 = a->f6;
        break;
    }
    case 1:
    case 2: {
        ArgB_803BCF18 *b = (ArgB_803BCF18 *)arg1;
        SLOTS_803BCF18[n].fa4 = 1;
        SLOTS_803BCF18[n].fca = 0;
        if (mode == 1) {
            SLOTS_803BCF18[n].fb8 = TLobby__sub_803B3ED8(b->f0);
            SLOTS_803BCF18[n].fbc = TLobby__sub_803B3ED8(b->f4);
            if ((v = b->f8 >> 2) > 0x3FF) {
                v = 0x3FF;
            }
            SLOTS_803BCF18[n].fc0 = 0xC1 - lbl_804F68DC[v];
        } else {
            SLOTS_803BCF18[n].fb8 = (u16)b->f0;
            SLOTS_803BCF18[n].fbc = (u16)b->f4;
            SLOTS_803BCF18[n].fc0 = b->f8;
        }
        SLOTS_803BCF18[n].fc4 = b->fa;
        break;
    }
    }
    SLOTS_803BCF18[n].f24 |= 0x10;
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

void key_off_sound_hw_voice(s32 i) {
    (*(Slot_803BD174 * *)&lbl_805D748C)[i].f24[(u8)lbl_805D74B8] |= 0x40;
}

void TLobby__sub_803BD19C(s32 i, u16 v) {
    Slot_803BD19C *s = &(*(Slot_803BD19C **)&lbl_805D748C)[i];
    if (v >= 0x4000U) {
        v = 0x3FFF;
    }
    if (s->fe4 == 0xFF || s->f38[s->fe4] != (u32)((v * 0x10) & 0xFFFF0)) {
        s->f38[(u8)lbl_805D74B8] = (v * 0x10) & 0xFFFF0;
        s->f24[(u8)lbl_805D74B8 + 0] |= 8;
        s->fe4 = lbl_805D74B8;
    }
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

void TLobby__sub_803BD26C(s32 i, u8 mode) {
    if (mode == 0) {
        (*(Slot_803BD26C **)&lbl_805D748C)[i].ff0 |= 0x80000000;
        (*(Slot_803BD26C **)&lbl_805D748C)[i].fd0 = 0x10;
        (*(Slot_803BD26C **)&lbl_805D748C)[i].fd2 = 0x10;
        return;
    }
    (*(Slot_803BD26C **)&lbl_805D748C)[i].ff0 &= 0x7FFFFFFF;
}

void set_sound_voice_mix(s32 voice, u32 volumeCurve, u32 pan, s32 surroundPan, f32 direct, f32 auxiliaryA, f32 auxiliaryB) {
    SoundMixVoice *state = (*(SoundMixVoice **)&lbl_805D748C) + voice;
    SoundMixCurveOutput out[3];
    s32 left, right, surround;
    if (direct >= 1.0f) direct = 1.0f;
    if (auxiliaryA >= 1.0f) auxiliaryA = 1.0f;
    if (auxiliaryB >= 1.0f) auxiliaryB = 1.0f;
    apply_sound_mix_curve(volumeCurve, out, pan, surroundPan, (state->flags & 0x80000000) != 0,
        lbl_805663D8[state->studio].mode == 1, direct, auxiliaryA, auxiliaryB);
    left = 32767.0f * out[0].left;
    right = 32767.0f * out[0].right;
    surround = 32767.0f * out[0].surround;
    if (state->dirty[0] == 0xFF || state->coefficients[0].left != (u16)left || state->coefficients[0].right != (u16)right || state->coefficients[0].surround != (u16)surround) {
        state->coefficients[0].left = left;
        state->coefficients[0].right = right;
        state->coefficients[0].surround = surround;
        state->changed |= 1;
        state->dirty[0] = 0;
    }
    left = 32767.0f * out[1].left;
    right = 32767.0f * out[1].right;
    surround = 32767.0f * out[1].surround;
    if (state->dirty[1] == 0xFF || state->coefficients[1].left != (u16)left || state->coefficients[1].right != (u16)right || state->coefficients[1].surround != (u16)surround) {
        state->coefficients[1].left = left;
        state->coefficients[1].right = right;
        state->coefficients[1].surround = surround;
        state->changed |= 2;
        state->dirty[1] = 0;
    }
    left = 32767.0f * out[2].left;
    right = 32767.0f * out[2].right;
    surround = 32767.0f * out[2].surround;
    if (state->dirty[2] == 0xFF || state->coefficients[2].left != (u16)left || state->coefficients[2].right != (u16)right || state->coefficients[2].surround != (u16)surround) {
        state->coefficients[2].left = left;
        state->coefficients[2].right = right;
        state->coefficients[2].surround = surround;
        state->changed |= 4;
        state->dirty[2] = 0;
    }
    if (state->flags & 0x80000000) {
        u16 *t = &lbl_8047C420[(u8)(pan >> 16)];
        state->leftDelay = *t;
        state->rightDelay = 0x20 - *t;
        state->changed |= 0x200;
    }
}

void TLobby__sub_803BD598(s32 arg0) {
    TLobby__sub_803B89B4((void *) (lbl_805D748C + (arg0 * 0xF4)));
}

#pragma push
#pragma scheduling off
typedef char RecoveredGlobal_803BD5C4_lbl_805663D8_size[sizeof(RecoveredGlobal_803BD5C4_lbl_805663D8) == 0x6E0 ? 1 : -1];
void set_sound_aux_bus_callbacks(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *temp_r3;
    temp_r3 = (u8 *)&lbl_805663D8 + (arg0 * 0xBC);
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

#define SLOTS_803BD694 (*(Slot_803BD694 **)&lbl_805D748C)
u32 TLobby__sub_803BD694(s32 arg0) {
    u32 r;
    u32 rem;
    if (SLOTS_803BD694[arg0].fec != 2) {
        return 0;
    }
    switch (SLOTS_803BD694[arg0].f90) {
    case 0:
    case 1:
    case 4:
    case 5:
        r = ((SLOTS_803BD694[arg0].f20 - SLOTS_803BD694[arg0].f78 * 2) >> 4) * 14;
        rem = SLOTS_803BD694[arg0].f20 & 0xF;
        if (rem >= 2) {
            r = r + (rem - 2);
        }
        break;
    case 3:
        r = SLOTS_803BD694[arg0].f20 - SLOTS_803BD694[arg0].f78;
        break;
    case 2:
        r = SLOTS_803BD694[arg0].f20 - (SLOTS_803BD694[arg0].f78 >> 1);
        break;
    }
    return r;
}

void TLobby__sub_803BD738(u8 *base, u32 offset, u32 len, u8 i, void *cb, void *arg) {
    u32 sp20[2];
    u32 addr;
    u8 *p;
    addr = TLobby__sub_803BE1EC(i, sp20);
    len += offset & 0x1F;
    offset &= ~0x1F;
    len = (len + 0x1F) & ~0x1F;
    p = base + offset;
    DCStoreRange(p, len);
    TLobby__sub_803BDAE4((u8 *)(p), (u32)(addr + offset), (u32)(len), (s32)(1), (void *)(cb), (void *)(arg));
}

void *TLobby__sub_803BD7C0(u32 size) {
    return TLobby__sub_803BE0E0((u32)(size));
}

void TLobby__sub_803BD7E0(u8 i) {
    TLobby__sub_803BE224(i);
}

u32 TLobby__sub_803BD800(u8 i) {
    return TLobby__sub_803BE1EC(i, (u32 *)(0));
}

void TLobby__sub_803BD824(void) {
}

u32 TLobby__sub_803BD828(u32 arg0) {
    return (u32)(lbl_805E0C48 * (f32)arg0 / (f32)lbl_80557348[0]);
}

void TLobby__sub_803BD884(void *self, void *p) {
    TLobby__sub_803BDCD0(p);
}

void TLobby__sub_803BD8A8(Hdr_803BD8A8 **arg0, u32 *arg1) {
    u32 info = (*arg0)->info;
    u32 n = info & 0xFFFFFF;
    u32 fmt;
    u32 r;
    fmt = info >> 24;
    switch (fmt) {
    case 0:
    case 1:
    case 4:
    case 5:
        n = (n + 13) / 14 * 8;
        break;
    case 2:
        n *= 2;
        break;
    case 3:
        break;
    }
    r = TLobby__sub_803BDF10((u8 *)((u8 *)*arg1), (u32)(n));
    *arg1 = r;
}

void TLobby__sub_803BD93C(Hdr_803BD93C *arg0, u32 arg1) {
    u32 info = arg0->info;
    u32 n = info & 0xFFFFFF;
    switch (info >> 24) {
    case 0:
    case 1:
    case 4:
    case 5:
        n = (n + 13) / 14 * 8;
        break;
    case 2:
        n *= 2;
        break;
    case 3:
        break;
    }
    TLobby__sub_803BE000(arg1, n);
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

void TLobby__sub_803BDAE4(u8 *src, u32 dst, u32 len, s32 dir, void *cb, void *arg) {
    Q_803BDAE4 *q;
    s32 lvl;
    q = (u32)dir != 0 ? (Q_803BDAE4 *)&lbl_8056E3DC : (Q_803BDAE4 *)&lbl_8056E158;
    while (1) {
        lvl = OSDisableInterrupts();
        if (q->count < 16) {
            q->reqs[q->wp].owner = 0x2A;
            q->reqs[q->wp].type = 0;
            q->reqs[q->wp].prio = (u32)dir != 0 ? 1 : 0;
            q->reqs[q->wp].src = src;
            q->reqs[q->wp].dst = dst;
            q->reqs[q->wp].len = len;
            q->reqs[q->wp].cb = (void *)TLobby__sub_803BDA4C;
            q->reqs[q->wp].f20 = cb;
            q->reqs[q->wp].f24 = arg;
            ARQPostRequest(&q->reqs[q->wp], q->reqs[q->wp].owner, q->reqs[q->wp].type, q->reqs[q->wp].prio,
                           q->reqs[q->wp].src, q->reqs[q->wp].dst, q->reqs[q->wp].len, q->reqs[q->wp].cb);
            q->count++;
            q->wp = (q->wp + 1) % 16;
            OSRestoreInterrupts(lvl);
            return;
        }
        OSRestoreInterrupts(lvl);
    }
}

void TLobby__sub_803BDCB8(void) {
    while (lbl_8056E158.busy != 0) {
    }
}

u32 TLobby__sub_803BDEF0(void) {
    return ARGetBaseAddress();
}

s32 TLobby__sub_803BDF10(u8 *src, u32 size) {
    u32 chunk;
    s32 start;
    u8 *buf;
    u32 len;
    len = (size + 0x1F) & ~0x1F;
    start = lbl_805D74CC;
    if (lbl_805D74D4 == 0) {
        DCFlushRange(src, len);
        TLobby__sub_803BDAE4((u8 *)(src), (u32)(lbl_805D74CC), (u32)(len), (s32)(0), (void *)(0), (void *)(0));
        lbl_805D74CC += len;
        return start;
    } else {
        while (len != 0) {
            chunk = len >= lbl_805D74D8 ? lbl_805D74D8 : len;
            buf = lbl_805D74D4(src, chunk);
            DCFlushRange(buf, chunk);
            TLobby__sub_803BDAE4((u8 *)(buf), (u32)(lbl_805D74CC), (u32)(chunk), (s32)(0), (void *)(0), (void *)(0));
            len -= chunk;
            src += chunk;
            lbl_805D74CC += chunk;
        }
    }
    return start;
}

void TLobby__sub_803BE000(s32 arg0, s32 arg1) {
    lbl_805D74CC -= (arg1 + 0x1F) & 0xFFFFFFE0;
}
void TLobby__sub_803BE0DC(void) {
}

void *TLobby__sub_803BE0E0(u32 arg0) {
    Rec_803BE1EC *p;
    Rec_803BE1EC *found;
    Rec_803BE1EC *prev;
    u32 best;
    u32 size;
    p = lbl_805D74E0;
    size = (arg0 + 0x1F) & ~0x1F;
    found = NULL;
    prev = NULL;
    best = -1;
    while (p != NULL) {
        if (p->fc == size) {
            found = p;
            break;
        }
        if (p->fc > size && best > p->fc) {
            found = p;
            best = p->fc;
        }
        prev = p;
        p = (Rec_803BE1EC *)p->f0;
    }
    if (found == NULL) {
        p = lbl_805D74E4;
        if (p != NULL && (u32)(lbl_805D74D0 - size) >= (u32)lbl_805D74CC) {
            found = p;
            lbl_805D74E4 = (Rec_803BE1EC *)p->f0;
            p->fc = size;
            p->f8 = size;
            lbl_805D74D0 -= size;
            p->f4 = lbl_805D74D0;
            p->f0 = (u32)lbl_805D74DC;
            lbl_805D74DC = p;
        }
    } else {
        if (prev != NULL) {
            prev->f0 = found->f0;
        } else {
            lbl_805D74E0 = (Rec_803BE1EC *)found->f0;
        }
        found->f8 = size;
        found->f0 = (u32)lbl_805D74DC;
        lbl_805D74DC = found;
    }
    if (found == NULL) {
        return (void *)0xFF;
    }
    return (void *)(u8)(found - lbl_8056E660);
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

void TLobby__sub_803BE614(s32 arg0) {
    s32 temp_r31;
    update_sound_dsp_voices((void *) (arg0), (int) (TLobby__sub_803BE688()));
    temp_r31 = lbl_805D7478;
    lbl_805D74F0 = 0;
    PPCSync();
    DSPSendMailToDSP((void *) (lbl_805D7474 | 0xBABE0000));
    do {
    } while (DSPCheckMailToDSP() != 0U);
    DSPSendMailToDSP((void *) (temp_r31));
    do {
    } while (DSPCheckMailToDSP() != 0U);
}

u32 TLobby__sub_803BE688(void) {
    return (u32)((OSGetTick() - lbl_805D74FC) * 8) / (*(u32 *)0x800000F8 / 4 / 125000);
}

#pragma push
#pragma scheduling off
void TLobby__sub_803BE6D4(void) {
    lbl_805D7508 = OSDisableInterrupts();
    lbl_805D7504 = 1;
}
#pragma pop

void sound_enable_irq(void) {
    if (--lbl_805D7504 == 0) {
        OSRestoreInterrupts(lbl_805D7508);
    }
}

void sound_disable_irq(void) {
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

f32* TLobby__sub_803BE7B0(s32 bytes) {
    return ((f32* (*)(s32))lbl_805D74BC)(bytes);
}

void TLobby__sub_803BE7D8(s32 arg0) {
    (*(Cb_803BE7D8 *)&lbl_805D74BC).fn(arg0);
}

void reverb_aux_callback(u8 arg0, u8 *arg1, u8 *arg2) {
    switch ((s32) arg0) {
    case 0:
        if ((u8) M2C_FIELD(arg2, u8 *, 0x1C4) == 0) {
            process_sound_reverb_callback((void *)((int) (M2C_FIELD(arg1, s32 *, 0))), (void *)((int) (M2C_FIELD(arg1, s32 *, 4))), (void *)((int) (M2C_FIELD(arg1, s32 *, 8))), (S_803BF408 *)((void *) (arg2)));
        }
    case 1:
        return;
    }
}

void init_sound_reverb(Obj_803BE860 *self) {
    self->flag = 0;
    create_sound_reverb_state((SoundReverb*)self, self->a, self->c, self->b, self->d, self->e, self->f);
}
extern "C" {
f32 powf(f32, f32);
}
#pragma push
#pragma dont_inline off
static void DLsetdelay(SoundReverbDelay * dl, s32 lag) {
    dl->readOffset = dl->writeOffset - (lag * 4);
    while (dl->readOffset < 0) {
        dl->readOffset += dl->byteLength;
    }
}

static void DLcreate(SoundReverbDelay * dl, s32 max_byteLength) {
    dl->byteLength = (max_byteLength * 4);
    dl->samples = TLobby__sub_803BE7B0( max_byteLength << 2);
    memset(dl->samples, 0, max_byteLength << 2);
    dl->last = 0.0f;
    DLsetdelay(dl, max_byteLength >> 1);
    dl->writeOffset = 0;
    dl->readOffset = 0;
}

s32 create_sound_reverb_state(SoundReverb * rv, float coloration, float time, float mix, float damping, float preDelay, float crossTalk) {
    u8 i;
    u8 k;
    extern s32 lbl_804F9360[];

    if ((coloration < 0.0f ) || (coloration > 1.0f )
     || (time       < 0.01f) || (time       > 10.0f)
     || (mix        < 0.0f ) || (mix        > 1.0f )
     || (crossTalk  < 0.0f ) || (crossTalk  > 1.0f )
     || (damping    < 0.0f ) || (damping    > 1.0f )
     || (preDelay   < 0.0f ) || (preDelay   > 0.1f )) {
        return 0;
    }
    memset(rv, 0, 0x1C4);
    for(k = 0; k < 3; k++) {
        for(i = 0; i < 3; i++) {
            DLcreate(&rv->comb[i + (k * 3)], lbl_804F9360[i] + 2);
            DLsetdelay(&rv->comb[i + (k * 3)], lbl_804F9360[i]);
            rv->feedback[i + (k * 3)] = powf(10.0f, (lbl_804F9360[i] * -3) / (32000.0f * time));
        }
        for(i = 0; i < 2; i++) {
            DLcreate(&rv->allPass[i + (k * 3)], lbl_804F9360[i + 3] + 2);
            DLsetdelay(&rv->allPass[i + (k * 3)], lbl_804F9360[i + 3]);
        }
        DLcreate(&rv->allPass[2 + (k * 3)], lbl_804F9360[k + 5] + 2);
        DLsetdelay(&rv->allPass[2 + (k * 3)], lbl_804F9360[k + 5]);
        rv->lowPassLast[k] = 0.0f;
    }
    rv->coloration = coloration;
    rv->mix = mix;
    rv->crossTalk = crossTalk;
    rv->damping = damping;
    if (rv->damping < 0.05f) {
        rv->damping = 0.05f;
    }
    rv->damping = (1.0f - (0.05f + (0.8f * rv->damping)));
    if (0.0f != preDelay) {
        rv->preDelayFrames = (32000.0f * preDelay);
        for(i = 0; i < 3; i++) {
            rv->preDelay[i] = TLobby__sub_803BE7B0( rv->preDelayFrames * 4);
            memset(rv->preDelay[i], 0, rv->preDelayFrames * 4);
            rv->preDelayCurrent[i] = rv->preDelay[i];
        }
    } else {
        rv->preDelayFrames = 0;
        for(i = 0; i < 3; i++) {
            rv->preDelayCurrent[i] = 0;
            rv->preDelay[i] = 0;
        }
    }
    return 1;
}

#pragma pop
#pragma push
#pragma peephole off
void process_sound_reverb_callback(void *arg0, void *arg1, void *arg2, S_803BF408 *arg3) {
    u8 i;
    for (i = 0; i < 3; i++) {
        switch (i) {
        case 0:
            if (0.0f != arg3->f1A8) {
                f32 t = 0.5f * arg3->f1A8;
                TLobby__sub_803BED6C(arg0, arg1, t, 1.0f - t);
            }
            process_sound_reverb_block(arg0, arg3, 0);
            break;
        case 1:
            process_sound_reverb_block(arg1, arg3, 1);
            break;
        case 2:
            process_sound_reverb_block(arg2, arg3, 2);
            break;
        }
    }
}
#pragma pop

#pragma push
#pragma peephole off
void TLobby__sub_803BF884(u8 reason, Info_803BF884 *info, Work_803BF884 *c) {
    s32 *leftD;
    s32 *rightD;
    s32 *surD;
    s32 *leftS;
    s32 *rightS;
    s32 *surS;
    u32 i;
    u8 nextCurrentLast;
    switch (reason) {
    case 0:
        nextCurrentLast = (c->currentLast + 1) % 3;
        leftD = c->lastLeft[nextCurrentLast];
        rightD = c->lastRight[nextCurrentLast];
        surD = c->lastSur[nextCurrentLast];
        leftS = info->left;
        rightS = info->right;
        surS = info->surround;
        for (i = 0; i < 160; i++) {
            *leftD++ = *leftS++;
            *rightD++ = *rightS++;
            *surD++ = *surS++;
        }
        c->src.pitchHi = (c->pitchOffset >> 16) + 1;
        c->src.pitchLo = (c->pitchOffset & 0xFFFF) << 16;
        if (--c->pitchOffsetPeriodCount == 0) {
            c->pitchOffsetPeriodCount = c->pitchOffsetPeriod;
            c->pitchOffset = -c->pitchOffset;
        }
        for (i = 0; i < 3; i++) {
            c->src.posHi = c->currentPosHi;
            c->src.posLo = c->currentPosLo;
            switch (i) {
            case 0:
                c->src.smpBase = c->lastLeft[0];
                c->src.dest = info->left;
                c->src.old = c->oldLeft;
                break;
            case 1:
                c->src.smpBase = c->lastRight[0];
                c->src.dest = info->right;
                c->src.old = c->oldRight;
                break;
            case 2:
                c->src.smpBase = c->lastSur[0];
                c->src.dest = info->surround;
                c->src.old = c->oldSur;
                break;
            }
            switch (c->src.pitchHi) {
            case 0:
                TLobby__sub_803BF500(&c->src);
                break;
            case 1:
                TLobby__sub_803BF698(&c->src);
                break;
            }
        }
        c->currentPosHi = c->src.posHi % 480;
        c->currentPosLo = c->src.posLo;
        c->currentLast = nextCurrentLast;
        break;
    case 1:
        break;
    }
}
#pragma pop

}
