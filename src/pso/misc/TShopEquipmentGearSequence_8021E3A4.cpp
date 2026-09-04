#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_shop_item_tec_sequence(void *arg0);
int TShopEquipmentGearSequence__sub_8021E3F0(int a0);
int TShopItemTecSequence__sub_8021E450(int a0);
void *create_instance__26TShopEquipmentGearSequenceFPv(void *arg0);
void *TShopEquipmentGearSequence__ct(void *, void *, void *);
void *TShopItemTecSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create_instance__26TShopEquipmentGearSequenceFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TShopEquipmentGearSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TShopEquipmentGearSequence__data_80513EB0[];
int TShopEquipmentGearSequence__sub_8021E3F0(int a0) {  return TShopEquipmentGearSequence__data_80513EB0[a0]; }

extern void *tl_05;

void *create_shop_item_tec_sequence(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TShopItemTecSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TShopItemTecSequence__data_80513EE0[];
int TShopItemTecSequence__sub_8021E450(int a0) {  return TShopItemTecSequence__data_80513EE0[a0]; }

}
