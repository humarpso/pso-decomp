#include "pso/TAdSubPlyItemGC.h"

#include "types.h"

extern "C" {
extern u8 lbl_80540FB0[];
extern u8 lbl_804725E0[];
void *memset(void *, int, u32);
s32 sprintf(void *, const void *, ...);
typedef struct S_802D6D88 { u8 pad0[0x43C]; s32 f[4]; } S_802D6D88;

u8 *TAdSubPlyItemGC__sub_802D6D28(s32 arg0, s32 arg1) {
    memset(lbl_80540FB0, 0, 0x40);
    sprintf(lbl_80540FB0, lbl_804725E0, arg1);
    return lbl_80540FB0;
}

void TAdSubPlyItemGC__sub_802D6D88(S_802D6D88 *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        arg0->f[i] = 0;
    }
}
}

TAdSubPlyItemGC::~TAdSubPlyItemGC() {}
