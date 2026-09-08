#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8016A604 { char pad[0x18]; };
struct VObj_8016A604 : Base_8016A604 {
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
};

#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern s32 enable_v2_features;
void TBoss3Volopt__sub_8016A630(u8 *arg0);
u32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern s32 enable_v2_features;
void TBoss3Volopt__sub_8016A47C(s32 arg0);
}

extern "C" {

void call_vt21__12TBoss3VoloptFPv(void *arg0);

void TBoss3Volopt__sub_8016A47C(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 1:
    case 2:
        TBoss3Volopt__sub_8022675C((int) (0x4AD0C), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 3:
    case 4:
    case 5:
        TBoss3Volopt__sub_8022675C((int) (0x42D0B), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 6:
    case 7:
        TBoss3Volopt__sub_8022675C((int) (0x4004AD05), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 8:
    case 9:
    case 10:
        TBoss3Volopt__sub_8022675C((int) (0x4004AD0C), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 16:
    case 17:
        if ((s32) enable_v2_features == 1) {
            TBoss3Volopt__sub_8022675C((int) (0x4004AD03), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            break;
        }
    default:
        break;
    case 19:
    case 20:
        TBoss3Volopt__sub_8022675C((int) (0x4AD03), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 21:
    case 22:
        TBoss3Volopt__sub_8022675C((int) (0x4004AD03), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        TBoss3Volopt__sub_8022675C((int) (0x4AD13), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 34:
        TBoss3Volopt__sub_8022675C((int) (0x4004AD13), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 35:
        TBoss3Volopt__sub_8022675C((int) (0x4004AD13), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 28:
    case 29:
        TBoss3Volopt__sub_8022675C((int) (0x4004AD13), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    }
}

void call_vt21__12TBoss3VoloptFPv(void *arg0) {
    struct VObj_8016A604 *o = (struct VObj_8016A604 *)arg0;
    o->m21();
}
void TBoss3Volopt__sub_8016A630(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    u32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 1:
    case 2:
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
        switch (temp_r0) {
        case 0:
            TBoss3Volopt__sub_8022675C((int) (0x4C60A), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
            return;
        case 1:
            TBoss3Volopt__sub_8022675C((int) (0x4AD0B), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
            return;
        }
        break;
    case 3:
    case 4:
    case 5:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xD0);
        switch (temp_r0_2) {
        case 0:
            TBoss3Volopt__sub_8022675C((int) (0x44609), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
            return;
        case 1:
            TBoss3Volopt__sub_8022675C((int) (0x42D0A), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
            return;
        }
        break;
    case 6:
    case 7:
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0xD0);
        switch (temp_r0_3) {
        case 0:
            TBoss3Volopt__sub_8022675C((int) (0x4004C603), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
            return;
        case 1:
            TBoss3Volopt__sub_8022675C((int) (0x4004AD04), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
            return;
        }
        break;
    case 8:
    case 9:
    case 10:
        temp_r0_4 = M2C_FIELD(arg0, s32 *, 0xD0);
        switch (temp_r0_4) {
        case 0:
            TBoss3Volopt__sub_8022675C((int) (0x4004C60A), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
            return;
        case 1:
            TBoss3Volopt__sub_8022675C((int) (0x4004AD0B), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
            return;
        }
        break;
    case 16:
    case 17:
        if ((s32) enable_v2_features == 1) {
            temp_r0_5 = M2C_FIELD(arg0, s32 *, 0xD0);
            switch (temp_r0_5) {
            case 0:
                TBoss3Volopt__sub_8022675C((int) (0x4004C601), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
                return;
            case 1:
                TBoss3Volopt__sub_8022675C((int) (0x4004AD02), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
                return;
            }
        }
        break;
    case 19:
    case 20:
        TBoss3Volopt__sub_8022675C((int) (0x4C601), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
        return;
    case 21:
    case 22:
        TBoss3Volopt__sub_8022675C((int) (0x4004C601), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
        return;
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        TBoss3Volopt__sub_8022675C((int) (0x4C611), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
        return;
    case 34:
        TBoss3Volopt__sub_8022675C((int) (0x4004C611), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
        return;
    case 35:
        TBoss3Volopt__sub_8022675C((int) (0x4004C611), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
        return;
    case 28:
    case 29:
        TBoss3Volopt__sub_8022675C((int) (0x4004C611), (void *) ((u8 *)(arg0) + 0x38), (int) (0), (int) (0));
        break;
    }
}

}
