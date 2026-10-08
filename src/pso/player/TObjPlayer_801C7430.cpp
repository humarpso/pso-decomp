#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/PlayerAttackController.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct L_801C74BC { u16 f0; u16 f2; s32 f4; };

typedef struct Msg_801C7430 {
    u8 pad0[2];
    u16 slot;
    s32 c;
} Msg_801C7430;

typedef struct Player_801C7430 {
    u8 pad0[0x60];
    s32 dir;
    u8 pad64[0x308 - 0x64];
    u8 vec[12];
} Player_801C7430;

struct Base_801C7538 { char pad[8]; };

struct VObj_801C7538 : Base_801C7538 {
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
    virtual int m74();
};

struct VBase8_801c7630 { char pad[8]; };

struct VObj8_801c7630 : VBase8_801c7630 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual int vf10C();
    virtual int vf110();
};

struct VBase_inner_801c77c8 { char pad[8]; };

struct VBase_380_801c77c8 : VBase_inner_801c77c8 { virtual s32 m0(); virtual s32 m1(); virtual s32 m2(); virtual s32 m3(); virtual s32 m4(); virtual s32 m5(); virtual s32 m6(); virtual s32 m7(); virtual s32 m8(); virtual s32 m9(); virtual s32 m10(); virtual s32 m11(); virtual s32 m12(); virtual s32 m13(); virtual s32 m14(); virtual s32 m15(); virtual s32 m16(); virtual s32 m17(); virtual s32 m18(); virtual s32 m19(); virtual s32 m20(); virtual s32 m21(); virtual s32 m22(); virtual s32 m23(); virtual s32 m24(); virtual s32 m25(); virtual s32 m26(); virtual s32 m27(); virtual s32 m28(); virtual s32 m29(); virtual s32 m30(); virtual s32 m31(); virtual s32 m32(); virtual s32 m33(); virtual s32 m34(); virtual s32 m35(); virtual s32 m36(); virtual s32 m37(); virtual s32 m38(); virtual s32 m39(); virtual s32 m40(); virtual s32 m41(); virtual s32 m42(); virtual s32 m43(); virtual s32 m44(); virtual s32 m45(); virtual s32 m46(); virtual s32 m47(); virtual s32 m48(); virtual s32 m49(); virtual s32 m50(); virtual s32 m51(); virtual s32 m52(); virtual s32 m53(); virtual s32 m54(); virtual s32 m55(); virtual s32 m56(); virtual s32 m57(); virtual s32 m58(); virtual s32 m59(); virtual s32 m60(); virtual s32 m61(); virtual s32 m62(); virtual s32 m63(); virtual s32 m64(); virtual s32 m65(); virtual s32 m66(); };

struct Pkt_801C7874 { s16 hdr; s16 id; s32 val; };

struct Player_801C7874 {
    u8 pad0[0x328];
    s16 f328;
};

struct VBase_8_1cc697 { char pad[0x8]; };

struct VObj_8_1cc697 : VBase_8_1cc697 {
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
    virtual s32 m18();
    virtual s32 m19();
    virtual void m20();
    virtual void m21();
    virtual s32 m22();
    virtual void m23();
    virtual s32 m24();
    virtual s32 m25();
    virtual s32 m26();
    virtual void m27();
    virtual void m28();
    virtual s32 m29();
    virtual s32 m30();
    virtual s32 m31();
    virtual s32 m32();
    virtual s32 m33();
    virtual s32 m34();
    virtual s32 m35();
    virtual s32 m36();
    virtual s32 m37();
    virtual s32 m38();
    virtual s32 m39();
    virtual s32 m40();
    virtual s32 m41();
    virtual s32 m42();
    virtual s32 m43();
    virtual s32 m44();
    virtual s32 m45();
    virtual s32 m46();
    virtual s32 m47();
    virtual s32 m48();
    virtual s32 m49();
    virtual s32 m50();
    virtual s32 m51();
    virtual s32 m52();
    virtual s32 m53();
    virtual s32 m54();
    virtual s32 m55();
    virtual s32 m56();
    virtual s32 m57();
    virtual s32 m58();
    virtual s32 m59();
    virtual s32 m60();
    virtual s32 m61();
    virtual s32 m62();
    virtual s32 m63();
    virtual s32 m64();
    virtual s32 m65();
    virtual s32 m66();
    virtual s32 m67();
    virtual s32 m68();
    virtual s32 m69();
    virtual s32 m70();
};

struct Base_801C841C { char pad[0x8]; };

struct VObj_801C841C : Base_801C841C {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)VV(62)VV(63)VV(64)VV(65)VV(66)VV(67)VV(68)VV(69)VV(70)
VV(71)VV(72)VV(73)
#undef VV
    virtual s32 v76();
};

typedef struct Msg_801C851C {
    u8 pad0[2];
    u16 slot;
    s16 c;
} Msg_801C851C;

typedef struct Player_801C851C {
    u8 pad0[0x3C0];
    s16 anim;
} Player_801C851C;

struct Pkt_801C85BC { u16 hdr; s16 id; s16 c; };

struct Base_A { char pad[0x18]; };

struct V_A : public Base_A {
    virtual void f_801C8AA4_0();
    virtual void f_801C8AA4_1();
    virtual void f_801C8AA4_2();
    virtual void f_801C8AA4_3();
    virtual void f_801C8AA4_4();
    virtual void f_801C8AA4_5();
    virtual void f_801C8AA4_6();
    virtual void f_801C8AA4_7();
    virtual void f_801C8AA4_8();
    virtual void f_801C8AA4_9();
    virtual void f_801C8AA4_10();
    virtual void f_801C8AA4_11();
    virtual void f_801C8AA4_12();
    virtual void f_801C8AA4_13();
    virtual void f_801C8AA4_14();
    virtual void m15();
};

struct Pkt_801C8CCC { u16 hdr; u16 id; s32 c; f32 x1, y1, z1; f32 x2, y2, z2; };

struct Pkt_801C8BE8 { u16 hdr; s16 id; s32 c; f32 x1, y1, z1; };

typedef struct Msg_801C8B5C {
    u8 pad0[2];
    u16 slot;
    s32 c;
    u8 vec[12];
} Msg_801C8B5C;

typedef struct Player_801C8B5C {
    u8 pad0[0x60];
    s32 ang;
} Player_801C8B5C;

typedef struct Vec_801C8FCC { f32 x, y, z; } Vec_801C8FCC;

typedef struct Cmd_801C8FCC {
    u8 cmd;
    u8 size;
    u16 client;
    s32 area;
    Vec_801C8FCC a;
    Vec_801C8FCC pos;
} Cmd_801C8FCC;

struct Pkt_801C9084 { u16 hdr; s16 id; s32 c; f32 x1, y1, z1; f32 x2, y2, z2; };

typedef struct MsgA_801C9400 {
    u8 pad0[2];
    s16 f2;
} MsgA_801C9400;

typedef struct MsgB_801C9400 {
    u8 pad0[2];
    s16 f2;
    s32 f4;
    s16 f8;
    s16 fa;
} MsgB_801C9400;

struct Pkt_801C9838 {
    u8 hdr[2];
    u16 client;
    s16 c;
    s16 e;
    s32 g;
};

struct Pkt_801C9924 { u16 hdr; s16 id; s16 a; s16 b; s32 c; };

struct Local801C9D3C {
    s16 field0;
    s16 fieldA;
};

struct Pkt_801C9FE8 { u16 hdr; u16 id; u16 c; };

struct S801CA274 { s8 b[2]; s16 h; };

struct VBase_18_4841bb { char pad[0x18]; };

struct VObj_18_4841bb : VBase_18_4841bb {
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
    virtual M2C_UNK m53();
};

struct Cmd_801CA724 {
    u8 cmd;
    u8 size;
    u16 client;
    u8 data[0xC];
};

struct Cmd_801CA7BC {
    u8 cmd;
    u8 size;
    u16 client;
    s16 val;
    u16 pad;
};

struct Cmd2_801CA7BC {
    u8 cmd;
    u8 size;
    u16 client;
    u8 data[4];
};

struct VBase_801cac08 {
    char pad[0x18];
};

struct VObj_801cac08 : VBase_801cac08 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

struct Pkt_801CADA4 { u8 hdr[2]; s16 id; s16 dir; s16 f6; f32 x; f32 z; };

struct Base_801cb0c4 { char pad[0x18]; };

struct VObj_801cb0c4 : Base_801cb0c4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

struct Pkt_801CB27C { u16 hdr; s16 id; s16 a; s16 b; f32 x; f32 z; };

struct Pkt_801CB4D0 { u16 hdr; s16 id; s32 c; };

struct SwitchActionMessage_801CB6A8 { u8 code; u8 words; u16 actor; s32 yaw; };

typedef struct Ctx_801CB748 { s16 f0; s16 f2; s32 f4; } Ctx_801CB748;

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

struct PbPacket37_801CC194 {
    u8 hdr[2];
    s16 player;
    s16 gauge;
};

struct Pkt_801CC0F4 {
    u16 f0;
    u16 player;
    u8 pad[0x10 - 4];
};

typedef struct Msg_801CC6B8 {
    u8 pad0[2];
    u16 id;
    s8 kind;
    u8 pad5;
    s16 count;
    s16 param;
    u8 padA[2];
    u32 techs[13];
} Msg_801CC6B8;

typedef struct Player_801CC6B8 {
    u8 pad0[0x4AC];
    u8 pb[4];
} Player_801CC6B8;

struct Slot_801CC558 { u16 id; s16 idx; };

struct Mylla_801CC558 { u8 pad[0xA4]; u8 *tbl; };

struct Pkt_801CC7F8 {
    u8 cmd;
    u8 size;
    s16 client;
    s8 index;
    u8 pad5;
    s16 count;
    s16 sub;
    u8 padA[2];
    s32 tech[11];
};

struct Pkt_801CCB58 { u16 hdr; u16 id; s16 c; };

typedef struct Msg_801CCA84 {
    u8 pad0[2];
    u16 id;
    u16 target;
    u8 pad6[2];
} Msg_801CCA84;

typedef struct Tech_801CCA84 {
    s32 kind;
    u16 target;
    s16 f6;
    f32 f8;
    u8 padc[0x60 - 0xC];
} Tech_801CCA84;

typedef struct Player_801CCA84 {
    u8 pad0[0x10];
    u32 list;
} Player_801CCA84;

struct Rec_801CCEDC { u8 pad[0x10]; s16 cost; };

struct Pkt_801CCEDC { u16 hdr; u16 id; s16 tech; u16 level; };

struct Player_801CCEDC { u8 pad[0x328]; s16 f328; u8 pad32a[0x32E - 0x32A]; s16 tp; u8 pad330[0x428 - 0x330]; u8 techs[4]; };

struct Pkt_801CCD38 { u16 hdr; u16 id; s16 tech; s16 level; };

struct Rec_801CCD38 { u8 pad[0x20]; s16 state; };

struct Player_801CCD38 { u8 pad[0x10]; u32 f10; u8 pad14[0x328 - 0x14]; s16 f328; u8 pad32a[0x428 - 0x32A]; u8 techs[4]; };

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

struct Pkt_801CDAD8 { u8 cmd; u8 size; u16 player; s16 heading; s16 kind; };

struct Rec_801CDBA0 { u8 pad[0x1C]; f32 pos[3]; u8 pad2[0x2C - 0x28]; };

struct Pkt_801CDED4 { u8 cmd; u8 size; u16 player; s16 heading; s16 kind; };

struct Rec_801CDF9C { u8 pad[0x1C]; f32 pos[3]; u8 pad2[0x2C - 0x28]; };

typedef struct Player_801CE068 {
    u8 pad0[0xB0];
    u32 flags;
    u8 padb4[0xB8 - 0xB4];
    s16 anim;
    u8 padba[0x328 - 0xBA];
    s16 state;
    u8 pad32a[0x7CC - 0x32A];
    u8 act[4];
} Player_801CE068;

struct VBase_801CE928 { u8 pad[0x18]; };

struct Item_801CE928 : VBase_801CE928 {
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
};

struct Player_801CE928 : VBase_801CE928 {
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
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual s32 v65(f32);
};

struct Pkt_801CF128 { u8 cmd; u8 size; u16 player; s16 heading; s16 kind; };

typedef struct Player_801CF2B0 {
    u8 pad0[0xB0];
    u32 flags;
    u8 padb4[0xB8 - 0xB4];
    s16 anim;
    u8 padba[0x328 - 0xBA];
    s16 state;
    u8 pad32a[0x7CC - 0x32A];
    u8 act[4];
} Player_801CF2B0;

struct Plr_801CF56C {
    u8 pad0[0x38];
    f32 x;
    f32 y;
    f32 z;
    u8 pad44[0x1c];
    s32 rot;
    u8 pad64[0x2a4];
    f32 vx;
    f32 vy;
    f32 vz;
    u8 pad314[0xdc];
    s32 target_rot;
    u8 pad3f4[4];
    f32 tx;
    f32 ty;
    f32 tz;
    u8 pad404[0x1dc];
    u8 motion[0xc];
    u8 flags[4];
};

struct Cmd_801CF780 { u16 hdr; u16 id; f32 x; f32 z; };

struct Player_801CF780 { u8 pad[0x3F8]; f32 x; u8 pad3fc[4]; f32 z; };

typedef struct Msg_801CF824 {
    u8 pad0[2];
    s16 f2;
    f32 x;
    f32 z;
} Msg_801CF824;

typedef struct Npc_801CF824 {
    u8 pad0[0x3F0];
    s32 f3f0;
    u8 pad3f4[4];
    f32 x;
    u8 pad3fc[4];
    f32 z;
} Npc_801CF824;

struct Plr_801CFDF8 {
    u8 pad0[0x38];
    f32 x;
    f32 y;
    f32 z;
    u8 pad44[0x1c];
    s32 rot;
    u8 pad64[0x2a4];
    f32 vx;
    f32 vy;
    f32 vz;
    u8 pad314[0xdc];
    s32 target_rot;
    u8 pad3f4[4];
    f32 tx;
    f32 ty;
    f32 tz;
    u8 pad404[0x1dc];
    u8 motion[0xc];
    u8 flags[4];
};

struct Cmd_801D0000 { u16 hdr; u16 id; f32 x; f32 z; s32 state; };

struct Player_801D0000 { u8 pad[0x3F8]; f32 x; u8 pad3fc[4]; f32 z; u8 pad404[0x5EC - 0x404]; u8 luker[4]; };

typedef struct Msg_801D00B0 {
    u8 pad0[2];
    s16 f2;
    f32 x;
    f32 z;
    s32 v;
} Msg_801D00B0;

typedef struct Npc_801D00B0 {
    u8 pad0[0x3F0];
    s32 f3f0;
    u8 pad3f4[4];
    f32 x;
    u8 pad3fc[4];
    f32 z;
    u8 pad404[0x5EC - 0x404];
    u8 sub[4];
} Npc_801D00B0;

struct VBase_8_e57d67 { char pad[0x8]; };

struct VObj_8_e57d67 : VBase_8_e57d67 {
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
    virtual s16 m18();
    virtual void m19();
    virtual void m20();
    virtual s16 m21();
};

typedef struct Msg_801D0634 {
    u8 pad0[2];
    u16 id;
    s16 flag;
    s16 ang;
    s16 floor;
    s16 room;
    u8 vec[12];
} Msg_801D0634;

typedef struct Player_801D0634 {
    u8 pad0[0x60];
    s32 ang;
} Player_801D0634;

struct Player_801D0724 {
    u8 pad0[0x60];
    s32 ang;
    u8 pad64[0x328 - 0x64];
    s16 f328;
};

typedef struct Msg_801D08B0 {
    u8 pad0[2];
    s16 f2;
    s16 f4;
    s16 f6;
    s16 f8;
    s16 fa;
    u8 vec[12];
} Msg_801D08B0;

typedef struct Msg_801D094C {
    u8 pad0[2];
    s16 f2;
    s16 f4;
    s16 f6;
    s16 f8;
    s16 fa;
    u8 vec[12];
} Msg_801D094C;

typedef struct Player_801D094C {
    u8 pad0[0x38];
    u8 vec[12];
    u8 pad44[0x60 - 0x44];
    s32 f60;
} Player_801D094C;

struct VBase_8_684c72 { char pad[0x8]; };

struct VObj_8_684c72 : VBase_8_684c72 {
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
    virtual s32 m65();
    virtual s32 m66();
};

}
#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };
#pragma pop
extern "C" {

struct Base_801D0F0C { char pad[0x8]; };

struct VObj_801D0F0C : Base_801D0F0C {
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
    virtual int m23();
};

struct Pkt_801D1888 { u8 cmd; u8 size; u8 pad[2]; u16 a; u16 b; };

struct VOff_801D192C_arg0_801D18B0 { char pad_0[0x4]; char f_4[1]; };

}
#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };
#pragma pop
extern "C" {

struct Target_801D1DDC { u16 id; s16 part; };

struct Packet_801D1DDC {
    u8 command, size;
    u16 player;
    s8 kind, flags;
    s16 count, gauge, unused;
    struct Target_801D1DDC targets[10];
};

struct M2CCopy_28
{
  u8 bytes[0x28];
};

typedef struct M2CCopy_28 M2CCopy_28;

struct E_801D1FA4 { u8 d[4]; };

struct Obj_801D1FA4 { u16 a; u16 b; s16 n0; s16 n; u8 pad[4]; E_801D1FA4 e[1]; };

struct Pkt_801D209C { u8 cmd; u8 size; u8 pad[2]; u16 a; u16 b; };

struct Vec_801D24F4 { u8 bytes[0xC]; };

struct Pkt_801D24F4 { u8 hdr[4]; Vec_801D24F4 pos; };

struct Ent_801D2640 { u8 pad[8]; f32 f; u8 pad2[4]; };

struct Obj_801D2640 {
    u8 pad[0xB8];
    s16 idx;
    u8 pad2[0xD8 - 0xBA];
    Ent_801D2640 *arr;
};

struct M2CCopy_2C { u8 bytes[0x2C]; };

struct RecoveredGlobal_801D2CF4_lbl_804C43CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801D2CF4_lbl_804C43D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Ent_801D2AB0 { u8 d[4]; };

struct Obj_801D2AB0 { u8 pad[0x14]; Ent_801D2AB0 arr[1]; };

struct Pos_801D2964 { u8 bytes[0x8]; };

struct Pkt_801D2964 { u8 hdr[4]; Pos_801D2964 pos; };

struct Ent_801D32A0 { u16 a; s16 b; };

struct Self_801D32A0 { u8 pad[0x20]; f32 f20; f32 f24; f32 f28; f32 f2c; s32 count; Ent_801D32A0 ents[1]; };

struct Cur_801D32A0 { u8 pad[0x28]; f32 x28; f32 x2c; f32 x30; u8 pad2[8]; f32 x3c; u8 pad3[0x5C]; u8 lock[4]; };

struct Pl_801D32A0 { u8 pad[0x424]; void *cursor; };

struct E_801D2B2C { u8 d[4]; };

struct Obj_801D2B2C { s32 n; E_801D2B2C e[1]; };

struct E_801D2C18 { u8 d[4]; };

struct Obj_801D2C18 { s32 n; E_801D2C18 e[1]; };

struct Vec_801D3224 { f32 x, y, z; };

struct Rec_801D3224 { u8 pad[0x1C]; Vec_801D3224 pos; u8 pad28[4]; };

struct Obj_801D3224 { u8 pad[0xA4]; Rec_801D3224 *recs; };

struct Slot_801D3224 { s16 a; s16 idx; };

typedef char RecoveredGlobal_801D2CF4_lbl_804C43CC_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43CC) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_801D2CF4_lbl_804C43D8_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43D8) == 0x10 ? 1 : -1];

struct VBase_18_d7a0b2 { char pad[0x18]; };

struct VObj_18_d7a0b2 : VBase_18_d7a0b2 {
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
    virtual M2C_UNK m15();
};

typedef struct Msg_801CACD8 {
    u8 pad0[2];
    u16 id;
    s16 ang;
    s16 kind;
    f32 x;
    f32 z;
} Msg_801CACD8;

typedef struct Player_801CACD8 {
    u8 pad0[0x60];
    s32 ang;
    u8 pad64[0x308 - 0x64];
    f32 x;
    u8 pad30c[4];
    f32 z;
} Player_801CACD8;

typedef struct Msg_801CB1B0 {
    u8 pad0[2];
    u16 id;
    s16 ang;
    s16 kind;
    f32 x;
    f32 z;
} Msg_801CB1B0;

typedef struct Player_801CB1B0 {
    u8 pad0[0x60];
    s32 ang;
    u8 pad64[0x308 - 0x64];
    f32 x;
    u8 pad30c[4];
    f32 z;
} Player_801CB1B0;

