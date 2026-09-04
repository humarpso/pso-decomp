#include "pso/TObjWaitEntryHairMoveSim.h"

TObjWaitEntryHairMoveSim::~TObjWaitEntryHairMoveSim() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__24TObjWaitEntryHairMoveSimFv(void *arg0, void *arg1);
void run_task__24TObjWaitEntryHairMoveSimFv(void *arg0);
M2C_UNK TObjWaitEntryHairMoveSim__sub_800FE5A0(void *);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__24TObjWaitEntryHairMoveSimFv(void *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0xCFC) == 0) {
        TObjWaitEntryHairMoveSim__sub_800FE5A0(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__24TObjWaitEntryHairMoveSim[];
extern void *lbl_805D2B40;

void *__ct__24TObjWaitEntryHairMoveSimFv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TObjWaitEntryHairMoveSim;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B40;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    return arg0;
}

}
