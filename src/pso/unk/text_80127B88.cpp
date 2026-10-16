#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecGiZonde.h"

struct Self_80127BE0 { u8 pad[0xF0]; s32 fF0; };

struct Item_80127BE0 { u16 a; s16 b; };

struct Tec_80127BE0 { s32 kind; u16 a; s16 b; u8 rest[0x58]; };

extern "C" {
u8 * init_vtable_804A3548__10TObjPlayerFv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
s16 is_status_subsystem_ready__10TObjPlayerFv(s32);
s32 get_extended_state__10TObjPlayerFv(s32);
Item_80127BE0 *get_captured_target_entry(s32, s32);
s32 get_captured_target_count(s32);
void TObjPlayer__sub_80127BE0(Self_80127BE0 *self);
}

extern "C" {

u8 *TObjPlayer::create_vtable_804A3548(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_vtable_804A3548__10TObjPlayerFv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
void TObjPlayer__sub_80127BE0(Self_80127BE0 *self) {
    Item_80127BE0 *item;
    s32 kind;
    s32 ext;
    s32 i;
    Tec_80127BE0 tec;
    u8 buf[0xC];
    switch (is_status_subsystem_ready__10TObjPlayerFv(self->fF0)) {
    case 1:
        kind = 8;
        break;
    case 0:
        kind = 3;
        break;
    default:
        kind = 8;
        break;
    }
    if (((TObjPlayer *)self)->draw_icon((s32)1, (s32)buf) != 0) {
        ext = get_extended_state__10TObjPlayerFv(self->fF0);
        if (ext != 0) {
            for (i = 0; i != get_captured_target_count(ext); i++) {
                item = get_captured_target_entry(ext, i);
                if (item != NULL) {
                    ((TObjPlayer *)(&tec))->construct_target_cursor_records();
                    tec.kind = 1;
                    tec.a = item->a;
                    tec.b = item->b;
                    ((TTecGiZonde *)(self->fF0))->create((void *)buf, (void *)(&tec), (void *)kind);
                }
            }
        }
    }
}

}
