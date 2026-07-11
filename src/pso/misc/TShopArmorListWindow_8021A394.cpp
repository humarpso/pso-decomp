#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8021A394 { char pad[0x18]; };
struct VObj_8021A394 : Base_8021A394 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021A3CC { char pad[0x18]; };
struct VObj_8021A3CC : Base_8021A3CC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_selection__20TShopArmorListWindowFPvPv(void *arg0, void *arg1);
void TShopArmorListWindow__vt4(void *arg0);
void TShopArmorListWindow__vt5(void *arg0);
M2C_UNK fn_803094E8(void *a, s32 b);

void TShopArmorListWindow__vt5(void *arg0) {
    struct VObj_8021A394 *o = (struct VObj_8021A394 *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m5();
    }
}

void TShopArmorListWindow__vt4(void *arg0) {
    struct VObj_8021A3CC *o = (struct VObj_8021A3CC *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m4();
    }
}

void update_selection__20TShopArmorListWindowFPvPv(void *arg0, void *arg1) {
    void *r3 = M2C_FIELD(arg0, void **, 0x3C);
    if (r3 != 0) {
        s32 r4 = M2C_FIELD(arg1, s32 *, 0x10);
        if (r4 > 0) {
            fn_803094E8(r3, r4);
        }
    }
}

}
