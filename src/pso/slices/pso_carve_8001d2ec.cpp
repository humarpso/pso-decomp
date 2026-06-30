#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void queue_destruction__7TObjectFv(void *);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_80480C98[];

void *TNowLoading__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80480C98;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20)); M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
