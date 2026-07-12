#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_801819CC(M2C_UNK);
M2C_UNK TLobby__sub_801819E4(M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
extern s32 lbl_805D5B2C;

struct Base { u8 pad[0x18]; };
struct VObj : Base {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual void m8() = 0;
    virtual void m9() = 0;
    virtual void m10() = 0;
    virtual void m11() = 0;
    virtual void m12() = 0;
    virtual void m13() = 0;
    virtual void m14() = 0;
    virtual void m15() = 0;
    virtual void m16() = 0;
    virtual void m17() = 0;
    virtual void m18() = 0;
    virtual void m19() = 0;
    virtual s32 m20() = 0;
};

void fn_8018257C(u8 *arg0) {

    if (((VObj *)arg0)->m20() != 0) {
        TObjFish__sub_803DA798(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjDoor__sub_803DC894(TLobby__sub_801819E4(0x15), TLobby__sub_801819CC(0xC), M2C_FIELD(arg0, f32 *, 0xB4));
        TObjPlayer__sub_803D9B78();
    }
}

}
