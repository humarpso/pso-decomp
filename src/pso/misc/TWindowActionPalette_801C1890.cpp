#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
int TObjPlayer__sub_80019664(void);
void TObjPlayer__sub_801C1820(void* p);
void TObjPlayer__sub_801C18AC(void* p);
s32 TLobby__send_and_handle_60(s32);
void TObjPlayer__sub_801C1820(void* p);
int TObjPlayer__sub_80019664(void);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TObjPlayer__sub_801C18AC(void* p);
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void TObjPlayer__sub_801C1914(s32 arg0);
void TObjPlayer__sub_801C19C8(void* p, f32 v);
void TObjPlayer__sub_801C19C8(void* p, f32 v);
s32 TLobby__sub_801C19D0(void* p);
s32 TLobby__sub_801C19D0(void* p);
int TObjPlayer__sub_800193FC(void);
int TObjPlayer__sub_8001940C(void);
int TObjPlayer__sub_8001941C(void);
int test_immunity_flags__10TObjPlayerFPvi(void);
int TObjPlayer__sub_8001943C(void);
int add_status_effect_timer__10TObjPlayerFPvii(void);
int obj_is_hit_receivable(void);
void* TObjPlayer__sub_801C1A00(void* p);
int TObjPlayer__sub_800193FC(void);
int TObjPlayer__sub_8001940C(void);
int TObjPlayer__sub_8001941C(void);
int test_immunity_flags__10TObjPlayerFPvi(void);
int TObjPlayer__sub_8001943C(void);
int add_status_effect_timer__10TObjPlayerFPvii(void);
int obj_is_hit_receivable(void);
    extern int TObjPlayer__data_8050D460[];
