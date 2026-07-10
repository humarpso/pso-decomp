#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void free_children__12TObjDoorJungFPvPv(void *arg0, void *arg1);
void fn_8023DCB8(void *);

void free_children__12TObjDoorJungFPvPv(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, void **, 0x8) != NULL) {
        fn_8023DCB8(M2C_FIELD(arg0, void **, 0x8));
    }
    if (M2C_FIELD(arg0, void **, 0xC) != NULL) {
        ((void (*)(void *, void *))fn_8023DCB8)(M2C_FIELD(arg0, void **, 0xC), arg1);
    }
}

}
