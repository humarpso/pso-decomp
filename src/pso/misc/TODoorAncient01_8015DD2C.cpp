#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"
#include "pso/misc/TODoorAncient01.h"

extern "C" {

void destroy_key_base__13TUnk_804AFBF8Fs(void *, int);
void __dl__7TObjectFPv(void *);

extern s32 lbl_804B0BB8[];

void *TUnk_804B0BB8::destroy_ancient_door_base(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B0BB8;
        destroy_key_base__13TUnk_804AFBF8Fs(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