s32 get_main_phase();
M2C_UNK TObjPlayer__sub_8000FF4C(void *, M2C_UNK);
M2C_UNK get_field_2d4__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_8001053C(void *);
M2C_UNK apply_velocity__10TObjPlayerFPv(s32);
s32 add_actor_tp(s32, s32);
void set_hp_clamped__10TObjPlayerFPvs(void *, s16);
s32 add_actor_hp(s32, s32);
M2C_UNK trigger_switch_attack__10TObjPlayerFPvi(void *, s32);
void calc_attach_pos__10TObjPlayerFPv(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 obj_isState2_324(void *);
s32 obj_getS16_32C(void * a0 = 0);
s32 obj_isState3_324();
s32 TObjPlayer__sub_8001943C(void *, M2C_UNK);
M2C_UNK add_status_effect_timer__10TObjPlayerFPvii(void *, M2C_UNK, s32);
s32 obj_testFlags30(s32, s32);
s16 obj_getField1c(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
void obj_setFlags30(void *, u32);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 get_current_floor(void);
s16 get_field_3e4__10TObjPlayerFPv(void *);
Item_801CE928 * get_item_field_6__10TObjPlayerFPv(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 newton_sqrtf(f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
void set_flags__10TObjPlayerFPvUi(void *, u32);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
s32 test_flags_any(void *, int);
void init_forward__10TObjPlayerFPv(void *);
void clear_id__10TObjPlayerFPv(void *);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, s32);
M2C_UNK reset_lobby_model__10TObjPlayerFPv(void *);
M2C_UNK set_type__10TObjPlayerFPvi(void *, M2C_UNK);
s32 check_value_equals__13TQuestColCtrlFPvi(int, void *);
void construct_target_cursor_records__10TObjPlayerFi(void *);
s32 check_player_flag1__6TLobbyFPv(void *);
s32 check_flag__10TObjPlayerFPvi(int, int);
void set_position_from__14TBoss4DarkFalzFPvPv(void *, void *);
void * get_position_ptr__10TObjPlayerFPv(void *);
M2C_UNK fn_800660B8(void *);
M2C_UNK reset_cameras_to_actor(void *, int);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
s32 test_action_mask__10TObjPlayerFPvi(void *, s32);
s32 TObjPlayer__sub_80082300(void *);
s32 is_inactive__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
void set_flags_B0__10TObjPlayerFPvUi(void *, u32);
M2C_UNK init__14TObjEnePanarmsFPvPv(void *, s32);
int TObjEnePanarms__sub_800E2DE4(void*, void*);
s32 init_entry_fields__6TLobbyFPviii(int, int, void *, void *);
u32 activate_d04_slot__10TObjPlayerFPv(s32);
M2C_UNK spawn_appearance_effect__10TObjPlayerFi();
s32 is_active__8TItemMagFPv();
s16 get_sub_value__8TItemMagFi(void *);
s16 get_type_id__10TObjPlayerFPv(void* p);
void * TObjPlayer__sub_80116620(void *, s32);
int TObjPlayer__sub_8011E204(void*, void*);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, int);
s32 weapon_has_extra_attack();
void set_action_type__10TObjPlayerFPvs(void *p, s16 v);
s32 get_state_ptr__10TObjPlayerFPv(void *);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
u16 get_uid__10TObjPlayerFPv(void *);
int TObjPlayer__sub_80121248(void*, int);
s32 TObjPlayer__sub_8012125C(s32);
M2C_UNK increment_burst_counter(void *);
s32 get_anim_state__10TObjPlayerFPv(void *);
M2C_UNK copy_attack_targets(void *, void *);
int TObjPlayer__sub_8012AF00(void*);
void TObjPlayer__sub_8012AF80(void *);
M2C_UNK publish_actor_light_scalars(u16, f32, f32);
s32 canSetMenuCursorAction(s32, void *, M2C_UNK, u8);
M2C_UNK set_cursor_pos__11TMainCursorFiUsi(int, int, int);
M2C_UNK set_slot__20TWindowActionPaletteFPvUc(s32, u8);
M2C_UNK set_mode__20TWindowActionPaletteFPvUc(s32, M2C_UNK);
M2C_UNK TMainCursor__sub_8013DFC4(s32);
u8 TMainCursor__sub_8013E900(void *);
s32 is_cursor_clear__11TMainCursorFPv(void *);
s32 get_target__13TLockOnCursorFPv(void* p);
void calc_direction_vector__10TObjPlayerFiPvf(s32, void *, f32);
M2C_UNK calc_circle_offset_pos__10TObjPlayerFiPvPvf(int, void *, void *, f32);
s32 calc_angle_to__10TObjPlayerFPvPv(void *, void *);
s32 approach_angle_adaptive(s32, s32);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
f32 sample_attack_root_motion(void *, void *, void *);
s32 is_anim_finished__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
s32 TBoss1Dragon__sub_80143960(void *, M2C_UNK);
void send_6x3E__10TNpcPlayerFi(void *);
void bswap_6x3E__10TNpcPlayerFi(void *);
void init_6x3E_packet__10TNpcPlayerFPv(void *);
M2C_UNK update__10TNpcPlayerFPv(void *);
void bswap_6x45_packet(Pkt_801CDAD8 *);
void TNpcPlayer__sub_80152B08(Pkt_801CDAD8 *);
M2C_UNK update_players__10TNpcPlayerFPv(void *);
void bswap_6x44_packet(Pkt_801CDED4 *);
void TNpcPlayer__sub_80152B98(Pkt_801CDED4 *);
M2C_UNK update_lobby__10TNpcPlayerFPv(void *);
void bswap_6x43_packet(Pkt_801CF128 *);
M2C_UNK TNpcPlayer__sub_80152C28(void *);
void finalize_and_send_packet__10TNpcPlayerFPv(void *);
void init_cast_technique_cmd__10TNpcPlayerFPv(void *);
void reset_model__10TNpcPlayerFPv(void *);
void init_model__10TNpcPlayerFPv(void *cmd);
void reset_move_state__10TNpcPlayerFPv(void *cmd);
void sync_from_lobby__10TNpcPlayerFPv(void *);
void swap_endian__10TNpcPlayerFPv(void *cmd);
void TNpcPlayer__sub_80152E74(void *cmd);
void set_field2__10TNpcPlayerFPvs(void* p, s16 v);
void set_field_0__10TNpcPlayerFPvs(void* p, s16 v);
void set_state__10TNpcPlayerFPvi(void* p, s32 v);
void byteswap_pos__10TNpcPlayerFPv(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
int set_indexed_flags(void*, void*, void*);
u8 * resolve_hittable_target(u16, s16);
u8 * find_entity_by_id(s32);
s32 get_trap_type__10TOMineTrapFPv(int);
void set_state__9TTecLukerFPvi(void *p, s32 state);
void set__10TObjRoomIdFPvs(void *, s16);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
s32 TKeyBoardControl__sub_801A58B0();
s32 TKeyBoardControl__sub_801A58D8();
s32 is_key_down__16TKeyBoardControlFi(int);
s32 check_input_angle__16TKeyBoardControlFPv(void *);
void init_stick_escape_detector(void *, s32);
M2C_UNK admit_photon_blast_sequence(s32, s32);
M2C_UNK start_photon_blast__10TObjPlayerFiUs(s32, u16);
u8 * get_photon_blast_entry__10TObjPlayerFi(unsigned int);
s32 is_final_phase__10TObjPlayerFv();
s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_single_screen__10TObjPlayerFv();
s32 TObjPlayer__sub_801AF290(s32);
M2C_UNK update_facing_from_lock__10TObjPlayerFPv(void *);
s32 is_alive_and_ready__10TObjPlayerFi(u32);
M2C_UNK refill_traps__10TObjPlayerFPv(u32);
s16 get_handle_value__10TObjPlayerFPv();
s32 is_lobby_floor_15__15TFontSmallLobbyFv();
s32 is_on_current_floor__10TObjPlayerFi();
void sync_current_floor__10TObjPlayerFPv(void *);
void sync_current_area__10TObjPlayerFPv(void *);
M2C_UNK update_trap_sub__10TOMineTrapFPv(void *, int, int);
M2C_UNK fn_801B0480(int, void *, int);
M2C_UNK draw_player_status(void *, void *, void *);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK refresh_equipment_slot__10TObjPlayerFv(void *);
s32 test_flag_2000000__10TObjPlayerFPv(void *);
int activate_body_collision__10TObjPlayerFPv(void*);
int deactivate_body_collision__10TObjPlayerFPv(void*);
M2C_UNK spawn_effect__10TObjPlayerFi(void *);
M2C_UNK draw__10TObjPlayerFPvf(void *, f32);
u32 find_revival_item__10TObjPlayerFv(void *);
s32 reset_volopt_state__10TObjPlayerFv(void *obj);
M2C_UNK for_each_player_slot__10TObjPlayerFv(M2C_UNK *);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);
s32 is_in_tl03_state__10TObjPlayerFPv(void *);
s32 send_6x2F_change_player_hp(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
int check_flag30_bit20__10TObjPlayerFi(void*);
s16 calc_scaled_value__10TObjPlayerFii(void *, int);
M2C_UNK apply_speed_scale__10TObjPlayerFif(void *, f32);
void complete_deferred_player_death();
s32 create_return_city_window__10TObjPlayerFPv(void *);
s32 is_flag_clear__17TObjWarpBossMultiFPv(void *obj);
s32 is_flag_400_set__10TObjPlayerFPv(void *);
M2C_UNK enable_action_input__10TObjPlayerFPv(void *);
s32 handle_palette_button_input__10TObjPlayerFPv(void *);
s32 classify_action_state__10TObjPlayerFv(void *);
void emit_footstep_effect__10TObjPlayerFiff(void *, f32, f32);
void play_footstep_sound__10TObjPlayerFi(void *, f32, f32);
M2C_UNK TObjPlayer__sub_801B4430(u32);
M2C_UNK send_code_49_1__10TObjPlayerFi(u32);
s32 check_flag_100__10TObjPlayerFPv(void *);
s32 get_camera_field__10TObjPlayerFPv(s32);
Cur_801D32A0 * TObjPlayer__sub_801B57E8(void *);
u16 get_action_palette_entry__10TObjPlayerFii(void *, s32);
u16 TObjPlayer__sub_801B5AF8(void *, s32);
s32 check_actor_blocking_move__10TObjPlayerFPv(void *);
u32 resolve_move_collision__10TObjPlayerFPv(void *);
M2C_UNK damp_planar_velocity();
s32 rewind_position_history__10TObjPlayerFPv(s32);
s32 is_matching_id__10TObjPlayerFPvs(void *, s16);
M2C_UNK drop_items_on_death__10TObjPlayerFPv(void *);
s32 use_current_item__10TObjPlayerFPv(void * a0 = 0);
int try_apply_status_action__10TObjPlayerFi(void*);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
u8 * get_player_by_client_id(u16);
s32 check_camera_mode__10TObjPlayerFv();
s32 TObjPlayer__sub_801BE2D0(s32);
s32 get_model_field_m25__10TObjPlayerFPv(void *);
s16 get_action_animation__10TObjPlayerFPv(void *);
s32 call_model_m24__10TObjPlayerFPv(void *);
s32 get_weapon_stat_c__10TObjPlayerFPv(void * a0 = 0);
s32 call_obj_vt26__10TObjPlayerFPv(void * a0 = 0);
s32 query_child_state__10TObjPlayerFPv(void *);
s32 query_equip__10TObjPlayerFPv(void *);
s16 get_status__10TObjPlayerFPv(void *obj);
s32 get_model_state__10TObjPlayerFPv(void *);
s32 get_state__10TObjPlayerFPv(void *);
s32 call_subobject_m15__10TObjPlayerFPv(void *);
s32 get_vobj_state_28__10TObjPlayerFPv(void *);
s32 check_flag_4__10TObjPlayerFPv(void *);
M2C_UNK set_flag_4000__10TObjPlayerFPv(void *);
M2C_UNK clear_flag_4000__10TObjPlayerFPv(void *);
s32 clamp_nested_index__10TObjPlayerFPv();
int TObjPlayer__sub_801BE9A8(void*);
M2C_UNK set_flag_20000__10TObjPlayerFi(void *);
M2C_UNK set_flag_400000__10TObjPlayerFi(void *);
s32 check_flag_48__10TObjPlayerFPv(void *);
s32 is_status_locked__10TObjPlayerFPv();
s32 is_status_flag_200__10TObjPlayerFPv(void);
void set_floor__10TObjPlayerFPvi(void *, s32);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
M2C_UNK TObjPlayer__sub_801BEEE0(void *, void *);
M2C_UNK TObjPlayer__sub_801BF414(s32, s32, s32, void (*)(int));
int update_action_palette__10TObjPlayerFPv(void*);
int set_action_palette_mode__10TObjPlayerFPv(void*);
M2C_UNK TObjPlayer__sub_801BF690(void *);
M2C_UNK set_anim_state__10TObjPlayerFPvi(void *, int);
M2C_UNK set_state__10TObjPlayerFPvs(void *, int);
M2C_UNK set_anim_state__10TObjPlayerFPvs(void *, int);
M2C_UNK set_action_id__10TObjPlayerFPvs(s32, M2C_UNK);
f32 TObjPlayer__sub_801BF814(void *p);
s16 get_action_id__10TObjPlayerFPv(s32);
M2C_UNK zero_vec3(void *);
M2C_UNK set_pos_z__10TObjPlayerFPvf(s32, f32);
s32 TObjPlayer__sub_801BFFA0(void *);
s32 is_action_id_none(int);
s32 get_hold_effect_count__10TObjPlayerFv();
u8 TObjPlayer__sub_801C010C(s32, s32);
M2C_UNK set_technique_id__10TObjPlayerFPvs(s32, s32);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
void init_6x2F_packet_header__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C0734(void *);
void TObjPlayer__sub_801C18E0(void *);
void byteswap_set_position_cmd__10TObjPlayerFi(void *);
void init_set_position_packet__10TObjPlayerFPv(void *);
M2C_UNK clear_flag_1_at_1c__10TObjPlayerFPv(void *);
void set_photon_blast_kind(void *, s32);
s32 TObjPlayer__sub_801C1F50(s32);
M2C_UNK send_neg50__6TLobbyFPvPv(void *, int);
M2C_UNK calc_death_pose_height_offset(s32, s32);
M2C_UNK calc_death_sink_offset(void *);
M2C_UNK enter_battle_state__10TObjPlayerFPv(void *);
int TObjPlayer__sub_801C5B18(void*);
int set_vec4_const__10TObjPlayerFPv(void*);
M2C_UNK revive_or_spawn_marker__10TObjPlayerFi(void *);
M2C_UNK apply_stat_multipliers_and_reset__10TObjPlayerFPv(void *, void *, f32);
M2C_UNK apply_stats_and_update__10TObjPlayerFPv(void *, void *);
f32 apply_stat_multipliers_default__10TObjPlayerFv(void *, void *);
M2C_UNK set_ring_action__10TObjPlayerFPvi(void *, int);
s32 interpolate_angle__10TObjPlayerFPvUsUsPv(void *, int, void *, void *);
void handle_6xB0_turn_or_move_lobby_chair(void *arg0);
void handle_6xAF_turn_or_move_lobby_chair(void *arg0);
void update_state_group__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801C75A4(u8 *arg0);
void start_action_18__10TObjPlayerFPv(void *arg0);
void send_state_sync__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801C7858(void);
void TObjPlayer__sub_801C785C(u8 *arg0);
void TObjPlayer__sub_801C7874(u8 *arg0);
int try_change_action__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C7A6C(s32 arg0, s16 arg1);
s16 select_idle_action__10TObjPlayerFv(u8 *arg0);
void handle_6xB1(void);
void update_dispatch_v76__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801C8478(void);
void do_action__10TObjPlayerFPv(void *arg0);
void handle_6x58_lobby_animation(void *arg0);
void TObjPlayer__sub_801C85BC(u8 *arg0);
void TObjPlayer__sub_801C862C(void);
void update_if_flagged__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801C8678(void);
int try_change_action_wrapper__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C869C(s32 arg0, s16 arg1);
void init_effects__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801C8770(void* p);
void TObjPlayer__sub_801C8790(u8 *arg0);
void handle_6x57(void *arg0);
void draw_and_send_field1c__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_801C88CC(u8 *arg0);
void TObjPlayer__sub_801C8998(u8 *arg0);
void TObjPlayer__sub_801C8A20(void);
void TObjPlayer__sub_801C8A24(void);
void TObjPlayer__sub_801C8A28(s32 arg0, s16 arg1);
void start_action_21__10TObjPlayerFPv(void *arg0);
void handle_6x56_set_player_position_and_angle(void *arg0);
void send_position_update__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801C8C50(s32 arg0, s16 arg1);
void send_6x55_intra_map_warp(u16 id, void *pos, s32 c);
void init_flags_vec4__10TObjPlayerFPv(void* p);
void update_warp_relocation__10TObjPlayerFv(u8 *arg0);
void set_dead_state__10TObjPlayerFPv(void *arg0);
void handle_6x55_intra_map_warp(s32 arg0);
void send_warp_position__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801C90F8(void);
void check_state_dead__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C9128(void);
void TObjPlayer__sub_801C912C(void);
void run_warp_action_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void reset_lobby_state__10TObjPlayerFPv(u8 *arg0);
void try_use_mag__10TObjPlayerFPv(u8 *arg0);
void enter_freeze_action__10TObjPlayerFv(void *arg0);
void handle_6x53(void *arg0);
void send_name_and_state__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801C94B8(u8 *arg0);
void update_gated_action__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801C959C(void);
void update_frozen_release__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801C9648(s32 arg0, s16 arg1);
s32 try_change_action__10TObjPlayerFi(s32 arg0);
void clear_flag__10TObjPlayerFPv(void* p);
void apply_velocity_if_free__10TObjPlayerFPv(void *arg0);
void enter_service_hold_action__10TObjPlayerFPv(u8 *arg0);
void handle_6x52_set_animation_state(s32 arg0);
void send_6x52_animation_state__10TObjPlayerFPv(u8 *arg0);
void service_hold_phase8_nop__10TObjPlayerFv(void);
void update_service_hold__10TObjPlayerFPv(u8 *arg0);
void service_hold_phase2_nop__10TObjPlayerFv(void);
void set_motion__10TObjPlayerFi(s32 arg0);
void run_service_hold_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void notify_lobby__10TObjPlayerFi(s32 arg0);
void ensure_default__10TObjPlayerFPv(void *arg0);
void init_action__10TObjPlayerFPv(u8 *arg0);
s32 handle_6x4F_revived__10TObjPlayerFi(s32 arg0);
void update_lobby_display__10TObjPlayerFUi(u32 arg0);
void update_timer_state__10TObjPlayerFPv(void *arg0);
void update_timer_action__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801C9F64(void);
void TObjPlayer__sub_801C9F68(void);
void TObjPlayer__sub_801C9F6C(s32 arg0, s16 arg1);
void handle_6x89_set_killer_entity_id(void *arg0);
void init_subobject__10TObjPlayerFi(s32 arg0);
void queue_player_injured_pose(s32 arg0);
void update_active_state__10TObjPlayerFPv(u8 *arg0);
s32 handle_revivable__10TObjPlayerFi(s32 arg0);
void update_lobby_font__10TObjPlayerFi(s32 arg0);
void update_action_render__10TObjPlayerFPv(u8 *arg0);
void restart_death_pose__10TObjPlayerFPv(u8 *arg0);
void reset_on_death__10TObjPlayerFPv(u8 *arg0);
void exit_death_state__10TObjPlayerFPv(u8 *arg0);
void update_death_pose__10TObjPlayerFPv(u8 *arg0);
void enter_death_state__10TObjPlayerFPv(u8 *arg0);
void handle_6x4D_player_died(void *arg0);
void prepare_death__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CA8F0(u8 *arg0);
void request_revival_if_not_dead__10TObjPlayerFPv(u8 *arg0);
void check_reopen_return_city_window__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CAA58(void);
void run_death_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
int exit_fall_reaction__10TObjPlayerFPv(void* p);
void update_fall_reaction__10TObjPlayerFPv(void *arg0);
void start_action_0e__10TObjPlayerFPv(u8 *arg0);
void begin_fall_reaction__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801CAEAC(void);
void complete_fall_reaction__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CAF6C(void);
void check_and_trigger_19_5__10TObjPlayerFPv(void* p);
void run_fall_reaction_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void set_flag_100000__10TObjPlayerFPv(void* p);
void update_move_state__10TObjPlayerFi(s32 arg0);
void end_freeze_action__10TObjPlayerFPv(u8 *arg0);
void send_6x4B_hurt_reaction__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CB2F0(void);
void complete_hurt_reaction__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CB360(void);
void do_action_19_5_if_flag30__10TObjPlayerFPv(void* p);
void run_hurt_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void TObjPlayer__sub_801CB424(void);
void TObjPlayer__sub_801CB428(s32 arg0);
void begin_action_0xB__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801CB4D0(u8 *arg0);
void TObjPlayer__sub_801CB52C(void);
void run_if_flag_10__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801CB55C(void);
int try_apply_status_action__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801CB580(s32 arg0, s16 arg1);
void TObjPlayer__sub_801CB5FC(void);
void apply_velocity_if_ready__10TObjPlayerFi(s32 arg0);
void start_action_c__10TObjPlayerFPv(void *arg0);
void handle_6x50_switch_interaction(const void *source);
void send_6x50_switch_interaction__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CB7A4(void);
void update_if_flag_set__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801CB7D4(void);
int TObjPlayer__sub_801CB7D8(void* p);
void run_switch_interaction_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
s32 can_guard__10TObjPlayerFPv(u8 *arg0);
void set_flag_0x100000__10TObjPlayerFPv(void* p);
void apply_velocity_if_free__10TObjPlayerFi(s32 arg0);
void start_use_item_action__10TObjPlayerFPv(u8 *arg0);
void send_object_id_packet__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_801CBB10(void);
void complete_guard_reaction__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CBB80(void);
void select_hit_action__10TObjPlayerFi(s32 arg0);
void run_guard_reaction_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void TObjPlayer__sub_801CBC90(s32 arg0);
u8 * TObjPlayer__sub_801CBCC4(s32 arg0);
s32 get_current_target_id__10TObjPlayerFv(void);
void remove_photon_blast_participant(s32 arg0);
void update_photon_blast_state__10TObjPlayerFv(void);
u8 * TObjPlayer__sub_801CBD98(s32 arg0);
void apply_photon_blast__10TObjPlayerFii(s32 arg0, s32 arg1);
void update_active_instance__10TObjPlayerFi(s32 arg0);
void TObjPlayer__vt73(s32 arg0, f32 farg0);
void release_all_players_control_lock(void);
void release_photon_blast_player_holds(u16 *p);
void freeze_players_for_photon_blast(s16 arg0, u16 *arg1);
void handle_6x36(void);
void handle_6x37_photon_blast(s32 arg0);
void send_6x37_photon_blast__10TObjPlayerFPv(void *self);
s32 check_conditions__10TObjPlayerFi(s32 arg0);
void exit_photon_blast_action__10TObjPlayerFPv(u8 *arg0);
void update_photon_blast_action__10TObjPlayerFPv(u8 *arg0);
void enter_photon_blast_action__10TObjPlayerFPv(u8 *arg0);
void handle_6x49_execute_photon_blast(void *arg0);
void copy_tech_params__10TObjPlayerFPvPv(void *arg0, void *arg1);
void prepare_photon_blast_action__10TObjPlayerFPv(u8 *arg0);
void update_band_state__10TObjPlayerFPv(u8 *arg0);
void update_target_approach__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CC9E4(void);
int try_apply_status_action_default__10TObjPlayerFPv(void* p);
void dispatch_photon_blast_action__10TObjPlayerFis(s32 arg0, s16 arg1);
void handle_6x33_revive_player(void *arg0);
void send_6x33_revive_player(s32 arg0, s16 arg1);
void clamp_and_set_unit_value__10TObjPlayerFiUci(s32 arg0, u8 arg1, s32 arg2);
void update_cursor__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 try_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1);
void handle_6x48_cast_technique_complete(void *arg);
void pay_tp_and_send_6x48_cast__10TObjPlayerFPv(Player_801CCEDC *self);
s32 try_camera_action__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 can_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 can_start_technique__10TObjPlayerFPvi(Player_801CD078 *self, s32 tech);
void exit_technique_cast__10TObjPlayerFPv(Player_801CD188 *self);
void update_technique_cast__10TObjPlayerFPv(u8 *arg0);
void enter_technique_cast__10TObjPlayerFPv(Player_801CD424 *self);
void handle_6x8D_set_technique_level_override(void *arg0);
void request_technique_cast__10TObjPlayerFPv(Player_801CD72C *self);
void check_anim_done__10TObjPlayerFPv(void *arg0);
void update_state5_action__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801CD904(void);
int apply_status_action_a__10TObjPlayerFPv(void* p);
void dispatch_technique_cast_state__10TObjPlayerFis(s32 arg0, s16 arg1);
void reset_linked_obj__10TObjPlayerFPv(void *arg0);
int TObjPlayer__sub_801CD9F0(void* p);
void enter_attack_stage3__10TObjPlayerFPv(u8 *arg0);
void handle_6x45_attack(void *src);
void send_attack_stage3_request__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CDC68(void);
void finish_attack_stage3__10TObjPlayerFPv(u8 *arg0);
void check_attack_stage3_input__10TObjPlayerFv(void);
int try_apply_status_action_1__10TObjPlayerFPv(void* p);
void run_attack_stage3_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void reset_target_link__10TObjPlayerFPv(void *arg0);
int TObjPlayer__sub_801CDDEC(void* p);
void enter_attack_stage2__10TObjPlayerFPv(u8 *arg0);
void handle_6x44_attack(void *src);
void send_attack_stage2_request__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_801CE064(void);
void finish_attack_stage2__10TObjPlayerFPv(Player_801CE068 *self);
void TObjPlayer__sub_801CE134(s32 arg0);
int apply_status_action__10TObjPlayerFPv(void* p);
void run_attack_stage2_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void start_attack_preparation__10TObjPlayerFPv(u8 *arg0);
void setup_attack_stage__10TObjPlayerFPv(u8 *arg0);
void handle_6x46_attack_finished(s32 arg0);
void send_attack_target_packet__10TObjPlayerFUi(u32 arg0);
s32 TObjPlayer__sub_801CEAC8(u8 *self);
s32 check_mode_action__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 can_perform_physical_action__10TObjPlayerFi(s32 arg0);
void update_by_state__10TObjPlayerFPv(u8 *arg0);
void apply_movement_if_ready__10TObjPlayerFPv(u8 *arg0);
void update_anim_action__10TObjPlayerFPv(u8 *arg0);
void update_action_state__10TObjPlayerFPv(u8 *arg0);
void reset_lockon__10TObjPlayerFPv(void *arg0);
void update_action_state__10TObjPlayerFv(void);
void enter_attack_stage1__10TObjPlayerFPv(u8 *arg0);
void handle_6x43_attack(void *src);
s32 request_normal_attack_stage1__10TObjPlayerFv(void *);
void TObjPlayer__sub_801CF2AC(void);
void finish_attack_stage1__10TObjPlayerFPv(Player_801CF2B0 *self);
void update_active_item__10TObjPlayerFi(s32 arg0);
int TObjPlayer__sub_801CF3C0(void* p);
void run_attack_stage1_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
s32 update_aim_target__10TObjPlayerFPv(void *arg0);
void apply_damage_and_reset__10TObjPlayerFPv(void* p);
void update_run_movement__10TObjPlayerFPv(Plr_801CF56C *self);
void start_action__10TObjPlayerFPv(u8 *arg0);
void handle_6x42_move_to_position(void *pkt);
void send_6x42_run_to_position__10TObjPlayerFPv(Npc_801CF824 *arg0);
void handle_ring_release__10TObjPlayerFi(s32 arg0);
void try_trigger_effect__10TObjPlayerFi(s32 arg0);
void select_run_request__10TObjPlayerFPv(u8 *arg0);
int TObjPlayer__sub_801CFAA4(void* p);
void dispatch_run_state__10TObjPlayerFis(s32 arg0, s16 arg1);
void TObjPlayer__sub_801CFB40(void);
void TObjPlayer__sub_801CFB44(void);
void TObjPlayer__sub_801CFB48(void);
void TObjPlayer__sub_801CFB50(void);
void TObjPlayer__sub_801CFB54(void);
void TObjPlayer__sub_801CFB58(void);
void TObjPlayer__sub_801CFB5C(void);
int apply_status_action_b__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801CFB80(s32 arg0, s16 arg1);
u8 * TObjPlayer__sub_801CFBFC(u8 *arg0);
s32 update_combat_stats__10TObjPlayerFPv(u8 *arg0);
void calc_movement_target__10TObjPlayerFPviPvPv(u8 *arg0, s32 arg1, f32 *arg2, f32 *arg3);
void reset_and_flag__10TObjPlayerFPv(void* p);
void update_walk_movement__10TObjPlayerFPv(Plr_801CFDF8 *self);
void set_attack_state__10TObjPlayerFPv(u8 *arg0);
void handle_6x40_walk_to_position(void *pkt);
void send_6x40_walk_to_position__10TObjPlayerFPv(Npc_801D00B0 *arg0);
void handle_ring_hit__10TObjPlayerFi(s32 arg0);
void check_ring_action__10TObjPlayerFi(s32 arg0);
void select_walk_request__10TObjPlayerFv(u8 *arg0);
int TObjPlayer__sub_801D03BC(void* p);
void run_walk_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
s32 get_idle_animation__10TObjPlayerFPv(u8 *arg0);
void cleanup_idle_entry__10TObjPlayerFPv(void* p);
void exit_idle_state__10TObjPlayerFv(void);
void update_action__10TObjPlayerFi(s32 arg0);
void start_animation__10TObjPlayerFPv(void *arg0);
void handle_6x3F_set_position(void *arg0);
void handle_6x3E_stop_at_position(void *arg0);
void update_position_from_target__10TObjPlayerFPv(void* p);
void send_idle_return_event__10TObjPlayerFPvPvs(void *arg0, void *arg1, s16 arg2);
void send_6x3E_stop_at_position__10TObjPlayerFPv(Player_801D094C *arg0);
void TObjPlayer__sub_801D09F4(void);
void complete_idle_state__10TObjPlayerFv(void);
void check_idle_movement_request__10TObjPlayerFPv(u8 *arg0);
int try_apply_status_action_2__10TObjPlayerFPv(void* p);
void run_idle_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
void run_action_state_phase__10TObjPlayerFisi(s32 arg0, s16 arg1, s32 arg2);
int update_lobby_chair__10TObjPlayerFPv(void* p);
int get_chair_state__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D0D58(void* p);
void TObjPlayer__sub_801D0D7C(void* p);
void TObjPlayer__sub_801D0D8C(void* p);
void clear_state_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D0DAC(void* p);
int start_action18_sub__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D0DF4(void* p);
void TObjPlayer__sub_801D0E18(void* p);
int get_action_flag__10TObjPlayerFPv(void* p);
int forward_1D1044_at_34c__10TObjPlayerFPv(void* p);
int is_action_flag_28__10TObjPlayerFPv(void* p);
void set_anim_flag__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D0E74(void* p);
void TObjPlayer__sub_801D0E84(void* p);
int get_flag__10TObjPlayerFPv(void* p);
u8 * TObjPlayer__sub_801D0EA0(u8 *arg0, u8 *arg1);
short query_child_state2__10TObjPlayerFPv(void *arg0);
void release_control_lock__10TObjPlayerFPv(void* p);
void clear_flag_200__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D0F70(void* p);
void* get_field4_ptr__10TObjPlayerFPv(void* p);
int copy_position__10TObjPlayerFPv(void* p);
void set_float_param__10TObjPlayerFis(s32 arg0, s16 arg1);
int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1058(u8 *arg0);
u8 TObjPlayer__sub_801D1078(u8 *arg0);
void TObjPlayer__sub_801D1090(void* p);
void TObjPlayer__sub_801D109C(u8 *arg0);
u8 TObjPlayer__sub_801D10BC(u8 *arg0);
void TObjPlayer__sub_801D10D4(void* p);
void * TObjPlayer__sub_801D1108(void *arg0, void *arg1);
void TObjPlayer__sub_801D1144(u8 *arg0);
void swap_endian32__10TObjPlayerFPv(void* p);
void * TObjPlayer__sub_801D1194(void *arg0, void *arg1);
void TObjPlayer__sub_801D11D0(u8 *arg0);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void swap_bytes__10TObjPlayerFPv(void* p);
void * TObjPlayer__sub_801D1240(void *arg0, void *arg1);
void TObjPlayer__sub_801D1284(u8 *arg0);
void send_swapped_bytes__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
void send_swapped_packet__10TObjPlayerFPv(void* p);
void bswap_and_send__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1360(void* p);
void bswap_packet__10TObjPlayerFPv(void* p);
void * TObjPlayer__sub_801D13A8(void *arg0, void *arg1);
void TObjPlayer__sub_801D13EC(u8 *arg0);
void handle_recv_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1440(void* p);
void* handle_6x57__10TObjPlayerFPv(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
void draw_and_send__10TObjPlayerFPv(void* p);
void swap_endian_words__10TObjPlayerFPv(void* p);
u8 * TObjPlayer__sub_801D1514(u8 *arg0, u8 *arg1);
void init_position_packet__10TObjPlayerFPv(void* a0);
void update_and_send2__10TObjPlayerFPv(void* p);
void swap_and_send__10TObjPlayerFPv(void* p);
void swap_endian__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1658(void* a0);
void set_type_53__10TObjPlayerFPv(void* p);
void send_name__10TObjPlayerFPv(void* p);
void swap_stats_bytes__10TObjPlayerFPv(void* p);
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1);
void init_6x52_packet__10TObjPlayerFPv(u8 *arg0);
void update_display__10TObjPlayerFPv(void* p);
void set_revived_state__10TObjPlayerFPv(void* p);
void broadcast_lobby_display__10TObjPlayerFPv(void* p);
void bswap_fields__10TObjPlayerFPv(void* p);
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1);
void TObjPlayer__sub_801D1888(Pkt_801D1888 *p);
void init_revive_packet__10TObjPlayerFPv(void* p);
void bswap_font_lobby2__10TObjPlayerFPv(void* p);
void init_field_4__10TObjPlayerFPv(void* p);
void * init_6x4D_packet__10TObjPlayerFPv(void *arg0);
void init_and_send__10TObjPlayerFPv(void* p);
void update_and_send3__10TObjPlayerFPv(void* p);
void bswap_head_pair__10TObjPlayerFPv(void* p);
void init_6x4C_packet__10TObjPlayerFPv(void* a0);
void send_head_pair_packet__10TObjPlayerFPv(void* p);
void read_swapped_fields__10TObjPlayerFPv(void* p);
u8 * TObjPlayer__sub_801D1AC8(u8 *arg0, u8 *arg1);
void reset_action_state__10TObjPlayerFPv(void* a0);
void handle_recv_state__10TObjPlayerFPv(void* p);
void swap_endian_field__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1BB0(u8 *arg0);
void refresh_players__10TObjPlayerFPv(void* p);
void bswap_field4__10TObjPlayerFPv(void* p);
void* copy_font__10TObjPlayerFPvPv(void* p, void* a1);
void TObjPlayer__sub_801D1C70(u8 *arg0);
void sync_players__10TObjPlayerFPv(void* p);
void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void draw_font_and_send__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);
void * TObjPlayer__sub_801D1D44(void *arg0, void *arg1);
void TObjPlayer__sub_801D1D88(u8 *arg0);
void update_and_send4__10TObjPlayerFPv(void* p);
void byteswap_6x49_packet__10TObjPlayerFPv(struct Packet_801D1DDC *pkt);
void swap_endian_shorts__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D1E7C(s32 arg0, u8 *arg1);
void * init_6x49_packet__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801D1F44(void* p);
void send_photon_blast_targets_packet(u8 *arg0);
int byteswap_pb_targets_packet__10TObjPlayerFPv(void *_w0);
u8 TObjPlayer__sub_801D2004(u8 *arg0);
void bswap_coords__10TObjPlayerFPv(void* p);
void* TObjPlayer__sub_801D2058(void* p, void* a1);
void TObjPlayer__sub_801D209C(Pkt_801D209C *p);
void send_coords__10TObjPlayerFPv(void* p);
void swap_header__10TObjPlayerFPv(void* p);
void * TObjPlayer__sub_801D2134(void *arg0, void *arg1);
void TObjPlayer__sub_801D2178(u8 *arg0);
void send_swapped_header__10TObjPlayerFPv(void* p);
u8 * TObjPlayer__sub_801D21CC(u8 *arg0, u8 *arg1);
void swap_field6__10TObjPlayerFPv(void* p);
void * TObjPlayer__sub_801D2260(void *arg0, void *arg1);
void TObjPlayer__sub_801D22AC(u8 *arg0);
void send_swap_field6__10TObjPlayerFPv(void* p);
void * TObjPlayer__sub_801D2304(void *arg0, void *arg1);
void * TObjPlayer__sub_801D2348(void *arg0, void *arg1);
void bswap_field4_sub__10TObjPlayerFPv(void* p);
void* build_packet_header__10TObjPlayerFPv(void* p);
void send_6x46_attack_finished(u8 *arg0);
void TObjPlayer__sub_801D2448(void* p);
u8 TObjPlayer__sub_801D247C(s32 arg0);
void * TObjPlayer__sub_801D24B0(void *arg0, void *arg1);
void * TObjPlayer__sub_801D24F4(void *arg0, void *arg1);
u8 * TObjPlayer__sub_801D2540(u8 *arg0, u8 *arg1);
u8 * TObjPlayer__sub_801D25AC(u8 *arg0, u8 *arg1);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
f32 get_action_rate_entry(Obj_801D2640 *p);
void TObjPlayer__sub_801D2658(u8 *p, f32 value);
int TObjPlayer__sub_801D2680(void *p);
void set_action_flag__10TObjPlayerFPv(void *p);
int ret_801D26AC(void);
s32 get_field_4__10TObjPlayerFPv(void* p);
s16 TObjPlayer__sub_801D2824(void* p);
s16 TObjPlayer__sub_801D282C(void* p);
void add_death_sink_progress(u8 *arg0, f32 farg0);
f32 TObjPlayer__sub_801D2858(void* p);
void increment_run_counter__10TObjPlayerFPv(u8 *arg0);
s32 TObjPlayer__sub_801D2870(void* p);
s32 TObjPlayer__sub_801D2878(void* p);
int bswap_field_u32__10TObjPlayerFPv(void* p);
void* TObjPlayer__sub_801D28A0(void* p, void* a1);
void TObjPlayer__sub_801D28DC(void* p);
u8 * TObjPlayer__sub_801D2910(u8 *arg0, u8 *arg1);
void * TObjPlayer__sub_801D2964(void *arg0, void *arg1);
int clear_photon_blast_state__10TObjPlayerFPv(void* p);
int trigger_photon_blast__10TObjPlayerFPv(void* p);
int check_photon_blast_flag__10TObjPlayerFPv(void* p);
int check_flag_clear__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2A50(void* p);
void TObjPlayer__sub_801D2A78(void* p, f32 v);
s32 TObjPlayer__sub_801D2A80(void* p);
void TObjPlayer__sub_801D2A88(u8 *arg0);
f32 TObjPlayer__sub_801D2A98(void* p);
void set_field_0c__10TObjPlayerFPvf(void* p, f32 v);
void set_field8__10TObjPlayerFPvi(void* p, s32 v);
Ent_801D2AB0 * TObjPlayer__sub_801D2AB0(Obj_801D2AB0 *p, s32 i);
void set_field_3c__10TObjPlayerFPvf(void* p, f32 v);
int start_photon_blast_action__10TObjPlayerFPv(void* p);
f32 get_dist__10TObjPlayerFPv(void* p);
void* get_element__10TObjPlayerFPvi(void* a0, int a1);
int is_alt_photon_blast_bank_empty__10TObjPlayerFPv(void* p);
void bswap_u16_pair_list__10TObjPlayerFPv(Obj_801D2B2C *arg0);
void bswap_u16_pair__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D2BB8(s32 arg0, s32 arg1);
void bswap_entry_list__10TObjPlayerFPv(Obj_801D2C18 *arg0);
void set_technique_state__10TObjPlayerFPvi(void* p, s32 v);
void set_technique_id__10TObjPlayerFPvUc(void* p, u8 v);
int test_bit1_at_10__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D2CAC(u8 *arg0);
f32 get_float_14__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D2CC4(void* p, f32 v);
void* get_technique_data__10TObjPlayerFPv(void* p);
void set_tech_override__10TObjPlayerFPvUc(void* p, u8 v);
f32 get_attack_controller_rate(void* p);
void set_attack_target__10TObjPlayerFPvs(void* p, s16 v);
void* get_anim_field_c__10TObjPlayerFPv(void* p);
f32 TObjPlayer__sub_801D2CF4(M2C_UNK arg0, s32 arg1);
int on_attack_finished__10TObjPlayerFPv(void* p);
int set_flag_1_at_c__10TObjPlayerFPv(void* p);
void increment_strike_counter__10TObjPlayerFPv(u8 *arg0);
void set_action_type__10TObjPlayerFPvi(void* p, s32 v);
s32 get_field_1c__10TObjPlayerFPv(void* p);
void request_heavy_attack_particles__10TObjPlayerFPv(u16 *arg0);
void emit_heavy_attack_particles(s32 arg0, s32 arg1);
void clear_lockon_list__10TObjPlayerFPvPvff(s32 *arg0, void * _w1, f32 _w2, f32 _w3);
void advance_and_clamp_state__10TObjPlayerFPv(void *arg0);
s16 get_validated_attack_stage(u8 *arg0);
s32 TObjPlayer__sub_801D2EE8(s16 arg0);
s16 TObjPlayer__sub_801D2F0C(void *arg0);
s16 TObjPlayer__sub_801D2F4C(s16 *arg0);
s32 TObjPlayer__sub_801D2F8C(s16 arg0);
void queue_physical_attack_input(PlayerAttackController *self, TObjPlayer *obj, s32 arg2, s16 arg3);
s32 update_if_flag8_set__10TObjPlayerFi(s32 arg0);
s32 tick_countdown_timer__10TObjPlayerFPv(u8 *arg0);
void apply_anim_action__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
void begin_player_attack(u8 *arg0, M2C_UNK arg1, s16 arg2, s32 arg3);
s32 get_first_target_position__10TObjPlayerFPvPv(void *arg0, Vec_801D3224 *out);
void * capture_lockon_targets(Self_801D32A0 *self, Pl_801D32A0 *player);
void reset_movement_state__10TObjPlayerFPv(u8 *arg0);
s16 get_obj_id__10TObjPlayerFPv(void* p);
void set_saved_attack_stage__10TObjPlayerFPvs(void* p, s16 v);
int is_flag32_clear__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D345C(void* p);
int get_field_340__10TObjPlayerFPv(void* p, int _w1);
int check_status_flag_128__10TObjPlayerFPv(void* p);
void handle_6x54(void);
void handle_6x8C(void);
void handle_6x65(void);
void handle_6x8B(void);
void handle_6x64(void);
s16 TAdSinglePlyChrSelectGC__sub_801D5DDC(void *);
s16 get_valid_index__15TFontSmallLobbyFPv(void *);
void set_section_index__15TFontSmallLobbyFPvs(void *, s16);
void add_photon_blast_charge(s32, f32);
M2C_UNK update_if_ready__15TFontSmallLobbyFPv(s32);
M2C_UNK reset_photon_blast_gauge(void *);
int is_pb_palette_bank_empty(void*);
s32 get_getup_protection_ticks__10TObjPlayerFPv(void *);
s32 get_hurt_protection_ticks__10TObjPlayerFPv(void *);
u8 * TObjPlayer__sub_801D8DCC(void *);
M2C_UNK get_photon_blast_complete_threshold__10TObjPlayerFv(void *);
f32 get_photon_blast_upper_bound__10TObjPlayerFv(void *);
f32 get_photon_blast_hold_frame__10TObjPlayerFi(void *);
f32 get_attack_recovery_count__10TObjPlayerFi(void *);
M2C_UNK select_normal_attack_marker__10TObjPlayerFPv(void *);
s16 get_section_clamped__10TObjPlayerFPv(void *techs);
s16 get_or_init_field_4__10TObjPlayerFPv(void *techs);
void split_capped_value__10TObjPlayerFUcPvPv(u8 v, void *a, void *b);
s32 get_valid_technique__10TObjPlayerFPv(void *);
u8 get_castable_technique_level__10TObjPlayerFPv(void *techs);
u8 get_cast_technique_level(void *techs, s16 tech);
M2C_UNK set_technique_level_entry(s32, s32, u8);
s32 validate_and_clear_slot__10TObjPlayerFPv(void *techs, s16 tech);
s32 is_invalid_slot__10TObjPlayerFUc(u8);
s32 check_technique_level__10TObjPlayerFiiUc(void *, s32, u8);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
u8 * get_card_window__17TWindowSubComCardFUi(u16);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 get_player_floor__6TLobbyFi(s32);
M2C_UNK play_persistent_sound(int, void *, int, int, int);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 all_parents_unqueued_for_destruction__7TObjectFv(int);
M2C_UNK create_technique_charge_light(s16, void *);
M2C_UNK capture_technique_targets__10TObjPlayerFv(void *, void *);
void launch_technique__10TObjPlayerFv(s32, s32, void *);
Rec_801CCEDC * calc_technique_parameters(s32 tech, s32 level, s32 id);
M2C_UNK construct_actor_light_task(void *, f32 *, f32 *, int, void *, f32, s32);
M2C_UNK construct_revival_particle_effect(void *, void *, s32);
void create__12TTecReverserFPvPvPvPv(void *, void *, void *, s32);
s32 TObjPlayer__sub_8024ABDC(void *);
M2C_UNK TLobby__sub_8024AC20(int);
void dispatch_to_child__11TWindowCtrlFiPv(u16, s32);
s32 check_hit_by_id__10TObjPlayerFiii(s32, s32, s32);
M2C_UNK release_photon_blast_requests(u32);
u8 * find_by_section_id__10TObjPlayerFPvi(void *, int);
void create_party_effects__10TObjPlayerFPvi(void *, s32);
s32 find_first_valid_target_id__10TObjPlayerFPv(void*);
void TObjPlayer__sub_80312E98(void *, s32);
M2C_UNK process_all_elements__10TObjPlayerFPv(void*);
M2C_UNK append_photon_blast_request(u32, s32, s32);
M2C_UNK send_6x3e_to_all_players__10TNpcPlayerFPvs(void *, int);
s32 get_target_field_1c__10TObjPlayerFPv(void *);
f32 get_attached_float_24__10TObjPlayerFPv(void *);
s32 try_ground_action__10TObjPlayerFPvi(void *, int);
s32 check_action_usable__10TObjPlayerFPvi(void *, int);
s32 TObjPlayer__sub_80354D5C(s16);
M2C_UNK dispatch_weapon_special_effect(void *, int, int, int);
int TBoss7LaserPtcl__sub_8035AF14(void*);
int fn_8035AF18(void*);
s32 fn_8036B798(void *);
s32 fn_8036B7C0(void *);
s32 validate_6x58_lobby_animation(void *);
s32 validate_6x56_set_player_position_and_angle(void *);
s32 validate_6x55_intra_map_warp(void *);
s32 validate_6x52_set_animation_state(void *);
s32 validate_6x50_switch_interaction(const void *);
s32 validate_6x89_set_killer_entity_id(void *);
s32 validate_6x4D_player_died(void *);
s32 validate_6x4C_hit_by_enemy(void *);
s32 validate_6x4B_hit_by_enemy(void *);
s32 validate_6x49_packet__17TObjEneHoldEffectFPv(void *);
s32 validate_6x48_cast_technique_complete(void *);
s32 validate_6x8D_set_technique_level_override(void *);
s32 validate_6x46_attack_finished(void *);
s32 validate_6x45_attack(Pkt_801CDAD8 *);
s32 validate_6x44_attack(Pkt_801CDED4 *);
s32 validate_6x43_attack(Pkt_801CF128 *);
s32 validate_6x42_move_to_position(void *cmd);
s32 validate_6x40_walk_to_position(void *cmd);
s32 validate_6x3F_set_position(void *);
s32 validate_6x3E_stop_at_position(void *);
s32 validate_6x37_photon_blast(void *);
s32 validate_6x33_revive_player(void *);
void __construct_array(void *, void *, int, int, int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);

extern s32 TOMineTrap__data_805D3080;
extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC368;
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 TObjPlayer__data_805DC378;
extern const f32 TObjPlayer__data_805DC39C;
extern const f32 TObjPlayer__data_805DC3AC;
extern M2C_UNK fn_80152EF8[];
extern const f64 lbl_80447128;
extern u8 lbl_80447138[0x20];
extern const f64 lbl_80447148;
extern RecoveredGlobal_801D2CF4_lbl_804C43CC lbl_804C43CC;
extern RecoveredGlobal_801D2CF4_lbl_804C43D8 lbl_804C43D8;
extern f32 lbl_8050BEE0[];
extern f32 lbl_8050BFE0[];
extern void *lbl_8050EA10[];
extern u8 *lbl_805D3530;
extern s32 lbl_805D39B8;
extern u8 *TObjPlayer__shared_photon_blast_state;
extern const f32 lbl_805DC364;
extern const f32 lbl_805DC370;
extern const f32 lbl_805DC374;
extern const f32 lbl_805DC37C;
extern M2C_UNK lbl_805DC380;
extern M2C_UNK lbl_805DC384;
extern const f32 lbl_805DC388;
extern const f32 lbl_805DC38C;
extern const f32 lbl_805DC390;
extern const f32 lbl_805DC394;
extern const f32 lbl_805DC398;
extern const f32 lbl_805DC3A0;
extern const f32 lbl_805DC3A4;
extern const f32 lbl_805DC3A8;
extern const f32 lbl_805DC3B0;
extern const f32 lbl_805DC3B4;
extern const f32 lbl_805DC3B8;
extern const f32 lbl_805DC3BC;
extern const f32 lbl_805DC3C0;
extern const f32 lbl_805DC3C4;
extern u32 tl_03;
extern s32 tl_07;
extern s32 tl_particlemodel;

void handle_6xB0_turn_or_move_lobby_chair(void *arg0) {
    Msg_801C7430 m;
    Player_801C7430 *p;
    ((void (*)(void *))TObjPlayer__sub_801D1144)(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D1108)(&m, arg0);
    TObjPlayer__sub_801D10D4(&m);
    if (fn_8036B798(&m) != 0) {
        p = ((Player_801C7430 *)((s32 (*)(s32))get_player_by_client_id)((s32)(m.slot)));
        if ((p != NULL) && (((s32 (*)(void))is_in_tl03_state__10TObjPlayerFPv)() != 0)) {
            ((void (*)(void *, s32))update_lobby_chair__10TObjPlayerFPv)(p, m.c);
            calc_direction_vector__10TObjPlayerFiPvf(p->dir, p->vec, TObjPlayer__data_805DC360);
        }
    }
}

void handle_6xAF_turn_or_move_lobby_chair(void *arg0) {
    L_801C74BC sp8;
    ((void (*)(void *))TObjPlayer__sub_801D11D0)(&sp8);
    ((void (*)(void *, void *))TObjPlayer__sub_801D1194)(&sp8, arg0);
    swap_endian32__10TObjPlayerFPv(&sp8);
    if (fn_8036B7C0(&sp8) != 0) {
        s32 p = ((s32 (*)(s32))get_player_by_client_id)(sp8.f2);
        if (p != 0 && ((s32 (*)(void))is_in_tl03_state__10TObjPlayerFPv)() != 0) {
            ((void (*)(void *, s32))get_chair_state__10TObjPlayerFPv)((void *)p, sp8.f4);
        }
    }
}

void update_state_group__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    ((M2C_UNK (*)(void))TObjPlayer__sub_8001053C)();
    ((M2C_UNK (*)(void *))clear_state_flag__10TObjPlayerFPv)(arg0);
    ((M2C_UNK (*)(void *))TObjPlayer__sub_801D0D8C)(arg0);
    ((M2C_UNK (*)(void *))TObjPlayer__sub_801D0D7C)(arg0);
    ((M2C_UNK (*)(void *))TObjPlayer__sub_801D0D58)(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x380);
    set_field_dc__10TObjPlayerFPvi(arg0, ((VObj_801C7538 *)temp_r3)->m74());
}

