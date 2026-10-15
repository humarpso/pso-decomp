#include "types.h"

extern "C" {

void TItemEquipBase__sub_8022F1F4(void *arg0, void *arg1);
void init_slots__14TItemEquipBaseFPv(void* p);
void set_slot__14TItemEquipBaseFiii(s32 arg0, s32 arg1, s32 arg2);
int init_slot__14TItemEquipBaseFPv(void*);

void set_slot__14TItemEquipBaseFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 < 6) {
        TItemEquipBase__sub_8022F1F4((void *)(arg0 + (arg1 * 8)), (void *)(arg2));
    }
}

void TItemEquipBase__sub_8022F1F4(void *arg0, void *arg1) {
    *(s16 *)((s8 *)arg0 + 0) = (s16) *(s16 *)((s8 *)arg1 + 0);
    *(u16 *)((s8 *)arg0 + 2) = (u16) *(u16 *)((s8 *)arg1 + 2);
    *(f32 *)((s8 *)arg0 + 4) = (f32) *(f32 *)((s8 *)arg1 + 4);
}

void init_slots__14TItemEquipBaseFPv(void* p) { { int i; for (i = 0; i < 6; i++) { init_slot__14TItemEquipBaseFPv((char*)p + i * 8); } } }

}
