#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjWaitEntryHairMoveSim__sub_800FE364(void *);
void TObjWaitEntryHairMoveSim__sub_800FE3C0(u8 *arg0);
}

extern "C" {

void TObjWaitEntryHairMoveSim__sub_800FE3BC(void);
void *destroy__24TObjWaitEntryHairMoveSimFPvs(void *arg0, s16 arg1);
int is_move_done__24TObjWaitEntryHairMoveSimFv(void);
int TObjWaitEntryHairMoveSim__sub_800FE32C();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

int is_move_done__24TObjWaitEntryHairMoveSimFv(void) {
    return (~TObjWaitEntryHairMoveSim__sub_800FE32C()) != 0 ? 1 : 0;
}

void TObjWaitEntryHairMoveSim__sub_800FE3BC(void) {  }

extern M2C_UNK lbl_8049DC8C[];

void TObjWaitEntryHairMoveSim__sub_800FE3C0(u8 *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0xCFC) == 0) {
        TObjWaitEntryHairMoveSim__sub_800FE364((void *)(arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

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
