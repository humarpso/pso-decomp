#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Self_80127BE0 { u8 pad[0xF0]; s32 fF0; };

struct Item_80127BE0 { u16 a; s16 b; };

struct Tec_80127BE0 { s32 kind; u16 a; s16 b; u8 rest[0x58]; };

extern "C" {
u8 * init_vtable_804A3548__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80127B88(u8 *arg0);
void TObjPlayer__sub_8004433C(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, void *);
s16 is_status_subsystem_ready__10TObjPlayerFPv(s32);
s32 get_extended_state__10TObjPlayerFPv(s32);
Item_80127BE0 *TObjPlayer__sub_80121248(s32, s32);
s32 TObjPlayer__sub_8012125C(s32);
void create__11TTecGiZondeFPvPvPvPv(s32, void *, void *, s32);
void TObjPlayer__sub_80127BE0(Self_80127BE0 *self);
}

extern "C" {

u8 *TObjPlayer__sub_80127B88(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_vtable_804A3548__10TObjPlayerFPv(temp_r3, tl_05, arg0));
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
    switch (is_status_subsystem_ready__10TObjPlayerFPv(self->fF0)) {
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
    if (draw_icon__10TObjPlayerFPvii(self, 1, buf) != 0) {
        ext = get_extended_state__10TObjPlayerFPv(self->fF0);
        if (ext != 0) {
            for (i = 0; i != TObjPlayer__sub_8012125C(ext); i++) {
                item = TObjPlayer__sub_80121248(ext, i);
                if (item != NULL) {
                    TObjPlayer__sub_8004433C(&tec);
                    tec.kind = 1;
                    tec.a = item->a;
                    tec.b = item->b;
                    create__11TTecGiZondeFPvPvPvPv(self->fF0, buf, &tec, kind);
                }
            }
        }
    }
}

}
