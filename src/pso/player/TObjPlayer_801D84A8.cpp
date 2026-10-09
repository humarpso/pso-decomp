#include "types.h"
struct Tag_801D7D4C { u8 d[4]; };

struct Obj_801D7D4C { s32 n; Tag_801D7D4C x[4]; Tag_801D7D4C y[4]; };

struct Tec_801D7DA4 { u8 pad[0x10]; s16 cost; };

struct TItemData_801D8044 { u8 kind; u8 type; u8 sub; u8 pad[0x11]; };

struct TObjPlayer_801D8044 {
    u8 pad0[0x428];
    u8 slots[0x4ac - 0x428];
    u8 cursor[0xd00 - 0x4ac];
    void *fd00;
};

extern "C" {
void init__6gc_tagFv(void *);
s32 obj_testFlags30(void *, u32);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 get_camera_field__10TObjPlayerFPv(void *);
s32 test_bit1_at_10__10TObjPlayerFPv(void *);
u8 get_cast_technique_level(void *, int);
Tec_801D7DA4 *calc_technique_parameters(s32, s32, s32);
s32 get_game_play_mode();
s32 is_flag_clear__17TObjWarpBossMultiFPv(void *);
s32 is_technique_ready__8TTecCtrlFv();
s32 TObjPlayer__sub_801C1F50(void *);

void init_action_config__10TObjPlayerFPv(Obj_801D7D4C *arg0);
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
s32 is_palette_entry_displayable__10TObjPlayerFv(u8 *, u8, u8);
bool can_use_palette_action__10TObjPlayerFPvUcUc(TObjPlayer_801D8044 *self, u8 kind, u8 arg);
}

extern "C" {

void init_action_config__10TObjPlayerFPv(Obj_801D7D4C *arg0) {
    s32 i;
    i = 0;
    arg0->n = 0;
    do {
        init__6gc_tagFv(&arg0->x[i]);
        init__6gc_tagFv(&arg0->y[i]);
        i++;
    } while (i < 4);
}
s32 is_palette_entry_displayable__10TObjPlayerFv(u8 *arg0, u8 kind, u8 sub) {
    s32 tec;

    switch (kind) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        if (obj_testFlags30(arg0, 0x20006) != 0 || reset_key_machine_state__10TObjPlayerFv() == 0 || get_camera_field__10TObjPlayerFPv(arg0) == 0) {
            return 0;
        }
        if ((u8)sub == 2) {
            if (get_item_field_6__10TObjPlayerFPv(arg0) != 0) {
                if (((s32 (*)())weapon_has_extra_attack)() == 0) {
                    return 0;
                }
            } else {
                return 0;
            }
        }
        return 1;
    case 3:
        if (test_bit1_at_10__10TObjPlayerFPv(arg0 + 0x428) != 0 || obj_testFlags30(arg0, 0x20006) != 0 || get_camera_field__10TObjPlayerFPv(arg0) == 0) {
            return 0;
        }
        if (*(s16 *)(arg0 + 0x32E) - calc_technique_parameters(tec = sub, get_cast_technique_level(arg0 + 0x428, sub), ((s32 (*)(void *))obj_getField1c)(arg0))->cost < 0) {
            return 0;
        }
        switch (tec) {
        case 0x11:
            if (get_game_play_mode() == 1) {
                return 0;
            }
            break;
        case 0xE:
            if (is_flag_clear__17TObjWarpBossMultiFPv(arg0) == 0) {
                return 0;
            }
            if (is_technique_ready__8TTecCtrlFv() != 0 || get_game_play_mode() == 1) {
                return 0;
            }
            break;
        }
        return 1;
    case 4:
        if (get_camera_field__10TObjPlayerFPv(arg0) == 0) {
            return 0;
        }
        switch ((u8)sub) {
        case 9:
            if (get_game_play_mode() == 1) {
                return 0;
            }
            break;
        case 10:
            break;
        case 11:
            if (is_flag_clear__17TObjWarpBossMultiFPv(arg0) == 0) {
                return 0;
            }
            if (is_technique_ready__8TTecCtrlFv() != 0) {
                return 0;
            }
            break;
        }
        return 1;
    case 5:
        if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) == 0 || obj_testFlags30(arg0, 0x20006) != 0 || get_camera_field__10TObjPlayerFPv(arg0) == 0) {
            return 0;
        }
        return 1;
    case 7:
        return 1;
    }
    return 0;
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
    return is_palette_entry_displayable__10TObjPlayerFv((u8 *)self, kind, arg) != 0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_801D8474 { s8 a; u8 b; };

