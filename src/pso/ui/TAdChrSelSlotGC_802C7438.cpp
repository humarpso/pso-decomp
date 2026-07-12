#include "types.h"
struct S802C7498 { u8 pad[0x118]; s32 arr[1]; };

extern "C" {

void TAdChrSelSlotGC__sub_802C7438(void* p);
void TAdChrSelSlotGC__sub_802C7498(struct S802C7498 *arg0, s32 arg1);
int fn_802C754C(void*, void*);

void TAdChrSelSlotGC__sub_802C7438(void* p) { fn_802C754C(p, (void*)0); fn_802C754C(p, (void*)1); TAdChrSelSlotGC__sub_802C7498((struct S802C7498 *)(p), (s32)((void*)0)); TAdChrSelSlotGC__sub_802C7498((struct S802C7498 *)(p), (s32)((void*)1)); TAdChrSelSlotGC__sub_802C7498((struct S802C7498 *)(p), (s32)((void*)2)); }

void TAdChrSelSlotGC__sub_802C7498(struct S802C7498 *arg0, s32 arg1) {
    arg0->arr[arg1] = 0;
}

}