void TObjPlayer__sub_801C75A4(u8 *arg0) {
    M2C_UNK sp8;
    f32 temp_f1;
    M2C_FIELD(arg0, s32 *, 0x60) = interpolate_angle__10TObjPlayerFPvUsUsPv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (void *) (((s32 (*)(void *))TObjPlayer__sub_801D0DAC)((void *) (arg0))), (void *) (&sp8));
    temp_f1 = update_scale__15TObjBoss2TunnelFPv((void *) (arg0 + 0x308)) - lbl_805DC364;
    if (temp_f1 < lbl_805DC364) {
        TObjPlayer__sub_8001053C((void *) (arg0));
    } else {
        ((s32 (*)(int, void *, f32))calc_direction_vector__10TObjPlayerFiPvf)((int) (M2C_FIELD(arg0, s32 *, 0x60)), (void *) (arg0 + 0x308), (f32) (temp_f1));
    }
    if (resolve_move_collision__10TObjPlayerFPv((void *) (arg0)) == 0U) {
        ((s32 (*)(void *))apply_velocity__10TObjPlayerFPv)((void *) (arg0));
    }
}

void start_action_18__10TObjPlayerFPv(void *arg0) {
    s16 var_r4;

    M2C_FIELD(arg0, s32 *, 0x33C) = 0x18;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (((s32 (*)(void *))is_action_flag_28__10TObjPlayerFPv)(arg0) != 0) {
        var_r4 = ((VObj8_801c7630 *) M2C_FIELD(arg0, void **, 0x380))->vf110();
    } else {
        var_r4 = ((VObj8_801c7630 *) M2C_FIELD(arg0, void **, 0x380))->vf10C();
    }
    ((M2C_UNK (*)(void *, s16))forward_1D1044_at_34c__10TObjPlayerFPv)(arg0, var_r4);
    if (((s32 (*)(void *))get_action_flag__10TObjPlayerFPv)(arg0) != 0) {
        update_facing_from_lock__10TObjPlayerFPv(arg0);
    }
    ((M2C_UNK (*)(void *))TObjPlayer__sub_801D0E18)(arg0);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    ((M2C_UNK (*)(void *, s32))get_chair_state__10TObjPlayerFPv)(arg0, M2C_FIELD(arg0, s32 *, 0x60));
    ((M2C_UNK (*)(void *))TObjPlayer__sub_801D0DF4)(arg0);
    set_action_state__10TObjPlayerFPvss(arg0, 0x18, ((s32 (*)(void *))start_action18_sub__10TObjPlayerFPv)(arg0));
}

typedef struct Msg_801C770C {
    u8 pad0[2];
    u16 id;
    u16 a;
    u16 flags;
} Msg_801C770C;
s32 validate_6xAB(void *);

void handle_6xAB(void *arg0) {
    Msg_801C770C m;
    void *p;

    TObjPlayer__sub_801D1284((u8 *)&m);
    TObjPlayer__sub_801D1240(&m, arg0);
    swap_bytes__10TObjPlayerFPv(&m);
    if (validate_6xAB(&m) != 0) {
        p = ((void * (*)(s32))get_player_by_client_id)(m.id);
        if (p != NULL && is_in_tl03_state__10TObjPlayerFPv(p) != 0) {
            if (TObjPlayer__sub_801D11F8(&m) == 0) {
                clear_state_flag__10TObjPlayerFPv(p);
            } else {
                TObjPlayer__sub_801D0E74(p);
            }
            if (TObjPlayer__sub_801D11EC(&m) != 0) {
                set_anim_flag__10TObjPlayerFPv(p);
            }
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0x18, 0);
        }
    }
}

void send_state_sync__10TObjPlayerFPv(void *arg0) {
    s32 sp8[2];
    void *temp_r3;
    s32 temp_r12;

    if (arg0 == NULL || ((s32 (*)(void))obj_isState2_324)() == 0) {
        ((M2C_UNK (*)(M2C_UNK *))TObjPlayer__sub_801D1284)(sp8);
        *(s16 *)((s8 *)sp8 + 2) = obj_getField1c(arg0);
        temp_r3 = M2C_FIELD(arg0, void **, 0x380);
        temp_r12 = ((VBase_380_801c77c8*)temp_r3)->m66();
        if ((s16) M2C_FIELD(arg0, s16 *, 0x3C0) == temp_r12) {
            ((M2C_UNK (*)(M2C_UNK *))TObjPlayer__sub_801D12E8)(sp8);
        }
        if (TKeyBoardControl__sub_801A58D8() != 0) {
            ((M2C_UNK (*)(M2C_UNK *))TObjPlayer__sub_801D12D8)(sp8);
        }
        ((M2C_UNK (*)(M2C_UNK *))send_swapped_bytes__10TObjPlayerFPv)(sp8);
    }
}

void TObjPlayer__sub_801C7858(void) {  }

void TObjPlayer__sub_801C785C(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x800) {
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
    }
}

void TObjPlayer__sub_801C7874(u8 *arg0) {
    Pkt_801C7874 a;
    Pkt_801C7874 b;
    s32 target;
    f32 amount;
    if (check_flag_100__10TObjPlayerFPv(arg0) == 0 && ((Player_801C7874 *)arg0)->f328 != 0 &&
        (check_action_usable__10TObjPlayerFPvi(arg0 + 0x550, 2) != 0 ||
         (((s32 (*)(void *))is_action_flag_28__10TObjPlayerFPv)(arg0) == 0 && TKeyBoardControl__sub_801A58B0() != 0 && is_key_down__16TKeyBoardControlFi(0x24) != 0) ||
         (((s32 (*)(void *))is_action_flag_28__10TObjPlayerFPv)(arg0) != 0 && TKeyBoardControl__sub_801A58B0() != 0 && is_key_down__16TKeyBoardControlFi(0x18) != 0))) {
        ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 5);
        return;
    }
    target = get_target_field_1c__10TObjPlayerFPv(arg0 + 0x550);
    amount = get_attached_float_24__10TObjPlayerFPv(arg0 + 0x550);
    if (((s32 (*)(void *))TObjPlayer__sub_801D10BC)(arg0 + 0x34C) == 0) {
        ((M2C_UNK (*)(void *))TObjPlayer__sub_801D109C)(arg0 + 0x34C);
        return;
    }
    if (check_flag_100__10TObjPlayerFPv(arg0) == 0 && check_action_usable__10TObjPlayerFPvi(arg0 + 0x550, 4) != 0) {
        if (arg0 == NULL || obj_isState2_324(arg0) == 0) {
            ((M2C_UNK (*)(void *))TObjPlayer__sub_801D1090)(arg0 + 0x34C);
            ((M2C_UNK (*)(void *))TObjPlayer__sub_801D1144)(&a);
            a.id = obj_getField1c(arg0);
            a.val = target;
            ((M2C_UNK (*)(void *))bswap_and_send__10TObjPlayerFPv)(&a);
        }
    } else {
        if (((s32 (*)(void *))TObjPlayer__sub_801D1078)(arg0 + 0x34C) == 0) {
            ((M2C_UNK (*)(void *))TObjPlayer__sub_801D1058)(arg0 + 0x34C);
            return;
        }
        if (amount >= TObjPlayer__data_805DC368 && (arg0 == NULL || obj_isState2_324(arg0) == 0)) {
            ((M2C_UNK (*)(void *))TObjPlayer__sub_801D104C)(arg0 + 0x34C);
            ((M2C_UNK (*)(void *))TObjPlayer__sub_801D11D0)(&b);
            b.id = obj_getField1c(arg0);
            b.val = target;
            ((M2C_UNK (*)(void *))send_swapped_packet__10TObjPlayerFPv)(&b);
        }
    }
}

int try_change_action__10TObjPlayerFPv(void* p) { return ((int (*)(void*))try_change_action__10TObjPlayerFi)(p); }

void TObjPlayer__sub_801C7A6C(s32 arg0, s16 arg1) {
  unsigned int new_var2;
  unsigned int new_var;
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))try_change_action__10TObjPlayerFPv)((void *) arg0);
        return;
      new_var2 = (new_var = arg0);
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801C7874)();
        return;
      case 3:
        ((s32 (*)(void *))TObjPlayer__sub_801C785C)((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801C7858)();
        return;
      case 5:
        ((s32 (*)(void *))send_state_sync__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))start_action_18__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void))TObjPlayer__sub_801C75A4)();
        return;
      case 6:
        ((s32 (*)(void *))update_state_group__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

s16 select_idle_action__10TObjPlayerFv(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_10;
    u8 *temp_r3_11;
    u8 *temp_r3_12;
    u8 *temp_r3_13;
    u8 *temp_r3_14;
    u8 *temp_r3_15;
    u8 *temp_r3_16;
    u8 *temp_r3_17;
    u8 *temp_r3_18;
    u8 *temp_r3_19;
    u8 *temp_r3_20;
    u8 *temp_r3_21;
    u8 *temp_r3_22;
    u8 *temp_r3_23;
    u8 *temp_r3_24;
    u8 *temp_r3_25;
    u8 *temp_r3_26;
    u8 *temp_r3_27;
    u8 *temp_r3_28;
    u8 *temp_r3_29;
    u8 *temp_r3_2;
    u8 *temp_r3_30;
    u8 *temp_r3_31;
    u8 *temp_r3_32;
    u8 *temp_r3_33;
    u8 *temp_r3_34;
    u8 *temp_r3_35;
    u8 *temp_r3_36;
    u8 *temp_r3_37;
    u8 *temp_r3_38;
    u8 *temp_r3_39;
    u8 *temp_r3_3;
    u8 *temp_r3_40;
    u8 *temp_r3_41;
    u8 *temp_r3_42;
    u8 *temp_r3_43;
    u8 *temp_r3_44;
    u8 *temp_r3_45;
    u8 *temp_r3_46;
    u8 *temp_r3_47;
    u8 *temp_r3_48;
    u8 *temp_r3_4;
    u8 *temp_r3_5;
    u8 *temp_r3_6;
    u8 *temp_r3_7;
    u8 *temp_r3_8;
    u8 *temp_r3_9;
    if ((void *) M2C_FIELD(arg0, u8 **, 0x380) == NULL) {
        return -1;
    }
    if ((get_hold_effect_count__10TObjPlayerFv() == 0) && (is_lobby_floor_15__15TFontSmallLobbyFv() != 0)) {
        if (((TKeyBoardControl__sub_801A58B0() != 0) && (is_key_down__16TKeyBoardControlFi((int) (0x24)) != 0)) || ((check_flag_100__10TObjPlayerFPv((void *) (arg0)) == 0) && (try_ground_action__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) (0x400)) != 0) && (check_action_usable__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) (4)) != 0))) {
            temp_r3_48 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
            return ((VObj_8_1cc697 *)(temp_r3_48))->m65();
        }
        if (((TKeyBoardControl__sub_801A58B0() != 0) && (is_key_down__16TKeyBoardControlFi((int) (0x18)) != 0)) || ((check_flag_100__10TObjPlayerFPv((void *) (arg0)) == 0) && (try_ground_action__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) (0x400)) != 0) && (check_action_usable__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) (2)) != 0))) {
            temp_r3_47 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
            return ((VObj_8_1cc697 *)(temp_r3_47))->m66();
        }
        if (TKeyBoardControl__sub_801A58B0() != 0) {
            if (is_key_down__16TKeyBoardControlFi((int) (0x40)) != 0) {
                temp_r3_46 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_46))->m22();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x41)) != 0) {
                temp_r3_45 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_45))->m24();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x42)) != 0) {
                temp_r3_44 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_44))->m26();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x43)) != 0) {
                temp_r3_43 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_43))->m19();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x44)) != 0) {
                temp_r3_42 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_42))->m29();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x45)) != 0) {
                temp_r3_41 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_41))->m30();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x46)) != 0) {
                temp_r3_40 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_40))->m31();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x47)) != 0) {
                temp_r3_39 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_39))->m32();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x48)) != 0) {
                temp_r3_38 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_38))->m33();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x49)) != 0) {
                temp_r3_37 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_37))->m34();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x4A)) != 0) {
                temp_r3_36 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_36))->m35();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x4B)) != 0) {
                temp_r3_35 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_35))->m36();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x1C)) != 0) {
                temp_r3_34 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_34))->m25();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x2E)) != 0) {
                temp_r3_33 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_33))->m18();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x2F)) != 0) {
                temp_r3_32 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_32))->m37();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x30)) != 0) {
                temp_r3_31 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_31))->m38();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x31)) != 0) {
                temp_r3_30 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_30))->m39();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x32)) != 0) {
                temp_r3_29 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_29))->m40();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x33)) != 0) {
                temp_r3_28 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_28))->m41();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x17)) != 0) {
                temp_r3_27 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_27))->m42();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x11)) != 0) {
                temp_r3_26 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_26))->m43();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x1E)) != 0) {
                temp_r3_25 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_25))->m44();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x1D)) != 0) {
                temp_r3_24 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_24))->m45();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x20)) != 0) {
                temp_r3_23 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_23))->m46();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x19)) != 0) {
                temp_r3_22 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_22))->m47();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x21)) != 0) {
                temp_r3_21 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_21))->m48();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x1A)) != 0) {
                temp_r3_20 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_20))->m49();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x26)) != 0) {
                temp_r3_19 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_19))->m50();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x22)) != 0) {
                temp_r3_18 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_18))->m51();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x23)) != 0) {
                temp_r3_17 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_17))->m52();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x12)) != 0) {
                temp_r3_16 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_16))->m53();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x13)) != 0) {
                temp_r3_15 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_15))->m54();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x15)) != 0) {
                temp_r3_14 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_14))->m55();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x16)) != 0) {
                temp_r3_13 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_13))->m56();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x28)) != 0) {
                temp_r3_12 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_12))->m57();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x1F)) != 0) {
                temp_r3_11 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_11))->m58();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x10)) != 0) {
                temp_r3_10 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_10))->m59();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x14)) != 0) {
                temp_r3_9 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_9))->m60();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x29)) != 0) {
                temp_r3_8 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_8))->m61();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x27)) != 0) {
                temp_r3_7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_7))->m62();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x25)) != 0) {
                temp_r3_6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_6))->m63();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x1B)) != 0) {
                temp_r3_5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_5))->m64();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x2A)) != 0) {
                temp_r3_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_4))->m67();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x2B)) != 0) {
                temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_3))->m68();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x2C)) != 0) {
                temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_2))->m69();
            }
            if (is_key_down__16TKeyBoardControlFi((int) (0x2D)) != 0) {
                temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3))->m70();
            }
            goto block_109;
        }
        goto block_109;
    }
block_109:
    return ((s32 (*)(void))ret_801D26AC)();
}

void handle_6xB1(void) {  }

void update_dispatch_v76__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    ((M2C_UNK (*)(void))TObjPlayer__sub_8001053C)();
    ((M2C_UNK (*)(void *))TObjPlayer__sub_801D0D8C)(arg0);
    ((M2C_UNK (*)(void *))TObjPlayer__sub_801D0E84)(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x380);
    set_field_dc__10TObjPlayerFPvi(arg0, ((VObj_801C841C *)temp_r3)->v76());
}

void TObjPlayer__sub_801C8478(void) {  }

void do_action__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x17;
    ((s32 (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (((s32 (*)(void *))get_action_flag__10TObjPlayerFPv)(arg0) != 0) {
        update_facing_from_lock__10TObjPlayerFPv(arg0);
    }
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ((s16 (*)(void))ret_801D26AC)();
    }
    ((s32 (*)(void *, s32, s16))set_action_state__10TObjPlayerFPvss)(arg0, 0x17, M2C_FIELD(arg0, s16 *, 0x3C0));
    if (((s32 (*)(void *))get_flag__10TObjPlayerFPv)(arg0) != 0) {
        ((s32 (*)(void *))set_action_flag_40__10TObjPlayerFPv)(arg0);
        ((s32 (*)(void *, f32))TObjPlayer__sub_801D2618)(arg0, M2C_FIELD(arg0, f32 *, 0x3C4));
    }
}

void handle_6x58_lobby_animation(void *arg0) {
    Msg_801C851C m;
    Player_801C851C *p;
    ((void (*)(void *))TObjPlayer__sub_801D13EC)(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D13A8)(&m, arg0);
    bswap_packet__10TObjPlayerFPv(&m);
    if (validate_6x58_lobby_animation(&m) != 0) {
        p = ((Player_801C851C * (*)(u16))get_player_by_client_id)(m.slot);
        if ((p != NULL) && (((s32 (*)(void))is_in_tl03_state__10TObjPlayerFPv)() != 0)) {
            p->anim = m.c;
            if (((s32 (*)(void *))TObjPlayer__sub_801D1360)(&m) != 0) {
                set_anim_flag__10TObjPlayerFPv(p);
            }
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0x17, 0);
        }
    }
}

void TObjPlayer__sub_801C85BC(u8 *arg0) {
    struct Pkt_801C85BC pkt;
    if (arg0 == NULL || ((s32 (*)(void))obj_isState2_324)() == 0) {
        ((void (*)(void *))TObjPlayer__sub_801D13EC)(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.c = *(s16 *)(arg0 + 0x3C0);
        if (TKeyBoardControl__sub_801A58D8() != 0) {
            TObjPlayer__sub_801D1440(&pkt);
        }
        handle_recv_packet__10TObjPlayerFPv(&pkt);
    }
}

void TObjPlayer__sub_801C862C(void) {  }

void update_if_flagged__10TObjPlayerFPv(void *arg0) {
    if ((((s32 (*)(void))get_flag__10TObjPlayerFPv)() == 0) && (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10)) {
        ((s32 (*)(void *))update_position_from_target__10TObjPlayerFPv)(arg0);
    }
}

void TObjPlayer__sub_801C8678(void) {  }

int try_change_action_wrapper__10TObjPlayerFPv(void* p) { return ((int (*)(void*))try_change_action__10TObjPlayerFi)(p); }

void TObjPlayer__sub_801C869C(s32 arg0, s16 arg1) {
  unsigned int new_var2;
  unsigned int new_var;
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))try_change_action_wrapper__10TObjPlayerFPv)((void *) arg0);
        return;
      new_var2 = (new_var = arg0);
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801C8678)();
        return;
      case 3:
        ((s32 (*)(void *))update_if_flagged__10TObjPlayerFPv)((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801C862C)();
        return;
      case 5:
        ((s32 (*)(void *))TObjPlayer__sub_801C85BC)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))do_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void))TObjPlayer__sub_801C8478)();
        return;
      case 6:
        ((s32 (*)(void *))update_dispatch_v76__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void init_effects__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BE9A8(p); TObjPlayer__sub_8011E204(p, (void*)5); activate_body_collision__10TObjPlayerFPv(p); set_indexed_flags(p, (void*)0, (void*)1); TObjPlayer__sub_801C5B18((char*)p + 0x608); }

int TObjPlayer__sub_801C8770(void* p) { return deactivate_body_collision__10TObjPlayerFPv(p); }

void TObjPlayer__sub_801C8790(u8 *arg0) {
    TObjPlayer__sub_801BF690((void *) (arg0 + 0x730));
    zero_vec3((void *) (arg0 + 0x5FC));
    reset_lobby_model__10TObjPlayerFPv((void *) (arg0 + 0x644));
    set_state_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (4));
    deactivate_body_collision__10TObjPlayerFPv((void *) (arg0));
    set_flag_20000__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    ((M2C_UNK (*)(void *, int, int))set_action_state__10TObjPlayerFPvss)((void *) (arg0), (int) (0x16), (int) (((s16 (*)(void))ret_801D26AC)()));
}

typedef struct Msg_801C8808 {
    u8 pad0[2];
    u16 id;
    u8 pad4[4];
} Msg_801C8808;
s32 validate_6x57(void *);

void handle_6x57(void *arg0) {
    Msg_801C8808 m;
    u8 *p;

    set_cmd_87__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))handle_6x57__10TObjPlayerFPv)(&m, arg0);
    TFontSmallLobby__sub_801C01BC(&m);
    if (validate_6x57(&m) != 0) {
        p = get_player_by_client_id(m.id);
        if (p != NULL) {
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0x16, 0);
        }
    }
}

void draw_and_send_field1c__10TObjPlayerFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (((s32 (*)(void))obj_isState2_324)() == 0)) {
        ((M2C_UNK (*)(M2C_UNK *))set_cmd_87__10TObjPlayerFPv)((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        ((M2C_UNK (*)(M2C_UNK *))draw_and_send__10TObjPlayerFPv)((M2C_UNK *)&sp8);
    }
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void TObjPlayer__sub_801C88CC(u8 *arg0) {
  f32 var_f31;
  s16 temp_r0;
  s16 *new_var;
  if (is_on_current_floor__10TObjPlayerFi() != 0)
  {
    ((M2C_UNK (*)(int, int))TObjPlayer__sub_8011E204)((int)((void *) arg0), (int)((int) 4));
    ((M2C_UNK (*)(void *))update_active_state__10TObjPlayerFPv)((void *) arg0);
    set_flag_400000__10TObjPlayerFi((void *) arg0);
    enter_battle_state__10TObjPlayerFPv((void *) (arg0 + 0x634));
    return;
  }
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x328));
  switch (temp_r0)
  {
    case 0:
      var_f31 = *((f32 *) (((s8 *) arg0) + 0x624));
      var_f31 = var_f31 - (*(f32 *)&TObjPlayer__data_805DC368);
      if (var_f31 < (*(f32 *)&TObjPlayer__data_805DC36C))
    {
      var_f31 = (*(f32 *)&TObjPlayer__data_805DC36C);
      new_var = (s16 *) (((s8 *) arg0) + 0x328);
      *new_var = 1;
      ((M2C_UNK (*)(void *, int))obj_setFlags30)((void *) arg0, (int) 0x02000000);
      ((M2C_UNK (*)(void *, int, int))clear_player_status_flag__10TObjPlayerFPviUi)((void *) arg0, (int) 0, (int) 1);
    }
      *((f32 *) (((s8 *) arg0) + 0x624)) = var_f31;
    case 1:
      return;
  }
}
extern int fold_flush_0;
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void TObjPlayer__sub_801C8998(u8 *arg0) {
  f32 var_f0;
  f32 var_f1;
  f32 var_f2;
  s16 temp_r0;
  s32 var_r4;
  u8 *var_r31;
  u8 *var_r3;
  var_r31 = (u8 *) arg0;
  if (((s32) is_on_current_floor__10TObjPlayerFi()) != 0)
  {
    var_r3 = (u8 *) var_r31;
    var_r4 = 4;
    ((M2C_UNK (*)(int, int))TObjPlayer__sub_8011E204)((int) var_r3, (int) 4);
    return;
  }
  temp_r0 = *((s16 *) (((s8 *) var_r31) + 0x328));
  switch (temp_r0)
  {
    case 0:
      var_f2 = *((f32 *) (((s8 *) var_r31) + 0x624));
      var_f1 = TObjPlayer__data_805DC368;
      var_f0 = TObjPlayer__data_805DC36C;
      if (((!var_f0) && (!var_f0)) && (!var_f0))
    {
    }
      var_f2 -= var_f1;
      if (var_f2 < var_f0)
    {
      var_f2 = var_f0;
      *((s16 *) (((s8 *) var_r31) + 0x328)) = 1;
    }
      *((f32 *) (((s8 *) var_r31) + 0x624)) = var_f2;
    case 1:
      return;
  }
}
extern int fold_flush_1;
#pragma pop

void TObjPlayer__sub_801C8A20(void) {  }

void TObjPlayer__sub_801C8A24(void) {  }

void TObjPlayer__sub_801C8A28(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void))TObjPlayer__sub_801C8A24)();
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801C8A20)();
        return;
      case 3:
        ((s32 (*)(void *))TObjPlayer__sub_801C8998)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void *))TObjPlayer__sub_801C88CC)((void *) arg0);
        return;
      case 5:
        ((s32 (*)(void *))draw_and_send_field1c__10TObjPlayerFi)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))TObjPlayer__sub_801C8790)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))TObjPlayer__sub_801C8770)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))init_effects__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
void start_action_21__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x15;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    ((M2C_UNK (*)(void *))cleanup_idle_entry__10TObjPlayerFPv)(arg0);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    M2C_FIELD(arg0, f32 *, 0x624) = (f32) TObjPlayer__data_805DC36C;
    refresh_equipment_slot__10TObjPlayerFv(arg0);
    ((V_A *) arg0)->m15();
    if (is_locally_controlled__10TObjPlayerFPv(arg0) != 0) {
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x40003206);
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 1;
    set_action_state__10TObjPlayerFPvss(arg0, 0x15, ((s32 (*)(void *))get_idle_animation__10TObjPlayerFPv)(arg0));
}

#undef CAT2
#undef CAT
void handle_6x56_set_player_position_and_angle(void *arg0) {
    Msg_801C8B5C m;
    Player_801C8B5C *p;
    init_position_packet__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D1514)(&m, arg0);
    swap_endian_words__10TObjPlayerFPv(&m);
    if (validate_6x56_set_player_position_and_angle(&m) != 0) {
        p = ((Player_801C8B5C *)((u8 * (*)(s32))get_player_by_client_id)((s32)(m.slot)));
        if (p != NULL) {
            p->ang = m.c;
            set_position_from__14TBoss4DarkFalzFPvPv(p, m.vec);
            calc_attach_pos__10TObjPlayerFPv(p);
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0x15, 0);
        }
    }
}

void send_position_update__10TObjPlayerFPv(u8 *arg0) {
    struct Pkt_801C8BE8 pkt;
    if (arg0 == NULL || ((s32 (*)(void))obj_isState2_324)() == 0) {
        init_position_packet__10TObjPlayerFPv(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.c = *(s32 *)(arg0 + 0x60);
        VecCopy__FP3VecPC3Vec(&pkt.x1, arg0 + 0x38);
        update_and_send2__10TObjPlayerFPv(&pkt);
    }
}

void TObjPlayer__sub_801C8C50(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void))TObjPlayer__sub_801C912C)();
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801C9128)();
        return;
      case 3:
        ((s32 (*)(void *))check_state_dead__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801C90F8)();
        return;
      case 5:
        send_position_update__10TObjPlayerFPv((u8 *)((void *) arg0));
        return;
      case 0:
        ((s32 (*)(void *))start_action_21__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))update_warp_relocation__10TObjPlayerFv)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))init_flags_vec4__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void send_6x55_intra_map_warp(u16 id, void *pos, s32 c) {
    struct Pkt_801C8CCC pkt;
    u8 *p;
    p = ((u8 * (*)(s32))get_player_by_client_id)(id);
    if (p != NULL && (p == NULL || ((s32 (*)(void))obj_isState2_324)() == 0)) {
        TObjPlayer__sub_801D1658(&pkt);
        pkt.id = id;
        pkt.c = c;
        VecCopy__FP3VecPC3Vec(&pkt.x1, p + 0x38);
        VecCopy__FP3VecPC3Vec(&pkt.x2, pos);
        swap_and_send__10TObjPlayerFPv(&pkt);
    }
}

void init_flags_vec4__10TObjPlayerFPv(void* p) { set_indexed_flags(p, (void*)0, (void*)1); set_vec4_const__10TObjPlayerFPv((char*)p + 0x608); }

void update_warp_relocation__10TObjPlayerFv(u8 *arg0) {
    M2C_UNK sp8;
    f32 var_f2;
    f32 var_f31;
    s32 temp;

    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0:
        var_f31 = M2C_FIELD(arg0, f32 *, 0x624);
        var_f31 -= 0.1f;
        if (var_f31 < 0.0f) {
            var_f31 = 0.0f;
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(arg0, s32 *, 0x65C);
            ((M2C_UNK (*)(void *, void *))set_position_from__14TBoss4DarkFalzFPvPv)(arg0, arg0 + 0x660);
            refresh_equipment_slot__10TObjPlayerFv(arg0);
            clear_flag_4000__10TObjPlayerFPv(arg0);
            ((VObj_18_d7a0b2 *)(arg0))->m15();
            if (((s32 (*)(void *))is_on_current_floor__10TObjPlayerFi)(arg0) != 0) {
                ((M2C_UNK (*)(void *, int))send_field_state_if_active__10TObjPlayerFii)(arg0, 0x40003206);
            }
            if (is_locally_controlled__10TObjPlayerFPv(arg0) != 0) {
                calc_circle_offset_pos__10TObjPlayerFiPvPvf(M2C_FIELD(arg0, s32 *, 0x60) + 0x8000, (void *)((s32 (*)(void *))get_position_ptr__10TObjPlayerFPv)(arg0), &sp8, 10.0f);
                send_6x3e_to_all_players__10TNpcPlayerFPvs(&sp8, M2C_FIELD(arg0, s32 *, 0x60));
                reset_cameras_to_actor(arg0, 1);
            }
        }
        M2C_FIELD(arg0, f32 *, 0x624) = var_f31;
        break;
    case 1:
        if (((s32 (*)(void *))is_inactive__10TObjPlayerFPv)(arg0) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s32 *, 0x658) = 4;
        }
        break;
    case 4:
        break;
    case 2:
        temp = M2C_FIELD(arg0, s32 *, 0x658) - 1;
        M2C_FIELD(arg0, s32 *, 0x658) = temp;
        if (temp <= 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            ((M2C_UNK (*)(void *))activate_body_collision__10TObjPlayerFPv)(arg0);
            if (((s32 (*)(void *))is_on_current_floor__10TObjPlayerFi)(arg0) != 0) {
                ((M2C_UNK (*)(void *))obj_getField1c)(arg0);
                spawn_appearance_effect__10TObjPlayerFi();
            }
        }
        break;
    case 3:
        set_flag_4000__10TObjPlayerFPv(arg0);
        var_f2 = M2C_FIELD(arg0, f32 *, 0x624);
        var_f2 += 0.1f;
        if (var_f2 >= 1.0f) {
            var_f2 = 1.0f;
            M2C_FIELD(arg0, s16 *, 0x328) = 4;
        }
        M2C_FIELD(arg0, f32 *, 0x624) = var_f2;
        break;
    }
}

void set_dead_state__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x14;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_8001053C(arg0);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x40003205);
    set_action_state__10TObjPlayerFPvss(arg0, 0x14, ((s32 (*)(void *))get_idle_animation__10TObjPlayerFPv)(arg0));
}

void handle_6x55_intra_map_warp(s32 arg0) {
    Cmd_801C8FCC cmd;
    u8 *p;
    TObjPlayer__sub_801D1658(&cmd);
    ((void (*)(void *, void *))TObjPlayer__sub_801D0EA0)(&cmd, (void *)arg0);
    swap_endian__10TObjPlayerFPv(&cmd);
    if (validate_6x55_intra_map_warp(&cmd) != 0) {
        p = get_player_by_client_id(cmd.client);
        if (p != NULL && is_in_tl03_state__10TObjPlayerFPv(p) != 0 && test_action_mask__10TObjPlayerFPvi(p, 0x8200) == 0) {
            *(s32 *)(p + 0x65C) = cmd.area;
            set_position_from__14TBoss4DarkFalzFPvPv(p, &cmd.a);
            VecCopy__FP3VecPC3Vec(p + 0x660, &cmd.pos);
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0x14, 0);
        }
    }
}

void send_warp_position__10TObjPlayerFPv(u8 *arg0) {
    struct Pkt_801C9084 pkt;
    if (arg0 == NULL || ((s32 (*)(void))obj_isState2_324)() == 0) {
        TObjPlayer__sub_801D1658(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.c = *(s32 *)(arg0 + 0x60);
        VecCopy__FP3VecPC3Vec(&pkt.x1, arg0 + 0x38);
        VecCopy__FP3VecPC3Vec(&pkt.x2, arg0 + 0x38);
        swap_and_send__10TObjPlayerFPv(&pkt);
    }
}

void TObjPlayer__sub_801C90F8(void) {  }

void check_state_dead__10TObjPlayerFPv(void* p) { if (*(short*)((char*)p + 0x328) == 4) { ((int (*)(void*))update_position_from_target__10TObjPlayerFPv)(p); } }

void TObjPlayer__sub_801C9128(void) {  }

void TObjPlayer__sub_801C912C(void) {  }

void run_warp_action_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  s32 new_var;
  {
    new_var = arg0;
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void))TObjPlayer__sub_801C912C)();
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801C9128)();
        return;
      case 3:
        ((s32 (*)(void *))check_state_dead__10TObjPlayerFPv)((void *) new_var);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801C90F8)();
        return;
      case 5:
        ((s32 (*)(void *))send_warp_position__10TObjPlayerFPv)((void *) new_var);
        return;
      case 0:
        ((s32 (*)(void *))set_dead_state__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))update_warp_relocation__10TObjPlayerFv)((void *) new_var);
        return;
      case 6:
        ((s32 (*)(void *))init_flags_vec4__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void reset_lobby_state__10TObjPlayerFPv(u8 *arg0) {
    ((M2C_UNK (*)(void))clear_status_bit6__10TObjPlayerFPv)();
    TObjPlayer__sub_8001053C(arg0);
    obj_clearFlags30(arg0, 0x20);
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 1) && (is_locally_controlled__10TObjPlayerFPv(arg0) != 0)) {
        reset_lobby_model__10TObjPlayerFPv(arg0 + 0x644);
    }
}

void try_use_mag__10TObjPlayerFPv(u8 *arg0) {
    if ((is_active__8TItemMagFPv() == 0) && (is_locally_controlled__10TObjPlayerFPv(arg0) != 0) && (check_input_angle__16TKeyBoardControlFPv(arg0 + 0x64C) != 0)) {
        add_status_effect_timer__10TObjPlayerFPvii(arg0, 1, M2C_FIELD(arg0, s32 *, 0x3D4));
    }
}

void enter_freeze_action__10TObjPlayerFv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x13;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_8001053C(arg0);
    obj_clearFlags30(arg0, 0x200);
    ((M2C_UNK (*)(void *))set_action_flag_40__10TObjPlayerFPv)(arg0);
    if (((s32 (*)(void *))is_active__8TItemMagFPv)(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
    } else {
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) -(lbl_80447128 * (f64) TObjPlayer__sub_8001943C(arg0, 1));
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0x13, (s16) ((s16 (*)(void))ret_801D26AC)());
}

typedef struct Msg_801C9350 {
    u8 pad0[2];
    u16 id;
    u8 pad4[4];
} Msg_801C9350;
s32 validate_6x53(void *);
void* update_small_font2__10TObjPlayerFPv(void* p);

void handle_6x53(void *arg0) {
    Msg_801C9350 m;
    u8 *p;

    set_type_53__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))update_small_font2__10TObjPlayerFPv)(&m, arg0);
    TFontSmallLobby__sub_801C01BC(&m);
    if (validate_6x53(&m) != 0) {
        p = get_player_by_client_id(m.id);
        if (p != NULL && is_in_tl03_state__10TObjPlayerFPv(p) != 0) {
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0x13, 0);
        }
    }
}

void* update_small_font2__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }

void send_name_and_state__10TObjPlayerFPv(u8 *arg0) {
    MsgA_801C9400 a;
    MsgB_801C9400 b;
    if (is_active__8TItemMagFPv() == 0) {
        init_stick_escape_detector(arg0 + 0x64C, TObjPlayer__sub_801D2878(arg0 + 0x550));
    }
    if ((arg0 == NULL) || (obj_isState2_324(arg0) == 0)) {
        set_type_53__10TObjPlayerFPv(&a);
        a.f2 = ((s16)((s32 (*)(void *))obj_getField1c)(arg0));
        send_name__10TObjPlayerFPv(&a);
        init_6x2F_packet_header__10TObjPlayerFPv(&b);
        b.f2 = ((s16)((s32 (*)(void *))obj_getField1c)(arg0));
        b.f4 = 0;
        b.f8 = ((s16)obj_getS16_32C(arg0));
        b.fa = ((s16)((s32 (*)(void *))obj_getField1c)(arg0));
        TObjPlayer__sub_801C0734(&b);
    }
}

void TObjPlayer__sub_801C94B8(u8 *arg0) {
    switch (*(s16 *)(arg0 + 0x328)) {
    case 1:
        if (is_active__8TItemMagFPv() == 0) {
            ((void (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 0);
        }
        break;
    }
}

void update_gated_action__10TObjPlayerFPv(void *arg0) {
    s32 temp_r31;

    if (M2C_FIELD(arg0, s16 *, 0x328) == 0) {
        if (is_status_flag_200__10TObjPlayerFPv() != 0) {
            temp_r31 = ((s32 (*)(void *))obj_getField1c)(arg0);
            send_6x2F_change_player_hp(temp_r31, temp_r31, obj_getS16_32C(arg0));
            obj_clearFlags30(arg0, 0x200);
            return;
        }
        if (((s32 (*)(void *))can_guard__10TObjPlayerFPv)(arg0) != 0) {
            use_current_item__10TObjPlayerFPv(arg0);
        }
    }
}

void TObjPlayer__sub_801C959C(void) {  }

void update_frozen_release__10TObjPlayerFPv(u8 *arg0) {
  s16 temp_r0;
  if (((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x800) != 0)
  {
    ((void (*)(void *, s32))clear_flags__11TAdRicoRingFPvUi)(arg0 + 0x858, 1);
    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *) arg0, (int) 0xF, (int) 5);
    return;
  }
  ;
  switch (*((s16 *) (((s8 *) arg0) + 0x328)))
  {
    return;
    case 0:
      if (((s32 (*)(s32))check_flag30_bit20__10TObjPlayerFi)((s32) arg0) == 0)
    {
      update_position_from_target__10TObjPlayerFPv(arg0);
    }
      return;
    case 1:
      if (((s32 (*)(void *))is_active__8TItemMagFPv)(arg0) == 0)
    {
      update_position_from_target__10TObjPlayerFPv(arg0);
    }
      break;
  }
}

void TObjPlayer__sub_801C9648(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))update_frozen_release__10TObjPlayerFPv)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801C959C)();
        return;
      case 3:
        ((s32 (*)(void *))update_gated_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void *))TObjPlayer__sub_801C94B8)((void *) arg0);
        return;
      case 5:
        ((s32 (*)(void *))send_name_and_state__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))enter_freeze_action__10TObjPlayerFv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))try_use_mag__10TObjPlayerFPv)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))reset_lobby_state__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

