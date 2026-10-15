#include "types.h"
#include "pso/object/TObjCMMainMenu.h"

extern "C" {
s32 TCharaMaking__resolve_creation_sprite_table(void *, void *);
}

extern "C" {

s16 TObjCMMainMenu::get_creation_sprite_id(s32 arg0) {
    s32 spC;
    s32 sp8;
    sp8 = arg0;
    TCharaMaking__resolve_creation_sprite_table((void *) (&spC), (void *) (&sp8));
    return *(s16 *)((s8 *)(spC + (sp8 * 0x14)) + 0);
}

}
