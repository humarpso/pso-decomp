#include "types.h"

extern "C" {
s32 TCharaMaking__resolve_creation_sprite_table(void *, void *);
s16 get_creation_sprite_id__14TObjCMMainMenuFi(s32 arg0);
}

extern "C" {

s16 get_creation_sprite_id__14TObjCMMainMenuFi(s32 arg0) {
    s32 spC;
    s32 sp8;
    sp8 = arg0;
    TCharaMaking__resolve_creation_sprite_table((void *) (&spC), (void *) (&sp8));
    return *(s16 *)((s8 *)(spC + (sp8 * 0x14)) + 0);
}

}
