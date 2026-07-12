#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_801D89E0(void *arg0, s16 arg1);
void TObjPlayer__sub_801D8A38(void* a0);
void* TObjPlayer__sub_801D8A4C(void* p);
s32 init_inventory_items__10TObjPlayerFi(s32 arg0);
int TObjPlayer__sub_801BFF80(void*);
void __dl__7TObjectFPv(void *);
void __dt__10TObjPlayerFv(void *, int);
M2C_UNK init__17TPlyInventoryItemFv(s32);

extern M2C_UNK lbl_804C4540[];

void *TObjPlayer__sub_801D89E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4540;
        __dt__10TObjPlayerFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern const float lbl_805DC3F8;
void TObjPlayer__sub_801D8A38(void* a0) { *(short*)((char*)a0 + 0x0) = 1; *(float*)((char*)a0 + 0x4) = lbl_805DC3F8; }

void* TObjPlayer__sub_801D8A4C(void* p) { init_inventory_items__10TObjPlayerFi((s32)((char*)p + 0x50)); TObjPlayer__sub_801BFF80((char*)p + 0xac); TObjPlayer__sub_801D8A38((void*)((char*)p + 0xc0)); return p; }

s32 init_inventory_items__10TObjPlayerFi(s32 arg0) {
    s32 var_r30;
    s32 var_r31;

    var_r31 = 0;
    var_r30 = 0;
    do {
        init__17TPlyInventoryItemFv(arg0 + var_r30);
        var_r31 += 1;
        var_r30 += 0x1C;
    } while (var_r31 < 2);
    return arg0;
}

}
