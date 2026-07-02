#include "types.h"

extern "C" {

void TObjPlayer__sub_801BCE90(s32 arg0);
void TObjPlayer__sub_801BCED8(void* p);
s32 fn_801BE9A8(s32);
s32 fn_801BE9CC(s32);
s32 fn_802034EC();
int queue_destruction__7TObjectFv(void*);

void TObjPlayer__sub_801BCE90(s32 arg0) {
    if (fn_802034EC() != 0) {
        fn_801BE9A8(arg0);
        return;
    }
    fn_801BE9CC(arg0);
}
void TObjPlayer__sub_801BCED8(void* p) { void* m = *(void**)((char*)p + 0xd00); if (m) queue_destruction__7TObjectFv(m); }

}
