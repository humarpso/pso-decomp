#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801BE784(void* p, u8 v);
void TObjPlayer__sub_801BE794(void* p, u8 v);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
void TObjPlayer__sub_801BE838(void* p, u8 v);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int TObjPlayer__sub_801BEABC(void* p);
s32 TObjPlayer__sub_801BEB0C(void* p);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int check_flag__10TObjPlayerFl(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int end_camera_pan__10TObjPlayerFv(void*);
int start_freeze__10TObjPlayerFv(void*);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);

int TObjPlayer::is_action_active() { return (*(u32*)((char*)this + 0x334) >> 1) & 0x1; }
void TObjPlayer__sub_801BE784(void* p, u8 v) { *(u8*)((char*)p + 0x2e7) = v; }
u8 TObjPlayer::get_battle_mode() { return *(u8*)((char*)this + 0x33a); }
void TObjPlayer__sub_801BE794(void* p, u8 v) { *(u8*)((char*)p + 0x2cb) = v; }
u8 TObjPlayer::get_byte_339() { return *(u8*)((char*)this + 0x339); }
void TObjPlayer__sub_801BE7A4(void* p, u8 v) { *(u8*)((char*)p + 0x2af) = v; }
u8 get_mag_level__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x338); }
void TObjPlayer__sub_801BE7B4(void* p, u8 v) { *(u8*)((char*)p + 0x293) = v; }
int TObjPlayer__sub_801BE7BC(void* p) { return TObjPlayer__sub_801BED70((char*)p + 0x374); }
void TObjPlayer__sub_801BE7E0(void* p, u8 v) { *(u8*)((char*)p + 0x277) = v; }
int TObjPlayer::get_equip_flags() { return TObjPlayer__sub_801BED78((char*)this + 0x374); }
void TObjPlayer__sub_801BE80C(void* p, u8 v) { *(u8*)((char*)p + 0x25b) = v; }
int TObjPlayer::get_inventory_state() { return TObjPlayer__sub_801BED80((char*)this + 0x374); }
void TObjPlayer__sub_801BE838(void* p, u8 v) { *(u8*)((char*)p + 0x23f) = v; }
int TObjPlayer::get_field_374_state() { return TObjPlayer__sub_801BED88((char*)this + 0x374); }
void TObjPlayer__sub_801BE864(void* p, u8 v) { *(u8*)((char*)p + 0x223) = v; }
int TObjPlayer::get_field_374() { return TObjPlayer__sub_801BED90((char*)this + 0x374); }

}

#include "types.h"

struct Item_801BE890 { u8 b[0x1C]; };

struct Inv_801BE890 { s32 f0; Item_801BE890 items[0x1E]; };

extern "C" {
void init__17TPlyInventoryItemFv(void *);
Inv_801BE890 *init_inventory_list__10TObjPlayerFPv(Inv_801BE890 *arg0);
}

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801BE784(void* p, u8 v);
void TObjPlayer__sub_801BE794(void* p, u8 v);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
void TObjPlayer__sub_801BE838(void* p, u8 v);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int TObjPlayer__sub_801BEABC(void* p);
s32 TObjPlayer__sub_801BEB0C(void* p);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int check_flag__10TObjPlayerFl(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int end_camera_pan__10TObjPlayerFv(void*);
int start_freeze__10TObjPlayerFv(void*);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);

Inv_801BE890 *init_inventory_list__10TObjPlayerFPv(Inv_801BE890 *arg0) {
    s32 i;
    arg0->f0 = 0;
    for (i = 0; i < 0x1E; i++) {
        init__17TPlyInventoryItemFv(&arg0->items[i]);
    }
    return arg0;
}

}

#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801BE784(void* p, u8 v);
void TObjPlayer__sub_801BE794(void* p, u8 v);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
void TObjPlayer__sub_801BE838(void* p, u8 v);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int TObjPlayer__sub_801BEABC(void* p);
s32 TObjPlayer__sub_801BEB0C(void* p);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int check_flag__10TObjPlayerFl(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int end_camera_pan__10TObjPlayerFv(void*);
int start_freeze__10TObjPlayerFv(void*);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);

void TObjPlayer::set_move_mode(s32 v) { *(s32*)((char*)this + 0x3dc) = v; }
void TObjPlayer::set_input_mode(s32 v) { *(s32*)((char*)this + 0x3d8) = v; }

}

#include "types.h"

struct E_801BE8F4 { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_801BE8F4 { u8 pad[0xa4]; E_801BE8F4 *entries; };

extern "C" {
u8 TObjPlayer__sub_801BE8F4(O_801BE8F4 *self, s32 i, u32 mask);
}

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801BE784(void* p, u8 v);
void TObjPlayer__sub_801BE794(void* p, u8 v);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
void TObjPlayer__sub_801BE838(void* p, u8 v);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int TObjPlayer__sub_801BEABC(void* p);
s32 TObjPlayer__sub_801BEB0C(void* p);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int check_flag__10TObjPlayerFl(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int end_camera_pan__10TObjPlayerFv(void*);
int start_freeze__10TObjPlayerFv(void*);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);

u8 TObjPlayer__sub_801BE8F4(O_801BE8F4 *self, s32 i, u32 mask) {
    return (self->entries[i].flags & mask) != 0;
}

}

