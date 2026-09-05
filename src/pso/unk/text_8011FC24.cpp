#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_4841bb { char pad[0x18]; };

struct VObj_18_4841bb : VBase_18_4841bb {
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
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual M2C_UNK m53();
};

extern "C" {
int test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
void TObjPlayer__sub_8011FCC4(u8 *arg0);
int test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
M2C_UNK TObjPlayer__sub_8011E87C(void *, int);
M2C_UNK TObjPlayer__sub_80120908(void *);
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);
void TObjPlayer__sub_8011FC24(u8 *arg0);
int test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
M2C_UNK TObjPlayer__sub_80120908(void *);
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);
void TObjPlayer__sub_8011FD38(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8011FC24(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x400U) != 0U) {
        TObjPlayer__sub_80120BBC((void *) (arg0), (int) (0x30));
        TObjPlayer__sub_8011E87C((void *) (arg0), (int) (0));
        TObjPlayer__sub_80120BBC((void *) (arg0), (int) (0x23));
        TObjPlayer__sub_8011E87C((void *) (arg0), (int) (1));
        return;
    }
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 1U) == 0U) {
        TObjPlayer__sub_80120908((void *) (arg0));
        TObjPlayer__sub_8011E87C((void *) (arg0), (int) (0));
        TObjPlayer__sub_8011E87C((void *) (arg0), (int) (1));
    }
}

void TObjPlayer__sub_8011FCC4(u8 *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0xCU) == 0xCU) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x80U) == 0U)) {
        ((VObj_18_4841bb *)(arg0))->m53();
        TObjPlayer__sub_8011FC24((u8 *)((void *) (arg0)));
    }
}
void TObjPlayer__sub_8011FD38(u8 *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0xCU) == 0xCU) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x80U) == 0U) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x1000U) == 0U)) {
        ((VObj_18_4841bb *)(arg0))->m53();
        if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x400U) != 0U) {
            TObjPlayer__sub_80120BBC((void *) (arg0), (int) (0x30));
            TObjPlayer__sub_80120BBC((void *) (arg0), (int) (0x23));
            return;
        }
        if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 1U) == 0U) {
            TObjPlayer__sub_80120908((void *) (arg0));
        }
    }
}

}
