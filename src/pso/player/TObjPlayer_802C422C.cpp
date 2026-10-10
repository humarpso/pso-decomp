#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 sync_state__10TObjPlayerFi(s32 arg0);
u32 update_battle_controller__10TObjPlayerFv();
M2C_UNK export_state_to_record__10TObjPlayerFPvPv(u32, s32);
M2C_UNK create__13TPlyOnCreatedFPvPv(u16, M2C_UNK *);

int fn_802C4748(void* p);
extern s32 local_client_id;

s32 sync_state__10TObjPlayerFi(s32 arg0) {
    u32 temp_r3;
    temp_r3 = update_battle_controller__10TObjPlayerFv();
    if (temp_r3 == 0U) {
        create__13TPlyOnCreatedFPvPv((u16) local_client_id, (M2C_UNK *)fn_802C4748);
        return 0;
    }
    export_state_to_record__10TObjPlayerFPvPv(temp_r3, arg0);
    return 1;
}

}

extern "C" {

void sync_char_select_state__10TObjPlayerFv(void);
int get_char_index__23TAdSinglePlyChrSelectGCFUi(void*);

void sync_char_select_state__10TObjPlayerFv(void) { get_char_index__23TAdSinglePlyChrSelectGCFUi((void*)65535); ((int (*)(void))sync_state__10TObjPlayerFi)(); }

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_assign_battle_ctrl__10TObjPlayerFiUs(s32 arg0, u16 arg1);
s32 update_battle__10TObjPlayerFi(s32 arg0);
void export_player_record__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
s32 get_player_by_client_id(void *);

s32 try_assign_battle_ctrl__10TObjPlayerFiUs(s32 arg0, u16 arg1) {
    s32 temp = get_player_by_client_id((void *) (arg1));
    if (temp == 0) {
        return 0;
    }
    ((M2C_UNK (*)(void *, s32))export_player_record__10TObjPlayerFPvPv)((void *)((void *) (arg0)), (s32)(temp));
    return 1;
}

s32 update_battle__10TObjPlayerFi(s32 arg0) {
    s32 r;
    r = update_battle_controller__10TObjPlayerFv();
    if (r == 0) {
        return 0;
    }
    ((M2C_UNK (*)(void *, s32))export_player_record__10TObjPlayerFPvPv)((void *)(arg0), (s32)(r));
    return 1;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_802C456C { u8 pad[6]; u8 f6; u8 pad2[0x1c - 7]; };

struct Obj_802C456C { Rec_802C456C recs[1]; };

struct O_802C4688 { u8 pad[0x408]; u8 buf[1]; };

struct Obj_802C4648 { u8 pad[0x77]; u8 f77; u8 pad2[0x93 - 0x78]; u8 f93; u8 pad3[0xaf - 0x94]; u8 faf; u8 pad4[0xcb - 0xb0]; u8 fcb; };

struct E_802C4668 { u8 pad[7]; u8 v; u8 pad2[0x14]; };

struct O_802C4668 { E_802C4668 e[4]; };

struct E_802C4698 { u8 pad[0x1c]; };

struct O_802C4698 { u8 pad[6]; E_802C4698 e[1]; };

struct S_802C457C { u8 pad0[0x3A1]; u8 f3A1; u8 pad3A2[0x408 - 0x3A2]; u8 buf[1]; };

extern "C" {
void TObjPlayer__sub_802C456C(Obj_802C456C *self, s32 i, u8 v);
u8 *TObjPlayer__sub_802C4688(O_802C4688 *self, s32 i);
void TObjPlayer__sub_802C4648(Obj_802C4648 *self, u32 v);
void TObjPlayer__sub_802C4668(O_802C4668 *self, u32 c);
E_802C4698 *TObjPlayer__sub_802C4698(O_802C4698 *self, s32 i);
s8 get_tp_materials_clamped__10TObjPlayerFPv(void *);
s8 get_hp_material_points__10TObjPlayerFPv(void *);
M2C_UNK copy_player_visual_record(void *, void *);
M2C_UNK TObjPlayer__sub_8013A748(void *, void *);
M2C_UNK clamp_stats__10TObjPlayerFiPv(void *, void *, void *);
s8 query_state_if_present__10TObjPlayerFPv(void *, void *);
u8 TObjPlayer__sub_801BE7BC(void *);
u8 get_equip_flags__10TObjPlayerFPv(void *);
u8 get_inventory_state__10TObjPlayerFPv(void *);
u8 get_field_374_state__10TObjPlayerFPv(void *);
u8 get_field_374__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C0124(void *, s16);
s32 get_ptr_4__10TObjPlayerFPv(void *);
M2C_UNK set_flag_and_update__10TObjPlayerFPvi(int, void *);
s32 get_class_stat_entry__10TObjPlayerFPv(void *);
void split_capped_value__10TObjPlayerFUcPvPv(s32, u8 *, E_802C4698 *);
s32 TObjPlayer__sub_802A1018();
M2C_UNK copy_battle_mode__10TObjPlayerFPvPv(void *, void *);
M2C_UNK copy_byte_339_to_record__10TObjPlayerFPvPv(void *, void *);
M2C_UNK copy_mag_level_to_record__10TObjPlayerFPvPv(void *, void *);
M2C_UNK apply_pending_action__10TObjPlayerFii(void *, void *);
void set_field_157__10TObjPlayerFPvUc(void* p, u8 v);
void set_byte_13b__10TObjPlayerFPvUc(void* p, u8 v);
void set_action_flags__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_103__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_e7__10TObjPlayerFPvUc(void* p, u8 v);
u8 *TObjPlayer__sub_802C4688(O_802C4688 *self, s32 i);
E_802C4698 *TObjPlayer__sub_802C4698(O_802C4698 *self, s32 i);
void set_flag_40__10TObjPlayerFPv(void* p);
void set_flag_524288__10TObjPlayerFPv(void* p);
void set_flag_80000__10TObjPlayerFPv(void* p);
extern s32 current_language;
void export_player_record__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
void is_slot_within_limit__10TObjPlayerFiiUc(u8 id, s16 i, u8 v);
void set_action_palette_slot__10TObjPlayerFPviUc(S_802C457C *self, s32 i, u8 v);
}

extern "C" {

void set_current_time__10TObjPlayerFi(s32 arg0);
int init_character_action_config(void* p);
int TObjPlayer__sub_802C46E0(void* p);
void clear_item_slots__10TObjPlayerFPv(void* p);
void* get_action_data__10TObjPlayerFPv(void* p);
void init_battle_selection__10TObjPlayerFv(void);
void set_action_flags__10TObjPlayerFPvUc(void* p, u8 v);
void set_action_state__10TObjPlayerFPvUc(void* p, u8 v);
void set_byte_13b__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_157__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_18f__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_1ab__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_103__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_40__10TObjPlayerFPv(void* p);
void set_flag_524288__10TObjPlayerFPv(void* p);
void set_flag_80000__10TObjPlayerFPv(void* p);
void set_flag_e7__10TObjPlayerFPvUc(void* p, u8 v);
s32 DateToSeconds__FP9DateStampPi(s32 *, s32 *);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 free_sub_ctrls__19TAdSelectGameModeGCFPv();
int clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int init_action_config__10TObjPlayerFPv(void*);
int set_palette_entry__20TWindowActionPaletteFiiiii(void*);
int enable_camera__19TAdSelectGameModeGCFv(void*);
int fn_802C4748(void* p);
s32 getDateStamp__FP9DateStamp(s32 *);
int get_char_index__23TAdSinglePlyChrSelectGCFUi(void*);
s32 get_main_phase();
s32 get_mode_data__19TAdSelectGameModeGCFv();
int set_state_flags__10TObjPlayerFPvUi(void*, void*);

void init_battle_selection__10TObjPlayerFv(void) { get_char_index__23TAdSinglePlyChrSelectGCFUi((void*)65535); ((int (*)(void))update_battle__10TObjPlayerFi)(); }

void export_player_record__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    E_802C4698 *e;
    s32 i;
    set_flag_80000__10TObjPlayerFPv((void *) (arg1));
    copy_player_visual_record((void *) (arg0 + 0x370), (void *) (arg1 + 0x85C));
    M2C_FIELD(arg0, s8 *, 0) = query_state_if_present__10TObjPlayerFPv((void *) (arg1), (void *) (get_ptr_4__10TObjPlayerFPv((void *) (arg0))));
    set_flag_and_update__10TObjPlayerFPvi((int) (M2C_FIELD(arg1, s32 *, 0xD00)), (void *) (arg1));
    clamp_stats__10TObjPlayerFiPv((void *) (arg1), (void *) (arg0 + 0x34C), (void *) (get_class_stat_entry__10TObjPlayerFPv((void *) (arg1))));
    M2C_FIELD(arg0, s8 *, 1) = get_hp_material_points__10TObjPlayerFPv((void *) (arg1));
    M2C_FIELD(arg0, s8 *, 2) = get_tp_materials_clamped__10TObjPlayerFPv((void *) (arg1));
    set_flag_e7__10TObjPlayerFPvUc((void *) (arg0), get_field_374__10TObjPlayerFPv((void *) (arg1)));
    set_flag_103__10TObjPlayerFPvUc((void *) (arg0), get_field_374_state__10TObjPlayerFPv((void *) (arg1)));
    set_action_flags__10TObjPlayerFPvUc((void *) (arg0), get_inventory_state__10TObjPlayerFPv((void *) (arg1)));
    set_byte_13b__10TObjPlayerFPvUc((void *) (arg0), get_equip_flags__10TObjPlayerFPv((void *) (arg1)));
    set_field_157__10TObjPlayerFPvUc((void *) (arg0), TObjPlayer__sub_801BE7BC((void *) (arg1)));
    TObjPlayer__sub_8013A748((void *) (arg0 + 0x3C0), (void *) (arg1 + 0x500));
    for (i = 0; i < 0x13; i++) {
        e = TObjPlayer__sub_802C4698((O_802C4698 *) arg0, i);
        split_capped_value__10TObjPlayerFUcPvPv(TObjPlayer__sub_801C0124((void *) (arg1 + 0x428), i),
            TObjPlayer__sub_802C4688((O_802C4688 *) arg0, i), e);
    }
    M2C_FIELD(arg0, s8 *, 3) = current_language;
    if (TObjPlayer__sub_802A1018() != 0) {
        set_flag_40__10TObjPlayerFPv((void *) (arg0));
    }
    apply_pending_action__10TObjPlayerFii((void *) (arg1), (void *) (arg0));
    copy_mag_level_to_record__10TObjPlayerFPvPv((void *) (arg1), (void *) (arg0));
    copy_byte_339_to_record__10TObjPlayerFPvPv((void *) (arg1), (void *) (arg0));
    copy_battle_mode__10TObjPlayerFPvPv((void *) (arg1), (void *) (arg0));
    set_flag_524288__10TObjPlayerFPv((void *) (arg1));
}

void set_action_state__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x173) = v; }
void clear_item_slots__10TObjPlayerFPv(void* p) { { int i; for (i = 0; i < 30; i++) { clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv((char*)p + 0x4 + i * 28); } } }

