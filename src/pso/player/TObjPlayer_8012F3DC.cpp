#include "types.h"

extern "C" {

void *init_from_item__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 TItemWeapon__ct();
s32 set_status_flags__10TObjPlayerFPvUi(void *, s32);
s32 set_atp__10TObjPlayerFPvs(void *, s32);

extern s32 lbl_804A62F8[];

void *init_from_item__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    TItemWeapon__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A62F8;
    if (((u8) *(u8 *)((s8 *)arg2 + 2) == 5) || ((u8) *(u8 *)((s8 *)arg2 + 1) == 0x8F)) {
        *(s32 *)((s8 *)arg0 + 0x1F8) = 1;
    } else {
        *(s32 *)((s8 *)arg0 + 0x1F8) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1F8) != 0) {
        set_status_flags__10TObjPlayerFPvUi(arg0, 0x800);
    }
    if ((u8) *(u8 *)((s8 *)arg2 + 2) > 5U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

}