#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801BE784(void* p, u8 v);
void TObjPlayer__sub_801BE794(void* p, u8 v);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
void TObjPlayer__sub_801BE838(void* p, u8 v);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int TObjPlayer__sub_801BEABC(void* p);
s32 TObjPlayer__sub_801BEB0C(void* p);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int check_flag__10TObjPlayerFl(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int end_camera_pan__10TObjPlayerFv(void*);
int start_freeze__10TObjPlayerFv(void*);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);

void* TObjPlayer__sub_801BE918(void* a0, int a1, void* a2, void* a3) { *(float*)((char*)a2 + 0x0) = *(float*)((char*)a0 + a1 * 8 + 0x6b0); *(float*)((char*)a3 + 0x0) = *(float*)((char*)a0 + a1 * 8 + 0x6b4); return (char*)a0 + a1 * 8; }
s32 TObjPlayer::clamp_index_to_max(s32 arg0) {
    s32 var_r31;

    var_r31 = arg0;
    if (var_r31 < 0) {
        var_r31 = 0;
    } else if (var_r31 > TObjPlayer::get_max_level()) {
        var_r31 = TObjPlayer::get_max_level();
    }
    return var_r31;
}
void TObjPlayer::clamp_nested_index() {
    TObjPlayer::clamp_index_to_max(*(s32 *)((s8 *)(*(void **)((s8 *)this + 0x2B0)) + 0x18));
}
void TObjPlayer__sub_801BE9A8(s32 arg0) {
    TObjPlayer__sub_8011E204((void*)(arg0), 0x20000);
}
void set_flag_20000__10TObjPlayerFi(s32 arg0) {
    ((TObjPlayer *)arg0)->set_state_flags(0x20000);
}
void TObjPlayer::set_flag_2000000() {
    TObjPlayer__sub_8011E204(this, 0x02000000);
}
void TObjPlayer::set_flag_02000000() {
    check_flag__10TObjPlayerFl(this, 0x02000000);
}

}

#include "types.h"

extern "C" {
}

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801BE784(void* p, u8 v);
void TObjPlayer__sub_801BE794(void* p, u8 v);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
void TObjPlayer__sub_801BE838(void* p, u8 v);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int TObjPlayer__sub_801BEABC(void* p);
s32 TObjPlayer__sub_801BEB0C(void* p);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int check_flag__10TObjPlayerFl(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int end_camera_pan__10TObjPlayerFv(void*);
int start_freeze__10TObjPlayerFv(void*);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);

void TObjPlayer::set_position_history_entry(s32 arg1, f32 farg0, f32 farg1) {
    s32 arg0 = (s32)this;
    u8 *temp_r3;
    temp_r3 = (u8 *)(arg0 + (arg1 * 8));
    *(f32 *)((s8 *)temp_r3 + 0x6B0) = farg0;
    *(f32 *)((s8 *)temp_r3 + 0x6B4) = farg1;
}

}

#include "types.h"
#include "pso/misc/TPlyPhotonChair.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801BE784(void* p, u8 v);
void TObjPlayer__sub_801BE794(void* p, u8 v);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
void TObjPlayer__sub_801BE838(void* p, u8 v);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int TObjPlayer__sub_801BEABC(void* p);
s32 TObjPlayer__sub_801BEB0C(void* p);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int check_flag__10TObjPlayerFl(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int end_camera_pan__10TObjPlayerFv(void*);
int start_freeze__10TObjPlayerFv(void*);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);

void TObjPlayer::set_action_flag_2() { *(u32*)((char*)this + 0x334) |= 0x2; }
void set_flag_400000__10TObjPlayerFi(s32 arg0) {
    ((TObjPlayer *)arg0)->set_state_flags(0x400000);
}
int TObjPlayer::check_flag_48() { return check_flag__10TObjPlayerFl(this, 48); }
int TObjPlayer::is_status_locked() { return *(u32*)((char*)this + 0x30) & 0x10000; }
int TObjPlayer::is_status_flag_200() { return *(u32*)((char*)this + 0x30) & 0x200; }
int TObjPlayer__sub_801BEABC(void* p) { return end_camera_pan__10TObjPlayerFv(p); }
int TObjPlayer::start_freeze_self() { return start_freeze__10TObjPlayerFv(this); }
void TObjPlayer::set_floor(s32 v) { *(s32*)((char*)this + 0x3e4) = v; }
void TObjPlayer::set_floor_index(s32 v) { *(s32*)((char*)this + 0x3e0) = v; }

}
