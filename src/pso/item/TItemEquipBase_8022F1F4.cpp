#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEquipBase__sub_8022F1F4(void *arg0, void *arg1);
void TItemEquipBase__sub_8022F210(void* p);
int TItemEquipBase__sub_8010B76C(void*);

void TItemEquipBase__sub_8022F1F4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
}

void TItemEquipBase__sub_8022F210(void* p) { { int i; for (i = 0; i < 6; i++) { TItemEquipBase__sub_8010B76C((char*)p + i * 8); } } }

}
