#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004C93C(void);
void TBoss4DarkFalz__sub_8004CA80(void);
void TBoss4DarkFalz__sub_8004CBBC(void);
void TBoss4DarkFalz__sub_8004CE90(void);
void check_timeout__14TBoss4DarkFalzFi(s32 arg0);
void request_action_7__14TBoss4DarkFalzFi(s32 arg0);
void request_action_9__14TBoss4DarkFalzFi(s32 arg0);
void spawn_ancient_trap__14TBoss4DarkFalzFi(s32 arg0);
void spawn_trap__14TBoss4DarkFalzFi(s32 arg0);
void start_effect__14TBoss4DarkFalzFPv(void *arg0);
void update_parts__14TBoss4DarkFalzFPv(void* p);
void update_parts__14TBoss4DarkFalzFi(s32 arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
s32 TBoss4DarkFalz__sub_8004B1BC(s32, s32);
s32 TBoss4DarkFalz__sub_8004B3BC(s32);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004BA18(void*);
s32 TBoss4DarkFalz__sub_8004BA70();
s32 TBoss4DarkFalz__sub_8004D990();
s32 TLobby__sub_8022743C();
s32 TOTrapAncient01__sub_80226578(s32, s32, s32, s32, s32);
s32 get_phase__14TBoss4DarkFalzFPv(u32);
s32 get_state__14TBoss4DarkFalzFPv(u32);
s32 is_timer_expired__14TBoss4DarkFalzFPv();

void TBoss4DarkFalz__sub_8004C93C(void) {  }

void TBoss4DarkFalz__sub_8004CA80(void) {  }

extern u32 TBoss4DarkFalz__data_805D4D60;

void request_action_9__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D60 == 0U) || (get_phase__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D60) == 3) || (get_phase__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D60) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC((s32)(arg0), (s32)(9));
    }
}

void update_parts__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA18((void*)(p)); TBoss4DarkFalz__sub_8004B77C((void*)(p)); }

void TBoss4DarkFalz__sub_8004CBBC(void) {  }

void spawn_ancient_trap__14TBoss4DarkFalzFi(s32 arg0) {
    if (TBoss4DarkFalz__sub_8004D990() > 0) {
        TOTrapAncient01__sub_80226578((s32)(0x4003A30A), (s32)(arg0), (s32)(0), (s32)(-0x20), (s32)(2));
    }
}

extern u32 TBoss4DarkFalz__data_805D4D5C;

void request_action_7__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D5C == 0U) || (get_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D5C) == 3) || (get_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D5C) == 4) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC((s32)(arg0), (s32)(7));
    }
}

void TBoss4DarkFalz__sub_8004CE90(void) {  }
void start_effect__14TBoss4DarkFalzFPv(void *arg0) {
    TBoss4DarkFalz__sub_8004BA70();
    TLobby__sub_8022743C();
    TBoss3Volopt__sub_8022675C(0x4003A80B, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
}
void spawn_trap__14TBoss4DarkFalzFi(s32 arg0) {
    TOTrapAncient01__sub_80226578((s32)(0x4003A30A), (s32)(arg0), (s32)(0), (s32)(-0x18), (s32)(2));
}
void check_timeout__14TBoss4DarkFalzFi(s32 arg0) {
    if ((is_timer_expired__14TBoss4DarkFalzFPv() != 0) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC((s32)(arg0), (s32)(5));
    }
}
void update_parts__14TBoss4DarkFalzFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003AD0C, 0, 0, 0);
    TBoss4DarkFalz__sub_8004BA18((void*)(arg0));
    TBoss4DarkFalz__sub_8004B77C((void*)(arg0));
    TBoss4DarkFalz__sub_8004B3BC(arg0);
}

}
