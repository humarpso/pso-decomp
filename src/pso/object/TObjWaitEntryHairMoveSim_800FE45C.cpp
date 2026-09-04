#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void* construct__24TObjWaitEntryHairMoveSimFPvi(void* a0, int a1);
void * create__24TObjWaitEntryHairMoveSimFPv(void *arg0);
int TObjWaitEntryHairMoveSim__sub_800FE32C(void*);
int __ct__7TObjectFP7TObject(void);
void *__nw__7TObjectFUl(int);
int is_move_done__24TObjWaitEntryHairMoveSimFv(void *);

    extern unsigned char lbl_8049DC8C[];
    extern int lbl_805D2B44;
void* construct__24TObjWaitEntryHairMoveSimFPvi(void* a0, int a1) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_8049DC8C; *(int*)((char*)a0 + 0x0) = lbl_805D2B44; *(int*)((char*)a0 + 0x20) = a1; *(int*)((char*)a0 + 0x1c) = TObjWaitEntryHairMoveSim__sub_800FE32C((void*)(*(int*)((char*)a0 + 0x20))); return a0; }

void * create__24TObjWaitEntryHairMoveSimFPv(void *arg0) {
    void *o;
    if (is_move_done__24TObjWaitEntryHairMoveSimFv(arg0) == 0) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = construct__24TObjWaitEntryHairMoveSimFPvi((void*)(o), (int)(arg0));
    }
    return o;
}

}
