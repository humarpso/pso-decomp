#include "types.h"
struct Vec_8011E87C { f32 x, y, z; };

struct Pl_8011E87C {
    u8 pad0[0xF0];
    void *owner;
    u8 padF4[0x18C - 0xF4];
    void *trails[4];
    s8 iconA[4];
    s8 iconB[4];
};

extern "C" {
s32 get_mode__11TCameraCtrlFPv(void *);
s32 TLobby__sub_800822E8(void *, s32);
s32 fn_80100CC8(Pl_8011E87C *);
s32 is_flag_400__10TObjPlayerFPv(void *);
void draw_icon__10TObjPlayerFPvii(void *, s32, Vec_8011E87C *);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
void TItemEffectWeapon__sub_803634A4(void *, Vec_8011E87C *, Vec_8011E87C *);
extern u8 main_task[];
void TObjPlayer__sub_8011E87C(Pl_8011E87C *self, s32 slot);
}

extern "C" {

void TObjPlayer__sub_8011E87C(Pl_8011E87C *self, s32 slot) {
    Vec_8011E87C a;
    Vec_8011E87C b;
    if (fn_80100CC8(self) != 0 && is_flag_400__10TObjPlayerFPv(self) == 0 &&
        TLobby__sub_800822E8(self->owner, 0xE0) != 0 &&
        is_flag_b0_4__10TObjPlayerFPv(self->owner) == 0 &&
        !(get_mode__11TCameraCtrlFPv(main_task) & 0x78)) {
        if (self->trails[slot] != NULL) {
            draw_icon__10TObjPlayerFPvii(self, self->iconA[slot], &a);
            draw_icon__10TObjPlayerFPvii(self, self->iconB[slot], &b);
            TItemEffectWeapon__sub_803634A4(self->trails[slot], &a, &b);
        }
    }
}

}
