#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_802FC164(void *arg0, s32 arg1, s32 arg2);
void TBoss8Dragon__sub_802FC1B4(void* a0);
void TBoss8Dragon__sub_802FC1CC(void* a0);
void TBoss8Dragon__sub_802FC1E4(void* a0);
void TBoss8Dragon__sub_802FC1FC(void* p);
void TBoss8Dragon__sub_802FC208(void* p);
void TBoss8Dragon__sub_802FC214(void* p);
s32 TBoss4Type2__sub_80141FA8(s32, s32);

void TBoss8Dragon__sub_802FC164(void *arg0, s32 arg1, s32 arg2) {
    if (TBoss4Type2__sub_80141FA8(arg1, arg2) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x654) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x654) = -1;
}

    extern const float lbl_805DED70;
void TBoss8Dragon__sub_802FC1B4(void* a0) { *(int*)((char*)a0 + 0x3c0) = (*(int*)((char*)a0 + 0x3c0) & 0xfffffffe); *(float*)((char*)a0 + 0x3c) = lbl_805DED70; }

    extern const float lbl_805DEE70;
void TBoss8Dragon__sub_802FC1CC(void* a0) { *(int*)((char*)a0 + 0x3c0) = (*(int*)((char*)a0 + 0x3c0) | 0x1); *(float*)((char*)a0 + 0x3c) = lbl_805DEE70; }

    extern const float TBoss8Dragon__data_805DED50;
void TBoss8Dragon__sub_802FC1E4(void* a0) { *(int*)((char*)a0 + 0x3c0) = (*(int*)((char*)a0 + 0x3c0) | 0x1); *(float*)((char*)a0 + 0x3c) = TBoss8Dragon__data_805DED50; }

void TBoss8Dragon__sub_802FC1FC(void* p) { *(s32*)((char*)p + 0x3e4) = 2; }
void TBoss8Dragon__sub_802FC208(void* p) { *(s32*)((char*)p + 0x3e4) = 1; }
void TBoss8Dragon__sub_802FC214(void* p) { *(s32*)((char*)p + 0x3e4) = 0; }

}
