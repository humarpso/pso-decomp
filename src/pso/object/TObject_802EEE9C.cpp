#include "types.h"
#include "pso/object/TUnk_804E4788.h"
#include "pso/TObject.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern s32 lbl_804E4788[];

void *TUnk_804E4788::destroy_and_delete(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804E4788;
        if (*(void **)((s8 *)this + 0x11C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x11C)); *(s32 *)((s8 *)this + 0x11C) = 0; }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
