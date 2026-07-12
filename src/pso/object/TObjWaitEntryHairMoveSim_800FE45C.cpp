#include "types.h"

extern "C" {

void* construct__24TObjWaitEntryHairMoveSimFPvi(void* a0, int a1);
int TObjWaitEntryHairMoveSim__sub_800FE32C(void*);
int __ct__7TObjectFP7TObject(void);

    extern unsigned char lbl_8049DC8C[];
    extern int lbl_805D2B44;
void* construct__24TObjWaitEntryHairMoveSimFPvi(void* a0, int a1) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_8049DC8C; *(int*)((char*)a0 + 0x0) = lbl_805D2B44; *(int*)((char*)a0 + 0x20) = a1; *(int*)((char*)a0 + 0x1c) = TObjWaitEntryHairMoveSim__sub_800FE32C((void*)(*(int*)((char*)a0 + 0x20))); return a0; }

}