void TObjPlayer__sub_802C456C(Obj_802C456C *self, s32 i, u8 v) {
    self->recs[i].f6 = v;
}

void set_action_palette_slot__10TObjPlayerFPviUc(S_802C457C *self, s32 i, u8 v) {
    is_slot_within_limit__10TObjPlayerFiiUc(self->f3A1, i, v);
    self->buf[i] = v;
}

void* get_action_data__10TObjPlayerFPv(void* p) { return (char*)p + 0x408; }
void set_field_157__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x157) = v; }
void set_byte_13b__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x13b) = v; }
void set_action_flags__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x11f) = v; }
void set_flag_103__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x103) = v; }
void set_flag_e7__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0xe7) = v; }
void set_field_1ab__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x1ab) = v; }
void set_field_18f__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x18f) = v; }

void set_current_time__10TObjPlayerFi(s32 arg0) {
    M2C_UNK spC;
    s32 sp8;
    getDateStamp__FP9DateStamp((s32 *)((void *) (&spC)));
    DateToSeconds__FP9DateStampPi((s32 *)((void *) (&spC)), (s32 *)((void *) (&sp8)));
    TObjPlayer__sub_802C4648((Obj_802C4648 *)((void*)((void*)((void *) (arg0)))), (u32)((void*)((void*)((int) (sp8)))));
}

void TObjPlayer__sub_802C4648(Obj_802C4648 *self, u32 v) {
    self->f77 = v;
    self->f93 = v >> 8;
    self->faf = v >> 16;
    self->fcb = v >> 24;
}

void TObjPlayer__sub_802C4668(O_802C4668 *self, u32 c) {
    self->e[0].v = c;
    self->e[1].v = c >> 8;
    self->e[2].v = c >> 16;
    self->e[3].v = c >> 24;
}

u8 *TObjPlayer__sub_802C4688(O_802C4688 *self, s32 i) {
    return &self->buf[i];
}

E_802C4698 *TObjPlayer__sub_802C4698(O_802C4698 *self, s32 i) {
    return &self->e[i];
}

void set_flag_40__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x7) |= 0x40; }
int init_character_action_config(void* p) { return init_action_config__10TObjPlayerFPv((char*)p + 0x24); }

int TObjPlayer__sub_802C46E0(void* p) { return set_palette_entry__20TWindowActionPaletteFiiiii(p); }

void set_flag_524288__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8011E204(p, (void*)524288); }
void set_flag_80000__10TObjPlayerFPv(void* p) { set_state_flags__10TObjPlayerFPvUi(p, (void*)524288); }

}
