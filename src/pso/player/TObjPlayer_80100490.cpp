#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOComputerMachine01__sub_8023DDC8(s32, s32, s32, s32, s32);
s32 PPCSync();
s32 test_flag_2000000__10TObjPlayerFPv(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
s32 TItemProArmor__sub_80102C3C(void *);
s32 TLobby__sub_80101AB0();
s8 TObjPlayer__sub_80102C30();
u16 TObjPlayer__sub_80100474(void* p);
void fn_801005D8(void);
void TItem__sub_801005DC(void);
void TItem__sub_801005E0(void);
int TItem__sub_801005E4(void);

s32 TObjPlayer__sub_80100490(void) {
    s32 temp_r3;

    temp_r3 = TLobby__sub_80101AB0();
    if ((temp_r3 != 0) && (TObjPlayer__sub_80102C30() == 2)) {
        return temp_r3;
    }
    return 0;
}
void TObjPlayer__sub_801004DC(void *arg0) {
    s32 a, b, c;
    TOComputerMachine01__sub_8023DDC8(M2C_FIELD(arg0, s32 *, 4), a, b, c, 1);
    PPCSync();
}

}
