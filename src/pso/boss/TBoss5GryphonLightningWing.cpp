#include "pso/TBoss5GryphonLightningWing.h"

TBoss5GryphonLightningWing::~TBoss5GryphonLightningWing() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80351DA8 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
s32 TBoss8Dragon__sub_80351CF0(s32, s32, s32, s32, s32, s32);
void fn_80351DA8(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4);
}

extern "C" {

void TLobby__sub_80351DF8(void);
void apply_lightning_effect__26TBoss5GryphonLightningWingFi(s32 arg0);
u8 is_lobby_event_active(void);
void render__26TBoss5GryphonLightningWingFv(void);
M2C_UNK TBoss8Dragon__sub_80063FB8(s32, M2C_UNK *, f32);
s32 TLobby__sub_80351DFC();
s32 get_instance_count__12TBoss8DragonFv();
M2C_UNK get_wing_position__26TBoss5GryphonLightningWingFii(s32, M2C_UNK *);

extern f32 lbl_805DFED0;

void apply_lightning_effect__26TBoss5GryphonLightningWingFi(s32 arg0) {
    M2C_UNK sp8;
    s32 temp_r3;

    temp_r3 = get_instance_count__12TBoss8DragonFv();
    if (temp_r3 != 0) {
        get_wing_position__26TBoss5GryphonLightningWingFii(arg0, &sp8);
        TBoss8Dragon__sub_80063FB8(temp_r3, &sp8, lbl_805DFED0);
    }
}

void render__26TBoss5GryphonLightningWingFv(void) {  }

void fn_80351DA8(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    Stack_80351DA8 stack;
    stack.sp8 = M2C_FIELD(arg2, f32 *, 0);
    stack.spC = M2C_FIELD(arg1, f32 *, 4);
    stack.sp10 = M2C_FIELD(arg2, f32 *, 8);
    TBoss8Dragon__sub_80351CF0(arg0, (s32) arg1, (s32) &stack.sp8, (s32) arg2, arg3, arg4);
}

void TLobby__sub_80351DF8(void) {  }

u8 is_lobby_event_active(void) {
    return (u8) (TLobby__sub_80351DFC() != 0);
}

}
