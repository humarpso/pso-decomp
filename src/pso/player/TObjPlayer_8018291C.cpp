#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80182954_8018291C { char pad[0x18]; };
struct VObj_80182954_8018291C : Base_80182954_8018291C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
};
struct Base_80182A58_8018291C { char pad[0x18]; };
struct VObj_80182A58_8018291C : Base_80182A58_8018291C {
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
    virtual s32 m12(f32);
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
};

extern "C" {

struct Vec_8018291C { char pad14[0x14]; f32 x; f32 y; };
struct Base_8018291C { char pad[0x18]; };
struct VObj_8018291C : Base_8018291C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m10(f32, f32);
    char pad2[0xB8 - 0x18 - 4];
    Vec_8018291C *m;
};
struct Base_80182C04_8018291C { char pad[0x18]; };
struct VObj_80182C04_8018291C : Base_80182C04_8018291C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual s32 m12(f32);
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17();
    virtual void m18();
};

void TObjPlayer__sub_8018291C(VObj_8018291C *arg0);
void TObjPlayer__sub_801829E8(s32 arg0);
void TObjPlayer__sub_80182A20(s32 arg0);
void begin_state_1__10TObjPlayerFPv(void *arg0);
void check_ground_or_fall__10TObjPlayerFPv(void *arg0);
void dispatch_state__10TObjPlayerFPv(void *arg0);
s32 is_player_in_range__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
f32 TObjPlayer__sub_80141CF8(s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_field_3e0__12TBoss3VoloptFPv();

void TObjPlayer__sub_8018291C(VObj_8018291C *arg0) {
    arg0->m10(arg0->m->x, arg0->m->y);
}

void dispatch_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        ((VObj_80182954_8018291C *)arg0)->m13();
        return;
    case 1:
        ((VObj_80182954_8018291C *)arg0)->m15();
        return;
    case 2:
        ((VObj_80182954_8018291C *)arg0)->m16();
        return;
    case 3:
        ((VObj_80182954_8018291C *)arg0)->m14();
        return;
    }
}

void TObjPlayer__sub_801829E8(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x42A04, arg0 + 0x38, 0, 0);
}

void TObjPlayer__sub_80182A20(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x42A05, arg0 + 0x38, 0, 0);
}

void check_ground_or_fall__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xB8);
    if (((VObj_80182A58_8018291C *)arg0)->m12(M2C_FIELD(temp_r4, f32 *, 8)) == 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        ((VObj_80182A58_8018291C *)arg0)->m17();
    }
}

void begin_state_1__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;
    VObj_80182C04_8018291C *obj = (VObj_80182C04_8018291C *)arg0;

    temp_r4 = M2C_FIELD(arg0, void **, 0xB8);
    if (obj->m12(M2C_FIELD(temp_r4, f32 *, 4)) != 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        obj->m18();
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
    }
}

s32 is_player_in_range__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r30;

    var_r30 = 0;
loop_1:
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r30);
    if ((temp_r3 != 0) && ((temp_r3_2 = get_field_3e0__12TBoss3VoloptFPv(), ((temp_r3_2 == 0) != 0)) || (temp_r3_2 == 0x12)) && (TObjPlayer__sub_80141CF8(arg1, temp_r3 + 0x38) < farg0)) {
        return 1;
    }
    var_r30 += 1;
    if (var_r30 >= 4) {
        return 0;
    }
    goto loop_1;
}

}