void* TObjPlayer__sub_801C1A00(void* p);
int TObjEneBm5Wolf__sub_800B896C(void*, void*, void*);
int TObjEneBm5Wolf__sub_800B89A4(void*, void*, void*);
int TObjEneBm5Wolf__sub_800B8A24(void);
void TObjPlayer__sub_801C1A30(void* p);
extern void *tl_04;
int TObjEneBm5Wolf__sub_800B896C(void*, void*, void*);
int TObjEneBm5Wolf__sub_800B89A4(void*, void*, void*);
int TObjEneBm5Wolf__sub_800B8A24(void);
void TObjPlayer__sub_801C1A30(void* p);
void TObjPlayer__sub_801C1B0C(void);
void TObjPlayer__sub_801C1B0C(void);
int TObjPlayer__sub_801C1B10(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_801C1B10(void* p);
int TObjPlayer__sub_801C1B38(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_801C1B38(void* p);
int TObjPlayer__sub_801C1B60(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_801C1B60(void* p);
int TWindowActionPalette__sub_801C1C00(void* p);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
extern s32 lbl_805D49C0;
extern s32 lbl_805D49B8;
int TWindowActionPalette__sub_801C1C00(void* p);
int TItemList__sub_801D5804(void);
int TWindowActionPalette__sub_801C1C20(void* p);
int TItemList__sub_801D5854(void);
int TItemList__sub_801D5868(void);
int TItemList__sub_801D588C(void);
int TItemList__sub_801D58E4(void);
int TItemList__sub_801D591C(void);
int TItemList__sub_801D598C(void);
int TItemList__sub_801D59A0(void);
extern M2C_UNK __vt__9TItemList[];
extern void *lbl_805D3568;
int TItemList__sub_801D5804(void);
int TItemList__sub_801D5854(void);
int TItemList__sub_801D5868(void);
int TItemList__sub_801D588C(void);
int TItemList__sub_801D58E4(void);
int TItemList__sub_801D591C(void);
int TItemList__sub_801D598C(void);
int TItemList__sub_801D59A0(void);
int TWindowActionPalette__sub_801C1C20(void* p);
int construct_pb_controller__15TFontSmallLobbyFi(void);
int TFontSmallLobby__sub_801D6614(void);
int TObjPlayer__sub_801C1F50(void* p);
int test_flags_any(void*, int);
int construct_pb_controller__15TFontSmallLobbyFi(void);
int TFontSmallLobby__sub_801D6614(void);
int TObjPlayer__sub_801C1F50(void* p);
void TObjPlayer__sub_801C1F78(void* p, s16 v);
void TObjPlayer__sub_801C1F78(void* p, s16 v);
s32 TObjPlayer__sub_801C1F80(s32 arg0, s16 arg1);
int __dl__FPv();
extern u32 lbl_805D4BA4;
extern void *tl_04;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern s32 TBoss2DeRolLe__data_805D4BC4;
s32 TObjPlayer__sub_801C1F80(s32 arg0, s16 arg1);
s32 TObjPlayer__sub_801C1FBC(s32 arg0, s16 arg1);
int __dl__FPv();
extern u32 lbl_805D4BA4;
extern void *tl_04;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern const f32 TBoss2DeRolLe__data_805D827C;
extern s32 TBoss2DeRolLe__data_805D4BC4;
s32 TObjPlayer__sub_801C1FBC(s32 arg0, s16 arg1);
void TObjPlayer__sub_801C1914(s32 arg0);
void TObjPlayer__sub_801C18E0(void* p);
s32 TLobby__send_and_handle_60(s32);
void TObjPlayer__sub_801C1914(s32 arg0);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TObjPlayer__sub_801C18E0(void* p);
s32 TWindowDuelResult__sub_801C19AC(f32 *arg0);
void TObjPlayer__sub_801C1890(u8 *arg0);
void TObjPlayer__sub_801C1978(u8 *arg0);
void reset_settings_to_default__6TLobbyFPv(void *);
void *TObjPlayer__sub_801C1A40(void *arg0);
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
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void mark_area_change_pending(void);
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F9A4(void);
void fn_801C1EA4(void* p);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
extern s32 lbl_805D49C0;
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
void mark_area_change_pending(void);
void TKeyBoardControl__sub_8000F9A4(void);
void fn_801C1EA4(void* p);
void fn_801C1EC4(void* p);
void fn_801C1EC4(void* p);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F95C(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void mark_area_change_pending(void);
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F9A4(void);
void fn_801C1EF4(void* p);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
extern s32 lbl_805D49C0;
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
void mark_area_change_pending(void);
void TKeyBoardControl__sub_8000F9A4(void);
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
M2C_UNK is_channel_active__11TMainCursorFPv(s32);
void TWindowActionPalette__sub_801C1C30(s32 arg0, s32 arg1, s32 arg2);
s32 set_slot__20TWindowActionPaletteFPvUc(s32, u8);
s32 set_mode__20TWindowActionPaletteFPvUc(s32, u8);
void set_palette_entry__20TWindowActionPaletteFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 set_slot__20TWindowActionPaletteFPvUc(s32, u8);
void TWindowActionPalette__sub_801C1CFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 set_mode__20TWindowActionPaletteFPvUc(s32, u8);
void TWindowActionPalette__sub_801C1D3C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TWindowActionPalette__sub_801C1C30(s32 arg0, s32 arg1, s32 arg2);
void is_action_channel_active(s32 *arg0, s32 arg1);
void TWindowActionPalette__sub_801C1DB8(s32 *arg0, s32 arg1);
void TWindowActionPalette__sub_801C1E1C(s32 *arg0, s32 arg1);
s32 test_item_flags__10TObjPlayerFPvUi(void *, s32);
u8 is_item_equipped(u8 *arg0);
u8 get_type__11TMainCursorFPv(void *);
u8 *get_slot_type__20TWindowActionPaletteFiii(s32 arg0, s32 arg1, s32 arg2);
u8 get_enabled__11TMainCursorFPv(void *);
u8 *TWindowActionPalette__sub_801C1D7C(s32 arg0, s32 arg1, s32 arg2);
void *TWindowActionPalette__sub_801C1C68(O_801C1C68 *self, s32 i);
s32 get_field_ed__10TObjPlayerFPv(void *p);
s32 get_field_ec__12TOSwitchItemFPv(void *p);
s32 is_item_stackable(u8, u8);
void TObjPlayer__sub_801C1AC8(void *self);
S_801C1BA8 *fn_801C1BA8(S_801C1BA8 *arg0, S_801C1BA8 *arg1);
}

extern "C" {

f32 fn_801C19A4(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
s32 send_subcommand_to_client__6TLobbyFPvUi(s32, s32);
s32 TLobby__sub_801E4534(s32);
s32 TLobby__send_and_handle_60(s32);
int __dl__FPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();
int set_flags__10TObjPlayerFPvUi(void*, int);
int test_flags_any(void*, int);
s32 set_slot__20TWindowActionPaletteFPvUc(s32, u8);
s32 set_mode__20TWindowActionPaletteFPvUc(s32, u8);
int TFontSmallLobby__sub_801C0228(void*);
s32 bswap_pkt_u16x2_u32x2__10TObjPlayerFPv();
s32 bswap_pkt_u32x5__10TObjPlayerFPv();

void TObjPlayer__sub_801C1890(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x21;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void TObjPlayer__sub_801C18AC(void* p) { TObjPlayer__sub_801C1820((void*)(p)); TLobby__send_and_handle_60((s32)(p)); }

void TObjPlayer__sub_801C18E0(void* p) { TObjPlayer__sub_801C1914((s32)((void*)(p))); TLobby__send_and_handle_60((s32)(p)); }

void TObjPlayer__sub_801C1914(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0x14);
}

void TObjPlayer__sub_801C1978(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s16 *, 8) = -1;
    M2C_FIELD(arg0, s16 *, 0xA) = -1;
    M2C_FIELD(arg0, s8 *, 0) = 0x3F;
    M2C_FIELD(arg0, s8 *, 1) = 6;
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

void *TObjPlayer__sub_801C1A40(void *arg0) {
    reset_settings_to_default__6TLobbyFPv(arg0);
    return arg0;
}

u8 is_item_equipped(u8 *arg0) {
  unsigned int var_r31;
  var_r31 = 0;
  if ((test_item_flags__10TObjPlayerFPvUi(arg0, 4) != 0U) && (test_item_flags__10TObjPlayerFPvUi(arg0, 8) != 0U))
  {
    var_r31 = 1;
  }
  return var_r31;
}

void TObjPlayer__sub_801C1AC8(void *self) {
    is_item_stackable(get_field_ec__12TOSwitchItemFPv(self), get_field_ed__10TObjPlayerFPv(self));
}

void TObjPlayer__sub_801C1B0C(void) {  }

int TObjPlayer__sub_801C1B10(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x1c, 2); }

int TObjPlayer__sub_801C1B38(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x1c, 1); }

int TObjPlayer__sub_801C1B60(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x1c, 1); }

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

int TWindowActionPalette__sub_801C1C00(void* p) { return TWindowActionPalette__sub_801C1C20(p); }

int TWindowActionPalette__sub_801C1C20(void* p) { return *(u32*)((char*)p + 0x0) == 0; }

void TWindowActionPalette__sub_801C1C30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = (s32 *)((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
    is_channel_active__11TMainCursorFPv((s32)(p + arg2));
}

void *TWindowActionPalette__sub_801C1C68(O_801C1C68 *self, s32 i) {
    if (i == 0) {
        return self->a;
    }
    return self->b;
}

void is_action_channel_active(s32 *arg0, s32 arg1) {
    TWindowActionPalette__sub_801C1C30((s32) arg0, *arg0, arg1);
}

void set_palette_entry__20TWindowActionPaletteFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *p = (s32 *)((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
    s32 temp_r31 = (s32)(p + arg2);
    set_mode__20TWindowActionPaletteFPvUc(temp_r31, (u8)arg3);
    set_slot__20TWindowActionPaletteFPvUc(temp_r31, (u8)arg4);
}

void TWindowActionPalette__sub_801C1CFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *p = (s32 *)((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
    set_slot__20TWindowActionPaletteFPvUc((s32)(p + arg2), (u8)arg3);
}

void TWindowActionPalette__sub_801C1D3C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *p = (s32 *)((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
    set_mode__20TWindowActionPaletteFPvUc((s32)(p + arg2), (u8)arg3);
}

u8 *TWindowActionPalette__sub_801C1D7C(s32 arg0, s32 arg1, s32 arg2) {
  s32 var_r31;
  u8 *var_r3;
  s32 new_var;
  var_r31 = arg2;
  new_var = ((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)(arg0), (s32)(arg1)));
  var_r3 = (u8 *) (new_var + (var_r31 * 4));
  var_r3 = (u8 *) ((void *) get_enabled__11TMainCursorFPv(var_r3));
  return var_r3;
}

void TWindowActionPalette__sub_801C1DB8(s32 *arg0, s32 arg1) {
    TWindowActionPalette__sub_801C1D7C((s32)((s32) arg0), (s32)(*arg0), (s32)(arg1));
}

u8 *get_slot_type__20TWindowActionPaletteFiii(s32 arg0, s32 arg1, s32 arg2) {
  s32 var_r31;
  s32 new_var;
  u8 *var_r3;
  new_var = ((s32)TWindowActionPalette__sub_801C1C68((O_801C1C68 *)((s32)(arg0)), (s32)((s32)(arg1))));
  var_r31 = arg2;
  var_r3 = (u8 *) (new_var + (var_r31 * 4));
  var_r3 = (u8 *) ((void *) get_type__11TMainCursorFPv(var_r3));
  return var_r3;
}

void TWindowActionPalette__sub_801C1E1C(s32 *arg0, s32 arg1) {
    get_slot_type__20TWindowActionPaletteFiii((s32)((s32) arg0), (s32)(*arg0), (s32)(arg1));
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

s32 TObjPlayer__sub_801C1F80(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

s32 TObjPlayer__sub_801C1FBC(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
