#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOComputerMachine01__sub_8023DDC8(s32, s32, s32, s32, s32);
s32 PPCSync();
s32 test_flag_2000000__10TObjPlayerFPv(u32);
s32 fn_8022675C(s32, s32, s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 fn_80087638(s32, s32);
s32 TItemProArmor__sub_80102C3C(void *);
s32 fn_80101AB0();
s8 fn_80102C30();
u16 fn_80100474(void* p);
void fn_801005D8(void);
void fn_801005DC(void);
void fn_801005E0(void);
int fn_801005E4(void);

int fn_8010043C(void) { return 0; }
u16 fn_80100474(void* p) { return *(u16*)((char*)p + 0xe8); }
int fn_8010047C(void) { return 0; }
s32 fn_80100490(void) {
    s32 temp_r3;

    temp_r3 = fn_80101AB0();
    if ((temp_r3 != 0) && (fn_80102C30() == 2)) {
        return temp_r3;
    }
    return 0;
}
void fn_801004DC(void *arg0) {
    s32 a, b, c;
    TOComputerMachine01__sub_8023DDC8(M2C_FIELD(arg0, s32 *, 4), a, b, c, 1);
    PPCSync();
}
void fn_80100508(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flag_2000000__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xF0)) == 0)) {
        fn_8022675C(arg1, M2C_FIELD(arg0, u32 *, 0xF0) + 0x38, 0, 0);
    }
}
void fn_80100564(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flag_2000000__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xF0)) == 0)) {
        temp_r3 = TOSwitchAttack__sub_80087278(M2C_FIELD(arg0, u32 *, 0xF0) + 0x2FC, arg1, 0x10);
        if (temp_r3 != 0) {
            fn_80087638(temp_r3, TItemProArmor__sub_80102C3C(arg0));
        }
    }
}
void fn_801005D8(void) {  }
void fn_801005DC(void) {  }
void fn_801005E0(void) {  }
int fn_801005E4(void) { return 0; }

}
