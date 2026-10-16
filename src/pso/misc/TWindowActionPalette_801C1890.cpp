#include "types.h"
#include "pso/misc/TWindowActionPalette.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TItemList.h"
#include "pso/enemy/TObjEneBm5Wolf.h"
#include "pso/misc/TFontSmallLobby.h"
#include "pso/misc/TMainCursor.h"

struct VBase_8003508C_80035084 {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85(s16, int);
};

struct O_801C1C68 { u8 pad[4]; u8 a[0x10]; u8 b[0x10]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct C_801C1BA8 { u32 w[5]; };

struct S_801C1BA8 { u8 a; u8 b; u8 c; u8 d; s32 e; C_801C1BA8 f; };

extern "C" {
void bswap_warp_packet__10TObjPlayerFPv(void* p);
s32 TLobby__send_and_handle_60(s32);
void bswap_warp_packet__10TObjPlayerFPv(void* p);
extern s32 lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 current_floor_index;
extern s32 lobby_player_count;
s32 read_be16_field2__10TObjPlayerFv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void TObjPlayer__sub_801C19C8(void* p, f32 v);
void TObjPlayer__sub_801C19C8(void* p, f32 v);
s32 TLobby__sub_801C19D0(void* p);
s32 TLobby__sub_801C19D0(void* p);
int TObjPlayer__sub_800193FC(void);
int TObjPlayer__sub_8001940C(void);
int TObjPlayer__sub_8001941C(void);
int TObjPlayer__sub_8001943C(void);
int obj_is_hit_receivable(void);
void* TObjPlayer__sub_801C1A00(void* p);
int TObjPlayer__sub_800193FC(void);
int TObjPlayer__sub_8001940C(void);
int TObjPlayer__sub_8001941C(void);
int TObjPlayer__sub_8001943C(void);
int obj_is_hit_receivable(void);
    extern int TObjPlayer__data_8050D460[];
void* TObjPlayer__sub_801C1A00(void* p);
int TObjEneBm5Wolf__sub_800B8A24(void);
void TObjPlayer__sub_801C1A30(void* p);
extern void *tl_04;
int TObjEneBm5Wolf__sub_800B8A24(void);
void TObjPlayer__sub_801C1A30(void* p);
void TObjPlayer__sub_801C1B0C(void);
void TObjPlayer__sub_801C1B0C(void);
int set_flags__10TObjPlayerFUl(void*, int);
int set_flags__10TObjPlayerFUl(void*, int);
int clear_flags__11TAdRicoRingFUl(void*, int);
extern s32 keyboard_task_object[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int player_matrix_stack_buffer;
    extern int resource_decompress_buffer;
    extern int anim_model_matrix_array;
    extern int lbl_805D5680;
extern s32 lbl_805D49C0;
extern s32 keyboard_key_state;
int TItemList__sub_801D5804(void);
int TWindowActionPalette__sub_801C1C20(void* p);
int TItemList__sub_801D5854(void);
int TItemList__sub_801D5868(void);
int TItemList__sub_801D591C(void);
int TItemList__sub_801D598C(void);
int TItemList__sub_801D59A0(void);
extern s32 __vt__9TItemList[];
extern void *TItemList__name;
int TItemList__sub_801D5804(void);
int TItemList__sub_801D5854(void);
int TItemList__sub_801D5868(void);
int TItemList__sub_801D591C(void);
int TItemList__sub_801D598C(void);
int TItemList__sub_801D59A0(void);
int TWindowActionPalette__sub_801C1C20(void* p);
int construct_pb_controller__15TFontSmallLobbyFi(void);
int TObjPlayer__sub_801C1F50(void* p);
int test_flags_any(void*, int);
int construct_pb_controller__15TFontSmallLobbyFi(void);
int TObjPlayer__sub_801C1F50(void* p);
void TObjPlayer__sub_801C1F78(void* p, s16 v);
void TObjPlayer__sub_801C1F78(void* p, s16 v);
int __dl__FPv();
extern u32 lbl_805D4BA4;
extern void *tl_04;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern s32 TBoss2DeRolLe__instance;
int __dl__FPv();
extern u32 lbl_805D4BA4;
extern void *tl_04;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern s32 TBoss2DeRolLe__instance;
void TObjPlayer__sub_801C18E0(void* p);
s32 TLobby__send_and_handle_60(s32);
extern s32 lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 current_floor_index;
extern s32 lobby_player_count;
void TObjPlayer__sub_801C18E0(void* p);
s32 TWindowDuelResult__sub_801C19AC(f32 *arg0);
void init_6x21_inter_level_warp_packet(u8 *arg0);
void reset_settings_to_default__6TLobbyFv(void *);
void fn_801C19D8(void* p, s32 v);
void fn_801C19D8(void* p, s32 v);
void fn_801C19E0(void* p, s32 v);
void fn_801C19E0(void* p, s32 v);
void fn_801C19E8(void* p);
void fn_801C19E8(void* p);
void fn_801C19F4(void* p);
void fn_801C19F4(void* p);
s32 fn_801C1B88(void* p);
s32 fn_801C1B88(void* p);
f32 get_lock_target_distance_sq(void* p);
f32 get_lock_target_distance_sq(void* p);
u16 get_lock_target_id(void* p);
u16 get_lock_target_id(void* p);
s32 fn_801C1BA0(void* p);
s32 fn_801C1BA0(void* p);
void* fn_801C1E44(void* p);
void* fn_801C1E44(void* p);
void* fn_801C1E48(void* p);
void* fn_801C1E48(void* p);
int test_photon_blast_modifier(void* p);
int TWindowActionPalette__sub_801C1C20(void* p);
int test_photon_blast_modifier(void* p);
void fn_801C1E74(void* p);
void fn_801C1E74(void* p);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F95C(void);
extern s32 keyboard_active_flag;
void activate_keyboard(void);
extern s32 keyboard_active_flag;
void deactivate_keyboard(void);
extern s32 keyboard_key_state;
void mark_area_change_pending(void);
extern s32 keyboard_key_state;
void clear_keyboard_key_state(void);
void fn_801C1EA4(void* p);
extern s32 keyboard_task_object[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int player_matrix_stack_buffer;
    extern int resource_decompress_buffer;
    extern int anim_model_matrix_array;
    extern int lbl_805D5680;
extern s32 lbl_805D49C0;
extern s32 keyboard_key_state;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
void activate_keyboard(void);
void deactivate_keyboard(void);
void mark_area_change_pending(void);
void clear_keyboard_key_state(void);
void fn_801C1EA4(void* p);
void fn_801C1EC4(void* p);
void fn_801C1EC4(void* p);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F95C(void);
extern s32 keyboard_active_flag;
void activate_keyboard(void);
extern s32 keyboard_active_flag;
void deactivate_keyboard(void);
extern s32 keyboard_key_state;
void mark_area_change_pending(void);
extern s32 keyboard_key_state;
void clear_keyboard_key_state(void);
void fn_801C1EF4(void* p);
extern s32 keyboard_task_object[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int player_matrix_stack_buffer;
    extern int resource_decompress_buffer;
    extern int anim_model_matrix_array;
    extern int lbl_805D5680;
extern s32 lbl_805D49C0;
extern s32 keyboard_key_state;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
void activate_keyboard(void);
void deactivate_keyboard(void);
void mark_area_change_pending(void);
void clear_keyboard_key_state(void);
void fn_801C1EF4(void* p);
void set_photon_blast_kind(void* p, s16 v);
void set_photon_blast_kind(void* p, s16 v);
void fn_801C1F1C(void* p);
void fn_801C1F1C(void* p);
void fn_801C1E98(void* p);
void fn_801C1E98(void* p);
void fn_801C1EE8(void* p);
void fn_801C1EE8(void* p);
void fn_801C1F40(s32 *arg0);
void is_action_channel_active(s32 *arg0, s32 arg1);
u8 is_item_equipped(u8 *arg0);
u8 *TWindowActionPalette__sub_801C1D7C(s32 arg0, s32 arg1, s32 arg2);
void *TWindowActionPalette__sub_801C1C68(O_801C1C68 *self, s32 i);
s32 get_field_ed__5TItemFv(void *p);
s32 get_field_ec__5TItemFv(void *p);
s32 is_item_stackable(u8, u8);
void TObjPlayer__sub_801C1AC8(void *self);
S_801C1BA8 *fn_801C1BA8(S_801C1BA8 *arg0, S_801C1BA8 *arg1);
}

extern "C" {

f32 fn_801C19A4(void* p);
int clear_flags__11TAdRicoRingFUl(void*, int);
s32 send_subcommand_to_client__6TLobbyFPvUi(s32, s32);
s32 send_60_sized__6TLobbyFPv(s32);
s32 TLobby__send_and_handle_60(s32);
int __dl__FPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFv();
int set_flags__10TObjPlayerFUl(void*, int);
int test_flags_any(void*, int);
int TFontSmallLobby__sub_801C0228(void*);
s32 bswap_pkt_u16x2_u32x2__10TObjPlayerFPv();
s32 bswap_pkt_u32x5__10TObjPlayerFPv();

void init_6x21_inter_level_warp_packet(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 4) = 0;
    *(s8 *)((s8 *)arg0 + 0) = 0x21;
    *(s8 *)((s8 *)arg0 + 1) = 2;
}

void TObjPlayer::send_warp_packet() { bswap_warp_packet__10TObjPlayerFPv((void*)(this)); TLobby__send_and_handle_60((s32)(this)); }

void TObjPlayer__sub_801C18E0(void* p) { ((TObjPlayer *)p)->byteswap_set_position_cmd(); TLobby__send_and_handle_60((s32)(p)); }

void TObjPlayer::byteswap_set_position_cmd() {
    s32 arg0 = (s32)this;
    read_be16_field2__10TObjPlayerFv();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0x14);
}

void TObjPlayer::init_set_position_packet() {
    u8 *arg0 = (u8 *)this;
    *(s16 *)((s8 *)arg0 + 4) = 0;
    *(s16 *)((s8 *)arg0 + 6) = 0;
    *(s16 *)((s8 *)arg0 + 8) = -1;
    *(s16 *)((s8 *)arg0 + 0xA) = -1;
    *(s8 *)((s8 *)arg0 + 0) = 0x3F;
    *(s8 *)((s8 *)arg0 + 1) = 6;
}

f32 fn_801C19A4(void* p) { return *(f32*)((char*)p + 0xc); }

s32 TWindowDuelResult__sub_801C19AC(f32 *arg0) {
    return (s32) *arg0;
}

void TObjPlayer__sub_801C19C8(void* p, f32 v) { *(f32*)((char*)p + 0x0) = v; }

s32 TLobby__sub_801C19D0(void* p) { return *(s32*)((char*)p + 0x4); }

void fn_801C19D8(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

void fn_801C19E0(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

void fn_801C19E8(void* p) { *(s32*)((char*)p + 0x0) = 0; }

void fn_801C19F4(void* p) { *(s32*)((char*)p + 0x0) = 1; }

void* TObjPlayer__sub_801C1A00(void* p) { TObjPlayer__sub_801C1A30(p); return p; }

void TObjPlayer__sub_801C1A30(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

void *TObjPlayer::reset_lobby_settings() {
    reset_settings_to_default__6TLobbyFv(this);
    return this;
}

u8 is_item_equipped(u8 *arg0) {
  unsigned int var_r31;
  var_r31 = 0;
  if ((((TObjPlayer *)arg0)->test_item_flags(4) != 0U) && (((TObjPlayer *)arg0)->test_item_flags(8) != 0U))
  {
    var_r31 = 1;
  }
  return var_r31;
}

void TObjPlayer__sub_801C1AC8(void *self) {
    is_item_stackable(get_field_ec__5TItemFv(self), get_field_ed__5TItemFv(self));
}

void TObjPlayer__sub_801C1B0C(void) {  }

int TObjPlayer::set_flags_bit2() { return set_flags__10TObjPlayerFUl((char*)this + 0x1c, 2); }

int TObjPlayer::set_flags_bit1() { return set_flags__10TObjPlayerFUl((char*)this + 0x1c, 1); }

int TObjPlayer::clear_flag_1_at_1c() { return clear_flags__11TAdRicoRingFUl((char*)this + 0x1c, 1); }

s32 fn_801C1B88(void* p) { return *(s32*)((char*)p + 0x0); }

f32 get_lock_target_distance_sq(void* p) { return *(f32*)((char*)p + 0x8); }

u16 get_lock_target_id(void* p) { return *(u16*)((char*)p + 0x4); }

s32 fn_801C1BA0(void* p) { return *(s32*)((char*)p + 0x24); }

S_801C1BA8 *fn_801C1BA8(S_801C1BA8 *arg0, S_801C1BA8 *arg1) {
    arg0->a = arg1->a;
    arg0->b = arg1->b;
    arg0->c = arg1->c;
    arg0->d = arg1->d;
    arg0->e = arg1->e;
    arg0->f = arg1->f;
    return arg0;
}

int TWindowActionPalette::handle_input_forward() { return TWindowActionPalette__sub_801C1C20(this); }

int TWindowActionPalette__sub_801C1C20(void* p) { return *(u32*)((char*)p + 0x0) == 0; }

void TWindowActionPalette::is_channel_active_at(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = (s32 *)((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
    ((TMainCursor *)(p + arg2))->is_channel_active();
}

void *TWindowActionPalette__sub_801C1C68(O_801C1C68 *self, s32 i) {
    if (i == 0) {
        return self->a;
    }
    return self->b;
}

void is_action_channel_active(s32 *arg0, s32 arg1) {
    TWindowActionPalette::is_channel_active_at((s32) arg0, *arg0, arg1);
}

void TWindowActionPalette::set_palette_entry(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *p = (s32 *)((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
    s32 temp_r31 = (s32)(p + arg2);
    ((TWindowActionPalette *)temp_r31)->set_mode((u8)arg3);
    ((TWindowActionPalette *)temp_r31)->set_slot((u8)arg4);
}

void TWindowActionPalette::set_slot_by_index(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *p = (s32 *)((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
    ((TWindowActionPalette *)(p + arg2))->set_slot((u8)arg3);
}

void TWindowActionPalette::set_slot_mode(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *p = (s32 *)((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
    ((TWindowActionPalette *)(p + arg2))->set_mode((u8)arg3);
}

u8 *TWindowActionPalette__sub_801C1D7C(s32 arg0, s32 arg1, s32 arg2) {
  s32 var_r31;
  u8 *var_r3;
  s32 new_var;
  var_r31 = arg2;
  new_var = ((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)(arg0), (s32)(arg1)));
  var_r3 = (u8 *) (new_var + (var_r31 * 4));
  var_r3 = (u8 *) ((void *) ((TMainCursor *)var_r3)->get_enabled());
  return var_r3;
}

void TWindowActionPalette::get_entry_by_index(s32 *arg0, s32 arg1) {
    TWindowActionPalette__sub_801C1D7C((s32)((s32) arg0), (s32)(*arg0), (s32)(arg1));
}

u8 *TWindowActionPalette::get_slot_type(s32 arg0, s32 arg1, s32 arg2) {
  s32 var_r31;
  s32 new_var;
  u8 *var_r3;
  new_var = ((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
  var_r31 = arg2;
  var_r3 = (u8 *) (new_var + (var_r31 * 4));
  var_r3 = (u8 *) ((void *) ((TMainCursor *)var_r3)->get_type());
  return var_r3;
}

void TWindowActionPalette::get_slot_type_for_index(s32 *arg0, s32 arg1) {
    TWindowActionPalette::get_slot_type((s32)((s32) arg0), (s32)(*arg0), (s32)(arg1));
}

void* fn_801C1E44(void* p) { return p; }

void* fn_801C1E48(void* p) { return (char*)p + 0x24; }

int test_photon_blast_modifier(void* p) { return TWindowActionPalette__sub_801C1C20((char*)p + 0x24); }

void fn_801C1E74(void* p) { fn_801C1E98((void*)((char*)p + 0x24)); }

}
extern "C" {

void fn_801C1E98(void* p) { *(s32*)((char*)p + 0x0) = 0; }

void fn_801C1EA4(void* p) { fn_801C1E98((void*)(p)); }

void fn_801C1EC4(void* p) { fn_801C1EE8((void*)((char*)p + 0x24)); }

}
extern "C" {

void fn_801C1EE8(void* p) { *(s32*)((char*)p + 0x0) = 1; }

void fn_801C1EF4(void* p) { fn_801C1EE8((void*)(p)); }

void set_photon_blast_kind(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }

void fn_801C1F1C(void* p) { fn_801C1F40((s32 *)((char*)p + 0x4c)); }

void fn_801C1F40(s32 *arg0) {
    *arg0 -= 1;
}

int TObjPlayer__sub_801C1F50(void* p) { return test_flags_any((char*)p + 0x40, 2); }

void TObjPlayer__sub_801C1F78(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

s32 TObjPlayer::free_owned_buffer_a(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

s32 TObjPlayer::free_owned_buffer_b(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
