#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Self_8012A884 { u8 pad[0x18]; void *vt; u8 pad1C[0x1F8 - 0x1C]; u32 kind; };

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_state_8012a9b4__10TObjPlayerFPv(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv(void *);
void TObjPlayer__sub_8011E2A4(void *, u8);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
extern u8 lbl_804A4948[];
u8 *TObjPlayer__sub_8012A884(void *arg0, s32 arg1, void *arg2);
}

extern "C" {

struct Inc_8012A884;
u8 *TObjPlayer__sub_8012A884(void *arg0, s32 arg1, void *arg2) {
    Self_8012A884 *self = (Self_8012A884 *)arg0;
    Inc_8012A884 *p;
    TItemWeapon__ct(self);
    self->vt = lbl_804A4948;
    set_status_flags__10TObjPlayerFPvUi(self, 2);
    self->kind = get_slot_count__14TItemProShieldFPv(self);
    p = (Inc_8012A884 *)arg0;
    switch (self->kind) {
    case 0:
    case 3:
    case 4:
        break;
    case 1:
    case 2:
        set_status_flags__10TObjPlayerFPvUi(p, 0x400000);
        TObjPlayer__sub_8011E2A4(self, 0x1A);
        break;
    case 5:
        TObjPlayer__sub_8011E2A4(p, 0x1A);
        break;
    case 6:
        TObjPlayer__sub_8011E2A4(p, 0x1E);
        break;
    case 7:
        TObjPlayer__sub_8011E2A4(p, 0x12);
        break;
    case 8:
        TObjPlayer__sub_8011E2A4(p, 0x16);
        break;
    case 9:
        TObjPlayer__sub_8011E2A4(p, 0x26);
        break;
    case 10:
        TObjPlayer__sub_8011E2A4(p, 0x22);
        break;
    case 11:
        TObjPlayer__sub_8011E2A4(p, 0xD);
        break;
    case 12:
        TObjPlayer__sub_8011E2A4(p, 0xE);
        break;
    case 13:
        TObjPlayer__sub_8011E2A4(p, 0x28);
        break;
    case 14:
        TObjPlayer__sub_8011E2A4(p, 4);
        break;
    case 15:
        TObjPlayer__sub_8011E2A4(p, 8);
        break;
    case 16:
        TObjPlayer__sub_8011E2A4(p, 0xB);
        break;
    default:
        TObjPlayer__sub_8011E2A4(p, 0);
        break;
    }
    return (u8 *)self;
}

u8 *create_state_8012a9b4__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_8012A884((void *)(temp_r3), (s32)(tl_05), (void *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
