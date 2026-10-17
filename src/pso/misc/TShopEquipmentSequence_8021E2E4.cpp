#include "types.h"
#include "pso/misc/TShopEquipmentSequence_8021E2E4.h"
#include "pso/misc/TShopEquipmentSequence.h"

extern "C" {

void *TMedicalCenterSequence__ct(void *, void *, void *);
void *TShopEquipmentSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TShopEquipmentSequence::create_instance(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TShopEquipmentSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TShopEquipmentSequence__slot_active_flags[];
int get_equipment_shop_slot_active_flag(int a0) {  return TShopEquipmentSequence__slot_active_flags[a0]; }

void *create_medical_center_sequence(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TMedicalCenterSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TMedicalCenterSequence__data_80513E90[];
int TMedicalCenterSequence__sub_8021E390(int a0) {  return TMedicalCenterSequence__data_80513E90[a0]; }

}
