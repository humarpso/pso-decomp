#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__26TOContainerAncientItemRareFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_ancient_container__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__26TOContainerAncientItemRare[];

void *__dt__26TOContainerAncientItemRareFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__26TOContainerAncientItemRare;
        destroy_ancient_container__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8015BF7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base { char pad[0x18]; };
#define M0(x) virtual void m##x();
struct VObj : Base {
    M0(0) M0(1) M0(2) M0(3) M0(4) M0(5) M0(6) M0(7) M0(8) M0(9)
    M0(10) M0(11) M0(12) M0(13) M0(14) M0(15) M0(16) M0(17) M0(18) M0(19)
    M0(20) M0(21) M0(22) M0(23) M0(24) M0(25) M0(26) M0(27) M0(28) M0(29)
    M0(30) M0(31) M0(32) M0(33) M0(34) M0(35) M0(36) M0(37) M0(38) M0(39)
    M0(40) M0(41) M0(42) M0(43) M0(44) M0(45) M0(46) M0(47) M0(48) M0(49)
    M0(50) M0(51) M0(52) M0(53) M0(54) M0(55) M0(56) M0(57) M0(58) M0(59)
    M0(60) M0(61) M0(62) M0(63) M0(64) M0(65) M0(66) M0(67) M0(68) M0(69)
    M0(70) M0(71) M0(72) M0(73) M0(74) M0(75) M0(76)
    virtual void m77();
};

extern "C" {

void TOContainerAncientItemRare__vt4(u8 *arg0, s16 *arg1, s32 arg2);
M2C_UNK TLobby__sub_8010567C(void *, void *, M2C_UNK);
M2C_UNK set_flag8__6TLobbyFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TOContainerAncientItemRare__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 1) {
        if (arg2 != 0) {
            ((VObj*)arg0)->m77();
            TLobby__sub_8010567C(arg0, arg0 + 0x38, 1);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2B38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOContainerAncientItemRare__create(void *arg0);
void *TOContainerAncientItemRare__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *TOContainerAncientItemRare__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TOContainerAncientItemRare__ct(o, arg0);
    }
    return o;
}

}
#endif
#endif
