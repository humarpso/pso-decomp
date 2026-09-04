#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjWaitEntryHairMoveSim__sub_800FE3BC(void);
int TObjWaitEntryHairMoveSim__sub_800FE3C0(void);
void *destroy__24TObjWaitEntryHairMoveSimFPvs(void *arg0, s16 arg1);
int is_move_done__24TObjWaitEntryHairMoveSimFv(void);
int TObjWaitEntryHairMoveSim__sub_800FE32C();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

int is_move_done__24TObjWaitEntryHairMoveSimFv(void) {
    return (~TObjWaitEntryHairMoveSim__sub_800FE32C()) != 0 ? 1 : 0;
}

void TObjWaitEntryHairMoveSim__sub_800FE3BC(void) {  }

int TObjWaitEntryHairMoveSim__sub_800FE3C0(void) { return 0; }

extern M2C_UNK lbl_8049DC8C[];

void *destroy__24TObjWaitEntryHairMoveSimFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049DC8C;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
