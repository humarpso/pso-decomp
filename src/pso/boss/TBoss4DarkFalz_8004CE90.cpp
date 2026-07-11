#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004CE90(void);
void start_effect__14TBoss4DarkFalzFPv(void *arg0);
void TBoss4DarkFalz__sub_8004CEE4(s32 arg0);
void check_timeout__14TBoss4DarkFalzFi(s32 arg0);
void update_parts__14TBoss4DarkFalzFi(s32 arg0);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
s32 TBoss4DarkFalz__sub_8004B1BC(s32, s32);
s32 TBoss4DarkFalz__sub_8004B3BC(s32);
s32 TBoss4DarkFalz__sub_8004B77C(s32);
s32 TBoss4DarkFalz__sub_8004BA18(s32);
s32 TBoss4DarkFalz__sub_8004BA70();
s32 TOTrapAncient01__sub_80226578(s32, s32, s32, s32, s32);
s32 fn_8022675C(s32, s32, s32, s32);
s32 fn_8022743C();
s32 is_timer_expired__14TBoss4DarkFalzFPv();

void TBoss4DarkFalz__sub_8004CE90(void) {  }
void start_effect__14TBoss4DarkFalzFPv(void *arg0) {
    TBoss4DarkFalz__sub_8004BA70();
    fn_8022743C();
    fn_8022675C(0x4003A80B, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
}
void TBoss4DarkFalz__sub_8004CEE4(s32 arg0) {
    TOTrapAncient01__sub_80226578(0x4003A30A, arg0, 0, -0x18, 2);
}
void check_timeout__14TBoss4DarkFalzFi(s32 arg0) {
    if ((is_timer_expired__14TBoss4DarkFalzFPv() != 0) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 5);
    }
}
void update_parts__14TBoss4DarkFalzFi(s32 arg0) {
    fn_8022675C(0x4003AD0C, 0, 0, 0);
    TBoss4DarkFalz__sub_8004BA18(arg0);
    TBoss4DarkFalz__sub_8004B77C(arg0);
    TBoss4DarkFalz__sub_8004B3BC(arg0);
}

}
