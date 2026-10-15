#include "types.h"

extern "C" {

void *init_state_35__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_804A69DC[];
extern s32 create_shoot_model__10TObjPlayerFiiif[];

void *init_state_35__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A69DC;
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    *(s32 **)((s8 *)arg0 + 0x1F0) = create_shoot_model__10TObjPlayerFiiif;
    *(u32 *)((s8 *)arg0 + 0x1F8) = 0;
    *(u32 *)((s8 *)arg0 + 0x1FC) = 3276;
    *(u32 *)((s8 *)arg0 + 0x200) = 0;
    *(u32 *)((s8 *)arg0 + 0x204) = 1;
    return arg0;
}

}
