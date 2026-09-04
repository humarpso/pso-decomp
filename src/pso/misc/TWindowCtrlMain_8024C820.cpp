#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_8024C820 {
    char pad[0x18];
    virtual void m0(int);
};

extern "C" {

void init_fields__15TWindowCtrlMainFPv(void* a0);
void release_ptr__15TWindowCtrlMainFPv(void **arg0);

void release_ptr__15TWindowCtrlMainFPv(void **arg0) {
    VObj_8024C820 *obj = (VObj_8024C820 *)*arg0;
    if (obj) {
        if (obj) {
            obj->m0(1);
        }
        *arg0 = NULL;
    }
}

    extern const float TWindowCtrlMain__data_805DCC18;
    extern const float TWindowCtrlMain__data_805DCC1C;
    extern const float TWindowCtrlMain__data_805DCC20;
void init_fields__15TWindowCtrlMainFPv(void* a0) { *(int*)((char*)a0 + 0x0) = 0; *(int*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0x8) = TWindowCtrlMain__data_805DCC18; *(float*)((char*)a0 + 0xc) = TWindowCtrlMain__data_805DCC18; *(float*)((char*)a0 + 0x10) = TWindowCtrlMain__data_805DCC18; *(float*)((char*)a0 + 0x14) = TWindowCtrlMain__data_805DCC1C; *(float*)((char*)a0 + 0x18) = TWindowCtrlMain__data_805DCC20; }

}
