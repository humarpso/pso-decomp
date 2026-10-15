#include "types.h"
#include "pso/misc/TODoorAncient01.h"

extern "C" {

void destroy_key_base__5TOKeyFs(void *, int);
void __dl__7TObjectFPv(void *);

extern s32 lbl_804B0BB8[];

void *TODoorAncient01::destroy_ancient_door_base(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B0BB8;
        destroy_key_base__5TOKeyFs(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
