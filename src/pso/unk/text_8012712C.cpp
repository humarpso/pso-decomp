#include "types.h"

struct Self_8012712C { u8 pad[0x18]; void *vt; u8 pad1c[0x1e4 - 0x1c]; f32 f1e4; u8 pad1e8[0x1f0 - 0x1e8]; void *f1f0; };

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_agito_weapon(u8 *arg0);
void TItemWeapon__ct(void *, s32, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, u32);
u8 get_slot_count__14TItemProShieldFPv(void *);
void create_lavis_shot(void);
extern void *lbl_804A3070[];
extern const f32 lbl_805DADB8;
u8 *construct_agito__10TObjPlayerFPviPv(void *self_, s32 a, void *b);
}

extern "C" {

u8 *construct_agito__10TObjPlayerFPviPv(void *self_, s32 a, void *b) {
    Self_8012712C *self = (Self_8012712C *)self_;
    TItemWeapon__ct(self, a, b);
    self->vt = lbl_804A3070;
    set_status_flags__10TObjPlayerFPvUi(self, 2);
    if (get_slot_count__14TItemProShieldFPv(self) == 0) {
        set_status_flags__10TObjPlayerFPvUi(self, 0x20);
        self->f1f0 = (void *)create_lavis_shot;
        self->f1e4 = lbl_805DADB8;
    }
    return (u8 *)self;
}

u8 *create_agito_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_agito__10TObjPlayerFPviPv((void *)(temp_r3), (s32)(tl_05), (void *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
