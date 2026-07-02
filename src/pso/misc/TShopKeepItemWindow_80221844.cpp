#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80221844 { char pad[0x18]; };
struct VObj_80221844 : Base_80221844 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8022187C { char pad[0x18]; };
struct VObj_8022187C : Base_8022187C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

extern "C" {

void TShopKeepItemWindow__sub_802218B4(void *arg0);
void TShopKeepItemWindow__sub_80221908(void *arg0);
void TShopKeepItemWindow__vt4(void *arg0);
void TShopKeepItemWindow__vt5(void *arg0);
M2C_UNK TShopWindowBase__sub_8022397C(void *);
M2C_UNK fn_802109A4();
M2C_UNK queue_destruction__7TObjectFv(void *);

void TShopKeepItemWindow__vt5(void *arg0) {
    struct VObj_80221844 *temp_r3;

    temp_r3 = (struct VObj_80221844 *)M2C_FIELD(arg0, void **, 0x380);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

void TShopKeepItemWindow__vt4(void *arg0) {
    struct VObj_8022187C *o = (struct VObj_8022187C *)M2C_FIELD(arg0, void **, 0x380);
    if (o != NULL) {
        o->m4();
    }
}

void TShopKeepItemWindow__sub_802218B4(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x398);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x380));
    }
    TShopWindowBase__sub_8022397C(arg0);
    fn_802109A4();
    queue_destruction__7TObjectFv(arg0);
}

void TShopKeepItemWindow__sub_80221908(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x394);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x380));
    }
    TShopWindowBase__sub_8022397C(arg0);
    fn_802109A4();
    queue_destruction__7TObjectFv(arg0);
}

}
