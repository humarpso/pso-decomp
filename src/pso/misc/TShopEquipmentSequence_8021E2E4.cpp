#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_medical_center_sequence(void *arg0);
int TMedicalCenterSequence__sub_8021E390(int a0);
int TShopEquipmentSequence__sub_8021E330(int a0);
void *create_instance__22TShopEquipmentSequenceFPv(void *arg0);
void *TMedicalCenterSequence__ct(void *, void *, void *);
void *TShopEquipmentSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create_instance__22TShopEquipmentSequenceFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TShopEquipmentSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TShopEquipmentSequence__slot_active_flags[];
int TShopEquipmentSequence__sub_8021E330(int a0) {  return TShopEquipmentSequence__slot_active_flags[a0]; }

extern void *tl_05;

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
