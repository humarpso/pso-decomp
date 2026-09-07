#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800FE364_lbl_8049DC78 {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
void TObjWaitEntryHairMoveSim__sub_800FE3C0(u8 *arg0);
s32 create__19TObjEZBoneRotPlayerFPvPvPv(s32, s32, s32);
void TObjWaitEntryHairMoveSim__sub_800FE3BC(int);
extern RecoveredGlobal_800FE364_lbl_8049DC78 lbl_8049DC78;
void TObjWaitEntryHairMoveSim__sub_800FE364(u8 *arg0);
}

extern "C" {

void *destroy__24TObjWaitEntryHairMoveSimFPvs(void *arg0, s16 arg1);
int is_move_done__24TObjWaitEntryHairMoveSimFv(void);
int TObjWaitEntryHairMoveSim__sub_800FE32C();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

int is_move_done__24TObjWaitEntryHairMoveSimFv(void) {
    return (~TObjWaitEntryHairMoveSim__sub_800FE32C()) != 0 ? 1 : 0;
}

typedef char RecoveredGlobal_800FE364_lbl_8049DC78_size[sizeof(RecoveredGlobal_800FE364_lbl_8049DC78) == 0x14 ? 1 : -1];
void TObjWaitEntryHairMoveSim__sub_800FE364(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0x8AC);
    TObjWaitEntryHairMoveSim__sub_800FE3BC((int)((int) (temp_r31)));
    create__19TObjEZBoneRotPlayerFPvPvPv((s32) M2C_FIELD(arg0, u8 **, 0x20), temp_r31, (s32) ((u8 *)&lbl_8049DC78.value + (M2C_FIELD(arg0, s32 *, 0x1C) * 0x14)));
}

void TObjWaitEntryHairMoveSim__sub_800FE3BC(int _w0) {  }

extern M2C_UNK lbl_8049DC8C[];

void TObjWaitEntryHairMoveSim__sub_800FE3C0(u8 *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0xCFC) == 0) {
        TObjWaitEntryHairMoveSim__sub_800FE364((u8 *)((void *)(arg0)));
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
