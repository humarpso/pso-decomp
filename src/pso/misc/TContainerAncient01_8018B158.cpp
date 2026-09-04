#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
int TObjEneDellBiter__sub_80087350(void*, void*);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
}

extern "C" {

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2);
void reset_state__19TContainerAncient01FPv(void* a0);
M2C_UNK TContainerAncient01__sub_8018B700();

    extern const float TContainerAncient01__data_805DBD1C;

void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2) { TObjEneDellBiter__sub_80087350(a1, a2); }

void reset_state__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            TContainerAncient01__sub_8018B700();
            M2C_FIELD(arg0, s32 *, 0x35C) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0x35C) = 1;
    }
}

}
