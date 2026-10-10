#include "types.h"
#include "pso/player/TObjPlayer.h"
#include <stddef.h>
#include "pso/player/PlayerRequirementStats.h"
#include "pso/item/TItemData.h"
#include "pso/misc/CharacterAppearance.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define M0(x) virtual void m##x();
struct Base_801AF2F0 { char pad[0x18]; };

struct VObj_801AF2F0 : Base_801AF2F0 {
    M0(0) M0(1) M0(2) M0(3) M0(4) M0(5) M0(6) M0(7) M0(8) M0(9)
    M0(10) M0(11) M0(12) M0(13)
    virtual s32 m14();
};

typedef s32 M2C_UNK;
struct Base_801B9954 {
    s16 field[18];
};

struct Attack_801B9954 {
    s16 minimum;
    s16 maximum;
    s16 accuracy;
    u8 rest[42];
};

struct Defense_801B9954 {
    s16 evasion;
    s16 resistance[5];
    u8 rest[16];
    s32 defense;
};

struct ItemBase_801B9954 { char pad[0x18]; };

struct Item_801B9954 : ItemBase_801B9954 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void subtract_applied(Attack_801B9954 *, Defense_801B9954 *, Base_801B9954 *);
};

struct InventoryCreatePacket_801B849C {
    u8 command;
    u8 size;
    u16 actor;
    TItemData item;
    u32 flags;
};

extern "C" {
void add_to_field_2ce__10TObjPlayerFPvi(void *, int);
s16 get_atp__10TObjPlayerFPv(void *);
void add_to_field_2ca__10TObjPlayerFPvi(void *, int);
s16 get_field_2c2__10TObjPlayerFPv(void *);
void add_to_field_2c8__10TObjPlayerFPvi(void *, int);
s16 get_field_2c0__10TObjPlayerFPv(void *);
void TObjPlayer__sub_800192B4(void *, int);
s16 get_s16_2c4__10TObjPlayerFPv(void *);
void reset_status_effect_row(void *);
f32 TObjPlayer__sub_800192C4(void *, int);
s32 TObjPlayer__sub_801BE2D0(void *);
extern const f64 lbl_80446F38;
extern const f64 lbl_80446F40;
s32 calc_stat_threshold__10TObjPlayerFPv(void *arg0);
f32 TObjPlayer__sub_800192C4(void *, int);
s16 get_id__10TObjPlayerFPv(void *);
s16 get_level__10TObjPlayerFPv(void *);
u8 get_field_ed__10TObjPlayerFPv(void *);
void copy_entry__6TLobbyFPvPv(void *, void *);
void copy_from__6TLobbyFPvPv(void *, void *);
void copy_data__6TLobbyFPvPv(void *, s32);
u8 get_field_ec__12TOSwitchItemFPv(void *);
u8 * activate_d04_slot__10TObjPlayerFPv(void *);
void * test_flag3__9TItemDataFPv(void *);
Item_801B9954 *get_item_field_2__9TItemDataFPv(void *);
void apply_equip_effects__9TItemDataFPviiiii(void *, void *, void *, void *, void *, int);
s16 clamp_s32__10TObjPlayerFiii(int, int, int);
M2C_UNK set_params__10TObjPlayerFPvPvPviPv(void *, void *, void *, int, int);
u8 * get_slot_value__10TObjPlayerFPvi(void *, s32);
s32 get_class_stat_entry__10TObjPlayerFPv(void *);
s32 preview_equip_stats__10TObjPlayerFv(u8 *arg0, s16 *out, u8 *incoming);
u8 is_volopt_phase_final__10TObjPlayerFv(void);
s32 advance_item_id_counter(int);
s32 obj_isState2_324();
s32 obj_getField1c(void * a0);
M2C_UNK init_pkt_6x2B__10TObjPlayerFPv(void *);
void copy_item_data__6TLobbyFPvPv(TItemData*, const TItemData*);
void normalize__9TItemDataFv(TItemData*);
void send_cmd_item_data__10TObjPlayerFPv(void*);
extern u32 local_client_id;
}

extern "C" {

struct Base_801AF3C4 { char pad[0x8]; };

struct VObj_801AF3C4 : Base_801AF3C4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual s32 m75(s32);
};

struct B_801AF454 { u8 pad[8]; };

struct V_801AF454 : B_801AF454 {
    virtual void m0(); virtual void m1(); virtual void m2();
    virtual void m3(u16 x);
};

struct O_801AF454 { u8 pad[0x380]; V_801AF454 *obj; };

struct Rec_801CD078 { u8 pad[0x10]; s16 cost; };

struct Player_801CD078 { u8 pad[0x32E]; s16 tp; u8 pad330[0x428 - 0x330]; u8 techs[4]; };

struct Node_801CD424 { u8 pad[0x1C]; f32 pos[3]; u8 pad28[0x2C - 0x28]; };

struct Obj_801CD424 { u8 pad[0xA4]; Node_801CD424 *nodes; };

struct TechData_801CD424 { u16 target; s16 node; };

struct Player_801CD424 {
    u8 pad[0x60];
    s32 f60;
    u8 pad64[0xBA - 0x64];
    s16 fba;
    u8 padbc[0x326 - 0xBC];
    s16 f326;
    s16 f328;
    u8 pad32a[0x33C - 0x32A];
    s32 f33c;
    u8 pad340[0x3F0 - 0x340];
    s32 f3f0;
    u8 pad3f4[0x428 - 0x3F4];
    u8 techs[0x744 - 0x428];
    u8 f744[4];
};

struct Sub_801CD188 { u8 pad[0x508]; u16 f508; };

struct Player_801CD188 { u8 pad[0xB0]; u32 flags; u8 padb4[0x424 - 0xB4]; Sub_801CD188 *sub; };

typedef struct Msg1_801CD72C {
    u8 pad0[2];
    u16 id;
    u8 level;
    u8 pad5[3];
} Msg1_801CD72C;

typedef struct Msg2_801CD72C {
    u8 pad0[2];
    s16 id;
    u8 tech;
    u8 pad5;
    u8 lv;
    u8 count;
    u32 data[13];
} Msg2_801CD72C;

typedef struct Player_801CD72C {
    u8 pad0[0x424];
    void *cursor;
    u8 techs[4];
} Player_801CD72C;

typedef struct Msg_801CD6BC {
    u8 pad0[2];
    u16 id;
    u8 level;
    u8 pad5[3];
} Msg_801CD6BC;

struct L_801AF554 { u8 f0[2]; s16 f2; s8 f4; };

struct B_801AF734 { u8 pad[0x18]; };

struct V_801AF734 : B_801AF734 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void *m14();
};

struct Base_801AF7E0 { u8 pad[0x18]; };

struct TObjPlayer_801AF7E0 : Base_801AF7E0 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual s32 v14();
    u8 pad1[0x7C4 - 0x1C];
    u8 slot[4];
};

struct VBase_801AFCF4 { u8 pad[8]; };

struct VObj_801AFCF4 : VBase_801AFCF4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32, s32);
};

struct Player_801AFCF4 {
    u8 pad[0x380];
    VObj_801AFCF4 *obj;
};

struct Pkt_801B01AC {
    u8 hdr[2];
    u16 client;
    u16 target;
    s16 amount;
};

typedef struct Pkt_801B0300
{
  u16 hdr;
  u16 a;
  u16 b;
  s16 c;
} Pkt_801B0300;

typedef struct Pkt_801B0300 Pkt_801B0300;

struct Base_801B0520 { char pad[0x18]; };

struct VObj_801B0520 : Base_801B0520 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual s32 m10();
};

struct Cmd_801B0690 { u16 hdr; u16 client; s32 team; };

struct pkt_801B1674 {
    u8 hdr[2];
    u16 player_id;
};

struct VBase_801B09A4 { char pad[0x18]; };

struct VObj_801B09A4 : VBase_801B09A4 {
    virtual void m0(s32);
};

struct Rec_801B09A4 { u8 bytes[0x42C]; };

struct Pl_801B0B88 {
    u8 pad0[0x424];
    s32 f424;
    u8 f428[0x754 - 0x428];
    u8 f754[0x7c4 - 0x754];
    u8 f7C4[4];
    u8 f7C8[0xd00 - 0x7c8];
    s32 fD00;
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual M2C_UNK m40();
};

struct Stack_801B15A4 {
    s8 sp8;
    s8 sp9;
    s8 spA;
    u8 rest[17];
};

struct Vec_801B1FA4 { f32 x, y, z; };

struct pkt_801B1FA4 {
    u8 hdr[2];
    u16 slot;
    s32 heading;
    struct Vec_801B1FA4 pos;
};

typedef struct Ctx_801B1BA4 { s16 f0; s16 f2; } Ctx_801B1BA4;

typedef struct Ctx_801B1C8C { s16 f0; s16 f2; } Ctx_801B1C8C;

typedef struct Msg_801B1E54 {
    u8 pad0[2];
    u16 a;
    s32 b;
    s16 c;
    u16 d;
} Msg_801B1E54;

struct Eff_801B2C04 { u16 f0; u16 f2; u32 f4; u32 f8; };

struct Pair_801B2C04 { u32 a; u32 b; };

struct Pkt_801B1D8C {
    u8 hdr[4];
    s32 type;
    s16 amount;
    u16 client;
};

struct Pkt_801B1EE0 {
    u8 hdr[2];
    u16 slot;
    s32 heading;
    f32 pos[3];
};

struct Pair_801B2AE8 { u32 a; u32 b; };

struct VBase_801B2AE8 { char pad[0x18]; };

struct VObj_801B2AE8 : VBase_801B2AE8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46(s32);
    virtual void m47();
    virtual void m48();
    virtual void m49(Pair_801B2AE8);
    virtual void m50(Pair_801B2AE8);
};

struct Pair_801B2AE8;

struct Item_801B2014 { s32 id; f32 val; };

struct Item_801B21AC { s32 id; f32 val; };

struct VBase_801B21AC { char pad[0x18]; };

struct VObj_801B21AC : VBase_801B21AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76(Item_801B21AC);
};

struct Player_801B21AC {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x3CC - 0x34];
    u32 prev;
};

struct VBase_18_eecf68 { char pad[0x18]; };

struct VObj_18_eecf68 : VBase_18_eecf68 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14();
};

struct Eff_801B2D88 { u16 f0; u16 f2; u32 f4; u32 f8; };

struct Pair_801B2D88 { u32 a; u32 b; };

struct VBase_801B2CE4 { char pad[0x18]; };

struct VObj_801B2CE4 : VBase_801B2CE4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
};

struct Eff_801B2CE4 { u16 f0; u16 f2; u32 f4; u32 f8; };

struct ReturnLobby { u8 bytes[0x28]; };

struct VBase_801B3274 { char pad[0x18]; };

struct VObj_801B3274 : VBase_801B3274 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62();
};

struct VBase_801B3DD4 { char pad[0x18]; };

struct VObj_801B3DD4 : VBase_801B3DD4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11(s32);
};

struct Player_801B3DD4 {
    u8 pad0[0x60];
    s32 f60;
};

struct Base_801B4340_801B3FD8 { char pad[0x18]; };

struct VObj_801B4340_801B3FD8 : Base_801B4340_801B3FD8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
};

struct S801B4430_801b4430_801B3FD8 { s8 b[2]; s16 h; };

struct S801B44EC_801b44ec_801B3FD8 { s8 b[2]; s16 h; };

struct Base_801B4540_801B3FD8 { char pad[0x18]; };

struct VObj_801B4540_801B3FD8 : Base_801B4540_801B3FD8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53();
};

struct S801B4630_801B3FD8 { s8 b[2]; s16 h; };

struct Cursor_801B4A18 { u8 pad[0x124]; };

struct Menu_801B4A18 { u8 pad[0x5c]; Cursor_801B4A18 cursors[4]; };

struct Owner_801B4A18 { u8 pad[0x424]; Menu_801B4A18 *menu; };

struct Slot_801B4AC8 { u8 pad[0x124]; };

struct Cursor_801B4AC8 { u8 pad[0x5C]; Slot_801B4AC8 slots[4]; u8 pad4ec[0x510 - 0x4EC]; u8 f510; };

struct Player_801B4AC8 { u8 pad[0x424]; Cursor_801B4AC8 *cursor; };

struct pkt_801B5164 {
    u8 hdr[2];
    u16 player_id;
};

struct Vec_801B5328 { f32 x, y, z; };

struct Pkt_801B5328 {
    u8 hdr[2];
    s16 actor_id;
    s16 a;
    s16 b;
    f32 x;
    f32 z;
    f32 radius_sq;
};

struct Obj_801B4FD8 {
    u16 f0;
    s16 f2;
    s32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s16 f20;
    s16 f22;
    s16 f24;
    s16 f26;
    u8 f28[0x64 - 0x28];
    s32 f64;
    u8 f68[8];
    u8 f70[8];
    u8 f78[0x94 - 0x78];
    u8 f94[4];
    u8 f98[0xAC - 0x98];
    s32 fAC;
    s32 fB0;
    s8 fB4[0x13];
    u8 padC7[0x13C - 0xC7];
    u8 f13C[0x488 - 0x13C];
    s32 f488;
};

struct Pkt_801B5254 {
    u8 hdr[2];
    u16 client;
    s16 f4;
    s16 f6;
    f32 f8;
    f32 fC;
    f32 f10;
};

struct VBase_801B4CE4 { u8 pad[0x18]; };

struct Equip_801B4CE4 : VBase_801B4CE4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void restore(s32);
    virtual void store(s32);
};

struct Rec12_801B4CE4 { u8 b[0xC]; };

struct Rec1C_801B4CE4 { u8 b[0x1C]; };

struct Src_801B4CE4 {
    u8 pad0[0x2E];
    s16 f2E;
    u32 f30;
    u8 pad34[0x38 - 0x34];
    u8 pos38[0x5C - 0x38];
    u8 f5C[0x254 - 0x5C];
    Rec12_801B4CE4 f254[5];
    u8 pad290[0x2B0 - 0x290];
    s32 f2B0;
    u8 pad2B4[0x326 - 0x2B4];
    s16 f326;
    u8 pad328[0x32C - 0x328];
    s16 f32C;
    u8 pad32E[0x334 - 0x32E];
    s32 f334;
    u8 pad338[0x41C - 0x338];
    u8 f41C[0x428 - 0x41C];
    u8 f428[0x730 - 0x428];
    u8 f730[0x828 - 0x730];
    u8 f828[0x830 - 0x828];
    u8 f830[0x858 - 0x830];
    u8 f858[0x85C - 0x858];
    u8 f85C[0xD00 - 0x85C];
    s32 fD00;
    u8 padD04[0xDAC - 0xD04];
    u8 fDAC[4];
};

struct Dst_801B4CE4 {
    s16 f0;
    s16 f2;
    u32 f4;
    u8 f8[0x14 - 0x8];
    u8 f14[0x20 - 0x14];
    s16 f20;
    s16 f22;
    s16 f24;
    s16 f26;
    Rec12_801B4CE4 f28[5];
    s32 f64;
    u8 f68[8];
    u8 f70[8];
    u8 f78[0x94 - 0x78];
    u8 f94[4];
    u8 f98[0xAC - 0x98];
    s32 fAC;
    s32 fB0;
    u8 fB4[0x13];
    u8 padC7[0xC8 - 0xC7];
    u8 fC8[0x118 - 0xC8];
    u8 f118[0x13C - 0x118];
    s32 f13C;
    u8 f140[2];
    Rec1C_801B4CE4 f142[0x13];
    u8 pad[0x488 - 0x142 - 0x13 * 0x1C];
    s32 f488;
};

struct S801B5200_801B3FD8 { s8 b[2]; s16 h; };

struct Stack_801B6024 {
    M2C_UNK sp8;
    f32 spC;
    M2C_UNK sp10;
};

typedef struct Msg_801B6110 {
    u8 pad0[2];
    u16 slot;
    s32 andMask;
    s32 orMask;
} Msg_801B6110;

typedef struct Player_801B6110 {
    u8 pad0[0x30];
    s32 flags;
} Player_801B6110;

typedef struct Vec_801B5DDC { f32 x, y, z; } Vec_801B5DDC;

struct Hit_801B5DDC {
    u8 pad0[0x18];
    u32 flags;
    Vec_801B5DDC pos;
    u8 pad28[0x38 - 0x28];
};

struct Obj_801B5DDC {
    u8 pad0[0x38];
    Vec_801B5DDC pos;
    u8 pad44[0x308 - 0x44];
    Vec_801B5DDC f308;
};

struct Vec_801B5EA4 { f32 x, y, z; };

struct Pad_801B5EA4 { u8 pad[0x18]; };

struct Obj_801B5EA4 : Pad_801B5EA4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual u32 v16(Vec_801B5EA4 *);
    u8 pad1c[0x38 - 0x1C];
    Vec_801B5EA4 pos;
    u8 pad44[0x308 - 0x44];
    Vec_801B5EA4 vel;
};

struct P_801B5FB0 { u8 pad[0x308]; f32 a; f32 pad30c; f32 b; };

struct Pkt_801B6A5C {
    u8 pad0[2];
    u16 id;
    s16 st[6];
    s16 exp;
    s16 kind;
};

struct Stats_801B6A5C { s16 st[6]; u8 pad[0xc]; s32 exp; };

struct Plr_801B6A5C {
    u8 pad0[0x2b0];
    Stats_801B6A5C *stats;
    u8 pad2b4[4];
    s16 a;
    s16 b;
    u8 pad2bc[0x70];
    s16 a2;
    s16 b2;
};

typedef struct Vec_801B6964 { f32 x, y, z; } Vec_801B6964;

struct Color_801B6964 { f32 r, g, b, a; };

struct Base_801B6414_801B3FD8 { char pad[0x18]; };

struct VObj_801B6414_801B3FD8 : Base_801B6414_801B3FD8 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(s32);
    virtual void m13();
    virtual s32 m14();
};

struct VObj_18_p57 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual M2C_UNK m63(s32, s32);
};

struct VBase_18_c0d9f3
{
  char pad[0x18];
};

struct VObj_18_c0d9f3 : VBase_18_c0d9f3 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual s32 m17(M2C_UNK);
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual M2C_UNK m33();
    virtual M2C_UNK m34();
    virtual M2C_UNK m35();
    virtual M2C_UNK m36();
    virtual M2C_UNK m37();
    virtual M2C_UNK m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
    virtual M2C_UNK m41();
};

typedef struct Msg_801B6C30 {
    u8 pad0[2];
    s16 f2;
    s16 f4[6];
    s16 f10;
    s16 f12;
} Msg_801B6C30;

typedef struct Src_801B6C30 {
    s16 v[6];
} Src_801B6C30;

typedef struct Player_801B6C30 {
    u8 pad0[0x2B0];
    Src_801B6C30 *src;
} Player_801B6C30;

struct Stats_801B6CE0 {
    u8 pad0[0x18];
    s32 level;
    s32 exp;
};

struct Obj_801B6CE0 {
    u8 pad0[0x2B0];
    Stats_801B6CE0 *stats;
};

struct Buf1C { u8 pad[0x1C]; };

struct VBase { u8 pad[0x18]; };

struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(M2C_UNK); virtual void m21(M2C_UNK);
};

typedef struct VBase_18_c0d9f3 VBase_18_c0d9f3;

typedef struct VObj_18_c0d9f3 VObj_18_c0d9f3;

struct Player_801B6C30;

struct Obj_801B6CE0;

struct Base_801B7AC8_801B3FD8 { char pad[0x18]; };

struct VObj_801B7AC8_801B3FD8 : Base_801B7AC8_801B3FD8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16(s32);
};

struct Stack_801B7998 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct P_801B7B58 { u8 pad[0xD00]; void *fD00; };

struct ItemData_801B7C78 {
    s8 kind;
    s8 group;
    u8 rest[0x16];
};

struct ItemData_801B7CEC {
    s8 kind;
    s8 group;
    s8 sub;
    u8 rest[0x15];
};

struct L_801B7E14 { u8 f0[2]; s16 f2; s32 f4; s32 f8; };

typedef struct Cmd_801B7D68 {
    u8 cmd;
    u8 size;
    u16 client;
    u32 item_a;
    u32 item_b;
} Cmd_801B7D68;

struct VBase_801B7EB8 { char pad[0x18]; };

struct VObj_801B7EB8 : VBase_801B7EB8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
};

struct Pkt_801B7EB8 {
    u8 hdr[2];
    u16 client;
    s32 item;
};

struct Ent_801B80C0;

struct Buf_801B802C {
    s32 n;
    u8 ents[0x34C];
};

struct Ent_801B80C0 { u8 pad[0x14]; s32 f14; u8 pad18[0x1C - 0x18]; };

struct S801B7F4C { s8 b[2]; s16 h; s32 w; };

struct VBase_18_e9153c { char pad[0x18]; };

struct VObj_18_e9153c : VBase_18_e9153c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual M2C_UNK m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual s8 m31();
};

struct VObj_18_p65 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual M2C_UNK m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual s8 m31();
};

typedef struct Pkt_801B8344 {
    u8 cmd;
    u8 size;
    u16 client;
    u8 item[0x14];
    u8 pad18;
    s8 f19;
    u8 pad1A[0x1C - 0x1A];
} Pkt_801B8344;

struct Stack_801B8A80 {
    M2C_UNK sp8;
    u8 pad_C[0x8];
    s32 sp14;
    u8 trailing_storage[0x4];
};

struct DeathDropRecord {
    s32 state;
    s32 source_id;
    TItemData item;
};

struct DeathItemPosition { f32 x,y,z; };

struct PlayerDeathItemFields {
    u8 before_position[0x38];
    DeathItemPosition position;
    u8 before_inventory[0xD00-0x44];
    u8* inventory_owner;
};

typedef struct Msg_801B87E4 {
    u8 pad0[2];
    u16 slot;
    s16 a;
    s16 b;
    s32 c;
    u8 d[16];
} Msg_801B87E4;

typedef struct Player_801B87E4 {
    u8 pad0[0xD00];
    void *inv;
} Player_801B87E4;

struct VBase_801B8AF8 { char pad[0x18]; };

struct VObj_801B8AF8 : VBase_801B8AF8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33();
    virtual s32 m34();
};

struct Item_801B8AF8 {
    u8 data[0xC];
    s32 id;
    u8 data2[4];
};

typedef struct Vec_801B8870 { f32 x, y, z; } Vec_801B8870;

typedef struct Cmd_801B8870 {
    u8 cmd;
    u8 size;
    s16 client;
    s16 b;
    s16 floor;
    s32 a;
    Vec_801B8870 pos;
} Cmd_801B8870;

struct Data_801B855C { u8 pad[0x20]; s32 meseta; };

struct Player_801B855C { u8 pad[0x2B0]; Data_801B855C *data; };

typedef char DeathDropRecordSize[(sizeof(DeathDropRecord)==0x1C)?1:-1];

typedef char DeathDropItemOffset[(offsetof(DeathDropRecord,item)==8)?1:-1];

typedef char DeathPlayerInventoryOffset[(offsetof(PlayerDeathItemFields,inventory_owner)==0xD00)?1:-1];

struct L_801B8CB0 { u16 f0; u16 f2; s32 f4; u8 f8[0x78]; };

struct Cmd_801B8DE8 { u8 hdr[2]; s16 id; s32 a; s32 b; };

struct L_801B8D68 { u16 f0; u16 f2; s32 f4; s32 f8; };

struct VObj_18_p72 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual M2C_UNK m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual s32 m34();
    virtual void m35();
    virtual void m36(s32);
};

struct Item_801B8E68 { u32 w[7]; };

struct Base_B { char pad[0x18]; };

struct V_B : Base_B {
    virtual void f0();
    virtual void f1(); virtual void f2(); virtual void f3();
    virtual void f4(); virtual void f5(); virtual void f6();
    virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(); virtual void f11(); virtual void f12();
    virtual void f13(); virtual void f14(); virtual void f15();
    virtual void f16(); virtual void f17(); virtual void f18();
    virtual void f19(); virtual void f20(); virtual void f21();
    virtual void f22(); virtual void f23(); virtual void f24();
    virtual void f25(); virtual void f26(); virtual void f27();
    virtual void f28(); virtual void f29(); virtual void f30();
    virtual void f31(); virtual void f32(); virtual void f33();
    virtual s32 m34();
};

struct VBase_801B91F0 { char pad[0x18]; };

struct VObj_801B91F0 : VBase_801B91F0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33();
    virtual s32 m34();
};

struct Inv_801B91F0 {
    u8 pad0[0x1C];
    s16 count;
};

struct Player_801B91F0 {
    u8 pad0[0xD00];
    Inv_801B91F0 *inv;
};

typedef struct Vec_801B92EC { f32 x, y, z; } Vec_801B92EC;

struct Obj_801B92EC {
    u8 pad0[0x38];
    Vec_801B92EC pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
};

struct Stack_801B9544 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Base_801B95C8 { char pad[0x18]; };

struct VObj_801B95C8 : Base_801B95C8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void pad29(); virtual void pad30(); virtual void pad31();
    virtual void pad32(); virtual void pad33(); virtual void pad34();
    virtual void pad35(); virtual void pad36(); virtual void pad37();
    virtual void pad38(); virtual void pad39(); virtual void pad40();
    virtual void pad41(); virtual void pad42(); virtual void pad43();
    virtual void pad44(); virtual void pad45(); virtual void pad46();
    virtual void pad47(); virtual void pad48(); virtual void pad49();
    virtual void pad50(); virtual void pad51(); virtual void pad52();
    virtual void pad53(); virtual void pad54(); virtual void pad55();
    virtual void pad56(); virtual void pad57(); virtual void pad58();
    virtual void pad59(); virtual void pad60(); virtual void pad61();
    virtual void pad62();
    virtual void m63(s32, M2C_UNK *);
};

typedef struct Cmd_801B9634 { u8 hdr[2]; s16 client; s32 val; } Cmd_801B9634;

struct Base_801B9CE0 { char pad[0x18]; };

struct VObj_801B9CE0 : Base_801B9CE0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
};

struct Base_801B9D50 { char pad[0x18]; };

struct VObj_801B9D50 : Base_801B9D50 {
virtual void f13();
virtual void f14();
virtual void f15();
virtual void f16();
virtual void f17();
virtual void f18();
virtual void f19();
virtual void f20();
virtual void f21();
virtual void f22();
virtual void f23();
virtual void f24();
virtual void f25();
virtual void f26();
virtual void f27();
virtual void f28();
virtual void f29();
virtual void f30();
virtual void f31();
    virtual void m19();
virtual void f33();
virtual void f34();
virtual void f35();
virtual void f36();
virtual void f37();
virtual void f38();
virtual void f39();
virtual void f40();
virtual void f41();
virtual void f42();
virtual void f43();
    virtual s32 m31();
};

typedef struct Msg_801B9E0C {
    u8 pad0[2];
    u16 slot;
    s32 c;
} Msg_801B9E0C;

typedef struct Player_801B9E0C {
    u8 pad0[0xD00];
    void *inv;
} Player_801B9E0C;

struct Cmd_801B9EDC { u16 hdr; u16 id; void *item; };

struct L_801BA0F0 { u16 f0; s16 f2; s32 f4; s32 f8; };

typedef struct Msg_801BA060 {
    u8 pad0[2];
    u16 slot;
    s32 c;
    s32 d;
} Msg_801BA060;

typedef struct Player_801BA060 {
    u8 pad0[0xD00];
    void *inv;
} Player_801BA060;

struct VBase_801B9F40 { char pad[0x18]; };

struct VObj_801B9F40 : VBase_801B9F40 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual void m17(s32);
    virtual void m18();
    virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22();
    virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26();
    virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30();
    virtual s8 m31();
};

struct Player_801B9F40 { u8 pad[0xD04]; u8 slots[4]; };

struct RecoveredGlobal_802A1154_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

typedef char RecoveredGlobal_802A1154_main_task_size[sizeof(RecoveredGlobal_802A1154_main_task) == 0x34 ? 1 : -1];

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];

typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

struct Base_801BA6BC { u8 pad[0x18]; };

struct Ctrl_801BA6BC : Base_801BA6BC {
    virtual ~Ctrl_801BA6BC();
};

typedef struct Msg_801BA838 {
    u8 pad0[2];
    u16 slot;
    s32 floor;
    u8 vec[12];
    s32 ang;
    u8 pad20[8];
} Msg_801BA838;

typedef struct Player_801BA838 {
    u8 pad0[0x60];
    s32 ang;
} Player_801BA838;

typedef struct Msg1F_801BA8D4 {
    u8 pad0[2];
    u16 slot;
    s32 floor;
} Msg1F_801BA8D4;

typedef struct Msg20_801BA8D4 {
    u8 pad0[2];
    u16 id;
    s32 f4;
    u8 vec[12];
    s32 ang;
} Msg20_801BA8D4;

typedef struct Msg_801BA8D4 {
    u8 pad0[2];
    u16 id;
    s16 floor;
    u8 pad6[2];
    s32 f8;
    f32 speed;
} Msg_801BA8D4;

typedef struct Player_801BA8D4 {
    u8 pad0[0x38];
    u8 pos[12];
    u8 pad44[0x60 - 0x44];
    s32 ang;
} Player_801BA8D4;

struct Msg_801BA78C {
    u16 cmd;
    u16 slot;
    u32 x4;
    u32 flags;
};

struct Sp8Struct_801baa00 {
    s16 f0;
    s16 fA;
    s32 fC;
};

typedef struct Msg_801BAA6C {
    u8 pad0[2];
    u16 slot;
    s32 floor;
} Msg_801BAA6C;

struct Msg_801BAB1C { u16 cmd; u16 id; s32 value; u8 pad8[8]; };

struct Vec_801BAB78 { f32 x, y, z; };

struct VBase_801BAB78 { char pad[0x18]; };

struct VObj_801BAB78 : VBase_801BAB78 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62();
    virtual void m63(s32, Vec_801BAB78 *);
    u8 pad1c[0x3C - 0x1C];
    f32 f3c;
    u8 pad40[0x60 - 0x40];
    s32 f60;
    u8 pad64[0x248 - 0x64];
    u8 f248[4];
};

struct Stack_801BAD60 {
    M2C_UNK sp8;
    f32 spC;
};

struct Player_801BB524 { u8 pad[0x30]; u32 flags; u8 pad34[0x324 - 0x34]; s16 control; };

struct VBase_18_9c7036
{
  char pad[0x18];
};

struct VObj_18_9c7036 : VBase_18_9c7036 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual u8 m41();
};

typedef struct VBase_18_9c7036 VBase_18_9c7036;

typedef struct VObj_18_9c7036 VObj_18_9c7036;

struct O_801BC050 { u16 a; u16 pad; s32 b; };

struct Vec_801BBD58 { f32 x, y, z; };

struct Body_801BBD58 {
    Vec_801BBD58 offset;
    f32 radius;
    f32 radius2;
    s32 kind;
    s32 flags;
    Vec_801BBD58 center;
    f32 extra;
};

struct Player_801BBD58 {
    u8 pad[0x38];
    Vec_801BBD58 pos;
    u8 pad44[0x324 - 0x44];
    s16 control;
    u8 pad326[0x680 - 0x326];
    Body_801BBD58 body;
    u8 pad6ac[0x828 - 0x6AC];
    u8 f828[4];
};

typedef struct Msg_801BC068 {
    u8 pad0[2];
    u16 id;
    u8 pad4[2];
    s16 ang;
    u8 pad8[4];
    u8 vec[12];
} Msg_801BC068;

typedef struct Obj_801BC068 {
    u8 pad0[0xC];
    struct Obj_801BC068 *next;
    u8 pad10[0x38 - 0x10];
    u8 pos[12];
    u8 pad44[0x60 - 0x44];
    s32 ang;
    u8 pad64[0x68 - 0x64];
    f32 f68;
    u8 pad6c[0x84 - 0x6C];
    s32 f84;
} Obj_801BC068;

typedef struct List_801BC068 {
    u8 pad0[0x14];
    Obj_801BC068 *head;
} List_801BC068;

struct VBase801BAEC8 { char pad[0x18]; };

struct VObj801BAEC8 : VBase801BAEC8 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8();
    virtual M2C_UNK m9(f32, f32, f32);
};

struct VBase_801BB1F8 { char pad[0x18]; };

struct VObj_801BB1F8 : VBase_801BB1F8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8();
    virtual s32 m9(f32, f32, f32);
};

s32 fn_8000F740(void *);
s32 get_main_phase();
void mark_area_change_pending(void);
M2C_UNK get_field_2d4__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8001053C(void *);
M2C_UNK clamp_field_32E__10TObjPlayerFPv(s32);
M2C_UNK clamp_value__10TObjPlayerFPv(s32);
s32 try_spend_actor_meseta(s32, s32);
s32 add_meseta__10TObjPlayerFl(void *, s32);
s32 set_hp_clamped__10TObjPlayerFPvs(void * a0 = 0, s16 a1 = 0);
void add_actor_hp(u32, s32);
f32 receive_physical_attack__10TObjPlayerFv(s32, s32, f32);
s32 update_defense_stat_status(s32);
s32 update_attack_stat_status(s32);
s32 update_shock_clock__10TObjPlayerFPv(s32);
s32 update_movement_status__10TObjPlayerFv(s32);
s32 update_flag30_timer__10TObjPlayerFPv(s32);
s32 update_action_timer__10TObjPlayerFPv(s32);
s32 update_action_hold_status__10TObjPlayerFv(s32);
s32 update_poison_status__10TObjPlayerFv(s32);
M2C_UNK recalc_combat_stats__10TObjPlayerFv(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32);
void calc_attach_pos__10TObjPlayerFPv(u32);
M2C_UNK reset_actor_action_state(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_locally_controlled__10TObjPlayerFPv(void * a0);
s32 obj_getArrWord_254(void *, M2C_UNK);
s32 obj_isState2_324();
s32 obj_getS16_32E(void *);
s32 obj_getPtr2B0_20(void *);
s32 obj_getPtr2B0_1C(void *);
s32 obj_getS16_32C(void *);
s32 obj_isState3_324(void *);
M2C_UNK obj_copyVec2_0(M2C_UNK *, s32);
M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int);
void * init_192dc_return_self__10TObjPlayerFPv(void *);
s32 obj_testFlags30(s32, s32);
s32 obj_getField1c(void * a0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_player_count__10TObjPlayerFv();
s32 get_item_field_6__10TObjPlayerFPv(Pl_801B0B88 *);
u8 get_field_ed__10TObjPlayerFPv(void *);
s32 get_type__10TObjPlayerFPv(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK set_flags__10TObjPlayerFPvUi(s32, M2C_UNK);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
int test_flags_any(void*, int);
void init_forward__10TObjPlayerFPv(void *);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK get_shared_text_buffer();
void copy_data__6TLobbyFPvPv(void *, s32);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 fn_8002AE08(u16);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, s32);
s32 get_field_3e0__12TBoss3VoloptFPv();
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 obj_clear_flag30_20000(void *);
s32 check_player_flag1__6TLobbyFPv(s32);
M2C_UNK check_flag__10TObjPlayerFPvi(void *, M2C_UNK);
void set_position_from__14TBoss4DarkFalzFPvPv(u32, f32 *);
s32 get_position_ptr__10TObjPlayerFPv();
s32 get_view_matrix__11TCameraCtrlFv();
void reset_cameras_to_actor(u32, s32);
s32 get_mode__11TCameraCtrlFPv(M2C_UNK *);
void copy_header_struct__6TLobbyFPvPv(void *, void *);
void copy_player_visual_record(void *, void *);
void clear_header_struct__10TObjPlayerFPv(void *);
u8 * csnVectorUnder(M2C_UNK *, void *, M2C_UNK);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void * get_quest_id__12TQuestListVMFPv();
f32 get_speed__10TObjPlayerFPv(void *);
s32 test_action_mask__10TObjPlayerFPvi(s32, M2C_UNK);
s32 is_in_shadow_range(void *, f32);
s32 is_inactive__10TObjPlayerFPv(void *);
M2C_UNK create__9TEffGuardFPC3Vec(M2C_UNK *);
s32 get_field_d8__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_800A7798(s32, f32);
void draw_blob_shadow(s32);
void clear_shadow_flag__10TObjPlayerFPv(void *);
void set_shadow_flag__10TObjPlayerFPv(void *);
void __ct__14TFontSmallHelpFUlUllUl(void *, u16, s32, s32, s32);
u32 create__15TFontSmallLobbyFPv(void *);
s32 get_item_ptr__10TObjPlayerFPvi(void *, void *);
M2C_UNK feed_item_to_mag(s32, s32);
s32 copy_item_data_and_process__5TItemFPv(void *);
M2C_UNK set_mode__5TItemFPvc(void *, int);
M2C_UNK set_owner_client__5TItemFPvUs(void *, s16);
s32 get_item_info__10TObjPlayerFiiPv(s32, Pl_801B0B88 *, s32);
s32 copy_and_register_item_data__11TItemObjectFPv();
void TItem__sub_80101CF4(void *);
void copy_to_item_data__5TItemFPvPv(VObj_801B8AF8 *, Item_801B8AF8 *);
s32 init_owner__5TItemFPvUs(void *, s32);
int lookup_inventory_item__10TObjPlayerFPv(void *);
u8 get_field_ec__12TOSwitchItemFPv(void *);
s32 set_facing__10TObjPlayerFPvs(void * a0 = 0, s16 a1 = 0);
s16 get_stat_bonus__10TObjPlayerFPv(void *);
s16 get_stat__10TObjPlayerFPv(void *);
Equip_801B4CE4 * get_equip_field_d04__10TObjPlayerFPv(void *, s32);
f32 get_mag_scale_f__10TObjPlayerFPv(void *);
s32 is_script_controlled__10TObjPlayerFPv(TObjPlayer*);
u8 get_slot_count__14TItemProShieldFPv(void *);
M2C_UNK TItemData__sub_8010C740(void *, int);
M2C_UNK TItemData__sub_8010CCB0(void *);
s32 get_item_use_result__9TItemDataFPv(u8 *);
s32 lookup_item_def__9TItemDataFPv(u8 *);
s32 init__9TItemDataFv(s8 *);
s32 init_item_data__10TObjPlayerFPvi(void *, void *);
s32 get_item_type_or_default__9TItemListFPv(void *);
void set_stack_count__24TShopEquipmentListWindowFPvc(Item_801B8AF8 *, u8);
s32 init_feed_timer__8TItemMagFPv(void *);
s32 get_mag_id__8TItemMagFPv(void *);
s32 check_state_flag_1__8TItemMagFPv(void *);
u16 get_type_id__10TObjPlayerFPv();
s32 TObjPlayer__sub_80116620(void *, int);
s32 advance_item_id_counter(int);
M2C_UNK TObjPlayer__sub_8011E204(void *, M2C_UNK);
M2C_UNK set_flag_10000__10TObjPlayerFPv(void *);
void set_state_flags__10TObjPlayerFPvUi(void *, u32);
void set_action_type__10TObjPlayerFPvs(void *, s16);
s32 is_flag_b0_4__10TObjPlayerFPv();
void restore_scene_lighting(void);
void select_actor_lighting(void *);
void publish_actor_light_scalars(u16, f32, f32);
void bswap_player_data__6TLobbyFi(void *);
void TObjPlayer__sub_8013A748(void *);
void try_add_target_candidate__11TMainCursorFPvPvPvPv(void *c, void *self, void *owner, void *p);
M2C_UNK reset_slots__11TMainCursorFi(void *);
u32 find_by_pos__11TMainCursorFiss(u32, int, int);
int reset_and_spawn_cursors__13TLockOnCursorFi(void*);
u32 TLockOnCursor__ct(u32, void *, s32);
u16 get_id__11TMainCursorFPv(void* p);
s32 get_selected_entry__11TMainCursorFPv(void *c);
s32 is_cursor_clear__11TMainCursorFPv(u32);
s32 fn_8013F264(s32);
M2C_UNK set_shadow_material_state();
void set_depth_buffer_settings_id__FUl(u32);
M2C_UNK reset_transform_state__10TObjPlayerFv();
void direction_to_rotation_xz(void *, void *, void *);
M2C_UNK draw_model_with_callback__10TObjPlayerFPviif(void *, s32, s32, f32);
s32 objInBand__FP7GameObjf(void *, f32);
s32 draw_motion_model_saving_joints(void *);
s32 draw_model_with_callback__10TObjPlayerFPv(void *);
M2C_UNK set_animation__10TObjPlayerFPvs(s32, s32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK reset_movement__10TObjPlayerFPv(void *);
M2C_UNK TMainCursor__sub_80154098(int, int, int);
M2C_UNK TMainCursor__sub_801540B8(int, int, int);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
void set_indexed_flags(void *, s32, s32);
u16 register_entity_by_id(void *obj);
u8 * find_entity_by_id(u16);
M2C_UNK refresh_collision_body_centers(void *);
s32 test_player_overlap_with_players(Obj_801B5DDC *, Obj_801B5DDC *, Vec_801B5DDC *, Hit_801B5DDC *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
int clear_obj_links(void*);
void initialize_linked_object_reference(void *self, void *body);
M2C_UNK release_member_90__10TObjPlayerFPv(void *);
u16 get_trap_type__10TOMineTrapFPv(u32);
s32 is_state_ec1_ed3__10TObjPlayerFPv(void *);
M2C_UNK set_camera_mode__10TObjPlayerFi(int);
M2C_UNK get_dest_area__17TObjAreaWarpQuestFPv(void *);
int mask_action_buttons(void*, void*);
int fn_8019DD24(void*, void*);
M2C_UNK set_state__9TTecLukerFPvi(int, int);
u16 TObjRoomId__sub_801A1DB8(M2C_UNK);
M2C_UNK reset_motion_fields__10TObjPlayerFPv();
s32 is_final_phase__10TObjPlayerFv();
s32 is_camera_ready__10TObjPlayerFv();
s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_single_screen__10TObjPlayerFv();
s32 is_player_valid_target__10TObjPlayerFi(s32);
M2C_UNK update_movement_effects__10TObjPlayerFi(void *);
s32 get_max_level__10TObjPlayerFv();
void update_facing_from_lock__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801AF454(O_801AF454 *self, s32 x);
f32 get_battle_value__10TObjPlayerFiii(s32 arg0, int arg1, s32 arg2);
void handle_6x9B_level_up_all_techniques(void *arg0);
void TObjPlayer__sub_801AF554(void *arg0, s8 arg1);
void play_voice_pair__10TObjPlayerFPv(void *arg0);
int TObjPlayer__sub_801AF694(void* p);
s32 are_traps_full__10TObjPlayerFPv(V_801AF734 *arg0);
s32 is_alive_and_ready__10TObjPlayerFi(s32 arg0);
void refill_traps__10TObjPlayerFPv(TObjPlayer_801AF7E0 *self);
void update_movement_by_screen__10TObjPlayerFv(void);
void set_flags_a00__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801AF904(s32 arg0);
void clamp_stats__10TObjPlayerFiPv(s32 arg0, void *arg1);
f32 TObjPlayer__vt20(s32 arg0, s32 arg1, f32 farg0);
s16 get_handle_value__10TObjPlayerFPv(void* p);
void set_action_provider_variant__10TObjPlayerFPvs(Player_801AFCF4 *arg0, s16 arg1);
s32 get_map_id__13TRaderMapCoreFPv(void* p);
s32 TObjPlayer__sub_801AFD8C(u8 *arg0);
s32 get_move_mode__10TObjPlayerFPv(void* p);
s8 get_class_index__10TObjPlayerFPv(u8 *arg0);
s8 TObjPlayer__sub_801AFDBC(s8 arg0);
s32 check_technique_castable__10TObjPlayerFi(s32 arg0);
u8 is_key_machine_ready__10TObjPlayerFv(void);
u8 is_volopt_phase_final__10TObjPlayerFv(void);
u8 is_lobby_floor_15__15TFontSmallLobbyFv(void);
u8 is_on_current_floor__10TObjPlayerFi(s32 arg0);
void sync_current_floor__10TObjPlayerFPv(u8 *arg0);
void sync_current_area__10TObjPlayerFPv(u8 *arg0);
int get_key_machine_global_state__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801AFFD0(u8 *arg0);
void TObjPlayer__sub_801B0124(u8 *self, s32 arg1);
void handle_6x8F_add_battle_damage_scores(s32 arg0);
void apply_camera_shake__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void handle_6x8E(void);
void record_damage_stats__10TOMineTrapFUiUis(u32 arg0, u32 arg1, s16 arg2);
int update_trap_sub__10TOMineTrapFPv(void* p);
void draw_player_status(s32 arg0, void *arg1, s32 arg2);
void show_sub_status_window(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2);
void draw_status_line(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2, s32 arg3);
int TObjPlayer__sub_801B066C(void* p);
void handle_6x90_set_player_battle_team(s32 arg0);
void check_flag_01000000__10TObjPlayerFPv(void *arg0);
void set_flag_drop_weapon_on_death__10TObjPlayerFPv(void *arg0);
void handle_6x82_enable_drop_weapon_on_death(void *arg0);
s32 TLobby__sub_801B07E0(s32 arg0, void * _w1);
void send_field1c_packet__6TLobbyFi(s32 arg0);
void disable_drop_weapon_on_death__10TObjPlayerFPv(void *arg0);
void handle_6x81_disable_drop_weapon_on_death(void *arg0);
s32 TLobby__sub_801B08F0(s32 arg0, void * _w1);
void send_font_state__6TLobbyFi(s32 arg0);
s32 count_members__6TLobbyFv(void);
void TLobby__sub_801B09A4(void);
s32 check_switch_available__6TLobbyFPvi(void *arg0, s32 arg1);
void apply_battle_rules_to_players__6TLobbyFv(void);
u8 is_technique_ready__8TTecCtrlFv(void);
s32 TObjPlayer__vt12(void *arg0, s32 arg1);
void update_photon_chair__10TObjPlayerFi(s32 arg0);
void refresh_equipment_slot__10TObjPlayerFv(void * _w0);
void check_flag_800000__10TObjPlayerFPv(void *arg0);
void clear_stealth_suit_flags__10TObjPlayerFPv(u8 *arg0);
void handle_6x7B_disable_stealth_suit_effect(void *arg0);
s32 disable_stealth_suit_effect__15TFontSmallLobbyFi(s32 arg0, void * _w1);
void draw_small_label__15TFontSmallLobbyFi(s32 arg0);
void set_stealth_suit_flags__10TObjPlayerFPv(u8 *arg0);
void handle_6x7A_enable_stealth_suit_effect(void *arg0);
s32 TFontSmallLobby__sub_801B1224(s32 arg0, void * _w1);
void TLobby__sub_801B1254(s32 arg0);
void test_flag_2000000__10TObjPlayerFPv(void *arg0);
void activate_body_collision__10TObjPlayerFPv(u8 *arg0);
void deactivate_body_collision__10TObjPlayerFPv(u8 *arg0);
u8 TObjPlayer__vt17(void *arg0, s32 arg1);
void send_field_state__10TObjPlayerFi(s32 arg0);
void spawn_effect__10TObjPlayerFi(s32 arg0);
void draw__10TObjPlayerFPvf(void *arg0, f32 farg0);
void draw__10TObjPlayerFPv(void *arg0);
s32 try_pickup_item__10TObjPlayerFi(s32 arg0);
void set_state_flag_604B__10TObjPlayerFPv(u8 *arg0);
void handle_6x1C_disable_pk_mode_for_player(void *arg0);
s32 update_small_font__10TObjPlayerFi(s32 arg0, void * _w1);
void send_item_pickup_request__10TObjPlayerFi(s32 arg0);
void set_state_flag_6043__10TObjPlayerFPv(u8 *arg0);
void handle_6x1B_enable_pk_mode_for_player(void *arg0);
void* draw_font__10TObjPlayerFPv(void* p);
void notify_field1c__10TObjPlayerFi(s32 arg0);
int get_field_828__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801B18C0(s32 arg0, u32 arg1);
void unequip_by_field326__10TObjPlayerFPv(void *arg0);
void play_phase_transition_sound__10TObjPlayerFi(s32 arg0);
void reset_volopt_state__10TObjPlayerFv(void);
void foreach_player__10TObjPlayerFv(M2C_UNK (*arg0)(u32));
void for_each_player_slot__10TObjPlayerFv(void (*arg0)(void *));
void check_flag_40000__10TObjPlayerFPv(void *arg0);
s32 handle_set_visible__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_801B1BA4(void);
void TObjPlayer__sub_801B1C8C(void);
void send_field_state_if_active__10TObjPlayerFii(s32 arg0, s32 arg1);
u8 is_in_tl03_state__10TObjPlayerFPv(void *arg0);
void handle_6x2F_change_player_hp(s32 arg0);
void send_6x2F_change_player_hp(s32 arg0, s32 arg1, s32 arg2);
void handle_6x24_teleport_player(s32 arg0);
void send_6x24_teleport_player(u16 slot, void *pos, s32 heading);
void TObjPlayer__sub_801B2014(s32 arg0);
void sync_status_effect_flags__10TObjPlayerFPv(s32 *arg0);
s32 TObjPlayer__vt40(s32 arg0);
s32 TObjPlayer__vt39(s32 arg0);
s32 TObjPlayer__vt38(s32 arg0);
s32 TObjPlayer__vt37(s32 arg0);
s32 TObjPlayer__vt36(s32 arg0);
s32 TObjPlayer__vt35(s32 arg0);
s32 TObjPlayer__vt34(s32 arg0);
s32 TObjPlayer__vt33(s32 arg0);
s32 check_flag30_bit20__10TObjPlayerFi(s32 arg0);
s32 is_flag30_10_set__10TObjPlayerFi(s32 arg0);
s32 is_flag30_8_set__10TObjPlayerFi(s32 arg0);
void remove_status_effect__10TObjPlayerFUiPv(u32, Pair_801B2C04 *);
void dispatch_status_effect_msg__10TObjPlayerFUiPv(u32 arg0, Pair_801B2AE8 *msg);
void handle_6x0D_add_or_remove_status_effect(void *arg0);
void send_code_13_3__10TObjPlayerFii(s32 arg0, s32 arg1);
void handle_6x0E_clear_negative_status_effects(s32 arg0);
s32 clear_negative_status_effects__10TObjPlayerFi(s32 arg0);
void handle_6x0C_add_or_remove_status_effect(void *arg0);
void TObjPlayer__vt76(s32 arg0, s32 arg1);
s32 get_next_level_exp__10TObjPlayerFPv(u8 *arg0);
s32 calc_scaled_value__10TObjPlayerFii(s32 arg0, s32 arg1);
void apply_speed_scale__10TObjPlayerFif(s32 arg0, f32 farg0);
s32 build_player_class_stat_template(s32 arg0, s32 arg1);
s32 build_player_equipment_requirement_stats(TObjPlayer *self, PlayerRequirementStats *arg1);
int fn_801B309C(void* p);
void prepare_guild_return__10TObjPlayerFPv(void *player);
int player_flag_1__6TLobbyFPv(void* p);
int check_player_state_flag_2__6TLobbyFPv(void* p);
void handle_6x34(void);
void prepare_hospital_return__10TObjPlayerFi(void *arg0);
void complete_deferred_player_death(void);
int stop_battle__10TObjPlayerFPv(void* p);
s32 create_return_city_window__10TObjPlayerFPv(void *arg0);
int is_flag_clear__17TObjWarpBossMultiFPv(void* p);
int has_item_flag_4096__10TObjPlayerFPv(void* p);
int check_technique_flag__10TObjPlayerFPv(void* p);
int is_flag_400_set__10TObjPlayerFPv(void* p);
void enable_action_input__10TObjPlayerFPv(void* p);
void disable_primary_action_input__10TObjPlayerFPv(void* p);
void disable_action_input__10TObjPlayerFPv(void* p);
int try_use_item_by_type__10TObjPlayerFPviii(void *arg0, int arg1, int arg2, int arg3);
s32 check_can_add_item__10TObjPlayerFPvcc(void *arg0, s8 arg1, s8 arg2);
s32 can_use_item__10TObjPlayerFPvPv(u8 *arg0, void *arg1);
s32 can_use_camera_field__10TObjPlayerFi(s32 arg0);
s32 dispatch_palette_action__10TObjPlayerFiUi(s32 arg0, u32 arg1);
int get_result_entry__18TChallenge4PResultFPv(void* p);
int get_player_rank__18TChallenge4PResultFPv(void* p);
int get_field_340__18TChallenge4PResultFPv(void* p);
int get_player_result__18TChallenge4PResultFPv(void* p);
s32 handle_palette_button_input__10TObjPlayerFPv(u8 *arg0);
s32 execute_palette_action__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
int TObjPlayer__sub_801B3FD8(void* p);
int attach_battle_ctrl_sub__10TObjPlayerFPv(void* p);
int forward_1BF500_at_63c__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801B4044(void* p);
s32 classify_action_state__10TObjPlayerFv(void);
int update_foot_stamp__10TObjPlayerFPvi(void *arg0, int arg1);
s32 test_ordered_anim_markers__10TObjPlayerFPvff(u8 *arg0, f32 farg0, f32 farg1);
void emit_footstep_effect__10TObjPlayerFiff(s32 arg0, f32 farg0, f32 farg1);
void update_rotation__10TObjPlayerFPv(void *arg0);
void revive__10TObjPlayerFPv(void *arg0);
void handle_6xA1_revive_player_v3(void *arg0);
s32 revive_6xA1__10TObjPlayerFi(s32 arg0, void * _w1);
void TObjPlayer__sub_801B4430(s32 arg0);
void handle_6x32_medical_center_revive_all_players(void);
void send_code50_packet__10TObjPlayerFi(s32 arg0);
void recover_full__10TObjPlayerFPv(void *arg0);
void handle_6x31_use_medical_center(void *arg0);
s32 update_medical_font__10TObjPlayerFi(s32 arg0, void * _w1);
void send_code_49_1__10TObjPlayerFi(s32 arg0);
s32 get_recovery_need_flags__10TObjPlayerFPv(void *arg0);
s32 can_use_action__10TObjPlayerFi(s32 arg0);
void send_field_state__10TObjPlayerFPv(void* p);
void update_target__10TObjPlayerFi(s32 arg0);
s32 is_target_valid__10TObjPlayerFPv(void *arg0);
void update_subsystems__10TObjPlayerFi(s32 arg0);
s32 get_battle_ctrl_id__10TObjPlayerFUs(u16 arg0);
void submit_cursor_candidate(void *self);
void submit_target_to_player_cursor(void *target, s32 id);
void update_facing_vector__10TObjPlayerFPv(u8 *arg0);
void clear_action_flag__10TObjPlayerFPv(void *arg0);
void apply_material_color_override__10TObjPlayerFi(s32 arg0);
s32 get_battle_ctrl_flag__10TObjPlayerFUs(u16 arg0);
void fill_player_record__10TObjPlayerFPvPv(Src_801B4CE4 *src, Dst_801B4CE4 *dst);
Obj_801B4FD8 * init_player_join_record(Obj_801B4FD8 *self);
s32 is_outside_movement_hold__10TObjPlayerFPvPv(u8 *self, f32 *pos);
void handle_6x2D_release_hold(void *arg0);
s32 draw_small_font__10TObjPlayerFi(s32 arg0, void * _w1);
void send_code_45_1__10TObjPlayerFi(s32 arg0);
void handle_6x2C_impose_hold(s32 arg0);
void send_6x2C_impose_hold(s32 arg0, struct Vec_801B5328 *pos, s16 arg2, s16 arg3, f32 radius);
void play_effect__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void play_effect_default__10TObjPlayerFii(s32 arg0, s32 arg1);
void init_trait_flags__10TObjPlayerFPv(u8 *arg0);
s32 get_clamped_index__10TObjPlayerFPv(void *arg0);
void set_move_mode__10TObjPlayerFi(s32 arg0);
void apply_input_mode__10TObjPlayerFi(s32 arg0);
void select_class_action_provider__10TObjPlayerFPv(u8 *arg0);
int has_valid_handle__10TObjPlayerFPv(void* p);
int check_flag_100__10TObjPlayerFPv(void* p);
void init_parts__10TObjPlayerFPv(void* p);
void reset_equip_slots__10TObjPlayerFPv(void* p);
s32 get_camera_field__10TObjPlayerFPv(void *arg0);
void release_attached_resource__10TObjPlayerFPv(void* p);
void action_enable_if_present__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801B57E8(void);
s32 is_quest_interaction_blocked__10TObjPlayerFPv(u8 *arg0);
s32 has_action_palette_entry__10TObjPlayerFPv(u8 *arg0);
s32 is_action_channel_available__10TObjPlayerFii(s32 arg0, s32 arg1);
void is_effect_channel_active__10TObjPlayerFii(s32 arg0, s32 arg1);
void refresh_party_cursors__10TObjPlayerFi(s32 arg0);
void set_action_palette_entry__10TObjPlayerFiiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void TObjPlayer__sub_801B5A44(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void select_action_palette_and_apply__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 get_action_palette_entry__10TObjPlayerFii(s32 arg0, s32 arg1);
void TObjPlayer__sub_801B5AF8(s32 arg0, s32 arg1);
s32 refresh_effect__10TObjPlayerFi(s32 arg0);
void select_contextual_pickup_action__10TObjPlayerFv(u8 *arg0);
void update_ground_contact__10TObjPlayerFi(s32 arg0);
s32 check_actor_blocking_move__10TObjPlayerFPv(Obj_801B5DDC *self);
s32 resolve_move_collision__10TObjPlayerFPv(Obj_801B5EA4 *arg0);
void damp_planar_velocity(P_801B5FB0 *p);
void rewind_position_history__10TObjPlayerFPv(u8 *arg0);
s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1);
void handle_6x2E_set_or_clear_player_flags(void *arg0);
s16 add_stat_clamped__10TObjPlayerFiPvs(s32 arg0, s16 *arg1, s16 arg2);
void add_lck__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_evp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_ata__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_mst__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_hp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_dfp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_stat__10TObjPlayerFPvi(void *arg0, s32 arg1);
void TObjPlayer__vt71(s32 arg0);
void update_aim_angle__10TObjPlayerFPvi(void *arg0, s32 arg1);
void apply_battle_level_reset__10TObjPlayerFv(Pl_801B0B88 *, s32);
void TObjPlayer__sub_801B67C4(void* p);
void copy_stats__10TObjPlayerFPvPv(void *arg0, void *arg1);
void notify_volopt_if_ready__10TObjPlayerFPv(void* p);
void spawn_level_change_feedback__10TObjPlayerFv(s32 arg0, s32 arg1);
void handle_6x30_change_player_level(void *arg0);
void * copy_fields__10TObjPlayerFPvPv(void *arg0, void *arg1);
void send_6x30_change_player_level(Player_801B6C30 *arg0);
s32 apply_exp_level_growth__10TObjPlayerFPv(Obj_801B6CE0 *self);
void check_level_up__10TObjPlayerFPv(u8 *arg0);
void update_status_effects__10TObjPlayerFPv(u8 *arg0);
void update_position_history__10TObjPlayerFPv(u8 *arg0);
void clear_lobby_flag__10TObjPlayerFPv(void *arg0);
void init_effect_5f0__10TObjPlayerFPv(u8 *arg0);
void get_hand_joint_position__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
u32 apply_wall_response__10TObjPlayerFv(void *);
void calc_move__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2);
void calc_move_velocity__10TObjPlayerFPvPvf(void *arg0, void *arg1, f32 farg0);
void calc_wall_slide_point__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);
u8 * TObjPlayer__vt16(u8 *arg0, u8 *arg1);
void TObjPlayer__vt15(void *arg0);
void handle_6x99(void);
void close_sub_window__10TObjPlayerFPv(void *arg0);
void handle_6x98(void);
void TObjPlayer__sub_801B7B58(P_801B7B58 *arg0, s32 arg1, s32 arg2);
s32 can_destroy_with_parents__10TObjPlayerFUi(u32 arg0);
s32 find_inventory_item_id__10TObjPlayerFPvcc(u8 *arg0, s8 arg1, s8 arg2);
s32 fn_801B7CEC(u8 *arg0, s8 arg1, s8 arg2, s8 arg3);
void handle_6x28_feed_mag(s32 arg0);
void send_6x28_feed_mag(void *arg0, s32 arg1, s32 arg2);
void feed_mag__13TWindowSubMagFPvPvPv(void* p, void* a1, void* a2);
void handle_6x27_use_item(s32 arg0);
s32 try_send_6x27_use_item(void *arg0, s32 arg1);
void rebuild_player_inventory(void *arg0);
void assign_inventory_item_ids(void *arg0, Ent_801B80C0 *arg1, s32 arg2);
void equip_saved_item_if_slot_empty__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
void bind_saved_inventory_equipment__10TObjPlayerFPvPvi(u8 *p, u8 *records, s32 count);
void create_inventory__10TObjPlayerFPv(u8 *arg0);
s32 query_state_if_present__10TObjPlayerFPv(void *arg0);
void handle_6x2B_create_inventory_item(s32 arg0);
int get_item_record__23TShopJudgmentItemWindowFPv(void* p);
s32 try_add_sale_meseta__10TObjPlayerFv(Player_801B855C *arg0, s32 arg1, s32 arg2, s32 arg3);
void drop_items_on_death__10TObjPlayerFPv(TObjPlayer* player);
void handle_6x2A_drop_item(void *arg0);
void send_6x2A_drop_item__10TObjPlayerFv(void *arg0, s32 arg1, void *arg2, s32 arg3);
s32 send_trap_packet__10TObjPlayerFPvi(void *, int);
void request_meseta_drop__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
void request_item_drop__10TObjPlayerFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 count_items_of_type__10TObjPlayerFPvccc(u8 *arg0, s8 arg1, s8 arg2, s8 arg3);
void dispatch_input__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
void handle_6xAC(void *arg0);
void dispatch_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
void handle_6x29_delete_inventory_item(void *arg0);
void send_6x29_delete_item__10TObjPlayerFPvii(void *obj, s32 a, s32 b);
void * pickup_item__10TObjPlayerFv(u8 *arg0, u8 *arg1);
s32 can_pickup_item__10TObjPlayerFPvPv(void *arg0, u8 *arg1);
void can_pickup_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(Player_801B91F0 *self, u8 *item);
bool is_target_in_facing_cone__10TObjPlayerFPvPv(Obj_801B92EC *self, Vec_801B92EC *target);
s32 update_target_lock__10TObjPlayerFPv(void *arg0);
void TObjPlayer__vt63(s32 arg0, s32 arg1, s32 arg2);
void use_current_item__10TObjPlayerFPv(void *arg0);
void send_unequip_held_item__10TObjPlayerFUi(u32 arg0);
void unequip_all_units__10TObjPlayerFi(s32 arg0);
void unequip_item__10TObjPlayerFiPv(s32 arg0, void *arg1);
void handle_6x26_unequip_item(void *arg0);
void * copy_unequip_fields__10TObjPlayerFPvPv(void *arg0, void *arg1);
void send_6x26_unequip_item__10TObjPlayerFPvPv(void *self, void *item);
void equip_item_to_slot__10TObjPlayerFPvPvi(void *self, void *item, s32 slot);
void handle_6x25_equip_item(void *arg0);
void send_6x25_equip_item(void *arg0, s32 arg1, s32 arg2);
void handle_state2_transitions__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801BA42C(void);
s32 end_camera_pan__10TObjPlayerFPv(void *arg0);
void freeze_all_players__10TObjPlayerFv(void);
s32 start_camera_pan__10TObjPlayerFPvs(u8 *arg0, s16 arg1);
s32 init_photon_blast__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
s32 start_freeze__10TObjPlayerFPv(u8 *arg0);
void set_action_state__10TObjPlayerFPvss(void *arg0, s16 arg1, s16 arg2);
s32 register_player_slot__10TObjPlayerFPv(void *self);
void * get_player_by_client_id(s32 i);
void handle_6xAE_set_animation_state(void *arg0);
void handle_6x20_set_position(void *arg0);
void handle_6x1F_set_player_floor(void *arg0);
void apply_state_transform__10TObjPlayerFUi(u32 arg0);
void handle_6x21_inter_level_warp(void *arg0);
void send_6x21_inter_level_warp(void *obj, s32 value);
void draw_projected_shadow__10TObjPlayerFPvPvi(VObj_801BAB78 *self, f32 *pos, s32 arg2);
void TObjPlayer__sub_801BAC48(void);
void draw_head_attachments__10TObjPlayerFPv(u8 *arg0);
void draw_body__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
void render_body_pass__10TObjPlayerFPvf(u8 *self, f32 f);
void run_task__10TObjPlayerFv(u8 *arg0);
void unregister__10TObjPlayerFi(s32 arg0);
s32 setup_control_role__10TObjPlayerFPvi(Player_801BB524 *self, s32 role);
void TObjPlayer__vt6(s32 arg0);
void TObjPlayer__sub_801BB8A8(void);
void TObjPlayer__sub_801BB8AC(void);
void TObjPlayer__sub_801BB8B0(u8 *arg0, u8 *arg1);
void TFontSmallLobby__ct(u8 *arg0);
void setup_fresh_player_state__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
void TObjPlayer__sub_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void init_player_substructs__10TObjPlayerFPv(void *arg0);
void init_action_palette_defaults__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_801BBC2C(void* p);
void update_lock_on_cursor__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BBC64(void);
int clear_links__10TObjPlayerFPv(void* p);
void init_collision_body__10TObjPlayerFPv(Player_801BBD58 *self);
M2C_UNK send_respawn_position__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BC050(O_801BC050 *p);
void TObjPlayer__send_selected_spawn_position(void *self, u16 id);
M2C_UNK place_on_area_entry__10TObjPlayerFPv(void *);
M2C_UNK reset_state__10TObjPlayerFPv(void *);
M2C_UNK reset_area_entry_state__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BCA0C(void *);
M2C_UNK update_state__10TObjPlayerFi(void *);
M2C_UNK can_cast_technique__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BCD50(void *);
M2C_UNK update_recobox__10TObjPlayerFi(void *);
void apply_motion_entry__10TObjPlayerFPv(void *);
M2C_UNK update_input_and_draw__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801BD3A4(void *);
void create_player_instance__10TObjPlayerFii(u16, Rec_801B09A4 *);
s32 check_camera_mode__10TObjPlayerFv();
s32 is_ready__10TObjPlayerFPv(s32);
M2C_UNK check_stat_flag_41c__10TObjPlayerFPv(s32);
M2C_UNK check_flag_at_41c__10TObjPlayerFPv(s32);
M2C_UNK set_flag_41c_bit1__10TObjPlayerFPv(s32);
M2C_UNK clamp_stat_41c__10TObjPlayerFPv(s32);
s8 get_rule_field_0__10TObjPlayerFv();
M2C_UNK set_flag_400000__10TObjPlayerFPv(s32);
s16 get_model_field_m25__10TObjPlayerFPv(void *);
s16 get_action_animation__10TObjPlayerFPv(void *);
s16 call_model_m24__10TObjPlayerFPv(void *);
s16 get_weapon_stat_c__10TObjPlayerFPv(void *);
s16 call_obj_vt26__10TObjPlayerFPv(void *);
s16 query_child_state__10TObjPlayerFPv(void *);
s16 query_equip__10TObjPlayerFPv(void *);
s16 get_status__10TObjPlayerFPv(void *);
s16 get_model_state__10TObjPlayerFPv(void *);
s16 get_state__10TObjPlayerFPv(void *);
s16 call_subobject_m15__10TObjPlayerFPv(void *);
s16 get_vobj_state_28__10TObjPlayerFPv(void *);
void * update_battle_controller__10TObjPlayerFv();
s32 check_flag_4__10TObjPlayerFPv(void *);
void clear_flag_4000_callback__10TObjPlayerFPv(void);
void clear_flag_4000__10TObjPlayerFPv(u32);
int set_battle_flag__10TObjPlayerFPvi(void*, int);
s32 get_anim_id__10TObjPlayerFPv(void *);
s32 check_flag_0x40000000__10TObjPlayerFPv(void *);
M2C_UNK clear_flag_0x2__10TObjPlayerFPv(void *);
u32 is_action_active__10TObjPlayerFPv();
void TObjPlayer__sub_801BE784(void *, s32);
s32 get_battle_mode__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE794(void *, s32);
s32 get_byte_339__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE7A4(void *, s32);
s32 get_mag_level__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE7B4(void *, s32);
s32 TObjPlayer__sub_801BE7BC(void *);
void TObjPlayer__sub_801BE7E0(void *, s32);
s32 get_equip_flags__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE80C(void *, s32);
s32 get_inventory_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE838(void *, s32);
s32 get_field_374_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE864(void *, s32);
s32 get_field_374__10TObjPlayerFPv(void *);
void init_inventory_list__10TObjPlayerFPv(void *);
M2C_UNK set_move_mode__10TObjPlayerFPvi(s32, M2C_UNK);
M2C_UNK set_input_mode__10TObjPlayerFPvi(s32, M2C_UNK);
s32 TObjPlayer__sub_801BE8F4(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BE918(void *, s32, M2C_UNK *, M2C_UNK *);
s32 clamp_index_to_max__10TObjPlayerFi(s32);
s16 clamp_nested_index__10TObjPlayerFPv(void *, int);
void TObjPlayer__sub_801BE9A8(s32);
void set_flag_20000__10TObjPlayerFi(s32);
M2C_UNK set_flag_2000000__10TObjPlayerFPv(void *);
s32 set_flag_02000000__10TObjPlayerFPv(void *);
M2C_UNK set_position_history_entry__10TObjPlayerFiiff(void *, s32, f32, f32);
s32 set_action_flag_2__10TObjPlayerFPv(void *);
M2C_UNK set_flag_400000__10TObjPlayerFi(void *);
s32 check_flag_48__10TObjPlayerFPv(void *);
s32 is_status_locked__10TObjPlayerFPv(s32);
s32 is_status_flag_200__10TObjPlayerFPv(s32);
void set_floor__10TObjPlayerFPvi(void *, s32);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
s32 TObjPlayer__sub_801BEB0C(void *);
M2C_UNK unregister_sub__10TObjPlayerFPv(s32);
void set_control_role__10TObjPlayerFPvi(void *self, s32 role);
s8 TObjPlayer__sub_801BEB3C(s32);
s8 TObjPlayer__sub_801BEB44(s32);
s8 TObjPlayer__sub_801BEB4C(s32);
M2C_UNK set_play_time__10TObjPlayerFPvi(void *, int);
void set_meseta__10TObjPlayerFPvi(Pl_801B0B88 *, s32);
void TObjPlayer__sub_801BEE24(Pl_801B0B88 *, s32);
void TObjPlayer__sub_801BEE2C(Pl_801B0B88 *, s32);
void copy_6x0d_status_effect_packet__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801BEEAC(void *, void *);
void TObjPlayer__sub_801BEEE0(void *, void *);
void copy_player_record_header__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801BEF30(void *, void *);
void TObjPlayer__sub_801BEF44(void *, void *);
M2C_UNK check_hit_by_id_431_from_packet__10TObjPlayerFPv(s32);
M2C_UNK emit_sand_footstep_effect(void *);
M2C_UNK emit_water_footstep_effect(void *);
M2C_UNK emit_grass_footstep_effect(void *);
int emit_photon_blast_feedback_from_packet__10TObjPlayerFPv(void*);
M2C_UNK TObjPlayer__sub_801BF3A0(void *, void *);
M2C_UNK copy_vec_at_18__10TObjPlayerFPv(void *, void *);
s32 TObjPlayer__sub_801BF40C(u32 a0 = 0, s32 a1 = 0);
M2C_UNK TObjPlayer__sub_801BF414(s32, s32, s32, void (*)(int));
int TObjPlayer__sub_801BF460(void*);
int TObjPlayer__sub_801BF47C(void*);
int TObjPlayer__sub_801BF488(void*);
int TObjPlayer__sub_801BF4A0(void*);
void update_action_palette__10TObjPlayerFPv(void *, u8);
void set_action_palette_mode__10TObjPlayerFPv(void *, u8);
int clear_flag0_bit1__10TObjPlayerFPv(void*);
int set_flag_2__10TObjPlayerFPv(void*);
s32 is_timer_running(void *);
s32 TObjPlayer__sub_801BF560(s32);
s16 TObjPlayer__sub_801BF57C(s32);
M2C_UNK TObjPlayer__sub_801BF584(void *);
void TObjPlayer__sub_801BF660(void *);
f32 TObjPlayer__sub_801BF6B0(void *, f32, f32, f32);
f32 * TObjPlayer__sub_801BF6B8(void *);
void TObjPlayer__sub_801BF6C0(s32, f32);
void TObjPlayer__sub_801BF6C8(s32, f32, f32);
void TObjPlayer__sub_801BF6D4(s32, s16);
void TObjPlayer__sub_801BF6DC(s32, s16);
M2C_UNK reset_sub_status_disp__10TObjPlayerFPv(void *);
s32 update_timer__10TObjPlayerFPv(void *);
M2C_UNK update_field8__10TObjPlayerFPv(void *);
M2C_UNK set_anim_state__10TObjPlayerFPvi(void *, s32);
M2C_UNK set_state__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK set_anim_state__10TObjPlayerFPvs(void *, s32);
M2C_UNK set_action_id__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK test_flag_16__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BF840(void *);
M2C_UNK set_flag_4__10TObjPlayerFPv(void *);
M2C_UNK check_flag_2__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BF8AC(void *);
void set_equip_slot_entry(s32, s32, s32);
s32 TObjPlayer__sub_801BF8F8(void *);
s32 TObjPlayer__sub_801BF914(void *);
s32 TObjPlayer__sub_801BF918(void *);
s16 get_action_id__10TObjPlayerFPv(s32);
u8 * TObjPlayer__sub_801BF934(void *);
M2C_UNK TObjPlayer__sub_801BF93C(void *, void *);
u32 TObjPlayer__sub_801BFFA0(void *);
void copy_hold_params__10TObjPlayerFPvPv(Pkt_801B5254 *, s32);
s16 get_floor__10TObjPlayerFPv(void *);
int sub_802a7290_fwd__10TObjPlayerFPv(void*);
int is_handle_valid__10TObjPlayerFPv(void*);
s32 forward_801C210C__10TObjPlayerFPv(int, int);
s32 is_action_id_none(s32);
void set_technique_id__10TObjPlayerFPvs(void *, s16);
u8 TObjPlayer__sub_801C0124(void *, s16);
s8 get_item_count_max__10TObjPlayerFv();
s32 TFontSmallLobby__sub_801C013C(void *);
void TFontSmallLobby__sub_801C01BC(void *);
void TFontSmallLobby__sub_801C01DC(void *, void *);
M2C_UNK TFontSmallLobby__sub_801C0228();
void init_packet_6x9b_level_up__15TFontSmallLobbyFPv(void *);
void TFontSmallLobby__sub_801C029C(void *);
void bswap_battle_damage_packet__15TFontSmallLobbyFPv(Pkt_801B01AC *);
void TFontSmallLobby__sub_801C030C(Pkt_801B01AC *, s32);
void init_packet_6x8f_battle_damage__15TFontSmallLobbyFPv(Pkt_801B01AC *);
M2C_UNK TFontSmallLobby__sub_801C0378(Pkt_801B0300 *);
M2C_UNK bswap_6x90_set_player_battle_team__15TFontSmallLobbyFPv(void *);
M2C_UNK TFontSmallLobby__sub_801C03E0(void *, void *);
M2C_UNK TFontSmallLobby__sub_801C041C(void *);
M2C_UNK TFontSmallLobby__sub_801C0438(M2C_UNK *);
M2C_UNK TFontSmallLobby__sub_801C044C(M2C_UNK *);
M2C_UNK TFontSmallLobby__sub_801C0480(M2C_UNK *);
M2C_UNK send_font_state_msg__15TFontSmallLobbyFPv(M2C_UNK *);
M2C_UNK TFontSmallLobby__sub_801C04C8(M2C_UNK *);
M2C_UNK fn_801C04DC(M2C_UNK *);
M2C_UNK fn_801C0510(M2C_UNK *);
M2C_UNK cleanup_small_font__6TLobbyFPv(M2C_UNK *);
M2C_UNK fn_801C0558(M2C_UNK *);
M2C_UNK fn_801C056C(M2C_UNK *);
M2C_UNK fn_801C05A0(M2C_UNK *);
M2C_UNK fn_801C05B4(M2C_UNK *);
M2C_UNK fn_801C05E8(Ctx_801B1BA4 *);
M2C_UNK fn_801C05FC(Ctx_801B1BA4 *);
M2C_UNK fn_801C0630(Ctx_801B1C8C *);
M2C_UNK fn_801C0644(Ctx_801B1C8C *);
void bswap_change_hp_packet__10TObjPlayerFPv(Pkt_801B1D8C *);
void TObjPlayer__sub_801C06BC(Pkt_801B1D8C *, s32);
void init_6x2F_packet_header__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C0734(void *);
void byteswap_packet_body__10TObjPlayerFPv(Pkt_801B1EE0 *);
void TObjPlayer__sub_801C07B4(Pkt_801B1EE0 *, s32);
void init_cmd_6x24__10TObjPlayerFPv(void *);
void send_lobby_update__10TObjPlayerFPv(void *);
void bswap_status_effect__10TObjPlayerFPv(void *);
void set_code_13_3__10TObjPlayerFPv(void *);
M2C_UNK update_and_send__10TObjPlayerFPv(M2C_UNK *);
void set_code_14_1__10TObjPlayerFPv(void *);
void apply_status_effect__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C092C(void *, void *);
M2C_UNK set_code_12_3__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK reinit_update_sub4_and_send__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK set_code_161_1__10TObjPlayerFPv(void *);
M2C_UNK update_font__10TObjPlayerFPv(void *);
M2C_UNK send_font_state__10TObjPlayerFPv(void *);
M2C_UNK set_code_50_1__10TObjPlayerFPv(void *);
M2C_UNK set_code_49_1__10TObjPlayerFPv(void *);
M2C_UNK bswap_font_lobby__10TObjPlayerFPv(void *);
M2C_UNK set_code_45_1__10TObjPlayerFPv(void *);
M2C_UNK send_lobby_update_font__10TObjPlayerFPv(void *);
void bswap_pkt_u16x2_u32__10TObjPlayerFPv(Pkt_801B5254 *);
void build_6x2C_impose_hold_packet__10TObjPlayerFPv(void *);
void bswap_and_send_packet__10TObjPlayerFi(void *);
void bswap_body_dwords__10TObjPlayerFi(void *);
void copy_pair_fields__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801C0C04(void *);
void send_swapped_packet_6x30__10TObjPlayerFPv(void *);
void swap_endian__10TObjPlayerFi(Pkt_801B6A5C *);
void build_6x30_change_level_packet__10TObjPlayerFPv(Pkt_801B6A5C *);
M2C_UNK bswap_body_dwords2__10TObjPlayerFi(void *);
M2C_UNK copy_pair_fields2__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801C0D7C(void *);
void bswap_and_send_body_dwords2__10TObjPlayerFPv(void *);
M2C_UNK bswap_cmd_u32__10TObjPlayerFi(void *);
M2C_UNK copy_field_4__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_801C0E40(void *);
M2C_UNK send_use_item_cmd__10TObjPlayerFPv(void *);
M2C_UNK bswap_cmd_item_data__10TObjPlayerFi(void *);
M2C_UNK copy__10TObjPlayerFPvPv(void *, void *);
M2C_UNK init_pkt_6x2B__10TObjPlayerFPv(void *);
void bswap_fields__10TObjPlayerFi(void *);
void TObjPlayer__sub_801C106C(void *, void *);
void init_6x2A__10TObjPlayerFPv(void *);
void bswap_fields_and_send__10TObjPlayerFPv(Cmd_801B8870 *);
void byteswap_data__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C1268(void *, void *);
void init_6xAC_packet__10TObjPlayerFPv(void *);
void bswap_body_dwords3__10TObjPlayerFPv(void *);
void copy_pair_fields3__10TObjPlayerFPvPv(void *, void *);
void init_cmd_6x29__10TObjPlayerFPv(void *cmd);
void bswap_body_dwords3_and_send__10TObjPlayerFPv(void *cmd);
M2C_UNK bswap_body_dwords4_and_send__10TObjPlayerFPv(Cmd_801B9634 *);
void bswap_body_dwords4__10TObjPlayerFPv(void *);
void init_cmd_6x26__10TObjPlayerFPv(void *);
void bswap_body_dwords5__10TObjPlayerFPv(void *);
void copy_pair_fields4__10TObjPlayerFPvPv(void *, void *);
void init_command__10TObjPlayerFPv(void *);
void bswap_body_dwords5_and_send__10TObjPlayerFPv(void *);
void bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(void *);
void copy_from__10TObjPlayerFPvPv(void *, void *);
void build_6xAE_set_animation_state_packet__10TObjPlayerFPv(void *);
void bswap_pkt_u32x5__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C1664(void *, void *);
void init_cmd_6x20__10TObjPlayerFPv(void *);
void send_player_floor_packet__10TObjPlayerFPvPv(void *, s32);
void send_player_floor_packet_u32x5__10TObjPlayerFPv(void *);
void bswap_set_floor_packet__10TObjPlayerFPv(void *);
void handle_6x1F_set_floor__10TObjPlayerFPvPv(void *, void *);
void init_6x1F_floor_packet(void *);
M2C_UNK bswap_and_send_set_floor__10TObjPlayerFPv(M2C_UNK *);
void bswap_warp_packet__10TObjPlayerFPv(void *);
void copy_warp_target__10TObjPlayerFPvPv(void *, void *);
void init_6x21_inter_level_warp_packet(void *m);
void send_warp_packet__10TObjPlayerFPv(Msg_801BAB1C *m);
void TObjPlayer__sub_801C18E0(void *);
void init_set_position_packet__10TObjPlayerFPv(void *);
f32 fn_801C19A4(void *);
s32 TWindowDuelResult__sub_801C19AC(void *);
M2C_UNK TObjPlayer__sub_801C19C8(void *, f32);
int TLobby__sub_801C19D0(void*);
M2C_UNK fn_801C19D8(void *, int);
void fn_801C19E0(void *, s32);
M2C_UNK fn_801C19E8(void *);
M2C_UNK fn_801C19F4(void *);
void TObjPlayer__sub_801C1A00(void *);
s32 is_item_equipped(int);
s32 TObjPlayer__sub_801C1AC8(void *);
M2C_UNK TObjPlayer__sub_801C1B0C(void *, int);
void set_flags_bit2__10TObjPlayerFPv(s32);
int set_flags_bit1__10TObjPlayerFPv(void*);
int clear_flag_1_at_1c__10TObjPlayerFPv(void*);
M2C_UNK fn_801C1B88(s32);
f32 get_lock_target_distance_sq(s32, u32);
u16 get_lock_target_id(s32);
M2C_UNK fn_801C1BA0();
s32 handle_input_forward__20TWindowActionPaletteFPv(void *);
s32 is_action_channel_active(s32, s32);
M2C_UNK set_palette_entry__20TWindowActionPaletteFiiiii(s32, s32, s32, s32, s32);
M2C_UNK set_slot_by_index__20TWindowActionPaletteFiiii(s32, s32, s32, s32);
M2C_UNK TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
M2C_UNK get_entry_by_index__20TWindowActionPaletteFPvi(s32, s32);
M2C_UNK get_slot_type_for_index__20TWindowActionPaletteFPvi(s32, s32);
s32 fn_801C1E44(s32);
s32 fn_801C1E48(s32);
s32 test_photon_blast_modifier(s32);
M2C_UNK fn_801C1E74(s32);
M2C_UNK fn_801C1EA4(s32);
M2C_UNK fn_801C1EC4(s32);
M2C_UNK fn_801C1EF4(s32);
void set_photon_blast_kind(void *, s16);
M2C_UNK fn_801C1F1C(s32);
s32 TObjPlayer__sub_801C1F50(s32);
s32 TObjPlayer__sub_801C2044(s32);
TItemData* TObjPlayer__sub_801C2058(DeathDropRecord*);
void set_field4__10TObjPlayerFPvi(DeathDropRecord*,s32);
void* init_c2098_return_self__10TObjPlayerFPv(void*);
void init_player_telepipe_record(void *);
s16 TObjPlayer__sub_801C2114(void);
u8 get_field_5__10TObjPlayerFPv(s32);
u8 get_byte_4__10TObjPlayerFPv(s32);
u8 TObjPlayer__sub_801C212C(s32);
u8 TObjPlayer__sub_801C2134(s32);
u8 get_team_id__10TObjPlayerFPv(s32);
u8 get_char_class__10TObjPlayerFPv(s32);
s32 get_level_row_exp_threshold();
s32 unpack_u32_hi__10TObjPlayerFPv(void *);
s32 unpack_u32_lo__10TObjPlayerFPv(void *);
s8 TObjPlayer__sub_801C21AC(void *);
s8 TObjPlayer__sub_801C21B4(void *);
s8 TObjPlayer__sub_801C21BC(void *);
M2C_UNK TLobby__sub_801C2678();
void fn_801C5420(void *, s32);
int fn_801C543C(void*);
s32 are_trap_counts_full(void *, void *, int);
M2C_UNK refill_trap_counts(void *, s32, s32);
void TObjPlayer__sub_801C5780(void *, s32, s32);
M2C_UNK update_player_appear_fade(void *);
M2C_UNK enter_battle_state__10TObjPlayerFPv(s32);
s32 write_ids__10TObjPlayerFPv(void *);
s32 save_render_material_state(void *);
int reset_ring__10TObjPlayerFPv(void*);
int clear_target_lock__10TObjPlayerFPv(void*);
M2C_UNK update_target_lock__10TObjPlayerFii(s32, s32);
s32 decrement_clamp__10TObjPlayerFPvi(void *, s32);
M2C_UNK copy_offset_position__10TObjPlayerFPvPv(void *, void *);
M2C_UNK calc_pos_delta__10TObjPlayerFPvPvPv(void *, void *, void *);
M2C_UNK init_shield_params__10TObjPlayerFPvi(void *, void *, void *, int, int);
M2C_UNK set_params__10TObjPlayerFPvPvPviPv(void *, void *, void *, int, int);
M2C_UNK set_arrival_override_pos(u16, int, int);
void create__15TPlyOnCountOverFPvPvPv(s16, s32, void (*)(void));
void new_child_object__10TObjPlayerFi(s32);
u8 * get_slot_value__10TObjPlayerFPvi(void *, s32);
M2C_UNK update_player_scale_camera(s32);
s32 request_player_size_restore(void *);
u32 create_lobby_font_for_player__10TObjPlayerFsc(s32 a0 = 0, s32 a1 = 0);
s32 get_contact_surface_type(void *);
M2C_UNK update_lobby_font__10TObjPlayerFi(void *);
s32 can_guard__10TObjPlayerFPv(s32);
s32 get_current_target_id__10TObjPlayerFv();
s32 update_photon_blast_state__10TObjPlayerFv();
s32 release_all_players_control_lock();
s32 check_conditions__10TObjPlayerFi(void *, s16);
s32 try_camera_action__10TObjPlayerFii(void *, s16);
s32 check_mode_action__10TObjPlayerFii(void *, s16);
s16 TObjPlayer__sub_801CFBFC(void *);
s32 get_idle_animation__10TObjPlayerFPv(void *);
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
void run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
s32 insert_item_node__10TObjPlayerFiiiii(int, void *, void *, void *, int);
void create_drop_nodes__9TItemListFPvPvPvPvi(u8*,DeathItemPosition*,TObjPlayer*,DeathDropRecord*,s32);
s32 check_player_action_allowed();
s32 TObjPlayer__sub_801D4368(void * a0 = 0);
void TObjPlayer__sub_801D47EC(void *, s32, s32);
s32 run_state_query__10TObjPlayerFPvi(s32, void *);
void update_inventory_item__10TObjPlayerFPviiiii(void *, void *, int, void *, int, int);
M2C_UNK TObjPlayer__sub_801D49F4(s32, void *, s32, s32, void *);
M2C_UNK use_item__6TLobbyFiiii(s32, void *, s32, s32, void *);
void TLobby__sub_801D4C28(s32, Pl_801B0B88 *, s32, s32);
void set_globals_and_update__6TLobbyFPvii(s32, Pl_801B0B88 *, s32);
s32 set_globals_and_notify__6TLobbyFPvii(u8*,TObjPlayer*,DeathDropRecord*);
s32 count_items_by_id__10TObjPlayerFPvi(int, void *);
u32 find_first_inventory_entry__10TObjPlayerFPvi(int, void *);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(s32, s8 *);
M2C_UNK destroy_subobjects__10TObjPlayerFPvi(u32, void *);
u32 start_inventory_update__10TObjPlayerFPvi(s32, s32);
u8 * TPlyItem__ct(void *, void *);
u32 get_owner_if_alive__10TObjPlayerFPv();
M2C_UNK set_field_1c__10TObjPlayerFPvi(void *, void *);
u8 * __ct__9TItemListFv(void *, void *);
s32 reinit_photon_blast_gauge(void *);
s32 is_ready__15TFontSmallLobbyFPv(s32);
M2C_UNK reset_targets__15TFontSmallLobbyFi(s32);
M2C_UNK draw_party_label__15TFontSmallLobbyFiUis(s32, s32, s32);
s32 update_if_ready__15TFontSmallLobbyFPv(void *);
s32 accumulate_damage_stats(s32, s32, s32);
s32 decrement_timer__10TObjPlayerFPv(void *);
void update_all_children__6TLobbyFPv(void *);
s32 TObjPlayer__sub_801D6D28(M2C_UNK *);
s32 get_validated_array_value(M2C_UNK *, s32);
u8 fn_801D6DB0(M2C_UNK *);
s8 TLobby__sub_801D6DDC(M2C_UNK *);
s16 clamp_player_index__6TLobbyFPv(M2C_UNK *);
u8 get_clamped_level__6TLobbyFPv(void *);
s16 clamp_value_below_200__6TLobbyFPv(void *);
u8 TLobby__sub_801D6F94(M2C_UNK *);
u8 clamp_value_below_2__6TLobbyFPv(M2C_UNK *);
u8 TLobby__sub_801D6FFC(M2C_UNK *);
u8 normalize_battle_rule_value__6TLobbyFPv(M2C_UNK *);
u8 normalize_battle_rule_value_b__6TLobbyFPv(M2C_UNK *);
u8 clamp_rule_value_2__6TLobbyFPv(M2C_UNK *);
u8 TLobby__sub_801D7100(M2C_UNK *);
u8 fn_801D7134(M2C_UNK *);
u8 fn_801D7168(M2C_UNK *);
u8 fn_801D719C(M2C_UNK *);
u8 fn_801D71D0(M2C_UNK *);
u8 fn_801D7204(M2C_UNK *);
u8 get_rule_field_0__6TLobbyFPv(M2C_UNK *);
M2C_UNK update_party_cursors__10TObjPlayerFii(s32, s32);
s32 get_guild_return_yaw__10TObjPlayerFv(void *);
s32 get_guild_return_position__10TObjPlayerFPv(void *);
s32 get_hospital_yaw__10TObjPlayerFv(void *);
s32 get_hospital_position__10TObjPlayerFPv(void *);
u8 * TObjPlayer__sub_801D8DCC();
s32 get_footstep_floor_index__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801D91B8(void *, void *);
s32 get_current_state_field__10TObjPlayerFv(s32, s32);
s32 get_class_state_field__10TObjPlayerFii(void *, s32);
s32 get_ply_level_table_row(s32, s32);
s32 get_class_attack_template(void *);
s32 get_class_defense_template();
void * get_class_stat_caps();
s32 get_class_stat_entry__10TObjPlayerFPv(void *);
f32 get_tp_class_factor__10TObjPlayerFPv();
f32 get_class_hp_factor__10TObjPlayerFPv(s32);
f32 get_class_technique_boost(s32, s32);
void split_capped_value__10TObjPlayerFUcPvPv(u8, void *, void *);
void update_all_units__10TObjPlayerFii(void *, u8);
void level_up_all_techniques__10TObjPlayerFPvi(void *, u8);
void set_all_technique_levels__10TObjPlayerFPvPv(void *, s32);
void copy_all_technique_entries__10TObjPlayerFPvPv(void *, s32);
s32 reset_slots__10TObjPlayerFPv(void *);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
s32 player_auxiliary_surfaces_enabled();
s32 is_boss_area();
s32 get_global_state__14TOKeyMachine01Fv();
int is_item_area_enabled(void);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 get_player_ctrl_field__6TSceneFUs(u16);
s32 get_player_floor__6TLobbyFi(s32);
s32 get_floor_map_terrain(int);
M2C_UNK TMedicalCenterMes__ct(void *, void *, void *);
M2C_UNK play_sound_effect(s32, s32, M2C_UNK, M2C_UNK);
void set_area__6TLobbyFPvi(void *, int, int);
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK text_builder_append(M2C_UNK *);
M2C_UNK text_builder_reset();
u32 __nw__7TObjectFUl(M2C_UNK);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK set_parent__7TObjectFP7TObject(void *, void *);
u8 * __ct__7TObjectFP7TObject(void *, void *);
void construct_actor_light_task(void *, Color_801B6964 *, Vec_801B6964 *, s32, s32, s32, f32);
M2C_UNK spawn_effect__11TBoss4Type3Fsss(M2C_UNK, M2C_UNK, s16);
void TLobby__sub_8024AC20(s32);
M2C_UNK create_level_up_window__11TWindowCtrlFii(void *, void *);
M2C_UNK init_all__11TWindowCtrlFPvPv(M2C_UNK, M2C_UNK);
void dispatch_to_child__11TWindowCtrlFiPv(u16, s32);
u32 TWindowReturnCity__ct(u32, s32, u16);
M2C_UNK clear_flag_bit0__12TCharaMakingFv();
M2C_UNK enable_making__12TCharaMakingFv();
s32 is_state_active__14TOKeyMachine01Fv();
s32 render_player_marker__12TObjEneReconFUsi(u16, M2C_UNK);
M2C_UNK restore_render_scissor(M2C_UNK);
void copy_lobby_header__10TObjPlayerFPvi(Rec_801B09A4 *, Pl_801B0B88 *);
void enable_foot_stamp__10TObjPlayerFii(void *, void *);
void clear_foot_stamp__10TObjPlayerFii(void *, void *);
M2C_UNK get_battle_ctrl_default__6TLobbyFPv();
s32 get_party_yaw();
s32 get_party_position();
s32 TNpcPlayer__sub_8034DE40();
s32 get_lobby_entry_ptr__10TNpcPlayerFv();
M2C_UNK apply_to_players__10TNpcPlayerFiPvi(s32, int, int);
M2C_UNK send_inter_level_warp_all__10TNpcPlayerFi(M2C_UNK);
s32 get_target_field_1c__10TObjPlayerFPv(void *);
f32 get_attached_float_24__10TObjPlayerFPv(void *);
s32 try_ground_action__10TObjPlayerFPvi(s32, s32);
s32 check_action_usable__10TObjPlayerFPvi(void *, s32);
void TObjPlayer__sub_80354BE4(s32);
s32 TObjPlayer__sub_80354D5C(s32);
s32 TObjPlayer__sub_80354E7C();
s32 validate_6x0E_clear_negative_status_effects(void *);
s32 fn_8036B748(void *);
s32 fn_8036B770(void *);
s32 validate_6xA1_revive_player_v3(void *);
s32 validate_6x31_use_medical_center(void *);
s32 validate_6x30_change_player_level(Pkt_801B6A5C *);
s32 validate_6x2F_change_player_hp(Pkt_801B1D8C *);
s32 validate_6x2E_set_or_clear_player_flags(void *);
s32 validate_6x2D_release_hold(void *);
s32 validate_6x2C_impose_hold(Pkt_801B5254 *);
s32 validate_6x2B_create_inventory_item(void *);
s32 validate_6x2A_drop_item(void *);
s32 validate_6xAC(void *);
s32 validate_6x29_delete_inventory_item(void *);
s32 validate_6x28_feed_mag(void *);
s32 validate_6x27_use_item(void *);
s32 validate_6x26_unequip_item(void *);
s32 validate_6x25_equip_item(void *);
s32 validate_6x24_teleport_player(Pkt_801B1EE0 *);
s32 validate_6xAE_set_animation_state(void *);
s32 validate_6x21_inter_level_warp(void *);
s32 validate_6x20_set_position(void *);
s32 validate_6x1F_set_player_floor(void *);
s32 validate_6x82_enable_drop_weapon_on_death(void *);
s32 validate_6x81_disable_drop_weapon_on_death(void *);
s32 validate_6x7B_disable_stealth_suit_effect(void *);
s32 validate_6x7A_enable_stealth_suit_effect(void *);
s32 validate_6x90_set_player_battle_team(void *);
s32 validate_6x8F_add_battle_damage_scores(Pkt_801B01AC *);
s32 validate_6x1C_disable_pk_mode_for_player(void *);
s32 validate_6x1B_enable_pk_mode_for_player(void *);
s32 validate_6x9B_level_up_all_techniques(void *);
void create__17TObjEneHoldEffectFPvPvPv(s32, s16, s16);
void __construct_array(void *, void *(*)(void *), void *, u32, u32);
s32 rand();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
M2C_UNK matrix_mult_vec(int, void *, void *);
f32 vec3_dot(Vec_801B5DDC *, Vec_801B5DDC *);
void scale_matrix(int, f32, f32, f32);
int vector_length(void*);
M2C_UNK translate_matrix_vec3(M2C_UNK, s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
void rotate_matrix_z(int, s32);
M2C_UNK copy_matrix__10TObjPlayerFUiUi(int, void *);
void translate_matrix(int, f32, f32, f32);
void rotate_matrix_x(int, s32);
M2C_UNK concat_matrix__11TCameraCtrlFUiUi(int, int);
M2C_UNK push_matrix_from(int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(void *);
s32 set_some_id__FUl(int);
M2C_UNK set_chunk_material_override_pair(int, int);
M2C_UNK set_chunk_material_color(void *);
s32 draw_chunk_object(s32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();

extern s32 TOMineTrap__data_805D3080;
extern s32 TObjPlayer__player_set_class_name;
extern const f32 TObjPlayer__data_805DC278;
extern f32 TObjPlayer__data_805DC28C;
extern f32 TObjPlayer__data_805DC294;
extern const f32 TObjPlayer__data_805DC2BC;
extern RecoveredGlobal_802A1154_main_task TObjPlayer__sub_801BEABC;
extern const Vec_801B92EC lbl_80446F2C;
extern u8 lbl_80446F50[];
extern u8 lbl_80446F5C[];
extern const f64 lbl_80446F68;
extern u8 main_phase_state[];
extern Vec_801B6964 lbl_8050BEE0[];
extern DeathItemPosition lbl_8050BF60;
extern Color_801B6964 lbl_8050BFE0[];
extern void *player_slot_table[];
extern u8 lobby_rule_settings[];
extern ReturnLobby lbl_80515BA0;
extern s32 lbl_805D2B28;
extern s32 lbl_805D3530;
extern s32 actor_frame_tick;
extern s32 lbl_805D55C0;
extern s32 lobby_player_count;
extern s32 shared_state_flags;
extern Rec_801B09A4 *lobby_char_slot_array;
extern M2C_UNK lbl_805DC27C;
extern f32 lbl_805DC280;
extern f32 lbl_805DC284;
extern f32 lbl_805DC288;
extern const f32 lbl_805DC290;
extern const f32 lbl_805DC298;
extern const f32 lbl_805DC29C;
extern const f32 lbl_805DC2B0;
extern const f32 lbl_805DC2C0;
extern const f32 lbl_805DC2C4;
extern const f32 lbl_805DC2C8;
extern const f32 lbl_805DC2CC;
extern const f32 lbl_805DC2D0;
extern const f32 lbl_805DC2D4;
extern M2C_UNK main_task[];
extern s32 some_id_805c6f74;
extern RecoveredGlobal_8000F7FC_lbl_80515F48 start_freeze_self__10TObjPlayerFPv;
extern u32 tl_03;
extern s32 tl_05;
extern List_801BC068 *tl_06;
extern s32 tl_07;

extern "C" {
void cancel_status_effects__10TObjPlayerFPv(Pl_801B0B88 *p_);
}

extern "C" {
s32 TObjPlayer__sub_801BE2C8(void *);
void TObjPlayer__sub_801BE2C0(void *, s32);
extern "C" {
s32 get_item_field_6__10TObjPlayerFPv(Pl_801B0B88 *);
}

s32 TObjPlayer__sub_801AF290(void *p) {
    s32 v;
    s32 r = 0;
    s32 cur = TObjPlayer__sub_801BE2C8(p);
    v = cur + 1;
    if (v >= ((s32 (*)(void *, s32))calc_stat_threshold__10TObjPlayerFPv)(p, cur)) { v = 0; r = 1; }
    TObjPlayer__sub_801BE2C0(p, v);
    return r;
}
}
s32 calc_stat_threshold__10TObjPlayerFPv(void *arg0) {
    s32 var_r31;
    var_r31 = ((VObj_801AF2F0*)arg0)->m14();
    if (var_r31 > 0x63) {
        var_r31 = 0x63;
    }
    if (TObjPlayer__sub_801BE2D0(arg0) != 0) {
        var_r31 *= lbl_80446F38;
        return 0x5A - var_r31;
    }
    var_r31 *= lbl_80446F40;
    return 0x3C - var_r31;
}

void update_facing_from_lock__10TObjPlayerFPv(void *arg0) {
    if (((VObj_801AF3C4 *)M2C_FIELD(arg0, void **, 0x380))->m8() != 0) {
        set_field_dc__10TObjPlayerFPvi(arg0, ((VObj_801AF3C4 *)M2C_FIELD(arg0, void **, 0x380))->m75(1));
        return;
    }
    set_field_dc__10TObjPlayerFPvi(arg0, ((VObj_801AF3C4 *)M2C_FIELD(arg0, void **, 0x380))->m75(0));
}

void TObjPlayer__sub_801AF454(O_801AF454 *self, s32 x) {
    if (self->obj) {
        self->obj->m3(x);
    }
}

f32 get_battle_value__10TObjPlayerFiii(s32 arg0, int arg1, s32 arg2) {
    if (((u32 (*)(u16))get_player_by_client_id)((u16)arg1) == 0U) {
        return (*(f32 *)&TObjPlayer__data_805DC278);
    }
    return get_class_technique_boost(((s32 (*)(s32))get_class_index__10TObjPlayerFPv)(arg0), arg2);
}

void handle_6x9B_level_up_all_techniques(void *arg0) {
    Msg_801CD6BC m;
    u8 *p;
    init_packet_6x9b_level_up__15TFontSmallLobbyFPv(&m);
    TFontSmallLobby__sub_801C01DC(&m, arg0);
    TFontSmallLobby__sub_801C01BC(&m);
    if (validate_6x9B_level_up_all_techniques(&m) != 0) {
        p = ((u8 * (*)(u16))get_player_by_client_id)(m.id);
        if (p != NULL) {
            level_up_all_techniques__10TObjPlayerFPvi(p + 0x428, m.level);
        }
    }
}

void TObjPlayer__sub_801AF554(void *arg0, s8 arg1) {
    L_801AF554 sp8;
    if (arg0 == 0 || ((s32 (*)(void *))obj_isState2_324)(arg0) == 0) {
        init_packet_6x9b_level_up__15TFontSmallLobbyFPv(&sp8);
        sp8.f2 = obj_getField1c(arg0);
        sp8.f4 = arg1;
        TFontSmallLobby__sub_801C029C(&sp8);
    }
}

void play_voice_pair__10TObjPlayerFPv(void *arg0) {
    set_hp_clamped__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0x2B8));
    set_facing__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0x2BA));
}

void TObjPlayer__vt62(void* p) { ((int (*)(void*, void*))obj_clearFlags30)(p, (void*)2048); ((int (*)(void*))update_rotation__10TObjPlayerFPv)(p); }

u32 get_or_create_lobby_font__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    u32 temp;

    if (((s32 (*)(void))is_lobby_floor_15__15TFontSmallLobbyFv)() == 0) {
        return 0U;
    }
    temp = M2C_FIELD(arg0, u32 *, 0x3B8);
    if (temp == 0U) {
        M2C_FIELD(arg0, u32 *, 0x3B8) = create_lobby_font_for_player__10TObjPlayerFsc(obj_getField1c(arg0), arg1);
    } else {
        TObjPlayer__sub_801BF40C(temp, arg1);
    }
    return M2C_FIELD(arg0, u32 *, 0x3B8);
}

int TObjPlayer__sub_801AF694(void* p) { return fn_801C543C((char*)p + 0x7c4); }

s32 is_action_available__10TObjPlayerFi(s32 arg0) {
    if ((reset_key_machine_state__10TObjPlayerFv() == 0) || (is_boss_area() != 0)) {
        return 0;
    }
    if (is_camera_ready__10TObjPlayerFv() != 0) {
        return (u32)__cntlzw(obj_testFlags30(arg0, 0x20000)) >> 5;
    }
    return is_ready__10TObjPlayerFPv(arg0) != 0 ? 1 : 0;
}

s32 are_traps_full__10TObjPlayerFPv(V_801AF734 *arg0) {
    return are_trap_counts_full((u8 *)arg0 + 0x7C4, arg0->m14(), ((s32 (*)(void *))get_class_index__10TObjPlayerFPv)(arg0)) != 0 ? 1 : 0;
}

s32 is_alive_and_ready__10TObjPlayerFi(s32 arg0) {
    if ((((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() == 0) && (is_ready__10TObjPlayerFPv(arg0) != 0)) {
        return 1;
    }
    return 0;
}

void refill_traps__10TObjPlayerFPv(TObjPlayer_801AF7E0 *self) {
    refill_trap_counts(self->slot, self->v14(), ((s32 (*)(void))get_class_index__10TObjPlayerFPv)());
}

void update_movement_by_screen__10TObjPlayerFv(void) {
    if (is_single_screen__10TObjPlayerFv() != 0) {
        get_battle_ctrl_default__6TLobbyFPv();
        return;
    }
    TLobby__sub_801C2678();
}

struct Ent_801AF868 { u16 id; s16 val; u32 pad; };
Ent_801AF868 *TWindowDuelResult__sub_801C257C();
Ent_801AF868 *TPlayerBattleCtrl4P__sub_80310300();

s16 TObjPlayer__sub_801AF868(void *arg0) {
    s32 id;
    Ent_801AF868 *e;
    int i;

    id = obj_getField1c(arg0);
    if (is_single_screen__10TObjPlayerFv() != 0) {
        e = TPlayerBattleCtrl4P__sub_80310300();
    } else {
        e = TWindowDuelResult__sub_801C257C();
    }
    for (i = 0; i < 4; i++, e++) {
        if ((u16)id == e->id) {
            return e->val;
        }
    }
    return -1;
}

void set_flags_a00__10TObjPlayerFPv(void *arg0) {
    if (arg0 != NULL) {
        obj_setFlags30(arg0, 0xA00);
    }
}

void TObjPlayer__sub_801AF904(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x24);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801BF414(temp_r3, arg0, ((s32 (*)(s32))obj_getField1c)(arg0), (void (*)(int))set_flags_a00__10TObjPlayerFPv);
    }
}

void clamp_stats__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r0_4;
    s16 temp_r0_5;
    s16 temp_r0_6;
    s16 temp_r0_7;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 temp_r3_3;
    s16 temp_r3_4;
    s16 temp_r3_5;
    s16 temp_r3_6;
    s16 temp_r3_7;
    s16 temp_r4;
    s32 temp_r27;
    s32 temp_r28_2;
    s32 temp_r28_3;
    s32 temp_r3_8;
    s32 temp_r4_2;
    void *temp_r28;
    void *temp_r31;

    temp_r31 = get_quest_id__12TQuestListVMFPv();
    ((M2C_UNK (*)(s32))get_class_index__10TObjPlayerFPv)(arg0);
    temp_r28 = get_class_stat_caps();
    temp_r4 = M2C_FIELD(temp_r31, s16 *, 0);
    if (temp_r4 < 0) {
        M2C_FIELD(arg1, s16 *, 0) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0 = M2C_FIELD(temp_r28, s16 *, 0);
        if (temp_r4 > temp_r0) {
            M2C_FIELD(arg1, s16 *, 0) = temp_r0;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 0) = temp_r4;
        }
    }
    temp_r3 = M2C_FIELD(temp_r31, s16 *, 2);
    if (temp_r3 < 0) {
        M2C_FIELD(arg1, s16 *, 2) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_2 = M2C_FIELD(temp_r28, s16 *, 2);
        if (temp_r3 > temp_r0_2) {
            M2C_FIELD(arg1, s16 *, 2) = temp_r0_2;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 2) = temp_r3;
        }
    }
    temp_r3_2 = M2C_FIELD(temp_r31, s16 *, 4);
    if (temp_r3_2 < 0) {
        M2C_FIELD(arg1, s16 *, 4) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_3 = M2C_FIELD(temp_r28, s16 *, 4);
        if (temp_r3_2 > temp_r0_3) {
            M2C_FIELD(arg1, s16 *, 4) = temp_r0_3;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 4) = temp_r3_2;
        }
    }
    if (M2C_FIELD(temp_r31, s16 *, 6) < 0) {
        M2C_FIELD(arg1, s16 *, 6) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    }
    temp_r3_3 = M2C_FIELD(temp_r31, s16 *, 6);
    temp_r0_4 = M2C_FIELD(temp_r28, s16 *, 6);
    if (temp_r3_3 > temp_r0_4) {
        M2C_FIELD(arg1, s16 *, 6) = temp_r0_4;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        M2C_FIELD(arg1, s16 *, 6) = temp_r3_3;
    }
    temp_r3_4 = M2C_FIELD(temp_r31, s16 *, 8);
    if (temp_r3_4 < 0) {
        M2C_FIELD(arg1, s16 *, 8) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_5 = M2C_FIELD(temp_r28, s16 *, 8);
        if (temp_r3_4 > temp_r0_5) {
            M2C_FIELD(arg1, s16 *, 8) = temp_r0_5;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 8) = temp_r3_4;
        }
    }
    temp_r3_5 = M2C_FIELD(temp_r31, s16 *, 0xA);
    if (temp_r3_5 < 0) {
        M2C_FIELD(arg1, s16 *, 0xA) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_6 = M2C_FIELD(temp_r28, s16 *, 0xA);
        if (temp_r3_5 > temp_r0_6) {
            M2C_FIELD(arg1, s16 *, 0xA) = temp_r0_6;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 0xA) = temp_r3_5;
        }
    }
    temp_r3_6 = M2C_FIELD(temp_r31, s16 *, 0xC);
    if (temp_r3_6 < 0) {
        M2C_FIELD(arg1, s16 *, 0xC) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_7 = M2C_FIELD(temp_r28, s16 *, 0xC);
        if (temp_r3_6 > temp_r0_7) {
            M2C_FIELD(arg1, s16 *, 0xC) = temp_r0_7;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 0xC) = temp_r3_6;
        }
    }
    temp_r3_7 = M2C_FIELD(temp_r31, s16 *, 0xE);
    if (temp_r3_7 < 0) {
        M2C_FIELD(arg1, s16 *, 0xE) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        M2C_FIELD(arg1, s16 *, 0xE) = temp_r3_7;
    }
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(temp_r31, f32 *, 0x10);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(temp_r31, f32 *, 0x14);
    temp_r28_2 = M2C_FIELD(temp_r31, s32 *, 0x18);
    temp_r27 = get_max_level__10TObjPlayerFv();
    if (temp_r28_2 < 0) {
        M2C_FIELD(arg1, s32 *, 0x18) = 0;
        set_flag_41c_bit1__10TObjPlayerFPv(arg0);
    } else if (temp_r28_2 > temp_r27) {
        M2C_FIELD(arg1, s32 *, 0x18) = temp_r27;
        set_flag_41c_bit1__10TObjPlayerFPv(arg0);
    } else {
        M2C_FIELD(arg1, s32 *, 0x18) = temp_r28_2;
    }
    temp_r28_2 = M2C_FIELD(temp_r31, s32 *, 0x1C);
    temp_r3_8 = get_current_state_field__10TObjPlayerFv(((M2C_UNK (*)(s32))get_class_index__10TObjPlayerFPv)(arg0), temp_r27);
    if (temp_r28_2 < 0) {
        M2C_FIELD(arg1, s32 *, 0x1C) = 0;
        check_flag_at_41c__10TObjPlayerFPv(arg0);
    } else if (temp_r28_2 > temp_r3_8) {
        M2C_FIELD(arg1, s32 *, 0x1C) = temp_r3_8;
        check_flag_at_41c__10TObjPlayerFPv(arg0);
    } else {
        M2C_FIELD(arg1, s32 *, 0x1C) = temp_r28_2;
    }
    temp_r4_2 = M2C_FIELD(temp_r31, s32 *, 0x20);
    if (temp_r4_2 < 0) {
        M2C_FIELD(arg1, s32 *, 0x20) = 0;
        check_stat_flag_41c__10TObjPlayerFPv(arg0);
        return;
    }
    if (temp_r4_2 > 0xF423F) {
        M2C_FIELD(arg1, s32 *, 0x20) = 0xF423F;
        check_stat_flag_41c__10TObjPlayerFPv(arg0);
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x20) = temp_r4_2;
}

f32 TObjPlayer__vt20(s32 arg0, s32 arg1, f32 farg0) {
    if (obj_isState2_324() != 0) {
        return (*(f32 *)&TObjPlayer__data_805DC278);
    }
    return receive_physical_attack__10TObjPlayerFv(arg0, arg1, farg0);
}

s16 get_handle_value__10TObjPlayerFPv(void* p) { return (s16)(sub_802a7290_fwd__10TObjPlayerFPv(*(void**)((char*)p + 0x380))); }

void set_action_provider_variant__10TObjPlayerFPvs(Player_801AFCF4 *arg0, s16 arg1) {
    if (arg1 != ((s32 (*)(void *))sub_802a7290_fwd__10TObjPlayerFPv)(arg0->obj) && fn_8000F740(main_phase_state) != 0) {
        arg0->obj->m4(((u16 (*)(void *))obj_getField1c)(arg0), ((s32 (*)(void *))has_valid_handle__10TObjPlayerFPv)(arg0), arg1);
        apply_motion_entry__10TObjPlayerFPv(arg0);
    }
}

s32 get_map_id__13TRaderMapCoreFPv(void* p) { return *(s32*)((char*)p + 0x3d0); }

s32 TObjPlayer__sub_801AFD8C(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3BC);
    if ((temp_r3 < 0) || (temp_r3 >= 5)) {
        return 1;
    }
    return temp_r3;
}

s32 get_move_mode__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x890); }

s8 get_class_index__10TObjPlayerFPv(u8 *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0x88D);
}

s8 TObjPlayer__sub_801AFDBC(s8 arg0) {
    if ((arg0 < 0) || (arg0 >= 0xC)) {
        return 0;
    }
    return arg0;
}

s32 check_technique_castable__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    if ((((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() != 0) || (is_camera_mode_active__10TObjPlayerFv() != 0) || (is_boss_area() != 0)) {
        ((s32 (*)(s32))check_technique_flag__10TObjPlayerFPv)(arg0);
        return 0;
    }
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 0:
    case 15:
    case 18:
        ((s32 (*)(s32))check_technique_flag__10TObjPlayerFPv)(arg0);
        return 0;
    default:
        ((s32 (*)(s32))has_item_flag_4096__10TObjPlayerFPv)(arg0);
        return 1;
    }
}

u8 is_key_machine_ready__10TObjPlayerFv(void) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    var_r0 = 0;
    if ((temp_r3 == 0) || (temp_r3 == 0x12)) {
        var_r0 = 1;
    }
    return (u8) var_r0;
}

u8 is_volopt_phase_final__10TObjPlayerFv(void) {
    return (u8) (get_field_3e0__12TBoss3VoloptFPv() == 0xF);
}

u8 is_lobby_floor_15__15TFontSmallLobbyFv(void) {
    return (u8) (get_global_state__14TOKeyMachine01Fv() == 0xF);
}

u8 is_on_current_floor__10TObjPlayerFi(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    temp_r31 = get_current_floor();
    temp_r3 = ((s32 (*)(s32))get_field_3e4__10TObjPlayerFPv)(arg0);
    return (u8) (temp_r3 == temp_r31);
}

void sync_current_floor__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E4) = get_current_floor();
}

void sync_current_area__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E0) = get_key_machine_global_state__10TObjPlayerFPv((void*)(arg0));
}

int get_key_machine_global_state__10TObjPlayerFPv(void* p) { return ((int)get_global_state__14TOKeyMachine01Fv()); }

s32 TObjPlayer__sub_801AFFD0(u8 *arg0) {
    f32 v;

    v = (f32)TWindowDuelResult__sub_801C19AC(arg0 + 0x78C);
    v -= (f32)TWindowDuelResult__sub_801C19AC(arg0 + 0x77C);
    v += (f32)TWindowDuelResult__sub_801C19AC(arg0 + 0x75C);
    v -= (f32)TWindowDuelResult__sub_801C19AC(arg0 + 0x76C);
    if (obj_testFlags30((s32)arg0, 0x800) == 0) {
        v += (f32)obj_getPtr2B0_20(arg0) * fn_801C19A4(arg0 + 0x79C);
    }
    return (s32)v;
}

void TObjPlayer__sub_801B0124(u8 *self, s32 arg1) {
    if (((s32 (*)(s32))is_locally_controlled__10TObjPlayerFPv)((s32) self) == 0 || ((u8 (*)(void *))TLobby__sub_801D6FFC)(lobby_rule_settings) != 2 || ((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() == 0) {
        return;
    }
    TObjPlayer__sub_801C19C8(self + 0x79C, (f32) arg1);
}

void handle_6x8F_add_battle_damage_scores(s32 arg0) {
    Pkt_801B01AC pkt;
    u8 *player;
    u8 *target;
    u8 *other;
    init_packet_6x8f_battle_damage__15TFontSmallLobbyFPv(&pkt);
    TFontSmallLobby__sub_801C030C(&pkt, arg0);
    bswap_battle_damage_packet__15TFontSmallLobbyFPv(&pkt);
    if (validate_6x8F_add_battle_damage_scores(&pkt) == 0) {
        return;
    }
    player = ((u8 * (*)(u16))get_player_by_client_id)(pkt.client);
    if (player == NULL) {
        return;
    }
    target = find_entity_by_id(pkt.target);
    if (target == NULL) {
        return;
    }
    if ((u16)((s32 (*)(u8 *))obj_getField1c)(target) != (u16)((s32 (*)(u8 *))obj_getField1c)(player)) {
        accumulate_damage_stats((s32)(player + 0x78C), (s32)target, pkt.amount);
    }
    if (obj_testFlags30((s32)target, 0x10000000) == 0) {
        return;
    }
    other = ((u8 * (*)(u16))get_player_by_client_id)((u16)((s32 (*)(u8 *))obj_getField1c)(target));
    if (other != NULL) {
        accumulate_damage_stats((s32)(other + 0x77C), (s32)player, pkt.amount);
    }
}

void apply_camera_shake__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    if ((((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() != 0) && (obj_testFlags30(arg1, 0x10000000) == 0) && (((s32 (*)(s32))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0)) {
        accumulate_damage_stats(arg0 + 0x78C, arg1, arg2);
    }
}

void handle_6x8E(void) {  }

void record_damage_stats__10TOMineTrapFUiUis(u32 arg0, u32 arg1, s16 arg2) {
  Pkt_801B0300 pkt;
  u32 temp_r3;
  u32 obj;
  if (((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() != 0)
  {
    obj = arg1;
    if ((((s32 (*)(u32, s32))check_value_equals__13TQuestColCtrlFPvi)(obj, TOMineTrap__data_805D3080) != 0) && (get_trap_type__10TOMineTrapFPv(obj) != 0xFFFF))
    {
      obj = ((u32 (*)(void))find_entity_by_id)();
    }
    if (((s32 (*)(u32, M2C_UNK))obj_testFlags30)(obj, 0x10000000) == 0)
    {
      if (((s32 (*)(u32))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0)
      {
        ((int (*)(u32, u32, s16)) accumulate_damage_stats)(arg0 + 0x77C, obj, arg2);
      }
    }
    else
      if ((((s32 (*)(u32))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0) && ((arg0 == 0U) || (((s32 (*)(u32))obj_isState2_324)(arg0) == 0)))
    {
      ((int (*)(u32, u32, s16)) accumulate_damage_stats)(arg0 + 0x77C, obj, arg2);
      if (((u16 (*)(u32))obj_getField1c)(obj) != ((u16 (*)(u32))obj_getField1c)(arg0))
      {
        temp_r3 = ((u32 (*)(int))get_player_by_client_id)(((u16 (*)(u32))obj_getField1c)(obj));
        if (temp_r3 != 0U)
        {
          ((int (*)(u32, u32, s16)) accumulate_damage_stats)(temp_r3 + 0x78C, arg0, arg2);
        }
      }
      if (is_final_phase__10TObjPlayerFv() != 0)
      {
        ((M2C_UNK (*)(Pkt_801B0300 *))init_packet_6x8f_battle_damage__15TFontSmallLobbyFPv)(&pkt);
        pkt.a = ((u16 (*)(u32))obj_getField1c)(obj);
        pkt.b = ((u16 (*)(u32))obj_getField1c)(arg0);
        pkt.c = arg2;
        TFontSmallLobby__sub_801C0378(&pkt);
      }
    }
  }
}

int update_trap_sub__10TOMineTrapFPv(void* p) { return ((int (*)(void*))accumulate_damage_stats)((char*)p + 0x76c); }

void draw_player_status(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = ((VObj_801B0520 *)arg1)->m10();
    if (temp_r3 != 0) {
        if (check_value_equals__13TQuestColCtrlFPvi(arg1, lbl_805D3530) != 0) {
            ((M2C_UNK (*)(s32, s32, s32, s32))draw_status_line)(arg0, arg2, temp_r3, ((s32 (*)(void *))TObjPlayer__sub_801AFFD0)(arg1));
            return;
        }
        show_sub_status_window((void *)(arg0), (M2C_UNK *)(arg2), (M2C_UNK *)(temp_r3));
    }
}

void show_sub_status_window(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2) {
    text_builder_reset();
    text_builder_append(arg1);
    text_builder_append(arg2);
    text_builder_append(&lbl_805DC27C);
    init_all__11TWindowCtrlFPvPv(get_shared_text_buffer(), 0x200);
}

void draw_status_line(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2, s32 arg3) {
    text_builder_reset();
    text_builder_append(arg1);
    text_builder_append(arg2);
    text_builder_append(&lbl_805DC27C);
    TWindowSubStatusDisp__sub_80228F5C(arg3);
    text_builder_append(&lbl_805DC27C);
    ((M2C_UNK (*)(void *, M2C_UNK))init_all__11TWindowCtrlFPvPv)(((void * (*)(void))get_shared_text_buffer)(), 0x200);
}

int TObjPlayer__sub_801B066C(void* p) { return TLobby__sub_801C19D0((char*)p + 0x828); }

void handle_6x90_set_player_battle_team(s32 arg0) {
    struct Cmd_801B0690 cmd;
    u8 *p;
    s32 team;
    TFontSmallLobby__sub_801C041C(&cmd);
    TFontSmallLobby__sub_801C03E0(&cmd, (void *) arg0);
    bswap_6x90_set_player_battle_team__15TFontSmallLobbyFPv(&cmd);
    if (validate_6x90_set_player_battle_team(&cmd) == 0) {
        return;
    }
    p = ((u8 * (*)(u16))get_player_by_client_id)(cmd.client);
    if (p == NULL) {
        return;
    }
    team = cmd.team;
    fn_801C19D8(p + 0x828, team);
    if (team == 1) {
        TMainCursor__sub_801540B8((int) p, M2C_FIELD(p, s32 *, 0xA4), 0);
    } else {
        TMainCursor__sub_80154098((int) p, M2C_FIELD(p, s32 *, 0xA4), 0);
    }
}

void check_flag_01000000__10TObjPlayerFPv(void *arg0) {
    check_flag__10TObjPlayerFPvi(arg0, 0x01000000);
}

void set_flag_drop_weapon_on_death__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8011E204(arg0, 0x01000000);
}

void handle_6x82_enable_drop_weapon_on_death(void *arg0) {
    struct pkt_801B1674 pkt;
    TFontSmallLobby__sub_801C0438((M2C_UNK *)(&pkt));
    TLobby__sub_801B07E0((s32)((s32)((s32) &pkt)), (void *)((void *)(arg0)));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x82_enable_drop_weapon_on_death(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.player_id);
        if (p != NULL) {
            set_flag_drop_weapon_on_death__10TObjPlayerFPv((void *)(p));
        }
    }
}

s32 TLobby__sub_801B07E0(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void send_field1c_packet__6TLobbyFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TFontSmallLobby__sub_801C0438((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        TFontSmallLobby__sub_801C044C((M2C_UNK *)&sp8);
    }
}

void disable_drop_weapon_on_death__10TObjPlayerFPv(void *arg0) {
    ((M2C_UNK (*)(void *, M2C_UNK))set_state_flags__10TObjPlayerFPvUi)(arg0, 0x01000000);
}

void handle_6x81_disable_drop_weapon_on_death(void *arg0) {
    struct pkt_801B1674 pkt;
    TFontSmallLobby__sub_801C0480((M2C_UNK *)(&pkt));
    TLobby__sub_801B08F0((s32)((s32)((s32) &pkt)), (void *)((void *)(arg0)));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x81_disable_drop_weapon_on_death(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.player_id);
        if (p != NULL) {
            disable_drop_weapon_on_death__10TObjPlayerFPv((void *)(p));
        }
    }
}

s32 TLobby__sub_801B08F0(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void send_font_state__6TLobbyFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TFontSmallLobby__sub_801C0480((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        send_font_state_msg__15TFontSmallLobbyFPv((M2C_UNK *)&sp8);
    }
}

s32 count_members__6TLobbyFv(void) {
    void **p = player_slot_table;
    s32 n = 0;
    s32 i;
    for (i = 0; i < 12; i++) {
        if (*p) {
            n++;
        }
        p++;
    }
    return n;
}

void TLobby__sub_801B09A4(void) {
    VObj_801B09A4 *players[12];
    s32 i;
    VObj_801B09A4 *p;
    shared_state_flags |= 1;
    for (i = 0; i < 12; i++) {
        players[i] = NULL;
    }
    for (i = 0; i < 12; i++) {
        p = ((VObj_801B09A4 * (*)(s32))get_player_by_client_id)(i);
        if (p != NULL) {
            players[i] = p;
            if (p != NULL) {
                p->m0(1);
            }
        }
    }
    for (i = 0; i < 12; i++) {
        if (players[i] != NULL) {
            create_player_instance__10TObjPlayerFii(i, &lobby_char_slot_array[i]);
            TLobby__sub_8024AC20(i);
        }
    }
    shared_state_flags &= ~1;
}

s32 check_switch_available__6TLobbyFPvi(void *arg0, s32 arg1) {
    if (((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() != 0) {
        if (fn_801D71D0(((M2C_UNK *)&lobby_rule_settings)) == 2) {
            if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
                return 0;
            }
            if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
                return 0;
            }
            if (((u8 (*)(void))get_field_ec__12TOSwitchItemFPv)() == 0) {
                return 0;
            }
            goto block_8;
        }
block_8:
        if (fn_801D719C(((M2C_UNK *)&lobby_rule_settings)) == 1) {
            if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
                return 0;
            }
            if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
                return 0;
            }
            if (((u8 (*)(void))get_field_ec__12TOSwitchItemFPv)() == 2) {
                return 0;
            }
            goto block_15;
        }
        goto block_15;
    }
block_15:
    return 1;
}

void apply_battle_rules_to_players__6TLobbyFv(void) {
    s32 i;
    M2C_UNK *q;
    Pl_801B0B88 *p;
    s32 j;
    s32 lv;
    q = ((M2C_UNK *)&lobby_rule_settings);
    for (i = 0; i < 0xC; i++) {
        p = (Pl_801B0B88 *)((VObj_801B09A4 * (*)(s32))get_player_by_client_id)(i);
        if (p == NULL) {
            continue;
        }
        update_all_children__6TLobbyFPv(p->f754);
        if (get_rule_field_0__6TLobbyFPv(q) == 1) {
            ((void (*)(Pl_801B0B88 *))set_state_flag_6043__10TObjPlayerFPv)(p);
            if (((s32 (*)(Pl_801B0B88 *))is_locally_controlled__10TObjPlayerFPv)(p) != 0) {
                lobby_player_count = 1;
            }
        } else {
            return;
        }
        switch (fn_801D71D0(q)) {
        case 1:
        case 2:
        case 3:
            set_globals_and_update__6TLobbyFPvii(p->fD00, p, 0);
            set_globals_and_update__6TLobbyFPvii(p->fD00, p, 1);
            break;
        }
        switch (fn_801D719C(q)) {
        case 1:
            set_globals_and_update__6TLobbyFPvii(p->fD00, p, 2);
            break;
        }
        if ((j = get_item_field_6__10TObjPlayerFPv(p)) != 0 && get_item_info__10TObjPlayerFiiPv(j, p, 0) == 0) {
            ((void (*)(Pl_801B0B88 *, s32))unequip_item__10TObjPlayerFiPv)(p, j);
        }
        switch (fn_801D7168(q)) {
        case 1:
        case 2:
            set_globals_and_update__6TLobbyFPvii(p->fD00, p, 3);
            break;
        }
        if (fn_801D7134(q) == 1) {
            for (j = 0; j < 4; j++) {
                TObjPlayer__sub_801C5780(p->f7C4, get_validated_array_value(q, j), j);
            }
        }
        switch (TLobby__sub_801D7100(q)) {
        case 2:
            fn_801C19E0(p->f754, fn_801D6DB0(q));
            break;
        }
        switch (clamp_rule_value_2__6TLobbyFPv(q)) {
        case 1:
            TObjPlayer__sub_801BEE2C(p, 0);
            TObjPlayer__sub_801BEE24(p, 0);
            apply_battle_level_reset__10TObjPlayerFv(p, clamp_player_index__6TLobbyFPv(q));
            break;
        }
        lv = TLobby__sub_801D6DDC(q);
        switch (fn_801D7204(q)) {
        case 1:
            copy_all_technique_entries__10TObjPlayerFPvPv(p->f428, 0xFF);
            set_all_technique_levels__10TObjPlayerFPvPv(p->f428, 0xFF);
            break;
        case 2:
            copy_all_technique_entries__10TObjPlayerFPvPv(p->f428, 0x1D);
            update_all_units__10TObjPlayerFii(p->f428, lv);
            break;
        }
        ((void (*)(Pl_801B0B88 *))set_flag_drop_weapon_on_death__10TObjPlayerFPv)(p);
        switch (normalize_battle_rule_value_b__6TLobbyFPv(q)) {
        case 1:
            ((void (*)(Pl_801B0B88 *))disable_drop_weapon_on_death__10TObjPlayerFPv)(p);
            break;
        }
        if (normalize_battle_rule_value__6TLobbyFPv(q) == 1 && ((s32 (*)(Pl_801B0B88 *))is_locally_controlled__10TObjPlayerFPv)(p) != 0) {
            set_flags_bit2__10TObjPlayerFPv(p->f424);
        }
        if (TLobby__sub_801D6FFC(q) != 0) {
            set_meseta__10TObjPlayerFPvi(p, 0);
        }
        if (clamp_value_below_2__6TLobbyFPv(q) == 1) {
            fn_801C5420(p->f7C8, TObjPlayer__sub_801D6D28(q));
        }
        if (TLobby__sub_801D6F94(q) == 1) {
            TLobby__sub_801D4C28(p->fD00, p, 3, 9);
        }
        ((void (*)(Pl_801B0B88 *))check_technique_flag__10TObjPlayerFPv)(p);
        ((void (*)(Pl_801B0B88 *))recover_full__10TObjPlayerFPv)(p);
        cancel_status_effects__10TObjPlayerFPv((Pl_801B0B88 *)(p));
        copy_lobby_header__10TObjPlayerFPvi(&lobby_char_slot_array[i], p);
    }
}

u8 is_technique_ready__8TTecCtrlFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((get_player_count__10TObjPlayerFv() == 1) && (get_rule_field_0__10TObjPlayerFv() == 1)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

s32 TObjPlayer__vt12(void *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r3;
    void *temp_r4;

    if (reset_key_machine_state__10TObjPlayerFv() == 0) {
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, void **, 0x2B0);
    temp_r31 = M2C_FIELD(temp_r4, s32 *, 0x1C);
    temp_r3 = TObjPlayer__sub_801D91B8(arg0, temp_r4);
    temp_r31 = temp_r31 + arg1;
    if (temp_r31 > temp_r3) {
        temp_r31 = temp_r3;
    }
    if (temp_r31 < 0) {
        temp_r31 = 0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), s32 *, 0x1C) = temp_r31;
    return 1;
}

void update_photon_chair__10TObjPlayerFi(s32 arg0) {
    enter_battle_state__10TObjPlayerFPv(arg0 + 0x634);
    if (((s32 (*)(s32))obj_isState2_324)(arg0) != 0) {
        set_flag_400000__10TObjPlayerFPv(arg0);
    }
}

void refresh_equipment_slot__10TObjPlayerFv(void * _w0) {
    u8 *temp_r3;
    temp_r3 = activate_d04_slot__10TObjPlayerFPv((void *)(_w0));
    if (temp_r3 != NULL) {
        ((VObj_18 *)(temp_r3))->m40();
    }
}

void check_flag_800000__10TObjPlayerFPv(void *arg0) {
    check_flag__10TObjPlayerFPvi(arg0, 0x800000);
}

void clear_stealth_suit_flags__10TObjPlayerFPv(u8 *arg0) {
    ((void (*)(void *, u32))TObjPlayer__sub_8011E204)(arg0, 0x800000U);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000000);
}

void handle_6x7B_disable_stealth_suit_effect(void *arg0) {
    struct pkt_801B1674 pkt;
    TFontSmallLobby__sub_801C04C8((M2C_UNK *)(&pkt));
    disable_stealth_suit_effect__15TFontSmallLobbyFi((s32)((s32)((s32) &pkt)), (void *)((void *)(arg0)));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x7B_disable_stealth_suit_effect(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.player_id);
        if (p != NULL) {
            clear_stealth_suit_flags__10TObjPlayerFPv(p);
        }
    }
}

s32 disable_stealth_suit_effect__15TFontSmallLobbyFi(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void draw_small_label__15TFontSmallLobbyFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TFontSmallLobby__sub_801C04C8((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        fn_801C04DC((M2C_UNK *)&sp8);
    }
}

void set_stealth_suit_flags__10TObjPlayerFPv(u8 *arg0) {
    set_state_flags__10TObjPlayerFPvUi(arg0, 0x800000U);
    set_indexed_flags(arg0, 0, 0x08000000);
}

void handle_6x7A_enable_stealth_suit_effect(void *arg0) {
    struct pkt_801B1674 pkt;
    fn_801C0510((M2C_UNK *)(&pkt));
    TFontSmallLobby__sub_801B1224((s32)((s32)((s32) &pkt)), (void *)((void *)(arg0)));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x7A_enable_stealth_suit_effect(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.player_id);
        if (p != NULL) {
            set_stealth_suit_flags__10TObjPlayerFPv(p);
        }
    }
}

s32 TFontSmallLobby__sub_801B1224(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void TLobby__sub_801B1254(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        fn_801C0510((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        cleanup_small_font__6TLobbyFPv((M2C_UNK *)&sp8);
    }
}

void test_flag_2000000__10TObjPlayerFPv(void *arg0) {
    ((M2C_UNK (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x02000000);
}

void activate_body_collision__10TObjPlayerFPv(u8 *arg0) {
    obj_clearFlags30(arg0, 0x02000000U);
    set_indexed_flags(arg0, 0, 1);
}

void deactivate_body_collision__10TObjPlayerFPv(u8 *arg0) {
    ((void (*)(void *, u32))obj_setFlags30)(arg0, 0x02000000U);
    ((void (*)(void *, s32, u32))clear_player_status_flag__10TObjPlayerFPviUi)(arg0, 0, 1U);
}

u8 TObjPlayer__vt17(void *arg0, s32 arg1) {
    return (u8) ((actor_frame_tick & arg1) == ((u16 (*)(void))obj_getField1c)());
}

void send_field_state__10TObjPlayerFi(s32 arg0) {
    if ((((s32 (*)(void))test_flag_2000000__10TObjPlayerFPv)() == 0) && (((s32 (*)(s32))check_flag_800000__10TObjPlayerFPv)(arg0) == 0)) {
        check_hit_by_id_431_from_packet__10TObjPlayerFPv(arg0 + 0x384);
    }
    ((M2C_UNK (*)(s32, M2C_UNK))send_field_state_if_active__10TObjPlayerFii)(arg0, 0x42D08);
}

void spawn_effect__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(void))is_locally_controlled__10TObjPlayerFPv)() != 0) {
        spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, ((s32 (*)(s32))obj_getField1c)(arg0));
    }
}

void draw__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    push_matrix();
    translate_matrix_vec3(0, ((s32 (*)(void *))get_position_ptr__10TObjPlayerFPv)(arg0));
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    draw_model_with_callback__10TObjPlayerFPviif(arg0, M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, s32 *, 0xE0), farg0);
    pop_matrix();
}

void draw__10TObjPlayerFPv(void *arg0) {
    push_matrix();
    translate_matrix_vec3(0, ((s32 (*)(void *))get_position_ptr__10TObjPlayerFPv)(arg0));
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    ((M2C_UNK (*)(void *, s32, f32, s32))draw_model_with_callback__10TObjPlayerFPviif)(arg0, M2C_FIELD(arg0, s32 *, 0xF8), (*(f32 *)&TObjPlayer__data_805DC278), M2C_FIELD(arg0, s32 *, 0xE0));
    pop_matrix();
}

s32 try_pickup_item__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    if (obj_isState2_324() != 0) {
        return 0;
    }
    if (((TObjPlayer*)arg0)->find_revival_item() != 0U) {
        temp_r3 = ((s32 (*)(void))get_owner_if_alive__10TObjPlayerFPv)();
        if (temp_r3 == 0) {
            return 0;
        }
        ((M2C_UNK (*)(s32))recover_full__10TObjPlayerFPv)(arg0);
        set_flags__10TObjPlayerFPvUi(arg0 + 0x858, 4);
        ((M2C_UNK (*)(s32, s32, M2C_UNK))send_6x29_delete_item__10TObjPlayerFPvii)(arg0, ((s32 (*)(s32))get_field_d8__10TObjPlayerFPv)(temp_r3), 1);
        return 1;
    }
    return 0;
}

}
u32 TObjPlayer::find_revival_item() {
    typedef char sp8_offset[(offsetof(Stack_801B15A4, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_801B15A4, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_801B15A4, spA) == 0x2) ? 1 : -1];
    Stack_801B15A4 stack;
    ((M2C_UNK (*)(void *))init__9TItemDataFv)((void *) (&stack.sp8));
    stack.sp8 = 1;
    stack.sp9 = 2;
    stack.spA = 0x52;
    u32 found = ((u32 (*)(int, void *))set_mode_and_refresh_object__10TObjPlayerFPvi)((int) inventory_objects, (void *) (&stack.sp8));
    if (found == 0U) {
        ((M2C_UNK (*)(void *))init__9TItemDataFv)((void *) (&stack.sp8));
        stack.sp8 = 3;
        stack.sp9 = 9;
        found = ((u32 (*)(int, void *))set_mode_and_refresh_object__10TObjPlayerFPvi)((int) inventory_objects, (void *) (&stack.sp8));
    }
    return found;
}

extern "C" {
void set_state_flag_604B__10TObjPlayerFPv(u8 *arg0) {
    if (((s32 (*)(void))obj_isState3_324)() != 0) {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x604B;
    } else {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x200B;
    }
    fn_801C19E8(arg0 + 0x828);
}

void handle_6x1C_disable_pk_mode_for_player(void *arg0) {
    struct pkt_801B1674 pkt;
    fn_801C0558((M2C_UNK *)(&pkt));
    update_small_font__10TObjPlayerFi((s32)((s32) &pkt), (void *)(arg0));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x1C_disable_pk_mode_for_player(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.player_id);
        if (p != NULL) {
            set_state_flag_604B__10TObjPlayerFPv(p);
        }
    }
}

s32 update_small_font__10TObjPlayerFi(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void send_item_pickup_request__10TObjPlayerFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        fn_801C0558((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        fn_801C056C((M2C_UNK *)&sp8);
    }
}

void set_state_flag_6043__10TObjPlayerFPv(u8 *arg0) {
    if (((s32 (*)(void))obj_isState3_324)() != 0) {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x6043;
    } else {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x2003;
    }
    fn_801C19F4(arg0 + 0x828);
}

void handle_6x1B_enable_pk_mode_for_player(void *arg0) {
    struct pkt_801B1674 pkt;
    fn_801C05A0((M2C_UNK *)(&pkt));
    ((s32 (*)(s32, void *))draw_font__10TObjPlayerFPv)((s32)((s32) &pkt), (void *)(arg0));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x1B_enable_pk_mode_for_player(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.player_id);
        if (p != NULL) {
            set_state_flag_6043__10TObjPlayerFPv(p);
        }
    }
}

void* draw_font__10TObjPlayerFPv(void* p) { ((int (*)(void*))TFontSmallLobby__sub_801C0228)(p); return p; }

void notify_field1c__10TObjPlayerFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        fn_801C05A0((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        fn_801C05B4((M2C_UNK *)&sp8);
    }
}

int get_field_828__10TObjPlayerFPv(void* p) { return ((int (*)(void*))get_type__10TObjPlayerFPv)((char*)p + 0x828); }

void TObjPlayer__sub_801B18C0(s32 arg0, u32 arg1) {
    switch (arg1) {
    default:
        ((s16 (*)(void *))get_idle_animation__10TObjPlayerFPv)((void *) (arg0));
        return;
    case 2:
    case 3:
        TObjPlayer__sub_801CFBFC((void *) (arg0));
        return;
    case 4:
        get_vobj_state_28__10TObjPlayerFPv((void *) (arg0));
        return;
    case 5:
        call_subobject_m15__10TObjPlayerFPv((void *) (arg0));
        return;
    case 6:
        get_state__10TObjPlayerFPv((void *) (arg0));
        return;
    case 7:
        get_model_state__10TObjPlayerFPv((void *) (arg0));
        return;
    case 8:
        get_status__10TObjPlayerFPv((void *) (arg0));
        return;
    case 9:
        query_equip__10TObjPlayerFPv((void *) (arg0));
        return;
    case 10:
        query_child_state__10TObjPlayerFPv((void *) (arg0));
        return;
    case 11:
        call_obj_vt26__10TObjPlayerFPv((void *) (arg0));
        return;
    case 12:
        get_weapon_stat_c__10TObjPlayerFPv((void *) (arg0));
        return;
    case 13:
        call_model_m24__10TObjPlayerFPv((void *) (arg0));
        return;
    case 14:
        get_action_animation__10TObjPlayerFPv((void *) (arg0));
        return;
    case 15:
        get_model_field_m25__10TObjPlayerFPv((void *) (arg0));
        return;
    }
}

void unequip_by_field326__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_801B18C0((s32)(arg0), (u32)(M2C_FIELD(arg0, s16 *, 0x326)));
}

void play_phase_transition_sound__10TObjPlayerFi(s32 arg0) {
    if (((get_main_phase() == 0xE) || (get_main_phase() == 0xF)) && (((s32 (*)(void))is_lobby_floor_15__15TFontSmallLobbyFv)() != 0)) {
        draw_chunk_object(arg0);
        return;
    }
    draw_chunk_object(arg0);
}

void reset_volopt_state__10TObjPlayerFv(void) { ((int (*)(void))get_field_3e0__12TBoss3VoloptFPv)(); is_item_area_enabled(); }

void foreach_player__10TObjPlayerFv(M2C_UNK (*arg0)(u32)) {
    M2C_UNK (*var_r27)(u32);
    s32 var_r29;
    M2C_UNK *var_r30;
    s32 var_r31;
    u32 temp_r28;

    var_r27 = arg0;
    var_r29 = 0;
    var_r30 = ((M2C_UNK *)&player_slot_table);
    var_r31 = 0;
    do {
        temp_r28 = var_r30[var_r31];
        if ((temp_r28 != 0U) && (((s32 (*)(u32))is_locally_controlled__10TObjPlayerFPv)(temp_r28) != 0)) {
            var_r27(temp_r28);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 < 0xC);
}

void for_each_player_slot__10TObjPlayerFv(void (*arg0)(void *)) {
    s32 i;
    void **p;
    p = (void **)((M2C_UNK *)&player_slot_table);
    for (i = 0; i < 12; i++, p++) {
        if (*p != NULL) {
            arg0(*p);
        }
    }
}

void check_flag_40000__10TObjPlayerFPv(void *arg0) {
    check_flag__10TObjPlayerFPvi(arg0, 0x40000);
}

struct Pkt_801B1B08 { u16 f0; u16 client; u32 pad; };
s32 validate_6x23_set_player_visible(Pkt_801B1B08 *);

void handle_6x23_set_player_visible(void *arg0) {
    Pkt_801B1B08 pkt;
    fn_801C05E8((Ctx_801B1BA4 *)&pkt);
    ((s32 (*)(Pkt_801B1B08 *, void *))handle_set_visible__10TObjPlayerFi)(&pkt, arg0);
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x23_set_player_visible(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.client);
        if (p != NULL) {
            TObjPlayer__sub_8011E204(p, 0x40000);
        }
    }
}

s32 handle_set_visible__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void TObjPlayer__sub_801B1BA4(void) {
    Ctx_801B1BA4 ctx;
    void *p;
    fn_801C05E8(&ctx);
    p = update_battle_controller__10TObjPlayerFv();
    if (p != NULL && (p == NULL || obj_isState2_324() == 0)) {
        ctx.f2 = ((s16 (*)(void *))obj_getField1c)(p);
        fn_801C05FC(&ctx);
    }
}

struct Pkt_801B1C00 { u16 f0; u16 client; u32 pad; };
s32 validate_6x22_set_player_invisible(Pkt_801B1C00 *);
void set_invisible__10TObjPlayerFPv(Pkt_801B1C00 *, void *);
void set_flag_200000__10TObjPlayerFi(void *);

void handle_6x22_set_player_invisible(void *arg0) {
    Pkt_801B1C00 pkt;
    fn_801C0630((Ctx_801B1C8C *)&pkt);
    set_invisible__10TObjPlayerFPv(&pkt, arg0);
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x22_set_player_invisible(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.client);
        if (p != NULL && check_flag_4__10TObjPlayerFPv(p) == 0) {
            set_state_flags__10TObjPlayerFPvUi(p, 0x40000);
            deactivate_body_collision__10TObjPlayerFPv(p);
            set_flag_200000__10TObjPlayerFi(p);
        }
    }
}

void TObjPlayer__sub_801B1C8C(void) {
    Ctx_801B1C8C ctx;
    void *p;
    fn_801C0630(&ctx);
    p = update_battle_controller__10TObjPlayerFv();
    if (p != NULL && (p == NULL || obj_isState2_324() == 0)) {
        ctx.f2 = ((s16 (*)(void *))obj_getField1c)(p);
        fn_801C0644(&ctx);
    }
}

void send_field_state_if_active__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((s32 (*)(void))is_on_current_floor__10TObjPlayerFi)() != 0) {
        play_sound_effect(arg1, ((s32 (*)(s32))get_position_ptr__10TObjPlayerFPv)(arg0), 0, 0);
    }
}

u8 is_in_tl03_state__10TObjPlayerFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((((s32 (*)(void))check_flag_4__10TObjPlayerFPv)() == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x10) == (u32) tl_03)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

void handle_6x2F_change_player_hp(s32 arg0) {
    Pkt_801B1D8C pkt;
    u32 player;
    init_6x2F_packet_header__10TObjPlayerFPv(&pkt);
    TObjPlayer__sub_801C06BC(&pkt, arg0);
    bswap_change_hp_packet__10TObjPlayerFPv(&pkt);
    if (validate_6x2F_change_player_hp(&pkt) == 0) {
        return;
    }
    player = ((u32 (*)(s32))get_player_by_client_id)(pkt.client);
    if (player == 0) {
        return;
    }
    if (obj_testFlags30(player, 0x800) != 0) {
        return;
    }
    switch (pkt.type) {
    case 0:
        ((void (*)(u32, s32))set_hp_clamped__10TObjPlayerFPvs)(player, pkt.amount);
        break;
    case 1:
        add_actor_hp(player, pkt.amount);
        break;
    case 2:
        add_actor_hp(player, *(s16 *)(player + 0x2B8));
        break;
    }
}

void send_6x2F_change_player_hp(s32 arg0, s32 arg1, s32 arg2) {
    Msg_801B1E54 m;

    if (((((u32 (*)(u16))get_player_by_client_id)((u16)arg0) == 0U) || (obj_isState2_324() == 0)) && ((((u32 (*)(u16))get_player_by_client_id)((u16)arg1) == 0U) || (((s32 (*)(void))is_locally_controlled__10TObjPlayerFPv)() != 0))) {
        init_6x2F_packet_header__10TObjPlayerFPv(&m);
        m.a = arg0;
        m.b = 0;
        m.c = arg2;
        m.d = arg1;
        TObjPlayer__sub_801C0734(&m);
    }
}

void handle_6x24_teleport_player(s32 arg0) {
    Pkt_801B1EE0 pkt;
    u32 player;
    init_cmd_6x24__10TObjPlayerFPv(&pkt);
    TObjPlayer__sub_801C07B4(&pkt, arg0);
    byteswap_packet_body__10TObjPlayerFPv(&pkt);
    if (validate_6x24_teleport_player(&pkt) == 0) {
        return;
    }
    player = ((u32 (*)(s32))get_player_by_client_id)(pkt.slot);
    if (player == 0) {
        return;
    }
    set_position_from__14TBoss4DarkFalzFPvPv(player, pkt.pos);
    *(s32 *)(player + 0x60) = *(s32 *)(player + 0x3F0) = pkt.heading;
    calc_attach_pos__10TObjPlayerFPv(player);
    clear_flag_4000__10TObjPlayerFPv(player);
    ((void (*)(u32))refresh_equipment_slot__10TObjPlayerFv)(player);
    create__15TPlyOnCountOverFPvPvPv(((s16 (*)(void *))obj_getField1c)((void *)player), 2, clear_flag_4000_callback__10TObjPlayerFPv);
    if (((s32 (*)(u32))is_locally_controlled__10TObjPlayerFPv)(player) != 0) {
        reset_cameras_to_actor(player, 0);
    }
}

void send_6x24_teleport_player(u16 slot, void *pos, s32 heading) {
    struct pkt_801B1FA4 pkt;
    init_cmd_6x24__10TObjPlayerFPv(&pkt);
    if (((u32 (*)(s32))get_player_by_client_id)(slot) != 0U && obj_isState2_324() == 0) {
        pkt.slot = slot;
        pkt.heading = heading;
        ((s32 (*)(s32, s32))VecCopy__FP3VecPC3Vec)((s32) &pkt.pos, (s32) pos);
        send_lobby_update__10TObjPlayerFPv(&pkt);
    }
}

void TObjPlayer__sub_801B2014(s32 arg0) {
    Item_801B2014 item;
    item.val = TObjPlayer__data_805DC278;
    if (obj_testFlags30(arg0, 1) != 0) {
        item.id = 0xF;
        ((void (*)(s32, Item_801B2014))dispatch_status_effect_msg__10TObjPlayerFUiPv)(arg0, item);
    }
    if (obj_testFlags30(arg0, 2) != 0) {
        item.id = 0x10;
        ((void (*)(s32, Item_801B2014))dispatch_status_effect_msg__10TObjPlayerFUiPv)(arg0, item);
    }
    if (obj_testFlags30(arg0, 0x40) != 0) {
        item.id = 7;
        ((void (*)(s32, Item_801B2014))dispatch_status_effect_msg__10TObjPlayerFUiPv)(arg0, item);
    }
    if (obj_testFlags30(arg0, 8) != 0) {
        item.id = 0x11;
        ((void (*)(s32, Item_801B2014))dispatch_status_effect_msg__10TObjPlayerFUiPv)(arg0, item);
    }
    if (obj_testFlags30(arg0, 0x10) != 0) {
        item.id = 0x12;
        ((void (*)(s32, Item_801B2014))dispatch_status_effect_msg__10TObjPlayerFUiPv)(arg0, item);
    }
    if (obj_testFlags30(arg0, 0x20) != 0) {
        item.id = 2;
        ((void (*)(s32, Item_801B2014))dispatch_status_effect_msg__10TObjPlayerFUiPv)(arg0, item);
    }
    if (obj_testFlags30(arg0, 4) != 0) {
        item.id = 3;
        ((void (*)(s32, Item_801B2014))dispatch_status_effect_msg__10TObjPlayerFUiPv)(arg0, item);
    }
}

void sync_status_effect_flags__10TObjPlayerFPv(s32 *arg0) {
    Player_801B21AC *self = (Player_801B21AC *)arg0;
    Item_801B21AC item;
    u32 diff;
    item.val = TObjPlayer__data_805DC278;
    diff = (self->prev ^ self->flags) & 0x3F;
    if (diff != 0) {
        if (diff & 3) {
            if (self->flags & 3) {
                if (self->flags & 1) {
                    item.id = 0xF;
                }
                if (self->flags & 2) {
                    item.id = 0x10;
                }
                ((VObj_801B21AC *)arg0)->m76(item);
            } else {
                item.id = 0;
                ((M2C_UNK (*)(void *, Item_801B21AC))send_code_13_3__10TObjPlayerFii)(arg0, item);
            }
        }
        if (diff & 0x3C) {
            if (self->flags & 0x3C) {
                if (self->flags & 8) {
                    item.id = 0x11;
                }
                if (self->flags & 0x10) {
                    item.id = 0x12;
                }
                if (self->flags & 0x20) {
                    item.id = 2;
                }
                if (self->flags & 4) {
                    item.id = 3;
                }
                ((VObj_801B21AC *)arg0)->m76(item);
            } else {
                item.id = 1;
                ((M2C_UNK (*)(void *, Item_801B21AC))send_code_13_3__10TObjPlayerFii)(arg0, item);
            }
        }
        if (diff & 0x40) {
            item.id = 7;
            ((VObj_801B21AC *)arg0)->m76(item);
        }
        self->prev = self->flags;
    }
}

s32 TObjPlayer__vt40(s32 arg0) {
    if (((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() != 0) {
        return update_defense_stat_status(arg0);
    }
    return 0;
}

s32 TObjPlayer__vt39(s32 arg0) {
    if (((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() != 0) {
        return update_attack_stat_status(arg0);
    }
    return 0;
}

s32 TObjPlayer__vt38(s32 arg0) {
    if ((((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() == 0) || (((s32 (*)(s32))test_flag_2000000__10TObjPlayerFPv)(arg0) != 0)) {
        return 0;
    }
    return update_shock_clock__10TObjPlayerFPv(arg0);
}

s32 TObjPlayer__vt37(s32 arg0) {
    if ((((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() == 0) || (((s32 (*)(s32))test_flag_2000000__10TObjPlayerFPv)(arg0) != 0)) {
        return 0;
    }
    return update_movement_status__10TObjPlayerFv(arg0);
}

s32 TObjPlayer__vt36(s32 arg0) {
    if ((((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() == 0) || (((s32 (*)(s32))test_flag_2000000__10TObjPlayerFPv)(arg0) != 0)) {
        return 0;
    }
    return update_flag30_timer__10TObjPlayerFPv(arg0);
}

s32 TObjPlayer__vt35(s32 arg0) {
    if ((((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() == 0) || (((s32 (*)(s32))test_flag_2000000__10TObjPlayerFPv)(arg0) != 0)) {
        return 0;
    }
    return update_action_timer__10TObjPlayerFPv(arg0);
}

s32 TObjPlayer__vt34(s32 arg0) {
    if ((((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() == 0) || (((s32 (*)(s32))test_flag_2000000__10TObjPlayerFPv)(arg0) != 0)) {
        return 0;
    }
    return update_action_hold_status__10TObjPlayerFv(arg0);
}

s32 TObjPlayer__vt33(s32 arg0) {
    if ((((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() == 0) || (((s32 (*)(s32))test_flag_2000000__10TObjPlayerFPv)(arg0) != 0)) {
        return 0;
    }
    return update_poison_status__10TObjPlayerFv(arg0);
}

s32 check_flag30_bit20__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() != 0) {
        return obj_testFlags30(arg0, 0x20);
    }
    return 0;
}

s32 is_flag30_10_set__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() != 0) {
        return obj_testFlags30(arg0, 0x10);
    }
    return 0;
}

s32 is_flag30_8_set__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() != 0) {
        return obj_testFlags30(arg0, 8);
    }
    return 0;
}

f32 TObjPlayer__sub_800192C4(void *, int);
void add_to_field_2ce__10TObjPlayerFPvi(void *, int);
s16 get_atp__10TObjPlayerFPv(void *);
void add_to_field_2ca__10TObjPlayerFPvi(void *, int);
s16 get_field_2c2__10TObjPlayerFPv(void *);
void add_to_field_2c8__10TObjPlayerFPvi(void *, int);
s16 get_field_2c0__10TObjPlayerFPv(void *);
void TObjPlayer__sub_800192B4(void *, int);
s16 get_s16_2c4__10TObjPlayerFPv(void *);
void reset_status_effect_row(void *);

struct Pl_801B0B88;
void cancel_status_effects__10TObjPlayerFPv(Pl_801B0B88 *p_) {
#define arg0 ((u8 *)p_)
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    f32 temp_f31_4;
    f32 temp_f31_5;
    f32 v;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFFC);
    temp_f31 = -TObjPlayer__sub_800192C4((void *) (arg0), (int) (0));
    v = get_s16_2c4__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_800192B4(arg0, (s32) (v * temp_f31));
    reset_status_effect_row(arg0 + 0x254);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC3);
    temp_f31_2 = -TObjPlayer__sub_800192C4((void *) (arg0), (int) (1));
    v = get_s16_2c4__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_800192B4(arg0, (s32) (v * temp_f31_2));
    reset_status_effect_row(arg0 + 0x260);
    temp_f31_3 = -TObjPlayer__sub_800192C4((void *) (arg0), (int) (2));
    v = get_field_2c0__10TObjPlayerFPv(arg0);
    add_to_field_2c8__10TObjPlayerFPvi(arg0, (s32) (v * temp_f31_3));
    temp_f31_4 = -TObjPlayer__sub_800192C4((void *) (arg0), (int) (2));
    v = get_field_2c2__10TObjPlayerFPv(arg0);
    add_to_field_2ca__10TObjPlayerFPvi(arg0, (s32) (v * temp_f31_4));
    reset_status_effect_row(arg0 + 0x26C);
    temp_f31_5 = -TObjPlayer__sub_800192C4((void *) (arg0), (int) (3));
    v = get_atp__10TObjPlayerFPv(arg0);
    add_to_field_2ce__10TObjPlayerFPvi(arg0, (s32) (v * temp_f31_5));
    reset_status_effect_row(arg0 + 0x278);
}
#undef arg0

void remove_status_effect__10TObjPlayerFUiPv(u32 arg0_, Pair_801B2C04 *arg1_) {
    u8 *arg0 = (u8 *)arg0_;
    s32 *arg1 = (s32 *)arg1_;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    f32 temp_f31_4;
    f32 temp_f31_5;
    s32 temp_r0;
    f32 v;

    temp_r0 = *arg1;
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFFC);
        temp_f31 = -TObjPlayer__sub_800192C4((void *) arg0, 0);
        v = get_s16_2c4__10TObjPlayerFPv(arg0);
        v *= temp_f31;
        TObjPlayer__sub_800192B4(arg0, (s32) v);
        reset_status_effect_row(arg0 + 0x254);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC3);
        temp_f31_2 = -TObjPlayer__sub_800192C4((void *) arg0, 1);
        v = get_s16_2c4__10TObjPlayerFPv(arg0);
        v *= temp_f31_2;
        TObjPlayer__sub_800192B4(arg0, (s32) v);
        reset_status_effect_row(arg0 + 0x260);
        return;
    case 2:
        temp_f31_3 = -TObjPlayer__sub_800192C4((void *) arg0, 2);
        v = get_field_2c0__10TObjPlayerFPv(arg0);
        v *= temp_f31_3;
        add_to_field_2c8__10TObjPlayerFPvi(arg0, (s32) v);
        temp_f31_4 = -TObjPlayer__sub_800192C4((void *) arg0, 2);
        v = get_field_2c2__10TObjPlayerFPv(arg0);
        v *= temp_f31_4;
        add_to_field_2ca__10TObjPlayerFPvi(arg0, (s32) v);
        reset_status_effect_row(arg0 + 0x26C);
        return;
    case 3:
        temp_f31_5 = -TObjPlayer__sub_800192C4((void *) arg0, 3);
        v = get_atp__10TObjPlayerFPv(arg0);
        v *= temp_f31_5;
        add_to_field_2ce__10TObjPlayerFPvi(arg0, (s32) v);
        reset_status_effect_row(arg0 + 0x278);
        return;
    }
}

void dispatch_status_effect_msg__10TObjPlayerFUiPv(u32 arg0, Pair_801B2AE8 *msg) {
    switch (msg->a) {
    case 15:
        ((VObj_801B2AE8 *)arg0)->m42();
        break;
    case 16:
        ((VObj_801B2AE8 *)arg0)->m43();
        break;
    case 17:
        ((VObj_801B2AE8 *)arg0)->m44();
        break;
    case 18:
        ((VObj_801B2AE8 *)arg0)->m45();
        break;
    case 3:
        ((VObj_801B2AE8 *)arg0)->m47();
        break;
    case 2:
        ((VObj_801B2AE8 *)arg0)->m46(0);
        break;
    case 7:
        ((VObj_801B2AE8 *)arg0)->m48();
        break;
    case 9:
    case 11:
        {
            Pair_801B2AE8 tmp = *msg;
            ((VObj_801B2AE8 *)arg0)->m49(tmp);
        }
        break;
    case 10:
    case 12:
        {
            Pair_801B2AE8 tmp2 = *msg;
            ((VObj_801B2AE8 *)arg0)->m50(tmp2);
        }
        break;
    }
}

void handle_6x0D_add_or_remove_status_effect(void *arg0) {
    Eff_801B2C04 e;
    set_code_13_3__10TObjPlayerFPv(&e);
    copy_6x0d_status_effect_packet__10TObjPlayerFPvPv(&e, arg0);
    bswap_status_effect__10TObjPlayerFPv(&e);
    if (fn_8036B748(&e) != 0) {
        u32 p = ((u32 (*)(s32))get_player_by_client_id)(e.f2);
        if (p != 0) {
            Pair_801B2C04 q;
            q.a = e.f4;
            q.b = e.f8;
            remove_status_effect__10TObjPlayerFUiPv(p, &q);
        }
    }
}

void send_code_13_3__10TObjPlayerFii(s32 arg0, s32 arg1) {
    M2C_UNK spC;
    M2C_UNK sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        ((M2C_UNK (*)(M2C_UNK *))set_code_13_3__10TObjPlayerFPv)(&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        obj_copyVec2_0(&spC, arg1);
        update_and_send__10TObjPlayerFPv(&sp8);
    }
}

void handle_6x0E_clear_negative_status_effects(s32 arg0) {
    Eff_801B2CE4 e;
    set_code_14_1__10TObjPlayerFPv(&e);
    ((void (*)(void *, s32))clear_negative_status_effects__10TObjPlayerFi)(&e, arg0);
    TFontSmallLobby__sub_801C01BC(&e);
    if (validate_6x0E_clear_negative_status_effects(&e) != 0) {
        VObj_801B2CE4 *p = (VObj_801B2CE4 *)((u32 (*)(s32))get_player_by_client_id)(e.f2);
        if (p != 0) {
            p->m48();
        }
    }
}

s32 clear_negative_status_effects__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void handle_6x0C_add_or_remove_status_effect(void *arg0) {
    Eff_801B2D88 e;
    set_code_12_3__10TObjPlayerFPv((M2C_UNK *)(&e));
    TObjPlayer__sub_801C092C(&e, arg0);
    apply_status_effect__10TObjPlayerFPv(&e);
    if (fn_8036B770(&e) != 0) {
        u32 p = ((u32 (*)(s32))get_player_by_client_id)(e.f2);
        if (p != 0) {
            Pair_801B2D88 q;
            q.a = e.f4;
            q.b = e.f8;
            ((void (*)(u32, Pair_801B2D88 *))dispatch_status_effect_msg__10TObjPlayerFUiPv)(p, &q);
        }
    }
}

void TObjPlayer__vt76(s32 arg0, s32 arg1) {
    M2C_UNK spC;
    M2C_UNK sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_12_3__10TObjPlayerFPv(&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        obj_copyVec2_0(&spC, arg1);
        reinit_update_sub4_and_send__10TObjPlayerFPv(&sp8);
    }
}

s32 get_next_level_exp__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31_2 = ((int (*)(void))get_max_level__10TObjPlayerFv)();
    if (((VObj_18_eecf68 *)(arg0))->m14() >= temp_r31_2) {
        return 0;
    }
    temp_r31 = ((VObj_18_eecf68 *)(arg0))->m14();
    return ((s32 (*)(s8, s32))get_current_state_field__10TObjPlayerFv)(((s8 (*)(void *))get_class_index__10TObjPlayerFPv)(arg0), temp_r31 + 1);
}

s32 calc_scaled_value__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((s32 (*)(void))is_flag30_10_set__10TObjPlayerFi)() != 0) {
        return (s32) (lbl_805DC280 * (lbl_805DC284 * (lbl_805DC288 * (f32) rand())));
    }
    return arg1;
}

void apply_speed_scale__10TObjPlayerFif(s32 arg0, f32 farg0) {
    f32 var_f1;

    if (((s32 (*)(void))is_flag30_8_set__10TObjPlayerFi)() != 0) {
        var_f1 = TObjPlayer__data_805DC28C * farg0;
    } else {
        var_f1 = farg0;
    }
    TObjPlayer__sub_800A7798(arg0, var_f1);
}

#pragma push
#pragma scheduling off
s32 build_player_class_stat_template(s32 arg0, s32 arg1) {
  void *new_var;
  unsigned int new_var2;
  s32 temp_r30;
  s32 temp_r31;
  if (arg0 == 0)
  {
    if (!arg0)
    {
    }
    return 0;
  }
  temp_r31 = get_class_defense_template();
  new_var = (void *) arg0;
  temp_r30 = temp_r31;
  new_var2 = (int) temp_r30;
  temp_r31 = get_class_attack_template(new_var);
  set_params__10TObjPlayerFPvPvPviPv((void *) arg1, new_var, (void *) get_class_stat_entry__10TObjPlayerFPv(new_var), (int) temp_r31, new_var2);
  return 1;
}
extern int fold_flush_0;
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
s32 build_player_equipment_requirement_stats(TObjPlayer *self, PlayerRequirementStats *arg1) {
    set_params__10TObjPlayerFPvPvPviPv(arg1, self, (void *) ((s32 (*)(void *))get_quest_id__12TQuestListVMFPv)(self),
                                       get_class_attack_template(self), get_class_defense_template());
    return 1;
}
extern int fold_flush_1;
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
int fn_801B309C(void* p) { return ((int (*)(void*))recover_full__10TObjPlayerFPv)(p); }
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
#pragma scheduling on
void prepare_guild_return__10TObjPlayerFPv(void *player) {
    set_area__6TLobbyFPvi(((u8 *)&lbl_80515BA0), 0, get_floor_map_terrain(0));
    mark_area_change_pending();
    ((void (*)(s16, s32, s32))set_arrival_override_pos)(((s16 (*)(s32))obj_getField1c)((s32) player), get_guild_return_yaw__10TObjPlayerFv(player), get_guild_return_position__10TObjPlayerFPv(player));
    set_state_flags__10TObjPlayerFPvUi(player, 0x800);
    ((void (*)(void *, int))set_battle_flag__10TObjPlayerFPvi)(player, 1);
    ((void (*)(void *, void *))send_6x21_inter_level_warp)(player, ((void * (*)(void *))get_dest_area__17TObjAreaWarpQuestFPv)(((u8 *)&lbl_80515BA0)));
    ((void (*)(void *, s32, s32))apply_to_players__10TNpcPlayerFiPvi)(((void * (*)(void *))get_dest_area__17TObjAreaWarpQuestFPv)(((u8 *)&lbl_80515BA0)), get_party_position(), get_party_yaw());
}
extern int fold_flush_2;
#pragma pop

int player_flag_1__6TLobbyFPv(void* p) { return set_battle_flag__10TObjPlayerFPvi(p, 1); }

int check_player_state_flag_2__6TLobbyFPv(void* p) { return test_flags_any((char*)p + 0x858, 2); }

void handle_6x34(void) {  }

void prepare_hospital_return__10TObjPlayerFi(void *arg0) {
    ((M2C_UNK (*)(s32, int))send_6x21_inter_level_warp)((s32)arg0, 0);
    set_arrival_override_pos(((u16 (*)(void *))obj_getField1c)(arg0), get_hospital_yaw__10TObjPlayerFv(arg0), get_hospital_position__10TObjPlayerFPv(arg0));
    ((M2C_UNK (*)(void *, int))set_state_flags__10TObjPlayerFPvUi)(arg0, 0x800);
    set_battle_flag__10TObjPlayerFPvi((void*)(arg0), (int)(0));
    apply_to_players__10TNpcPlayerFiPvi(get_dest_area__17TObjAreaWarpQuestFPv(&lbl_80515BA0), get_lobby_entry_ptr__10TNpcPlayerFv(), TNpcPlayer__sub_8034DE40());
}

void complete_deferred_player_death(void) {
    u8 lvl;
    s16 aim;
    u16 room;
    VObj_801B3274 *p;
    p = ((VObj_801B3274 * (*)(M2C_UNK))get_player_by_client_id)(fn_801C1BA0());
    if (p == NULL) {
        return;
    }
    clear_flags__11TAdRicoRingFPvUi((u8 *)p + 0x858, 2);
    if (((s32 (*)(void *))try_pickup_item__10TObjPlayerFi)(p) != 0) {
        return;
    }
    if (((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() != 0) {
        if (((u8 (*)(void *))TLobby__sub_801D7100)(lobby_rule_settings) == 1) {
            update_lobby_font__10TObjPlayerFi(p);
            return;
        }
        if (((u8 (*)(void *))TLobby__sub_801D7100)(lobby_rule_settings) == 2 && decrement_timer__10TObjPlayerFPv((u8 *)p + 0x754) == 0) {
            update_lobby_font__10TObjPlayerFi(p);
            return;
        }
        send_respawn_position__10TObjPlayerFPv(p);
        aim = clamp_value_below_200__6TLobbyFPv(lobby_rule_settings);
        room = TObjRoomId__sub_801A1DB8(get_field_2d4__10TObjPlayerFPv(p));
        if (aim != 0 && (room == 0 || room == 0x1000)) {
            ((M2C_UNK (*)(void *, int))update_aim_angle__10TObjPlayerFPvi)(p, aim);
        }
        if ((lvl = (u8)((s32 (*)(void *))get_clamped_level__6TLobbyFPv)(lobby_rule_settings)) != 0 && (room == 0 || room == 0x1000)) {
            ((M2C_UNK (*)(void *, u8))TObjPlayer__sub_801AF554)(p, lvl);
        }
        p->m62();
        return;
    }
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        update_lobby_font__10TObjPlayerFi(p);
        return;
    }
    if (get_main_phase() == 0xE) {
        if (check_camera_mode__10TObjPlayerFv() != 0) {
            if (get_anim_id__10TObjPlayerFPv(p) == 1) {
                ((M2C_UNK (*)(void *, int))prepare_guild_return__10TObjPlayerFPv)(p, 0);
                return;
            }
            prepare_hospital_return__10TObjPlayerFi((void *)((s32)p));
            ((M2C_UNK (*)(void *, int, int))set_area__6TLobbyFPvi)(&lbl_80515BA0, 0, get_floor_map_terrain(0));
            ((M2C_UNK (*)(void))mark_area_change_pending)();
            send_inter_level_warp_all__10TNpcPlayerFi(get_dest_area__17TObjAreaWarpQuestFPv(&lbl_80515BA0));
            return;
        }
        create_return_city_window__10TObjPlayerFPv(p);
        update_lobby_font__10TObjPlayerFi(p);
        return;
    }
    create_return_city_window__10TObjPlayerFPv(p);
    update_lobby_font__10TObjPlayerFi(p);
}

int stop_battle__10TObjPlayerFPv(void* p) { return set_battle_flag__10TObjPlayerFPvi(p, 0); }

s32 create_return_city_window__10TObjPlayerFPv(void *arg0) {
    u32 var_r31;

    if ((((s32 (*)(void))is_locally_controlled__10TObjPlayerFPv)() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x36C) == 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x548) != 0U)) {
        var_r31 = __nw__7TObjectFUl(0x28);
        if (var_r31 != 0U) {
            var_r31 = TWindowReturnCity__ct(var_r31, tl_07, (u16) obj_getField1c(arg0));
        }
        M2C_FIELD(arg0, u32 *, 0x36C) = var_r31;
        return 1;
    }
    return 0;
}

int is_flag_clear__17TObjWarpBossMultiFPv(void* p) { return (((int (*)(void*, int))check_flag__10TObjPlayerFPvi)(p, 4096)) == 0; }

int has_item_flag_4096__10TObjPlayerFPv(void* p) { return ((int (*)(void*, void*))TObjPlayer__sub_8011E204)((void*)(p), (void*)(4096)); }

int check_technique_flag__10TObjPlayerFPv(void* p) { return ((int (*)(void*, void*))set_state_flags__10TObjPlayerFPvUi)((void*)(p), (void*)(4096)); }

int is_flag_400_set__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))check_flag__10TObjPlayerFPvi)(p, 1024); }

void enable_action_input__10TObjPlayerFPv(void* p) { ((int (*)(void*, void*))TObjPlayer__sub_8011E204)((void*)(p), (void*)((void*)1024)); get_player_rank__18TChallenge4PResultFPv(p); }

void disable_primary_action_input__10TObjPlayerFPv(void* p) { ((int (*)(void*, void*))set_state_flags__10TObjPlayerFPvUi)((void*)(p), (void*)((void*)1024)); ((int (*)(void*, void*))get_player_result__18TChallenge4PResultFPv)(p, (void*)1); }

void disable_action_input__10TObjPlayerFPv(void* p) { ((int (*)(void*, void*))set_state_flags__10TObjPlayerFPvUi)((void*)(p), (void*)((void*)1024)); ((int (*)(void*, void*))get_player_result__18TChallenge4PResultFPv)(p, (void*)1); ((int (*)(void*, void*))get_player_result__18TChallenge4PResultFPv)(p, (void*)2); ((int (*)(void*, void*))get_player_result__18TChallenge4PResultFPv)(p, (void*)3); }

int try_use_item_by_type__10TObjPlayerFPviii(void *arg0, int arg1, int arg2, int arg3) {
    s8 sp8[24];
    init__9TItemDataFv(sp8);
    sp8[0] = arg1;
    sp8[1] = arg2;
    sp8[2] = arg3;
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    if (try_send_6x27_use_item(arg0, get_field_d8__10TObjPlayerFPv()) == 0) {
        return 0;
    }
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv() != 0 ? 1 : 0;
}

s32 check_can_add_item__10TObjPlayerFPvcc(void *arg0, s8 arg1, s8 arg2) {
    s8 sp8[24];

    init__9TItemDataFv(sp8);
    sp8[0] = arg1;
    sp8[1] = arg2;
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    if (try_send_6x27_use_item(arg0, get_field_d8__10TObjPlayerFPv()) == 0) {
        return 0;
    }
    if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), sp8) == 0U) {
        return 0;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv() != 0 ? 1 : 0;
}

s32 can_use_item__10TObjPlayerFPvPv(u8 *arg0, void *arg1) {
    u32 p;
    if (((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() != 0 && ((u8 (*)(void *))fn_801D7168)(lobby_rule_settings) == 2) {
        return 0;
    }
    switch (get_field_ec__12TOSwitchItemFPv(arg1)) {
    case 3:
        switch (get_field_ed__10TObjPlayerFPv(arg1)) {
        case 0:
            if (M2C_FIELD(arg0, s16 *, 0x32C) >= M2C_FIELD(arg0, s16 *, 0x2B8)) {
                return 0;
            }
            break;
        case 1:
            if (M2C_FIELD(arg0, s16 *, 0x32E) >= M2C_FIELD(arg0, s16 *, 0x2BA)) {
                return 0;
            }
            break;
        case 6:
            switch (get_slot_count__14TItemProShieldFPv(arg1)) {
            case 0:
                if (((s32 (*)(void *, int))obj_testFlags30)(arg0, 1) == 0) {
                    return 0;
                }
                break;
            case 1:
                if (((s32 (*)(void *, int))obj_testFlags30)(arg0, 2) == 0) {
                    return 0;
                }
                break;
            }
            break;
        case 3:
            if (!(get_recovery_need_flags__10TObjPlayerFPv(arg0) & 4)) {
                return 0;
            }
            break;
        case 4:
            if (M2C_FIELD(arg0, u32 *, 0x424) != 0) {
                p = find_by_pos__11TMainCursorFiss(M2C_FIELD(arg0, u32 *, 0x424), 4, 9);
                if (p == 0) {
                    return 0;
                }
                TObjPlayer__sub_80116620((void *)(p + 0x9C), 0);
                if (get_type_id__10TObjPlayerFPv() == 0xFFFF) {
                    return 0;
                }
            }
            break;
        case 7:
            if (is_flag_clear__17TObjWarpBossMultiFPv(arg0) == 0) {
                return 0;
            }
            break;
        }
        break;
    }
    return 1;
}

s32 can_use_camera_field__10TObjPlayerFi(s32 arg0) {
    if ((((s32 (*)(void))check_flag_100__10TObjPlayerFPv)() != 0) || (((s32 (*)(s32))get_camera_field__10TObjPlayerFPv)(arg0) == 0) || (reset_key_machine_state__10TObjPlayerFv() == 0)) {
        return 0;
    }
    return 1;
}

s32 dispatch_palette_action__10TObjPlayerFiUi(s32 arg0, u32 arg1) {
    switch (arg1) {
    case 0:
        return ((s32)try_use_item_by_type__10TObjPlayerFPviii((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (0))), (int)((int)((int) (0)))));
    case 1:
        return ((s32)try_use_item_by_type__10TObjPlayerFPviii((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (0))), (int)((int)((int) (1)))));
    case 2:
        return ((s32)try_use_item_by_type__10TObjPlayerFPviii((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (0))), (int)((int)((int) (2)))));
    case 3:
        return ((s32)try_use_item_by_type__10TObjPlayerFPviii((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (1))), (int)((int)((int) (0)))));
    case 4:
        return ((s32)try_use_item_by_type__10TObjPlayerFPviii((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (1))), (int)((int)((int) (1)))));
    case 5:
        return ((s32)try_use_item_by_type__10TObjPlayerFPviii((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (1))), (int)((int)((int) (2)))));
    case 6:
        return ((s32)try_use_item_by_type__10TObjPlayerFPviii((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (6))), (int)((int)((int) (0)))));
    case 7:
        return ((s32)try_use_item_by_type__10TObjPlayerFPviii((void *)((void *)((void *) (arg0))), (int)((int)((int) (3))), (int)((int)((int) (6))), (int)((int)((int) (1)))));
    case 8:
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (3)));
    case 9:
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (4)));
    case 10:
        reset_slots__10TObjPlayerFPv((void *) (arg0 + 0x428));
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (5)));
    case 11:
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (7)));
    case 12:
        return check_can_add_item__10TObjPlayerFPvcc((void *)((void *) (arg0)), (s8)((int) (3)), (s8)((int) (8)));
    case 13:
        return send_trap_packet__10TObjPlayerFPvi((void *) (arg0), (int) (0));
    case 14:
        return send_trap_packet__10TObjPlayerFPvi((void *) (arg0), (int) (1));
    case 15:
        return send_trap_packet__10TObjPlayerFPvi((void *) (arg0), (int) (2));
    case 16:
        return send_trap_packet__10TObjPlayerFPvi((void *) (arg0), (int) (3));
    default:
        return 0;
    }
}

int get_result_entry__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF460((char*)p + 0x340); }

int get_player_rank__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF47C((char*)p + 0x340); }

int get_field_340__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF488((char*)p + 0x340); }

int get_player_result__18TChallenge4PResultFPv(void* p) { return TObjPlayer__sub_801BF4A0((char*)p + 0x340); }

s32 handle_palette_button_input__10TObjPlayerFPv(u8 *arg0) {
    if (check_action_usable__10TObjPlayerFPvi(arg0 + 0x550, 4) != 0 && ((int (*)(void *, s32))get_result_entry__18TChallenge4PResultFPv)(arg0, 1) != 0) {
        s32 mode;
        void *target;
        if (((s32 (*)(void *))has_action_palette_entry__10TObjPlayerFPv)(arg0) != 0) {
            target = find_entity_by_id(get_id__11TMainCursorFPv(*(u8 **)(arg0 + 0x424) + 0x4F8));
            mode = 0;
        } else {
            target = 0;
            mode = 1;
        }
        if (execute_palette_action__10TObjPlayerFPviPv(arg0, mode, target) != 0) {
            dispatch_to_child__11TWindowCtrlFiPv(obj_getField1c(arg0), 1);
            return 1;
        }
    } else if (check_action_usable__10TObjPlayerFPvi(arg0 + 0x550, 0x400) != 0 && ((int (*)(void *, s32))get_result_entry__18TChallenge4PResultFPv)(arg0, 2) != 0) {
        if (TObjPlayer__sub_80354D5C(obj_getField1c(arg0)) != 0 && handle_input_forward__20TWindowActionPaletteFPv(arg0 + 0x500) != 0) {
            if (is_player_valid_target__10TObjPlayerFi(obj_getField1c(arg0)) != 0) {
                TObjPlayer__sub_80354BE4(obj_getField1c(arg0));
            }
        } else if (execute_palette_action__10TObjPlayerFPviPv(arg0, 2, 0) != 0) {
            dispatch_to_child__11TWindowCtrlFiPv(obj_getField1c(arg0), 2);
            return 1;
        }
    } else if (check_action_usable__10TObjPlayerFPvi(arg0 + 0x550, 2) != 0 && ((int (*)(void *, s32))get_result_entry__18TChallenge4PResultFPv)(arg0, 3) != 0 &&
               execute_palette_action__10TObjPlayerFPviPv(arg0, 3, 0) != 0) {
        dispatch_to_child__11TWindowCtrlFiPv(obj_getField1c(arg0), 3);
        return 1;
    }
    return 0;
}

s32 execute_palette_action__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2) {
    u8 *self = (u8 *)arg0;
    s16 kind;
    s16 act;
    kind = ((s32 (*)(void *, s32))TObjPlayer__sub_801B5AF8)(arg0, arg1);
    act = ((s32 (*)(void *, s32))get_action_palette_entry__10TObjPlayerFii)(arg0, arg1);
    set_action_palette_mode__10TObjPlayerFPv(self + 0x340, kind);
    update_action_palette__10TObjPlayerFPv(self + 0x340, act);
    switch (kind) {
    case 0:
        return 0;
    case 1:
        if (arg2 == NULL) {
            return 0;
        }
        if (is_target_valid__10TObjPlayerFPv(arg0) != 0) {
            ((VObj_801B3DD4 *)arg2)->m11(obj_getField1c(arg0));
            return 1;
        }
        break;
    case 2:
        set_action_type__10TObjPlayerFPvs(self + 0x7CC, act);
        if (check_mode_action__10TObjPlayerFii(arg0, act) != 0) {
            if (get_attached_float_24__10TObjPlayerFPv(self + 0x550) >= lbl_805DC290) {
                ((Player_801B3DD4 *)arg0)->f60 = ((s32 (*)(void *, s32))calc_scaled_value__10TObjPlayerFii)(arg0, get_target_field_1c__10TObjPlayerFPv(self + 0x550));
            }
            run_action_state_phase__10TObjPlayerFisi(arg0, 5, 5);
            return 1;
        }
        break;
    case 3:
        if (try_camera_action__10TObjPlayerFii(arg0, act) != 0) {
            set_technique_id__10TObjPlayerFPvs(self + 0x428, act);
            run_action_state_phase__10TObjPlayerFisi(arg0, 8, 5);
            return 1;
        }
        break;
    case 4:
        if (((s32 (*)(void *))can_use_camera_field__10TObjPlayerFi)(arg0) != 0 && ((s32 (*)(void *, s16))dispatch_palette_action__10TObjPlayerFiUi)(arg0, act) != 0) {
            return 1;
        }
        break;
    case 5:
        if (check_conditions__10TObjPlayerFi(arg0, act) != 0) {
            set_photon_blast_kind(self + 0x4AC, act);
            run_action_state_phase__10TObjPlayerFisi(arg0, 9, 5);
            return 1;
        }
        break;
    case 6:
        if (is_player_valid_target__10TObjPlayerFi(obj_getField1c(arg0)) != 0) {
            TObjPlayer__sub_80354BE4(obj_getField1c(arg0));
        }
        break;
    default:
        return 0;
    }
    return 0;
}

int TObjPlayer__sub_801B3FD8(void* p) { return reset_ring__10TObjPlayerFPv((char*)p + 0x63c); }

int attach_battle_ctrl_sub__10TObjPlayerFPv(void* p) { return clear_target_lock__10TObjPlayerFPv((char*)p + 0x63c); }

int forward_1BF500_at_63c__10TObjPlayerFPv(void* p) { return clear_flag0_bit1__10TObjPlayerFPv((char*)p + 0x63c); }

int TObjPlayer__sub_801B4044(void* p) { return set_flag_2__10TObjPlayerFPv((char*)p + 0x63c); }

s32 classify_action_state__10TObjPlayerFv(void) {
    s8 temp_r3;

    temp_r3 = ((s8 (*)(void))get_class_index__10TObjPlayerFPv)();
    switch (temp_r3) {
    case 5:
    case 9:
    case 2:
        return 1;
    case 4:
        return 2;
    default:
        return 0;
    }
}

int update_foot_stamp__10TObjPlayerFPvi(void *arg0, int arg1) {
    if (arg1 == 1) {
        clear_foot_stamp__10TObjPlayerFii((u8 *)arg0 + 0x384, arg0);
    } else if (arg1 == 2) {
        enable_foot_stamp__10TObjPlayerFii((u8 *)arg0 + 0x384, arg0);
    }
}

s32 test_ordered_anim_markers__10TObjPlayerFPvff(u8 *arg0, f32 farg0, f32 farg1) {
    if (objInBand__FP7GameObjf(arg0, farg0) != 0) {
        return 1;
    }
    return (objInBand__FP7GameObjf(arg0, farg1) != 0) ? 2 : 0;
}

void emit_footstep_effect__10TObjPlayerFiff(s32 arg0, f32 farg0, f32 farg1) {
    s32 temp_r3;
    s32 temp_r3_2;
    if ((((s32 (*)(void))test_flag_2000000__10TObjPlayerFPv)() == 0) && (temp_r3 = ((s32)test_ordered_anim_markers__10TObjPlayerFPvff((u8 *)((void *)((void *) (arg0))), (f32) (farg0), (f32) (farg1))), ((temp_r3 == 0) == 0))) {
        temp_r3_2 = get_contact_surface_type((void *) (arg0 + 0x360));
        switch (temp_r3_2) {
        case 1:
            emit_grass_footstep_effect((void *) (arg0 + 0x384));
            return;
        case 2:
            emit_water_footstep_effect((void *) (arg0 + 0x384));
            return;
        case 3:
            emit_sand_footstep_effect((void *) (arg0 + 0x384));
            return;
        case 4:
            ((M2C_UNK)update_foot_stamp__10TObjPlayerFPvi((void *)((void *) (arg0)), (int)((int) (temp_r3))));
            return;
        case 0:
            if (is_timer_running((void *) (arg0 + 0x360)) != 0) {
                update_foot_stamp__10TObjPlayerFPvi((void *)((void *) (arg0)), (int)((int) (temp_r3)));
            }
            break;
        }
    }
}

void play_footstep_sound__10TObjPlayerFi(s32 arg0) {
    if (((int (*)(void))test_ordered_anim_markers__10TObjPlayerFPvff)() != 0) {
        ((s32 (*)(s32, s32))send_field_state_if_active__10TObjPlayerFii)(arg0, get_footstep_floor_index__10TObjPlayerFv(arg0));
    }
}

void update_rotation__10TObjPlayerFPv(void *arg0) {
    if ((check_camera_mode__10TObjPlayerFv() == 0) && (((s32 (*)(void *))reset_volopt_state__10TObjPlayerFv)(arg0) != 0) && (((s32 (*)(void))is_technique_ready__8TTecCtrlFv)() == 0) && (obj_isState3_324(arg0) == 0)) {
        set_hp_clamped__10TObjPlayerFPvs(arg0, (s16) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 2));
        return;
    }
    set_hp_clamped__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0x2B8));
    set_facing__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0x2BA));
}

void revive__10TObjPlayerFPv(void *arg0) {
    struct VObj_801B4340_801B3FD8 *o = (struct VObj_801B4340_801B3FD8 *)arg0;
    ((M2C_UNK (*)(void))update_rotation__10TObjPlayerFPv)();
    o->m53();
    ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)(arg0, 0xE00);
    TObjPlayer__sub_8011E204(arg0, 1);
}

void handle_6xA1_revive_player_v3(void *arg0) {
    struct pkt_801B1674 pkt;
    set_code_161_1__10TObjPlayerFPv((void *)((M2C_UNK *)(&pkt)));
    revive_6xA1__10TObjPlayerFi((s32)((s32)((s32) &pkt)), (void *)((void *)(arg0)));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6xA1_revive_player_v3(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.player_id);
        if (p != NULL) {
            revive__10TObjPlayerFPv((void *)(p));
        }
    }
}

s32 revive_6xA1__10TObjPlayerFi(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void TObjPlayer__sub_801B4430(s32 arg0) {
    struct S801B4430_801b4430_801B3FD8 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_161_1__10TObjPlayerFPv(&sp8);
        sp8.h = ((s16 (*)(s32))obj_getField1c)(arg0);
        update_font__10TObjPlayerFPv(&sp8);
    }
}

void handle_6x32_medical_center_revive_all_players(void) {
    s32 i;
    void *p;
    void **pp = player_slot_table;
    for (i = 0; i < 4; i++, pp++) {
        p = *pp;
        if (p != NULL && obj_isState3_324(p) != 0) {
            recover_full__10TObjPlayerFPv(p);
        }
    }
}

void send_code50_packet__10TObjPlayerFi(s32 arg0) {
    struct S801B44EC_801b44ec_801B3FD8 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_50_1__10TObjPlayerFPv(&sp8);
        sp8.h = ((s16 (*)(s32))obj_getField1c)(arg0);
        send_font_state__10TObjPlayerFPv(&sp8);
    }
}

void recover_full__10TObjPlayerFPv(void *arg0) {
    struct VObj_801B4540_801B3FD8 *o = (struct VObj_801B4540_801B3FD8 *)arg0;
    ((M2C_UNK (*)(void))play_voice_pair__10TObjPlayerFPv)();
    o->m53();
    ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)(arg0, 0xE00);
    TObjPlayer__sub_8011E204(arg0, 1);
}

void handle_6x31_use_medical_center(void *arg0) {
    struct pkt_801B1674 pkt;
    set_code_49_1__10TObjPlayerFPv((void *)((M2C_UNK *)(&pkt)));
    update_medical_font__10TObjPlayerFi((s32)((s32)((s32) &pkt)), (void *)((void *)(arg0)));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x31_use_medical_center(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.player_id);
        if (p != NULL) {
            recover_full__10TObjPlayerFPv((void *)(p));
        }
    }
}

s32 update_medical_font__10TObjPlayerFi(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void send_code_49_1__10TObjPlayerFi(s32 arg0) {
    struct S801B4630_801B3FD8 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_49_1__10TObjPlayerFPv(&sp8);
        sp8.h = ((s16 (*)(s32))obj_getField1c)(arg0);
        bswap_font_lobby__10TObjPlayerFPv(&sp8);
    }
}

s32 get_recovery_need_flags__10TObjPlayerFPv(void *arg0) {
    s32 var_r31;
    var_r31 = 0;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) < (s16) M2C_FIELD(arg0, s16 *, 0x2B8)) {
        var_r31 |= 1;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32E) < (s16) M2C_FIELD(arg0, s16 *, 0x2BA)) {
        var_r31 |= 2;
    }
    if (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x3F) != 0) {
        var_r31 |= 4;
    }
    switch (obj_getArrWord_254(arg0, 2)) {
    case 0xB:
        var_r31 |= 4;
        break;
    }
    switch (obj_getArrWord_254(arg0, 3)) {
    case 0xC:
        var_r31 |= 4;
        break;
    }
    return var_r31;
}

s32 can_use_action__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(s32, M2C_UNK))check_action_usable__10TObjPlayerFPvi)(arg0 + 0x550, 0x200) == 0) {
        return 0;
    }
    if (((s32 (*)(s32))check_flag_100__10TObjPlayerFPv)(arg0) != 0) {
        return 0;
    }
    if (test_action_mask__10TObjPlayerFPvi(arg0, 0x200) != 0) {
        return 0;
    }
    return is_ready__15TFontSmallLobbyFPv(arg0 + 0x4AC) != 0 ? 1 : 0;
}

void send_field_state__10TObjPlayerFPv(void* p) { emit_photon_blast_feedback_from_packet__10TObjPlayerFPv((char*)p + 0x384); ((int (*)(void*, void*))send_field_state_if_active__10TObjPlayerFii)(p, (void*)142625); }

void update_target__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_current_target_id__10TObjPlayerFv();
    if (((u16)temp_r3 == 0xFFFF) || ((u16)temp_r3 == ((u16 (*)(s32))obj_getField1c)(arg0))) {
        reset_targets__15TFontSmallLobbyFi(arg0 + 0x4AC);
        return;
    }
    fn_801C1F1C(arg0 + 0x4AC);
    if (can_use_action__10TObjPlayerFi(arg0) != 0) {
        draw_party_label__15TFontSmallLobbyFiUis(arg0 + 0x4AC, arg0, temp_r3);
    }
}

s32 is_target_valid__10TObjPlayerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0U) {
        return 0;
    }
    if (((u16) M2C_FIELD(arg0, u16 *, 0x94) != 0xFFFF) || (((s32 (*)(void))check_flag_100__10TObjPlayerFPv)() != 0) || (is_cursor_clear__11TMainCursorFPv(M2C_FIELD(arg0, u32 *, 0x424)) == 0) || (check_flag_0x40000000__10TObjPlayerFPv(arg0) != 0) || (((s32 (*)(void *, M2C_UNK))test_action_mask__10TObjPlayerFPvi)(arg0, 0x1E) == 0)) {
        return 0;
    }
    return 1;
}

void update_subsystems__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(void))is_locally_controlled__10TObjPlayerFPv)() != 0) {
        ((M2C_UNK (*)(s32))check_level_up__10TObjPlayerFPv)(arg0);
        ((M2C_UNK (*)(s32))sync_status_effect_flags__10TObjPlayerFPv)(arg0);
        ((M2C_UNK (*)(s32))clear_action_flag__10TObjPlayerFPv)(arg0);
        update_target__10TObjPlayerFi((s32)(arg0));
        if ((check_player_flag1__6TLobbyFPv(arg0) != 0) && (TObjPlayer__sub_801BF57C(arg0 + 0x730) >= 0) && (TObjPlayer__sub_801BF560(arg0 + 0x730) == 0)) {
            ((M2C_UNK (*)(s32))send_code_45_1__10TObjPlayerFi)(arg0);
        }
        update_target_lock__10TObjPlayerFii(arg0 + 0x63C, arg0);
        if (((s32 (*)(s32))check_state_flag_1__8TItemMagFPv)(arg0 + 0x5B0) != 0) {
            update_player_scale_camera(arg0 + 0x5B0);
        }
    }
}

s32 get_battle_ctrl_id__10TObjPlayerFUs(u16 arg0) {
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3_2 = ((void * (*)(u32))get_player_by_client_id)(arg0);
    if (temp_r3_2 == NULL) {
        return 0xFFFF;
    }
    temp_r3 = M2C_FIELD(temp_r3_2, u32 *, 0x424);
    if (temp_r3 == 0U) {
        return 0xFFFF;
    }
    return ((s32 (*)(s32))get_id__11TMainCursorFPv)(temp_r3 + 0x4F8);
}

void submit_cursor_candidate(void *self) {
    s32 j;
    s32 i;
    Owner_801B4A18 *o;
    Owner_801B4A18 **pp;
    if (self != 0) {
        pp = ((Owner_801B4A18 * *)&player_slot_table);
        for (i = 0; i < 4; i++) {
            o = *pp++;
            if (o != 0 && o->menu != 0) {
                for (j = 0; j < 4; j++) {
                    Cursor_801B4A18 *c = &o->menu->cursors[j];
                    if (get_selected_entry__11TMainCursorFPv(c) != 0) {
                        try_add_target_candidate__11TMainCursorFPvPvPvPv(c, self, o, (u8 *)o->menu + 0x510);
                    }
                }
            }
        }
    }
}

void submit_target_to_player_cursor(void *target, s32 id) {
    s32 i;
    Player_801B4AC8 *player;
    Slot_801B4AC8 *entry;
    if (target == NULL || (u16)id == 0xFFFF || (u16)id >= 0x1000) {
        return;
    }
    player = ((Player_801B4AC8 *)((void * (*)(u32))get_player_by_client_id)((u16)id));
    if (player != NULL && player->cursor != NULL) {
        for (i = 0; i < 4; i++) {
            entry = &player->cursor->slots[i];
            if (get_selected_entry__11TMainCursorFPv(entry) != 0) {
                try_add_target_candidate__11TMainCursorFPvPvPvPv(entry, target, player, &player->cursor->f510);
            }
        }
    }
}

void update_facing_vector__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x404) = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0x408) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x40C) = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    ((M2C_UNK (*)(void *))update_ground_contact__10TObjPlayerFi)(arg0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x424) != 0U) {
        reset_slots__11TMainCursorFi(M2C_FIELD(arg0, void **, 0x424));
    }
    TObjPlayer__sub_801BF584(arg0 + 0x360);
}

void clear_action_flag__10TObjPlayerFPv(void *arg0) {
    if ((TObjPlayer__sub_801C2044(M2C_FIELD(arg0, s32 *, 0xD00) + 0x20) == 0) && (((u32 (*)(void *))is_action_active__10TObjPlayerFPv)(arg0) != 0U)) {
        clear_flag_0x2__10TObjPlayerFPv(arg0);
        send_code_45_1__10TObjPlayerFi((s32)(arg0));
    }
}

void apply_material_color_override__10TObjPlayerFi(s32 arg0) {
    if (!(get_mag_scale_f__10TObjPlayerFPv((void *) (arg0 + 0x608)) >= TObjPlayer__data_805DC294)) {
        reset_transform_state__10TObjPlayerFv();
        some_id_805c6f74 |= 0x810;
        set_chunk_material_override_pair((int) (-1), (int) (0x800));
        set_chunk_material_color((void *) (arg0 + 0x624));
    }
}

s32 get_battle_ctrl_flag__10TObjPlayerFUs(u16 arg0) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(s32))get_player_by_client_id)((u16)arg0);
    if ((temp_r3 != 0) && (((s32 (*)(void))is_on_current_floor__10TObjPlayerFi)() != 0)) {
        return temp_r3;
    }
    return 0;
}

void fill_player_record__10TObjPlayerFPvPv(Src_801B4CE4 *src, Dst_801B4CE4 *dst) {
    s32 j;
    s32 i;
    s32 a;
    s32 b;
    u32 v;
    dst->f0 = ((s16 (*)(s32))obj_getField1c)((s32)src);
    dst->f2 = src->f2E;
    dst->f4 = src->f30 & ~0x02000000;
    VecCopy__FP3VecPC3Vec(dst->f8, src->pos38);
    copy_xyz__10TObjPlayerFPvPv(dst->f14, src->f5C);
    dst->f20 = src->f326;
    dst->f22 = src->f32C;
    for (i = 0; i < 5; i++) {
        TObjPlayer__sub_801BEF44(&dst->f28[i], &src->f254[i]);
    }
    copy_header_struct__6TLobbyFPvPv(dst->f68, src->fDAC);
    TObjPlayer__sub_801BEF30(dst->f70, src->f828);
    copy_player_record_header__10TObjPlayerFPvPv(dst->f78, src->f830);
    TObjPlayer__sub_801BEEE0(dst->f94, src->f858);
    TObjPlayer__sub_801BEEAC(dst->f98, src->f730);
    dst->fAC = ((s32 (*)(void *))get_field_3e0__12TBoss3VoloptFPv)(src);
    dst->f488 = get_field_3e4__10TObjPlayerFPv(src);
    dst->fB0 = src->f334;
    dst->f64 = ((s32 (*)(void *))TObjPlayer__sub_801AFD8C)(src);
    copy_player_visual_record(dst->fC8, src->f85C);
    dst->f13C = run_state_query__10TObjPlayerFPvi(src->fD00, dst->f140);
    a = obj_getS16_32C(src);
    b = obj_getS16_32E(src);
    for (i = 0; i != 0xD; i++) {
        Equip_801B4CE4 *e = get_equip_field_d04__10TObjPlayerFPv(src, i);
        if (e != NULL) {
            e->store(1);
        }
    }
    copy_data__6TLobbyFPvPv(dst->f118, src->f2B0);
    dst->f24 = get_stat__10TObjPlayerFPv(src);
    dst->f26 = get_stat_bonus__10TObjPlayerFPv(src);
    TObjPlayer__sub_801BE864(dst, get_field_374__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE838(dst, get_field_374_state__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE80C(dst, get_inventory_state__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE7E0(dst, get_equip_flags__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE7B4(dst, TObjPlayer__sub_801BE7BC(src));
    for (i = 0; i < 0x13; i++) {
        split_capped_value__10TObjPlayerFUcPvPv(TObjPlayer__sub_801C0124(src->f428, i), &dst->fB4[i], &dst->f142[i]);
    }
    for (j = 0; j != 0xD; j++) {
        Equip_801B4CE4 *e = get_equip_field_d04__10TObjPlayerFPv(src, j);
        if (e != NULL) {
            e->restore(1);
        }
    }
    ((void (*)(void *, s32))set_hp_clamped__10TObjPlayerFPvs)(src, a);
    ((void (*)(void *, s32))set_facing__10TObjPlayerFPvs)(src, b);
    TItem__sub_80101CF4(dst);
    v = TObjPlayer__sub_801BFFA0(src->f41C);
    dst->f142[0].b[1] = v;
    dst->f142[1].b[1] = v >> 8;
    dst->f142[2].b[1] = v >> 16;
    dst->f142[3].b[1] = v >> 24;
    TObjPlayer__sub_801BE7A4(dst, get_mag_level__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE794(dst, get_byte_339__10TObjPlayerFPv(src));
    TObjPlayer__sub_801BE784(dst, get_battle_mode__10TObjPlayerFPv(src));
    bswap_player_data__6TLobbyFi(dst);
}

Obj_801B4FD8 *init_player_join_record(Obj_801B4FD8 *self) {
    s32 i;
    __construct_array(self->f28, init_192dc_return_self__10TObjPlayerFPv, 0, 0xC, 5);
    clear_header_struct__10TObjPlayerFPv(self->f68);
    TObjPlayer__sub_801C1A00(self->f70);
    init_player_telepipe_record(self->f78);
    init_forward__10TObjPlayerFPv(self->f94);
    TObjPlayer__sub_801BF660(self->f98);
    init_inventory_list__10TObjPlayerFPv(self->f13C);
    self->f0 = 0xFFFF;
    self->f2 = 0;
    self->f4 = 0;
    self->f8 = self->fC = self->f10 = TObjPlayer__data_805DC278;
    self->f14 = self->f18 = self->f1C = 0;
    self->f20 = 0;
    self->f22 = 0;
    self->f24 = 0;
    self->f26 = 0;
    self->f64 = 0;
    self->fAC = 0;
    self->f488 = 0;
    self->fB0 = 0;
    for (i = 0; i < 0x13; i++) {
        self->fB4[i] = get_item_count_max__10TObjPlayerFv();
    }
    return self;
}

#pragma push
#pragma fp_contract on
s32 is_outside_movement_hold__10TObjPlayerFPvPv(u8 *self, f32 *pos) {
    f32 *center;
    f32 x, y, z;
    f32 dx, dz;
    if (((s32 (*)(void))check_player_flag1__6TLobbyFPv)() == 0) {
        return 0;
    }
    center = TObjPlayer__sub_801BF6B8(self + 0x730);
    x = center[0];
    y = pos[0];
    z = center[1];
    dx = x - y;
    dz = z - pos[2];
    return (u32)__cntlzw(TObjPlayer__sub_801BF6B0(self + 0x730, z, y, x) > (dx * dx + dz * dz)) >> 5;
}
extern int fold_flush_3;
#pragma pop

void handle_6x2D_release_hold(void *arg0) {
    struct pkt_801B5164 pkt;
    set_code_45_1__10TObjPlayerFPv(&pkt);
    draw_small_font__10TObjPlayerFi((s32)((s32) &pkt), (void *)(arg0));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x2D_release_hold(&pkt) != 0) {
        u8 *p = (u8 *) ((s32 (*)(s32))get_player_by_client_id)(pkt.player_id);
        if (p != NULL) {
            ((void (*)(u8 *, int))TObjPlayer__sub_8011E204)(p, 1);
        }
    }
}

s32 draw_small_font__10TObjPlayerFi(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void send_code_45_1__10TObjPlayerFi(s32 arg0) {
    struct S801B5200_801B3FD8 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_45_1__10TObjPlayerFPv(&sp8);
        sp8.h = ((s16 (*)(s32))obj_getField1c)(arg0);
        send_lobby_update_font__10TObjPlayerFPv(&sp8);
    }
}

void handle_6x2C_impose_hold(s32 arg0) {
    Pkt_801B5254 pkt;
    s32 player;
    build_6x2C_impose_hold_packet__10TObjPlayerFPv(&pkt);
    copy_hold_params__10TObjPlayerFPvPv(&pkt, arg0);
    bswap_pkt_u16x2_u32__10TObjPlayerFPv(&pkt);
    if (validate_6x2C_impose_hold(&pkt) == 0) {
        return;
    }
    player = ((s32 (*)(s32))get_player_by_client_id)(pkt.client);
    if (player == 0) {
        return;
    }
    TObjPlayer__sub_801BF6DC(player + 0x730, pkt.f6);
    TObjPlayer__sub_801BF6D4(player + 0x730, pkt.f4);
    TObjPlayer__sub_801BF6C8(player + 0x730, pkt.f8, pkt.fC);
    TObjPlayer__sub_801BF6C0(player + 0x730, pkt.f10);
    ((void (*)(s32, u32))set_state_flags__10TObjPlayerFPvUi)(player, 1);
    if (((s32 (*)(s32))check_flag_4__10TObjPlayerFPv)(player) == 0 && ((s32 (*)(s32))is_on_current_floor__10TObjPlayerFi)(player) != 0) {
        create__17TObjEneHoldEffectFPvPvPv(player, pkt.f6, pkt.f4);
    }
}

void send_6x2C_impose_hold(s32 arg0, struct Vec_801B5328 *pos, s16 arg2, s16 arg3, f32 radius) {
    struct Pkt_801B5328 pkt;
    if (arg0 == 0 || obj_isState2_324() == 0) {
        build_6x2C_impose_hold_packet__10TObjPlayerFPv(&pkt);
        pkt.actor_id = ((s16 (*)(s32))obj_getField1c)(arg0);
        pkt.b = arg3;
        pkt.a = arg2;
        pkt.x = pos->x;
        pkt.z = pos->z;
        pkt.radius_sq = radius * radius;
        bswap_and_send_packet__10TObjPlayerFi(&pkt);
    }
}

void play_effect__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    ((M2C_UNK (*)(s32, s32, s32, s32, f32))send_6x2C_impose_hold)(arg0, get_position_ptr__10TObjPlayerFPv(), arg1, arg2, (*(f32 *)&TObjPlayer__data_805DC278));
}

void play_effect_default__10TObjPlayerFii(s32 arg0, s32 arg1) {
    ((M2C_UNK (*)(s32, s32, s32, M2C_UNK, f32))send_6x2C_impose_hold)(arg0, get_position_ptr__10TObjPlayerFPv(), arg1, 0, (*(f32 *)&TObjPlayer__data_805DC278));
}

void init_trait_flags__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2E4) = 0;
    if (get_move_mode__10TObjPlayerFPv((void *)((void *) (arg0))) & 0x10) {
        add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (4));
    } else {
        add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (1));
    }
    if (get_move_mode__10TObjPlayerFPv((void *)((void *) (arg0))) & 0x40) {
        add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (0x20));
    }
}

s32 get_clamped_index__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3D8);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return temp_r3;
}

void set_move_mode__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_move_mode__10TObjPlayerFPv((void *)(arg0));
    if (temp_r3 & 0x10) {
        set_move_mode__10TObjPlayerFPvi(arg0, 2);
        return;
    }
    if (temp_r3 & 8) {
        set_move_mode__10TObjPlayerFPvi(arg0, 1);
        return;
    }
    set_move_mode__10TObjPlayerFPvi(arg0, 0);
}

void apply_input_mode__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_move_mode__10TObjPlayerFPv((void *)(arg0));
    if (temp_r3 & 0x20) {
        set_input_mode__10TObjPlayerFPvi(arg0, 0);
        return;
    }
    if (temp_r3 & 0x40) {
        set_input_mode__10TObjPlayerFPvi(arg0, 1);
        return;
    }
    set_input_mode__10TObjPlayerFPvi(arg0, 2);
}

void select_class_action_provider__10TObjPlayerFPv(u8 *arg0) {
  s8 temp_r3;
  temp_r3 = ((s8 (*)(void *))get_class_index__10TObjPlayerFPv)((void *) arg0);
  {
    switch (temp_r3)
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 7:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 0);
        return;
      case 1:
      case 5:
      case 8:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 1);
        return;
      case 6:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 2);
        return;
      case 9:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 4);
        return;
      case 10:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 3);
        return;
      case 11:
        forward_801C210C__10TObjPlayerFPv((int) (*((s32 *) (((s8 *) arg0) + 0x380))), (int) 5);
        break;
    }
  }
}

int has_valid_handle__10TObjPlayerFPv(void* p) { return is_handle_valid__10TObjPlayerFPv(*(void**)((char*)p + 0x380)); }

int check_flag_100__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))check_flag__10TObjPlayerFPvi)(p, 256); }

void init_parts__10TObjPlayerFPv(void* p) { fn_8019DD24((char*)p + 0x550, (void*)1030); get_player_rank__18TChallenge4PResultFPv(p); ((int (*)(void*, void*))TObjPlayer__sub_8011E204)(p, (void*)256); }

void reset_equip_slots__10TObjPlayerFPv(void* p) { mask_action_buttons((char*)p + 0x550, (void*)1030); ((int (*)(void*, void*))get_player_result__18TChallenge4PResultFPv)(p, (void*)0); ((int (*)(void*, void*))get_player_result__18TChallenge4PResultFPv)(p, (void*)1); ((int (*)(void*, void*))get_player_result__18TChallenge4PResultFPv)(p, (void*)2); ((int (*)(void*, void*))get_player_result__18TChallenge4PResultFPv)(p, (void*)3); ((int (*)(void*, void*))set_state_flags__10TObjPlayerFPvUi)(p, (void*)256); }

s32 get_camera_field__10TObjPlayerFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x424);
    if (p != 0) {
        return ((s32 (*)(void *))is_cursor_clear__11TMainCursorFPv)(p);
    }
    return 0;
}

void release_attached_resource__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) set_flags_bit1__10TObjPlayerFPv(m); }

void action_enable_if_present__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) clear_flag_1_at_1c__10TObjPlayerFPv(m); }

int TObjPlayer__sub_801B57E8(void) { return 0; }

s32 is_quest_interaction_blocked__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, u32 *, 0x424) == 0U) {
        return 0;
    }
    switch ((u16) get_action_palette_entry__10TObjPlayerFii((s32) arg0, 0)) {
    case 0:
    case 2:
        return 0;
    case 1:
    default:
        return 0;
    }
}

s32 has_action_palette_entry__10TObjPlayerFPv(u8 *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x424) != 0U) && (((u16)get_action_palette_entry__10TObjPlayerFii((s32)((void *)((void *)(arg0))), (s32)((int)((int) (0))))) != 0)) {
        return 1;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
s32 is_action_channel_available__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        if (((s32 (*)(void))is_flag_400_set__10TObjPlayerFPv)() != 0) {
            return 1;
        }
        if (has_action_palette_entry__10TObjPlayerFPv((u8 *)(arg0)) != 0) {
            return 1;
        }
        goto block_5;
    }
block_5:
    return is_action_channel_active(refresh_effect__10TObjPlayerFi(arg0), arg1);
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma fp_contract on
void is_effect_channel_active__10TObjPlayerFii(s32 arg0, s32 arg1) {
    is_action_channel_active(refresh_effect__10TObjPlayerFi(arg0), arg1);
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma fp_contract on
void refresh_party_cursors__10TObjPlayerFi(s32 arg0) {
    update_party_cursors__10TObjPlayerFii(refresh_effect__10TObjPlayerFi(arg0), arg0);
}
extern int fold_flush_6;
#pragma pop

#pragma push
#pragma scheduling off
void set_action_palette_entry__10TObjPlayerFiiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    set_palette_entry__20TWindowActionPaletteFiiiii((s32)((TObjPlayer*)arg0)->select_action_palette(arg1), arg2, arg3, arg4, arg5);
}
extern int fold_flush_7;
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_801B5A44(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    set_slot_by_index__20TWindowActionPaletteFiiii((s32)((TObjPlayer*)arg0)->select_action_palette(arg1), arg2, arg3, arg4);
}
extern int fold_flush_8;
#pragma pop

#pragma push
#pragma scheduling off
void select_action_palette_and_apply__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    TWindowActionPalette__sub_801C1D7C((s32)((TObjPlayer*)arg0)->select_action_palette(arg1), arg2, arg3);
}
extern int fold_flush_9;
#pragma pop

#pragma push
#pragma fp_contract on
s32 get_action_palette_entry__10TObjPlayerFii(s32 arg0, s32 arg1) {
    return get_entry_by_index__20TWindowActionPaletteFPvi(refresh_effect__10TObjPlayerFi(arg0), arg1);
}
extern int fold_flush_10;
#pragma pop

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_801B5AF8(s32 arg0, s32 arg1) {
    get_slot_type_for_index__20TWindowActionPaletteFPvi(refresh_effect__10TObjPlayerFi(arg0), arg1);
}
extern int fold_flush_11;
#pragma pop

}
TObjPlayer::ActionPalette* TObjPlayer::select_action_palette(int secondary) {
    if (secondary == 1) {
        return (ActionPalette*)fn_801C1E48((s32)action_palettes);
    }
    return (ActionPalette*)fn_801C1E44((s32)action_palettes);
}

extern "C" {
s32 refresh_effect__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) != 0) {
        if (test_photon_blast_modifier(arg0 + 0x500) != 0) {
            return fn_801C1E44(arg0 + 0x500);
        }
        return fn_801C1E48(arg0 + 0x500);
    }
    return fn_801C1E44(arg0 + 0x500);
}

void select_contextual_pickup_action__10TObjPlayerFv(u8 *arg0) {
    s32 type;
    s32 cursor;
    s32 ent;
    u32 obj;
    obj = M2C_FIELD(arg0, u32 *, 0x424);
    if (obj != 0U) {
        cursor = obj + 0x4F8;
        type = 0;
        if (((u16 (*)(s32))get_id__11TMainCursorFPv)(cursor) != 0xFFFF) {
            ent = ((s32 (*)(u16))find_entity_by_id)(((u16 (*)(s32))get_id__11TMainCursorFPv)(cursor));
            if (ent != 0) {
                type = fn_8013F264(ent);
                if (type != 0) {
                    switch (type) {
                    case 4:
                        if (((s32 (*)(void *, M2C_UNK))test_action_mask__10TObjPlayerFPvi)(arg0, 0xE0) != 0) {
                            type = 0;
                        } else {
                            s32 item = ((s32 (*)(u16))find_entity_by_id)(((u16 (*)(s32))get_id__11TMainCursorFPv)(cursor));
                            if (((s32 (*)(void *, s32))can_pickup_item_by_id__10TObjPlayerFii)(arg0, item) != 0) {
                                if ((((s32 (*)(void *))is_flag_400_set__10TObjPlayerFPv)(arg0)) != 0) {
                                    ((M2C_UNK (*)(void *, M2C_UNK))get_field_340__18TChallenge4PResultFPv)(arg0, 1);
                                }
                            } else {
                                type = 0;
                                if (check_flag_100__10TObjPlayerFPv(arg0) == 0 && check_action_usable__10TObjPlayerFPvi(arg0 + 0x550, 4) != 0) {
                                    play_sound_effect(0x3816, ((s32 (*)(s32))get_position_ptr__10TObjPlayerFPv)(ent), 0, 1);
                                }
                            }
                        }
                        break;
                    }
                }
            }
        }
        if (type == 0 && (((s32 (*)(void *))is_flag_400_set__10TObjPlayerFPv)(arg0)) != 0) {
            type = 2;
        }
        ((void (*)(void *, s32, s32, s32, u16))TObjPlayer__sub_801B5A44)(arg0, 0, 0, 0, type);
        ((void (*)(void *, s32, s32, s32, u16))TObjPlayer__sub_801B5A44)(arg0, 0, 1, 0, type);
    }
}

void update_ground_contact__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(void))is_locally_controlled__10TObjPlayerFPv)() != 0) {
        if (try_ground_action__10TObjPlayerFPvi(arg0 + 0x550, fn_8002AE08(((s32 (*)(s32))obj_getField1c)(arg0))) != 0) {
            fn_801C1EF4(arg0 + 0x500);
            if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) != 0) {
                fn_801C1EC4(arg0 + 0x500);
            }
        } else {
            fn_801C1EA4(arg0 + 0x500);
            if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) != 0) {
                fn_801C1E74(arg0 + 0x500);
            }
        }
        refresh_party_cursors__10TObjPlayerFi((s32)((s32)(arg0)));
    }
}

s32 check_actor_blocking_move__10TObjPlayerFPv(Obj_801B5DDC *self) {
    Vec_801B5DDC pos;
    Vec_801B5DDC diff;
    Hit_801B5DDC hit;
    pos.x = self->pos.x + self->f308.x;
    pos.y = TObjPlayer__data_805DC278;
    pos.z = self->pos.z + self->f308.z;
    if (test_player_overlap_with_players(self, self, &pos, &hit) != 0) {
        if (hit.flags & 0x100) {
            return 0;
        }
        diff.x = pos.x - hit.pos.x;
        diff.y = TObjPlayer__data_805DC278;
        diff.z = pos.z - hit.pos.z;
        if (vec3_dot(&diff, &self->f308) < TObjPlayer__data_805DC278) {
            return 1;
        }
    }
    return 0;
}

s32 resolve_move_collision__10TObjPlayerFPv(Obj_801B5EA4 *arg0) {
    Vec_801B5EA4 p;
    p.x = arg0->pos.x + arg0->vel.x;
    p.y = arg0->pos.y + arg0->vel.y;
    p.z = arg0->pos.z + arg0->vel.z;
    if (arg0->v16(&p) == 0U) {
        TObjPlayer__sub_8001053C(arg0);
        return 1;
    }
    if (apply_wall_response__10TObjPlayerFv(arg0) != 0U) {
        TObjPlayer__sub_8001053C(arg0);
        return 2;
    }
    if ((TObjPlayer__sub_801BE8F4(arg0, 0, 0x380000) != 0) && (TObjPlayer__sub_801BE8F4(arg0, 0, 0x01C00000) != 0)) {
        TObjPlayer__sub_8001053C(arg0);
        return 4;
    }
    if (((s32 (*)(void *, f32 *))is_outside_movement_hold__10TObjPlayerFPvPv)(arg0, &p.x) != 0) {
        TObjPlayer__sub_8001053C(arg0);
        return 3;
    }
    return 0;
}

void damp_planar_velocity(P_801B5FB0 *p) {
    if (p->a < lbl_805DC298 && p->a > lbl_805DC29C) {
        p->a = TObjPlayer__data_805DC278;
    } else {
        p->a *= (*(const f32 *)&TObjPlayer__data_805DC28C);
    }
    if (p->b < lbl_805DC298 && p->b > lbl_805DC29C) {
        p->b = TObjPlayer__data_805DC278;
    } else {
        p->b *= (*(const f32 *)&TObjPlayer__data_805DC28C);
    }
}

void rewind_position_history__10TObjPlayerFPv(u8 *arg0) {
    Stack_801B6024 stack;
    s32 temp_r0;
    u8 *temp_r3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6AC) - 1;
    M2C_FIELD(arg0, s32 *, 0x6AC) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x6AC) = 0xF;
    }
    TObjPlayer__sub_801BE918(arg0, M2C_FIELD(arg0, s32 *, 0x6AC), &stack.sp8, &stack.sp10);
    stack.spC = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_r3 = csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x41);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 8);
    }
}

s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if ((is_flag_b0_4__10TObjPlayerFPv() != 0) && (arg1 == (s16) M2C_FIELD(arg0, s16 *, 0xBC))) {
        return 1;
    }
    return 0;
}

void handle_6x2E_set_or_clear_player_flags(void *arg0) {
    Msg_801B6110 m;
    Player_801B6110 *p;
    TObjPlayer__sub_801C0C04(&m);
    copy_pair_fields__10TObjPlayerFPvPv(&m, arg0);
    bswap_body_dwords__10TObjPlayerFi(&m);
    if (validate_6x2E_set_or_clear_player_flags(&m) != 0) {
        p = ((Player_801B6110 * (*)(s32))get_player_by_client_id)(m.slot);
        if (p != NULL) {
            p->flags = p->flags & m.andMask;
            p->flags = p->flags | m.orMask;
        }
    }
}

s16 add_stat_clamped__10TObjPlayerFiPvs(s32 arg0, s16 *arg1, s16 arg2) {
    s16 temp_r3;
    s16 var_r6;

    var_r6 = 0;
    *arg1 += arg0;
    temp_r3 = *arg1;
    if (temp_r3 < 0) {
        *arg1 = 0;
    } else {
        var_r6 = temp_r3 - arg2;
        if (var_r6 > 0) {
            *arg1 = arg2;
        }
    }
    return var_r6;
}

void add_lck__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 0xC)), (s16)(M2C_FIELD(((s16 * (*)(void))get_class_stat_entry__10TObjPlayerFPv)(), s16 *, 0xC)));
}

void add_evp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 4)), (s16)(M2C_FIELD(((s16 * (*)(void))get_class_stat_entry__10TObjPlayerFPv)(), s16 *, 4)));
}

void add_ata__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 0xA)), (s16)(M2C_FIELD(((s16 * (*)(void))get_class_stat_entry__10TObjPlayerFPv)(), s16 *, 0xA)));
}

void add_mst__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 2)), (s16)(M2C_FIELD(((s16 * (*)(void))get_class_stat_entry__10TObjPlayerFPv)(), s16 *, 2)));
}

void add_hp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 6)), (s16)(M2C_FIELD(((s16 * (*)(void))get_class_stat_entry__10TObjPlayerFPv)(), s16 *, 6)));
}

void add_dfp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 8)), (s16)(M2C_FIELD(((s16 * (*)(void))get_class_stat_entry__10TObjPlayerFPv)(), s16 *, 8)));
}

void add_stat__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0))), (s16)(*((s16 * (*)(void))get_class_stat_entry__10TObjPlayerFPv)()));
}

void TObjPlayer__vt71(s32 arg0) {
    f32 temp_f31;
    f32 temp_f1;

    temp_f31 = get_tp_class_factor__10TObjPlayerFPv();
    temp_f1 = get_class_hp_factor__10TObjPlayerFPv(arg0);
    recalc_combat_stats__10TObjPlayerFv(arg0, 0, 0, 0, temp_f1, temp_f31);
    clamp_value__10TObjPlayerFPv(arg0);
    clamp_field_32E__10TObjPlayerFPv(arg0);
}

void update_aim_angle__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    struct VObj_801B6414_801B3FD8 *obj = (struct VObj_801B6414_801B3FD8 *) arg0;
    s32 temp_r31;

    temp_r31 = get_class_state_field__10TObjPlayerFii(arg0, clamp_index_to_max__10TObjPlayerFi(arg1 + obj->m14()));
    obj->m12(temp_r31 - obj_getPtr2B0_1C(arg0));
}

void TObjPlayer__sub_801B67C4(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

void copy_stats__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
}

void notify_volopt_if_ready__10TObjPlayerFPv(void* p) { if (((int (*)(void*))is_locally_controlled__10TObjPlayerFPv)(p) != 0) { ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)335646, (void*)0, (void*)0, (void*)0); } }

void spawn_level_change_feedback__10TObjPlayerFv(s32 arg0, s32 arg1) {
    void *p;
    notify_volopt_if_ready__10TObjPlayerFPv((void *)arg0);
    p = ((void * (*)(u32))__nw__7TObjectFUl)(0x60);
    if (p != NULL) {
        __ct__14TFontSmallHelpFUlUllUl(p, ((s32 (*)(s32))obj_getField1c)(arg0), -1, 0x3C, arg1);
    }
    new_child_object__10TObjPlayerFi(((s32 (*)(s32))obj_getField1c)(arg0));
    lbl_8050BEE0[0].x = 0.0f;
    lbl_8050BEE0[0].y = -1.0f;
    lbl_8050BEE0[0].z = 0.0f;
    lbl_8050BFE0[0].r = 1.0f;
    lbl_8050BFE0[0].g = 1.0f;
    lbl_8050BFE0[0].b = 0.8f;
    lbl_8050BFE0[0].a = 0.63f;
    p = ((void * (*)(u32))__nw__7TObjectFUl)(0x64);
    if (p != NULL) {
        ((void (*)(void *, Color_801B6964 *, f32, Vec_801B6964 *, s32, s32, s32))construct_actor_light_task)(p, lbl_8050BFE0, 0.2f, lbl_8050BEE0, 10, arg0, tl_07);
    }
    publish_actor_light_scalars(((s32 (*)(s32))obj_getField1c)(arg0), 1.0f, 0.5f);
}

void handle_6x30_change_player_level(void *arg0) {
    Pkt_801B6A5C pkt;
    Plr_801B6A5C *p;
    f32 f;
    build_6x30_change_level_packet__10TObjPlayerFPv(&pkt);
    ((void (*)(Pkt_801B6A5C *, void *))copy_fields__10TObjPlayerFPvPv)(&pkt, arg0);
    swap_endian__10TObjPlayerFi(&pkt);
    if (validate_6x30_change_player_level(&pkt) == 0) {
        return;
    }
    p = ((Plr_801B6A5C * (*)(u16))get_player_by_client_id)(pkt.id);
    if (p == NULL) {
        return;
    }
    if (((s32 (*)(Plr_801B6A5C *))reset_volopt_state__10TObjPlayerFv)(p) == 0) {
        return;
    }
    p->stats->st[0] = pkt.st[0];
    p->stats->st[1] = pkt.st[1];
    p->stats->st[2] = pkt.st[2];
    p->stats->st[3] = pkt.st[3];
    p->stats->st[4] = pkt.st[4];
    p->stats->st[5] = pkt.st[5];
    p->stats->exp = pkt.exp;
    f = ((f32 (*)(Plr_801B6A5C *))get_tp_class_factor__10TObjPlayerFPv)(p);
    recalc_combat_stats__10TObjPlayerFv((s32)p, (M2C_UNK)p->stats, 0, 0, get_class_hp_factor__10TObjPlayerFPv((s32)p), f);
    p->a2 = p->a;
    p->b2 = p->b;
    if (((s32 (*)(Plr_801B6A5C *))is_alive_and_ready__10TObjPlayerFi)(p) != 0) {
        ((void (*)(Plr_801B6A5C *))refill_traps__10TObjPlayerFPv)(p);
    }
    if (((s32 (*)(Plr_801B6A5C *))check_flag_4__10TObjPlayerFPv)(p) == 0) {
        if (pkt.kind == 1) {
            spawn_level_change_feedback__10TObjPlayerFv((s32)(p), (s32)(lbl_80446F50));
        } else {
            spawn_level_change_feedback__10TObjPlayerFv((s32)(p), (s32)(lbl_80446F5C));
        }
    }
}

void *copy_fields__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) M2C_FIELD(arg1, s16 *, 0xE);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(arg1, s16 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) M2C_FIELD(arg1, s16 *, 0x12);
    return arg0;
}

void send_6x30_change_player_level(Player_801B6C30 *arg0) {
    Msg_801B6C30 m;
    Src_801B6C30 *s;
    if ((((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() != 0) && ((arg0 == NULL) || (((s32 (*)(void *))obj_isState2_324)(arg0) == 0))) {
        ((void (*)(void *))build_6x30_change_level_packet__10TObjPlayerFPv)(&m);
        m.f2 = ((s16)((u16 (*)(void *))obj_getField1c)(arg0));
        s = arg0->src;
        m.f4[0] = s->v[0];
        m.f4[1] = s->v[1];
        m.f4[2] = s->v[2];
        m.f4[3] = s->v[3];
        m.f4[4] = s->v[4];
        m.f4[5] = s->v[5];
        m.f10 = clamp_nested_index__10TObjPlayerFPv(arg0, (int)s);
        m.f12 = 0;
        send_swapped_packet_6x30__10TObjPlayerFPv(&m);
    }
}

s32 apply_exp_level_growth__10TObjPlayerFPv(Obj_801B6CE0 *self) {
    s32 i;
    s32 lvl;
    s32 cls;
    s32 e;
    cls = ((s8 (*)(void))get_class_index__10TObjPlayerFPv)();
    lvl = ((s32 (*)(void *))clamp_nested_index__10TObjPlayerFPv)(self) + 1;
    for (i = 0; i < get_max_level__10TObjPlayerFv(); i++) {
        if (lvl > get_max_level__10TObjPlayerFv()) {
            break;
        }
        e = get_ply_level_table_row(cls, lvl);
        if (e == 0) {
            break;
        }
        if (get_level_row_exp_threshold() > self->stats->exp) {
            break;
        }
        add_stat__10TObjPlayerFPvi(self, get_char_class__10TObjPlayerFPv(e));
        add_mst__10TObjPlayerFPvi(self, get_team_id__10TObjPlayerFPv(e));
        add_evp__10TObjPlayerFPvi(self, TObjPlayer__sub_801C2134(e));
        add_hp__10TObjPlayerFPvi(self, TObjPlayer__sub_801C212C(e));
        add_dfp__10TObjPlayerFPvi(self, get_byte_4__10TObjPlayerFPv(e));
        add_ata__10TObjPlayerFPvi(self, get_field_5__10TObjPlayerFPv(e));
        self->stats->level = lvl;
        lvl++;
    }
    return 1;
}

void check_level_up__10TObjPlayerFPv(u8 *arg0) {
    struct Buf1C sp40;
    struct Buf1C sp24;
    struct Buf1C sp8;
    s32 var_r31;
    u8 *temp_r31;
    s32 var_r30;
    s32 temp_r30;
    u8 *temp_r30_2;
    if ((((s32 (*)(void))is_locally_controlled__10TObjPlayerFPv)() != 0) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
        temp_r30 = ((s32 (*)(void *))clamp_nested_index__10TObjPlayerFPv)((void *) (arg0)) + 1;
        if (temp_r30 <= get_max_level__10TObjPlayerFv()) {
            if (((s32 (*)(void *, int))get_current_state_field__10TObjPlayerFv)((void *) (((s32 (*)(void *))get_class_index__10TObjPlayerFPv)((void *) (arg0))), (int) (temp_r30)) <= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), s32 *, 0x1C)) {
                reset_sub_status_disp__10TObjPlayerFPv((void *) (&sp40));
                reset_sub_status_disp__10TObjPlayerFPv((void *) (&sp24));
                reset_sub_status_disp__10TObjPlayerFPv((void *) (&sp8));
                var_r30 = 0;
                do {
                    temp_r31 = get_slot_value__10TObjPlayerFPvi(arg0 + 0xD04, var_r30);
                    if ((((s32 (*)(void))can_destroy_with_parents__10TObjPlayerFUi)() != 0) && (is_item_equipped((int) (temp_r31)) != 0)) {
                        ((VObj *)temp_r31)->m21(1);
                    }
                    var_r30 += 1;
                } while (var_r30 < 0xD);
                init_shield_params__10TObjPlayerFPvi((void *) (&sp40), (void *) (arg0), (void *) (M2C_FIELD(arg0, void **, 0x2B0)), (int) (M2C_FIELD(arg0, s32 *, 0x318)), (int) (M2C_FIELD(arg0, s32 *, 0x31C)));
                apply_exp_level_growth__10TObjPlayerFPv((Obj_801B6CE0 *)((struct Obj_801B6CE0 *) (arg0)));
                init_shield_params__10TObjPlayerFPvi((void *) (&sp24), (void *) (arg0), (void *) (M2C_FIELD(arg0, void **, 0x2B0)), (int) (M2C_FIELD(arg0, s32 *, 0x318)), (int) (M2C_FIELD(arg0, s32 *, 0x31C)));
                var_r31 = 0;
                do {
                    temp_r30_2 = get_slot_value__10TObjPlayerFPvi(arg0 + 0xD04, var_r31);
                    if ((((s32 (*)(void))can_destroy_with_parents__10TObjPlayerFUi)() != 0) && (is_item_equipped((int) (temp_r30_2)) != 0)) {
                        ((VObj *)temp_r30_2)->m20(1);
                    }
                    var_r31 += 1;
                } while (var_r31 < 0xD);
                calc_pos_delta__10TObjPlayerFPvPvPv((void *) (&sp40), (void *) (&sp24), (void *) (&sp8));
                create_level_up_window__11TWindowCtrlFii((void *) (&sp8), (void *) (((u16 (*)(void *))obj_getField1c)((void *) (arg0))));
                send_6x30_change_player_level((Player_801B6C30 *)((struct Player_801B6C30 *) (arg0)));
            }
        }
    }
}

void update_status_effects__10TObjPlayerFPv(u8 *arg0) {
  update_player_appear_fade((void *) (arg0 + 0x634));
  update_target_lock__10TObjPlayerFPv(arg0);
  if ((((VObj_18_c0d9f3 *)(arg0))->m17((3))) != 0)
  {
    if (set_flag_02000000__10TObjPlayerFPv((void *) arg0) == 0)
    {
      get_global_state__14TOKeyMachine01Fv();
      *((s16 *) (((s8 *) arg0) + 0x28)) = get_player_ctrl_field__6TSceneFUs(((u16 (*)(void *))obj_getField1c)(arg0));
    }
  }
  set_flag_2000000__10TObjPlayerFPv((void *) arg0);
  (((VObj_18_c0d9f3 *)(arg0))->m41());
  (((VObj_18_c0d9f3 *)(arg0))->m33());
  (((VObj_18_c0d9f3 *)(arg0))->m34());
  (((VObj_18_c0d9f3 *)(arg0))->m35());
  (((VObj_18_c0d9f3 *)(arg0))->m36());
  (((VObj_18_c0d9f3 *)(arg0))->m37());
  (((VObj_18_c0d9f3 *)(arg0))->m38());
  (((VObj_18_c0d9f3 *)(arg0))->m39());
  (((VObj_18_c0d9f3 *)(arg0))->m40());
  if (get_mag_id__8TItemMagFPv(arg0 + 0x644) <= 0)
  {
    ((M2C_UNK (*)(void *, int))obj_clearFlags30)((void *) arg0, (int) 0x04000100);
  }
  else
  {
    decrement_clamp__10TObjPlayerFPvi(arg0 + 0x644, 1);
    ((M2C_UNK (*)(void *, int))obj_setFlags30)((void *) arg0, (int) 0x04000000);
  }
  if ((*((s16 *) (((s8 *) arg0) + 0x32C))) <= 0)
  {
    ((M2C_UNK (*)(void *, int))obj_setFlags30)((void *) arg0, (int) 0xA00);
  }
  update_timer__10TObjPlayerFPv(arg0 + 0x360);
}

void update_position_history__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    if ((M2C_FIELD(arg0, f32 *, 0x44) != M2C_FIELD(arg0, f32 *, 0x38)) || (M2C_FIELD(arg0, f32 *, 0x4C) != M2C_FIELD(arg0, f32 *, 0x40))) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6AC) + 1;
        M2C_FIELD(arg0, s32 *, 0x6AC) = temp_r0;
        if (temp_r0 >= 0x10) {
            M2C_FIELD(arg0, s32 *, 0x6AC) = 0;
        }
        set_position_history_entry__10TObjPlayerFiiff(arg0, M2C_FIELD(arg0, s32 *, 0x6AC), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x40));
    }
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x44, arg0 + 0x38);
    update_field8__10TObjPlayerFPv(arg0 + 0x360);
}

void clear_lobby_flag__10TObjPlayerFPv(void *arg0) {
    if ((s32) lbl_805D55C0 == 0) {
        ((M2C_UNK (*)(void *, int))obj_clearFlags30)(arg0, 0x10000);
    }
}

void init_effect_5f0__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10000);
    set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0x10);
    set_anim_state__10TObjPlayerFPvs(arg0 + 0x5F0, get_idle_animation__10TObjPlayerFPv(arg0));
    set_state__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
    set_anim_state__10TObjPlayerFPvi(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
}

void get_hand_joint_position__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    ((VObj_18_p57 *)(arg0))->m63(M2C_FIELD(TObjPlayer__sub_801D8DCC(), s32 *, 0x10), arg1);
}

void calc_move__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2) { vector_length(p); ((int (*)(void*, void*))calc_move_velocity__10TObjPlayerFPvPvf)(a1, a2); }

void calc_move_velocity__10TObjPlayerFPvPvf(void *arg0, void *arg1, f32 farg0) {
    f32 temp_f1;
    s32 temp_r31;

    temp_r31 = (s32) (lbl_80446F68 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 8)));
    temp_f1 = farg0 * sin_table_lookup(temp_r31);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (farg0 * ((f32 (*)(s32, f32))cos_table_lookup)(temp_r31, temp_f1));
}

#pragma push
#pragma fp_contract on
void calc_wall_slide_point__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    f32 temp_f2;
    temp_f2 = -((f32 (*)(void))vec3_dot)();
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f2 * M2C_FIELD(arg1, f32 *, 0)) + M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((temp_f2 * M2C_FIELD(arg1, f32 *, 4)) + M2C_FIELD(arg0, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f2 * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(arg0, f32 *, 8));
}
extern int fold_flush_12;
#pragma pop

u8 *TObjPlayer__vt16(u8 *arg0, u8 *arg1) {
    Stack_801B7998 stack;
    f32 temp_f1;
    s32 temp_r31;
    u8 *temp_r3;
    u8 *temp_r6;
    stack.sp8 = M2C_FIELD(arg1, f32 *, 0);
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2B0));
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    stack.spC = temp_f1 + M2C_FIELD(temp_r6, f32 *, 0x10);
    stack.sp10 = M2C_FIELD(arg1, f32 *, 8);
    temp_r3 = (u8 *)(((u8 * (*)(f32 *, void *, M2C_UNK, void *, f32))csnVectorUnder)(&stack.sp8, arg0 + 0x120, 0x5F, temp_r6, temp_f1));
    if (temp_r3 == NULL) {
        return NULL;
    }
    TObjPlayer__sub_801BF8AC((void *) (arg0 + 0x360));
    temp_r31 = M2C_FIELD(temp_r3, s32 *, 0);
    if (temp_r31 & 0x10) {
        check_flag_2__10TObjPlayerFPv((void *) (arg0 + 0x360));
        copy_vec_at_18__10TObjPlayerFPv((void *) (arg0 + 0x384), (void *) (M2C_FIELD(temp_r3, u8 **, 4) + 0x1C));
    }
    if ((temp_r31 & 4) && (player_auxiliary_surfaces_enabled() != 0)) {
        set_flag_4__10TObjPlayerFPv((void *) (arg0 + 0x360));
        TObjPlayer__sub_801BF3A0((void *) (arg0 + 0x384), (void *) (M2C_FIELD(temp_r3, u8 **, 4) + 0x38));
    }
    if ((temp_r31 & 2) && (player_auxiliary_surfaces_enabled() != 0)) {
        TObjPlayer__sub_801BF840((void *) (arg0 + 0x360));
        TObjPlayer__sub_801BF3A0((void *) (arg0 + 0x384), (void *) (M2C_FIELD(temp_r3, u8 **, 4) + 0x54));
    }
    if (temp_r31 & 8) {
        test_flag_16__10TObjPlayerFPv((void *) (arg0 + 0x360));
    }
    if (!(temp_r31 & 1)) {
        return NULL;
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), f32 *, 4);
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (arg0 + 0x410), (void *) (M2C_FIELD(temp_r3, u8 **, 4) + 0xC));
    return temp_r3;
}

void TObjPlayer__vt15(void *arg0) {
    struct VObj_801B7AC8_801B3FD8 *o = (struct VObj_801B7AC8_801B3FD8 *)arg0;
    o->m16(get_position_ptr__10TObjPlayerFPv());
}

void handle_6x99(void) {  }

void close_sub_window__10TObjPlayerFPv(void *arg0) {
    void *p;
    if (is_locally_controlled__10TObjPlayerFPv(arg0) != 0) {
        p = M2C_FIELD(arg0, void **, 0xD00);
        if (p != 0) {
            TObjPlayer__sub_801D4368(p);
        }
    }
}

void handle_6x98(void) {  }

void TObjPlayer__sub_801B7B58(P_801B7B58 *arg0, s32 arg1, s32 arg2) {
    if (is_locally_controlled__10TObjPlayerFPv((void *)(arg0)) == 0) {
        return;
    }
    if (arg1 == -1 || arg2 == -1) {
        return;
    }
    if (arg0->fD00 != 0) {
        TObjPlayer__sub_801D47EC(arg0->fD00, arg1, arg2);
    }
}

s32 can_destroy_with_parents__10TObjPlayerFUi(u32 arg0) {
    if ((arg0 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
        return 1;
    }
    return 0;
}

s32 is_usable__14TWindowSubItemFi(s32 arg0) {
    if ((is_action_active__10TObjPlayerFPv() != 0U) || (test_action_mask__10TObjPlayerFPvi(arg0, 0x43001E) == 0) || (obj_testFlags30(arg0, 0x20) != 0) || (check_player_flag1__6TLobbyFPv(arg0) != 0)) {
        return 0;
    }
    return 1;
}

s32 find_inventory_item_id__10TObjPlayerFPvcc(u8 *arg0, s8 arg1, s8 arg2) {
    struct ItemData_801B7C78 item;
    ((void (*)(void *))init__9TItemDataFv)(&item);
    item.kind = arg1;
    item.group = arg2;
    if (find_first_inventory_entry__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), &item) == 0U) {
        return -1;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return -1;
    }
    return get_field_d8__10TObjPlayerFPv();
}

s32 fn_801B7CEC(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    struct ItemData_801B7CEC item;
    ((void (*)(void *))init__9TItemDataFv)(&item);
    item.kind = arg1;
    item.group = arg2;
    item.sub = arg3;
    if (((u32 (*)(int, void *))set_mode_and_refresh_object__10TObjPlayerFPvi)(M2C_FIELD(arg0, s32 *, 0xD00), &item) == 0U) {
        return -1;
    }
    if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
        return -1;
    }
    return get_field_d8__10TObjPlayerFPv();
}

void handle_6x28_feed_mag(s32 arg0) {
    Cmd_801B7D68 cmd;
    u8 *p;
    s32 a;
    s32 b;
    TObjPlayer__sub_801C0D7C(&cmd);
    copy_pair_fields2__10TObjPlayerFPvPv(&cmd, (void *)arg0);
    bswap_body_dwords2__10TObjPlayerFi(&cmd);
    if (validate_6x28_feed_mag(&cmd) != 0) {
        p = ((u8 * (*)(u16))get_player_by_client_id)(cmd.client);
        if (p != NULL && ((u32 (*)(s32, u32))start_inventory_update__10TObjPlayerFPvi)(M2C_FIELD(p, s32 *, 0xD00), cmd.item_a) != 0U) {
            a = ((s32 (*)(void))get_owner_if_alive__10TObjPlayerFPv)();
            if (a != 0 && ((u32 (*)(s32, u32))start_inventory_update__10TObjPlayerFPvi)(M2C_FIELD(p, s32 *, 0xD00), cmd.item_b) != 0U) {
                b = ((s32 (*)(void))get_owner_if_alive__10TObjPlayerFPv)();
                if (b != 0) {
                    feed_item_to_mag(a, b);
                }
            }
        }
    }
}

void send_6x28_feed_mag(void *arg0, s32 arg1, s32 arg2) {
    L_801B7E14 sp8;
    if (arg0 == 0 || ((s32 (*)(void *))obj_isState2_324)(arg0) == 0) {
        TObjPlayer__sub_801C0D7C(&sp8);
        sp8.f2 = obj_getField1c(arg0);
        sp8.f4 = arg1;
        sp8.f8 = arg2;
        bswap_and_send_body_dwords2__10TObjPlayerFPv(&sp8);
    }
}

void feed_mag__13TWindowSubMagFPvPvPv(void* p, void* a1, void* a2) { ((int (*)(void*))send_6x28_feed_mag)(p); ((int (*)(void*, void*, void*))send_6x29_delete_item__10TObjPlayerFPvii)(p, a2, (void*)1); }

void handle_6x27_use_item(s32 arg0) {
    Pkt_801B7EB8 pkt;
    u8 *temp_r3;
    u8 *temp_r3_2;
    TObjPlayer__sub_801C0E40((void *) (&pkt));
    copy_field_4__10TObjPlayerFPvPv((void *) (&pkt), (void *) (arg0));
    bswap_cmd_u32__10TObjPlayerFi((void *) (&pkt));
    if (validate_6x27_use_item((void *) (&pkt)) != 0) {
        temp_r3 = ((u8 * (*)(u16))get_player_by_client_id)(pkt.client);
        if ((temp_r3 != NULL) && (((u32 (*)(int, int))start_inventory_update__10TObjPlayerFPvi)((int) (M2C_FIELD(temp_r3, s32 *, 0xD00)), (int) (pkt.item)) != 0U)) {
            temp_r3_2 = ((u8 * (*)(void))get_owner_if_alive__10TObjPlayerFPv)();
            if (temp_r3_2 != NULL) {
                ((VObj_801B7EB8 *)temp_r3_2)->m29();
            }
        }
    }
}

s32 try_send_6x27_use_item(void *arg0, s32 arg1) {
    struct S801B7F4C sp8;
    void *temp;
    if (((s32 (*)(void))is_lobby_floor_15__15TFontSmallLobbyFv)() != 0) {
        return 0;
    }
    if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
        return 0;
    }
    temp = ((void * (*)(void))get_owner_if_alive__10TObjPlayerFPv)();
    if (temp == NULL) {
        return 0;
    }
    if (((s32 (*)(void *, void *))can_use_item__10TObjPlayerFPvPv)(arg0, temp) == 0) {
        play_sound_effect(0x3816, 0, 0, 0);
        return 0;
    }
    if ((arg0 != NULL) && (((s32 (*)(void *))obj_isState2_324)(arg0) != 0)) {
        return 0;
    }
    TObjPlayer__sub_801C0E40(&sp8);
    sp8.h = ((s16 (*)(void *))obj_getField1c)(arg0);
    sp8.w = arg1;
    send_use_item_cmd__10TObjPlayerFPv(&sp8);
    return 1;
}

void rebuild_player_inventory(void *arg0) {
    Buf_801B802C b;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xD00) != 0U) {
        ((M2C_UNK (*)(s32 *))init_inventory_list__10TObjPlayerFPv)((s32 *)&b);
        b.n = ((s32 (*)(void *, M2C_UNK *))query_state_if_present__10TObjPlayerFPv)(arg0, (M2C_UNK *)b.ents);
        destroy_subobjects__10TObjPlayerFPvi(M2C_FIELD(arg0, u32 *, 0xD00), arg0);
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xD00));
        M2C_FIELD(arg0, u32 *, 0xD00) = 0U;
        ((M2C_UNK (*)(void *))create_inventory__10TObjPlayerFPv)(arg0);
        assign_inventory_item_ids((void *)(arg0), (Ent_801B80C0 *)((Ent_801B80C0 *)b.ents), (s32)(b.n));
        ((M2C_UNK (*)(void *, M2C_UNK *, s32))bind_saved_inventory_equipment__10TObjPlayerFPvPvi)(arg0, (M2C_UNK *)b.ents, b.n);
    }
}

void assign_inventory_item_ids(void *arg0, Ent_801B80C0 *arg1, s32 arg2) {
    s32 i;
    s16 v;
    if (arg1 != NULL) {
        v = ((s16 (*)(void *))obj_getField1c)(arg0);
        for (i = 0; i < arg2; i++) {
            arg1->f14 = ((s32 (*)(s16))advance_item_id_counter)(v);
            arg1++;
        }
    }
}

void equip_saved_item_if_slot_empty__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    s32 temp_r3;
    temp_r3 = lookup_inventory_item__10TObjPlayerFPv(arg1 + 8);
    if ((temp_r3 != 0) && (((u32 (*)(void *, void *))pickup_item__10TObjPlayerFv)(arg0, (void *) temp_r3) != 0) && (M2C_FIELD(arg1, s32 *, 4) & 8) && (((s32 (*)(void *, s32))get_slot_value__10TObjPlayerFPvi)(arg0 + 0xD04, (s32) ((VObj_18_e9153c *)(temp_r3))->m31()) == 0U)) {
        set_equip_slot_entry((s32) (arg0 + 0xD04), (s32) ((VObj_18_e9153c *)(temp_r3))->m31(), temp_r3);
        set_flag_20000__10TObjPlayerFi((s32) arg0);
        ((VObj_18_e9153c *)(temp_r3))->m18();
        TObjPlayer__sub_801BE9A8((s32) arg0);
    }
}

void bind_saved_inventory_equipment__10TObjPlayerFPvPvi(u8 *p, u8 *records, s32 count) {
    s32 i;
    if (records != NULL) {
        ((void (*)(u8 *, s32))set_action_provider_variant__10TObjPlayerFPvs)(p, TObjPlayer__sub_801C2114());
        for (i = 0; i < count; i++) {
            equip_saved_item_if_slot_empty__10TObjPlayerFPvPv(p, records);
            records += 0x1C;
        }
        if (reset_key_machine_state__10TObjPlayerFv() == 0) {
            ((void (*)(u8 *, s32))set_action_provider_variant__10TObjPlayerFPvs)(p, TObjPlayer__sub_801C2114());
        }
    }
}

void create_inventory__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *var_r0;
    u8 *var_r0_2;
    u8 *var_r0_3;
    if ((void *) M2C_FIELD(arg0, u8 **, 0xD00) == NULL) {
        temp_r3 = (u8 *)(((u8 * (*)(s32))__nw__7TObjectFUl)(0x1CC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TPlyItem__ct(temp_r3, arg0));
        }
        M2C_FIELD(arg0, u8 **, 0xD00) = var_r0;
    }
    temp_r3_2 = (u8 *)(((u8 * (*)(s32))__nw__7TObjectFUl)(0x20));
    var_r0_2 = (u8 *)(temp_r3_2);
    if (var_r0_2 != NULL) {
        var_r0_2 = (u8 *)(__ct__9TItemListFv(temp_r3_2, M2C_FIELD(arg0, u8 **, 0xD00)));
    }
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), void **, 0x1C4) = var_r0_2;
    temp_r3_3 = (u8 *)(((u8 * (*)(s32))__nw__7TObjectFUl)(0x1C));
    var_r0_3 = (u8 *)(temp_r3_3);
    if (var_r0_3 != NULL) {
        var_r0_3 = (u8 *)(__ct__7TObjectFP7TObject(temp_r3_3, arg0));
    }
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), void **, 0x1C8) = var_r0_3;
    TObjPlayer__sub_801BF8F8((void *) (arg0 + 0xD04));
}

s32 query_state_if_present__10TObjPlayerFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0xD00);
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((s32 (*)(void *))run_state_query__10TObjPlayerFPvi)(temp_r3);
}

void handle_6x2B_create_inventory_item(s32 arg0) {
    Pkt_801B8344 pkt;
    s32 player;
    s32 kind;
    u8 *item;
    init_pkt_6x2B__10TObjPlayerFPv(&pkt);
    copy__10TObjPlayerFPvPv(&pkt, (void *)arg0);
    bswap_cmd_item_data__10TObjPlayerFi(&pkt);
    if (validate_6x2B_create_inventory_item(&pkt) != 0) {
        player = ((s32 (*)(int))get_player_by_client_id)(pkt.client);
        if ((player != 0) && (((s32 (*)(void))is_volopt_phase_final__10TObjPlayerFv)() == 0)) {
            if ((u32)(pkt.size * 4) == 0x18) {
                kind = 0;
                TItemData__sub_8010C740(pkt.item, 0);
            } else {
                kind = 2;
                TItemData__sub_8010C740(pkt.item, 2);
            }
            TItemData__sub_8010CCB0(pkt.item);
            item = ((u8 * (*)(M2C_UNK *))lookup_inventory_item__10TObjPlayerFPv)((M2C_UNK *)pkt.item);
            if ((item != NULL) && (((u32 (*)(int, int))pickup_item__10TObjPlayerFv)(player, (int)item) != 0U) && (kind == 2) && (pkt.f19 != 0) && (((u32 (*)(void *, void *))get_slot_value__10TObjPlayerFPvi)((void *)(player + 0xD04), (void *)(((VObj_18_p65 *)item)->m31())) == 0U)) {
                ((M2C_UNK (*)(void *, void *, int))set_equip_slot_entry)((void *)(player + 0xD04), (void *)(((VObj_18_p65 *)item)->m31()), (int)item);
                ((M2C_UNK (*)(int))set_flag_20000__10TObjPlayerFi)(player);
                ((VObj_18_p65 *)item)->m18();
                ((M2C_UNK (*)(int))TObjPlayer__sub_801BE9A8)(player);
            }
        }
    }
}
}

void TObjPlayer::request_inventory_item(TItemData* item) {
    TObjPlayer* player = this;
    InventoryCreatePacket_801B849C packet;
    if (((s32 (*)(void))is_volopt_phase_final__10TObjPlayerFv)() == 0) {
        if ((s32)item->id == -1) {
            item->id = ((u32 (*)(u16))advance_item_id_counter)((u16)local_client_id);
        }
        if (player == 0 || ((s32 (*)(TObjPlayer*))obj_isState2_324)(player) == 0) {
            init_pkt_6x2B__10TObjPlayerFPv((void *)(&packet));
            packet.actor = ((u16 (*)(TObjPlayer*))obj_getField1c)(player);
            copy_item_data__6TLobbyFPvPv(&packet.item, item);
            normalize__9TItemDataFv(&packet.item);
            send_cmd_item_data__10TObjPlayerFPv(&packet);
        }
    }
}

extern "C" {
int get_item_record__23TShopJudgmentItemWindowFPv(void* p) { return ((int (*)(void*))send_6x29_delete_item__10TObjPlayerFPvii)(p); }

#pragma push
#pragma opt_propagation off
s32 try_add_sale_meseta__10TObjPlayerFv(Player_801B855C *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 max = 999999;
    if (max < arg0->data->meseta + arg2) {
        return 0;
    }
    add_meseta__10TObjPlayerFl(arg0, arg2);
    ((void (*)(void *, s32, s32))send_6x29_delete_item__10TObjPlayerFPvii)(arg0, arg1, arg3);
    return 1;
}
extern int fold_flush_13;
#pragma pop

s32 try_buy_item(s32 arg0, void *arg1) {
    if (((s32 (*)(void))can_pickup_item__10TObjPlayerFPvPv)() == 0) {
        return 1;
    }
    if (try_spend_actor_meseta(arg0, M2C_FIELD(arg1, s32 *, 0x10) * get_item_type_or_default__9TItemListFPv(arg1)) != 0) {
        init_owner__5TItemFPvUs(arg1, ((s32 (*)(s32))obj_getField1c)(arg0));
        return 0;
    }
    return 2;
}

void drop_items_on_death__10TObjPlayerFPv(TObjPlayer* player) {
    DeathDropRecord records[9];
    DeathDropRecord* record;
    s32 count;
    TItemData* item;
    void* equipped;
    PlayerDeathItemFields* fields=(PlayerDeathItemFields*)player;
    if (fields->inventory_owner==NULL || ((s32 (*)(TObjPlayer*))obj_isState3_324)(player)!=0 || is_script_controlled__10TObjPlayerFPv(player)!=0) {
        return;
    }
    __construct_array(records,init_c2098_return_self__10TObjPlayerFPv,NULL,sizeof(DeathDropRecord),9);
    count=0;
    if (((s32 (*)(void))is_technique_ready__8TTecCtrlFv)()!=0) {
        if (((s32 (*)(TObjPlayer*))check_flag_01000000__10TObjPlayerFPv)(player)==0) {
            count=set_globals_and_notify__6TLobbyFPvii(fields->inventory_owner,player,records);
        }
        if (((s32 (*)(TObjPlayer*))obj_getPtr2B0_20)(player)!=0) {
            record=&records[count];
            set_field4__10TObjPlayerFPvi(record,-1);
            item=TObjPlayer__sub_801C2058(record);
            init_item_data__10TObjPlayerFPvi(item,(void*)((s32 (*)(TObjPlayer*))obj_getPtr2B0_20)(player));
            count+=1;
            item->id=-1;
        }
    } else if (((s32 (*)(TObjPlayer*))check_flag_01000000__10TObjPlayerFPv)(player)==0) {
        count=set_globals_and_notify__6TLobbyFPvii(fields->inventory_owner,player,records);
    } else {
        equipped=((void* (*)(TObjPlayer*))get_item_field_6__10TObjPlayerFPv)(player);
        if (equipped!=NULL) {
            ((void (*)(TObjPlayer*, s32))send_6x26_unequip_item__10TObjPlayerFPvPv)(player,((s32 (*)(void*))get_field_d8__10TObjPlayerFPv)(equipped));
        }
    }
    if (count>0) {
        lbl_8050BF60.x=fields->position.x;
        lbl_8050BF60.y=TObjPlayer__data_805DC2BC+fields->position.y;
        lbl_8050BF60.z=fields->position.z;
        create_drop_nodes__9TItemListFPvPvPvPvi(fields->inventory_owner+0x20,&lbl_8050BF60,player,records,count);
        set_action_flag_2__10TObjPlayerFPv(player);
    }
}

void handle_6x2A_drop_item(void *arg0) {
    Msg_801B87E4 m;
    Player_801B87E4 *p;
    init_6x2A__10TObjPlayerFPv(&m);
    TObjPlayer__sub_801C106C(&m, arg0);
    bswap_fields__10TObjPlayerFi(&m);
    if (validate_6x2A_drop_item(&m) != 0) {
        p = ((Player_801B87E4 * (*)(u16))get_player_by_client_id)(m.slot);
        if ((p != NULL) && (((s32 (*)(void))is_volopt_phase_final__10TObjPlayerFv)() == 0)) {
            update_inventory_item__10TObjPlayerFPviiiii(p->inv, p, m.c, m.d, m.a, m.b);
        }
    }
}

void send_6x2A_drop_item__10TObjPlayerFv(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    Cmd_801B8870 cmd;
    if (((s32 (*)(void))is_volopt_phase_final__10TObjPlayerFv)() == 0 && (arg0 == NULL || ((s32 (*)(void *))obj_isState2_324)(arg0) == 0)) {
        init_6x2A__10TObjPlayerFPv(&cmd);
        cmd.client = ((s32 (*)(s32))obj_getField1c)((s32)arg0);
        cmd.a = arg1;
        cmd.b = arg3;
        cmd.floor = ((s16 (*)(void))get_current_floor)();
        VecCopy__FP3VecPC3Vec(&cmd.pos, arg2);
        bswap_fields_and_send__10TObjPlayerFPv(&cmd);
        ((void (*)(void *))send_unequip_held_item__10TObjPlayerFUi)(arg0);
    }
}

struct Pkt_801B8908 { u16 f0; u16 client; s16 a; s16 b; };
void init_trap_packet__10TObjPlayerFPv(Pkt_801B8908 *);
void copy_short_fields__10TObjPlayerFPvPv(Pkt_801B8908 *, void *);
void bswap_body_words__10TObjPlayerFPv(Pkt_801B8908 *);
s32 validate_6x83_place_trap(Pkt_801B8908 *);
u32 create_placed_trap__10TOMineTrapFUiss(u8 *, s32, s32);
void consume_trap_count__10TObjPlayerFiii(u8 *, s32, s32);
void call_window_method_with_default_vec__11TWindowCtrlFi(u16);

void handle_6x83_place_trap(void *arg0) {
    Pkt_801B8908 pkt;
    init_trap_packet__10TObjPlayerFPv(&pkt);
    copy_short_fields__10TObjPlayerFPvPv(&pkt, arg0);
    bswap_body_words__10TObjPlayerFPv(&pkt);
    if (validate_6x83_place_trap(&pkt) != 0) {
        u8 *p = (u8 *) ((u32 (*)(int))get_player_by_client_id)(pkt.client);
        if (p != NULL && create_placed_trap__10TOMineTrapFUiss(p, pkt.a, pkt.b) != 0) {
            consume_trap_count__10TObjPlayerFiii(p + 0x7C4, 1, pkt.a);
            if (is_locally_controlled__10TObjPlayerFPv(p) != 0) {
                call_window_method_with_default_vec__11TWindowCtrlFi((u16)obj_getField1c(p));
            }
        }
    }
}

struct P_801B89B0 { u8 pad[0x7C4]; u8 traps[0x30]; };
s8 clamp_char_at__10TObjPlayerFPvi(u8 *, s32);
s32 TWindowCtrl__sub_8024A228(u16);
void bswap_body_words_and_send__10TObjPlayerFPv(Pkt_801B8908 *);

s32 send_trap_packet__10TObjPlayerFPvi(void *arg0_, int arg1_) {
    s32 arg1 = arg1_;
    u8 *arg0 = (u8 *)arg0_;
    Pkt_801B8908 pkt;

    if (arg0 != NULL && obj_isState2_324() != 0) {
        return 0;
    }
    if (TWindowCtrl__sub_8024A228((u16)obj_getField1c(arg0)) == 0) {
        return 0;
    }
    if (((s32 (*)(void *))is_action_available__10TObjPlayerFi)(arg0) == 0) {
        return 0;
    }
    if (clamp_char_at__10TObjPlayerFPvi(arg0 + 0x7C4, arg1) <= 0) {
        return 0;
    }
    init_trap_packet__10TObjPlayerFPv(&pkt);
    pkt.client = (u16)obj_getField1c(arg0);
    pkt.a = arg1;
    pkt.b = clamp_char_at__10TObjPlayerFPvi(arg0 + 0x7C4, arg1);
    bswap_body_words_and_send__10TObjPlayerFPv(&pkt);
    return 1;
}

void request_meseta_drop__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_801B8A80, sp8) == 0x0) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801B8A80, sp14) == 0xC) ? 1 : -1];
    Stack_801B8A80 stack;
    if (arg1 > 0) {
        ((s32 (*)(void *, int))play_effect_default__10TObjPlayerFii)((void *) (arg0), (int) (0x384));
        set_action_flag_2__10TObjPlayerFPv((void *) (arg0));
        init_item_data__10TObjPlayerFPvi((void *) (&stack.sp8), (void *) (arg1));
        stack.sp14 = -1;
        insert_item_node__10TObjPlayerFiiiii((int) (M2C_FIELD(arg0, s32 *, 0xD00) + 0x20), (void *) (TObjPlayer__sub_801BF914((void *) (arg0 + 0x84C))), (void *) (arg0), (void *) (&stack.sp8), (int) (-1));
    }
}

void request_item_drop__10TObjPlayerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    Item_801B8AF8 item;
    VObj_801B8AF8 *owner;
    s32 id;
    if (check_player_action_allowed() != 0 &&
        (TAdPlayerLoadGC__sub_801E1B50(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) != 0 ||
         probe_card_slot__15TAdPlayerLoadGCFi(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) != 1)) {
        ((void (*)(s32, s32, s32, s32))play_sound_effect)(0x53F06, 0, 0, 0);
        return;
    }
    if (start_inventory_update__10TObjPlayerFPvi(*(s32 *)(arg0 + 0xD00), arg1) == 0) {
        return;
    }
    owner = ((VObj_801B8AF8 * (*)(void))get_owner_if_alive__10TObjPlayerFPv)();
    if (owner == NULL) {
        return;
    }
    ((s32 (*)(void *, int))play_effect_default__10TObjPlayerFii)(arg0, 0x384);
    set_action_flag_2__10TObjPlayerFPv(arg0);
    copy_to_item_data__5TItemFPvPv(owner, &item);
    set_stack_count__24TShopEquipmentListWindowFPvc(&item, arg2);
    id = item.id;
    if (owner->m34() - arg2 > 0) {
        item.id = -1;
    }
    insert_item_node__10TObjPlayerFiiiii(*(s32 *)(arg0 + 0xD00) + 0x20, (void *)TObjPlayer__sub_801BF914(arg0 + 0x84C), arg0, &item, id);
}

s32 count_items_of_type__10TObjPlayerFPvccc(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    TItemData item_data;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xD00) == 0U) {
        return 0;
    }
    ((s32 (*)(void *))init__9TItemDataFv)((void *) (&item_data.data1.data_u8[0]));
    item_data.data1.data_u8[0] = arg1;
    item_data.data1.data_u8[1] = arg2;
    item_data.data1.data_u8[2] = arg3;
    return count_items_by_id__10TObjPlayerFPvi((int) (M2C_FIELD(arg0, u32 *, 0xD00)), (void *) (&item_data.data1.data_u8[0]));
}

void dispatch_input__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    TObjPlayer__sub_801D49F4(M2C_FIELD(arg0, s32 *, 0xD00), arg0, arg1, arg2, arg0);
}

void handle_6xAC(void *arg0) {
    L_801B8CB0 sp8;
    init_6xAC_packet__10TObjPlayerFPv(&sp8);
    TObjPlayer__sub_801C1268(&sp8, arg0);
    byteswap_data__10TObjPlayerFPv(&sp8);
    if (validate_6xAC(&sp8) != 0) {
        s32 p = ((s32 (*)(s32))get_player_by_client_id)(sp8.f2);
        if (p != 0 && ((s32 (*)(void))is_lobby_floor_15__15TFontSmallLobbyFv)() == 0) {
            ((void (*)(void *, void *, s32))dispatch_input__10TObjPlayerFPvii)((void *)p, sp8.f8, sp8.f4);
        }
    }
}

void dispatch_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    use_item__6TLobbyFiiii(M2C_FIELD(arg0, s32 *, 0xD00), arg0, arg1, arg2, arg0);
}

void handle_6x29_delete_inventory_item(void *arg0) {
    L_801B8D68 sp8;
    init_cmd_6x29__10TObjPlayerFPv(&sp8);
    copy_pair_fields3__10TObjPlayerFPvPv(&sp8, arg0);
    bswap_body_dwords3__10TObjPlayerFPv(&sp8);
    if (validate_6x29_delete_inventory_item(&sp8) != 0) {
        s32 p = ((s32 (*)(s32))get_player_by_client_id)(sp8.f2);
        if (p != 0 && ((s32 (*)(void))is_volopt_phase_final__10TObjPlayerFv)() == 0) {
            dispatch_action__10TObjPlayerFPvii((void *)p, sp8.f4, sp8.f8);
        }
    }
}

void send_6x29_delete_item__10TObjPlayerFPvii(void *obj, s32 a, s32 b) {
    Cmd_801B8DE8 cmd;
    if (((s32 (*)(void))is_volopt_phase_final__10TObjPlayerFv)() != 0) {
        return;
    }
    if (obj != 0 && ((s32 (*)(void *))obj_isState2_324)(obj) != 0) {
        return;
    }
    init_cmd_6x29__10TObjPlayerFPv(&cmd);
    cmd.id = ((s16 (*)(void *))obj_getField1c)(obj);
    cmd.a = a;
    cmd.b = b;
    bswap_body_dwords3_and_send__10TObjPlayerFPv(&cmd);
    ((void (*)(void *))send_unequip_held_item__10TObjPlayerFUi)(obj);
}

void *pickup_item__10TObjPlayerFv(u8 *arg0, u8 *arg1) {
    u32 sp8[5];
    s32 id;
    void *o;
    void *list;
    s32 n;
    VObj_18_p72 *owner;
    u8 *inv;
    s16 idx;
    if (arg1 == NULL) {
        return 0;
    }
    if (get_field_ec__12TOSwitchItemFPv(arg1) == 4) {
        ((M2C_UNK (*)(void *, void *))add_meseta__10TObjPlayerFl)(arg0, (void *)copy_item_data_and_process__5TItemFPv(arg1));
        ((M2C_UNK (*)(void *, void *))TObjPlayer__sub_801B0124)(arg0, (void *)copy_item_data_and_process__5TItemFPv(arg1));
        ((VObj_18_p72 *)arg1)->m27();
        ((M2C_UNK (*)(void *, int))send_field_state_if_active__10TObjPlayerFii)(arg0, 0x52802);
        return 0;
    }
    if (((s32 (*)(void *, void *))can_pickup_item_by_id__10TObjPlayerFii)(arg0, arg1) == 0) {
        return 0;
    }
    ((void (*)(void *))TObjPlayer__sub_801C1B0C)(arg1);
    list = 0;
    switch (get_field_ec__12TOSwitchItemFPv(arg1)) {
    case 0:
    case 1:
    case 2:
        o = ((void * (*)(u32))__nw__7TObjectFUl)(0x20);
        if (o != NULL) {
            o = ((void * (*)(void *, s32))__ct__9TItemListFv)(o, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), s32 *, 0x1C4));
        }
        list = o;
        break;
    case 3:
        if (TObjPlayer__sub_801C1AC8(arg1) != 0) {
            ((M2C_UNK (*)(void *, void *))copy_to_item_data__5TItemFPvPv)(arg1, &sp8);
            id = ((s32 (*)(void *, void *))set_mode_and_refresh_object__10TObjPlayerFPvi)(M2C_FIELD(arg0, u8 **, 0xD00), &sp8);
            if (id == 0) {
                o = ((void * (*)(u32))__nw__7TObjectFUl)(0x20);
                if (o != NULL) {
                    o = ((void * (*)(void *, s32))__ct__9TItemListFv)(o, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), s32 *, 0x1C4));
                }
                list = o;
                break;
            }
            n = ((VObj_18_p72 *)arg1)->m34();
            if (n == 0) {
                n = 1;
            }
            owner = ((VObj_18_p72 * (*)(s32))get_owner_if_alive__10TObjPlayerFPv)(id);
            if (owner != NULL) {
                owner->m36(n);
            }
            ((VObj_18_p72 *)arg1)->m27();
            return 0;
        }
        o = ((void * (*)(u32))__nw__7TObjectFUl)(0x20);
        if (o != NULL) {
            o = ((void * (*)(void *, s32))__ct__9TItemListFv)(o, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), s32 *, 0x1C4));
        }
        list = o;
        break;
    }
    if (list != NULL) {
        set_field_1c__10TObjPlayerFPvi(list, arg1);
        inv = M2C_FIELD(arg0, u8 **, 0xD00);
        TObjPlayer__sub_801C1B0C(arg1, M2C_FIELD(inv, s16 *, 0x1C)++);
        set_mode__5TItemFPvc(arg1, 1);
        set_parent__7TObjectFP7TObject(arg1, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), void **, 0x1C8));
        set_owner_client__5TItemFPvUs(arg1, ((s16 (*)(void *))obj_getField1c)(arg0));
        return list;
    }
    return 0;
}

s32 can_pickup_item__10TObjPlayerFPvPv(void *arg0, u8 *arg1) {
    s32 temp_r31;
    s32 temp_r31_2;
    void *temp_r3;

    if (lookup_item_def__9TItemDataFPv(arg1) != 0) {
        if ((u8) *arg1 == 4) {
            return obj_getPtr2B0_20(arg0) < 0xF423F;
        }
        if (((u32 (*)(void *, u8 *))set_mode_and_refresh_object__10TObjPlayerFPvi)(M2C_FIELD(arg0, void **, 0xD00), arg1) != 0U) {
            temp_r3 = ((void * (*)(void))get_owner_if_alive__10TObjPlayerFPv)();
            if (temp_r3 == NULL) {
                return 0;
            }
            temp_r31_2 = copy_and_register_item_data__11TItemObjectFPv();
            temp_r31 = temp_r31_2 - ((V_B *)temp_r3)->m34();
            return ((s32) ((u32 (*)(u8 *))get_item_type_or_default__9TItemListFPv)(arg1) <= temp_r31) ? 1 : 0;
        }
        goto block_7;
    }
block_7:
    if ((s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0xD00), s16 *, 0x1C) >= 0x1E) {
        return 0;
    }
    return 1;
}

void can_pickup_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1) {
    M2C_UNK sp8[5];

    ((M2C_UNK (*)(s32, M2C_UNK *))copy_to_item_data__5TItemFPvPv)(arg1, sp8);
    can_pickup_item__10TObjPlayerFPvPv((void *)(arg0), (u8 *)(sp8));
}

s32 can_inventory_accept_item__10TObjPlayerFPvPv(Player_801B91F0 *self, u8 *item) {
    s32 max;
    s32 n;
    VObj_801B91F0 *owner;
    if (lookup_item_def__9TItemDataFPv(item) != 0) {
        if (item[0] == 4) {
            return 1;
        }
        if (((u32 (*)(Inv_801B91F0 *, u8 *))set_mode_and_refresh_object__10TObjPlayerFPvi)(self->inv, item) == 0) {
            if (self->inv->count >= 30) {
                return 0;
            }
            return get_item_use_result__9TItemDataFPv(item);
        }
        owner = ((VObj_801B91F0 * (*)(void))get_owner_if_alive__10TObjPlayerFPv)();
        if (owner == NULL) {
            return 0;
        }
        n = ((s32 (*)(VObj_801B91F0 *))copy_and_register_item_data__11TItemObjectFPv)(owner);
        n -= owner->m34();
        max = ((s32 (*)(u8 *))get_item_type_or_default__9TItemListFPv)(item);
        return (n < max) ? 0 : n;
    }
    return self->inv->count < 30;
}

#pragma push
#pragma fp_contract on
bool is_target_in_facing_cone__10TObjPlayerFPvPv(Obj_801B92EC *self, Vec_801B92EC *target) {
    Vec_801B92EC to;
    Vec_801B92EC fwd = lbl_80446F2C;
    f32 x;
    f32 z;
    f32 dot;
    fwd.x = sin_table_lookup(self->angle);
    fwd.y = TObjPlayer__data_805DC278;
    fwd.z = cos_table_lookup(self->angle);
    x = TObjPlayer__data_805DC2BC * sin_table_lookup(self->angle + 0x8000) + self->pos.x;
    z = TObjPlayer__data_805DC2BC * cos_table_lookup(self->angle + 0x8000) + self->pos.z;
    to.x = target->x - x;
    to.y = TObjPlayer__data_805DC278;
    to.z = target->z - z;
    update_scale__15TObjBoss2TunnelFPv(&to);
    dot = ((f32 (*)(Vec_801B92EC *, Vec_801B92EC *))vec3_dot)(&fwd, &to);
    return !(dot < cos_table_lookup(0x1555));
}
extern int fold_flush_14;
#pragma pop

s32 update_target_lock__10TObjPlayerFPv(void *arg0) {
    f32 temp_f31;
    u32 temp_r3;
    u16 var_r31;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x424);
    if (temp_r3 == 0U) {
        return 0;
    }
    var_r31 = get_lock_target_id(temp_r3 + 0x510);
    temp_f31 = get_lock_target_distance_sq(M2C_FIELD(arg0, u32 *, 0x424) + 0x510, M2C_FIELD(arg0, u32 *, 0x424));
    fn_801C1B88(M2C_FIELD(arg0, u32 *, 0x424) + 0x510);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x100000)) {
        if ((u16) var_r31 == 0xFFFF) {
            return 0;
        }
        if (((u32 (*)(u16))find_entity_by_id)(var_r31) == 0U) {
            return 0;
        }
        if (!(temp_f31 < lbl_805DC2C0)) {
            goto block_17;
        }
        if (((s32 (*)(void *, s32))is_target_in_facing_cone__10TObjPlayerFPvPv)(arg0, get_position_ptr__10TObjPlayerFPv()) == 0) {
            goto block_17;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x100000);
        return 1;
    }
    if ((u16) var_r31 == 0xFFFF) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFEFFFFF);
        return 0;
    }
    if (((u32 (*)(u16))find_entity_by_id)(var_r31) == 0U) {
        return 0;
    }
    if (temp_f31 > lbl_805DC2C4) {
        goto clear_and_return;
    }
    if (((s32 (*)(void *, s32))is_target_in_facing_cone__10TObjPlayerFPvPv)(arg0, get_position_ptr__10TObjPlayerFPv()) != 0) {
        goto block_17;
    }
clear_and_return:
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFEFFFFF);
    return 0;
block_17:
    return 0;
}

void TObjPlayer__vt63(s32 arg0, s32 arg1, s32 arg2) {
    Stack_801B9544 stack;
    stack.sp10 = TObjPlayer__data_805DC278;
    stack.spC = TObjPlayer__data_805DC278;
    stack.sp8 = TObjPlayer__data_805DC278;
    push_matrix_from((int) (0));
    copy_matrix__10TObjPlayerFUiUi((int) (0), (void *) (get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (void *) (arg1))));
    concat_matrix__11TCameraCtrlFUiUi((int) (0), (int) (get_view_matrix__11TCameraCtrlFv()));
    matrix_mult_vec((int) (0), (void *) (&stack.sp8), (void *) (arg2));
    pop_matrix();
}

void use_current_item__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    temp_r3 = test_flag3__9TItemDataFPv((void *)(arg0));
    if (temp_r3 != NULL) {
        ((VObj_801B95C8*)temp_r3)->m28();
        return;
    }
    ((VObj_801B95C8*)arg0)->m63(0x24, &sp8);
    create__9TEffGuardFPC3Vec(&sp8);
}

void send_unequip_held_item__10TObjPlayerFUi(u32 arg0) {
    Cmd_801B9634 cmd;
    s32 item;
    item = ((s32 (*)(void *))get_item_field_6__10TObjPlayerFPv)((void *)arg0);
    if ((item != 0) && (((s32 (*)(s32, u32, M2C_UNK))get_item_info__10TObjPlayerFiiPv)(item, arg0, 0) == 0) && ((arg0 == 0U) || (((s32 (*)(u32))obj_isState2_324)(arg0) == 0))) {
        ((M2C_UNK (*)(Cmd_801B9634 *))init_cmd_6x26__10TObjPlayerFPv)(&cmd);
        cmd.client = ((s16 (*)(u32))obj_getField1c)(arg0);
        cmd.val = ((s32 (*)(s32))get_field_d8__10TObjPlayerFPv)(item);
        bswap_body_dwords4_and_send__10TObjPlayerFPv(&cmd);
    }
}

#pragma push
#pragma fp_contract on
s32 preview_equip_stats__10TObjPlayerFv(u8 *arg0, s16 *out, u8 *incoming) {
    Base_801B9954 b;
    Attack_801B9954 a;
    Defense_801B9954 d;
    Item_801B9954 *prev;
    s32 slot;
    s32 atp;
    f32 rate;
    if (incoming != NULL && out != NULL) {
    prev = NULL;
    copy_data__6TLobbyFPvPv((void *)(&b), (s32)(*(void **)(arg0 + 0x2B0)));
    copy_from__6TLobbyFPvPv(&a, *(void **)(arg0 + 0x318));
    copy_entry__6TLobbyFPvPv(&d, *(void **)(arg0 + 0x31C));
    switch (incoming[0]) {
    case 0:
        prev = ((Item_801B9954 *)get_item_field_6__10TObjPlayerFPv((Pl_801B0B88 *)(arg0)));
        break;
    case 1:
        if (incoming[1] == 1) {
            prev = get_item_field_2__9TItemDataFPv(arg0);
        } else if (incoming[1] == 2) {
            prev = ((Item_801B9954 *)test_flag3__9TItemDataFPv((void *)(arg0)));
        }
        break;
    case 2:
        prev = ((Item_801B9954 *)activate_d04_slot__10TObjPlayerFPv((void *)(arg0)));
        break;
    }
    if (prev != NULL) {
        prev->subtract_applied(&a, &d, &b);
        if (get_field_ec__12TOSwitchItemFPv(prev) == 1 && get_field_ed__10TObjPlayerFPv(prev) == 1) {
            for (slot = 9; slot <= 12; slot++) {
                Item_801B9954 *unit = ((Item_801B9954 *)get_slot_value__10TObjPlayerFPvi(arg0 + 0xD04, slot));
                if (unit != NULL) {
                    unit->subtract_applied(&a, &d, &b);
                }
            }
        }
    }
    apply_equip_effects__9TItemDataFPviiiii(incoming, arg0, &a, &d, &b, 0);
    b.field[0] = clamp_s32__10TObjPlayerFiii(b.field[0], 0, ((s16 *)get_class_stat_entry__10TObjPlayerFPv(arg0))[0]);
    b.field[1] = clamp_s32__10TObjPlayerFiii(b.field[1], 0, ((s16 *)get_class_stat_entry__10TObjPlayerFPv(arg0))[1]);
    b.field[2] = clamp_s32__10TObjPlayerFiii(b.field[2], 0, ((s16 *)get_class_stat_entry__10TObjPlayerFPv(arg0))[2]);
    b.field[4] = clamp_s32__10TObjPlayerFiii(b.field[4], 0, ((s16 *)get_class_stat_entry__10TObjPlayerFPv(arg0))[4]);
    b.field[5] = clamp_s32__10TObjPlayerFiii(b.field[5], 0, ((s16 *)get_class_stat_entry__10TObjPlayerFPv(arg0))[5]);
    b.field[6] = clamp_s32__10TObjPlayerFiii(b.field[6], 0, ((s16 *)get_class_stat_entry__10TObjPlayerFPv(arg0))[6]);
    set_params__10TObjPlayerFPvPvPviPv((void *)(out), (void *)(arg0), (void *)(&b), (int)(&a), (int)(&d));
    rate = TObjPlayer__sub_800192C4(arg0, 2);
    {
        s16 range;
        slot = b.field[0];
        {
        s16 sl = slot;
        atp = (s32)((f32)sl * rate + (f32)(sl + get_id__10TObjPlayerFPv(&a)));
        }
        range = get_level__10TObjPlayerFPv(&a) - get_id__10TObjPlayerFPv(&a);
        out[0] = atp + (s32)((f32)range * rate + (f32)range);
    }
    rate = TObjPlayer__sub_800192C4(arg0, 3);
    out[1] = (s32)((f32)out[1] * rate + (f32)out[1]);
    return 1;
    }
    return 0;
}
#pragma pop

void unequip_all_units__10TObjPlayerFi(s32 arg0) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 9;
    do {
        temp_r3 = ((void * (*)(s32, s32))get_slot_value__10TObjPlayerFPvi)(arg0 + 0xD04, var_r31);
        if (temp_r3 != NULL) {
            ((M2C_UNK (*)(s32, s32, M2C_UNK))set_equip_slot_entry)(arg0 + 0xD04, var_r31, 0);
            ((VObj_801B9CE0*)temp_r3)->m19();
        }
        var_r31 += 1;
    } while (var_r31 <= 0xC);
}

void unequip_item__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    VObj_801B9D50 *self = (VObj_801B9D50 *)arg1;

    ((M2C_UNK (*)(s32, s8, M2C_UNK))set_equip_slot_entry)(arg0 + 0xD04, self->m31(), 0);
    self->m19();
    if ((get_field_ec__12TOSwitchItemFPv(arg1) == 1) && (get_field_ed__10TObjPlayerFPv(arg1) == 1)) {
        ((M2C_UNK (*)(s32))unequip_all_units__10TObjPlayerFi)(arg0);
    }
    if (test_action_mask__10TObjPlayerFPvi(arg0, 2) != 0) {
        set_animation__10TObjPlayerFPvs(arg0, ((s32 (*)(s32))unequip_by_field326__10TObjPlayerFPv)(arg0));
    }
}

void handle_6x26_unequip_item(void *arg0) {
    Msg_801B9E0C m;
    Player_801B9E0C *p;
    void *o;
    init_cmd_6x26__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))copy_unequip_fields__10TObjPlayerFPvPv)(&m, arg0);
    bswap_body_dwords4__10TObjPlayerFPv(&m);
    if (validate_6x26_unequip_item(&m) != 0) {
        p = ((Player_801B9E0C * (*)(u16))get_player_by_client_id)(m.slot);
        if ((p != NULL) && (((u32 (*)(void *, s32))start_inventory_update__10TObjPlayerFPvi)(p->inv, m.c) != 0U) && ((o = ((void * (*)(void))get_owner_if_alive__10TObjPlayerFPv)()) != NULL)) {
            ((void (*)(void *, void *))unequip_item__10TObjPlayerFiPv)(p, o);
        }
    }
}

void *copy_unequip_fields__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

void send_6x26_unequip_item__10TObjPlayerFPvPv(void *self, void *item) {
    if (self == 0 || ((s32 (*)(void *))obj_isState2_324)(self) == 0) {
        Cmd_801B9EDC cmd;
        init_cmd_6x26__10TObjPlayerFPv(&cmd);
        cmd.id = ((u16 (*)(void *))obj_getField1c)(self);
        cmd.item = item;
        ((void (*)(void *))bswap_body_dwords4_and_send__10TObjPlayerFPv)(&cmd);
        ((void (*)(void *))send_unequip_held_item__10TObjPlayerFUi)(self);
    }
}

void equip_item_to_slot__10TObjPlayerFPvPvi(void *self, void *item, s32 slot) {
    Player_801B9F40 *p = (Player_801B9F40 *)self;
    void *cur;
    if (is_state_ec1_ed3__10TObjPlayerFPv(item) != 0) {
        if (slot < 9 || slot > 12) {
            slot = 9;
        }
        ((VObj_801B9F40 *)item)->m17((s8)slot);
    } else {
        slot = ((VObj_801B9F40 *)item)->m31();
    }
    cur = ((void * (*)(void *, s32))get_slot_value__10TObjPlayerFPvi)(p->slots, slot);
    if (cur == NULL) {
        ((void (*)(void *, s32, void *))set_equip_slot_entry)(p->slots, slot, item);
        ((VObj_801B9F40 *)item)->m18();
    } else if (cur != item) {
        ((void (*)(void *, void *))unequip_item__10TObjPlayerFiPv)(self, cur);
        ((void (*)(void *, s32, void *))set_equip_slot_entry)(p->slots, slot, item);
        ((VObj_801B9F40 *)item)->m18();
    }
    if (((s32 (*)(void *, int))test_action_mask__10TObjPlayerFPvi)(self, 2) != 0) {
        ((void (*)(void *, s16))set_animation__10TObjPlayerFPvs)(self, ((s16 (*)(void *))unequip_by_field326__10TObjPlayerFPv)(self));
    }
}

void handle_6x25_equip_item(void *arg0) {
    Msg_801BA060 m;
    Player_801BA060 *p;
    void *o;
    init_command__10TObjPlayerFPv(&m);
    copy_pair_fields4__10TObjPlayerFPvPv(&m, arg0);
    bswap_body_dwords5__10TObjPlayerFPv(&m);
    if (validate_6x25_equip_item(&m) != 0) {
        p = ((Player_801BA060 * (*)(u16))get_player_by_client_id)(m.slot);
        if ((p != NULL) && (((u32 (*)(void *, s32))start_inventory_update__10TObjPlayerFPvi)(p->inv, m.c) != 0U) && ((o = ((void * (*)(void))get_owner_if_alive__10TObjPlayerFPv)()) != NULL)) {
            equip_item_to_slot__10TObjPlayerFPvPvi((void *)(p), (void *)(o), (s32)(m.d));
        }
    }
}

void send_6x25_equip_item(void *arg0, s32 arg1, s32 arg2) {
    L_801BA0F0 sp8;
    if (((s32 (*)(void))check_switch_available__6TLobbyFPvi)() != 0 && (arg0 == 0 || ((s32 (*)(void *))obj_isState2_324)(arg0) == 0)) {
        init_command__10TObjPlayerFPv(&sp8);
        sp8.f2 = ((u16 (*)(void *))obj_getField1c)(arg0);
        sp8.f4 = arg1;
        sp8.f8 = arg2;
        bswap_body_dwords5_and_send__10TObjPlayerFPv(&sp8);
    }
}

void handle_state2_transitions__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;

    TObjPlayer__sub_8011E204(arg0, 0x10);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x324);
    switch (temp_r0) {
    case 1:
        if ((get_main_phase() != 0xE) && ((s32) lbl_805D55C0 != 0)) {
            goto call3;
        }
        ((M2C_UNK (*)(void *))select_contextual_pickup_action__10TObjPlayerFv)(arg0);
        ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 7);
        if (check_flag_48__10TObjPlayerFPv(arg0) != 0) {
            break;
        }
        ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 2);
        if (check_flag_48__10TObjPlayerFPv(arg0) != 0) {
            break;
        }
call3:
        ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 3);
        break;
    case 2:
        if ((((s32 (*)(void *))is_on_current_floor__10TObjPlayerFi)(arg0) == 0) && (check_flag_4__10TObjPlayerFPv(arg0) == 0)) {
            ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 0x16, 0);
            return;
        }
        if ((TObjPlayer__sub_801BF918(arg0 + 0x634) != 0) && (((s32 (*)(void *))test_flag_2000000__10TObjPlayerFPv)(arg0) != 0) && (((s32 (*)(void *, M2C_UNK))test_action_mask__10TObjPlayerFPvi)(arg0, 4) != 0)) {
            set_flag_400000__10TObjPlayerFi(arg0);
            ((M2C_UNK (*)(void *))enter_battle_state__10TObjPlayerFPv)(arg0 + 0x634);
        }
        ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 8);
        return;
    case 3:
    case 6:
        ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 7);
        if (check_flag_48__10TObjPlayerFPv(arg0) == 0) {
            ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 3);
        }
        break;
    }
}

s32 try_apply_status_action__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(void))check_flag30_bit20__10TObjPlayerFi)() != 0) {
        ((M2C_UNK (*)(s32, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 0x13, 5);
        return 1;
    }
    if (is_status_flag_200__10TObjPlayerFPv(arg0) != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            ((M2C_UNK (*)(s32, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xE, 5);
        } else {
            ((M2C_UNK (*)(s32, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xD, 5);
        }
        return 1;
    }
    if (can_guard__10TObjPlayerFPv(arg0) != 0) {
        ((M2C_UNK (*)(s32, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xA, 5);
        return 1;
    }
    if (is_status_locked__10TObjPlayerFPv(arg0) != 0) {
        if (get_action_id__10TObjPlayerFPv(arg0 + 0x5F0) == 0x10) {
            ((M2C_UNK (*)(s32, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 0x10, 5);
        } else {
            ((M2C_UNK (*)(s32, M2C_UNK))obj_clearFlags30)(arg0, 0x10000);
            ((M2C_UNK (*)(s32, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, get_action_id__10TObjPlayerFPv(arg0 + 0x5F0), 5);
            ((M2C_UNK (*)(s32, M2C_UNK))set_action_id__10TObjPlayerFPvs)(arg0 + 0x5F0, 0);
        }
        return 1;
    }
    return 0;
}

void TObjPlayer__sub_801BA42C(void) {
    ((s32 (*)(void *))foreach_player__10TObjPlayerFv)((void *) (&TObjPlayer__sub_801BEABC.value));
    release_all_players_control_lock();
}

s32 end_camera_pan__10TObjPlayerFPv(void *arg0) {
    if ((s32) lbl_805D55C0 != 0) {
        return 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x320) & 0x10000)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFEFFFF);
    return 1;
}

void freeze_all_players__10TObjPlayerFv(void) {
    ((M2C_UNK (*)(M2C_UNK *))foreach_player__10TObjPlayerFv)((M2C_UNK *)(&start_freeze_self__10TObjPlayerFPv.value));
}

s32 start_camera_pan__10TObjPlayerFPvs(u8 *arg0, s16 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x320) & 0x1E000) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == arg1) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10000);
    ((M2C_UNK (*)(void *))set_action_id__10TObjPlayerFPvs)(arg0 + 0x5F0);
    ((M2C_UNK (*)(void *, s16))set_anim_state__10TObjPlayerFPvs)(arg0 + 0x5F0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_state__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
    set_anim_state__10TObjPlayerFPvi(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
    return 1;
}

s32 init_photon_blast__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x320) & 0x1E000) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10000);
    set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0x10);
    set_anim_state__10TObjPlayerFPvs(arg0 + 0x5F0, arg1);
    set_state__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
    set_anim_state__10TObjPlayerFPvi(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
    return 1;
}

s32 start_freeze__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x320) & 0x1E000) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10000);
    set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0x10);
    set_anim_state__10TObjPlayerFPvs(arg0 + 0x5F0, get_idle_animation__10TObjPlayerFPv(arg0));
    set_state__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
    set_anim_state__10TObjPlayerFPvi(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
    return 1;
}

void set_action_state__10TObjPlayerFPvss(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x32A) = (s16) M2C_FIELD(arg0, s16 *, 0x326);
    M2C_FIELD(arg0, s16 *, 0x326) = arg1;
    if (is_action_id_none(arg2) == 0) {
        M2C_FIELD(arg0, s16 *, 0xB8) = arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x320) = (s32) (1 << arg1);
    ((M2C_UNK (*)(void *, M2C_UNK))set_state_flags__10TObjPlayerFPvUi)(arg0, 0x10);
}

s32 register_player_slot__10TObjPlayerFPv(void *self) {
    Ctrl_801BA6BC *c = (Ctrl_801BA6BC *)get_player_by_client_id((u16)obj_getField1c(self));
    if (c != 0) {
        delete c;
    }
    player_slot_table[(u16)obj_getField1c(self)] = self;
    return register_entity_by_id(self) == (u16)0xFFFF ? 1 : 0;
}

void *get_player_by_client_id(s32 i) {
    if (i == 0xFFFF) {
        return 0;
    }
    if (i < 0 || i >= 12) {
        return 0;
    }
    return player_slot_table[i];
}

void handle_6xAE_set_animation_state(void *arg0) {
    Msg_801BA78C m;
    void *p;
    build_6xAE_set_animation_state_packet__10TObjPlayerFPv(&m);
    copy_from__10TObjPlayerFPvPv(&m, arg0);
    bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(&m);
    if (validate_6xAE_set_animation_state(&m) != 0) {
        p = get_player_by_client_id(m.slot);
        if (p != NULL && ((s32 (*)(void))is_lobby_floor_15__15TFontSmallLobbyFv)() != 0 && ((s32 (*)(void *, u32))test_action_mask__10TObjPlayerFPvi)(p, 0x01000000) == 0 && (m.flags & 0x04000000)) {
            set_state_flags__10TObjPlayerFPvUi(p, m.flags & 0x1C000000);
            run_action_state_phase__10TObjPlayerFisi(p, 0x18, 0);
        }
    }
}

void handle_6x20_set_position(void *arg0) {
    Msg_801BA838 m;
    Player_801BA838 *p;
    init_cmd_6x20__10TObjPlayerFPv(&m);
    TObjPlayer__sub_801C1664(&m, arg0);
    bswap_pkt_u32x5__10TObjPlayerFPv(&m);
    if (validate_6x20_set_position(&m) != 0) {
        p = ((Player_801BA838 *)get_player_by_client_id((s32)(m.slot)));
        if (p != NULL) {
            ((void (*)(void *, void *))set_position_from__14TBoss4DarkFalzFPvPv)(p, m.vec);
            set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
            set_floor__10TObjPlayerFPvi(p, m.floor);
            p->ang = m.ang;
            ((void (*)(void *))set_flag_400000__10TObjPlayerFi)(p);
        }
    }
}

void handle_6x1F_set_player_floor(void *arg0) {
    Msg1F_801BA8D4 m;
    Msg_801BA8D4 m2;
    Msg20_801BA8D4 m3;
    void *p;
    Player_801BA8D4 *pl;
    init_6x1F_floor_packet(&m);
    handle_6x1F_set_floor__10TObjPlayerFPvPv(&m, arg0);
    bswap_set_floor_packet__10TObjPlayerFPv(&m);
    if (validate_6x1F_set_player_floor(&m) != 0) {
        p = get_player_by_client_id(m.slot);
        if (p != NULL) {
            set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
            set_floor__10TObjPlayerFPvi(p, m.floor);
        }
        pl = ((Player_801BA8D4 * (*)(void))update_battle_controller__10TObjPlayerFv)();
        if (pl != NULL && (pl == NULL || ((s32 (*)(void *))obj_isState2_324)(pl) == 0)) {
            init_cmd_6x20__10TObjPlayerFPv(&m3);
            m3.id = obj_getField1c(pl);
            m3.f4 = get_field_3e4__10TObjPlayerFPv(pl);
            VecCopy__FP3VecPC3Vec(m3.vec, pl->pos);
            m3.ang = pl->ang;
            send_player_floor_packet_u32x5__10TObjPlayerFPv(&m3);
            if (((s32 (*)(void))is_lobby_floor_15__15TFontSmallLobbyFv)() != 0) {
                build_6xAE_set_animation_state_packet__10TObjPlayerFPv(&m2);
                m2.id = obj_getField1c(pl);
                m2.f8 = TObjPlayer__sub_801BEB0C(pl);
                m2.floor = get_floor__10TObjPlayerFPv(pl);
                m2.speed = get_speed__10TObjPlayerFPv(pl);
                send_player_floor_packet__10TObjPlayerFPvPv(&m2, m.slot);
            }
        }
    }
}

void apply_state_transform__10TObjPlayerFUi(u32 arg0) {
    struct Sp8Struct_801baa00 sp8;

    ((M2C_UNK (*)(void))set_flag_400000__10TObjPlayerFi)();
    if ((arg0 == 0U) || (((s32 (*)(u32))obj_isState2_324)(arg0) == 0)) {
        ((M2C_UNK (*)(M2C_UNK *))init_6x1F_floor_packet)((M2C_UNK *)&sp8);
        sp8.fA = ((s16 (*)(u32))obj_getField1c)(arg0);
        sp8.fC = ((s32 (*)(u32))get_field_3e4__10TObjPlayerFPv)(arg0);
        bswap_and_send_set_floor__10TObjPlayerFPv((M2C_UNK *)&sp8);
    }
}

void handle_6x21_inter_level_warp(void *arg0) {
    Msg_801BAA6C m;
    void *p;

    init_6x21_inter_level_warp_packet(&m);
    copy_warp_target__10TObjPlayerFPvPv(&m, arg0);
    bswap_warp_packet__10TObjPlayerFPv(&m);
    if (validate_6x21_inter_level_warp(&m) != 0) {
        p = ((void * (*)(u16))get_player_by_client_id)(m.slot);
        if (p != NULL) {
            if ((((s32 (*)(void))obj_isState2_324)() != 0) && (m.floor != get_field_3e4__10TObjPlayerFPv(p))) {
                set_state_flags__10TObjPlayerFPvUi(p, 0x40000);
            }
            set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
            set_floor__10TObjPlayerFPvi(p, m.floor);
        }
    }
}

void send_6x21_inter_level_warp(void *obj, s32 value) {
    if (obj == 0 || ((s32 (*)(void *))obj_isState2_324)(obj) == 0) {
        Msg_801BAB1C m;
        init_6x21_inter_level_warp_packet(&m);
        m.id = ((u16 (*)(void *))obj_getField1c)(obj);
        m.value = value;
        send_warp_packet__10TObjPlayerFPv(&m);
    }
}

void draw_projected_shadow__10TObjPlayerFPvPvi(VObj_801BAB78 *self, f32 *pos, s32 arg2) {
    Vec_801BAB78 v;
    s32 a;
    s32 b;
    self->m63(1, &v);
    ((void (*)(void))push_matrix)();
    direction_to_rotation_xz(self->f248, &a, &b);
    translate_matrix(0, v.x, lbl_805DC2C8 + self->f3c, v.z);
    rotate_matrix_z(0, b);
    rotate_matrix_x(0, a);
    ((void (*)(int, s32))rotate_matrix_y)(0, self->f60);
    rotate_matrix_x(0, -0x4000);
    if (pos != NULL) {
        scale_matrix(0, pos[0], pos[2], (*(const f32 *)&TObjPlayer__data_805DC294));
    }
    draw_blob_shadow(arg2);
    ((void (*)(void))pop_matrix)();
}

void TObjPlayer__sub_801BAC48(void) {  }

void draw_head_attachments__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK var_r31;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8B4) != 0U) {
        ((M2C_UNK (*)(void *, int))get_item_ptr__10TObjPlayerFPvi)((void *) (arg0), (int) (0x3A));
        ((M2C_UNK (*)(void))push_matrix_from)();
        set_global_param__8TObjFishFi((void *) (arg0 + 0xB88));
        if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
            set_shadow_material_state();
        }
        ((M2C_UNK (*)(int))play_phase_transition_sound__10TObjPlayerFi)((int) (M2C_FIELD(arg0, u32 *, 0x8B4)));
        reset_transform_state__10TObjPlayerFv();
        pop_matrix();
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8B0) != 0U) {
        ((M2C_UNK (*)(void *, int))get_item_ptr__10TObjPlayerFPvi)((void *) (arg0), (int) (0x3B));
        ((M2C_UNK (*)(void))push_matrix_from)();
        set_global_param__8TObjFishFi((void *) (arg0 + 0xA1C));
        if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
            set_shadow_material_state();
        }
        enable_making__12TCharaMakingFv();
        ((M2C_UNK (*)(int))draw_chunk_object)((int) (M2C_FIELD(arg0, u32 *, 0x8B0)));
        clear_flag_bit0__12TCharaMakingFv();
        reset_transform_state__10TObjPlayerFv();
        pop_matrix();
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8AC) != 0U) {
        ((M2C_UNK (*)(void *, int))get_item_ptr__10TObjPlayerFPvi)((void *) (arg0), (int) (0x3B));
        ((M2C_UNK (*)(void))push_matrix_from)();
        set_global_param__8TObjFishFi((void *) (arg0 + 0xA1C));
        var_r31 = 0;
        if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
            var_r31 = 1;
        }
        enable_making__12TCharaMakingFv();
        f32 alpha = get_mag_scale_f__10TObjPlayerFPv(arg0 + 0x608);
        TCharaMaking__draw_colored_hair(alpha, (s32)M2C_FIELD(arg0, u32 *, 0x8AC),
            (CharacterAppearanceFields *)(arg0 + 0x85C), var_r31);
        clear_flag_bit0__12TCharaMakingFv();
        reset_transform_state__10TObjPlayerFv();
        pop_matrix();
    }
}

void draw_body__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_801BAD60, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801BAD60, spC) == 0x4) ? 1 : -1];
    Stack_801BAD60 stack;
    u8 *temp_r3;
    push_matrix();
    ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    stack.spC += M2C_FIELD(arg0, f32 *, 0x5FC);
    ((s32 (*)(int, void *))translate_matrix_vec3)((int) (0), (void *) (&stack.sp8));
    ((s32 (*)(int, int))rotate_matrix_y)((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    if (check_state_flag_1__8TItemMagFPv((void *) (arg0 + 0x5B0)) != 0) {
        temp_r3 = (u8 *)(TObjPlayer__sub_801BF934(arg0 + 0x5B0));
        ((s32 (*)(int, f32, f32, f32))scale_matrix)((int) (0), (f32) (M2C_FIELD(temp_r3, f32 *, 0)), (f32) (M2C_FIELD(temp_r3, f32 *, 4)), (f32) (M2C_FIELD(temp_r3, f32 *, 8)));
    }
    save_render_material_state((void *) (arg0 + 0x608));
    set_some_id__FUl((int) (8));
    ((s32 (*)(void *))apply_material_color_override__10TObjPlayerFi)((void *) (arg0));
    if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
        some_id_805c6f74 |= 0x810;
        set_chunk_material_override_pair((int) (-1), (int) (0x800));
        set_shadow_material_state();
    }
    set_global_param__8TObjFishFi((void *) (arg0 + 0xCF4));
    set_global_flag__10TObjPlayerFv();
    if (arg1 == 2) {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x400);
        draw_motion_model_saving_joints((void *) (arg0));
    } else {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFBFF);
        draw_model_with_callback__10TObjPlayerFPv((void *) (arg0));
    }
    clear_global_state__10TObjPlayerFv();
    draw_head_attachments__10TObjPlayerFPv((u8 *)((void *) (arg0)));
    write_ids__10TObjPlayerFPv((void *) (arg0 + 0x608));
    pop_matrix();
    if (check_state_flag_1__8TItemMagFPv((void *) (arg0 + 0x5B0)) != 0) {
        ((s32 (*)(void *, void *, int))draw_projected_shadow__10TObjPlayerFPvPvi)((void *) (arg0), (void *) (TObjPlayer__sub_801BF934(arg0 + 0x5B0)), (int) (0));
        return;
    }
    ((s32 (*)(void *, void *, int))draw_projected_shadow__10TObjPlayerFPvPvi)((void *) (arg0), (void *) (NULL), (int) (0));
}

void render__10TObjPlayerFv(u8 *arg0) {
    s32 spC;
    s32 sp8;
    f32 temp_f31;
    s32 temp_r3;

    if ((((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x02000000) == 0) && (is_inactive__10TObjPlayerFPv(arg0) != 0) && ((check_flag_4__10TObjPlayerFPv(arg0) == 0) || ((check_flag_4__10TObjPlayerFPv(arg0) != 0) && (M2C_FIELD(arg0, s16 *, 0x328) == 0)))) {
        temp_r3 = ((VObj801BAEC8 *) arg0)->m9(lbl_805DC2CC, lbl_805DC2D0, TObjPlayer__data_805DC2BC);
        spC = temp_r3 ^ 0x80000000;
        sp8 = 0x43300000;
        temp_f31 = (f32) temp_r3;
        if (TObjPlayer__data_805DC278 != temp_f31) {
            if ((get_mode__11TCameraCtrlFPv(main_task) & 0x20) && (is_state_active__14TOKeyMachine01Fv() != 0)) {
                if (render_player_marker__12TObjEneReconFUsi(M2C_FIELD(arg0, u16 *, 0x1C), 1) != 0) {
                    ((M2C_UNK (*)(void *, f32))render_body_pass__10TObjPlayerFPvf)(arg0, temp_f31);
                    restore_render_scissor(1);
                }
            } else {
                ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)(arg0, 0x08000000);
                ((M2C_UNK (*)(void))end_effect_render__13TParticleCtrlFv)();
                ((M2C_UNK (*)(void *))select_actor_lighting)(arg0);
                if ((((s32 (*)(void *))check_flag_800000__10TObjPlayerFPv)(arg0) != 0) && (((s32 (*)(void *))obj_isState2_324)(arg0) != 0)) {
                    ((M2C_UNK (*)(void *))get_speed__10TObjPlayerFPv)(arg0);
                    ((M2C_UNK (*)(void *))draw__10TObjPlayerFPvf)(arg0);
                } else if (!(M2C_FIELD(arg0, u16 *, 4) & 0x400)) {
                    some_id_805c6f74 |= 1;
                    ((M2C_UNK (*)(void *, s32))draw_body__10TObjPlayerFPvi)(arg0, (s32) temp_f31);
                    some_id_805c6f74 &= 0xFFFFFFFE;
                }
                save_render_material_state(arg0 + 0x608);
                ((M2C_UNK (*)(void *))apply_material_color_override__10TObjPlayerFi)(arg0);
                ((M2C_UNK (*)(M2C_UNK))set_depth_buffer_settings_id__FUl)(1);
                ((M2C_UNK (*)(void *))TObjPlayer__sub_801BAC48)(arg0);
                write_ids__10TObjPlayerFPv(arg0 + 0x608);
                ((M2C_UNK (*)(void))restore_scene_lighting)();
            }
        } else {
            obj_setFlags30(arg0, 0x08000000);
            set_global_flag__10TObjPlayerFv();
            ((M2C_UNK (*)(void *))get_speed__10TObjPlayerFPv)(arg0);
            ((M2C_UNK (*)(void *))draw__10TObjPlayerFPvf)(arg0);
            clear_global_state__10TObjPlayerFv();
            save_render_material_state(arg0 + 0x608);
            ((M2C_UNK (*)(void *))apply_material_color_override__10TObjPlayerFi)(arg0);
            ((M2C_UNK (*)(void *))TObjPlayer__sub_801BAC48)(arg0);
            write_ids__10TObjPlayerFPv(arg0 + 0x608);
        }
    } else {
        set_global_flag__10TObjPlayerFv();
        ((M2C_UNK (*)(void *))get_speed__10TObjPlayerFPv)(arg0);
        ((M2C_UNK (*)(void *))draw__10TObjPlayerFPvf)(arg0);
        clear_global_state__10TObjPlayerFv();
        save_render_material_state(arg0 + 0x608);
        ((M2C_UNK (*)(void *))apply_material_color_override__10TObjPlayerFi)(arg0);
        ((M2C_UNK (*)(void *))TObjPlayer__sub_801BAC48)(arg0);
        write_ids__10TObjPlayerFPv(arg0 + 0x608);
    }
}

void render_body_pass__10TObjPlayerFPvf(u8 *self, f32 f) {
    obj_clearFlags30(self, 0x08000000);
    end_effect_render__13TParticleCtrlFv();
    select_actor_lighting(self);
    if (((s32 (*)(void *))check_flag_800000__10TObjPlayerFPv)(self) != 0 && ((s32 (*)(void *))obj_isState2_324)(self) != 0) {
        draw__10TObjPlayerFPvf(self, get_speed__10TObjPlayerFPv(self));
    } else if (!(*(u16 *)(self + 4) & 0x400)) {
        some_id_805c6f74 |= 1;
        draw_body__10TObjPlayerFPvi(self, (s32)f);
        some_id_805c6f74 &= ~1;
    }
    save_render_material_state(self + 0x608);
    ((s32 (*)(void *))apply_material_color_override__10TObjPlayerFi)(self);
    set_depth_buffer_settings_id__FUl(1);
    ((void (*)(void *))TObjPlayer__sub_801BAC48)(self);
    write_ids__10TObjPlayerFPv(self + 0x608);
    restore_scene_lighting();
}

void render_shadows__10TObjPlayerFv(u8 *self) {
    f32 f;

    if (is_in_shadow_range(self + 0x38, lbl_805DC2D4) != 0) {
        set_shadow_flag__10TObjPlayerFPv(self);
        begin_effect_render__13TParticleCtrlFv();
        if (((s32 (*)(void *, u32))obj_testFlags30)(self, 0x02000000) == 0 && is_inactive__10TObjPlayerFPv(self) != 0 &&
            (check_flag_4__10TObjPlayerFPv(self) == 0 ||
             (check_flag_4__10TObjPlayerFPv(self) != 0 && *(s16 *)(self + 0x328) == 0))) {
            f = ((VObj_801BB1F8 *)self)->m9(lbl_805DC2CC, lbl_805DC2D0, TObjPlayer__data_805DC2BC);
            obj_clearFlags30(self, 0x08000000);
            draw_body__10TObjPlayerFPvi(self, (s32)f);
            save_render_material_state(self + 0x608);
            ((s32 (*)(void *))apply_material_color_override__10TObjPlayerFi)(self);
            ((void (*)(void *))TObjPlayer__sub_801BAC48)(self);
            write_ids__10TObjPlayerFPv(self + 0x608);
        }
        end_effect_render__13TParticleCtrlFv();
        clear_shadow_flag__10TObjPlayerFPv(self);
    }
}

void run_task__10TObjPlayerFv(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r0_2;

    ((M2C_UNK (*)(void))handle_state2_transitions__10TObjPlayerFPv)();
    ((M2C_UNK (*)(void *))update_subsystems__10TObjPlayerFi)(arg0);
    ((M2C_UNK (*)(void *))update_position_history__10TObjPlayerFPv)(arg0);
    ((M2C_UNK (*)(void *))update_status_effects__10TObjPlayerFPv)(arg0);
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 1);
    advance_animation_playback(arg0);
    ((M2C_UNK (*)(void *))calc_attach_pos__10TObjPlayerFPv)(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    copy_offset_position__10TObjPlayerFPvPv(arg0 + 0x84C, arg0);
    if (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x800) != 0) {
        refresh_collision_body_centers(arg0);
    } else if (get_type__10TObjPlayerFPv(arg0 + 0x828) == 0) {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x324);
        switch (temp_r0) {
        case 1:
            refresh_collision_body_centers(arg0);
            check_enemy_body_collisions(arg0);
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        case 6:
        case 2:
            refresh_collision_body_centers(arg0);
            break;
        case 3:
            refresh_collision_body_centers(arg0);
            check_enemy_body_collisions(arg0);
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x324);
        switch (temp_r0_2) {
        case 3:
        case 1:
            check_object_collisions__10TObjPlayerFPv(arg0);
            check_enemy_body_collisions(arg0);
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        case 2:
            if (check_flag__10TObjPlayerFPvi(arg0, 4) != 0) {
                refresh_collision_body_centers(arg0);
            } else {
                check_object_collisions__10TObjPlayerFPv(arg0);
            }
            break;
        case 6:
            refresh_collision_body_centers(arg0);
            break;
        }
    }
    update_movement_effects__10TObjPlayerFi(arg0);
    ((M2C_UNK (*)(void *))update_facing_vector__10TObjPlayerFPv)(arg0);
}

void unregister__10TObjPlayerFi(s32 arg0) {
    ((M2C_UNK (*)(void))clear_links__10TObjPlayerFPv)();
    unregister_sub__10TObjPlayerFPv(arg0);
    ((M2C_UNK *)&player_slot_table)[(u16)((s32 (*)(s32))obj_getField1c)(arg0)] = 0;
}

s32 setup_control_role__10TObjPlayerFPvi(Player_801BB524 *self, s32 role) {
    set_control_role__10TObjPlayerFPvi(self, role);
    if (role < 4) {
        self->control = 1;
    } else if (role == 4) {
        self->control = 2;
    } else if (role == 5) {
        self->control = 3;
    } else if (role == 6) {
        self->control = 6;
    } else if (role == 7) {
        self->control = 7;
    } else {
        return 0;
    }
    self->flags |= 0x10000000;
    ((void (*)(void *))init_collision_body__10TObjPlayerFPv)(self);
    return register_player_slot__10TObjPlayerFPv(self) != 1 ? 1 : 0;
}

void TObjPlayer__vt6(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r3;
    reset_motion_fields__10TObjPlayerFPv();
    release_member_90__10TObjPlayerFPv((void *) (arg0));
    reset_movement__10TObjPlayerFPv((void *) (arg0));
    reset_actor_action_state((void *) (arg0));
    reset_state__10TObjPlayerFPv((void *) (arg0));
    TObjPlayer__sub_801BD3A4((void *) (arg0));
    place_on_area_entry__10TObjPlayerFPv((void *) (arg0));
    update_input_and_draw__10TObjPlayerFi((void *) (arg0));
    TObjPlayer__sub_801BCD50((void *) (arg0));
    can_cast_technique__10TObjPlayerFPv((void *) (arg0));
    update_recobox__10TObjPlayerFi((void *) (arg0));
    update_state__10TObjPlayerFi((void *) (arg0));
    TObjPlayer__sub_801BCA0C((void *) (arg0));
    reset_area_entry_state__10TObjPlayerFPv((void *) (arg0));
    ((M2C_UNK (*)(void *))update_lock_on_cursor__10TObjPlayerFPv)((void *) (arg0));
    ((M2C_UNK (*)(void *))TObjPlayer__sub_801BBB74)((void *) (arg0));
    ((M2C_UNK (*)(void *))TFontSmallLobby__ct)((void *) (arg0));
    ((M2C_UNK (*)(void *))TObjPlayer__sub_801BB8A8)((void *) (arg0));
    if ((is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) && (((s32 (*)(void))is_key_machine_ready__10TObjPlayerFv)() != 0) && (((s32 (*)(void *, int))check_flag__10TObjPlayerFPvi)((void *) (arg0), (int) (0x800)) == 0) && ((((s32 (*)(void *, int))obj_testFlags30)((void *) (arg0), (int) (0x800)) != 0) || (((s16 (*)(void *))obj_getS16_32C)((void *) (arg0)) <= 0))) {
        ((M2C_UNK (*)(void *, int))obj_clearFlags30)((void *) (arg0), (int) (0x800));
        if (check_camera_mode__10TObjPlayerFv() != 0) {
            ((M2C_UNK (*)(void *))send_code_49_1__10TObjPlayerFi)((void *) (arg0));
        } else {
            if (is_single_screen__10TObjPlayerFv() == 0) {
                ((M2C_UNK (*)(void *, int))set_meseta__10TObjPlayerFPvi)((void *) (arg0), (int) (0));
            }
            ((M2C_UNK (*)(u16, s32, s32))send_6x24_teleport_player)(((u16 (*)(void *))obj_getField1c)((void *) (arg0)), get_hospital_position__10TObjPlayerFPv((void *) (arg0)), get_hospital_yaw__10TObjPlayerFv((void *) (arg0)));
            ((M2C_UNK (*)(void *, int))set_state_flags__10TObjPlayerFPvUi)((void *) (arg0), (int) (0x800));
            ((M2C_UNK (*)(void *, int))set_battle_flag__10TObjPlayerFPvi)((void *) (arg0), (int) (0));
        }
    }
    if ((is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) && (((s32 (*)(void *, int))check_flag__10TObjPlayerFPvi)((void *) (arg0), (int) (0x800)) != 0)) {
        ((M2C_UNK (*)(void *, int))TObjPlayer__sub_8011E204)((void *) (arg0), (int) (0x800));
        ((M2C_UNK (*)(s32))TLobby__sub_8024AC20)(((u16 (*)(void *))obj_getField1c)((void *) (arg0)));
        ((M2C_UNK (*)(void *, int))play_effect_default__10TObjPlayerFii)((void *) (arg0), (int) (0xF));
        update_position_from_target__10TObjPlayerFPv((void *) (arg0));
        ((M2C_UNK (*)(void *))send_code_49_1__10TObjPlayerFi)((void *) (arg0));
        ((M2C_UNK (*)(void *))send_code50_packet__10TObjPlayerFi)((void *) (arg0));
        if (((s32 (*)(void *))is_alive_and_ready__10TObjPlayerFi)((void *) (arg0)) != 0) {
            ((M2C_UNK (*)(void *))refill_traps__10TObjPlayerFPv)((void *) (arg0));
        }
        temp_r3 = get_anim_id__10TObjPlayerFPv((void *) (arg0));
        switch (temp_r3) {
        case 2:
            break;
        case 0:
            set_camera_mode__10TObjPlayerFi((int) (2));
            ((M2C_UNK (*)(void *))send_field_state__10TObjPlayerFi)((void *) (arg0));
            ((M2C_UNK (*)(void *, int))set_meseta__10TObjPlayerFPvi)((void *) (arg0), (int) (0));
            {
                void *m = ((void * (*)(int))__nw__7TObjectFUl)(0x234);
                if (m != 0) {
                    TMedicalCenterMes__ct(m, (void *) (tl_05), (void *) (arg0));
                }
            }
            break;
        case 1:
            set_camera_mode__10TObjPlayerFi((int) (1));
            break;
        }
        ((M2C_UNK (*)(void *, int))set_battle_flag__10TObjPlayerFPvi)((void *) (arg0), (int) (0));
    }
}

int TObjPlayer__sub_801BB85C(void) { return 0; }

void TObjPlayer__sub_801BB8A8(void) {  }

void TObjPlayer__sub_801BB8AC(void) {  }

void TObjPlayer__sub_801BB8B0(u8 *arg0, u8 *arg1) {
    s32 temp_r0;
    s32 var_r4;
    u8 *var_r30;
    u8 *var_r31;
    u8 *var_r3;
    var_r31 = (u8 *)(arg1);
    var_r30 = (u8 *)(arg0);
    var_r3 = (u8 *)(var_r31);
    temp_r0 = unpack_u32_lo__10TObjPlayerFPv(var_r3);
    var_r3 = (u8 *)(var_r30 + 0x41C);
    var_r4 = temp_r0;
    set_state__9TTecLukerFPvi((int) (var_r3), (int) (var_r4));
    var_r3 = (u8 *)(var_r31);
    M2C_FIELD(var_r30, s32 *, 0x420) = unpack_u32_hi__10TObjPlayerFPv(var_r3);
}

void init_class_flags__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x338) = TObjPlayer__sub_801BEB4C(arg1);
    M2C_FIELD(arg0, s8 *, 0x339) = TObjPlayer__sub_801BEB44(arg1);
    M2C_FIELD(arg0, s8 *, 0x33A) = TObjPlayer__sub_801BEB3C(arg1);
}

void TFontSmallLobby__ct(u8 *arg0) {
  u32 temp_r3_2;
  u8 *temp_r3;
  if (reset_key_machine_state__10TObjPlayerFv() != 0)
  {
    temp_r3 = (u8 *) ((u8 * (*)(void *))get_item_field_6__10TObjPlayerFPv)(arg0);
    if (temp_r3 != 0)
    {
      ((s32 (*)(void *, void *))set_action_provider_variant__10TObjPlayerFPvs)((void *) arg0, (void *) ((s16) (((VObj_18_9c7036 *)(temp_r3))->m41())));
    }
  }
  if ((is_locally_controlled__10TObjPlayerFPv((void *) arg0) != 0) && (((s32 (*)(void))is_lobby_floor_15__15TFontSmallLobbyFv)() == 0))
  {
    if (reset_key_machine_state__10TObjPlayerFv() == 0)
    {
      init_feed_timer__8TItemMagFPv((void *) (arg0 + 0x4AC));
    }
    reinit_photon_blast_gauge((void *) (arg0 + 0x4AC));
    update_if_ready__15TFontSmallLobbyFPv((void *) (arg0 + 0x4AC));
    update_photon_blast_state__10TObjPlayerFv();
  }
  if (((s32 (*)(void))is_lobby_floor_15__15TFontSmallLobbyFv)() != 0)
  {
    temp_r3_2 = *((u32 *) (((s8 *) arg0) + 0x54C));
    if ((temp_r3_2 != 0U) && (((s32 (*)(int, void *))check_value_equals__13TQuestColCtrlFPvi)((int) temp_r3_2, (void *) lbl_805D2B28) != 0))
    {
      ((s32 (*)(int))queue_destruction__7TObjectFv)((int) (*((u32 *) (((s8 *) arg0) + 0x54C))));
    }
    *((u32 *) (((s8 *) arg0) + 0x54C)) = create__15TFontSmallLobbyFPv((void *) ((s32) (obj_getField1c((void *) arg0) & 0xFFFFu)));
  }
  obj_clear_flag30_20000((void *) arg0);
  if (is_locally_controlled__10TObjPlayerFPv((void *) arg0) != 0)
  {
    if (((s32 (*)(void *))check_flag_800000__10TObjPlayerFPv)((void *) arg0) != 0)
    {
      ((s32 (*)(void *))draw_small_label__15TFontSmallLobbyFi)((void *) arg0);
    }
    if (check_state_flag_1__8TItemMagFPv((void *) (arg0 + 0x5B0)) != 0)
    {
      request_player_size_restore((void *) (arg0 + 0x5B0));
    }
  }
  TFontSmallLobby__sub_801C013C((void *) (arg0 + 0x428));
  TObjPlayer__sub_80354E7C();
}

void setup_fresh_player_state__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s16 *, 0x32E) = (s16) M2C_FIELD(arg0, s16 *, 0x2BA);
    if ((obj_isState2_324() != 0) && (((s32 (*)(void))is_lobby_floor_15__15TFontSmallLobbyFv)() == 0) && (check_camera_mode__10TObjPlayerFv() == 0)) {
        ((M2C_UNK (*)(void *))deactivate_body_collision__10TObjPlayerFPv)((void *) (arg0));
    }
    if (((s32 (*)(void *))is_ready__10TObjPlayerFPv)((void *) (arg0)) != 0) {
        set_flag_10000__10TObjPlayerFPv((void *) (arg0));
    }
    if (((s32 (*)(void *))is_alive_and_ready__10TObjPlayerFi)((void *) (arg0)) != 0) {
        ((M2C_UNK (*)(void *))refill_traps__10TObjPlayerFPv)((void *) (arg0));
    }
    set_play_time__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD(arg1, u8 *, 3)));
    TObjPlayer__sub_801BF93C((void *) (arg0 + 0x5B0), (void *) (obj_getField1c((void *) (arg0))));
    ((M2C_UNK (*)(void *))disable_drop_weapon_on_death__10TObjPlayerFPv)((void *) (arg0));
    M2C_FIELD(arg0, s8 *, 0x338) = TObjPlayer__sub_801C21BC((void *) (arg1));
    M2C_FIELD(arg0, s8 *, 0x339) = TObjPlayer__sub_801C21B4((void *) (arg1));
    M2C_FIELD(arg0, s8 *, 0x33A) = TObjPlayer__sub_801C21AC((void *) (arg1));
}

void TObjPlayer__sub_801BBB70(void) {  }

int TObjPlayer__sub_801BBB74(void* p) { return ((int (*)(void*))enable_action_input__10TObjPlayerFPv)(p); }

void TObjPlayer__sub_801BBB94(void) {  }

void init_player_substructs__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8013A748((void *)((char *)arg0 + 1280));
    init_action_palette_defaults__10TObjPlayerFi((s32)((void *)(arg0)));
}

void init_action_palette_defaults__10TObjPlayerFi(s32 arg0) {
    set_action_palette_entry__10TObjPlayerFiiiiii(arg0, 0, 0, 0, 1, 0);
    set_action_palette_entry__10TObjPlayerFiiiiii(arg0, 0, 1, 0, 1, 0);
}

void TObjPlayer__sub_801BBC2C(void* p) { *(s32*)((char*)p + 0x424) = 0; }

void update_lock_on_cursor__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) reset_and_spawn_cursors__13TLockOnCursorFi(m); }

void TObjPlayer__sub_801BBC64(void) {  }

void create_lockon_cursor__10TObjPlayerFPv(void *arg0) {
    u32 var_r31;
    u32 var_r31_2;

    if (is_single_screen__10TObjPlayerFv() != 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0U) {
            var_r31 = __nw__7TObjectFUl(0x52C);
            if (var_r31 != 0U) {
                var_r31 = TLockOnCursor__ct(var_r31, arg0, obj_getField1c(arg0));
            }
            M2C_FIELD(arg0, u32 *, 0x424) = var_r31;
        }
    } else if (((is_locally_controlled__10TObjPlayerFPv(arg0) != 0) || (obj_isState3_324(arg0) != 0)) && ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0U)) {
        var_r31_2 = __nw__7TObjectFUl(0x52C);
        if (var_r31_2 != 0U) {
            var_r31_2 = TLockOnCursor__ct(var_r31_2, arg0, obj_getField1c(arg0));
        }
        M2C_FIELD(arg0, u32 *, 0x424) = var_r31_2;
    }
}

int clear_links__10TObjPlayerFPv(void* p) { return clear_obj_links(p); }

void init_collision_body__10TObjPlayerFPv(Player_801BBD58 *self) {
    self->body.offset.x = TObjPlayer__data_805DC278;
    self->body.offset.y = TObjPlayer__data_805DC278;
    self->body.offset.z = TObjPlayer__data_805DC278;
    self->body.radius = lbl_805DC2B0;
    self->body.radius2 = lbl_805DC2B0;
    self->body.kind = 0;
    switch (self->control) {
    case 1:
    case 2:
        if (get_type__10TObjPlayerFPv(self->f828) == 0) {
            self->body.flags = 0x200B;
        } else {
            self->body.flags = 0x2003;
        }
        break;
    case 3:
        if (get_type__10TObjPlayerFPv(self->f828) == 0) {
            self->body.flags = 0x604B;
        } else {
            self->body.flags = 0x6043;
        }
        break;
    case 6:
        self->body.flags = 0x16043;
        break;
    }
    self->body.center.x = self->pos.x;
    self->body.center.y = self->pos.y;
    self->body.center.z = self->pos.z;
    self->body.extra = TObjPlayer__data_805DC278;
    initialize_linked_object_reference(self, &self->body);
}

struct Cand_801BBE54 { s16 val; Obj_801BC068 *obj; };
struct Cmd_801BBE54 { u16 hdr; u16 client; s32 area; u8 pos[12]; };
f32 horizontal_distance_squared(void *, void *);
extern const f32 lbl_805DC2D8;

M2C_UNK send_respawn_position__10TObjPlayerFPv(void *self) {
    Cand_801BBE54 list[13];
    Cmd_801BBE54 cmd;
    u8 pos[12];
    s32 count;
    s32 i;
    s32 ok;
    Obj_801BC068 *obj;
    Cand_801BBE54 *c;
    s32 area;
    Obj_801BC068 *pick;

    ((void (*)(void *, void *, int, int, int))__construct_array)(list, (void *)TObjPlayer__sub_801BC050, 0, 8, 13);
    c = list;
    count = 0;
    for (obj = tl_06->head; obj != NULL; obj = obj->next) {
        if (check_value_equals__13TQuestColCtrlFPvi(obj, TObjPlayer__player_set_class_name) != 0 && obj->f84 == 0) {
            f32 range = lbl_805DC2C0;
            ok = 1;
            for (i = 0; i < 12; i++) {
                if (i != (u16)obj_getField1c(self)) {
                    u8 *p = (u8 *)((u32 (*)(int))get_player_by_client_id)(i);
                    if (p != NULL && horizontal_distance_squared(obj->pos, p + 0x38) < range) {
                        ok = 0;
                        break;
                    }
                }
            }
            if (ok != 0) {
                count++;
                c->val = obj->f68;
                c->obj = obj;
                c++;
            }
        }
        if (count > 4) {
            break;
        }
    }
    init_cmd_6x24__10TObjPlayerFPv(&cmd);
    pick = list[(s32)((f32)count * (lbl_805DC2D8 * (lbl_805DC288 * (f32)rand())))].obj;
    if (pick == NULL || count == 0) {
        area = M2C_FIELD(self, s32 *, 0x60);
        VecCopy__FP3VecPC3Vec(pos, (u8 *)self + 0x38);
    } else {
        area = pick->ang;
        VecCopy__FP3VecPC3Vec(pos, pick->pos);
    }
    if (self == NULL || ((s32 (*)(void *))obj_isState2_324)(self) == 0) {
        cmd.client = obj_getField1c(self);
        cmd.area = area;
        VecCopy__FP3VecPC3Vec(cmd.pos, pos);
        send_lobby_update__10TObjPlayerFPv(&cmd);
    }
}

void TObjPlayer__sub_801BC050(O_801BC050 *p) {
    p->a = 0xFFFF;
    p->b = 0;
}

void TObjPlayer__send_selected_spawn_position(void *self, u16 id) {
    Msg_801BC068 m;
    s32 found;
    Obj_801BC068 *o;
    found = 0;
    for (o = tl_06->head; o != NULL; o = o->next) {
        if (check_value_equals__13TQuestColCtrlFPvi(o, TObjPlayer__player_set_class_name) != 0 && o->f84 == 0 &&
            (s32)o->f68 == id) {
            found = 1;
            break;
        }
    }
    if (found != 0 && (self == NULL || ((s32 (*)(void *))obj_isState2_324)(self) == 0)) {
        init_set_position_packet__10TObjPlayerFPv(&m);
        m.id = obj_getField1c(self);
        m.ang = o->ang;
        VecCopy__FP3VecPC3Vec(m.vec, o->pos);
        TObjPlayer__sub_801C18E0(&m);
    }
}

}
