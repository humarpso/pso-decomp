#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define VM(n) virtual void m##n();
struct Base_800386A4 { char pad[0x18]; };
struct VObj_800386A4 : Base_800386A4 {
    VM(0) VM(1) VM(2) VM(3) VM(4) VM(5) VM(6) VM(7) VM(8) VM(9)
    VM(10) VM(11) VM(12) VM(13) VM(14) VM(15) VM(16) VM(17) VM(18) VM(19)
    VM(20) VM(21) VM(22) VM(23) VM(24) VM(25) VM(26) VM(27) VM(28) VM(29)
    VM(30) VM(31) VM(32) VM(33) VM(34) VM(35) VM(36) VM(37) VM(38) VM(39)
    VM(40) VM(41) VM(42) VM(43) VM(44) VM(45) VM(46) VM(47) VM(48) VM(49)
    VM(50) VM(51) VM(52) VM(53) VM(54) VM(55) VM(56) VM(57) VM(58) VM(59)
    VM(60) VM(61) VM(62) VM(63) VM(64) VM(65) VM(66) VM(67) VM(68) VM(69)
    VM(70) VM(71) VM(72) VM(73) VM(74) VM(75) VM(76) VM(77) VM(78) VM(79)
    VM(80) VM(81) VM(82) VM(83) VM(84) VM(85) VM(86) VM(87) VM(88) VM(89)
    VM(90) VM(91) VM(92) VM(93) VM(94) VM(95) VM(96) VM(97) VM(98) VM(99)
    VM(100) VM(101)
    virtual void m102(s32);
    virtual void m103(s32);
    virtual void m104(s32);
    virtual void m105(s32);
    virtual void m106(s32);
};

extern "C" {

void TBoss2Mine__vt85(void *arg0, s32 arg1, s32 arg2) {
    VObj_800386A4 *o = (VObj_800386A4 *)arg0;
    switch (arg1) {
    case 0:
        o->m102(arg2);
        return;
    case 1:
        o->m103(arg2);
        return;
    case 2:
        o->m104(arg2);
        return;
    case 3:
        o->m105(arg2);
        return;
    case 4:
        o->m106(arg2);
        return;
    }
}

}
