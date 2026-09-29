#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
#include "pso/boss/TBoss4DarkFalz.h"
struct Stack_8004B084 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B084 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108 {
    M2C_UNK value;
    u8 remaining[0x33C];
};

struct Stack_8004B0F8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B0F8 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108 {
    M2C_UNK value;
    u8 remaining[0x33C];
};

struct Obj_8004B16C { u8 pad[0x1C]; u16 id; };

struct Msg_8004B16C { u8 code; u8 size; u16 id; s16 a; u8 pad6[2]; s32 b; u8 padc[4]; };

struct Obj_8004B1BC { u8 pad[0x1C]; u16 id; };

struct Msg_8004B1BC { u8 code; u8 size; u16 id; s16 a; u8 pad6[2]; s32 b; u8 padc[4]; };

extern "C" {
void *get_player_data__10TObjPlayerFi(s32 i);
extern s32 lbl_805D586C;
s32 init_all_slots2__11TWindowCtrlFv();
s32 end_camera_pan__10TObjPlayerFPv(void *p);
s32 TObjPlayer__sub_801CBF7C();
void TBoss6PlotFalz__sub_802AC678(void *self);
}

extern "C" {

void render__14TBoss6PlotFalzFv(void);
void TBoss6PlotFalz__vt61(void);

typedef char MemberActionStorage_8004B084_size[sizeof(MemberActionStorage_8004B084) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108_size[sizeof(RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108) == 0x340 ? 1 : -1];
typedef char MemberActionStorage_8004B0F8_size[sizeof(MemberActionStorage_8004B0F8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108_size[sizeof(RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108) == 0x340 ? 1 : -1];
void TBoss6PlotFalz__sub_802AC678(void *self) {
    s32 i;
    void *p;
    init_all_slots2__11TWindowCtrlFv();
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            end_camera_pan__10TObjPlayerFPv(p);
        }
    }
    TObjPlayer__sub_801CBF7C();
}

int TBoss6PlotFalz__sub_802AC724(void) { return 0; }

}
