#include "types.h"
#include "pso/object/TUnk_804F0D1C.h"
#include "pso/TObject.h"

extern "C" {

s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);

extern s32 quest_bgm_object_dispatch_table[];
extern void *pending_destroy_object;

void *TUnk_804F0D1C::delete_instance(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = quest_bgm_object_dispatch_table;
        if (pending_destroy_object == this) {
            pending_destroy_object = NULL;
        }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
