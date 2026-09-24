#include "types.h"
struct Obj_803DB20C { u8 pad[0x1c]; void *p; };

extern "C" {
extern void *lbl_805D7754;
void OSFreeToHeap(void *heap, void *p);
s32 fn_803DB20C(Obj_803DB20C *o);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
s32 fn_803DB20C(Obj_803DB20C *o) {
    OSFreeToHeap(lbl_805D7754, o->p);
    return 0;
}
#pragma pop

}