s32 try_change_action__10TObjPlayerFi(s32 arg0) {
    if (is_status_locked__10TObjPlayerFPv() != 0) {
        if (get_action_id__10TObjPlayerFPv(arg0 + 0x5F0) == 0x10) {
            ((M2C_UNK (*)(s32, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 0x10, 5);
        } else {
            ((int (*)(void*, void*))obj_clearFlags30)((void*)(arg0), (void*)(0x10000));
            ((M2C_UNK (*)(s32, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, get_action_id__10TObjPlayerFPv(arg0 + 0x5F0), 5);
            set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
        }
        return 1;
    }
    return 0;
}

void clear_flag__10TObjPlayerFPv(void* p) { ((int (*)(void*, void*))obj_clearFlags30)((void*)(p), (void*)((void*)65536)); ((int (*)(void*))TObjPlayer__sub_8001053C)(p); }

void apply_velocity_if_free__10TObjPlayerFPv(void *arg0) {
    void *x;
    x = ((void * (*)(void *))resolve_move_collision__10TObjPlayerFPv)(arg0);
    if (x == NULL) {
        ((void (*)(void *))apply_velocity__10TObjPlayerFPv)(arg0);
    }
}

void enter_service_hold_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x10;
    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *)(arg0), (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    M2C_FIELD(arg0, s16 *, 0xB8) = TObjPlayer__sub_801D2824((void *) (arg0 + 0x5F0));
    M2C_FIELD(arg0, s32 *, 0x60) = get_field_4__10TObjPlayerFPv((void *) (arg0 + 0x5F0));
    ((M2C_UNK (*)(void *, int, int))set_action_state__10TObjPlayerFPvss)((void *) (arg0), (int) (0x10), (int) (((s16 (*)(void))ret_801D26AC)()));
}

void handle_6x52_set_animation_state(s32 arg0) {
    Pkt_801C9838 pkt;
    s32 temp_r3;
    ((M2C_UNK (*)(void *))init_6x52_packet__10TObjPlayerFPv)((void *) (&pkt));
    ((M2C_UNK (*)(void *, void *))copy_font_state__10TObjPlayerFPvPv)((void *) (&pkt), (void *) (arg0));
    ((M2C_UNK (*)(void *))swap_stats_bytes__10TObjPlayerFPv)((void *) (&pkt));
    if (validate_6x52_set_animation_state((void *) (&pkt)) != 0) {
        temp_r3 = ((s32 (*)(int))get_player_by_client_id)((int) (pkt.client));
        if ((temp_r3 != 0) && (((s32 (*)(void))is_in_tl03_state__10TObjPlayerFPv)() != 0) && (((s32 (*)(int, int))test_action_mask__10TObjPlayerFPvi)((int) (temp_r3), (int) (0x8000)) == 0) && ((is_lobby_floor_15__15TFontSmallLobbyFv() == 0) || (((s32 (*)(int))obj_isState2_324)((int) (temp_r3)) == 0) || (check_flag__10TObjPlayerFPvi((int) (temp_r3), (int) (0x04000000)) == 0))) {
            set_anim_state__10TObjPlayerFPvs((void *) (temp_r3 + 0x5F0), (int) (pkt.c));
            set_anim_state__10TObjPlayerFPvi((void *) (temp_r3 + 0x5F0), (int) (pkt.g));
            set_state__10TObjPlayerFPvs((void *) (temp_r3 + 0x5F0), (int) (pkt.e));
            ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *) (temp_r3), (int) (0x10), (int) (0));
        }
    }
}

void send_6x52_animation_state__10TObjPlayerFPv(u8 *arg0) {
    struct Pkt_801C9924 pkt;
    if (arg0 == NULL || ((s32 (*)(void))obj_isState2_324)() == 0) {
        ((void (*)(void *))init_6x52_packet__10TObjPlayerFPv)(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.a = TObjPlayer__sub_801D2824(arg0 + 0x5F0);
        pkt.c = get_field_4__10TObjPlayerFPv(arg0 + 0x5F0);
        pkt.b = TObjPlayer__sub_801D282C(arg0 + 0x5F0);
        update_display__10TObjPlayerFPv(&pkt);
    }
}

void service_hold_phase8_nop__10TObjPlayerFv(void) {  }

void update_service_hold__10TObjPlayerFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x10000)) {
        if (((s16 (*)(void *))get_action_id__10TObjPlayerFPv)((void *) (arg0 + 0x5F0)) == 0) {
            ((M2C_UNK (*)(void *))update_position_from_target__10TObjPlayerFPv)((void *) (arg0));
            return;
        }
        ((M2C_UNK (*)(void *, s16, int))run_action_state_phase__10TObjPlayerFisi)((void *) (arg0), ((s16 (*)(void *))get_action_id__10TObjPlayerFPv)((void *) (arg0 + 0x5F0)), (int) (5));
        ((M2C_UNK (*)(void *, int))set_action_id__10TObjPlayerFPvs)((void *) (arg0 + 0x5F0), (int) (0));
    }
}

void service_hold_phase2_nop__10TObjPlayerFv(void) {  }

void set_motion__10TObjPlayerFi(s32 arg0) {
    if (is_status_flag_200__10TObjPlayerFPv() != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            ((s32 (*)(s32, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xE, 5);
            return;
        }
        ((s32 (*)(s32, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xD, 5);
        return;
    }
    if (((s32 (*)(s32))can_guard__10TObjPlayerFPv)(arg0) != 0) {
        ((s32 (*)(s32, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xA, 5);
        return;
    }
    if (((s32 (*)(s32))check_flag30_bit20__10TObjPlayerFi)(arg0) != 0) {
        ((s32 (*)(s32, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, 0x13, 5);
    }
}

void run_service_hold_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  unsigned int new_var2;
  unsigned int new_var;
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))set_motion__10TObjPlayerFi)((void *) arg0);
        return;
      new_var2 = (new_var = arg0);
      case 2:
        ((s32 (*)(void))service_hold_phase2_nop__10TObjPlayerFv)();
        return;
      case 3:
        ((s32 (*)(void *))update_service_hold__10TObjPlayerFPv)((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        ((s32 (*)(void))service_hold_phase8_nop__10TObjPlayerFv)();
        return;
      case 5:
        ((s32 (*)(void *))send_6x52_animation_state__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))enter_service_hold_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void))apply_velocity_if_free__10TObjPlayerFPv)();
        return;
      case 6:
        ((s32 (*)(void *))clear_flag__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void notify_lobby__10TObjPlayerFi(s32 arg0) {
    ((M2C_UNK (*)(void))clear_status_bit6__10TObjPlayerFPv)();
    TLobby__sub_8024AC20(((u16 (*)(s32))obj_getField1c)(arg0));
}

void ensure_default__10TObjPlayerFPv(void *arg0) {
    void *x;
    x = ((void * (*)(void *))resolve_move_collision__10TObjPlayerFPv)(arg0);
    if (x == NULL) {
        ((void (*)(void *))apply_velocity__10TObjPlayerFPv)(arg0);
    }
}

void init_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x12;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_8001053C(arg0);
    set_type__10TObjPlayerFPvi(arg0 + 0x644, 0x12C);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) lbl_805DC374;
    TObjPlayer__sub_8000FF4C(arg0, 0xFFFF);
    ((M2C_UNK (*)(void *, M2C_UNK, s16))set_action_state__10TObjPlayerFPvss)(arg0, 0x12, (s16) ((s32 (*)(void))ret_801D26AC)());
    fn_800660B8(arg0);
    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        void *new_obj = (void *)(size_t)__nw__7TObjectFUl(0x38);
        if (new_obj != 0U) {
            construct_revival_particle_effect(new_obj, arg0, tl_07);
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x548) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x548));
        M2C_FIELD(arg0, u32 *, 0x548) = 0U;
    }
}

typedef struct Msg_801C9C8C {
    u8 pad0[2];
    u16 id;
    u8 pad4[4];
} Msg_801C9C8C;
s32 validate_6x4F_player_revived(void *);

void handle_6x4F_player_revived(void *arg0) {
    Msg_801C9C8C m;
    u8 *p;

    set_revived_state__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))handle_6x4F_revived__10TObjPlayerFi)(&m, arg0);
    TFontSmallLobby__sub_801C01BC(&m);
    if (validate_6x4F_player_revived(&m) != 0) {
        p = get_player_by_client_id(m.id);
        if (p != NULL && is_in_tl03_state__10TObjPlayerFPv(p) != 0) {
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0x12, 0);
        }
    }
}

s32 handle_6x4F_revived__10TObjPlayerFi(s32 arg0) {
    ((M2C_UNK (*)(void))TFontSmallLobby__sub_801C0228)();
    return arg0;
}

void update_lobby_display__10TObjPlayerFUi(u32 arg0) {
    struct Local801C9D3C sp8;

    if (((s32 (*)(s32, M2C_UNK))test_flags_any)(arg0 + 0x858, 4) != 0) {
        send_code_49_1__10TObjPlayerFi(arg0);
        if (is_alive_and_ready__10TObjPlayerFi(arg0) != 0) {
            refill_traps__10TObjPlayerFPv(arg0);
        }
    } else {
        TObjPlayer__sub_801B4430(arg0);
    }
    update_if_ready__15TFontSmallLobbyFPv(arg0 + 0x4AC);
    if ((arg0 == 0U) || (((s32 (*)(u32))obj_isState2_324)(arg0) == 0)) {
        ((M2C_UNK (*)(M2C_UNK *))set_revived_state__10TObjPlayerFPv)((M2C_UNK *)&sp8);
        sp8.fieldA = ((s16 (*)(u32))obj_getField1c)(arg0);
        ((M2C_UNK (*)(M2C_UNK *))broadcast_lobby_display__10TObjPlayerFPv)((M2C_UNK *)&sp8);
    }
}

void update_timer_state__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            init__14TObjEnePanarmsFPvPv(arg0, ((s32 (*)(void))get_idle_animation__10TObjPlayerFPv)());
            ((M2C_UNK (*)(void *))set_action_flag_40__10TObjPlayerFPv)(arg0);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) TObjPlayer__data_805DC378;
        }
        break;
    case 1:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1_2;
        if (temp_f1_2 < TObjPlayer__data_805DC36C) {
            ((M2C_UNK (*)(void))clear_status_bit6__10TObjPlayerFPv)();
            ((M2C_UNK (*)(void *, M2C_UNK, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 0);
        }
        break;
    }
}

void update_timer_action__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            init__14TObjEnePanarmsFPvPv(arg0, ((s32 (*)(void))get_idle_animation__10TObjPlayerFPv)());
            ((M2C_UNK (*)(void *))set_action_flag_40__10TObjPlayerFPv)(arg0);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) TObjPlayer__data_805DC378;
        }
        break;
    case 1:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1_2;
        if (temp_f1_2 < TObjPlayer__data_805DC36C) {
            ((M2C_UNK (*)(void))clear_status_bit6__10TObjPlayerFPv)();
            set_type__10TObjPlayerFPvi(arg0 + 0x644, get_getup_protection_ticks__10TObjPlayerFPv(arg0));
            ((M2C_UNK (*)(void *))update_position_from_target__10TObjPlayerFPv)(arg0);
        }
        break;
    }
}

void TObjPlayer__sub_801C9F64(void) {  }

void TObjPlayer__sub_801C9F68(void) {  }

void TObjPlayer__sub_801C9F6C(s32 arg0, s16 arg1) {
  unsigned int new_var2;
  unsigned int new_var;
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))TObjPlayer__sub_801C9F68)((void *) arg0);
        return;
      new_var2 = (new_var = arg0);
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801C9F64)();
        return;
      case 3:
        ((s32 (*)(void *))update_timer_action__10TObjPlayerFPv)((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        ((s32 (*)(void))update_timer_state__10TObjPlayerFPv)();
        return;
      case 5:
        ((s32 (*)(void *))update_lobby_display__10TObjPlayerFUi)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))init_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void))ensure_default__10TObjPlayerFPv)();
        return;
      case 6:
        ((s32 (*)(void *))notify_lobby__10TObjPlayerFi)((void *) arg0);
        break;
    }
  }
}

void handle_6x89_set_killer_entity_id(void *arg0) {
    struct Pkt_801C9FE8 pkt;
    u8 *p;
    ((void (*)(void *))TObjPlayer__sub_801D1888)(&pkt);
    ((void (*)(void *, void *))copy_head_fields__10TObjPlayerFPvPv)(&pkt, arg0);
    bswap_fields__10TObjPlayerFPv(&pkt);
    if (validate_6x89_set_killer_entity_id(&pkt) != 0) {
        p = get_player_by_client_id(pkt.id);
        if (p != NULL) {
            *(u16 *)(p + 0x2D4) = pkt.c;
        }
    }
}

void init_subobject__10TObjPlayerFi(s32 arg0) {
    if (arg0 != 0) {
        ((M2C_UNK (*)(s32, M2C_UNK, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xF, 0);
        ((M2C_UNK (*)(s32))update_action_render__10TObjPlayerFPv)(arg0);
        ((M2C_UNK (*)(s32))zero_vec3)(arg0 + 0x5FC);
        calc_death_pose_height_offset(arg0 + 0x5FC, arg0);
        set_pos_z__10TObjPlayerFPvf(arg0 + 0x5FC, (*(f32 *)&TObjPlayer__data_805DC360));
    }
}

void queue_player_injured_pose(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x24);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801BF414(temp_r3, arg0, ((s32 (*)(s32))obj_getField1c)(arg0), (void (*)(int))init_subobject__10TObjPlayerFi);
    }
}

void update_active_state__10TObjPlayerFPv(u8 *arg0) {
    if (is_on_current_floor__10TObjPlayerFi() != 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TObjPlayer__sub_8011E204)(arg0, 4);
        if (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x800) == 0) {
            ((M2C_UNK (*)(void *, M2C_UNK, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 0);
            return;
        }
        ((M2C_UNK (*)(void *, M2C_UNK, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xF, 0);
        if (((s32 (*)(void *, M2C_UNK))test_flags_any)(arg0 + 0x858, 1) != 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = get_action_animation__10TObjPlayerFPv(arg0);
        } else {
            ((M2C_UNK (*)(void *))restart_death_pose__10TObjPlayerFPv)(arg0);
        }
        ((M2C_UNK (*)(void *, f32))set_pos_z__10TObjPlayerFPvf)(arg0 + 0x5FC, TObjPlayer__data_805DC360);
        revive_or_spawn_marker__10TObjPlayerFi(arg0);
    }
}

typedef struct Msg_801CA1C4 {
    u8 pad0[2];
    u16 id;
    u8 pad4[4];
} Msg_801CA1C4;
s32 validate_6x4E_player_revivable(void *);

void handle_6x4E_player_revivable(void *arg0) {
    Msg_801CA1C4 m;
    u8 *p;

    init_revive_packet__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))handle_revivable__10TObjPlayerFi)(&m, arg0);
    TFontSmallLobby__sub_801C01BC(&m);
    if (validate_6x4E_player_revivable(&m) != 0) {
        p = get_player_by_client_id(m.id);
        if (p != NULL && is_in_tl03_state__10TObjPlayerFPv(p) != 0) {
            update_action_render__10TObjPlayerFPv(p);
            revive_or_spawn_marker__10TObjPlayerFi(p);
        }
    }
}

s32 handle_revivable__10TObjPlayerFi(s32 arg0) {
    ((M2C_UNK (*)(void))TFontSmallLobby__sub_801C0228)();
    return arg0;
}

void update_lobby_font__10TObjPlayerFi(s32 arg0) {
    struct S801CA274 sp8;

    if ((arg0 == 0) || (((s32 (*)(void))obj_isState2_324)() == 0)) {
        ((M2C_UNK (*)(void *))init_revive_packet__10TObjPlayerFPv)(&sp8);
        sp8.h = ((s16 (*)(s32))obj_getField1c)(arg0);
        ((M2C_UNK (*)(void *))bswap_font_lobby2__10TObjPlayerFPv)(&sp8);
    }
}

void update_action_render__10TObjPlayerFPv(u8 *arg0) {
    if (test_flags_any((void *) (arg0 + 0x858), (int) (1)) != 0) {
        M2C_FIELD(arg0, s16 *, 0xB8) = get_action_animation__10TObjPlayerFPv((void *) (arg0));
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = ((s16 (*)(void *))get_model_field_m25__10TObjPlayerFPv)((void *) (arg0));
    }
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) - TObjPlayer__data_805DC360);
    draw__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    ((M2C_UNK (*)(void *))set_action_flag_40__10TObjPlayerFPv)((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFDF);
}

void restart_death_pose__10TObjPlayerFPv(u8 *arg0) {
    s32 var_r31;
    ((M2C_UNK (*)(void *))update_action_render__10TObjPlayerFPv)(arg0);
    ((void (*)(void *))zero_vec3)((void *) (arg0 + 0x5FC));
    ((M2C_UNK (*)(void *, void *))calc_death_pose_height_offset)((void *) (arg0 + 0x5FC), (void *) (arg0));
    if (is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) {
        var_r31 = ((s32 (*)(int))__nw__7TObjectFUl)((int) (0x2C));
        if (var_r31 != 0) {
            var_r31 = init_entry_fields__6TLobbyFPviii((int) (var_r31), (int) (tl_particlemodel), (void *) (&complete_deferred_player_death), (void *) (((u16 (*)(void *))obj_getField1c)((void *) (arg0))));
        }
        M2C_FIELD(arg0, s32 *, 0x548) = var_r31;
    }
}

void reset_on_death__10TObjPlayerFPv(u8 *arg0) {
    obj_setFlags30(arg0, 0x800U);
    M2C_FIELD(arg0, s16 *, 0x32C) = 0;
    ((VObj_18_4841bb *)(arg0))->m53();
    ((void (*)(void *))reset_lobby_model__10TObjPlayerFPv)(arg0 + 0x644);
    ((void (*)(void *))zero_vec3)(arg0 + 0x5FC);
}

void exit_death_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x36C) = 0;
    ((M2C_UNK (*)(void *, s32))zero_vec3)(arg0 + 0x5FC, temp_r4);
    ((M2C_UNK (*)(void *))clear_status_bit6__10TObjPlayerFPv)(arg0);
}

void update_death_pose__10TObjPlayerFPv(u8 *arg0) {
    if ((TBoss1Dragon__sub_80143960(arg0, 0x20) != 0) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA))) {
        ((M2C_UNK (*)(void *))restart_death_pose__10TObjPlayerFPv)(arg0);
    }
    ((M2C_UNK (*)(void *, f32))add_death_sink_progress)(arg0 + 0x5FC, lbl_805DC37C);
    calc_death_sink_offset(arg0 + 0x5FC);
    if (resolve_move_collision__10TObjPlayerFPv(arg0) == 0U) {
        ((M2C_UNK (*)(void *))apply_velocity__10TObjPlayerFPv)(arg0);
    }
}

void enter_death_state__10TObjPlayerFPv(u8 *arg0) {
    u32 temp_r31;
    u32 other;
    s32 killer;
    u8 *culprit;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xF;
    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *)(arg0), (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    ((M2C_UNK (*)(void *))reset_on_death__10TObjPlayerFPv)((void *) (arg0));
    TObjPlayer__sub_8001053C((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    if (test_flags_any((void *) (arg0 + 0x858), (int) (1)) != 0) {
        ((M2C_UNK (*)(void *, int, void *))set_action_state__10TObjPlayerFPvss)((void *) (arg0), (int) (0xF), (void *) (((s16 (*)(void))ret_801D26AC)()));
        ((M2C_UNK (*)(void *))restart_death_pose__10TObjPlayerFPv)((void *) (arg0));
    } else {
        ((M2C_UNK (*)(void *, int, void *))set_action_state__10TObjPlayerFPvss)((void *) (arg0), (int) (0xF), (void *) (get_model_field_m25__10TObjPlayerFPv((void *) (arg0))));
    }
    ((M2C_UNK (*)(void *))clear_photon_blast_state__10TObjPlayerFPv)((void *) (arg0 + 0x4AC));
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        temp_r3 = find_entity_by_id(get_field_2d4__10TObjPlayerFPv(arg0));
        if (temp_r3 != NULL) {
            if (check_value_equals__13TQuestColCtrlFPvi((int)temp_r3, lbl_805D3530) != 0) {
                temp_r31 = (u16)((s32 (*)(void *))obj_getField1c)(arg0);
                other = (u16)((s32 (*)(void *))obj_getField1c)(temp_r3);
                if (other != temp_r31) {
                    fn_801B0480((int) (temp_r3), (void *) (arg0), (int) (1));
                }
            }
            if (check_value_equals__13TQuestColCtrlFPvi((int) (temp_r3), (void *) (TOMineTrap__data_805D3080)) == 0) {
                update_trap_sub__10TOMineTrapFPv((void *) (arg0), (int) (temp_r3), (int) (1));
            } else if ((u16)(killer = get_trap_type__10TOMineTrapFPv((int)temp_r3)) == 0xffffU) {
                update_trap_sub__10TOMineTrapFPv((void *) (arg0), (int) (temp_r3), (int) (1));
            } else {
                culprit = find_entity_by_id(killer);
                update_trap_sub__10TOMineTrapFPv(arg0, (s32)culprit, 1);
            }
            draw_player_status((void *) (arg0), (void *) (temp_r3), (void *) (&lbl_805DC380));
        }
        draw_player_status((void *) (arg0), (void *) (arg0), (void *) (&lbl_805DC384));
        if (is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) {
            send_neg50__6TLobbyFPvPv((void *) (&lbl_80447138), (int) (0x96));
        }
    }
    if ((is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) && (is_camera_mode_active__10TObjPlayerFv() == 0) && (is_technique_ready__8TTecCtrlFv() == 0)) {
        if (is_single_screen__10TObjPlayerFv() != 0) {
            temp_r3_2 = get_card_window__17TWindowSubComCardFUi(((s32 (*)(void *))obj_getField1c)((void *) (arg0)));
            M2C_FIELD(temp_r3_2, s32 *, 0x244) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x244) + 1);
            return;
        }
        temp_r3_3 = get_card_window__17TWindowSubComCardFUi(0xFFFFU);
        M2C_FIELD(temp_r3_3, s32 *, 0x244) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x244) + 1);
    }
}

void handle_6x4D_player_died(void *arg0) {
    Cmd_801CA724 cmd;
    u8 *p;
    ((M2C_UNK (*)(void *))init_6x4D_packet__10TObjPlayerFPv)(&cmd);
    ((M2C_UNK (*)(void *, void *))TObjPlayer__sub_801D28A0)(&cmd, arg0);
    ((M2C_UNK (*)(void *))init_field_4__10TObjPlayerFPv)(&cmd);
    if (validate_6x4D_player_died(&cmd) != 0) {
        p = ((u8 * (*)(s32))get_player_by_client_id)(cmd.client);
        if (p != NULL) {
            TObjPlayer__sub_801BEEE0(p + 0x858, cmd.data);
            ((M2C_UNK (*)(void *))reset_on_death__10TObjPlayerFPv)(p);
            if (is_in_tl03_state__10TObjPlayerFPv(p) != 0) {
                ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(p, 0xF, 0);
            }
        }
    }
}

void prepare_death__10TObjPlayerFPv(u8 *arg0) {
    Cmd_801CA7BC c1;
    Cmd2_801CA7BC c2;
    if (is_locally_controlled__10TObjPlayerFPv(arg0) != 0) {
        TObjPlayer__sub_8024ABDC((void *)(u16)((s32 (*)(void *))obj_getField1c)(arg0));
        *(s32 *)(arg0 + 0x36C) = 0;
        *(s32 *)(arg0 + 0x548) = 0;
        ((M2C_UNK (*)(void *, u32))clear_flags__11TAdRicoRingFPvUi)(arg0 + 0x858, 4);
        if (find_revival_item__10TObjPlayerFv(arg0) == 0) {
            ((M2C_UNK (*)(void *, u32))set_flags__10TObjPlayerFPvUi)(arg0 + 0x858, 2);
        }
    }
    if (test_flags_any(arg0 + 0x858, 1) == 0) {
        drop_items_on_death__10TObjPlayerFPv(arg0);
    }
    if (is_flag_400_set__10TObjPlayerFPv(arg0) != 0) {
        enable_action_input__10TObjPlayerFPv(arg0);
    }
    if (*(void **)(arg0 + 0x424) != NULL && is_cursor_clear__11TMainCursorFPv(*(void **)(arg0 + 0x424)) == 0) {
        clear_flag_1_at_1c__10TObjPlayerFPv(*(void **)(arg0 + 0x424));
    }
    if (arg0 == NULL || obj_isState2_324(arg0) == 0) {
        ((M2C_UNK (*)(void *))TObjPlayer__sub_801D1888)(&c1);
        c1.client = ((s32 (*)(void *))obj_getField1c)(arg0);
        c1.val = get_field_2d4__10TObjPlayerFPv(arg0);
        ((M2C_UNK (*)(void *))update_and_send3__10TObjPlayerFPv)(&c1);
        ((M2C_UNK (*)(void *))init_6x4D_packet__10TObjPlayerFPv)(&c2);
        c2.client = ((s32 (*)(void *))obj_getField1c)(arg0);
        TObjPlayer__sub_801BEEE0(c2.data, arg0 + 0x858);
        ((M2C_UNK (*)(void *))init_and_send__10TObjPlayerFPv)(&c2);
    }
}

void TObjPlayer__sub_801CA8F0(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x20) = (f32) (lbl_805DC388 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    obj_setFlags30(arg0, 0x800U);
}

void request_revival_if_not_dead__10TObjPlayerFPv(u8 *arg0) {
    if (((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x800) == 0) {
        ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *) (arg0), (int) (0x12), (int) (5));
    }
}

void check_reopen_return_city_window__10TObjPlayerFPv(u8 *arg0) {
  unsigned short new_var;
  u32 temp_r3;
  new_var = (s32) ((s32 (*)(void *))obj_getField1c)((void *) arg0);
  TObjPlayer__sub_8024ABDC((void *) new_var);
  temp_r3 = *((u32 *) (((s8 *) arg0) + 0x36C));
  new_var = 0U;
  if ((temp_r3 != new_var) && ((all_parents_unqueued_for_destruction__7TObjectFv((int) temp_r3) == 0) || (check_value_equals__13TQuestColCtrlFPvi((int) (*((u32 *) (((s8 *) arg0) + 0x36C))), (void *) lbl_805D39B8) == 0)))
  {
    *((u32 *) (((s8 *) arg0) + 0x36C)) = 0U;
  }
  if (((((check_action_usable__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) 4) != 0) && (is_camera_mode_active__10TObjPlayerFv() == 0)) && (is_technique_ready__8TTecCtrlFv() == 0)) && ((check_camera_mode__10TObjPlayerFv() == 0) || ((check_camera_mode__10TObjPlayerFv() != 0) && (get_main_phase() == 0xF)))) && (check_flag_100__10TObjPlayerFPv((void *) arg0) == 0))
  {
    create_return_city_window__10TObjPlayerFPv((void *) arg0);
  }
}

void TObjPlayer__sub_801CAA58(void) {  }

void run_death_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void))TObjPlayer__sub_801CAA58)();
        return;
      case 2:
        ((s32 (*)(void *))check_reopen_return_city_window__10TObjPlayerFPv)((void *) arg0);
        return;
      case 3:
        ((s32 (*)(void *))request_revival_if_not_dead__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void *))TObjPlayer__sub_801CA8F0)((void *) arg0);
        return;
      case 5:
        ((s32 (*)(void *))prepare_death__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))enter_death_state__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))update_death_pose__10TObjPlayerFPv)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))exit_death_state__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

int exit_fall_reaction__10TObjPlayerFPv(void* p) { return ((int (*)(void*))TObjPlayer__sub_8001053C)(p); }

void update_fall_reaction__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        if (((s32 (*)(f32))objInBand__FP7GameObjf)(lbl_805DC370) != 0) {
            if (classify_action_state__10TObjPlayerFv(arg0) == 2) {
                send_field_state_if_active__10TObjPlayerFii(arg0, 0x40002320);
            } else {
                send_field_state_if_active__10TObjPlayerFii(arg0, 0x40009E14);
            }
        }
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) lbl_805DC38C;
        }
        break;
    case 1:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = ((s16 (*)(void))query_child_state2__10TObjPlayerFPv)();
        }
        break;
    case 2:
        break;
    }
    ((M2C_UNK (*)(void *))damp_planar_velocity)(arg0);
    if (check_actor_blocking_move__10TObjPlayerFPv(arg0) != 0) {
        TObjPlayer__sub_8001053C(arg0);
    }
    if (resolve_move_collision__10TObjPlayerFPv(arg0) == 0U) {
        ((M2C_UNK (*)(void *))apply_velocity__10TObjPlayerFPv)(arg0);
    }
}

void start_action_0e__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;

    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xE;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x308, &sp8);
    set_type__10TObjPlayerFPvi(arg0 + 0x644, 0x12C);
    obj_clearFlags30(arg0, 0x10000);
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x4000AD13);
    if (obj_isState2_324(arg0) != 0) {
        trigger_switch_attack__10TObjPlayerFPvi(arg0, ((VObj_801cac08 *)arg0)->m7());
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    set_action_state__10TObjPlayerFPvss(arg0, 0xE, ((s32 (*)(void *))get_action_animation__10TObjPlayerFPv)(arg0));
}

void handle_6x4C_hit_by_enemy(void *arg0) {
    Msg_801CACD8 m;
    Player_801CACD8 *p;

    bswap_head_pair__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D2910)(&m, arg0);
    init_6x4C_packet__10TObjPlayerFPv(&m);
    if (validate_6x4C_hit_by_enemy(&m) != 0) {
        p = ((Player_801CACD8 * (*)(s32))get_player_by_client_id)(m.id);
        if (p != NULL && test_action_mask__10TObjPlayerFPvi(p, 0x8000) == 0) {
            set_hp_clamped__10TObjPlayerFPvs(p, m.kind);
            if (is_in_tl03_state__10TObjPlayerFPv(p) != 0 && reset_volopt_state__10TObjPlayerFv(p) != 0) {
                p->ang = m.ang;
                p->x = m.x;
                p->z = m.z;
                ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0xE, 0);
            }
        }
    }
}

#pragma push
#pragma fp_contract on
void begin_fall_reaction__10TObjPlayerFPv(void *arg0) {
    f32 x;
    f32 z;
    Pkt_801CADA4 pkt;
    z = M2C_FIELD(arg0, f32 *, 0x310);
    x = M2C_FIELD(arg0, f32 *, 0x308);
    if (newton_sqrtf(x * x + z * z) > lbl_805DC390) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) ((s32) (lbl_80447148 * get_ad_end_text_start__10TObjPlayerFv(x, z)) + 0x8000);
    }
    if (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x800) != 0) {
        drop_items_on_death__10TObjPlayerFPv(arg0);
    }
    spawn_effect__10TObjPlayerFi(arg0);
    if ((arg0 == NULL) || (obj_isState2_324(arg0) == 0)) {
        ((M2C_UNK (*)(Pkt_801CADA4 *))init_6x4C_packet__10TObjPlayerFPv)(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.dir = (s16) M2C_FIELD(arg0, s32 *, 0x60);
        pkt.f6 = M2C_FIELD(arg0, s16 *, 0x32C);
        pkt.x = x;
        pkt.z = z;
        ((M2C_UNK (*)(Pkt_801CADA4 *))send_head_pair_packet__10TObjPlayerFPv)(&pkt);
    }
}
extern int fold_flush_2;
#pragma pop

void TObjPlayer__sub_801CAEAC(void) {  }

void complete_fall_reaction__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 1:
        if (((s16) M2C_FIELD(arg0, s16 *, 0xB8) == ((s16 (*)(void))get_action_animation__10TObjPlayerFPv)()) && (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) && (((s32 (*)(void *, int))obj_testFlags30)((void *) (arg0), (int) (0x800)) != 0)) {
            ((M2C_UNK (*)(void *, int))set_flags__10TObjPlayerFPvUi)((void *) (arg0 + 0x858), (int) (1));
            ((int (*)(void*, void*, void*))run_action_state_phase__10TObjPlayerFisi)((void*)((void *) (arg0)), (void*)((int) (0xF)), (void*)((int) (5)));
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            ((M2C_UNK (*)(void *, int))set_type__10TObjPlayerFPvi)((void *) (arg0 + 0x644), (int) (((s32 (*)(void))get_getup_protection_ticks__10TObjPlayerFPv)()));
            ((M2C_UNK (*)(void *))update_position_from_target__10TObjPlayerFPv)((void *) (arg0));
        }
        break;
    }
}

void TObjPlayer__sub_801CAF6C(void) {  }

void check_and_trigger_19_5__10TObjPlayerFPv(void* p) { if (check_flag30_bit20__10TObjPlayerFi(p) != 0) { ((int (*)(void*, void*, void*))run_action_state_phase__10TObjPlayerFisi)(p, (void*)19, (void*)5); } }

void run_fall_reaction_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  void *new_var;
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))check_and_trigger_19_5__10TObjPlayerFPv)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801CAF6C)();
        return;
      case 3:
        ((s32 (*)(void *))complete_fall_reaction__10TObjPlayerFPv)(new_var = (void *) arg0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801CAEAC)();
        return;
      case 5:
        ((s32 (*)(void *))begin_fall_reaction__10TObjPlayerFPv)((void *) arg0);
        return;
      new_var = (void *) arg0;
      case 0:
        ((s32 (*)(void *))start_action_0e__10TObjPlayerFPv)(new_var);
        return;
      case 1:
        ((s32 (*)(void *))update_fall_reaction__10TObjPlayerFPv)(new_var);
        return;
      case 6:
        ((s32 (*)(void *))exit_fall_reaction__10TObjPlayerFPv)(new_var);
        break;
    }
  }
}

void set_flag_100000__10TObjPlayerFPv(void* p) { ((int (*)(void*))TObjPlayer__sub_8001053C)((void*)(p)); ((int (*)(void*, void*))obj_setFlags30)(p, (void*)1048576); }

void update_move_state__10TObjPlayerFi(s32 arg0) {
    damp_planar_velocity();
    if (((s32 (*)(s32))check_actor_blocking_move__10TObjPlayerFPv)(arg0) != 0) {
        ((int (*)(void*))TObjPlayer__sub_8001053C)((void*)(arg0));
    }
    if (((u32 (*)(s32))resolve_move_collision__10TObjPlayerFPv)(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

void end_freeze_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;

    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xD;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x308, &sp8);
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        set_type__10TObjPlayerFPvi(arg0 + 0x644, 0x1E);
    } else {
        set_type__10TObjPlayerFPvi(arg0 + 0x644, get_hurt_protection_ticks__10TObjPlayerFPv(arg0));
    }
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x4000AD12);
    if (obj_isState2_324(arg0) != 0) {
        trigger_switch_attack__10TObjPlayerFPvi(arg0, ((VObj_801cb0c4 *)arg0)->m7());
    }
    obj_clearFlags30(arg0, 0x10000);
    set_action_state__10TObjPlayerFPvss(arg0, 0xD, call_model_m24__10TObjPlayerFPv(arg0));
}

void handle_6x4B_hit_by_enemy(void *arg0) {
    Msg_801CB1B0 m;
    Player_801CB1B0 *p;

    read_swapped_fields__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D1AC8)(&m, arg0);
    reset_action_state__10TObjPlayerFPv(&m);
    if (validate_6x4B_hit_by_enemy(&m) != 0) {
        p = ((Player_801CB1B0 * (*)(s32))get_player_by_client_id)(m.id);
        if (p != NULL && test_action_mask__10TObjPlayerFPvi(p, 0x8000) == 0) {
            set_hp_clamped__10TObjPlayerFPvs(p, m.kind);
            if (is_in_tl03_state__10TObjPlayerFPv(p) != 0 && reset_volopt_state__10TObjPlayerFv(p) != 0) {
                p->ang = m.ang;
                p->x = m.x;
                p->z = m.z;
                ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0xD, 0);
            }
        }
    }
}

