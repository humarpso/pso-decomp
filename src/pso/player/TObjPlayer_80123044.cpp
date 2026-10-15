#include "types.h"

extern "C" {

void update_from_owner__10TObjPlayerFPv(void *arg0);
void *init_bringer_effect__10TObjPlayerFPv(void *arg0);
s32 submit_computer_command__10TObjPlayerFPv(s32, s16, s32, s32);
void TItemWeapon__ct(void *);

void update_from_owner__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = *(void **)((s8 *)arg0 + 0xF4);
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFPv(*(s32 *)((s8 *)temp_r3 + 0x2C), *(s16 *)((s8 *)arg0 + 0x1F8), 0, 1);
    }
}

extern s32 lbl_804A1668[];
extern s32 create__15TItemEffBringerFUiiif[];

void *init_bringer_effect__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1668;
    *(u16 *)((s8 *)arg0 + 0x1F8) = 2;
    *(s32 **)((s8 *)arg0 + 0x1F0) = create__15TItemEffBringerFUiiif;
    return arg0;
}

}