extern "C" {
s32 can_use_palette_action_for_entry__10TObjPlayerFPvUi(Obj_801D8474 *p, u32 obj);
}

extern "C" {

s32 TObjPlayer__sub_801D8664(s32, s16, s16);
s32 set_animation_default__10TObjPlayerFPv(s32, s16);
void *get_anim_table_entry__10TObjPlayerFPvi();
s32 TObjPlayer__sub_801D84A8(void* p);
int bswap_disp_config_field__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D84F0(void* p);
int bswap_16__FPUs(void*);

s32 can_use_palette_action_for_entry__10TObjPlayerFPvUi(Obj_801D8474 *p, u32 obj) {
    return ((s32 (*)(u32, u8, u8))can_use_palette_action__10TObjPlayerFPvUcUc)(obj, p->a, p->b);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D8664(s32, s16, s16);
s32 set_animation_default__10TObjPlayerFPv(s32, s16);
void *get_anim_table_entry__10TObjPlayerFPvi();
s32 TObjPlayer__sub_801D84A8(void* p);
int bswap_disp_config_field__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D84F0(void* p);
int bswap_16__FPUs(void*);

s32 TObjPlayer__sub_801D84A8(void* p) { return *(s32*)((char*)p + 0x0); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 *TObjPlayer__sub_801D84B0(s32 *arg0);
}

extern "C" {

s32 TObjPlayer__sub_801D8664(s32, s16, s16);
s32 set_animation_default__10TObjPlayerFPv(s32, s16);
void *get_anim_table_entry__10TObjPlayerFPvi();
s32 TObjPlayer__sub_801D84A8(void* p);
int bswap_disp_config_field__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D84F0(void* p);
int bswap_16__FPUs(void*);

u8 *TObjPlayer__sub_801D84B0(s32 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0) == 0) {
        return (u8 *)(arg0) + 4;
    }
    return (u8 *)(arg0) + 0x14;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D84F0(void* p);
void assign_lobby_slot_if_flagged__10TObjPlayerFiPv(s32 arg0, void *arg1);
int bswap_disp_config_field__10TObjPlayerFPv(void* p);
void set_animation_from_data__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 advance_item_id_counter(u16);
M2C_UNK equip_saved_item_if_slot_empty__10TObjPlayerFPvPv(s32, void *);
s32 TObjPlayer__sub_801D84A8(void* p);
s32 TObjPlayer__sub_801D8664(s32, s16, s16);
void *get_anim_table_entry__10TObjPlayerFPvi();
int bswap_16__FPUs(void*);
s32 set_animation_default__10TObjPlayerFPv(s32, s16);

int bswap_disp_config_field__10TObjPlayerFPv(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
s32 TObjPlayer__sub_801D84F0(void* p) { return *(s32*)((char*)p + 0x4); }
void set_animation_from_data__10TObjPlayerFii(s32 arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = get_anim_table_entry__10TObjPlayerFPvi();
    TObjPlayer__sub_801D8664(arg0, M2C_FIELD(temp_r3, s16 *, 0), M2C_FIELD(temp_r3, s16 *, 2));
    set_animation_default__10TObjPlayerFPv(arg0, arg1);
}

extern s32 local_client_id;

void assign_lobby_slot_if_flagged__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) & 8) {
        M2C_FIELD(arg1, s32 *, 0x14) = advance_item_id_counter((u16) local_client_id);
        equip_saved_item_if_slot_empty__10TObjPlayerFPvPv(arg0, arg1);
    }
}

}