void send_6x4B_hurt_reaction__10TObjPlayerFPv(u8 *arg0) {
    struct Pkt_801CB27C pkt;
    if (arg0 == NULL || ((s32 (*)(void))obj_isState2_324)() == 0) {
        reset_action_state__10TObjPlayerFPv(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.a = *(s32 *)(arg0 + 0x60);
        pkt.b = *(s16 *)(arg0 + 0x32C);
        pkt.x = *(f32 *)(arg0 + 0x308);
        pkt.z = *(f32 *)(arg0 + 0x310);
        handle_recv_state__10TObjPlayerFPv(&pkt);
    }
}

void TObjPlayer__sub_801CB2F0(void) {  }

void complete_hurt_reaction__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (((s32 (*)(void *, int))obj_testFlags30)(arg0, (int) (0x800)) != 0) {
            clear_flags__11TAdRicoRingFPvUi((void *) (arg0 + 0x858), (int) (1));
            ((int (*)(void*, void*, void*))run_action_state_phase__10TObjPlayerFisi)((void*)((void *) (arg0)), (void*)((int) (0xF)), (void*)((int) (5)));
            return;
        }
        ((M2C_UNK (*)(void *))update_position_from_target__10TObjPlayerFPv)((void *) (arg0));
    }
}

void TObjPlayer__sub_801CB360(void) {  }

void do_action_19_5_if_flag30__10TObjPlayerFPv(void* p) { if (check_flag30_bit20__10TObjPlayerFi(p) != 0) { ((int (*)(void*, void*, void*))run_action_state_phase__10TObjPlayerFisi)(p, (void*)19, (void*)5); } }

void run_hurt_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))do_action_19_5_if_flag30__10TObjPlayerFPv)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801CB360)();
        return;
      case 3:
        ((s32 (*)(void *))complete_hurt_reaction__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801CB2F0)();
        return;
      case 5:
        ((s32 (*)(void *))send_6x4B_hurt_reaction__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))end_freeze_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))update_move_state__10TObjPlayerFi)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))set_flag_100000__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void TObjPlayer__sub_801CB424(void) {  }

void TObjPlayer__sub_801CB428(s32 arg0) {
    if (((u32 (*)(void))resolve_move_collision__10TObjPlayerFPv)() == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

void begin_action_0xB__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xB;
    ((s32 (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ((s16 (*)(void))ret_801D26AC)();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0xB, call_obj_vt26__10TObjPlayerFPv(arg0));
}

void TObjPlayer__sub_801CB4D0(u8 *arg0) {
    struct Pkt_801CB4D0 pkt;
    if (arg0 == NULL || obj_isState2_324((void *)(arg0)) == 0) {
        ((void (*)(void *))TObjPlayer__sub_801D1BB0)(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.c = *(s32 *)(arg0 + 0x60);
        refresh_players__10TObjPlayerFPv(&pkt);
    }
}

void TObjPlayer__sub_801CB52C(void) {  }

void run_if_flag_10__10TObjPlayerFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        ((s32 (*)(void))update_position_from_target__10TObjPlayerFPv)();
    }
}

void TObjPlayer__sub_801CB55C(void) {  }

int try_apply_status_action__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void TObjPlayer__sub_801CB580(s32 arg0, s16 arg1) {
  void *new_var;
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))try_apply_status_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801CB55C)();
        return;
      case 3:
        ((s32 (*)(void *))run_if_flag_10__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801CB52C)();
        return;
      case 5:
        new_var = (void *) arg0;
        ((s32 (*)(void *))TObjPlayer__sub_801CB4D0)(new_var);
        return;
      case 0:
        ((s32 (*)(void *))begin_action_0xB__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        arg0 = arg0;
        ((s32 (*)(void *))TObjPlayer__sub_801CB428)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void))TObjPlayer__sub_801CB424)();
        break;
    }
  }
}

void TObjPlayer__sub_801CB5FC(void) {  }

void apply_velocity_if_ready__10TObjPlayerFi(s32 arg0) {
    if (((u32 (*)(void))resolve_move_collision__10TObjPlayerFPv)() == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

void start_action_c__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xC;
    ((s32 (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ((s16 (*)(void))ret_801D26AC)();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0xC, get_weapon_stat_c__10TObjPlayerFPv(arg0));
}

void handle_6x50_switch_interaction(const void *source) {
    struct SwitchActionMessage_801CB6A8 packet;
    ((void (*)(void *))TObjPlayer__sub_801D1C70)(&packet);
    ((void (*)(void *, const void *))copy_font__10TObjPlayerFPvPv)(&packet, source);
    bswap_field4__10TObjPlayerFPv(&packet);
    if (validate_6x50_switch_interaction(&packet)) {
        u8 *player = get_player_by_client_id(packet.actor);
        if (player && ((s32 (*)(void))is_in_tl03_state__10TObjPlayerFPv)() && !((s32 (*)(u8 *, u32))test_action_mask__10TObjPlayerFPvi)(player, 0x8200)) {
            *(s32 *)(player + 0x60) = packet.yaw;
            ((void (*)(u8 *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(player, 12, 0);
        }
    }
}

void send_6x50_switch_interaction__10TObjPlayerFPv(u8 *arg0) {
    Ctx_801CB748 ctx;
    if ((arg0 == NULL) || (((s32 (*)(void))obj_isState2_324)() == 0)) {
        ((M2C_UNK (*)(Ctx_801CB748 *))TObjPlayer__sub_801D1C70)(&ctx);
        ctx.f2 = obj_getField1c(arg0);
        ctx.f4 = M2C_FIELD(arg0, s32 *, 0x60);
        ((M2C_UNK (*)(Ctx_801CB748 *))sync_players__10TObjPlayerFPv)(&ctx);
    }
}

void TObjPlayer__sub_801CB7A4(void) {  }

void update_if_flag_set__10TObjPlayerFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        ((s32 (*)(void))update_position_from_target__10TObjPlayerFPv)();
    }
}

void TObjPlayer__sub_801CB7D4(void) {  }

int TObjPlayer__sub_801CB7D8(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void run_switch_interaction_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))TObjPlayer__sub_801CB7D8)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801CB7D4)();
        return;
      case 3:
        ((s32 (*)(void *))update_if_flag_set__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801CB7A4)();
        return;
      case 5:
        ((s32 (*)(void *))send_6x50_switch_interaction__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))start_action_c__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))apply_velocity_if_ready__10TObjPlayerFi)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void))TObjPlayer__sub_801CB5FC)();
        break;
    }
  }
}

s32 can_guard__10TObjPlayerFPv(u8 *arg0) {
    if ((((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x100) != 0) && (((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x04000000) == 0)) {
        return 1;
    }
    return 0;
}

void set_flag_0x100000__10TObjPlayerFPv(void* p) { ((int (*)(void*))TObjPlayer__sub_8001053C)(p); ((int (*)(void*, void*))obj_setFlags30)(p, (void*)1048576); }

void apply_velocity_if_free__10TObjPlayerFi(s32 arg0) {
    damp_planar_velocity();
    if (((u32 (*)(s32))resolve_move_collision__10TObjPlayerFPv)(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

void start_use_item_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;

    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xA;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x308, &sp8);
    obj_clearFlags30(arg0, 0x10000);
    use_current_item__10TObjPlayerFPv(arg0);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ((s16 (*)(void))ret_801D26AC)();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0xA, query_child_state__10TObjPlayerFPv(arg0));
}

typedef struct Msg_801CB9E4 {
    u8 pad0[2];
    u16 id;
    u8 pad4[4];
} Msg_801CB9E4;
s32 validate_6x4A_shield_attack(void *);
void* shield_attack__10TObjPlayerFPv(void* p);

void handle_6x4A_shield_attack(void *arg0) {
    Msg_801CB9E4 m;
    u8 *p;

    init_shield_attack_packet__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))shield_attack__10TObjPlayerFPv)(&m, arg0);
    TFontSmallLobby__sub_801C01BC(&m);
    if (validate_6x4A_shield_attack(&m) != 0) {
        p = get_player_by_client_id(m.id);
        if (p != NULL && is_in_tl03_state__10TObjPlayerFPv(p) != 0 && reset_volopt_state__10TObjPlayerFv(p) != 0 &&
            test_action_mask__10TObjPlayerFPvi(p, 0x8000) == 0) {
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 0xA, 0);
        }
    }
}

void* shield_attack__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }

void send_object_id_packet__10TObjPlayerFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (((s32 (*)(void))obj_isState2_324)() == 0)) {
        ((M2C_UNK (*)(M2C_UNK *))init_shield_attack_packet__10TObjPlayerFPv)((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = ((s16 (*)(s32))obj_getField1c)(arg0);
        ((M2C_UNK (*)(M2C_UNK *))draw_font_and_send__10TObjPlayerFPv)((M2C_UNK *)&sp8);
    }
}

void TObjPlayer__sub_801CBB10(void) {  }

void complete_guard_reaction__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (obj_testFlags30((s32)(arg0), (s32)((int) (0x800))) != 0) {
            clear_flags__11TAdRicoRingFPvUi((void *) (arg0 + 0x858), (int) (1));
            ((s32 (*)(s32, s32, s32))run_action_state_phase__10TObjPlayerFisi)((s32)((void *) (arg0)), (s32)((int) (0xF)), (s32)((int) (5)));
            return;
        }
        ((M2C_UNK (*)(void *))update_position_from_target__10TObjPlayerFPv)((void *) (arg0));
    }
}

void TObjPlayer__sub_801CBB80(void) {  }

void select_hit_action__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(void))check_flag30_bit20__10TObjPlayerFi)() != 0) {
        ((s32 (*)(s32, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, 0x13, 5);
        return;
    }
    if (((s32 (*)(s32))is_status_flag_200__10TObjPlayerFPv)(arg0) != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            ((s32 (*)(s32, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xE, 5);
            return;
        }
        ((s32 (*)(s32, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, 0xD, 5);
    }
}

void run_guard_reaction_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))select_hit_action__10TObjPlayerFi)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801CBB80)();
        return;
      case 3:
        ((s32 (*)(void *))complete_guard_reaction__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801CBB10)();
        return;
      case 5:
        ((s32 (*)(void *))send_object_id_packet__10TObjPlayerFi)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))start_use_item_action__10TObjPlayerFPv)((void *) arg0);
        if (arg0 && arg0)
      {
      }
        return;
      case 1:
        ((s32 (*)(void *))apply_velocity_if_free__10TObjPlayerFi)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))set_flag_0x100000__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void TObjPlayer__sub_801CBC90(s32 arg0) {
    if ((void *) TObjPlayer__shared_photon_blast_state != NULL) {
        create_party_effects__10TObjPlayerFPvi(TObjPlayer__shared_photon_blast_state, arg0);
    }
}

u8 *TObjPlayer__sub_801CBCC4(s32 arg0) {
    if ((void *) TObjPlayer__shared_photon_blast_state != NULL) {
        return find_by_section_id__10TObjPlayerFPvi(TObjPlayer__shared_photon_blast_state, arg0);
    }
    return NULL;
}

s32 get_current_target_id__10TObjPlayerFv(void) {
    if ((u32) (*(u32 *)&TObjPlayer__shared_photon_blast_state) != 0U) {
        return find_first_valid_target_id__10TObjPlayerFPv((void*)(*(u32 *)&TObjPlayer__shared_photon_blast_state));
    }
    return 0xFFFF;
}

void remove_photon_blast_participant(s32 arg0) {
    if ((void *) TObjPlayer__shared_photon_blast_state != NULL) {
        TObjPlayer__sub_80312E98(TObjPlayer__shared_photon_blast_state, arg0);
    }
}

void update_photon_blast_state__10TObjPlayerFv(void) {
    if ((u32) (*(u32 *)&TObjPlayer__shared_photon_blast_state) != 0U) {
        process_all_elements__10TObjPlayerFPv((void*)(*(u32 *)&TObjPlayer__shared_photon_blast_state));
    }
}

u8 *TObjPlayer__sub_801CBD98(s32 arg0) {
    if ((void *) TObjPlayer__shared_photon_blast_state != NULL) {
        return ((u8 * (*)(void *, int))get_element__10TObjPlayerFPvi)(TObjPlayer__shared_photon_blast_state, arg0);
    }
    return NULL;
}

void apply_photon_blast__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if ((u32) (*(u32 *)&TObjPlayer__shared_photon_blast_state) != 0U) {
        append_photon_blast_request((*(u32 *)&TObjPlayer__shared_photon_blast_state), arg0, arg1);
    }
}

void update_active_instance__10TObjPlayerFi(s32 arg0) {
    if ((u32) (*(u32 *)&TObjPlayer__shared_photon_blast_state) != 0U) {
        if (((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() == 0) {
            ((M2C_UNK (*)(u32))process_all_elements__10TObjPlayerFPv)((*(u32 *)&TObjPlayer__shared_photon_blast_state));
            return;
        }
        release_photon_blast_requests((*(u32 *)&TObjPlayer__shared_photon_blast_state));
        admit_photon_blast_sequence(((s32 (*)(s32))TObjPlayer__sub_801CBD98)(0), arg0);
    }
}

void TObjPlayer__vt73(s32 arg0, f32 farg0) {
    if (((s32 (*)(void))is_locally_controlled__10TObjPlayerFPv)() == 0 || obj_testFlags30(arg0, 0x800) != 0 ||
        activate_d04_slot__10TObjPlayerFPv(arg0) == 0 || ((s32 (*)(s32, s32))is_alt_photon_blast_bank_empty__10TObjPlayerFPv)(arg0 + 0x500, 1) != 0 ||
        reset_key_machine_state__10TObjPlayerFv() == 0) {
        return;
    }
    add_photon_blast_charge(arg0 + 0x4AC, farg0);
}

f32 calc_photon_blast_charge__10TObjPlayerFv(void *arg0, s32 arg1) {
    return (f32) arg1 / (lbl_805DC394 * (TObjPlayer__data_805DC360 + (f32) clamp_nested_index__10TObjPlayerFPv()));
}

void release_all_players_control_lock(void) {
    for_each_player_slot__10TObjPlayerFv((M2C_UNK *)release_control_lock__10TObjPlayerFPv);
}

void release_photon_blast_player_holds(u16 *p) {
    s32 i;
    u32 obj;
    if (p != NULL) {
        i = 0;
        while (*p != 0xFFFF) {
            u32 id = *p++;
            if (id >= 12) {
                break;
            }
            obj = ((u32 (*)(u32))get_player_by_client_id)(id);
            if (obj != 0) {
                ((void (*)(u32))clear_flag_200__10TObjPlayerFPv)(obj);
            }
            i++;
            if (i >= 12) {
                break;
            }
        }
    }
}

void freeze_players_for_photon_blast(s16 arg0, u16 *arg1) {
    s32 i;
    void *obj;
    void **tbl;
    tbl = lbl_8050EA10;
    i = 0;
    do {
        obj = *tbl;
        if (obj != NULL && ((s32 (*)(void *))is_on_current_floor__10TObjPlayerFi)(obj) != 0 && test_action_mask__10TObjPlayerFPvi(obj, 0x8000) == 0 &&
            (is_single_screen__10TObjPlayerFv() != 0 ||
             (is_single_screen__10TObjPlayerFv() == 0 && arg0 == get_stat_by_key_state__10TObjPlayerFPv(obj)))) {
            TObjPlayer__sub_801D0F70(obj);
            if (arg1 != NULL) {
                *arg1 = ((u16 (*)(void *))obj_getField1c)(obj);
                arg1++;
            }
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(obj, 0x13, 0);
        }
        i++;
        tbl++;
    } while (i < 4);
}

void handle_6x36(void) {  }

void handle_6x37_photon_blast(s32 arg0) {
    struct Pkt_801CC0F4 pkt;
    u8 *temp_r3;
    ((void (*)(struct PbPacket37_801CC194 *))TObjPlayer__sub_801D1D88)((struct PbPacket37_801CC194 *)((void *) (&pkt)));
    ((M2C_UNK (*)(void *, void *))TObjPlayer__sub_801D1D44)((void *) (&pkt), (void *) (arg0));
    ((M2C_UNK (*)(void *))swap_endian16__10TObjPlayerFPv)((void *) (&pkt));
    if (validate_6x37_photon_blast((void *) (&pkt)) != 0) {
        temp_r3 = get_player_by_client_id(pkt.player);
        if ((temp_r3 != NULL) && (((s32 (*)(void))check_flag_4__10TObjPlayerFPv)() == 0) && ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) == (u32) tl_03) && (((s32 (*)(int))reset_volopt_state__10TObjPlayerFv)((int) (temp_r3)) != 0)) {
            ((M2C_UNK (*)(void *))check_photon_blast_flag__10TObjPlayerFPv)((void *) (temp_r3 + 0x4AC));
            ((M2C_UNK (*)(void *))trigger_photon_blast__10TObjPlayerFPv)((void *) (temp_r3 + 0x4AC));
        }
    }
}

void send_6x37_photon_blast__10TObjPlayerFPv(void *self) {
    struct PbPacket37_801CC194 packet;
    if (self == NULL || obj_isState2_324(self) == 0) {
        ((void (*)(struct PbPacket37_801CC194 *))TObjPlayer__sub_801D1D88)(&packet);
        packet.player = obj_getField1c(self);
        packet.gauge = get_sub_value__8TItemMagFi(self);
        ((void (*)(struct PbPacket37_801CC194 *))update_and_send4__10TObjPlayerFPv)(&packet);
    }
}

s32 check_conditions__10TObjPlayerFi(s32 arg0) {
    if ((obj_testFlags30(arg0, 0x20006) != 0) || (((s32 (*)(s32, M2C_UNK))test_action_mask__10TObjPlayerFPvi)(arg0, 0x11E) == 0) || (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) == 0) || (((s32 (*)(s32))check_flag_clear__10TObjPlayerFPv)(arg0 + 0x4AC) == 0) || ((((s32 (*)(s32))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0) && ((((s32 (*)(s32))check_flag_100__10TObjPlayerFPv)(arg0) != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0))) || (((s32 (*)(s32))reset_volopt_state__10TObjPlayerFv)(arg0) == 0)) {
        return 0;
    }
    return 1;
}

void exit_photon_blast_action__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r4;
    M2C_FIELD(arg0, u32 *, 0xB0) &= ~0x40;
    ((M2C_UNK (*)(void *, int))TObjPlayer__sub_8011E204)((void *) (arg0), (int) (0x80));
    ((M2C_UNK (*)(void *, int))obj_clearFlags30)((void *) (arg0), (int) (0x400000));
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x424));
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
    reset_photon_blast_gauge((void *) (arg0 + 0x4AC));
    if (is_final_phase__10TObjPlayerFv() != 0) {
        ((M2C_UNK (*)(void *))obj_getField1c)((void *) (arg0));
        ((M2C_UNK (*)(void))remove_photon_blast_participant)();
    } else {
        ((M2C_UNK (*)(void))update_photon_blast_state__10TObjPlayerFv)();
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x33C) != 0x13) {
        reset_lobby_model__10TObjPlayerFPv((void *) (arg0 + 0x644));
    }
}

void update_photon_blast_action__10TObjPlayerFPv(u8 *arg0) {
  s16 temp_r0;
  *((s32 *) (((s8 *) arg0) + 0x60)) = ((s32 (*)(int, int))lerp_angle_half__10TObjPlayerFUsUs)((int) (*((s32 *) (((s8 *) arg0) + 0x60))), (int) (*((s32 *) (((s8 *) arg0) + 0x3F0))));
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x328));
  switch (temp_r0)
  {
    case 2:
    case 4:
      break;
    case 0:
      get_photon_blast_hold_frame__10TObjPlayerFi((void *) arg0);
      if (objInBand__FP7GameObjf((void *) arg0) != 0)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 1;
      *((s32 *) (((s8 *) arg0) + 0xB0)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xB0))) | 0x40);
      ((M2C_UNK (*)(void *, int))set_field8__10TObjPlayerFPvi)((void *) (arg0 + 0x4AC), (int) (*((s16 *) (((s8 *) get_photon_blast_entry__10TObjPlayerFi(get_valid_index__15TFontSmallLobbyFPv((void *) (arg0 + 0x4AC)))) + 0x12))));
      ((M2C_UNK (*)(void *, f32))set_field_0c__10TObjPlayerFPvf)((void *) (arg0 + 0x4AC), (f32) lbl_805DC398);
    }
      play_persistent_sound((int) 0x4002A823, (void *) arg0, (int) 0, (int) 0, (int) 0);
      break;
    case 1:
      *((f32 *) (((s8 *) arg0) + 0xC0)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC0))) + TObjPlayer__sub_801D2A98((void *) (arg0 + 0x4AC)));
      if (TObjPlayer__sub_801D2A98((void *) (arg0 + 0x4AC)) > (*(f32 *)&TObjPlayer__data_805DC36C))
    {
      if ((*((f32 *) (((s8 *) arg0) + 0xC0))) >= get_photon_blast_upper_bound__10TObjPlayerFv((void *) arg0))
      {
        ((M2C_UNK (*)(void *, f32))set_field_0c__10TObjPlayerFPvf)((void *) (arg0 + 0x4AC), (f32) lbl_805DC398);
      }
    }
    else
      if ((*((f32 *) (((s8 *) arg0) + 0xC0))) <= (get_photon_blast_hold_frame__10TObjPlayerFi((void *) arg0) - (*(f32 *)&TObjPlayer__data_805DC360)))
    {
      if (1)
      {
        ((M2C_UNK (*)(void *, f32))set_field_0c__10TObjPlayerFPvf)((void *) (arg0 + 0x4AC), (f32) (*(f32 *)&TObjPlayer__data_805DC39C));
      }
    }
      ((M2C_UNK (*)(void *))TObjPlayer__sub_801D2A88)((void *) (arg0 + 0x4AC));
      if (TObjPlayer__sub_801D2A80((void *) (arg0 + 0x4AC)) < 0)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 2;
      *((s32 *) (((s8 *) arg0) + 0xB0)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xB0))) & 0xFFFFFFBF);
      get_photon_blast_complete_threshold__10TObjPlayerFv((void *) arg0);
      ((M2C_UNK (*)(void *))TObjPlayer__sub_801D2A78)((void *) (arg0 + 0x4AC));
    }
      play_persistent_sound((int) 0x4002A823, (void *) arg0, (int) 0, (int) 0, (int) 0);
      break;
    case 3:
      if (((s32 (*)(void *))TObjPlayer__sub_801D2A50)((void *) (arg0 + 0x4AC)) != 0)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 4;
      ((M2C_UNK (*)(void *, int))TObjPlayer__sub_8011E204)((void *) arg0, (int) 0x80);
      ((M2C_UNK (*)(void *))clear_status_bit6__10TObjPlayerFPv)((void *) arg0);
      ((M2C_UNK (*)(void *, void *))update_active_instance__10TObjPlayerFi)((void *) arg0, (void *) get_valid_index__15TFontSmallLobbyFPv((void *) (arg0 + 0x4AC)));
    }
      break;
  }
  if (resolve_move_collision__10TObjPlayerFPv((void *) arg0) == 0U)
  {
    ((M2C_UNK (*)(void *))apply_velocity__10TObjPlayerFPv)((void *) arg0);
  }
}

void enter_photon_blast_action__10TObjPlayerFPv(u8 *arg0) {
    Slot_801CC558 *slot;
    u16 id;
    Mylla_801CC558 *m;
    *(s32 *)(arg0 + 0x33C) = 9;
    ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, *(s16 *)(arg0 + 0x326), 6);
    slot = (Slot_801CC558 *)((u32 * (*)(void *, s32))TObjPlayer__sub_801D2AB0)(arg0 + 0x4AC, 0);
    id = slot->id;
    if (id != 0xFFFF) {
        m = ((Mylla_801CC558 * (*)(u16))find_entity_by_id)(id);
        if (m == NULL) {
            slot->id = id = 0xFFFF;
        } else {
            ((M2C_UNK (*)(void *, void *))copy_position__10TObjPlayerFPv)(arg0 + 0x744, m->tbl + slot->idx * 0x2C + 0x1C);
        }
    }
    if (id == 0xFFFF) {
        *(s32 *)(arg0 + 0x3F0) = *(s32 *)(arg0 + 0x60);
    } else {
        slot = (Slot_801CC558 *)get_field4_ptr__10TObjPlayerFPv(arg0 + 0x744);
        *(s32 *)(arg0 + 0x3F0) = calc_angle_to__10TObjPlayerFPvPv(get_position_ptr__10TObjPlayerFPv(arg0), slot);
    }
    ((M2C_UNK (*)(void *, s32))obj_setFlags30)(arg0, 0x400000);
    TObjPlayer__sub_8001053C(arg0);
    if (obj_isState2_324(arg0) != 0) {
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x22824);
    } else {
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x22322);
    }
    *(s16 *)(arg0 + 0x328) = 0;
    set_action_state__10TObjPlayerFPvss(arg0, 9, query_equip__10TObjPlayerFPv(arg0));
    ((M2C_UNK (*)(void *, u32))set_state_flags__10TObjPlayerFPvUi)(arg0, 0x80);
    start_photon_blast__10TObjPlayerFiUs(get_valid_index__15TFontSmallLobbyFPv(arg0 + 0x4AC), ((M2C_UNK (*)(void *))obj_getField1c)(arg0));
}

void handle_6x49_execute_photon_blast(void *arg0) {
    s32 i;
    Player_801CC6B8 *p;
    Msg_801CC6B8 m;
    ((void (*)(void *))init_6x49_packet__10TObjPlayerFPv)(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D1E7C)(&m, arg0);
    ((void (*)(void *))byteswap_6x49_packet__10TObjPlayerFPv)(&m);
    if (validate_6x49_packet__17TObjEneHoldEffectFPv(&m) != 0) {
        p = ((Player_801CC6B8 * (*)(s32))get_player_by_client_id)(m.id);
        if (p != NULL && test_action_mask__10TObjPlayerFPvi(p, 0x8000) == 0 && reset_key_machine_state__10TObjPlayerFv() != 0) {
            if (get_current_floor() == ((s32 (*)(void *))get_field_3e4__10TObjPlayerFPv)(p)) {
                s32 count;
                u32 *dst;
                u32 *src;
                ((void (*)(void *))start_photon_blast_action__10TObjPlayerFPv)(p->pb);
                ((void (*)(u16, s32))apply_photon_blast__10TObjPlayerFii)(m.id, m.kind);
                set_photon_blast_kind(p->pb, m.kind);
                count = m.count;
                set_section_index__15TFontSmallLobbyFPvs(p->pb, count);
                ((void (*)(void *, s16))set_float_param__10TObjPlayerFis)(p, m.param);
                dst = ((u32 * (*)(void *, s32))TObjPlayer__sub_801D2AB0)(p->pb, 0);
                src = m.techs;
                for (i = 0; i < count; i++) {
                    ((void (*)(u32 *, u32 *))copy_tech_params__10TObjPlayerFPvPv)(dst++, src++);
                }
                ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 9, 0);
            }
        }
    }
}

void copy_tech_params__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

void prepare_photon_blast_action__10TObjPlayerFPv(u8 *arg0) {
    Pkt_801CC7F8 pkt;
    s32 i;
    s16 n;
    s32 *src;
    s32 *dst;
    if (((s32 (*)(void))reset_volopt_state__10TObjPlayerFv)() != 0) {
        ((M2C_UNK (*)(void *, int))set_type__10TObjPlayerFPvi)(arg0 + 0x644, 0x708);
        capture_technique_targets__10TObjPlayerFv((void *)get_valid_index__15TFontSmallLobbyFPv(arg0 + 0x4AC), arg0);
        if (M2C_FIELD(arg0, u32 *, 0x424) != 0U) {
            u8 *e = ((u8 * (*)(void *, M2C_UNK))TObjPlayer__sub_801D2AB0)(arg0 + 0x4AC, 0);
            set_cursor_pos__11TMainCursorFiUsi(M2C_FIELD(arg0, u32 *, 0x424), M2C_FIELD(e, u16 *, 0), M2C_FIELD(e, s16 *, 2));
        }
        if (arg0 == NULL || obj_isState2_324(arg0) == 0) {
            ((M2C_UNK (*)(void *))init_6x49_packet__10TObjPlayerFPv)(&pkt);
            pkt.client = obj_getField1c(arg0);
            pkt.index = get_valid_index__15TFontSmallLobbyFPv(arg0 + 0x4AC);
            pkt.count = n = ((s32 (*)(void *))TAdSinglePlyChrSelectGC__sub_801D5DDC)(arg0 + 0x4AC);
            pkt.sub = get_sub_value__8TItemMagFi(arg0);
            src = (s32 *)((u8 * (*)(void *, M2C_UNK))TObjPlayer__sub_801D2AB0)(arg0 + 0x4AC, 0);
            dst = pkt.tech;
            for (i = 0; i < n; i++) {
                ((M2C_UNK (*)(int, int))copy_tech_params__10TObjPlayerFPvPv)((int)dst++, (int)src++);
            }
            ((M2C_UNK (*)(void *))send_photon_blast_targets_packet)(&pkt);
        }
    }
}

void update_band_state__10TObjPlayerFPv(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x328) == 2) {
        ((M2C_UNK (*)(void *))get_dist__10TObjPlayerFPv)((void *) (arg0 + 0x4AC));
        if (objInBand__FP7GameObjf((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            ((M2C_UNK (*)(void *))set_action_flag_40__10TObjPlayerFPv)((void *) (arg0));
        }
    }
}

void update_target_approach__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        ((M2C_UNK (*)(void))update_position_from_target__10TObjPlayerFPv)();
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x328) == 2) {
        ((M2C_UNK (*)(void *))get_dist__10TObjPlayerFPv)((void *) (arg0 + 0x4AC));
        if (objInBand__FP7GameObjf((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            ((M2C_UNK (*)(void *))set_action_flag_40__10TObjPlayerFPv)((void *) (arg0));
            ((M2C_UNK (*)(void *))send_6x37_photon_blast__10TObjPlayerFPv)((void *) (arg0));
        }
    }
}

void TObjPlayer__sub_801CC9E4(void) {  }

int try_apply_status_action_default__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void dispatch_photon_blast_action__10TObjPlayerFis(s32 arg0, s16 arg1) {
  s32 *new_var;
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))try_apply_status_action_default__10TObjPlayerFPv)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801CC9E4)();
        return;
      case 3:
        ((s32 (*)(void *))update_target_approach__10TObjPlayerFPv)((void *) arg0);
        arg0 = arg0;
        if (1)
      {
      }
        return;
      case 8:
        ((s32 (*)(void *))update_band_state__10TObjPlayerFPv)((void *) arg0);
        return;
      case 5:
        ((s32 (*)(void *))prepare_photon_blast_action__10TObjPlayerFPv)((void *) (*(new_var = &arg0)));
        return;
      case 0:
        ((s32 (*)(void *))enter_photon_blast_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))update_photon_blast_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))exit_photon_blast_action__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void handle_6x33_revive_player(void *arg0) {
    Msg_801CCA84 m;
    Tech_801CCA84 t;
    Player_801CCA84 *p;
    Player_801CCA84 *q;
    ((void (*)(void *))TObjPlayer__sub_801D209C)(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D2058)(&m, arg0);
    bswap_coords__10TObjPlayerFPv(&m);
    if (validate_6x33_revive_player(&m) != 0) {
        p = (Player_801CCA84 *)get_player_by_client_id(m.id);
        if (p != NULL) {
            q = (Player_801CCA84 *)get_player_by_client_id(m.target);
            if (q != NULL && check_flag_4__10TObjPlayerFPv(q) == 0 && q->list == tl_03) {
                construct_target_cursor_records__10TObjPlayerFi(&t);
                t.kind = 1;
                t.target = m.target;
                t.f6 = 0;
                t.f8 = lbl_805DC370;
                create__12TTecReverserFPvPvPvPv(p, get_position_ptr__10TObjPlayerFPv(p), &t, 0x1D);
            }
        }
    }
}

void send_6x33_revive_player(s32 arg0, s16 arg1) {
    struct Pkt_801CCB58 pkt;
    if (get_player_by_client_id(arg0) == NULL || ((s32 (*)(void))obj_isState2_324)() == 0) {
        ((void (*)(void *))TObjPlayer__sub_801D209C)(&pkt);
        pkt.id = arg0;
        pkt.c = arg1;
        send_coords__10TObjPlayerFPv(&pkt);
    }
}

void clamp_and_set_unit_value__10TObjPlayerFiUci(s32 arg0, u8 arg1, s32 arg2) {
    if (obj_isState3_324() != 0 && is_invalid_slot__10TObjPlayerFUc(arg1) == 0 &&
        arg1 > (u8)TObjPlayer__sub_801C010C(arg0 + 0x428, arg2)) {
        arg1 = TObjPlayer__sub_801C010C(arg0 + 0x428, arg2);
    }
    set_technique_level_entry(arg0 + 0x428, arg2, arg1);
}

void update_cursor__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x424);
    if ((temp_r3 != 0U) && (canSetMenuCursorAction(temp_r3 + 0x520, arg0, 3, (u8) arg1) != 0)) {
        set_mode__20TWindowActionPaletteFPvUc(M2C_FIELD(arg0, u32 *, 0x424) + 0x520, 3);
        set_slot__20TWindowActionPaletteFPvUc(M2C_FIELD(arg0, u32 *, 0x424) + 0x520, (u8) arg1);
        TMainCursor__sub_8013DFC4(M2C_FIELD(arg0, u32 *, 0x424) + 0x520);
    }
}

s32 try_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((s32 (*)(s32, M2C_UNK))test_action_mask__10TObjPlayerFPvi)(arg0, 0x100) == 0) {
        if (((s32 (*)(s32, s16))can_equip_item__10TObjPlayerFii)(arg0, arg1) == 0) {
            return 0;
        }
        set_technique_id__10TObjPlayerFPvs(arg0 + 0x428, arg1);
        ((M2C_UNK (*)(s32))request_technique_cast__10TObjPlayerFPv)(arg0);
        return 1;
    }
    return 0;
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline void tail_801CCD38(Player_801CCD38 *p, s32 t, s8 lvl) {
    switch (t) {
    case 10:
    case 11:
    case 12:
    case 13:
    case 15:
    case 16:
        set_technique_state__10TObjPlayerFPvi(p->techs, ((Rec_801CCD38 *)calc_technique_parameters(t, lvl, ((s32 (*)(void *))obj_getField1c)(p)))->state);
        p->f328 = 4;
        launch_technique__10TObjPlayerFv(t, lvl, p);
        return;
    }
    if (check_flag_4__10TObjPlayerFPv(p) == 0 && p->f10 == tl_03) {
        set_technique_state__10TObjPlayerFPvi(p->techs, ((Rec_801CCD38 *)calc_technique_parameters(t, lvl, ((s32 (*)(void *))obj_getField1c)(p)))->state);
        p->f328 = 4;
        launch_technique__10TObjPlayerFv(t, lvl, p);
    }
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
void handle_6x48_cast_technique_complete(void *arg) {
    Pkt_801CCD38 pkt;
    s8 lvl;
    u8 ul;
    Player_801CCD38 *p;
    s16 tech;
    ((void (*)(void *))TObjPlayer__sub_801D2178)(&pkt);
    ((void (*)(void *, void *))TObjPlayer__sub_801D2134)(&pkt, arg);
    swap_header__10TObjPlayerFPv(&pkt);
    if (validate_6x48_cast_technique_complete(&pkt) == 0) {
        return;
    }
    p = ((Player_801CCD38 * (*)(u16))get_player_by_client_id)(pkt.id);
    if (p == NULL) {
        return;
    }
    if (reset_volopt_state__10TObjPlayerFv(p) == 0) {
        return;
    }
    tech = pkt.tech;
    ((void (*)(void *, s16))set_technique_id__10TObjPlayerFPvs)(p->techs, tech);
    lvl = pkt.level;
    if (lvl == 0xE) {
        lvl += get_valid_technique__10TObjPlayerFPv(p->techs);
    }
    if (((s32 (*)(void *, s16, u8))check_technique_level__10TObjPlayerFiiUc)(p->techs, tech, (u8)lvl) == 0) {
        lvl = 0;
    }
    ul = lvl;
    set_technique_id__10TObjPlayerFPvUc(p->techs, ul);
    ((void (*)(void *, u8, s16))clamp_and_set_unit_value__10TObjPlayerFiUci)(p, ul, tech);
    tail_801CCD38(p, tech, lvl);
}
extern int fold_flush_4;
#pragma pop

void pay_tp_and_send_6x48_cast__10TObjPlayerFPv(Player_801CCEDC *self) {
    s16 tech;
    u8 hi;
    u8 lo;
    if (reset_volopt_state__10TObjPlayerFv(self) != 0) {
        if (self == 0 || obj_isState2_324(self) == 0) {
            Pkt_801CCEDC pkt;
            self->f328 = 4;
            tech = get_or_init_field_4__10TObjPlayerFPv(self->techs);
            self->tp -= calc_technique_parameters(tech, get_castable_technique_level__10TObjPlayerFPv(self->techs), ((s32 (*)(void *))obj_getField1c)(self))->cost;
            if (self->tp < 0) {
                self->tp = 0;
            }
            split_capped_value__10TObjPlayerFUcPvPv(get_castable_technique_level__10TObjPlayerFPv(self->techs), &hi, &lo);
            ((void (*)(void *))TObjPlayer__sub_801D2178)(&pkt);
            pkt.id = ((s32 (*)(void *))obj_getField1c)(self);
            pkt.tech = tech;
            pkt.level = hi;
            send_swapped_header__10TObjPlayerFPv(&pkt);
        }
    }
}

s32 try_camera_action__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if ((((s32 (*)(void))is_locally_controlled__10TObjPlayerFPv)() != 0) && ((((s32 (*)(s32))check_flag_100__10TObjPlayerFPv)(arg0) != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0))) {
        return 0;
    }
    return ((s32 (*)(s32, s32))can_start_technique__10TObjPlayerFPvi)(arg0, arg1);
}

