#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802CA8C8 { char pad[0x18]; };
struct VObj_802CA8C8 : Base_802CA8C8 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)
    V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)
#undef V
    virtual void m83();
};

extern "C" {

void TOTrapSeabed01__vt4(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK fn_8020C5E0(void *);
M2C_UNK fn_80226294(s32);
M2C_UNK fn_802C9D38(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TOTrapSeabed01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_802CA8C8 *)arg0)->m83();
        }
        s32 tmp = M2C_FIELD(arg0, s32 *, 0x358);
        if (tmp >= 0) {
            fn_80226294(tmp);
            tmp = -1;
            M2C_FIELD(arg0, s32 *, 0x358) = tmp;
        }
        fn_802C9D38(arg0);
        fn_8020C5E0(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
