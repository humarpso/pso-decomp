#include "types.h"

extern "C" {

void *destroy_ancient_door_base__15TODoorAncient01FPvs(void *arg0, s16 arg1);
void destroy_key_base__5TOKeyFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern s32 lbl_804B0BB8[];

void *destroy_ancient_door_base__15TODoorAncient01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B0BB8;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
