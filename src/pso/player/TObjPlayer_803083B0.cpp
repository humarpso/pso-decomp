#include "types.h"
#include "pso/player/TUnk_804E71F8.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
}

extern "C" {

void *item_equip_variant_deleting_dtor_80308450(void *arg0, s16 arg1);
void TItemWeapon__ct(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80308450(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFUl(void *, int);

extern s32 lbl_804E71F8[];

void *TUnk_804E71F8::construct_nug2000_bazooka(s32 _w1, void *_w2) {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804E71F8;
    set_status_flags__10TObjPlayerFUl(this, 2);
    return this;
}
u8 *TObjPlayer::create_nug2000_bazooka() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_804E71F8 *)temp_r3)->construct_nug2000_bazooka((s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

extern s32 lbl_804E71F8[];

void *item_equip_variant_deleting_dtor_80308450(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E71F8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