s32 can_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((s32 (*)(void))is_locally_controlled__10TObjPlayerFPv)() != 0) {
        return ((s32 (*)(s32, s32))can_start_technique__10TObjPlayerFPvi)(arg0, arg1);
    }
    return 0;
}

s32 can_start_technique__10TObjPlayerFPvi(Player_801CD078 *self, s32 tech) {
    if (((s32 (*)(void *))test_bit1_at_10__10TObjPlayerFPv)(self->techs) != 0 ||
        ((s32 (*)(void *, u32))obj_testFlags30)(self, 0x20006) != 0 ||
        ((s32 (*)(void *, u32))obj_testFlags30)(self, 0x2000000) != 0 ||
        test_action_mask__10TObjPlayerFPvi(self, 0x11E) == 0 ||
        (tech == 0xE && is_flag_clear__17TObjWarpBossMultiFPv(self) == 0) ||
        (tech == 0x11 && is_camera_mode_active__10TObjPlayerFv() != 0) ||
        validate_and_clear_slot__10TObjPlayerFPv(self->techs, tech) != 0 ||
        reset_volopt_state__10TObjPlayerFv(self) == 0) {
        return 0;
    }
    return self->tp - ((Rec_801CD078 * (*)(s32, s32, s32))calc_technique_parameters)(tech, get_cast_technique_level(self->techs, tech), ((s32 (*)(void *))obj_getField1c)(self))->cost >= 0 ? 1 : 0;
}

void exit_technique_cast__10TObjPlayerFPv(Player_801CD188 *self) {
    self->flags &= ~0x40;
    ((void (*)(void *, s32))TObjPlayer__sub_8011E204)(self, 0x80);
    ((void (*)(void *, u32))obj_clearFlags30)(self, 0x400000);
    clear_status_bit6__10TObjPlayerFPv(self);
    if (self->sub != 0) {
        self->sub->f508 = 0xFFFF;
    }
}

void update_technique_cast__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r30;
    u8 temp_r31;
    u8 *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x60) = ((s32 (*)(int, int))lerp_angle_half__10TObjPlayerFUsUs)((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x3F0)));
    temp_r3 = (u8 *)(TObjPlayer__sub_801D8DCC(arg0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 3:
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        set_state_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x80));
        create_technique_charge_light((s16) (get_or_init_field_4__10TObjPlayerFPv((void *) (arg0 + 0x428))), (void *) (arg0));
        ((M2C_UNK (*)(void *, int))set_technique_state__10TObjPlayerFPvi)((void *) (arg0 + 0x428), (int) (M2C_FIELD(((Rec_801CD078 * (*)(s32, s32, s32))calc_technique_parameters)(get_or_init_field_4__10TObjPlayerFPv((void *) (arg0 + 0x428)), get_castable_technique_level__10TObjPlayerFPv((void *) (arg0 + 0x428)), ((s32 (*)(void *))obj_getField1c)((void *) (arg0))), s16 *, 0x12)));
        ((M2C_UNK (*)(void *, f32))TObjPlayer__sub_801D2CC4)((void *) (arg0 + 0x428), (f32) (lbl_805DC3A0));
        break;
    case 1:
        if (is_flag_b0_4__10TObjPlayerFPv((void *) (arg0)) == 0) {
            M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x40);
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + get_float_14__10TObjPlayerFPv((void *) (arg0 + 0x428)));
            if (get_float_14__10TObjPlayerFPv((void *) (arg0 + 0x428)) > TObjPlayer__data_805DC36C) {
                if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjPlayer__data_805DC39C) {
                    ((M2C_UNK (*)(void *, f32))TObjPlayer__sub_801D2CC4)((void *) (arg0 + 0x428), (f32) (lbl_805DC3A4));
                }
            } else if (M2C_FIELD(arg0, f32 *, 0xC0) < TObjPlayer__data_805DC36C) {
                ((M2C_UNK (*)(void *, f32))TObjPlayer__sub_801D2CC4)((void *) (arg0 + 0x428), (f32) (lbl_805DC3A0));
            }
        }
        ((M2C_UNK (*)(void *))TObjPlayer__sub_801D2CAC)((void *) (arg0 + 0x428));
        if (TObjPlayer__sub_80082300((void *) (arg0 + 0x428)) < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFBF);
        }
        break;
    case 2:
        if (((s32 (*)(void *, f32))objInBand__FP7GameObjf)((void *) (arg0), (f32) (M2C_FIELD(temp_r3, f32 *, 0xC))) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            ((void (*)(void *, s32))TObjPlayer__sub_8011E204)((void *) (arg0), (int) (0x80));
            ((M2C_UNK (*)(void *))set_action_flag_40__10TObjPlayerFPv)((void *) (arg0));
            if (obj_isState2_324((void *) (arg0)) == 0) {
                ((M2C_UNK (*)(void *))pay_tp_and_send_6x48_cast__10TObjPlayerFPv)((void *) (arg0));
            }
        }
        break;
    case 4:
        ((M2C_UNK (*)(void *))TObjPlayer__sub_801D2CAC)((void *) (arg0 + 0x428));
        if (TObjPlayer__sub_80082300((void *) (arg0 + 0x428)) < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 5;
            M2C_FIELD(arg0, s16 *, 0xB8) = ((s16 (*)(void *))get_idle_animation__10TObjPlayerFPv)((void *) (arg0));
            clear_status_bit6__10TObjPlayerFPv((void *) (arg0));
        }
        break;
    }
    if (resolve_move_collision__10TObjPlayerFPv((void *) (arg0)) == 0U) {
        ((M2C_UNK (*)(void *))apply_velocity__10TObjPlayerFPv)((void *) (arg0));
    }
}

void enter_technique_cast__10TObjPlayerFPv(Player_801CD424 *self) {
    TechData_801CD424 *td;
    u16 target;
    Obj_801CD424 *o;
    self->f33c = 8;
    ((void (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(self, self->f326, 6);
    td = ((TechData_801CD424 * (*)(void *))get_technique_data__10TObjPlayerFPv)(self->techs);
    target = td->target;
    if (target == 0xFFFF || target == (u16)((s32 (*)(void *))obj_getField1c)(self) ||
        get_section_clamped__10TObjPlayerFPv(self->techs) == 0) {
        self->f3f0 = self->f60;
    } else {
        o = ((Obj_801CD424 * (*)(u16))find_entity_by_id)(target);
        if (o == 0) {
            td->target = 0xFFFF;
        } else {
            ((void (*)(void *, void *))copy_position__10TObjPlayerFPv)(self->f744, o->nodes[td->node].pos);
            self->f3f0 = calc_angle_to__10TObjPlayerFPvPv(get_position_ptr__10TObjPlayerFPv(self),
                                                         get_field4_ptr__10TObjPlayerFPv(self->f744));
        }
    }
    obj_setFlags30(self, 0x400000);
    ((void (*)(void *))TObjPlayer__sub_8001053C)(self);
    self->f328 = 0;
    if (obj_isState2_324(self) != 0) {
        self->fba = ((s16 (*)(void))ret_801D26AC)();
    }
    ((void (*)(void *, s16, s16))set_action_state__10TObjPlayerFPvss)(self, 8, get_status__10TObjPlayerFPv(self));
}

void handle_6x8D_set_technique_level_override(void *arg0) {
    Msg_801CD6BC m;
    u8 *p;
    ((void (*)(void *))TObjPlayer__sub_801D22AC)(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D2260)(&m, arg0);
    swap_field6__10TObjPlayerFPv(&m);
    if (validate_6x8D_set_technique_level_override(&m) != 0) {
        p = get_player_by_client_id(m.id);
        if (p != NULL) {
            set_tech_override__10TObjPlayerFPvUc(p + 0x428, m.level);
        }
    }
}

void request_technique_cast__10TObjPlayerFPv(Player_801CD72C *self) {
    u8 hi;
    u8 lo;
    Msg1_801CD72C m1;
    Msg2_801CD72C m2;
    TechData_801CD424 *td;
    s16 tech;
    s32 i;
    s32 count;
    TechData_801CD424 *src;
    u32 *dst;
    ((void (*)(s32, void *))capture_technique_targets__10TObjPlayerFv)(get_or_init_field_4__10TObjPlayerFPv(self->techs), self);
    if (self->cursor != NULL) {
        td = ((TechData_801CD424 * (*)(void *))get_technique_data__10TObjPlayerFPv)(self->techs);
        ((void (*)(void *, u16, s16))set_cursor_pos__11TMainCursorFiUsi)(self->cursor, td->target, td->node);
    }
    tech = get_or_init_field_4__10TObjPlayerFPv(self->techs);
    ((void (*)(u8, u8 *, u8 *))split_capped_value__10TObjPlayerFUcPvPv)(get_cast_technique_level(self->techs, tech), &hi, &lo);
    if (self == NULL || obj_isState2_324(self) == 0) {
        ((void (*)(void *))TObjPlayer__sub_801D22AC)(&m1);
        m1.id = ((s32 (*)(void *))obj_getField1c)(self);
        m1.level = lo;
        send_swap_field6__10TObjPlayerFPv(&m1);
        init_cast_technique_cmd__10TNpcPlayerFPv(&m2);
        m2.id = ((s32 (*)(void *))obj_getField1c)(self);
        m2.tech = tech;
        m2.lv = hi;
        count = get_section_clamped__10TObjPlayerFPv(self->techs);
        m2.count = count;
        src = ((TechData_801CD424 * (*)(void *))get_technique_data__10TObjPlayerFPv)(self->techs);
        dst = m2.data;
        for (i = 0; i < count; i++) {
            copy_tech_params__10TObjPlayerFPvPv(dst++, src++);
        }
        finalize_and_send_packet__10TNpcPlayerFPv(&m2);
    }
}

void check_anim_done__10TObjPlayerFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (((s32 (*)(void))is_anim_finished__10TObjPlayerFPv)() != 0)) {
        ((s32 (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 0);
    }
}

void update_state5_action__10TObjPlayerFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (((s32 (*)(void))is_anim_finished__10TObjPlayerFPv)() != 0)) {
        ((s32 (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 0);
    }
}

void TObjPlayer__sub_801CD904(void) {  }

int apply_status_action_a__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void dispatch_technique_cast_state__10TObjPlayerFis(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))apply_status_action_a__10TObjPlayerFPv)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801CD904)();
        return;
      case 3:
        ((s32 (*)(void *))update_state5_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void *))check_anim_done__10TObjPlayerFPv)((void *) arg0);
        return;
      case 5:
        ((s32 (*)(void *))request_technique_cast__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))enter_technique_cast__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))update_technique_cast__10TObjPlayerFPv)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))exit_technique_cast__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void reset_linked_obj__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    ((M2C_UNK (*)(void))TObjPlayer__sub_8001053C)();
    ((M2C_UNK (*)(void *))clear_status_bit6__10TObjPlayerFPv)(arg0);
    temp_r4 = M2C_FIELD(arg0, void **, 0x424);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
}

int TObjPlayer__sub_801CD9F0(void* p) { return ((int (*)(void*))update_action_state__10TObjPlayerFPv)(p); }

void enter_attack_stage3__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 7;
    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    ((M2C_UNK (*)(void *, void *))set_action_type__10TObjPlayerFPvs)((void *) (arg0 + 0x7CC), (void *) (((s32 (*)(void *))TObjPlayer__sub_801D2F0C)((void *) (arg0 + 0x7CC))));
    ((M2C_UNK (*)(void *, void *))query_field_340__10TObjPlayerFPv)((void *) (arg0), (void *) (((u8 (*)(void *))TObjPlayer__sub_801D2F4C)((void *) (arg0 + 0x7CC))));
    ((M2C_UNK (*)(void *, void *, int, int))begin_player_attack)((void *) (arg0 + 0x7CC), (void *) (arg0), (int) (2), (int) (2));
    ((M2C_UNK (*)(void *))setup_attack_stage__10TObjPlayerFPv)((void *) (arg0));
    ((M2C_UNK (*)(void *, int, void *))set_action_state__10TObjPlayerFPvss)((void *) (arg0), (int) (7), (void *) (get_model_state__10TObjPlayerFPv((void *) (arg0))));
    apply_speed_scale__10TObjPlayerFif((void *) (arg0), (f32) (((f32 (*)(void *))get_action_rate_entry)((void *) (arg0)) * get_attack_controller_rate((void *) (arg0 + 0x7CC))));
}

void handle_6x45_attack(void *src) {
    Pkt_801CDAD8 pkt;
    u8 *player;
    TNpcPlayer__sub_80152B08(&pkt);
    ((void (*)(Pkt_801CDAD8 *, void *))TObjPlayer__sub_801D2304)(&pkt, src);
    bswap_6x45_packet(&pkt);
    if (validate_6x45_attack(&pkt) == 0) return;
    player = get_player_by_client_id(pkt.player);
    if (player == 0) return;
    if (is_in_tl03_state__10TObjPlayerFPv(player) == 0) return;
    if (reset_volopt_state__10TObjPlayerFv(player) == 0) return;
    if (test_action_mask__10TObjPlayerFPvi(player, 0x8200) != 0) return;
    set_action_type__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
        set_attack_target__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
    *(s32 *)(player + 0x3F0) = pkt.heading;
    ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(player, 7, 0);
}

void send_attack_stage3_request__10TObjPlayerFPv(u8 *arg0) {
    s16 sp8[4];
    s16 temp_r31;
    u8 *temp_r5;
    void *position;
    s32 var_r4;
    u8 *temp_r3;
    u8 *temp_r4;
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x424));
    if (temp_r4 != NULL) {
        temp_r3 = (u8 *)(resolve_hittable_target(M2C_FIELD(temp_r4, u16 *, 0x508), M2C_FIELD(temp_r4, s16 *, 0x50A)));
        if (temp_r3 != NULL) {
            position = get_position_ptr__10TObjPlayerFPv(arg0);
            temp_r5 = M2C_FIELD(temp_r3, u8 **, 0xA4);
            var_r4 = calc_angle_to__10TObjPlayerFPvPv(position, &((Rec_801CDBA0 *)temp_r5)[M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x424), s16 *, 0x50A)].pos);
        } else {
            var_r4 = M2C_FIELD(arg0, s32 *, 0x60);
        }
        temp_r31 = calc_scaled_value__10TObjPlayerFii((void *) (arg0), (int) (var_r4));
        if ((arg0 == NULL) || (obj_isState2_324((void *) (arg0)) == 0)) {
            ((M2C_UNK (*)(void *))TNpcPlayer__sub_80152B08)((void *) (&sp8));
            sp8[1] = obj_getField1c((void *) (arg0));
            sp8[2] = temp_r31;
            sp8[3] = TObjPlayer__sub_801D2F0C((void *) (arg0 + 0x7CC));
            update__10TNpcPlayerFPv((void *) (&sp8));
        }
    }
}

void TObjPlayer__sub_801CDC68(void) {  }

void finish_attack_stage3__10TObjPlayerFPv(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x328) == 4) {
        if (((s32 (*)(void))is_anim_finished__10TObjPlayerFPv)() != 0) {
            ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *) (arg0), (int) (1), (int) (5));
        }
    } else if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (test_flags_any((void *)(((M2C_UNK (*)(void *))get_anim_field_c__10TObjPlayerFPv)((void *) (arg0 + 0x7CC))), (int) (1)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 4;
            M2C_FIELD(arg0, s16 *, 0xB8) = ((s16 (*)(void *))get_idle_animation__10TObjPlayerFPv)((void *) (arg0));
            ((M2C_UNK (*)(void *))clear_status_bit6__10TObjPlayerFPv)((void *) (arg0));
        }
    }
}

void check_attack_stage3_input__10TObjPlayerFv(void) {  }

int try_apply_status_action_1__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void run_attack_stage3_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))try_apply_status_action_1__10TObjPlayerFPv)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))check_attack_stage3_input__10TObjPlayerFv)();
        return;
      case 3:
        ((s32 (*)(void *))finish_attack_stage3__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801CDC68)();
        return;
      case 5:
        ((s32 (*)(void *))send_attack_stage3_request__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))enter_attack_stage3__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))TObjPlayer__sub_801CD9F0)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))reset_linked_obj__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void reset_target_link__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    ((M2C_UNK (*)(void))TObjPlayer__sub_8001053C)();
    ((M2C_UNK (*)(void *))clear_status_bit6__10TObjPlayerFPv)(arg0);
    temp_r4 = M2C_FIELD(arg0, void **, 0x424);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
}

int TObjPlayer__sub_801CDDEC(void* p) { return ((int (*)(void*))update_action_state__10TObjPlayerFPv)(p); }

void enter_attack_stage2__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 6;
    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    ((M2C_UNK (*)(void *, void *))set_action_type__10TObjPlayerFPvs)((void *) (arg0 + 0x7CC), (void *) (((s32 (*)(void *))TObjPlayer__sub_801D2F0C)((void *) (arg0 + 0x7CC))));
    ((M2C_UNK (*)(void *, void *))query_field_340__10TObjPlayerFPv)((void *) (arg0), (void *) (((u8 (*)(void *))TObjPlayer__sub_801D2F4C)((void *) (arg0 + 0x7CC))));
    ((M2C_UNK (*)(void *, void *, int, int))begin_player_attack)((void *) (arg0 + 0x7CC), (void *) (arg0), (int) (1), (int) (1));
    ((M2C_UNK (*)(void *))setup_attack_stage__10TObjPlayerFPv)((void *) (arg0));
    ((M2C_UNK (*)(void *, int, void *))set_action_state__10TObjPlayerFPvss)((void *) (arg0), (int) (6), (void *) (get_state__10TObjPlayerFPv((void *) (arg0))));
    apply_speed_scale__10TObjPlayerFif((void *) (arg0), (f32) (((f32 (*)(void *))get_action_rate_entry)((void *) (arg0)) * get_attack_controller_rate((void *) (arg0 + 0x7CC))));
}

void handle_6x44_attack(void *src) {
    Pkt_801CDED4 pkt;
    u8 *player;
    TNpcPlayer__sub_80152B98(&pkt);
    ((void (*)(Pkt_801CDED4 *, void *))TObjPlayer__sub_801D2348)(&pkt, src);
    bswap_6x44_packet(&pkt);
    if (validate_6x44_attack(&pkt) == 0) return;
    player = get_player_by_client_id(pkt.player);
    if (player == 0) return;
    if (is_in_tl03_state__10TObjPlayerFPv(player) == 0) return;
    if (reset_volopt_state__10TObjPlayerFv(player) == 0) return;
    if (test_action_mask__10TObjPlayerFPvi(player, 0x8200) != 0) return;
    set_action_type__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
        set_attack_target__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
    *(s32 *)(player + 0x3F0) = pkt.heading;
    ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(player, 6, 0);
}

void send_attack_stage2_request__10TObjPlayerFPv(u8 *arg0) {
    s16 sp8[4];
    s16 temp_r31;
    u8 *temp_r5;
    void *position;
    s32 var_r4;
    u8 *temp_r3;
    u8 *temp_r4;
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x424));
    if (temp_r4 != NULL) {
        temp_r3 = (u8 *)(resolve_hittable_target(M2C_FIELD(temp_r4, u16 *, 0x508), M2C_FIELD(temp_r4, s16 *, 0x50A)));
        if (temp_r3 != NULL) {
            position = get_position_ptr__10TObjPlayerFPv(arg0);
            temp_r5 = M2C_FIELD(temp_r3, u8 **, 0xA4);
            var_r4 = calc_angle_to__10TObjPlayerFPvPv(position, &((Rec_801CDF9C *)temp_r5)[M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x424), s16 *, 0x50A)].pos);
        } else {
            var_r4 = M2C_FIELD(arg0, s32 *, 0x60);
        }
        temp_r31 = calc_scaled_value__10TObjPlayerFii((void *) (arg0), (int) (var_r4));
        if ((arg0 == NULL) || (obj_isState2_324((void *) (arg0)) == 0)) {
            ((M2C_UNK (*)(void *))TNpcPlayer__sub_80152B98)((void *) (&sp8));
            sp8[1] = obj_getField1c((void *) (arg0));
            sp8[2] = temp_r31;
            sp8[3] = TObjPlayer__sub_801D2F0C((void *) (arg0 + 0x7CC));
            update_players__10TNpcPlayerFPv((void *) (&sp8));
        }
    }
}

void TObjPlayer__sub_801CE064(void) {  }

void finish_attack_stage2__10TObjPlayerFPv(Player_801CE068 *self) {
    if (self->state == 4) {
        if (is_anim_finished__10TObjPlayerFPv(self) != 0) {
            ((void (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(self, 1, 5);
        }
    } else if ((self->flags & 0x10) &&
               ((s32 (*)(void *, s32))test_flags_any)(get_anim_field_c__10TObjPlayerFPv(self->act), 1) != 0) {
        switch (((s16 (*)(void *))get_validated_attack_stage)(self->act)) {
        case 0:
        case 1:
            self->state = 4;
            clear_status_bit6__10TObjPlayerFPv(self);
            self->anim = ((s16 (*)(void *))get_idle_animation__10TObjPlayerFPv)(self);
            break;
        case 2:
            ((void (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(self, 7, 5);
            break;
        }
    }
}

void TObjPlayer__sub_801CE134(s32 arg0) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(void))TObjPlayer__sub_801CEAC8)();
    if (temp_r3 != -1) {
        ((s32 (*)(s32, s32, s32, s32))queue_physical_attack_input)(arg0 + 0x7CC, arg0, temp_r3, 2);
    }
}

int apply_status_action__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void run_attack_stage2_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  int new_var2;
  void *new_var;
  new_var2 = ((u32) arg1) <= 8U;
  {
    new_var = (void *) arg0;
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))apply_status_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void *))TObjPlayer__sub_801CE134)((void *) arg0);
        return;
      case 3:
        ((s32 (*)(void *))finish_attack_stage2__10TObjPlayerFPv)(new_var);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801CE064)();
        return;
      case 5:
        ((s32 (*)(void *))send_attack_stage2_request__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))enter_attack_stage2__10TObjPlayerFPv)(new_var);
        return;
      case 1:
        ((s32 (*)(void *))TObjPlayer__sub_801CDDEC)(new_var);
        return;
      case 6:
        ((s32 (*)(void *))reset_target_link__10TObjPlayerFPv)(new_var);
        break;
    }
  }
}

void start_attack_preparation__10TObjPlayerFPv(u8 *arg0) {
    void *p;
    switch (((s16 (*)(void *))TObjPlayer__sub_801D2F4C)(arg0 + 0x7CC)) {
    case 0:
        *(s16 *)(arg0 + 0x328) = 3;
        break;
    case 1:
        *(s16 *)(arg0 + 0x328) = 1;
        ((M2C_UNK (*)(void *, u32))set_state_flags__10TObjPlayerFPvUi)(arg0, 0x80);
        ((M2C_UNK (*)(void *))request_heavy_attack_particles__10TObjPlayerFPv)(arg0 + 0x384);
        lbl_8050BEE0[1] = lbl_8050BEE0[0] = 0.0f;
        lbl_8050BFE0[0] = lbl_8050BEE0[2] = 1.0f;
        lbl_8050BFE0[2] = lbl_8050BFE0[1] = lbl_805DC3A8;
        lbl_8050BFE0[3] = 1.0f;
        p = ((void * (*)(u32))__nw__7TObjectFUl)(0x64);
        if (p != NULL) {
            construct_actor_light_task(p, lbl_8050BFE0, lbl_8050BEE0, 8, arg0, TObjPlayer__data_805DC39C, tl_07);
        }
        publish_actor_light_scalars(obj_getField1c(arg0), TObjPlayer__data_805DC360, TObjPlayer__data_805DC3AC);
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x1AD1C);
        break;
    case 2:
        *(s16 *)(arg0 + 0x328) = 1;
        ((M2C_UNK (*)(void *, u32))set_state_flags__10TObjPlayerFPvUi)(arg0, 0x80);
        dispatch_weapon_special_effect(arg0, 0, 0, 0);
        lbl_8050BEE0[1] = lbl_8050BEE0[0] = 0.0f;
        lbl_8050BFE0[0] = lbl_8050BEE0[2] = 1.0f;
        lbl_8050BFE0[2] = lbl_8050BFE0[1] = lbl_805DC3A8;
        lbl_8050BFE0[3] = 1.0f;
        p = ((void * (*)(u32))__nw__7TObjectFUl)(0x64);
        if (p != NULL) {
            construct_actor_light_task(p, lbl_8050BFE0, lbl_8050BEE0, 8, arg0, TObjPlayer__data_805DC39C, tl_07);
        }
        publish_actor_light_scalars(obj_getField1c(arg0), TObjPlayer__data_805DC360, TObjPlayer__data_805DC3AC);
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x1AD1D);
        break;
    }
}

void setup_attack_stage__10TObjPlayerFPv(u8 *arg0) {
    *(s16 *)(arg0 + 0x328) = 0;
    switch (((s16 (*)(void *))TObjPlayer__sub_801D2F4C)(arg0 + 0x7CC)) {
    case 0:
        if (((s16 (*)(void *))get_validated_attack_stage)(arg0 + 0x7CC) == 0) {
            ((void (*)(void *, f32))TObjPlayer__sub_801D2658)(arg0, TObjPlayer__data_805DC3AC);
        }
        break;
    case 1:
    case 2:
        if (((s16 (*)(void *))get_validated_attack_stage)(arg0 + 0x7CC) == 0) {
            ((void (*)(void *, f32))TObjPlayer__sub_801D2658)(arg0, TObjPlayer__data_805DC39C);
        }
        break;
    }
}

void handle_6x46_attack_finished(s32 arg0) {
    u16 sp8[0x18];
    Player_801CE928 *pl;
    Item_801CE928 *it;
    ((M2C_UNK (*)(void *))build_packet_header__10TObjPlayerFPv)(sp8);
    ((M2C_UNK (*)(void *, s32))TObjPlayer__sub_801D2BB8)(sp8, arg0);
    ((M2C_UNK (*)(void *))bswap_field4_sub__10TObjPlayerFPv)(sp8);
    if (validate_6x46_attack_finished(sp8) != 0 && (pl = ((Player_801CE928 * (*)(u16))get_player_by_client_id)(sp8[1])) != NULL &&
        ((s32 (*)(void))is_in_tl03_state__10TObjPlayerFPv)() != 0 && reset_volopt_state__10TObjPlayerFv(pl) != 0) {
        ((M2C_UNK (*)(void *, void *))on_attack_finished__10TObjPlayerFPv)((u8 *)pl + 0x7CC, &sp8[2]);
        it = get_item_field_6__10TObjPlayerFPv(pl);
        if (it != NULL) {
            it->v28();
            return;
        }
        if (pl->v65((*(f32 *)&TObjPlayer__data_805DC360)) == 0) {
            send_field_state_if_active__10TObjPlayerFii(pl, 0x4001A80C);
        }
    }
}

void send_attack_target_packet__10TObjPlayerFUi(u32 arg0) {
    s16 sp8[0x14];
    if (((obj_isState2_324((void *) (arg0)) == 0) || (reset_volopt_state__10TObjPlayerFv((void *) (arg0)) != 0)) && ((((s32 (*)(void *))obj_isState3_324)((void *) (arg0)) != 0) || (((u32 (*)(void *, void *))capture_lockon_targets)((void *) (arg0 + 0x7CC), (void *) (arg0)) != 0U)) && (test_flag_2000000__10TObjPlayerFPv((void *) (arg0)) == 0) && ((arg0 == 0U) || (obj_isState2_324((void *) (arg0)) == 0))) {
        ((M2C_UNK (*)(void *))build_packet_header__10TObjPlayerFPv)((void *) (sp8));
        sp8[1] = obj_getField1c((void *) (arg0));
        copy_attack_targets((void *) (&sp8[2]), (void *) (get_state_ptr__10TObjPlayerFPv((void *) (arg0 + 0x7CC))));
        ((M2C_UNK (*)(void *))send_6x46_attack_finished)((void *) (sp8));
    }
}

s32 TObjPlayer__sub_801CEAC8(u8 *self) {
    s32 r = -1;
    if (TObjPlayer__sub_801B5AF8(self, 1) == 2 && ((s32 (*)(void *, s32))check_action_usable__10TObjPlayerFPvi)(self + 0x550, 4) != 0) {
        r = 1;
    }
    if (TObjPlayer__sub_801B5AF8(self, 2) == 2 && ((s32 (*)(void *, s32))check_action_usable__10TObjPlayerFPvi)(self + 0x550, 0x400) != 0 &&
        TObjPlayer__sub_80354D5C(obj_getField1c(self)) == 0) {
        r = 2;
    }
    if (TObjPlayer__sub_801B5AF8(self, 3) == 2 && ((s32 (*)(void *, s32))check_action_usable__10TObjPlayerFPvi)(self + 0x550, 2) != 0) {
        r = 3;
    }
    return ((s32 (*)(void *, s32))check_mode_action__10TObjPlayerFii)(self, get_action_palette_entry__10TObjPlayerFii(self, r)) != 0 ? r : -1;
}

s32 check_mode_action__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (arg1 == 2) {
        if (((u32 (*)(void))get_item_field_6__10TObjPlayerFPv)() != 0U) {
            if (weapon_has_extra_attack() == 0) {
                return 0;
            }
            goto block_5;
        }
        return 0;
    }
block_5:
    return can_perform_physical_action__10TObjPlayerFi(arg0);
}

s32 can_perform_physical_action__10TObjPlayerFi(s32 arg0) {
    if ((((s32 (*)(void *, int))obj_testFlags30)((void *) (arg0), (int) (0x20006)) != 0) || (((s32 (*)(void *, int))obj_testFlags30)((void *) (arg0), (int) (0x02000000)) != 0) || (((s32 (*)(void *, int))check_flag__10TObjPlayerFPvi)((void *) (arg0), (int) (2)) != 0) || (((s32 (*)(void *, int))test_action_mask__10TObjPlayerFPvi)((void *) (arg0), (int) (0x548000)) != 0) || ((is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) && ((check_flag_100__10TObjPlayerFPv((void *) (arg0)) != 0) || (((s32 (*)(void *))get_camera_field__10TObjPlayerFPv)((void *) (arg0)) == 0))) || (reset_volopt_state__10TObjPlayerFv((void *) (arg0)) == 0)) {
        return 0;
    }
    return 1;
}

void update_by_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r3;

    temp_r3 = get_handle_value__10TObjPlayerFPv();
    switch (temp_r3) {
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            ((M2C_UNK (*)(void *))set_flag_1_at_c__10TObjPlayerFPv)(arg0 + 0x7CC);
        }
        return;
    case 8:
        ((M2C_UNK (*)(void *))update_if_flag8_set__10TObjPlayerFi)(arg0 + 0x7CC);
        return;
    default:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            ((M2C_UNK (*)(void *))tick_countdown_timer__10TObjPlayerFPv)(arg0 + 0x7CC);
        }
        break;
    }
}

void apply_movement_if_ready__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r3;

    temp_r3 = get_handle_value__10TObjPlayerFPv();
    if ((temp_r3 != 0x11) && ((temp_r3 >= 0x11) || (temp_r3 >= 0xA) || (temp_r3 < 6)) && (is_flag_b0_4__10TObjPlayerFPv(arg0) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA)) && (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20000000) && (((s32 (*)(void *))TObjPlayer__sub_801D2680)(arg0) == 0)) {
        if (TObjPlayer__data_805DC36C > sample_attack_root_motion(arg0, arg0 + 0x308, arg0 + 0x310)) {
            TObjPlayer__sub_8001053C(arg0);
        }
        if (check_actor_blocking_move__10TObjPlayerFPv(arg0) != 0) {
            TObjPlayer__sub_8001053C(arg0);
        }
        if (resolve_move_collision__10TObjPlayerFPv(arg0) == 0U) {
            ((M2C_UNK (*)(void *))apply_velocity__10TObjPlayerFPv)(arg0);
        }
    }
}

void update_anim_action__10TObjPlayerFPv(u8 *arg0) {
    ((M2C_UNK (*)(void))get_item_field_6__10TObjPlayerFPv)();
    if (((s16 (*)(void *))get_handle_value__10TObjPlayerFPv)(arg0) != 8) {
        select_normal_attack_marker__10TObjPlayerFPv(arg0);
        if (objInBand__FP7GameObjf(arg0) != 0) {
            ((M2C_UNK (*)(void *))send_attack_target_packet__10TObjPlayerFUi)(arg0);
            ((M2C_UNK (*)(void *))increment_strike_counter__10TObjPlayerFPv)(arg0 + 0x7CC);
            ((M2C_UNK (*)(void *, void *))apply_anim_action__10TObjPlayerFPvi)(arg0 + 0x7CC, arg0);
        }
    } else {
        if (((s32 (*)(s32, s32))test_flags_any)(((M2C_UNK (*)(void *))get_anim_field_c__10TObjPlayerFPv)(arg0 + 0x7CC), 8) == 0) {
            select_normal_attack_marker__10TObjPlayerFPv(arg0);
            if (objInBand__FP7GameObjf(arg0) != 0) {
                ((M2C_UNK (*)(void *))send_attack_target_packet__10TObjPlayerFUi)(arg0);
                increment_burst_counter(arg0 + 0x7CC);
                if (get_anim_state__10TObjPlayerFPv(arg0 + 0x7CC) >= 3) {
                    ((M2C_UNK (*)(s32, s32))set_flags__10TObjPlayerFPvUi)(((M2C_UNK (*)(void *))get_anim_field_c__10TObjPlayerFPv)(arg0 + 0x7CC), 8);
                    ((M2C_UNK (*)(void *, void *))apply_anim_action__10TObjPlayerFPvi)(arg0 + 0x7CC, arg0);
                    ((M2C_UNK (*)(void *))set_action_flag_40__10TObjPlayerFPv)(arg0);
                    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x10);
                }
            }
        }
    }
}

void update_action_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r31;

    M2C_FIELD(arg0, s32 *, 0x60) = lerp_angle_half__10TObjPlayerFUsUs(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3F0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        ((M2C_UNK (*)(void *))start_attack_preparation__10TObjPlayerFPv)(arg0);
    case 1:
        if (is_anim_finished__10TObjPlayerFPv(arg0) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            ((M2C_UNK (*)(void *))set_action_flag_40__10TObjPlayerFPv)(arg0);
        }
    case 4:
        return;
    case 2:
        temp_r31 = get_field_1c__10TObjPlayerFPv(arg0 + 0x7CC) - 1;
        if (temp_r31 < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            ((M2C_UNK (*)(void *))clear_status_bit6__10TObjPlayerFPv)(arg0);
        }
        ((M2C_UNK (*)(void *, s32))set_action_type__10TObjPlayerFPvi)(arg0 + 0x7CC, temp_r31);
        return;
    case 3:
        ((M2C_UNK (*)(void *))update_anim_action__10TObjPlayerFPv)(arg0);
        ((M2C_UNK (*)(void *))apply_movement_if_ready__10TObjPlayerFPv)(arg0);
        ((M2C_UNK (*)(void *))update_by_state__10TObjPlayerFPv)(arg0);
        break;
    }
}

void reset_lockon__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    ((M2C_UNK (*)(void))TObjPlayer__sub_8001053C)();
    ((M2C_UNK (*)(void *))clear_status_bit6__10TObjPlayerFPv)(arg0);
    temp_r4 = M2C_FIELD(arg0, void **, 0x424);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
}

void update_action_state__10TObjPlayerFv(void) {
    ((M2C_UNK (*)(void))update_action_state__10TObjPlayerFPv)();
}

void enter_attack_stage1__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 5;
    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    TObjPlayer__sub_8001053C((void *) (arg0));
    ((M2C_UNK (*)(void *, void *, int, int))begin_player_attack)((void *) (arg0 + 0x7CC), (void *) (arg0), (int) (0), (int) (0));
    ((M2C_UNK (*)(void *))setup_attack_stage__10TObjPlayerFPv)((void *) (arg0));
    ((M2C_UNK (*)(void *, int, void *))set_action_state__10TObjPlayerFPvss)((void *) (arg0), (int) (5), (void *) (call_subobject_m15__10TObjPlayerFPv((void *) (arg0))));
    apply_speed_scale__10TObjPlayerFif((void *) (arg0), (f32) (((f32 (*)(void *))get_action_rate_entry)((void *) (arg0)) * get_attack_controller_rate((void *) (arg0 + 0x7CC))));
}

