#include "types.h"
#include "pso/unk/text_801094D8.h"
#include "pso/TItemAttacker.h"
extern "C" {
void *TItemEffLandHit__ct(void *, s32, u32, u32, u32);
void *__nw__7TObjectFUl(u32);
extern u8 invoke_menu_callback_if_set__10TObjPlayerFUl[];
void spawn_land_hit_effect(s32 arg0, u32 arg1, u32 arg2, u32 arg3, s32 arg4) {
    void *p;
    if ((arg0 != 0) && (arg2 != 0U) && (arg3 != 0U) && (arg1 != 0U)) {
        p = __nw__7TObjectFUl(0x3C);
        if (p != 0) {
            p = TItemEffLandHit__ct(p, arg0, arg1, arg2, arg3);
        }
        TItemAttacker::spawn_item_timer((s32)p, (s32)invoke_menu_callback_if_set__10TObjPlayerFUl, (s32)arg4);
    }
}

}
