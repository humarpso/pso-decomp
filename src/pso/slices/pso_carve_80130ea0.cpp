#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80121200();
M2C_UNK TBoss7Tentacle__sub_803D9BA0(s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(s32);

void dispatch_player_action_by_type(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_80121200();
    switch (temp_r3) {
    case 1:
        TOHangerMachine01__sub_803D9C00(arg0 + 0x20C);
        return;
    case 2:
        TBoss7Tentacle__sub_803D9BA0(arg0 + 0x1FC);
        return;
    }
}

}