void handle_6x43_attack(void *src) {
    Pkt_801CF128 pkt;
    u8 *player;
    TNpcPlayer__sub_80152C28(&pkt);
    ((void (*)(Pkt_801CF128 *, void *))TObjPlayer__sub_801D24B0)(&pkt, src);
    bswap_6x43_packet(&pkt);
    if (validate_6x43_attack(&pkt) == 0) return;
    player = get_player_by_client_id(pkt.player);
    if (player == 0) return;
    if (is_in_tl03_state__10TObjPlayerFPv(player) == 0) return;
    if (reset_volopt_state__10TObjPlayerFv(player) == 0) return;
    if (test_action_mask__10TObjPlayerFPvi(player, 0x8200) != 0) return;
    set_action_type__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
    *(s32 *)(player + 0x3F0) = pkt.heading;
    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(player, 5, 0);
}

}
void TObjPlayer::request_normal_attack_stage1() {
    u8* arg0 = reinterpret_cast<u8*>(this);
    f32 sp10[3];
    s16 sp8[4];
    s16 temp_r31;
    s32 var_r4;
    if ((reset_volopt_state__10TObjPlayerFv(arg0) != 0) && (((u32 (*)(void *, void *))capture_lockon_targets)((void *) (arg0 + 0x7CC), (void *) (arg0)) != 0U)) {
        if (((s32 (*)(void *, void *))get_first_target_position__10TObjPlayerFPvPv)((void *) (arg0 + 0x7CC), (void *) (&sp10)) != 0) {
            var_r4 = calc_angle_to__10TObjPlayerFPvPv(get_position_ptr__10TObjPlayerFPv(arg0), sp10);
        } else {
            var_r4 = M2C_FIELD(arg0, s32 *, 0x60);
        }
        temp_r31 = calc_scaled_value__10TObjPlayerFii((void *) (arg0), (int) (var_r4));
        if ((arg0 == NULL) || (obj_isState2_324((void *) (arg0)) == 0)) {
            TNpcPlayer__sub_80152C28((void *) (&sp8));
            sp8[1] = obj_getField1c((void *) (arg0));
            sp8[2] = temp_r31;
            sp8[3] = ((s16 (*)(void *))TObjPlayer__sub_801D2F4C)((void *) (arg0 + 0x7CC));
            update_lobby__10TNpcPlayerFPv((void *) (&sp8));
        }
    }
}

extern "C" {
void TObjPlayer__sub_801CF2AC(void) {  }

void finish_attack_stage1__10TObjPlayerFPv(Player_801CF2B0 *self) {
    if (self->state == 4) {
        if (is_anim_finished__10TObjPlayerFPv(self) != 0) {
            ((void (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(self, 1, 5);
        }
    } else if ((self->flags & 0x10) &&
               ((s32 (*)(void *, s32))test_flags_any)(get_anim_field_c__10TObjPlayerFPv(self->act), 1) != 0) {
        switch (((s16 (*)(void *))get_validated_attack_stage)(self->act)) {
        case 0:
            self->state = 4;
            clear_status_bit6__10TObjPlayerFPv(self);
            self->anim = ((s16 (*)(void *))get_idle_animation__10TObjPlayerFPv)(self);
            break;
        case 1:
        case 2:
            ((void (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(self, 6, 5);
            break;
        }
    }
}

void update_active_item__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(void))TObjPlayer__sub_801CEAC8)();
    if (temp_r3 != -1) {
        ((s32 (*)(s32, s32, s32, s32))queue_physical_attack_input)(arg0 + 0x7CC, arg0, temp_r3, 1);
    }
}

int TObjPlayer__sub_801CF3C0(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void run_attack_stage1_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))TObjPlayer__sub_801CF3C0)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void *))update_active_item__10TObjPlayerFi)((void *) arg0);
        return;
      case 3:
        ((s32 (*)(void *))finish_attack_stage1__10TObjPlayerFPv)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801CF2AC)();
        return;
      case 5:
        request_normal_attack_stage1__10TObjPlayerFv((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))enter_attack_stage1__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))update_action_state__10TObjPlayerFv)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))reset_lockon__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

s32 update_aim_target__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    s32 temp_r3;

    if (is_inactive__10TObjPlayerFPv() == 0) {
        return 0;
    }
    temp_f1 = lbl_805DC3B0 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x3F0));
    M2C_FIELD(arg0, f32 *, 0x308) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805DC36C;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) (lbl_805DC3B0 * ((f32 (*)(s32, f32, f32))cos_table_lookup)(M2C_FIELD(arg0, s32 *, 0x3F0), temp_f1, lbl_805DC3B0));
    if (check_actor_blocking_move__10TObjPlayerFPv(arg0) != 0) {
        ((int (*)(void*))TObjPlayer__sub_8001053C)((void*)(arg0));
        return 0;
    }
    temp_r3 = ((s32 (*)(void *))resolve_move_collision__10TObjPlayerFPv)(arg0);
    if (temp_r3 == 0) {
        return 1;
    }
    if ((is_locally_controlled__10TObjPlayerFPv(arg0) != 0) && (check_player_flag1__6TLobbyFPv(arg0) == 0) && (temp_r3 == 4)) {
        return 1;
    }
    return 0;
}

void apply_damage_and_reset__10TObjPlayerFPv(void* p) { TObjEnePanarms__sub_800E2DE4(p, (void*)256); ((int (*)(void*))TObjPlayer__sub_8001053C)((void*)(p)); }

void update_run_movement__10TObjPlayerFPv(Plr_801CF56C *self) {
    s32 ang;
    f32 dist;
    self->target_rot = calc_angle_to__10TObjPlayerFPvPv(get_position_ptr__10TObjPlayerFPv(self), &self->tx);
    self->rot = approach_angle_adaptive(self->rot, self->target_rot);
    ang = lerp_angle_half__10TObjPlayerFUsUs(self->rot, self->target_rot);
    self->vx = TObjPlayer__sub_801BF814(self->motion) * sin_table_lookup(ang);
    self->vy = TObjPlayer__data_805DC36C;
    self->vz = TObjPlayer__sub_801BF814(self->motion) * cos_table_lookup(ang);
    dist = (self->tx - self->x) * (self->tx - self->x) + (self->tz - self->z) * (self->tz - self->z);
    if ((lbl_805DC3B4 * TObjPlayer__sub_801BF814(self->motion)) * (lbl_805DC3B4 * TObjPlayer__sub_801BF814(self->motion)) > dist) {
        set_flags__10TObjPlayerFPvUi(self->flags, 4);
    }
    if (((void * (*)(void *))resolve_move_collision__10TObjPlayerFPv)(self) == NULL) {
        ((void (*)(void *))apply_velocity__10TObjPlayerFPv)(self);
    } else {
        set_flags__10TObjPlayerFPvUi(self->flags, 4);
    }
    play_footstep_sound__10TObjPlayerFi(self, TObjPlayer__data_805DC360, lbl_805DC370);
    emit_footstep_effect__10TObjPlayerFiff(self, TObjPlayer__data_805DC360, lbl_805DC370);
}

void start_action__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f1;
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x33C) = 4;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    ((M2C_UNK (*)(void *))clear_id__10TObjPlayerFPv)(arg0 + 0x5EC);
    temp_r3 = get_vobj_state_28__10TObjPlayerFPv(arg0);
    if (is_matching_id__10TObjPlayerFPvs(arg0, temp_r3) != 0) {
        ((M2C_UNK (*)(void *))set_action_flag__10TObjPlayerFPv)(arg0);
    }
    apply_stat_multipliers_and_reset__10TObjPlayerFPv(arg0 + 0x5E0, arg0, lbl_805DC3B0);
    ((M2C_UNK (*)(void *, M2C_UNK, s16))set_action_state__10TObjPlayerFPvss)(arg0, 4, temp_r3);
    temp_f31 = TObjPlayer__sub_801D2858(arg0 + 0x5E0);
    temp_f1 = ((f32 (*)(void *))get_action_rate_entry)(arg0);
    TObjPlayer__sub_800A7798(arg0, temp_f1 * temp_f31);
}

void handle_6x42_move_to_position(void *pkt) {
    Cmd_801CF780 cmd;
    Player_801CF780 *p;
    reset_move_state__10TNpcPlayerFPv(&cmd);
    TObjPlayer__sub_801D2964(&cmd, pkt);
    init_model__10TNpcPlayerFPv(&cmd);
    if (validate_6x42_move_to_position(&cmd) != 0) {
        p = (Player_801CF780 *)((void * (*)(s32))get_player_by_client_id)(cmd.id);
        if (p != 0 && is_in_tl03_state__10TObjPlayerFPv(p) != 0 && test_action_mask__10TObjPlayerFPvi(p, 0x1E) != 0) {
            p->x = cmd.x;
            p->z = cmd.z;
            ((void (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(p, 4, 0);
        }
    }
}

void send_6x42_run_to_position__10TObjPlayerFPv(Npc_801CF824 *arg0) {
    Msg_801CF824 m;
    if (((s32 (*)(void))update_aim_target__10TObjPlayerFPv)() != 0) {
        ((void (*)(void *, s32, void *, void *))calc_movement_target__10TObjPlayerFPviPvPv)(arg0, arg0->f3f0, &arg0->x, &arg0->z);
        if ((arg0 == NULL) || (obj_isState2_324(arg0) == 0)) {
            reset_move_state__10TNpcPlayerFPv(&m);
            m.f2 = obj_getField1c(arg0);
            m.x = arg0->x;
            m.z = arg0->z;
            reset_model__10TNpcPlayerFPv(&m);
        }
    }
}

void handle_ring_release__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(s32, M2C_UNK))test_flags_any)(arg0 + 0x5EC, 4) != 0) {
        ((M2C_UNK (*)(s32, M2C_UNK))clear_flags__11TAdRicoRingFPvUi)(arg0 + 0x5EC, 4);
        ((M2C_UNK (*)(s32, M2C_UNK, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 0);
    }
}

void try_trigger_effect__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(s32, M2C_UNK))test_flags_any)(arg0 + 0x5EC, 4) != 0) {
        ((M2C_UNK (*)(s32, M2C_UNK))clear_flags__11TAdRicoRingFPvUi)(arg0 + 0x5EC, 4);
        ((M2C_UNK (*)(s32, M2C_UNK, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 5);
    }
}

void select_run_request__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31 = get_target_field_1c__10TObjPlayerFPv(arg0 + 0x550);
    temp_f31 = get_attached_float_24__10TObjPlayerFPv(arg0 + 0x550);
    if ((handle_palette_button_input__10TObjPlayerFPv(arg0) == 0) || (check_flag_48__10TObjPlayerFPv(arg0) == 0)) {
        if (temp_f31 < TObjPlayer__data_805DC368) {
            if (test_flags_any(arg0 + 0x5EC, 4) != 0) {
                ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 5);
                return;
            }
            return;
        } else {
            temp_r31_2 = ((s32 (*)(void *, int))calc_scaled_value__10TObjPlayerFii)(arg0, temp_r31);
            if ((((s32 (*)(void *, int))obj_testFlags30)(arg0, 0x100000) != 0) || (temp_f31 < TObjPlayer__data_805DC3AC)) {
                set_ring_action__10TObjPlayerFPvi(arg0 + 0x5E0, 0);
                if (test_flags_any(arg0 + 0x5EC, 4) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3F0) = temp_r31_2;
                    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, 2, 5);
                }
            } else {
                ((M2C_UNK (*)(void *))increment_run_counter__10TObjPlayerFPv)(arg0 + 0x5E0);
                if (test_flags_any(arg0 + 0x5EC, 4) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3F0) = temp_r31_2;
                    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, 4, 5);
                }
            }
        }
    }
}

int TObjPlayer__sub_801CFAA4(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void dispatch_run_state__10TObjPlayerFis(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))TObjPlayer__sub_801CFAA4)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void *))select_run_request__10TObjPlayerFPv)((void *) arg0);
        return;
      case 3:
        ((s32 (*)(void *))try_trigger_effect__10TObjPlayerFi)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void *))handle_ring_release__10TObjPlayerFi)((void *) arg0);
        return;
      case 5:
        ((s32 (*)(void *))send_6x42_run_to_position__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))start_action__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))update_run_movement__10TObjPlayerFPv)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))apply_damage_and_reset__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

void TObjPlayer__sub_801CFB40(void) {  }

void TObjPlayer__sub_801CFB44(void) {  }

void TObjPlayer__sub_801CFB48(void) {  }

void handle_6x41_move_to_position(void) {

}

void TObjPlayer__sub_801CFB50(void) {  }

void TObjPlayer__sub_801CFB54(void) {  }

void TObjPlayer__sub_801CFB58(void) {  }

void TObjPlayer__sub_801CFB5C(void) {  }

int apply_status_action_b__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

#pragma push
#pragma opt_lifetimes off
int TObjPlayer__sub_801CFB80(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))apply_status_action_b__10TObjPlayerFPv)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void))TObjPlayer__sub_801CFB5C)();
        return;
      case 3:
        ((s32 (*)(void))TObjPlayer__sub_801CFB58)();
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801CFB54)();
        return;
      case 5:
        ((s32 (*)(void))TObjPlayer__sub_801CFB50)();
        return;
      case 0:
        ((s32 (*)(void))TObjPlayer__sub_801CFB48)();
        return;
      case 1:
        ((s32 (*)(void))TObjPlayer__sub_801CFB44)();
        return;
      case 6:
        ((s32 (*)(void))TObjPlayer__sub_801CFB40)();
        break;
    }
  }
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma opt_lifetimes off
u8 *TObjPlayer__sub_801CFBFC(u8 *arg0) {
  s16 (*var_r12)(void *);
  s32 var_r4;
  u8 *var_r31;
  u8 *var_r3;
  var_r4 = 8;
  var_r31 = (u8 *) arg0;
  var_r3 = (u8 *) (var_r31 + 0x5EC);
  if (((volatile int (*)(void *, s32))test_flags_any)(var_r3, 8) != 0)
  {
    var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r31) + 0x380)));
    var_r12 = *((s16 (**)(void *)) (((s8 *) var_r3) + 8));
    var_r12 = *((s16 (**)(void *)) (((s8 *) var_r12) + 0x3C));
    var_r3 = (u8 *) ((void *) var_r12(var_r3));
    return var_r3;
  }
  var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r31) + 0x380)));
  var_r12 = *((s16 (**)(void *)) (((s8 *) var_r3) + 8));
  var_r12 = *((s16 (**)(void *)) (((s8 *) var_r12) + 0x58));
  var_r3 = (u8 *) ((void *) var_r12(var_r3));
  return var_r3;
}
extern int fold_flush_6;
#pragma pop

s32 update_combat_stats__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r3;

    if (is_inactive__10TObjPlayerFPv() == 0) {
        return 0;
    }
    temp_f31 = apply_stat_multipliers_default__10TObjPlayerFv((void *) (arg0 + 0x5E0), (void *) (arg0));
    temp_f1 = temp_f31 * ((f32 (*)(int))sin_table_lookup)((int) (M2C_FIELD(arg0, s32 *, 0x3F0)));
    M2C_FIELD(arg0, f32 *, 0x308) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805DC36C;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) (temp_f31 * ((f32 (*)(int, f32))cos_table_lookup)((int) (M2C_FIELD(arg0, s32 *, 0x3F0)), (f32) (temp_f1)));
    if (check_actor_blocking_move__10TObjPlayerFPv((void *) (arg0)) != 0) {
        TObjPlayer__sub_8001053C((void *) (arg0));
        return 0;
    }
    temp_r3 = ((s32 (*)(void *))resolve_move_collision__10TObjPlayerFPv)((void *) (arg0));
    if (temp_r3 == 0) {
        return 1;
    }
    if ((is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) && (check_player_flag1__6TLobbyFPv((void *) (arg0)) == 0) && (temp_r3 == 4)) {
        return 1;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
void calc_movement_target__10TObjPlayerFPviPvPv(u8 *arg0, s32 arg1, f32 *arg2, f32 *arg3) {
    *arg2 = (lbl_805DC388 * sin_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x38);
    *arg3 = (lbl_805DC388 * cos_table_lookup(arg1)) + M2C_FIELD(arg0, f32 *, 0x40);
}
extern int fold_flush_7;
#pragma pop

void reset_and_flag__10TObjPlayerFPv(void* p) { ((int (*)(void*))TObjPlayer__sub_8001053C)(p); TObjEnePanarms__sub_800E2DE4(p, (void*)256); }

void update_walk_movement__10TObjPlayerFPv(Plr_801CFDF8 *self) {
    s32 ang;
    f32 dist;
    self->target_rot = calc_angle_to__10TObjPlayerFPvPv(get_position_ptr__10TObjPlayerFPv(self), &self->tx);
    self->rot = approach_angle_adaptive(self->rot, self->target_rot);
    ang = lerp_angle_half__10TObjPlayerFUsUs(self->rot, self->target_rot);
    self->vx = TObjPlayer__sub_801BF814(self->motion) * sin_table_lookup(ang);
    self->vy = TObjPlayer__data_805DC36C;
    self->vz = TObjPlayer__sub_801BF814(self->motion) * cos_table_lookup(ang);
    dist = (self->tx - self->x) * (self->tx - self->x) + (self->tz - self->z) * (self->tz - self->z);
    if ((lbl_805DC3B4 * TObjPlayer__sub_801BF814(self->motion)) * (lbl_805DC3B4 * TObjPlayer__sub_801BF814(self->motion)) > dist) {
        set_flags__10TObjPlayerFPvUi(self->flags, 4);
    }
    if (((void * (*)(void *))resolve_move_collision__10TObjPlayerFPv)(self) == NULL) {
        ((void (*)(void *))apply_velocity__10TObjPlayerFPv)(self);
    } else {
        set_flags__10TObjPlayerFPvUi(self->flags, 4);
    }
    play_footstep_sound__10TObjPlayerFi(self, TObjPlayer__data_805DC360, lbl_805DC394);
    emit_footstep_effect__10TObjPlayerFiff(self, TObjPlayer__data_805DC360, lbl_805DC394);
}

void set_attack_state__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f1;
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x33C) = 2;
    ((M2C_UNK (*)(void *, s16, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    temp_r3 = ((s32 (*)(void *))TObjPlayer__sub_801CFBFC)(arg0);
    if (is_matching_id__10TObjPlayerFPvs(arg0, temp_r3) != 0) {
        ((M2C_UNK (*)(void *))set_action_flag__10TObjPlayerFPv)(arg0);
    }
    apply_stats_and_update__10TObjPlayerFPv(arg0 + 0x5E0, arg0);
    ((M2C_UNK (*)(void *, M2C_UNK, s16))set_action_state__10TObjPlayerFPvss)(arg0, 2, temp_r3);
    temp_f31 = TObjPlayer__sub_801D2858(arg0 + 0x5E0);
    temp_f1 = ((f32 (*)(void *))get_action_rate_entry)(arg0);
    TObjPlayer__sub_800A7798(arg0, temp_f1 * temp_f31);
}

void handle_6x40_walk_to_position(void *pkt) {
    Cmd_801D0000 cmd;
    Player_801D0000 *p;
    TNpcPlayer__sub_80152E74(&cmd);
    TObjPlayer__sub_801D24F4(&cmd, pkt);
    swap_endian__10TNpcPlayerFPv(&cmd);
    if (validate_6x40_walk_to_position(&cmd) != 0) {
        p = (Player_801D0000 *)((void * (*)(s32))get_player_by_client_id)(cmd.id);
        if (p != 0 && is_in_tl03_state__10TObjPlayerFPv(p) != 0 && test_action_mask__10TObjPlayerFPvi(p, 0x1E) != 0) {
            p->x = cmd.x;
            p->z = cmd.z;
            set_state__9TTecLukerFPvi(p->luker, cmd.state);
            ((void (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(p, 2, 0);
        }
    }
}

void send_6x40_walk_to_position__10TObjPlayerFPv(Npc_801D00B0 *arg0) {
    Msg_801D00B0 m;
    if (((s32 (*)(void))update_combat_stats__10TObjPlayerFPv)() != 0) {
        ((void (*)(void *, s32, void *, void *))calc_movement_target__10TObjPlayerFPviPvPv)(arg0, arg0->f3f0, &arg0->x, &arg0->z);
        clear_id__10TObjPlayerFPv(arg0->sub);
        if (((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x100000) != 0) {
            set_flags__10TObjPlayerFPvUi(arg0->sub, 8);
        }
        if ((arg0 == NULL) || (obj_isState2_324(arg0) == 0)) {
            TNpcPlayer__sub_80152E74(&m);
            m.f2 = obj_getField1c(arg0);
            m.x = arg0->x;
            m.z = arg0->z;
            m.v = TObjPlayer__sub_801BFFA0(arg0->sub);
            sync_from_lobby__10TNpcPlayerFPv(&m);
        }
    }
}

void handle_ring_hit__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(s32, M2C_UNK))test_flags_any)(arg0 + 0x5EC, 4) != 0) {
        ((M2C_UNK (*)(s32, M2C_UNK))clear_flags__11TAdRicoRingFPvUi)(arg0 + 0x5EC, 4);
        ((M2C_UNK (*)(s32, M2C_UNK, M2C_UNK))clear_player_status_flag__10TObjPlayerFPviUi)(arg0, 0, 0x01C00000);
        ((M2C_UNK (*)(s32, M2C_UNK, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 0);
    }
}

void check_ring_action__10TObjPlayerFi(s32 arg0) {
    if (((s32 (*)(s32, M2C_UNK))test_flags_any)(arg0 + 0x5EC, 4) != 0) {
        ((M2C_UNK (*)(s32, M2C_UNK))clear_flags__11TAdRicoRingFPvUi)(arg0 + 0x5EC, 4);
        ((M2C_UNK (*)(s32, M2C_UNK))set_ring_action__10TObjPlayerFPvi)(arg0 + 0x5E0, 0);
        ((M2C_UNK (*)(s32, M2C_UNK, M2C_UNK))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 5);
    }
}

void select_walk_request__10TObjPlayerFv(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r31_2;

    temp_r31 = get_target_field_1c__10TObjPlayerFPv(arg0 + 0x550);
    temp_f31 = get_attached_float_24__10TObjPlayerFPv(arg0 + 0x550);
    if ((handle_palette_button_input__10TObjPlayerFPv(arg0) == 0) || (check_flag_48__10TObjPlayerFPv(arg0) == 0)) {
        if (temp_f31 < TObjPlayer__data_805DC368) {
            if (test_flags_any(arg0 + 0x5EC, 4) != 0) {
                ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, 1, 5);
                return;
            }
            return;
        } else {
            temp_r31_2 = ((s32 (*)(void *, int))calc_scaled_value__10TObjPlayerFii)(arg0, temp_r31);
            if (temp_f31 > TObjPlayer__data_805DC3AC) {
                ((M2C_UNK (*)(void *))increment_run_counter__10TObjPlayerFPv)(arg0 + 0x5E0);
            }
            if (((s32 (*)(void *, int))obj_testFlags30)(arg0, 0x100000) != 0) {
                if (test_flags_any(arg0 + 0x5EC, 4) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3F0) = temp_r31_2;
                    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, 2, 5);
                }
            } else if (test_flags_any(arg0 + 0x5EC, 4) != 0) {
                M2C_FIELD(arg0, s32 *, 0x3F0) = temp_r31_2;
                if ((f32) TObjPlayer__sub_801D2870(arg0 + 0x5E0) < TObjPlayer__data_805DC378) {
                    ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, 2, 5);
                    return;
                }
                ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)(arg0, 4, 5);
            }
        }
    }
}

int TObjPlayer__sub_801D03BC(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void run_walk_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  int new_var;
  new_var = ((u32) arg1) <= 8U;
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))TObjPlayer__sub_801D03BC)((void *) arg0);
        return;
      case 2:
        ((s32 (*)(void *))select_walk_request__10TObjPlayerFv)((void *) arg0);
        return;
      case 3:
        ((s32 (*)(void *))check_ring_action__10TObjPlayerFi)((void *) arg0);
        return;
      case 8:
        ((s32 (*)(void *))handle_ring_hit__10TObjPlayerFi)((void *) arg0);
        return;
      case 5:
        ((s32 (*)(void *))send_6x40_walk_to_position__10TObjPlayerFPv)((void *) arg0);
        return;
      case 0:
        ((s32 (*)(void *))set_attack_state__10TObjPlayerFPv)((void *) arg0);
        return;
      case 1:
        ((s32 (*)(void *))update_walk_movement__10TObjPlayerFPv)((void *) arg0);
        return;
      case 6:
        ((s32 (*)(void *))reset_and_flag__10TObjPlayerFPv)((void *) arg0);
        break;
    }
  }
}

s32 get_idle_animation__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x100000) {
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
        return ((VObj_8_e57d67 *)(temp_r3_2))->m18();
    }
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
    return ((VObj_8_e57d67 *)(temp_r3))->m21();
}

void cleanup_idle_entry__10TObjPlayerFPv(void* p) { ((int (*)(void*, void*))obj_clearFlags30)(p, (void*)3840); TObjPlayer__sub_8011E204(p, (void*)128); ((int (*)(void*, void*))set_ring_action__10TObjPlayerFPvi)((char*)p + 0x5e0, (void*)0); ((int (*)(void*))clear_status_bit6__10TObjPlayerFPv)(p); ((int (*)(void*))TObjPlayer__sub_8001053C)(p); ((int (*)(void*))zero_vec3)((char*)p + 0x5fc); }

void exit_idle_state__10TObjPlayerFv(void) {  }

void update_action__10TObjPlayerFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = ((u32 (*)(void))resolve_move_collision__10TObjPlayerFPv)();
    if (temp_r3 == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    } else if (temp_r3 == 1U) {
        rewind_position_history__10TObjPlayerFPv(arg0);
    }
    if ((TObjPlayer__sub_801BE2D0(arg0) != 0) && (is_lobby_floor_15__15TFontSmallLobbyFv() == 0) && (TObjPlayer__sub_801AF290(arg0) != 0)) {
        add_actor_tp(arg0, 1);
    }
    if ((((s32 (*)(s32))TObjPlayer__sub_801D1018)(arg0) != 0) && (is_lobby_floor_15__15TFontSmallLobbyFv() == 0) && (TObjPlayer__sub_801AF290(arg0) != 0)) {
        add_actor_hp(arg0, 1);
    }
}

void start_animation__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 1;
    ((s32 (*)(void *, s16, s32))run_action_state_phase__10TObjPlayerFisi)(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    cleanup_idle_entry__10TObjPlayerFPv((void*)(arg0));
    set_action_state__10TObjPlayerFPvss(arg0, 1, ((s32 (*)(void *))get_idle_animation__10TObjPlayerFPv)(arg0));
}

void handle_6x3F_set_position(void *arg0) {
    Msg_801D0634 m;
    Player_801D0634 *p;
    init_set_position_packet__10TObjPlayerFPv(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D2540)(&m, arg0);
    byteswap_set_position_cmd__10TObjPlayerFi(&m);
    if (validate_6x3F_set_position(&m) != 0) {
        p = (Player_801D0634 *)((void * (*)(s32))get_player_by_client_id)(m.id);
        if (p != NULL) {
            set_position_from__14TBoss4DarkFalzFPvPv(p, m.vec);
            ((void (*)(void *))set_flag_400000__10TObjPlayerFi)(p);
            if (m.floor >= 0) {
                set_floor__10TObjPlayerFPvi(p, m.floor);
                set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
            }
            if (m.room >= 0) {
                set__10TObjRoomIdFPvs(p, m.room);
            }
            p->ang = m.ang;
            if (m.flag != 1) {
                ((void (*)(void *, u32))obj_clearFlags30)(p, 0x100000);
            } else {
                obj_setFlags30(p, 0x100000);
            }
            ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 1, 0);
        }
    }
}

void handle_6x3E_stop_at_position(void *arg0) {
    Msg_801D0634 m;
    Player_801D0724 *p;
    init_6x3E_packet__10TNpcPlayerFPv(&m);
    ((void (*)(void *, void *))TObjPlayer__sub_801D25AC)(&m, arg0);
    bswap_6x3E__10TNpcPlayerFi(&m);
    if (validate_6x3E_stop_at_position(&m) == 0) {
        return;
    }
    p = (Player_801D0724 *)((void * (*)(s32))get_player_by_client_id)(m.id);
    if (p == NULL) {
        return;
    }
    set_position_from__14TBoss4DarkFalzFPvPv(p, m.vec);
    if (m.floor >= 0) {
        set_floor__10TObjPlayerFPvi(p, m.floor);
        set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
    }
    p->ang = m.ang;
    if (is_in_tl03_state__10TObjPlayerFPv(p) == 0 || test_action_mask__10TObjPlayerFPvi(p, 0x8100) != 0 ||
        (test_action_mask__10TObjPlayerFPvi(p, 0x200) != 0 && p->f328 <= 2) ||
        (test_action_mask__10TObjPlayerFPvi(p, 0x4000) != 0 && p->f328 == 0)) {
        return;
    }
    if (m.room >= 0) {
        set__10TObjRoomIdFPvs(p, m.room);
    }
    switch (m.flag) {
    case 0:
        ((void (*)(void *, u32))obj_clearFlags30)(p, 0x100000);
        break;
    case 1:
        obj_setFlags30(p, 0x100000);
        break;
    }
    ((void (*)(void *, s32, s32))run_action_state_phase__10TObjPlayerFisi)(p, 1, 0);
}

void update_position_from_target__10TObjPlayerFPv(void* p) { ((int (*)(void*, void*, void*))send_idle_return_event__10TObjPlayerFPvPvs)(p, (char*)p + 0x38, *(void**)((char*)p + 0x60)); }

void send_idle_return_event__10TObjPlayerFPvPvs(void *arg0, void *arg1, s16 arg2) {
    Msg_801D08B0 m;
    s32 t;
    if ((arg0 == NULL) || (((s32 (*)(void))obj_isState2_324)() == 0)) {
        t = ((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x100000) != 0 ? 1 : 0;
        init_set_position_packet__10TObjPlayerFPv(&m);
        m.f2 = obj_getField1c(arg0);
        m.f4 = t;
        m.f6 = arg2;
        m.f8 = get_field_3e4__10TObjPlayerFPv(arg0);
        m.fa = get_stat_by_key_state__10TObjPlayerFPv(arg0);
        VecCopy__FP3VecPC3Vec(m.vec, arg1);
        TObjPlayer__sub_801C18E0(&m);
    }
}

void send_6x3E_stop_at_position__10TObjPlayerFPv(Player_801D094C *arg0) {
    Msg_801D094C m;
    s32 t;
    if ((arg0 == NULL) || (((s32 (*)(void))obj_isState2_324)() == 0)) {
        t = ((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x100000) != 0 ? 1 : 0;
        init_6x3E_packet__10TNpcPlayerFPv(&m);
        m.f2 = obj_getField1c(arg0);
        m.f4 = t;
        m.f6 = arg0->f60;
        sync_current_floor__10TObjPlayerFPv(arg0);
        sync_current_area__10TObjPlayerFPv(arg0);
        m.f8 = get_field_3e4__10TObjPlayerFPv(arg0);
        m.fa = get_stat_by_key_state__10TObjPlayerFPv(arg0);
        VecCopy__FP3VecPC3Vec(m.vec, arg0->vec);
        send_6x3E__10TNpcPlayerFi(&m);
    }
}

void TObjPlayer__sub_801D09F4(void) {  }

void complete_idle_state__10TObjPlayerFv(void) {  }

void check_idle_movement_request__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r31;
    temp_f31 = get_attached_float_24__10TObjPlayerFPv((void *) (arg0 + 0x550));
    temp_r31 = get_target_field_1c__10TObjPlayerFPv((void *) (arg0 + 0x550));
    if ((handle_palette_button_input__10TObjPlayerFPv((void *) (arg0)) == 0) || (check_flag_48__10TObjPlayerFPv((void *) (arg0)) == 0)) {
        M2C_FIELD(arg0, s16 *, 0x3C0) = ((s16 (*)(void *))select_idle_action__10TObjPlayerFv)((void *) (arg0));
        if (is_action_id_none((int) (M2C_FIELD(arg0, s16 *, 0x3C0))) == 0) {
            if (M2C_FIELD(arg0, s16 *, 0x3C0) == (*(VObj_8_684c72 **)(arg0 + 0x380))->m65() ||
                M2C_FIELD(arg0, s16 *, 0x3C0) == (*(VObj_8_684c72 **)(arg0 + 0x380))->m66()) {
                ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *) (arg0), (int) (0x18), (int) (5));
            } else {
                ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *) (arg0), (int) (0x17), (int) (5));
            }
            return;
        }
        if (temp_f31 >= TObjPlayer__data_805DC368) {
            M2C_FIELD(arg0, s32 *, 0x3F0) = ((s32 (*)(void *, int))calc_scaled_value__10TObjPlayerFii)((void *) (arg0), (int) (temp_r31));
            ((M2C_UNK (*)(void *, int, int))run_action_state_phase__10TObjPlayerFisi)((void *) (arg0), (int) (2), (int) (5));
        }
    }
}

int try_apply_status_action_2__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

void run_idle_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  s32 new_var;
  {
    switch (arg1)
    {
      case 7:
        ((s32 (*)(void *))try_apply_status_action_2__10TObjPlayerFPv)((void *) arg0);
        return;
      new_var = arg0;
      case 2:
        ((s32 (*)(void *))check_idle_movement_request__10TObjPlayerFPv)((void *) new_var);
        return;
      case 3:
        ((s32 (*)(void))complete_idle_state__10TObjPlayerFv)();
        return;
      case 8:
        ((s32 (*)(void))TObjPlayer__sub_801D09F4)();
        return;
      case 5:
        ((s32 (*)(void *))send_6x3E_stop_at_position__10TObjPlayerFPv)((void *) new_var);
        return;
      case 0:
        ((s32 (*)(void *))start_animation__10TObjPlayerFPv)((void *) new_var);
        return;
      case 1:
        ((s32 (*)(void *))update_action__10TObjPlayerFi)((void *) new_var);
        return;
      case 6:
        ((s32 (*)(void))exit_idle_state__10TObjPlayerFv)();
        break;
    }
  }
}

