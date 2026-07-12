#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80122014(void *arg0);
void TObjPlayer__sub_80122028(void* p);
void TObjPlayer__sub_80122064(void* a0);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TObjPlayer__sub_80121200(void*);

void TObjPlayer__sub_80122014(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    }
}

void TObjPlayer__sub_80122028(void* p) { if (TObjPlayer__sub_80121200(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

    extern const float lbl_805DACD8;
void TObjPlayer__sub_80122064(void* a0) { *(float*)((char*)a0 + 0x1fc) = lbl_805DACD8; }

}
