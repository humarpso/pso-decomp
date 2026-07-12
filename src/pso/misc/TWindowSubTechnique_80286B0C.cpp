#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80286B0C { char pad[0x18]; };
struct VObj_80286B0C : Base_80286B0C {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)
#undef VV
    virtual s32 v36();
};

extern "C" {

void TWindowSubTechnique__sub_80286B0C(s16 *arg0, s32 *arg1, s32 arg2);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);

void TWindowSubTechnique__sub_80286B0C(s16 *arg0, s32 *arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg2);
    if (temp_r3 != NULL) {
        *arg0 = M2C_FIELD(temp_r3, s16 *, 0x32E);
        *arg1 = ((VObj_80286B0C *)temp_r3)->v36();
    }
}

}
