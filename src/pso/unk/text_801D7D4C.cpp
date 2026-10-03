#include "types.h"
struct Tag_801D7D4C { u8 d[4]; };

struct Obj_801D7D4C { s32 n; Tag_801D7D4C x[4]; Tag_801D7D4C y[4]; };

struct TItemData_801D8044 { u8 kind; u8 type; u8 sub; u8 pad[0x11]; };

struct TObjPlayer_801D8044 {
    u8 pad0[0x428];
    u8 slots[0x4ac - 0x428];
    u8 cursor[0xd00 - 0x4ac];
    void *fd00;
};

extern "C" {
void init__6gc_tagFv(void *);
void TObjPlayer__sub_801D7D4C(Obj_801D7D4C *arg0);
u32 get_item_field_6__10TObjPlayerFPv(void *);
s32 weapon_has_extra_attack(u32);
s32 check_flag_100__10TObjPlayerFPv(void *);
s32 validate_and_clear_slot__10TObjPlayerFPv(void *, s32);
void init__9TItemDataFv(void *);
s32 is_ready__10TObjPlayerFPv(void *);
void *set_mode_and_refresh_object__10TObjPlayerFPvi(void *, TItemData_801D8044 *);
s32 is_boss_area(void);
s32 TObjPlayer__sub_801AF694(void *, s32);
u16 obj_getField1c(void *);
s32 TWindowCtrl__sub_8024A228(s32);
s32 TMainCursor__sub_8013F244(void *);
s32 fn_8013F24C(void *, s32);
s32 is_palette_entry_displayable__10TObjPlayerFv(void *, u8, u8);
bool can_use_palette_action__10TObjPlayerFPvUcUc(TObjPlayer_801D8044 *self, u8 kind, u8 arg);
}

extern "C" {

void TObjPlayer__sub_801D7D4C(Obj_801D7D4C *arg0) {
    s32 i;
    i = 0;
    arg0->n = 0;
    do {
        init__6gc_tagFv(&arg0->x[i]);
        init__6gc_tagFv(&arg0->y[i]);
        i++;
    } while (i < 4);
}
bool can_use_palette_action__10TObjPlayerFPvUcUc(TObjPlayer_801D8044 *self, u8 kind, u8 arg) {
    TItemData_801D8044 item;
    u32 w;
    switch (kind) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        if (arg == 2) {
            w = get_item_field_6__10TObjPlayerFPv(self);
            if (w != 0) {
                if (weapon_has_extra_attack(w) == 0) {
                    return 0;
                }
            } else {
                return 0;
            }
        }
        if (check_flag_100__10TObjPlayerFPv(self) != 0) {
            return 1;
        }
        break;
    case 3:
        if (validate_and_clear_slot__10TObjPlayerFPv(self->slots, arg) != 0) {
            return 0;
        }
        if (check_flag_100__10TObjPlayerFPv(self) != 0) {
            return 1;
        }
        break;
    case 4:
        init__9TItemDataFv(&item);
        item.kind = 3;
        switch (arg) {
        case 0:
            item.type = 0;
            item.sub = 0;
            break;
        case 1:
            item.type = 0;
            item.sub = 1;
            break;
        case 2:
            item.type = 0;
            item.sub = 2;
            break;
        case 3:
            if (is_ready__10TObjPlayerFPv(self) != 0) {
                return 0;
            }
            item.type = 1;
            item.sub = 0;
            break;
        case 4:
            if (is_ready__10TObjPlayerFPv(self) != 0) {
                return 0;
            }
            item.type = 1;
            item.sub = 1;
            break;
        case 5:
            if (is_ready__10TObjPlayerFPv(self) != 0) {
                return 0;
            }
            item.type = 1;
            item.sub = 2;
            break;
        case 6:
            if (is_ready__10TObjPlayerFPv(self) != 0) {
                return 0;
            }
            item.type = 6;
            item.sub = 0;
            break;
        case 7:
            if (is_ready__10TObjPlayerFPv(self) != 0) {
                return 0;
            }
            item.type = 6;
            item.sub = 1;
            break;
        case 8:
            item.type = 3;
            break;
        case 9:
            item.type = 4;
            break;
        case 10:
            item.type = 5;
            break;
        case 11:
            item.type = 7;
            break;
        case 12:
            if (is_ready__10TObjPlayerFPv(self) != 0) {
                return 0;
            }
            item.type = 8;
            break;
        }
        if (arg < 0xd || arg > 0x10) {
            if (set_mode_and_refresh_object__10TObjPlayerFPvi(self->fd00, &item) == 0) {
                return 0;
            }
        } else {
            if (is_boss_area() != 0) {
                return 0;
            }
            switch (arg) {
            case 0xd:
                if (TObjPlayer__sub_801AF694(self, 0) != 0) {
                    return 0;
                }
                if (TWindowCtrl__sub_8024A228(obj_getField1c(self)) == 0) {
                    return 0;
                }
                break;
            case 0xe:
                if (TObjPlayer__sub_801AF694(self, 1) != 0) {
                    return 0;
                }
                if (TWindowCtrl__sub_8024A228(obj_getField1c(self)) == 0) {
                    return 0;
                }
                break;
            case 0xf:
                if (TObjPlayer__sub_801AF694(self, 2) != 0) {
                    return 0;
                }
                if (TWindowCtrl__sub_8024A228(obj_getField1c(self)) == 0) {
                    return 0;
                }
                break;
            case 0x10:
                if (TObjPlayer__sub_801AF694(self, 3) != 0) {
                    return 0;
                }
                if (TWindowCtrl__sub_8024A228(obj_getField1c(self)) == 0) {
                    return 0;
                }
                break;
            }
        }
        if (check_flag_100__10TObjPlayerFPv(self) != 0) {
            return 1;
        }
        break;
    case 5:
        if ((s8)fn_8013F24C(self->cursor, arg) == (s8)TMainCursor__sub_8013F244(self)) {
            return 0;
        }
        break;
    case 7:
        return 1;
    }
    return is_palette_entry_displayable__10TObjPlayerFv(self, kind, arg) != 0;
}

}
