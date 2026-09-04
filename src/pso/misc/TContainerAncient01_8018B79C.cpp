#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8018B820_8018B79C { char pad[0x18]; };
struct VObj_8018B820_8018B79C : Base_8018B820_8018B79C {
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
    virtual void m20(s32, f32);
};
struct VBase8018B8BC_8018B79C { char pad[0x18]; };
struct VObj8018B8BC_8018B79C : VBase8018B8BC_8018B79C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

int TContainerAncient01__vt19(void);
f32 TContainerAncient01__vt20(void *arg0);
f32 TContainerAncient01__vt21(void *arg0, s32 arg1, s32 *arg2);
void render__19TContainerAncient01Fv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
s32 TLobby__sub_80156A80(void *, s16 *, M2C_UNK);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK TObjPlayer__sub_80154954(void *, s16 *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK reset_state__19TContainerAncient01FPv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern f32 TContainerAncient01__data_805DBD14;

f32 TContainerAncient01__vt20(void *arg0) {
    s16 sp8;

    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U) {
        reset_state__19TContainerAncient01FPv();
        if (((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80(arg0, &sp8, 1) != 0)) {
            sp8 = 1;
            TLobby__sub_80156A80(arg0, &sp8, 0);
            TObjPlayer__sub_80154954(arg0, &sp8);
        }
    }
    return TContainerAncient01__data_805DBD14;
}

extern f32 TContainerAncient01__data_805DBD10;
extern f32 TContainerAncient01__data_805DBD14;

f32 TContainerAncient01__vt21(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r4;
    struct VObj_8018B820_8018B79C *o = (struct VObj_8018B820_8018B79C *)arg0;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, TContainerAncient01__data_805DBD10);
    }
    return TContainerAncient01__data_805DBD14;
}

int TContainerAncient01__vt19(void) { return 1; }

extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD4C;

void render__19TContainerAncient01Fv(u8 *arg0) {
    if (((VObj8018B8BC_8018B79C *) arg0)->m8(TContainerAncient01__data_805DBD3C, lbl_805DBD4C) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x35C) != 0) {
            TBoss7Tentacle__sub_803D9BA0(arg0 + 0x360);
        }
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
