#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void reset__14TAdEnterBaseGCFPvi(void* a0, int a1);
void *__dt__14TAdEnterBaseGCFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

    extern int lbl_805D6CA0;
    extern int lbl_805D6CA8;
void reset__14TAdEnterBaseGCFPvi(void* a0, int a1) { *(int*)((char*)a0 + 0x24) = 0; *(int*)((char*)a0 + 0x20) = 0; lbl_805D6CA8 = a1; *(int*)((char*)a0 + 0x38) = 0; *(int*)((char*)a0 + 0x3c) = 0; *(int*)((char*)a0 + 0x28) = 0; *(int*)((char*)a0 + 0x2c) = 0; *(int*)((char*)a0 + 0x30) = 0; *(int*)((char*)a0 + 0x34) = 0; lbl_805D6CA0 = 0; }

extern M2C_UNK __vt__14TAdEnterBaseGC[];

void *__dt__14TAdEnterBaseGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdEnterBaseGC;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
