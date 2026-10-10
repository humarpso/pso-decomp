#ifndef PSO_BOSS_TBOSS4TYPE3_H
#define PSO_BOSS_TBOSS4TYPE3_H

#include "types.h"
#include <stddef.h>

struct TBoss4Type3CollisionState {
    u8 unknown00[0x18]; u32 flags;
    u8 unknown1c[0xC]; f32 radius;
};

struct TBoss4Type3
{
    u8 unknown00[0x1C];
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    void* m_44;
    u8 _pad48[0x8];
    void* m_50;
    u8 _pad54[0xC];
    s32 m_60;
    u8 _pad64[0x10];
    void* m_74;
    u8 _pad78[0x230];
    u32 m_2a8;
    u8 _pad2AC[0x50];
    void* m_2fc;
    u8 _pad300[0x2C];
    s16 m_32c;
    u8 _pad32E[0x10];
    s16 m_33e;
    u8 _pad340[0x34];
    s32 m_374;
    void* m_378;
    u8 _pad37C[0x10];
    u32 m_38c;
    s32 m_390;
    TBoss4Type3CollisionState *m_394;
    s32 m_398;
    f32 m_39c;
    s32 m_3a0;
    u32 m_3a4;
    u32 m_3a8;
    u32 m_3ac;
    f32 m_3b0;
    u32 m_3b4;
    u16 m_3b8;
    u16 m_3ba;
    u32 m_3bc;
    u8 _pad3C0[0x4];
    u32 m_3c4;
    f32 m_3c8;
    s32 m_3cc;
    s32 m_3d0;
    s32 m_3d4;
    u32 m_3d8;
    f32 m_3dc;
    u32 m_3e0;
    u32 m_3e4;
    f32 m_3e8;
    f32 m_3ec;
    s32 m_3f0;
    f32 m_3f4;
    u8 _pad3F8[4];
    u32 m_3fc;
    u8 _pad400[0x18];
    void *m_418;
    void *m_41c;
    u8 _pad420[4];
    u32 m_424;
    u32 m_428;
    u32 m_42c;
    u32 m_430;
    u32 m_434;
    u8 _pad438[0x18];
    void* m_450;
    u8 _pad454[0x8];
    void* m_45c;
    u8 _pad460[0x14];
    void* m_474;
    u8 _pad478[0xA4];
    u32 m_51c;
    u32 m_520;
    u32 m_524;
    u32 m_528;
    u32 m_52c;

    void update_libera();
    void advance_libera();
    void enter_libera();
    void update_bura();
    void advance_bura();
    void enter_bura();
    void update_capture();
    void advance_capture();
    void enter_capture();
    void update_dark_magic();
    void advance_dark_magic();
    void enter_dark_magic();
    void update_light_magic();
    void advance_light_magic();
    void enter_light_magic();
    void update_homing();
    void advance_homing();
    void enter_homing();
    void update_go_down();
    void advance_go_down();
    void enter_go_down();
    void update_go_up();
    void advance_go_up();
    void enter_go_up();
    void update_cut();
    void advance_cut();
    void enter_cut();
    void update_dead();
    void advance_dead();
    void enter_dead();
    void advance_wait_next();
    void update_appear();
    void advance_appear();
    void enter_appear();

    void run_task();

};

typedef void (TBoss4Type3::*TBoss4Type3Handler)();
struct TBoss4Type3State {
    const char *name;
    s32 animation;
    TBoss4Type3Handler enter;
    TBoss4Type3Handler advance;
    TBoss4Type3Handler update;
};
typedef char Type3StateSize[(sizeof(TBoss4Type3State)==0x2C)?1:-1];
typedef char Type3StateEnter[(offsetof(TBoss4Type3State,enter)==0x8)?1:-1];
typedef char Type3StateAdvance[(offsetof(TBoss4Type3State,advance)==0x14)?1:-1];
typedef char Type3StateUpdate[(offsetof(TBoss4Type3State,update)==0x20)?1:-1];
typedef char Type3TimerOffset[(offsetof(TBoss4Type3,m_398)==0x398)?1:-1];
typedef char Type3FractionOffset[(offsetof(TBoss4Type3,m_39c)==0x39C)?1:-1];

typedef char Type3Offset_38[(offsetof(TBoss4Type3,m_38) == 0x38)?1:-1];
typedef char Type3Offset_60[(offsetof(TBoss4Type3,m_60) == 0x60)?1:-1];
typedef char Type3Offset_32c[(offsetof(TBoss4Type3,m_32c) == 0x32c)?1:-1];
typedef char Type3Offset_33e[(offsetof(TBoss4Type3,m_33e) == 0x33e)?1:-1];
typedef char Type3Offset_374[(offsetof(TBoss4Type3,m_374) == 0x374)?1:-1];
typedef char Type3Offset_378[(offsetof(TBoss4Type3,m_378) == 0x378)?1:-1];
typedef char Type3Offset_38c[(offsetof(TBoss4Type3,m_38c) == 0x38c)?1:-1];
typedef char Type3Offset_390[(offsetof(TBoss4Type3,m_390) == 0x390)?1:-1];
typedef char Type3Offset_394[(offsetof(TBoss4Type3,m_394) == 0x394)?1:-1];
typedef char Type3Offset_3a0[(offsetof(TBoss4Type3,m_3a0) == 0x3a0)?1:-1];
typedef char Type3Offset_3b0[(offsetof(TBoss4Type3,m_3b0) == 0x3b0)?1:-1];
typedef char Type3Offset_3b8[(offsetof(TBoss4Type3,m_3b8) == 0x3b8)?1:-1];
typedef char Type3Offset_3ba[(offsetof(TBoss4Type3,m_3ba) == 0x3ba)?1:-1];
typedef char Type3Offset_3c8[(offsetof(TBoss4Type3,m_3c8) == 0x3c8)?1:-1];
typedef char Type3Offset_3cc[(offsetof(TBoss4Type3,m_3cc) == 0x3cc)?1:-1];
typedef char Type3Offset_3d0[(offsetof(TBoss4Type3,m_3d0) == 0x3d0)?1:-1];
typedef char Type3Offset_3d4[(offsetof(TBoss4Type3,m_3d4) == 0x3d4)?1:-1];
typedef char Type3Offset_3dc[(offsetof(TBoss4Type3,m_3dc) == 0x3dc)?1:-1];
typedef char Type3Offset_3e8[(offsetof(TBoss4Type3,m_3e8) == 0x3e8)?1:-1];
typedef char Type3Offset_3ec[(offsetof(TBoss4Type3,m_3ec) == 0x3ec)?1:-1];
typedef char Type3Offset_3f0[(offsetof(TBoss4Type3,m_3f0) == 0x3f0)?1:-1];
typedef char Type3Offset_3f4[(offsetof(TBoss4Type3,m_3f4) == 0x3f4)?1:-1];
typedef char Type3Offset_418[(offsetof(TBoss4Type3,m_418) == 0x418)?1:-1];
typedef char Type3Offset_41c[(offsetof(TBoss4Type3,m_41c) == 0x41c)?1:-1];
typedef char Type3Size[(sizeof(TBoss4Type3)==0x530)?1:-1];

#endif