void run_action_state_phase__10TObjPlayerFisi(s32 arg0, s16 arg1, s32 arg2) {
    switch (arg1) {
    case 1:
        ((void (*)(s32, s32))run_idle_state_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 2:
        ((void (*)(s32, s32))run_walk_state_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 3:
        ((void (*)(s32, s32))TObjPlayer__sub_801CFB80)(arg0, arg2);
        break;
    case 4:
        ((void (*)(s32, s32))dispatch_run_state__10TObjPlayerFis)(arg0, arg2);
        break;
    case 5:
        ((void (*)(s32, s32))run_attack_stage1_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 6:
        ((void (*)(s32, s32))run_attack_stage2_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 7:
        ((void (*)(s32, s32))run_attack_stage3_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 8:
        ((void (*)(s32, s32))dispatch_technique_cast_state__10TObjPlayerFis)(arg0, arg2);
        break;
    case 9:
        ((void (*)(s32, s32))dispatch_photon_blast_action__10TObjPlayerFis)(arg0, arg2);
        break;
    case 10:
        ((void (*)(s32, s32))run_guard_reaction_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 11:
        ((void (*)(s32, s32))TObjPlayer__sub_801CB580)(arg0, arg2);
        break;
    case 12:
        ((void (*)(s32, s32))run_switch_interaction_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 13:
        ((void (*)(s32, s32))run_hurt_state_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 14:
        ((void (*)(s32, s32))run_fall_reaction_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 15:
        ((void (*)(s32, s32))run_death_state_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 18:
        ((void (*)(s32, s32))TObjPlayer__sub_801C9F6C)(arg0, arg2);
        break;
    case 16:
        ((void (*)(s32, s32))run_service_hold_state_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 19:
        ((void (*)(s32, s32))TObjPlayer__sub_801C9648)(arg0, arg2);
        break;
    case 20:
        ((void (*)(s32, s32))run_warp_action_phase__10TObjPlayerFis)(arg0, arg2);
        break;
    case 21:
        ((void (*)(s32, s32))TObjPlayer__sub_801C8C50)(arg0, arg2);
        break;
    case 22:
        ((void (*)(s32, s32))TObjPlayer__sub_801C8A28)(arg0, arg2);
        break;
    case 23:
        ((void (*)(s32, s32))TObjPlayer__sub_801C869C)(arg0, arg2);
        break;
    case 24:
        ((void (*)(s32, s32))TObjPlayer__sub_801C7A6C)(arg0, arg2);
        break;
    }
}

int update_lobby_chair__10TObjPlayerFPv(void* p) { return ((int (*)(void*))TObjPlayer__sub_801D1024)((char*)p + 0x34c); }

int get_chair_state__10TObjPlayerFPv(void* p) { return ((int (*)(void*))TObjPlayer__sub_801D102C)((char*)p + 0x34c); }

int TObjPlayer__sub_801D0D58(void* p) { return TBoss7LaserPtcl__sub_8035AF14((char*)p + 0x34c); }

void TObjPlayer__sub_801D0D7C(void* p) { *(u32*)((char*)p + 0x334) &= 0xfbffffff; }

void TObjPlayer__sub_801D0D8C(void* p) { *(u32*)((char*)p + 0x334) &= 0xf7ffffff; }

void clear_state_flag__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) &= 0xefffffff; }

int TObjPlayer__sub_801D0DAC(void* p) { return ((int (*)(void*))TObjPlayer__sub_801D1034)((char*)p + 0x34c); }

int start_action18_sub__10TObjPlayerFPv(void* p) { return ((int (*)(void*))TObjPlayer__sub_801D103C)((char*)p + 0x34c); }

int TObjPlayer__sub_801D0DF4(void* p) { return fn_8035AF18((char*)p + 0x34c); }

void TObjPlayer__sub_801D0E18(void* p) { *(u32*)((char*)p + 0x334) |= 0x4000000; }

int get_action_flag__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 27) & 0x1; }

int forward_1D1044_at_34c__10TObjPlayerFPv(void* p) { return ((int (*)(void*))TObjPlayer__sub_801D1044)((char*)p + 0x34c); }

int is_action_flag_28__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 28) & 0x1; }

void set_anim_flag__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) |= 0x8000000; }

void TObjPlayer__sub_801D0E74(void* p) { *(u32*)((char*)p + 0x334) |= 0x10000000; }

void TObjPlayer__sub_801D0E84(void* p) { *(u32*)((char*)p + 0x334) &= 0xdfffffff; }

int get_flag__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 29) & 0x1; }

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
u8 *TObjPlayer__sub_801D0EA0(u8 *arg0, u8 *arg1) {
    ((M2C_UNK (*)(void))TFontSmallLobby__sub_801C0228)();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    *(M2CCopy_C *)((s32) arg0 + 0x14) = *(const M2CCopy_C *)((s32) arg1 + 0x14);
    return arg0;
}
extern int fold_flush_8;
#pragma pop

short query_child_state2__10TObjPlayerFPv(void *arg0) {
    struct VObj_801D0F0C *o = (struct VObj_801D0F0C *)M2C_FIELD(arg0, void **, 0x380);
    return o->m23();
}

void release_control_lock__10TObjPlayerFPv(void* p) { clear_flag_200__10TObjPlayerFPv((void*)(p)); }

void clear_flag_200__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) &= 0xfffffdff; }

void TObjPlayer__sub_801D0F70(void* p) { *(u32*)((char*)p + 0x334) |= 0x200; }

void* get_field4_ptr__10TObjPlayerFPv(void* p) { return (char*)p + 0x4; }

int copy_position__10TObjPlayerFPv(void* p) { return ((int (*)(void*))VecCopy__FP3VecPC3Vec)((char*)p + 0x4); }

void set_float_param__10TObjPlayerFis(s32 arg0, s16 arg1) {
    ((M2C_UNK (*)(s32, f32))set_field_3c__10TObjPlayerFPvf)(arg0 + 0x4AC, (f32) (s32) arg1);
}

int query_field_340__10TObjPlayerFPv(void* p) { return update_action_palette__10TObjPlayerFPv((char*)p + 0x340); }

int TObjPlayer__sub_801D1018(void* p) { return (*(u32*)((char*)p + 0x890) >> 4) & 0x1; }

void TObjPlayer__sub_801D1024(void* p, s32 v) { *(s32*)((char*)p + 0x10) = v; }

void TObjPlayer__sub_801D102C(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }

s32 TObjPlayer__sub_801D1034(void* p) { return *(s32*)((char*)p + 0xc); }

s16 TObjPlayer__sub_801D103C(void* p) { return *(s16*)((char*)p + 0x0); }

void TObjPlayer__sub_801D1044(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

void TObjPlayer__sub_801D104C(void* p) { *(s16*)((char*)p + 0x6) = 8; }

void TObjPlayer__sub_801D1058(u8 *arg0) {
  s16 temp_r4;
  temp_r4 = (*((s16 *) (((s8 *) arg0) + 6)) = (*((s16 *) (((s8 *) arg0) + 6))) - 1);
  if (temp_r4 < 0)
  {
    *((s16 *) (((s8 *) arg0) + 6)) = 0;
  }
}

u8 TObjPlayer__sub_801D1078(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 6) <= 0);
}

void TObjPlayer__sub_801D1090(void* p) { *(s16*)((char*)p + 0x8) = 8; }

void TObjPlayer__sub_801D109C(u8 *arg0) {
  s16 temp_r4;
  s8 *new_var;
  temp_r4 = (*((s16 *) (new_var + 8)) = (*((s16 *) (((s8 *) arg0) + 8))) - 1);
  new_var = (s8 *) arg0;
  if (temp_r4 < 0)
  {
    *((s16 *) (((s8 *) arg0) + 8)) = 0;
  }
}

u8 TObjPlayer__sub_801D10BC(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 8) <= 0);
}

void TObjPlayer__sub_801D10D4(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

void *TObjPlayer__sub_801D1108(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, void **, 0x4) = M2C_FIELD(arg1, void **, 0x4);
    return arg0;
}

void TObjPlayer__sub_801D1144(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 0) = 0xB0;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void swap_endian32__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

void *TObjPlayer__sub_801D1194(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, void **, 0x4) = M2C_FIELD(arg1, void **, 0x4);
    return arg0;
}

void TObjPlayer__sub_801D11D0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 0) = 0xAF;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

int TObjPlayer__sub_801D11EC(void* p) { return *(u16*)((char*)p + 0x6) & 0x1; }

int TObjPlayer__sub_801D11F8(void* p) { return (*(u16*)((char*)p + 0x6) >> 1) & 0x1; }

void swap_bytes__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *TObjPlayer__sub_801D1240(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, u16 *, 0x6);
    return arg0;
}

void TObjPlayer__sub_801D1284(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, u8 *, 0) = 0xAB;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void send_swapped_bytes__10TObjPlayerFPv(void* p) { swap_bytes__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void TObjPlayer__sub_801D12D8(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }

void TObjPlayer__sub_801D12E8(void* p) { *(u16*)((char*)p + 0x6) |= 0x2; }

void send_swapped_packet__10TObjPlayerFPv(void* p) { swap_endian32__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void bswap_and_send__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801D10D4(p); TLobby__send_and_handle_60(p); }

int TObjPlayer__sub_801D1360(void* p) { return *(u16*)((char*)p + 0x6) & 0x1; }

void bswap_packet__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *TObjPlayer__sub_801D13A8(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, u16 *, 0x6);
    return arg0;
}

void TObjPlayer__sub_801D13EC(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x58;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void handle_recv_packet__10TObjPlayerFPv(void* p) { bswap_packet__10TObjPlayerFPv((void*)(p)); update_players__6TLobbyFi(p); }

void TObjPlayer__sub_801D1440(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }

void* handle_6x57__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }

void set_cmd_87__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 87; *(u8*)((char*)p + 0x1) = 1; }

void draw_and_send__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }

void swap_endian_words__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); }

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
u8 *TObjPlayer__sub_801D1514(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    return arg0;
}
extern int fold_flush_9;
#pragma pop

void init_position_packet__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x10) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 86; *(unsigned char*)((char*)a0 + 0x1) = 5; }

void update_and_send2__10TObjPlayerFPv(void* p) { ((int (*)(void*))swap_endian_words__10TObjPlayerFPv)(p); TLobby__send_and_handle_60(p); }

void swap_and_send__10TObjPlayerFPv(void* p) { swap_endian__10TObjPlayerFPv((void*)((void*)(p))); TLobby__send_and_handle_60(p); }

void swap_endian__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); }

void TObjPlayer__sub_801D1658(void* a0) { *(int*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0x10) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x1c) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x18) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x14) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 85; *(unsigned char*)((char*)a0 + 0x1) = 8; }

void set_type_53__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 83; *(u8*)((char*)p + 0x1) = 1; }

void send_name__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }

void swap_stats_bytes__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }

void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }

void init_6x52_packet__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x52;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void update_display__10TObjPlayerFPv(void* p) { swap_stats_bytes__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void set_revived_state__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 79; *(u8*)((char*)p + 0x1) = 1; }

void broadcast_lobby_display__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }

void bswap_fields__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

void TObjPlayer__sub_801D1888(Pkt_801D1888 *p) {
    p->a = 0xFFFF;
    p->b = 0;
    p->cmd = 0x89;
    p->size = 2;
}

void init_revive_packet__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 78; *(u8*)((char*)p + 0x1) = 1; }

void bswap_font_lobby2__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }

void init_field_4__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_field_u32__10TObjPlayerFPv((char*)p + 0x4); }

void *init_6x4D_packet__10TObjPlayerFPv(void *arg0) {
    struct VOff_801D192C_arg0_801D18B0 *self = (struct VOff_801D192C_arg0_801D18B0 *)arg0;
    init_forward__10TObjPlayerFPv(self->f_4);
    clear_id__10TObjPlayerFPv(self->f_4);
    M2C_FIELD(arg0, u8 *, 0x0) = 77;
    M2C_FIELD(arg0, u8 *, 0x1) = 2;
    return arg0;
}

void init_and_send__10TObjPlayerFPv(void* p) { init_field_4__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void update_and_send3__10TObjPlayerFPv(void* p) { bswap_fields__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void bswap_head_pair__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); ((int (*)(void*))TObjPlayer__sub_801D28DC)((char*)p + 0x8); }

void init_6x4C_packet__10TObjPlayerFPv(void* a0) { *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 76; *(unsigned char*)((char*)a0 + 0x1) = 4; }

void send_head_pair_packet__10TObjPlayerFPv(void* p) { bswap_head_pair__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void read_swapped_fields__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); ((int (*)(void*))TObjPlayer__sub_801D28DC)((char*)p + 0x8); }

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
u8 *TObjPlayer__sub_801D1AC8(u8 *arg0, u8 *arg1) {
    ((u8 * (*)(void *))TFontSmallLobby__sub_801C0228)(arg0);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    *(M2CCopy_8 *)((s32) arg0 + 8) = *(const M2CCopy_8 *)((s32) arg1 + 8);
    return arg0;
}
extern int fold_flush_10;
#pragma pop

void reset_action_state__10TObjPlayerFPv(void* a0) { *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 75; *(unsigned char*)((char*)a0 + 0x1) = 4; }

void handle_recv_state__10TObjPlayerFPv(void* p) { ((int (*)(void*))read_swapped_fields__10TObjPlayerFPv)(p); TLobby__send_and_handle_60(p); }

void swap_endian_field__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

void TObjPlayer__sub_801D1BB0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x51;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void refresh_players__10TObjPlayerFPv(void* p) { swap_endian_field__10TObjPlayerFPv((void*)(p)); update_players__6TLobbyFi(p); }

void bswap_field4__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

void* copy_font__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

void TObjPlayer__sub_801D1C70(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x50;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void sync_players__10TObjPlayerFPv(void* p) { bswap_field4__10TObjPlayerFPv((void*)(p)); update_players__6TLobbyFi(p); }

void init_shield_attack_packet__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 74; *(u8*)((char*)p + 0x1) = 1; }

void draw_font_and_send__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }

void swap_endian16__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *TObjPlayer__sub_801D1D44(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}

void TObjPlayer__sub_801D1D88(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x37;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void update_and_send4__10TObjPlayerFPv(void* p) { swap_endian16__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void byteswap_6x49_packet__10TObjPlayerFPv(struct Packet_801D1DDC *pkt) {
    s32 i;
    read_be16_field2__10TObjPlayerFPv((void*)(pkt));
    swap_endian_shorts__10TObjPlayerFPv(&pkt->kind);
    for (i = 0; i < pkt->count; i++) {
        byteswap_pos__10TNpcPlayerFPv(&pkt->targets[i]);
    }
}

void swap_endian_shorts__10TObjPlayerFPv(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 TObjPlayer__sub_801D1E7C(s32 arg0, u8 *arg1) {
  s32 var_r30;
  s32 var_r3;
  s32 var_r5;
  s32 var_r6;
  u8 *var_r31;
  u8 *var_r4;
  var_r30 = arg0;
  var_r31 = (u8 *) arg1;
  TFontSmallLobby__sub_801C0228((void*)(arg0));
  var_r6 = *((s32 *) (((s8 *) var_r31) + 4));
  var_r3 = *((s32 *) (((s8 *) var_r31) + 8));
  if ((arg0 && arg0) && arg0)
  {
  }
  var_r5 = var_r30 + 8;
  var_r4 = (u8 *) (var_r31 + 8);
  *((s32 *) (((s8 *) var_r30) + 4)) = var_r6;
  *((s32 *) (((s8 *) var_r30) + 8)) = var_r3;
  *((M2CCopy_28 *) (var_r5 + 4)) = *((const M2CCopy_28 *) (((s32) var_r4) + 4));
  var_r5 += 0x28;
  var_r4 += 0x28;
  var_r3 = var_r30;
  return var_r3;
}
extern int fold_flush_11;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void *init_6x49_packet__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_801D1F44((void*)((void *)((char *)arg0 + 4)));
    __construct_array((void *)((char *)arg0 + 12), fn_80152EF8, 0, 4, 10);
    M2C_FIELD(arg0, u8 *, 0x0) = 73;
    M2C_FIELD(arg0, u8 *, 0x1) = 13;
    return arg0;
}
extern int fold_flush_12;
#pragma pop

void TObjPlayer__sub_801D1F44(void* p) { *(s16*)((char*)p + 0x6) = 0; *(s16*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x2) = 0; *(u8*)((char*)p + 0x1) = 0; *(u8*)((char*)p + 0x0) = 0; }

void send_photon_blast_targets_packet(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 1) = (s8) ((((u32)TObjPlayer__sub_801D2004((u8 *)(arg0))) >> 2U) & 0x3F);
    ((M2C_UNK)byteswap_pb_targets_packet__10TObjPlayerFPv((void *)((void *) (arg0))));
    ((M2C_UNK)TLobby__send_and_handle_60((void*)((void *) (arg0))));
}

int byteswap_pb_targets_packet__10TObjPlayerFPv(void *_w0) {
    Obj_801D1FA4 *arg0 = (Obj_801D1FA4 *)_w0;
    s32 i;
    read_be16_field2__10TObjPlayerFPv(arg0);
    for (i = 0; i < arg0->n; i++) {
        byteswap_pos__10TNpcPlayerFPv(&arg0->e[i]);
    }
    swap_endian_shorts__10TObjPlayerFPv((u8 *)arg0 + 4);
}

u8 TObjPlayer__sub_801D2004(u8 *arg0) {
    return (u8) (0x34 - ((0xA - M2C_FIELD(arg0, s16 *, 6)) * 4));
}

void bswap_coords__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void* TObjPlayer__sub_801D2058(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

void TObjPlayer__sub_801D209C(Pkt_801D209C *p) {
    p->a = 0xFFFF;
    p->b = 0;
    p->cmd = 0x33;
    p->size = 2;
}

void send_coords__10TObjPlayerFPv(void* p) { bswap_coords__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void swap_header__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *TObjPlayer__sub_801D2134(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}

void TObjPlayer__sub_801D2178(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x48;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void send_swapped_header__10TObjPlayerFPv(void* p) { swap_header__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

#pragma push
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
u8 *TObjPlayer__sub_801D21CC(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_28 *)(arg0 + 4 + 4) = *(const M2CCopy_28 *)((s32) (arg1 + 4) + 4);
    return arg0;
}
extern int fold_flush_13;
#pragma pop

void swap_field6__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x6); }

void *TObjPlayer__sub_801D2260(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u8 *, 0x4) = M2C_FIELD(arg1, u8 *, 0x4);
    M2C_FIELD(arg0, u8 *, 0x5) = M2C_FIELD(arg1, u8 *, 0x5);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}

void TObjPlayer__sub_801D22AC(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 0) = 0x8D;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void send_swap_field6__10TObjPlayerFPv(void* p) { swap_field6__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void *TObjPlayer__sub_801D2304(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}

void *TObjPlayer__sub_801D2348(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}

void bswap_field4_sub__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); ((int (*)(void*))bswap_u16_pair_list__10TObjPlayerFPv)((char*)p + 0x4); }

void* build_packet_header__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8012AF00((char*)p + 0x4); *(unsigned char*)(p) = 70; *(unsigned char*)((char*)p + 0x1) = 12; return p; }

void send_6x46_attack_finished(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 1) = (s8) ((((u32 (*)(void))TObjPlayer__sub_801D247C)() >> 2U) & 0x3F);
    TObjPlayer__sub_801D2448((void*)((void *) (arg0)));
    TLobby__send_and_handle_60((void*)((void *) (arg0)));
}

void TObjPlayer__sub_801D2448(void* p) { read_be16_field2__10TObjPlayerFPv(p); ((int (*)(void*))bswap_entry_list__10TObjPlayerFPv)((char*)p + 0x4); }

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
u8 TObjPlayer__sub_801D247C(s32 arg0) {
    return (u8) (0x30 - ((0xA - TObjPlayer__sub_8012125C((s32)((void *) (arg0 + 4)))) * 4));
}
extern int fold_flush_14;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void *TObjPlayer__sub_801D24B0(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)((void*)((void*)(arg0))));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, s16 *, 0x6);
    return arg0;
}
extern int fold_flush_15;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void *TObjPlayer__sub_801D24F4(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228(arg0);
    ((Pkt_801D24F4 *)arg0)->pos = ((Pkt_801D24F4 *)arg1)->pos;
    return arg0;
}
extern int fold_flush_16;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
u8 *TObjPlayer__sub_801D2540(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void*)((void*)(arg0)));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    *(M2CCopy_C *)((s32) arg0 + 0xC) = *(const M2CCopy_C *)((s32) arg1 + 0xC);
    return arg0;
}
extern int fold_flush_17;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
u8 *TObjPlayer__sub_801D25AC(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    *(M2CCopy_C *)((s32) arg0 + 0xC) = *(const M2CCopy_C *)((s32) arg1 + 0xC);
    return arg0;
}
extern int fold_flush_18;
#pragma pop

void TObjPlayer__sub_801D2618(void* p, f32 v) { *(f32*)((char*)p + 0xc0) = v; }

void set_action_flag_40__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0xb0) |= 0x40; }

void clear_status_bit6__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0xb0) &= 0xffffffbf; }

f32 get_action_rate_entry(Obj_801D2640 *p) {
    return p->arr[p->idx].f;
}

void TObjPlayer__sub_801D2658(u8 *p, f32 value) {
    *(f32 *)(p + 0xD4) = value;
    set_flags_B0__10TObjPlayerFPvUi(p, 0x200U);
}

int TObjPlayer__sub_801D2680(void *p) {
    return (*(u32 *)((char *)p + 0xB0) >> 6) & 1;
}

void set_action_flag__10TObjPlayerFPv(void *p) {
    *(u32 *)((char *)p + 0xB0) |= 0x80;
}

int ret_801D269C(void) { return -1; }

int ret_801D26A4(void) { return -1; }

int ret_801D26AC(void) { return -1; }

int ret_801D26B4(void) { return -1; }

int ret_801D26BC(void) { return -1; }

int ret_801D26C4(void) { return -1; }

int ret_801D26CC(void) { return -1; }

int ret_801D26D4(void) { return -1; }

int ret_801D26DC(void) { return -1; }

int ret_801D26E4(void) { return -1; }

int ret_801D26EC(void) { return -1; }

int ret_801D26F4(void) { return -1; }

int ret_801D26FC(void) { return -1; }

int ret_801D2704(void) { return -1; }

int ret_801D270C(void) { return -1; }

int ret_801D2714(void) { return -1; }

int ret_801D271C(void) { return -1; }

int ret_801D2724(void) { return -1; }

int ret_801D272C(void) { return -1; }

int ret_801D2734(void) { return -1; }

int ret_801D273C(void) { return -1; }

int ret_801D2744(void) { return -1; }

int ret_801D274C(void) { return -1; }

int ret_801D2754(void) { return -1; }

int ret_801D275C(void) { return -1; }

int ret_801D2764(void) { return -1; }

int ret_801D276C(void) { return -1; }

int ret_801D2774(void) { return -1; }

int ret_801D277C(void) { return -1; }

int ret_801D2784(void) { return -1; }

int ret_801D278C(void) { return -1; }

int ret_801D2794(void) { return -1; }

int ret_801D279C(void) { return -1; }

int ret_801D27A4(void) { return -1; }

int ret_801D27AC(void) { return -1; }

int ret_801D27B4(void) { return -1; }

int ret_801D27BC(void) { return -1; }

int ret_801D27C4(void) { return -1; }

int ret_801D27CC(void) { return -1; }

int ret_801D27D4(void) { return -1; }

int ret_801D27DC(void) { return -1; }

int ret_801D27E4(void) { return -1; }

int ret_801D27EC(void) { return -1; }

int ret_801D27F4(void) { return -1; }

int ret_801D27FC(void) { return -1; }

int ret_801D2804(void) { return -1; }

int ret_801D280C(void) { return -1; }

int ret_801D2814(void) { return -1; }

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 get_field_4__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x4); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s16 TObjPlayer__sub_801D2824(void* p) { return *(s16*)((char*)p + 0x8); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s16 TObjPlayer__sub_801D282C(void* p) { return *(s16*)((char*)p + 0x0); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma opt_common_subs off
void add_death_sink_progress(u8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + farg0);
    if (M2C_FIELD(arg0, f32 *, 8) > TObjPlayer__data_805DC360) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) TObjPlayer__data_805DC360;
    }
}
extern int fold_flush_19;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
f32 TObjPlayer__sub_801D2858(void* p) { return *(f32*)((char*)p + 0x8); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void increment_run_counter__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}
extern int fold_flush_20;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 TObjPlayer__sub_801D2870(void* p) { return *(s32*)((char*)p + 0x4); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 TObjPlayer__sub_801D2878(void* p) { return *(s32*)((char*)p + 0xc); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int bswap_field_u32__10TObjPlayerFPv(void* p) { return bswap_32__FPUl(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void* TObjPlayer__sub_801D28A0(void* p, void* a1) { TFontSmallLobby__sub_801C0228((void*)(p)); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjPlayer__sub_801D28DC(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
u8 *TObjPlayer__sub_801D2910(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void*)((void*)(arg0)));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    *(M2CCopy_8 *)((s32) arg0 + 8) = *(const M2CCopy_8 *)((s32) arg1 + 8);
    return arg0;
}
extern int fold_flush_21;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void *TObjPlayer__sub_801D2964(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228(arg0);
    ((Pkt_801D2964 *)arg0)->pos = ((Pkt_801D2964 *)arg1)->pos;
    return arg0;
}
extern int fold_flush_22;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int clear_photon_blast_state__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))clear_flags__11TAdRicoRingFPvUi)((char*)p + 0x40, 62); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int trigger_photon_blast__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))clear_flags__11TAdRicoRingFPvUi)((char*)p + 0x40, 4); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int check_photon_blast_flag__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))set_flags__10TObjPlayerFPvUi)((void*)((char*)p + 0x40), (int)(8)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int check_flag_clear__10TObjPlayerFPv(void* p) { return (((int (*)(void*, int))test_flags_any)((void*)((char*)p + 0x40), (int)(1))) == 0; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TObjPlayer__sub_801D2A50(void* p) { return ((int (*)(void*, int))test_flags_any)((void*)((char*)p + 0x40), (int)(8)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjPlayer__sub_801D2A78(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 TObjPlayer__sub_801D2A80(void* p) { return *(s32*)((char*)p + 0x8); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjPlayer__sub_801D2A88(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
}
extern int fold_flush_23;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
f32 TObjPlayer__sub_801D2A98(void* p) { return *(f32*)((char*)p + 0xc); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_field_0c__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0xc) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_field8__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
Ent_801D2AB0 *TObjPlayer__sub_801D2AB0(Obj_801D2AB0 *p, s32 i) {
    return &p->arr[i];
}
extern int fold_flush_24;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_field_3c__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x3c) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int start_photon_blast_action__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))set_flags__10TObjPlayerFPvUi)((void*)((char*)p + 0x40), (int)(4)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
f32 get_dist__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0x10); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void* get_element__10TObjPlayerFPvi(void* a0, int a1) {  return (char*)a0 + a1 * 24; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int is_alt_photon_blast_bank_empty__10TObjPlayerFPv(void* p) { return is_pb_palette_bank_empty((char*)p + 0x24); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void bswap_u16_pair_list__10TObjPlayerFPv(Obj_801D2B2C *arg0) {
    s32 i;
    bswap_32__FPUl((void*)(arg0));
    for (i = 0; i < arg0->n; i++) {
        bswap_u16_pair__10TObjPlayerFPv((void*)(&arg0->e[i]));
    }
}
extern int fold_flush_25;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void bswap_u16_pair__10TObjPlayerFPv(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma fp_contract on
s32 TObjPlayer__sub_801D2BB8(s32 arg0, s32 arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    *(M2CCopy_2C *)(arg0 + 4) = *(const M2CCopy_2C *)(arg1 + 4);
    return arg0;
}
extern int fold_flush_26;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void bswap_entry_list__10TObjPlayerFPv(Obj_801D2C18 *arg0) {
    s32 i;
    for (i = 0; i < arg0->n; i++) {
        bswap_u16_pair__10TObjPlayerFPv((void*)(&arg0->e[i]));
    }
    bswap_32__FPUl((void*)(arg0));
}
extern int fold_flush_27;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_technique_state__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_technique_id__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int test_bit1_at_10__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))test_flags_any)((void*)((char*)p + 0x10), (int)(2)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjPlayer__sub_801D2CAC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - 1);
}
extern int fold_flush_28;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
f32 get_float_14__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0x14); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjPlayer__sub_801D2CC4(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void* get_technique_data__10TObjPlayerFPv(void* p) { return (char*)p + 0x20; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_tech_override__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
f32 get_attack_controller_rate(void* p) { return *(f32*)((char*)p + 0x4); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_attack_target__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void* get_anim_field_c__10TObjPlayerFPv(void* p) { return (char*)p + 0xc; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
f32 TObjPlayer__sub_801D2CF4(M2C_UNK arg0, s32 arg1) {
    return M2C_FIELD(((u8 *)(&lbl_804C43CC.value) + (arg1 * 4)), f32 *, 0) * M2C_FIELD(((u8 *)(&lbl_804C43D8.value) + (get_validated_attack_stage((u8 *)(arg0)) * 4)), f32 *, 0);
}
extern int fold_flush_29;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int on_attack_finished__10TObjPlayerFPv(void* p) { return ((int (*)(void*))copy_attack_targets)((char*)p + 0x30); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int set_flag_1_at_c__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))set_flags__10TObjPlayerFPvUi)((void*)((char*)p + 0xc), (int)(1)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void increment_strike_counter__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + 1);
}
extern int fold_flush_30;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_action_type__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 get_field_1c__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x1c); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void request_heavy_attack_particles__10TObjPlayerFPv(u16 *arg0) {
    emit_heavy_attack_particles((s32)((s8 *)arg0 + 4), (s32)(*arg0));
}
extern int fold_flush_31;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void emit_heavy_attack_particles(s32 arg0, s32 arg1) {
    check_hit_by_id__10TObjPlayerFiii(arg0, arg1, 0xBB);
    check_hit_by_id__10TObjPlayerFiii(arg0, arg1, 0x1B7);
}
extern int fold_flush_32;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void clear_lockon_list__10TObjPlayerFPvPvff(s32 *arg0, void * _w1, f32 _w2, f32 _w3) {
    s32 var_r31;
    u8 *var_r30;
    var_r30 = (u8 *)((void *)((u8 *)(arg0) + 4));
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    do {
        TObjPlayer__sub_8012AF80(var_r30);
        var_r31 += 1;
        var_r30 = (u8 *)((void *)((u8 *)(var_r30) + 4));
    } while (var_r31 < 0xA);
}
extern int fold_flush_33;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void advance_and_clamp_state__10TObjPlayerFPv(void *arg0) {
    if ((M2C_FIELD(arg0, s16 *, 0x10) = M2C_FIELD(arg0, s16 *, 0x10) + 1) > 2) {
        set_saved_attack_stage__10TObjPlayerFPvs((void*)(arg0), (s16)(2));
    }
}
extern int fold_flush_34;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s16 get_validated_attack_stage(u8 *arg0) {
    s16 var_r31;
    var_r31 = M2C_FIELD(arg0, s16 *, 0x10);
    if (TObjPlayer__sub_801D2EE8((s16)((void*)((int) (var_r31)))) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}
extern int fold_flush_35;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 TObjPlayer__sub_801D2EE8(s16 arg0) {
    if ((arg0 < 0) || (arg0 >= 3)) {
        return 0;
    }
    return 1;
}
extern int fold_flush_36;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s16 TObjPlayer__sub_801D2F0C(void *arg0) {
    s16 var_r31;
    var_r31 = M2C_FIELD(arg0, s16 *, 2);
    if (TObjPlayer__sub_801D2F8C((s16)(var_r31)) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}
extern int fold_flush_37;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s16 TObjPlayer__sub_801D2F4C(s16 *arg0) {
    s16 var_r31;
    var_r31 = *arg0;
    if (TObjPlayer__sub_801D2F8C((s16)((s16)((int) (var_r31)))) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}
extern int fold_flush_38;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 TObjPlayer__sub_801D2F8C(s16 arg0) {
    if ((arg0 < 0) || (arg0 >= 3)) {
        return 0;
    }
    return 1;
}
extern int fold_flush_39;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void queue_physical_attack_input(PlayerAttackController *self, TObjPlayer *obj, s32 arg2, s16 arg3) {
    s16 t;
    if (((int (*)(void*, int))test_flags_any)((void*)(((void *)get_anim_field_c__10TObjPlayerFPv((void*)(self)))), (int)(2)) == 0 ||
        is_flag32_clear__10TObjPlayerFPv((void*)(self)) == 0) {
        ((int (*)(void*, int))set_flags__10TObjPlayerFPvUi)((void*)(((void *)get_anim_field_c__10TObjPlayerFPv((void*)(self)))), (int)(4));
    }
    if (((int (*)(void*, int))test_flags_any)((void*)(((void *)get_anim_field_c__10TObjPlayerFPv((void*)(self)))), (int)(2)) != 0 &&
        ((int (*)(void*, int))test_flags_any)((void*)(((void *)get_anim_field_c__10TObjPlayerFPv((void*)(self)))), (int)(4)) == 0) {
        ((int (*)(void*, int))set_flags__10TObjPlayerFPvUi)((void*)(((void *)get_anim_field_c__10TObjPlayerFPv((void*)(self)))), (int)(1));
        advance_and_clamp_state__10TObjPlayerFPv(self);
        if (get_validated_attack_stage((u8 *)self) > arg3) {
            set_saved_attack_stage__10TObjPlayerFPvs((void*)(self), arg3);
        }
        t = get_action_palette_entry__10TObjPlayerFii(obj, arg2);
        get_field_340__10TObjPlayerFPv((void*)(obj), (int)(2));
        set_attack_target__10TObjPlayerFPvs((void*)(self), (s16)(t));
        dispatch_to_child__11TWindowCtrlFiPv(((s32 (*)(void *))obj_getField1c)(obj), arg2);
    }
}
extern int fold_flush_40;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 update_if_flag8_set__10TObjPlayerFi(s32 arg0) {
    if (((int (*)(void*, int))test_flags_any)((void*)(arg0 + 0xC), (int)(8)) != 0) {
        return tick_countdown_timer__10TObjPlayerFPv((u8 *)((u8 *)(arg0)));
    }
    return 0;
}
extern int fold_flush_41;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 tick_countdown_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 < 0) {
        ((int (*)(void*, int))set_flags__10TObjPlayerFPvUi)((void*)(arg0 + 0xC), (int)(1));
        return 1;
    }
    return 0;
}
extern int fold_flush_42;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void apply_anim_action__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    ((int (*)(void*, int))set_flags__10TObjPlayerFPvUi)((void*)((void *) (arg0 + 0xC)), (int)((int) (2)));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) get_attack_recovery_count__10TObjPlayerFi((void *) (arg1));
    check_status_flag_128__10TObjPlayerFPv((void*)((void *) (arg1)));
}
extern int fold_flush_43;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void begin_player_attack(u8 *arg0, M2C_UNK arg1, s16 arg2, s32 arg3) {
  s8 *new_var;
  set_saved_attack_stage__10TObjPlayerFPvs((void*)((void *) arg0), (s16)((void *) arg2));
  *((s32 *) (((s8 *) arg0) + 0x14)) = arg3;
  *((s16 *) (((s8 *) arg0) + 0x12)) = 0;
  new_var = (s8 *) arg0;
  *((s32 *) (((s8 *) arg0) + 0x18)) = 0;
  ((int (*)(void*, int))clear_flags__11TAdRicoRingFPvUi)((void*)((void *) (arg0 + 0xC)), (int)((int) 0x1F));
  *((s32 *) (new_var + 0x1C)) = 6;
  *((f32 *) (new_var + 4)) = (f32) (*((f32 *) (((s8 *) arg0) + 8)));
  if ((s16) (*((s16 *) (((s8 *) arg0) + 0))))
  {
    *((f32 *) (((s8 *) arg0) + 4)) = (f32) ((*((f32 *) (new_var + 4))) * lbl_805DC3B8);
  }
}
extern int fold_flush_44;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 get_first_target_position__10TObjPlayerFPvPv(void *arg0, Vec_801D3224 *out) {
    Slot_801D3224 *s = (Slot_801D3224 *)TObjPlayer__sub_801D345C((void*)(arg0));
    u16 uid = get_uid__10TObjPlayerFPv(s);
    Obj_801D3224 *o;
    if (uid == 0xFFFF) {
        return 0;
    }
    o = ((Obj_801D3224 * (*)(u16))find_entity_by_id)(uid);
    if (o == NULL) {
        return 0;
    }
    ((void (*)(Vec_801D3224 *, Vec_801D3224 *))VecCopy__FP3VecPC3Vec)(out, &o->recs[s->idx].pos);
    return 1;
}
extern int fold_flush_45;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void *capture_lockon_targets(Self_801D32A0 *self, Pl_801D32A0 *player) {
    Cur_801D32A0 *cur;
    s32 n;
    Ent_801D32A0 *e;
    s32 i;
    void *obj;
    if (player->cursor == 0) return 0;
    ((void (*)(void *))clear_lockon_list__10TObjPlayerFPvPvff)(&self->count);
    cur = TObjPlayer__sub_801B57E8(player);
    if (cur == 0) return 0;
    if (TMainCursor__sub_8013E900(cur) != 2) return 0;
    self->f20 = cur->x28;
    self->f24 = cur->x2c;
    self->f28 = cur->x30;
    self->f2c = cur->x3c;
    n = get_target__13TLockOnCursorFPv(cur->lock);
    e = self->ents;
    set_state__10TNpcPlayerFPvi(&self->count, n);
    for (i = 0; i != n; i++) {
        obj = TObjPlayer__sub_80116620(cur->lock, i);
        set_field_0__10TNpcPlayerFPvs(e, get_type_id__10TObjPlayerFPv(obj));
        set_field2__10TNpcPlayerFPvs(e, get_obj_id__10TObjPlayerFPv(obj));
        e++;
    }
    ((void (*)(void *, u16, s32))set_cursor_pos__11TMainCursorFiUsi)(player->cursor, self->ents[0].a, self->ents[0].b);
    return &self->count;
}
extern int fold_flush_46;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_movement_state__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DC3C0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DC3C4;
    clear_lockon_list__10TObjPlayerFPvPvff((s32 *)((void *)(arg0 + 0x30)), (void *)((void *)(arg0)), lbl_805DC3C0, lbl_805DC3BC);
}
extern int fold_flush_47;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s16 get_obj_id__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_saved_attack_stage__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x10) = v; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int is_flag32_clear__10TObjPlayerFPv(void* p) { return (((int (*)(void*, int))test_flags_any)((void*)((char*)p + 0xc), (int)(32))) == 0; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TObjPlayer__sub_801D345C(void* p) { return TObjPlayer__sub_80121248((char*)p + 0x30, 0); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int get_field_340__10TObjPlayerFPv(void* p, int _w1) { return set_action_palette_mode__10TObjPlayerFPv((char*)p + 0x340); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int check_status_flag_128__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))TObjPlayer__sub_8011E204)(p, 128); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_6x54(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_6x8C(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_6x65(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_6x8B(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_6x64(void) {  }
#pragma pop

}
