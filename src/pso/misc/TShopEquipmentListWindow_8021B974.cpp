#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8021B974 { char pad[0x18]; };
struct VObj_8021B974 : Base_8021B974 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021B9AC { char pad[0x18]; };
struct VObj_8021B9AC : Base_8021B9AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_list__24TShopEquipmentListWindowFPvPv(void *arg0, void *arg1);
void TShopEquipmentListWindow__vt4(void *arg0);
void TShopEquipmentListWindow__vt5(void *arg0);
M2C_UNK get_item_count__24TShopEquipmentSellWindowFPv(void *a, s32 b);

void TShopEquipmentListWindow__vt5(void *arg0) {
    struct VObj_8021B974 *o = (struct VObj_8021B974 *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m5();
    }
}

void TShopEquipmentListWindow__vt4(void *arg0) {
    struct VObj_8021B9AC *o = (struct VObj_8021B9AC *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m4();
    }
}

void update_list__24TShopEquipmentListWindowFPvPv(void *arg0, void *arg1) {
    void *v = M2C_FIELD(arg0, void **, 0x3C);
    if (v != 0) {
        s32 n = M2C_FIELD(arg1, s32 *, 0x10);
        if (n > 0) {
            get_item_count__24TShopEquipmentSellWindowFPv(v, n);
        }
    }
}

}
