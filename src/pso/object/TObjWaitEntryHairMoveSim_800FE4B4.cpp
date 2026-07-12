#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__24TObjWaitEntryHairMoveSimFPv(void *arg0);
void *construct__24TObjWaitEntryHairMoveSimFPvi(void *, void *);
void *__nw__7TObjectFUl(int);
int TObjWaitEntryHairMoveSim__sub_800FE300(void *);

void * create__24TObjWaitEntryHairMoveSimFPv(void *arg0) {
    void *o;
    if (TObjWaitEntryHairMoveSim__sub_800FE300(arg0) == 0) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = construct__24TObjWaitEntryHairMoveSimFPvi(o, arg0);
    }
    return o;
}

}
