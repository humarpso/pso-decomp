#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8016A004 { char pad[0x18]; };
struct VObj_8016A004 : Base_8016A004 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual void m17();
};

extern "C" {

void TOKey__sub_80169FB0(void* p);
s32 TOKey__sub_80169FBC(void *arg0);
void TOKey__sub_8016A004(void *arg0, void *arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_800196EC();
M2C_UNK TSwitch__sub_802292E0(u16);
M2C_UNK TSwitch__sub_802293A0(u16);
s32 fn_801A2340();

void TOKey__sub_80169FB0(void* p) { *(s32*)((char*)p + 0x0) = 1; }
s32 TOKey__sub_80169FBC(void *arg0) {
    if (fn_801A2340() == 1) {
        M2C_FIELD(arg0, s32 *, 0xE4) = 1;
        return 1;
    }
    return 0;
}

void TOKey__sub_8016A004(void *arg0, void *arg1) {
    s32 temp_r0;

    if ((M2C_FIELD(arg1, u8 *, 0xB) & 2) && ((s8) M2C_FIELD(arg1, u8 *, 0xA) == TObjPlayer__sub_800196EC())) {
        TBoss3Volopt__sub_8022675C(0x4005281F, 0, 0, 0);
    }
    if (M2C_FIELD(arg1, u8 *, 0xB) & 1) {
        TSwitch__sub_802293A0(M2C_FIELD(arg1, u16 *, 8));
    } else {
        TSwitch__sub_802292E0(M2C_FIELD(arg1, u16 *, 8));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD4);
    switch (temp_r0) {
    case 0:
        ((VObj_8016A004 *)arg0)->m16();
        M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        return;
    case 1:
        ((VObj_8016A004 *)arg0)->m17();
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        return;
    }
}

}
