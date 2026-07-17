#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4DarkFalz__sub_8004CA80(void);
void request_action_9__14TBoss4DarkFalzFi(s32 arg0);
void update_parts__14TBoss4DarkFalzFPv(void* p);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
M2C_UNK TBoss4DarkFalz__sub_8004B1BC(s32, M2C_UNK);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004BA18(void*);
s32 get_phase__14TBoss4DarkFalzFPv(u32);

void TBoss4DarkFalz__sub_8004CA80(void) {  }

extern u32 TBoss4DarkFalz__data_805D4D60;

void request_action_9__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D60 == 0U) || (get_phase__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D60) == 3) || (get_phase__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D60) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC(arg0, 9);
    }
}

void update_parts__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA18(p); TBoss4DarkFalz__sub_8004B77C(p); }

}
