#include "types.h"
#include "pso/misc/TShopEquipmentGearSequence.h"

extern "C" {

void *create_shop_item_tec_sequence(void *arg0);
int get_equipment_gear_shop_window_slot(int a0);
int get_item_technique_shop_slot(int a0);
void *TShopEquipmentGearSequence__ct(void *, void *, void *);
void *TShopItemTecSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TShopEquipmentGearSequence::create_instance(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TShopEquipmentGearSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TShopEquipmentGearSequence__window_slot_table[];
int get_equipment_gear_shop_window_slot(int a0) {  return TShopEquipmentGearSequence__window_slot_table[a0]; }

extern void *tl_05;

void *create_shop_item_tec_sequence(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TShopItemTecSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TShopItemTecSequence__slot_table[];
int get_item_technique_shop_slot(int a0) {  return TShopItemTecSequence__slot_table[a0]; }

}
