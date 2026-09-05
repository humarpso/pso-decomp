#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual M2C_UNK m40();
};
extern "C" {
u8 *activate_d04_slot__10TObjPlayerFPv();
void TObjPlayer__sub_801B0FF4(void);
}

extern "C" {

void check_flag_800000__10TObjPlayerFPv(void *arg0);
void update_photon_chair__10TObjPlayerFi(s32 arg0);
M2C_UNK check_flag__10TObjPlayerFPvi(void *, M2C_UNK);
M2C_UNK enter_battle_state__10TObjPlayerFPv(s32);
s32 obj_isState2_324(s32);
M2C_UNK set_flag_400000__10TObjPlayerFPv(s32);

void update_photon_chair__10TObjPlayerFi(s32 arg0) {
    enter_battle_state__10TObjPlayerFPv(arg0 + 0x634);
    if (obj_isState2_324(arg0) != 0) {
        set_flag_400000__10TObjPlayerFPv(arg0);
    }
}

void TObjPlayer__sub_801B0FF4(void) {
    u8 *temp_r3;
    temp_r3 = activate_d04_slot__10TObjPlayerFPv();
    if (temp_r3 != NULL) {
        ((VObj_18 *)(temp_r3))->m40();
    }
}

void check_flag_800000__10TObjPlayerFPv(void *arg0) {
    check_flag__10TObjPlayerFPvi(arg0, 0x800000);
}

}
