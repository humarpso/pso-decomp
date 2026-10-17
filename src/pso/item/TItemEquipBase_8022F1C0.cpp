#include "types.h"
#include "pso/item/TItemEquipBase_8022F1C0.h"
#include "pso/item/TItemEquipBase.h"

void TItemEquipBase::set_slot(s32 arg1, s32 arg2) {
    s32 arg0 = (s32)this;
    if (arg1 < 6) {
        TItemEquipBase__sub_8022F1F4((void *)(arg0 + (arg1 * 8)), (void *)arg2);
    }
}

void TItemEquipBase__sub_8022F1F4(void *arg0, void *arg1) {
    *(s16 *)((s8 *)arg0 + 0) = (s16) *(s16 *)((s8 *)arg1 + 0);
    *(u16 *)((s8 *)arg0 + 2) = (u16) *(u16 *)((s8 *)arg1 + 2);
    *(f32 *)((s8 *)arg0 + 4) = (f32) *(f32 *)((s8 *)arg1 + 4);
}

void TItemEquipBase::init_slots() { { int i; for (i = 0; i < 6; i++) { ((TItemEquipBase *)((char*)this + i * 8))->init_slot(); } } }
