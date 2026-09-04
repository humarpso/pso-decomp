#ifndef PSO_CLASS_PACKAGE

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjPlayer__sub_801BED70(void* p);
u8 TObjPlayer__sub_801BED78(void* p);
u8 TObjPlayer__sub_801BED80(void* p);
u8 TObjPlayer__sub_801BED88(void* p);
u8 TObjPlayer__sub_801BED90(void* p);
void TObjPlayer__sub_801BED98(void* p, u8 v);
void TObjPlayer__sub_801BEDA0(void* p, u8 v);
void TObjPlayer__sub_801BEDA8(void* p, u8 v);
void TObjPlayer__sub_801BEDB0(void* p, u8 v);
void TObjPlayer__sub_801BEDB8(void* p, u8 v);
void *TObjPlayer__sub_801BEDC0(void *arg0, s16 arg1);
int TObjPlayer__sub_801BF460(void);
void TObjPlayer__sub_801BF47C(void* p);
int TObjPlayer__sub_801BF488(void);
int TObjPlayer__sub_801BF4A0(void);
void add_item_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void add_item_count_kind4__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
int clear_flag0_bit1__10TObjPlayerFPv(void* p);
int set_action_palette_mode__10TObjPlayerFPv(void* p);
int set_flag_2__10TObjPlayerFPv(void* p);
void set_position__10TObjPlayerFPvfff(void* p, f32 a, f32 b, f32 c);
void set_shared_count__10TObjPlayerFi(int a0);
void set_shared_flag__10TObjPlayerFi(int a0);
void try_add_item__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void try_add_item_count_kind3__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void try_add_item_count_type2__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
int update_action_palette__10TObjPlayerFPv(void* p);
M2C_UNK __dl__FPv(void *);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int set_flags__10TObjPlayerFPvUi(void*, int);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
s32 try_add_item_count__10TObjPlayerFiiiUc(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);

    extern int lbl_805D5D74;
void set_shared_flag__10TObjPlayerFi(int a0) { lbl_805D5D74 = a0; }

    extern int lbl_805D5D70;
void set_shared_count__10TObjPlayerFi(int a0) { lbl_805D5D70 = a0; }

void add_item_count_kind4__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 4, arg2);
}
void try_add_item_count_kind3__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 3, arg2);
}
void try_add_item_count_type2__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 2, arg2);
}
void add_item_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 1, arg2);
}
void try_add_item__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 0, arg2);
}
u8 TObjPlayer__sub_801BED70(void* p) { return *(u8*)((char*)p + 0x4); }
u8 TObjPlayer__sub_801BED78(void* p) { return *(u8*)((char*)p + 0x3); }
u8 TObjPlayer__sub_801BED80(void* p) { return *(u8*)((char*)p + 0x2); }
u8 TObjPlayer__sub_801BED88(void* p) { return *(u8*)((char*)p + 0x1); }
u8 TObjPlayer__sub_801BED90(void* p) { return *(u8*)((char*)p + 0x0); }
void TObjPlayer__sub_801BED98(void* p, u8 v) { *(u8*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_801BEDA0(void* p, u8 v) { *(u8*)((char*)p + 0x3) = v; }
void TObjPlayer__sub_801BEDA8(void* p, u8 v) { *(u8*)((char*)p + 0x2) = v; }
void TObjPlayer__sub_801BEDB0(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
void TObjPlayer__sub_801BEDB8(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }

extern M2C_UNK lbl_804C3E44[];

void *TObjPlayer__sub_801BEDC0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804C3E44;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void set_position__10TObjPlayerFPvfff(void* p, f32 a, f32 b, f32 c) { *(f32*)((char*)p + 0x38) = a; *(f32*)((char*)p + 0x3c) = b; *(f32*)((char*)p + 0x40) = c; }

int TObjPlayer__sub_801BF460(void) { return 0; }

void TObjPlayer__sub_801BF47C(void* p) { *(s32*)((char*)p + 0x0) = 0; }

int TObjPlayer__sub_801BF488(void) { return 0; }
int TObjPlayer__sub_801BF4A0(void) { return 0; }

int update_action_palette__10TObjPlayerFPv(void* p) { return set_slot__20TWindowActionPaletteFPvUc((char*)p + 0x4); }
int set_action_palette_mode__10TObjPlayerFPv(void* p) { return set_mode__20TWindowActionPaletteFPvUc((char*)p + 0x4); }
int clear_flag0_bit1__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi(p, 2); }
int set_flag_2__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi(p, 2); }

}
#else

#if PSO_CLASS_PACKAGE == 0x801D84A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D8664(s32, s16, s16);
s32 set_animation_default__10TObjPlayerFPv(s32, s16);
void *TObjPlayer__sub_801D8E1C();
s32 TObjPlayer__sub_801D84A8(void* p);
int bswap_disp_config_field__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D84F0(void* p);
int bswap_16__FPUs(void*);

s32 TObjPlayer__sub_801D84A8(void* p) { return *(s32*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102C78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag__10TObjPlayerFPvi(s32, s32);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int has_flag_128__10TObjPlayerFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
s16 get_stat__10TObjPlayerFPv(void* p);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);

void set_facing__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x32e) = v; }
s16 get_stat_bonus__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2be); }
s16 get_stat__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2bc); }
int get_equip_field_d04__10TObjPlayerFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04); }
void is_flag_20000_set__10TObjPlayerFv(void) {
    s32 uninit;
    check_flag__10TObjPlayerFPvi(uninit, 0x20000);
}
f32 get_mag_scale_f__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0x1c); }

void read_be16_field2__10TObjPlayerFPv(void* p);
void bswap_32__FPUl(u32* p);

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102CE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80102CE0(void* p);
void TObjPlayer__sub_80102D14(void* p);
int TLobby__send_and_handle_60(void* a0 = 0);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int bswap_32__FPUl(void* a0 = 0);
s32 check_flag__10TObjPlayerFPvi(s32, s32);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);
s16 get_stat__10TObjPlayerFPv(void* p);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
int has_flag_128__10TObjPlayerFPv(void* p);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
void read_be16_field2__10TObjPlayerFPv(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);
int swap_6x61_fields__10TObjPlayerFPv(void* a0 = 0);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);

void TObjPlayer__sub_80102CE0(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }
void TObjPlayer__sub_80102D14(void* p) { swap_6x61_fields__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102D48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag__10TObjPlayerFPvi(s32, s32);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int has_flag_128__10TObjPlayerFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
s16 get_stat__10TObjPlayerFPv(void* p);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);

void read_be16_field2__10TObjPlayerFPv(void* p);
void bswap_32__FPUl(u32* p);
void swap_6x61_fields__10TObjPlayerFPv(void* p) {
    read_be16_field2__10TObjPlayerFPv(p);
    bswap_32__FPUl((u32*)((char*)p + 4));
    bswap_32__FPUl((u32*)((char*)p + 8));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102DA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag__10TObjPlayerFPvi(s32, s32);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int has_flag_128__10TObjPlayerFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
s16 get_stat__10TObjPlayerFPv(void* p);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);

void read_be16_field2__10TObjPlayerFPv(void* p);
void bswap_32__FPUl(u32* p);

u8 is_not_matching_lobby_id__10TObjPlayerFPv(void *arg0) {
    return (u8) (is_matching_id__6TLobbyFiUs(arg0, M2C_FIELD(arg0, u16 *, 2)) == 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011E214
#include "types.h"

extern "C" {

void set_state_flags__10TObjPlayerFPvUi(void* p, u32 v);
u8 TObjPlayer__sub_8011E29C(void* p);
void TObjPlayer__sub_8011E2A4(void* p, u8 v);

void set_flag_10000__10TObjPlayerFPv(void *arg0) {
    set_state_flags__10TObjPlayerFPvUi((void*)(arg0), 0x10000);
}
void set_state_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x334) |= v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011E29C
#include "types.h"

extern "C" {

void set_state_flags__10TObjPlayerFPvUi(void* p, u32 v);
u8 TObjPlayer__sub_8011E29C(void* p);
void TObjPlayer__sub_8011E2A4(void* p, u8 v);

u8 TObjPlayer__sub_8011E29C(void* p) { return *(u8*)((char*)p + 0x1d2); }
void TObjPlayer__sub_8011E2A4(void* p, u8 v) { *(u8*)((char*)p + 0x1d2) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011E384
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_mode_two_and_ready__10TObjPlayerFPv(void *arg0);
s16 is_status_subsystem_ready__10TObjPlayerFPv(s32);

struct Base_8011E384 { char pad[0x18]; };
struct VObj_8011E384 : Base_8011E384 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();virtual void m7();
    virtual void m8();virtual void m9();virtual void m10();virtual void m11();
    virtual void m12();virtual void m13();virtual void m14();virtual void m15();
    virtual void m16();virtual void m17();virtual void m18();virtual void m19();
    virtual void m20();virtual void m21();virtual void m22();virtual void m23();
    virtual void m24();virtual void m25();virtual void m26();virtual void m27();
    virtual void m28();virtual void m29();virtual void m30();virtual void m31();
    virtual void m32();
    virtual int m35();
};

s32 is_mode_two_and_ready__10TObjPlayerFPv(void *arg0) {
    if ((is_status_subsystem_ready__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0)) == 2) &&
        (((VObj_8011E384 *)arg0)->m35() == 1)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011E5C0
#include "types.h"

extern "C" {

int memcpy(void*, void*, void*);
void TObjPlayer__sub_8011E5C0(void);
void TObjPlayer__sub_8011E5C4(void);
void TObjPlayer__sub_8011E5C8(void);
void TObjPlayer__sub_8011E5CC(void);
void TObjPlayer__sub_8011E5D0(void);
void TObjPlayer__sub_8011E5D4(void);
void TObjPlayer__sub_8011E5D8(void);
void TObjPlayer__sub_8011E5DC(void);
void TObjPlayer__sub_8011E5E0(void);
void TObjPlayer__sub_8011E610(void* p, s32 v);

void TObjPlayer__sub_8011E5C0(void) {  }
void TObjPlayer__sub_8011E5C4(void) {  }
void TObjPlayer__sub_8011E5C8(void) {  }
void TObjPlayer__sub_8011E5CC(void) {  }
void TObjPlayer__sub_8011E5D0(void) {  }
void TObjPlayer__sub_8011E5D4(void) {  }
void TObjPlayer__sub_8011E5D8(void) {  }
void TObjPlayer__sub_8011E5DC(void) {  }
void TObjPlayer__sub_8011E5E0(void) {  }
void copy_field6_from__10TObjPlayerFPvPv(void* p, void* a1) { memcpy((char*)p + 0x6, (char*)a1 + 0x1a4, (void*)6); }
void TObjPlayer__sub_8011E610(void* p, s32 v) { *(s32*)((char*)p + 0x1bc) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011E6E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *get_motion_ptr__10TObjPlayerFPv(u8 *arg0);

struct VBase18c_8011e6e8 { char pad[0x18]; };
struct VObj18c_8011e6e8 : VBase18c_8011e6e8 {
    virtual M2C_UNK m0();  virtual M2C_UNK m1();  virtual M2C_UNK m2();
    virtual M2C_UNK m3();  virtual M2C_UNK m4();  virtual M2C_UNK m5();
    virtual M2C_UNK m6();  virtual M2C_UNK m7();  virtual M2C_UNK m8();
    virtual M2C_UNK m9();  virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14();
    virtual M2C_UNK m15(); virtual M2C_UNK m16(); virtual M2C_UNK m17();
    virtual M2C_UNK m18(); virtual M2C_UNK m19(); virtual M2C_UNK m20();
    virtual M2C_UNK m21(); virtual M2C_UNK m22(); virtual M2C_UNK m23();
    virtual M2C_UNK m24(); virtual M2C_UNK m25(); virtual M2C_UNK m26();
    virtual M2C_UNK m27(); virtual M2C_UNK m28(); virtual M2C_UNK m29();
    virtual M2C_UNK m30(); virtual M2C_UNK m31(); virtual M2C_UNK m32();
    virtual M2C_UNK m33(); virtual M2C_UNK m34(); virtual M2C_UNK m35();
    virtual M2C_UNK m36(); virtual M2C_UNK m37(); virtual M2C_UNK m38();
    virtual M2C_UNK m39(); virtual M2C_UNK m40(); virtual M2C_UNK m41();
    virtual M2C_UNK m42(); virtual M2C_UNK m43(); virtual M2C_UNK m44();
    virtual M2C_UNK m45(); virtual M2C_UNK m46(); virtual M2C_UNK m47();
    virtual M2C_UNK m48(); virtual M2C_UNK m49(); virtual M2C_UNK m50();
    virtual M2C_UNK m51(); virtual M2C_UNK m52(); virtual M2C_UNK m53();
    virtual M2C_UNK m54(); virtual M2C_UNK m55(); virtual M2C_UNK m56();
    virtual M2C_UNK m57(); virtual M2C_UNK m58(); virtual M2C_UNK m59();
    virtual M2C_UNK m60(); virtual M2C_UNK m61(); virtual M2C_UNK m62();
    virtual M2C_UNK m63(M2C_UNK, void *);
};

u8 *get_motion_ptr__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xF0));
    if (temp_r3 != NULL) {
        ((VObj18c_8011e6e8 *) temp_r3)->m63(0x30, arg0 + 0x1AC);
    }
    return arg0 + 0x1AC;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011E738
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8011E828 { char pad[0x18]; };
struct VObj_8011E828 : Base_8011E828 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual s32 m33();
};

extern "C" {

void call_callback_1ec__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
void apply_model_params__10TObjPlayerFPv(void *arg0);
void copy_item_to_data__10TObjPlayerFi(s32 arg0);
void update_model_flags__10TObjPlayerFPv(struct VObj_8011E828 *o);
M2C_UNK copy_to_item_data__5TItemFPvPv(s32, M2C_UNK *);
M2C_UNK TObjPlayer__sub_8011C8BC(s32, s16 *, s16 *);
M2C_UNK set_model_param__10TObjPlayerFPvs(void *, s16);
M2C_UNK set_model_id__10TObjPlayerFPvs(void *, s16);
M2C_UNK check_item_flags__9TItemDataFPv(M2C_UNK *);
M2C_UNK init__9TItemDataFv(M2C_UNK *);

extern s32 tl_05;

void call_callback_1ec__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r12)(s32, void *, s32, s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, void *, s32, s32), 0x1EC);
    if (temp_r12 != NULL) {
        temp_r12(tl_05, arg0, arg1, arg2);
    }
}

struct Base_8011E77C { char pad[0x18]; };
struct VObj_8011E77C : Base_8011E77C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
};

void apply_model_params__10TObjPlayerFPv(void *arg0) {
    s16 spA;
    s16 sp8;
    void *temp_r3;

    TObjPlayer__sub_8011C8BC(M2C_FIELD(arg0, u8 *, 0x1D2) & 0x3F, &spA, &sp8);
    set_model_id__10TObjPlayerFPvs(M2C_FIELD(arg0, void **, 0xF0), spA);
    set_model_param__10TObjPlayerFPvs(M2C_FIELD(arg0, void **, 0xF0), sp8);
    temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
    ((VObj_8011E77C *)temp_r3)->m71();
}

void copy_item_to_data__10TObjPlayerFi(s32 arg0) {
    M2C_UNK sp8[5];

    init__9TItemDataFv(sp8);
    copy_to_item_data__5TItemFPvPv(arg0, sp8);
    check_item_flags__9TItemDataFPv(sp8);
}

void update_model_flags__10TObjPlayerFPv(struct VObj_8011E828 *o) {
    if (o->m33() == 0) {
        M2C_FIELD(o, u8 *, 0x1D2) = M2C_FIELD(o, u8 *, 0x1D2) & 0x7F;
    }
    apply_model_params__10TObjPlayerFPv((void *)(o));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011ED74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fill_status_info__10TObjPlayerFPvPv(void *arg0, void *arg1);
s32 get_field_d8__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8011E484(void *);
M2C_UNK TObjPlayer__sub_8011E4D8();
s16 is_status_subsystem_ready__10TObjPlayerFPv(s32);
f32 query_extended_state__10TObjPlayerFPv(s32);
f32 TObjPlayer__sub_80121198(s32);
s16 get_stat_by_key_state__10TObjPlayerFPv(s32);
s16 obj_getField1c(s32);

void fill_status_info__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TObjPlayer__sub_8011E4D8();
    M2C_FIELD(arg1, s16 *, 0x14) = obj_getField1c(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, s16 *, 0x16) = get_stat_by_key_state__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, s32 *, 0x18) = get_field_d8__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg1, f32 *, 0x1C) = TObjPlayer__sub_80121198(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) is_status_subsystem_ready__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, f32 *, 0x20) = query_extended_state__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    TObjPlayer__sub_8011E484(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011F578
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8011F5E0 { char pad[0x18]; };
struct VObj_8011F5E0 : Base_8011F5E0 {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)VV(62)VV(63)VV(64)
#undef VV
    virtual void v67(f32);
};

extern "C" {

void apply_scale_if_active__10TObjPlayerFPvf(void *arg0, f32 farg0);
void update_active_game_effect__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8011E484(void *);
M2C_UNK TObjPlayer__sub_8011E4D8(void *);
s32 is_active_in_game__10TObjPlayerFPv();

struct Base_8011F578 { char pad[0x18]; };
struct VObj_8011F578 : Base_8011F578 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(f32);
};

void apply_scale_if_active__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    void *temp_r3;

    if (is_active_in_game__10TObjPlayerFPv() != 0) {
        TObjPlayer__sub_8011E4D8(arg0);
        temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
        ((VObj_8011F578 *)temp_r3)->m65(farg0);
        TObjPlayer__sub_8011E484(arg0);
    }
}

extern f32 lbl_805DAC9C;

void update_active_game_effect__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    if (is_active_in_game__10TObjPlayerFPv() != 0) {
        TObjPlayer__sub_8011E4D8(arg0);
        temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
        ((VObj_8011F5E0 *)temp_r3)->v67(lbl_805DAC9C);
        TObjPlayer__sub_8011E484(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011F6C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_active_in_game__10TObjPlayerFPv(void *arg0);
s8 TObjPlayer__sub_80102C30();

u8 is_active_in_game__10TObjPlayerFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (TObjPlayer__sub_80102C30() == 2)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011FBCC
#include "types.h"

extern "C" {

void draw_status_icons__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2);
int draw_status_icon__10TObjPlayerFPvi(void*, void*);
int TObjPlayer__sub_80120908(void*);
int TObjPlayer__sub_80120BBC(void*, void*);

void draw_status_icons__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2) { TObjPlayer__sub_80120908(p); draw_status_icon__10TObjPlayerFPvi(p, a1); TObjPlayer__sub_80120BBC(p, (void*)35); draw_status_icon__10TObjPlayerFPvi(p, a2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012012C
#include "types.h"

extern "C" {

int TObjPlayer__sub_8012012C(void* p);
int set_status_flags__10TObjPlayerFPvUi(void*, int);

int TObjPlayer__sub_8012012C(void* p) { return set_status_flags__10TObjPlayerFPvUi(p, 4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80120500
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_entries__10TObjPlayerFPv(void *arg0);
void *TObjPlayer__sub_80015DC4(s32, s32);
M2C_UNK set_model_param__10TObjPlayerFPvs(s32, M2C_UNK);
M2C_UNK set_model_id__10TObjPlayerFPvs(s32, M2C_UNK);

void reset_entries__10TObjPlayerFPv(void *arg0) {
    s32 var_r30;
    void *temp_r3;

    set_model_id__10TObjPlayerFPvs(M2C_FIELD(arg0, s32 *, 0xF0), 0);
    set_model_param__10TObjPlayerFPvs(M2C_FIELD(arg0, s32 *, 0xF0), 0);
    var_r30 = 0;
    do {
        temp_r3 = TObjPlayer__sub_80015DC4(M2C_FIELD(arg0, s32 *, 0xF0), var_r30);
        M2C_FIELD(temp_r3, s8 *, 0) = 0;
        var_r30 += 1;
        M2C_FIELD(temp_r3, s8 *, 1) = 0;
    } while (var_r30 != 3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801207E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct { f32 sp8; f32 spC; f32 sp10; } FloatTriplet;

s32 draw_icon__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
void draw_status_icon__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 TCameraCtrl__sub_80069258();
M2C_UNK TCameraCtrl__sub_803D976C(M2C_UNK, s32);
s32 TObjPlayer__sub_80121160(void *, s32);
M2C_UNK TObjPlayer__sub_803D9884(f32 *, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803D9324(M2C_UNK, s32);

extern const f32 lbl_805DAC98;

struct VObj_104_801207e8 { char pad[0x18]; virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(s32); };

s32 draw_icon__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    FloatTriplet floats;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
    if (temp_r3 == NULL) {
        return 0;
    }
    if (arg1 == -1) {
        ((VObj_104_801207e8 *)temp_r3)->m63(0x30);
    } else if (arg1 == -2) {
        ((VObj_104_801207e8 *)temp_r3)->m63(0x23);
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U) {
        floats.sp10 = lbl_805DAC98;
        floats.spC = lbl_805DAC98;
        floats.sp8 = lbl_805DAC98;
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9324(0, TObjPlayer__sub_80121160(M2C_FIELD(arg0, void **, 0xF0), arg1));
        TCameraCtrl__sub_803D976C(0, TCameraCtrl__sub_80069258());
        TObjPlayer__sub_803D9884(&floats.sp8, arg2);
        TObjPlayer__sub_803D9B78();
    } else {
        ((VObj_104_801207e8 *)temp_r3)->m63(0x30);
    }
    return 1;
}

void draw_status_icon__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    draw_icon__10TObjPlayerFPvii((void *)(arg0), (s32)(M2C_FIELD(arg0, s16 *, 0x1CE)), (s32)(arg1));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80120FC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80120FC4(s32 arg0);
s32 TObjPlayer__sub_80120D50(s32, s32, s32);
s32 alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);

extern s32 tl_05;

s32 TObjPlayer__sub_80120FC4(s32 arg0) {
    s32 temp_r0;

    temp_r0 = alloc_from_obj_heap__10TObjPlayerFPv(0x1F8);
    if (temp_r0 != 0) {
        temp_r0 = TObjPlayer__sub_80120D50(temp_r0, tl_05, arg0);
    }
    return temp_r0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80121010(s32 arg0);

s32 (*TLobby__sub_80104438())(s32);

s32 TObjPlayer__sub_80121010(s32 arg0) {
    if (arg0 != 0) {
        s32 (*fp)(s32) = TLobby__sub_80104438();
        return fp(arg0);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012105C
#include "types.h"

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TObjPlayer__sub_80121064(void* p);
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v);
void clear_equip_flags__10TObjPlayerFPvUi(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
void set_model_param__10TObjPlayerFPvs(void* p, s16 v);
void set_model_id__10TObjPlayerFPvs(void* p, s16 v);
int is_status_subsystem_ready__10TObjPlayerFPv(void* p);
void* get_extended_state__10TObjPlayerFPv(void* p);
int query_extended_state__10TObjPlayerFPv(void* p);
void set_action_type__10TObjPlayerFPvs(void* p, s16 v);
void* get_state_ptr__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80121180(void*);
int TObjPlayer__sub_801D2F4C(void*);

void TObjPlayer__sub_8012105C(void) {  }
void TObjPlayer__sub_80121060(void) {  }
u8 TObjPlayer__sub_80121064(void* p) { return *(u8*)((char*)p + 0x1d3); }
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x1b8) |= v; }
void clear_equip_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x1b8) &= ~v; }
void set_flag_8__10TObjPlayerFPv(void* p) { set_status_flags__10TObjPlayerFPvUi(p, 8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801210C0
#include "types.h"

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TObjPlayer__sub_80121064(void* p);
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v);
void clear_equip_flags__10TObjPlayerFPvUi(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
void set_model_param__10TObjPlayerFPvs(void* p, s16 v);
void set_model_id__10TObjPlayerFPvs(void* p, s16 v);
int is_status_subsystem_ready__10TObjPlayerFPv(void* p);
void* get_extended_state__10TObjPlayerFPv(void* p);
int query_extended_state__10TObjPlayerFPv(void* p);
void set_action_type__10TObjPlayerFPvs(void* p, s16 v);
void* get_state_ptr__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80121180(void*);
int TObjPlayer__sub_801D2F4C(void*);

void set_model_param__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x118) = v; }
void set_model_id__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x116) = v; }
int is_status_subsystem_ready__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801D2F4C((char*)p + 0x7cc); }
void* get_extended_state__10TObjPlayerFPv(void* p) { return get_state_ptr__10TObjPlayerFPv((char*)p + 0x7cc); }
int query_extended_state__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80121180((char*)p + 0x7cc); }
void test_flag30_bit0x100000__10TObjPlayerFPv(void* p) { obj_testFlags30(p, (void*)1048576); }
void* TObjPlayer__sub_80121160(void* a0, int a1) {  return (char*)(*(int*)((char*)a0 + 0xdb4)) + a1 * 48; }
void set_action_type__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121178
#include "types.h"

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TObjPlayer__sub_80121064(void* p);
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v);
void clear_equip_flags__10TObjPlayerFPvUi(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
void set_model_param__10TObjPlayerFPvs(void* p, s16 v);
void set_model_id__10TObjPlayerFPvs(void* p, s16 v);
int is_status_subsystem_ready__10TObjPlayerFPv(void* p);
void* get_extended_state__10TObjPlayerFPv(void* p);
int query_extended_state__10TObjPlayerFPv(void* p);
void set_action_type__10TObjPlayerFPvs(void* p, s16 v);
void* get_state_ptr__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80121180(void*);
int TObjPlayer__sub_801D2F4C(void*);

void* get_state_ptr__10TObjPlayerFPv(void* p) { return (char*)p + 0x30; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801211F0
#include "types.h"

extern "C" {

void TObjPlayer__sub_801211F0(void);
int get_player_list__10TObjPlayerFv(void);
void TObjPlayer__sub_80121208(void* p, s32 v);
void TObjPlayer__sub_80121210(void);

    extern int lbl_805D53E8;
void TObjPlayer__sub_801211F0(void) {
    int temp_r3 = lbl_805D53E8;
    lbl_805D53E8 = temp_r3 + 1;
}

    extern int lbl_805D53E8;
int get_player_list__10TObjPlayerFv(void) {  return lbl_805D53E8; }

void TObjPlayer__sub_80121208(void* p, s32 v) { *(s32*)((char*)p + 0xe0) = v; }

    extern int lbl_805D53E8;
void TObjPlayer__sub_80121210(void) { lbl_805D53E8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012121C
#include "types.h"

extern "C" {

int is_flag_b0_4__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80121228(void* p, u32 v);
s16 TObjPlayer__sub_80121238(void* p);
u16 get_uid__10TObjPlayerFPv(void* p);

int is_flag_b0_4__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0xb0) & 0x4; }
void TObjPlayer__sub_80121228(void* p, u32 v) { *(u32*)((char*)p + 0x28) |= v; }
s16 TObjPlayer__sub_80121238(void* p) { return *(s16*)((char*)p + 0x2); }
u16 get_uid__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801212D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A07C0[];
extern M2C_UNK TObjPlayer__sub_80109440[];

void *init_vtable__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A07C0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = TObjPlayer__sub_80109440;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121370
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_effect_icon__10TObjPlayerFi(s32 arg0);
void init_pro_armor__10TObjPlayerFPv(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
M2C_UNK init_item_timer_event__10TObjPlayerFPv(s32, u32, s32, M2C_UNK);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK draw_icon__10TObjPlayerFPvii(s32, M2C_UNK, M2C_UNK *);
s32 alloc__13TItemProArmorFi(M2C_UNK);

void draw_effect_icon__10TObjPlayerFi(s32 arg0) {
    M2C_UNK sp8;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        draw_icon__10TObjPlayerFPvii(arg0, 2, &sp8);
        TObjEneDellBiter__sub_80087350(&sp8, 0x1BE);
    }
}

void init_pro_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            init_item_timer_event__10TObjPlayerFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121478
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_804A08B8__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A08B8[];

void *init_vtable_804A08B8__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A08B8;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801215D4
#include "types.h"

extern "C" {

void* init_substate__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char TObjPlayer__sub_8012175C[];
    extern unsigned char lbl_804A09B0[];
    extern const float lbl_805DACB8;
void* init_substate__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A09B0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)TObjPlayer__sub_8012175C; *(float*)((char*)a0 + 0x1e4) = lbl_805DACB8; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121688
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_effect_model__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_80121708(void *arg0);
void *init_item_shoot_model__10TObjPlayerFPv(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
s32 is_owner_alive__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(u32);
M2C_UNK TObjPlayer__sub_803D99F8(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);

void draw_effect_model__10TObjPlayerFPv(u8 *arg0) {
    if ((is_owner_alive__10TObjPlayerFPv() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
        TObjPlayer__sub_803D9B2C();
        begin_effect_render__13TParticleCtrlFv();
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, u32 *, 0x5C));
        TOHangerMachine01__sub_803D9C00(arg0 + 0x1C);
        TObjPlayer__sub_803D99F8(arg0 + 0x28, 1);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, u32 *, 0x58));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

void TObjPlayer__sub_80121708(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 0x3333);
}

extern M2C_UNK lbl_804A0AA8[];

void *init_item_shoot_model__10TObjPlayerFPv(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0AA8;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801217CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_game_effect_mode__10TObjPlayerFi(s32 arg0);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8011EDFC(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(s32);

extern f32 lbl_805DACC0;

void update_game_effect_mode__10TObjPlayerFi(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        TObjPlayer__sub_8011EDFC(arg0, 0, 1, lbl_805DACC0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121878
#include "types.h"

extern "C" {

void* init_state_34__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char TObjPlayer__sub_8012175C[];
    extern unsigned char lbl_804A0AC4[];
    extern const float lbl_805DACC4;
void* init_state_34__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A0AC4; set_status_flags__10TObjPlayerFPvUi(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)TObjPlayer__sub_8012175C; *(float*)((char*)a0 + 0x1e4) = lbl_805DACC4; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012192C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_8012192C(void *arg0, s16 arg1);
void cast_foie_effect__10TObjPlayerFPv(void *arg0);
void release_container_if_active__10TObjPlayerFPv(void* p);
void update_freeze_state__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80121ACC(void *arg0);
s32 rand__11TOBoss4RockFv();
int TObjContainerIdo__sub_803D96A8(void*, void*);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8011E618(void *);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
int get_player_list__10TObjPlayerFv(void*);
s32 get_tp__10TObjPlayerFPv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);
M2C_UNK create__8TTecFoieFPvPvPvPv(void *, M2C_UNK *, s32, s32);

extern M2C_UNK lbl_804A0AA8[];

void *TObjPlayer__sub_8012192C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0AA8;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void cast_foie_effect__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), get_tp__10TObjPlayerFPv(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

void release_container_if_active__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_8043E868;
extern f32 lbl_805DACC8;
extern f32 lbl_805DACCC;

void update_freeze_state__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 3) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) && ((lbl_805DACC8 * (f32) rand__11TOBoss4RockFv()) < lbl_805DACCC)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

void TObjPlayer__sub_80121ACC(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if ((temp_r0 == 1) || (temp_r0 == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121B64
#include "types.h"

extern "C" {

void TObjPlayer__sub_80121B64(void* p);
int TObjPlayer__sub_8011E618(void*);

void TObjPlayer__sub_80121B64(void* p) { TObjPlayer__sub_8011E618(p); TObjPlayer__sub_8011E618(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121BF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *enter_state_804A0BC0__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern M2C_UNK lbl_804A0BC0[];

void *enter_state_804A0BC0__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0BC0;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    set_effect_state__10TObjPlayerFPvi(arg0, 10);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121CA8
#include "types.h"

extern "C" {

s32 get_tp__10TObjPlayerFPv(void* p);
void set_effect_state__10TObjPlayerFPvi(void* p, s32 v);

s32 get_tp__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x1c0); }
void set_effect_state__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c4) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121D88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_flag8_from_1f8__10TObjPlayerFPv(void *arg0);
u32 fire_shoot_particle__10TObjPlayerFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TItemShootParticle__sub_8011B704(u32, M2C_UNK, M2C_UNK);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(void *, s32, s32, f32);
u32 TObjPlayer__sub_8011BA54();
M2C_UNK set_parent__7TObjectFP7TObject(u32, u32);

void update_flag8_from_1f8__10TObjPlayerFPv(void *arg0) {
    s32 *temp_r3;
    s32 temp_r4_2;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r4 != NULL) {
        temp_r3 = M2C_FIELD(temp_r4, s32 **, 0x2C);
        temp_r4_2 = *temp_r3;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 1) {
            if (temp_r4_2 & 8) {
                *temp_r3 = temp_r4_2 & 0xFFFFFFF7;
            }
        } else if (!(temp_r4_2 & 8)) {
            *temp_r3 = temp_r4_2 | 8;
        }
    }
}

u32 fire_shoot_particle__10TObjPlayerFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 temp_r3;
    u32 temp_r31;
    u32 temp_r30;
    void *temp_r5;

    temp_r31 = TObjPlayer__sub_8011BA54();
    temp_r30 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
    if ((temp_r31 != 0U) && (temp_r30 != 0U)) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x188);
        if (temp_r5 != NULL) {
            temp_r3 = M2C_FIELD(temp_r5, s32 *, 0);
            if ((u32) (temp_r3 & 7) == 7) {
                M2C_FIELD(temp_r5, s32 *, 0) = (s32) (temp_r3 & 0xFFFFFFFD);
                M2C_FIELD(temp_r5, s32 *, 0x14) = -0x4000;
                M2C_FIELD(temp_r5, s32 *, 0x1C) = 0x8000;
            }
        }
        TItemShootParticle__sub_8011B704(temp_r30, 0xDD, 0);
        set_parent__7TObjectFP7TObject(temp_r30, temp_r31);
    }
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80121F58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_state_vt0cb8__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A0CB8[];
extern const f32 lbl_805DACD4;

void *init_state_vt0cb8__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0CB8;
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DACD4;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122014
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80122014(void *arg0);
void notify_tentacle_if_mode1__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80122064(void* a0);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer__sub_80122014(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    }
}

void notify_tentacle_if_mode1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

    extern const float lbl_805DACD8;
void TObjPlayer__sub_80122064(void* a0) { *(float*)((char*)a0 + 0x1fc) = lbl_805DACD8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801220FC
#include "types.h"

extern "C" {

void* init_state_vector__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804A0DB0[];
    extern const float lbl_805DACDC;
void* init_state_vector__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A0DB0; *(float*)((char*)a0 + 0x200) = lbl_805DACDC; *(float*)((char*)a0 + 0x1fc) = lbl_805DACDC; *(float*)((char*)a0 + 0x1f8) = lbl_805DACDC; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012227C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dual_slots__10TObjPlayerFPv(u8 *arg0);
M2C_UNK draw_status_icon__10TObjPlayerFPvi(void *, void *);
M2C_UNK TObjPlayer__sub_80120908();
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);

void update_dual_slots__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    TObjPlayer__sub_80120908();
    draw_status_icon__10TObjPlayerFPvi(arg0, arg0 + 0x1F8);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x180);
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    draw_status_icon__10TObjPlayerFPvi(arg0, arg0 + 0x204);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122334
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_state_515__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A0EA8[];
extern M2C_UNK TObjPlayer__sub_80109440[];

void *init_state_515__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0EA8;
    set_status_flags__10TObjPlayerFPvUi(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = TObjPlayer__sub_80109440;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122444
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_shield_effect__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_8012248C(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern f32 lbl_805DACE4;
extern f32 lbl_805DACE8;

void update_shield_effect__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DACE4, lbl_805DACE8);
    }
}

extern f32 lbl_805DACE0;
extern f32 lbl_805DACEC;

void TObjPlayer__sub_8012248C(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DACEC, lbl_805DACE0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801225F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_atp__10TObjPlayerFPvs(void* p, s16 v);
void cast_tech_gibarta__10TObjPlayerFPv(void *arg0);
void notify_container_if_mode1__10TObjPlayerFPv(void* p);
void update_state_1fc__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80122748(void *arg0);
s32 rand__11TOBoss4RockFv();
int TObjContainerIdo__sub_803D96A8(void*, void*);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8011E618(void *);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
int get_player_list__10TObjPlayerFv(void*);
s32 get_tp__10TObjPlayerFPv(void *);
M2C_UNK create_ex__11TTecGiBartaFPvPvPvPv(void *, M2C_UNK *, s32, s32);

void set_atp__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x1cc) = v; }
void cast_tech_gibarta__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create_ex__11TTecGiBartaFPvPvPvPv(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), get_tp__10TObjPlayerFPv(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}
void notify_container_if_mode1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_8043E870;
extern f32 lbl_805DACF0;
extern f32 lbl_805DACF4;

void update_state_1fc__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 3) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) && ((lbl_805DACF0 * (f32) rand__11TOBoss4RockFv()) < lbl_805DACF4)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

void TObjPlayer__sub_80122748(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if ((temp_r0 == 1) || (temp_r0 == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801227E0
#include "types.h"

extern "C" {

void update_twice__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8011E618(void*);

void update_twice__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8011E618(p); TObjPlayer__sub_8011E618(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012286C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_substate_a__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern M2C_UNK lbl_804A1098[];

void *init_substate_a__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1098;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    set_effect_state__10TObjPlayerFPvi(arg0, 10);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122924
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_icon_selected__10TObjPlayerFi(M2C_UNK arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
M2C_UNK draw_icon__10TObjPlayerFPvii(M2C_UNK, M2C_UNK, M2C_UNK *);

void draw_icon_selected__10TObjPlayerFi(M2C_UNK arg0) {
    M2C_UNK sp8[6];

    draw_icon__10TObjPlayerFPvii(arg0, 1, sp8);
    TObjEneDellBiter__sub_80087350(sp8, 0xC1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801229B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destruct_and_set_vtable__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A1190[];

void *destruct_and_set_vtable__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1190;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122A44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80122A44(s32 arg0);
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, s32, M2C_UNK);
s32 TObjPlayer__sub_8011F63C();

extern s32 tl_05;

void TObjPlayer__sub_80122A44(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122AE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_804a1288__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A1288[];

void *init_vtable_804a1288__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1288;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122B74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cast_foie__10TObjPlayerFPv(void *arg0);
void *TObjPlayer__sub_80122BE4(void *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK create__8TTecFoieFPvPvPvPv(void *, M2C_UNK *, s32, M2C_UNK);

void cast_foie__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    draw_icon__10TObjPlayerFPvii(arg0, 2, &sp8);
    TObjEneDellBiter__sub_80087350(&sp8, 0x1BF);
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
        create__8TTecFoieFPvPvPvPv(temp_r3, &sp8, M2C_FIELD(temp_r3, s32 *, 0x60), 3);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

extern M2C_UNK lbl_804A1380[];

void *TObjPlayer__sub_80122BE4(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1380;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122CDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_cane__10TObjPlayerFi(s32 arg0);
void *set_vtable_804A1478__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8011F63C(s32);
void TObjPlayer__sub_80120D50(void *);

extern s32 tl_05;

void spawn_cane__10TObjPlayerFi(s32 arg0) {
    if ((get_slot_count__14TItemProShieldFPv() < 4U) && (TObjPlayer__sub_8011F63C(arg0) == 0)) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 1, 2);
    }
}

extern M2C_UNK lbl_804A1478[];

void *set_vtable_804A1478__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1478;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122E24
#include "types.h"

extern "C" {

void update_effect_if_state1__10TObjPlayerFPv(void* p);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);

void update_effect_if_state1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122E9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_field200_max__10TObjPlayerFPv(void *arg0);

extern const f32 lbl_805DACFC;
extern const f32 lbl_805DAD00;

void approach_field200_max__10TObjPlayerFPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x200);
    if (temp_f2 < lbl_805DAD00) {
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) (temp_f2 + lbl_805DACFC);
        if (lbl_805DAD00 < M2C_FIELD(arg0, f32 *, 0x200)) {
            M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DAD00;
        }
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x200);
        M2C_FIELD(arg0, f32 *, 0x1FC) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x1F8) = temp_f0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80122F94
#include "types.h"

extern "C" {

void* enter_state_513__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char lbl_804A1570[];
    extern const float lbl_805DAD04;
void* enter_state_513__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A1570; set_status_flags__10TObjPlayerFPvUi(a0, (void*)513); *(float*)((char*)a0 + 0x200) = lbl_805DAD04; *(float*)((char*)a0 + 0x1fc) = lbl_805DAD04; *(float*)((char*)a0 + 0x1f8) = lbl_805DAD04; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80123044
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_from_owner__10TObjPlayerFPv(void *arg0);
void *init_bringer_effect__10TObjPlayerFPv(void *arg0);
M2C_UNK submit_computer_command__10TObjPlayerFPv(s32, s16, M2C_UNK, M2C_UNK);
void TObjPlayer__sub_80120D50(void *);

void update_from_owner__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFPv(M2C_FIELD(temp_r3, s32 *, 0x2C), M2C_FIELD(arg0, s16 *, 0x1F8), 0, 1);
    }
}

extern M2C_UNK lbl_804A1668[];
extern M2C_UNK create__15TItemEffBringerFUiiif[];

void *init_bringer_effect__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1668;
    M2C_FIELD(arg0, u16 *, 0x1F8) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create__15TItemEffBringerFUiiif;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801231DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_801231DC(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A1760[];

void *TObjPlayer__sub_801231DC(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1760;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1536);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801232C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_linked_object__10TObjPlayerFPv(void *arg0);
void *set_state_35__10TObjPlayerFPv(void *arg0);
M2C_UNK submit_computer_command__10TObjPlayerFPv(s32, s16, M2C_UNK, M2C_UNK);
void TObjPlayer__sub_80120D50(void *);

void update_linked_object__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFPv(M2C_FIELD(temp_r3, s32 *, 0x2C), M2C_FIELD(arg0, s16 *, 0x1F8), 0, 0);
    }
}

extern M2C_UNK lbl_804A1858[];

void *set_state_35__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1858;
    M2C_FIELD(arg0, u16 *, 0x1F8) = 35;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801233F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_cane_effect_active__10TObjPlayerFi(s32 arg0);
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, s32, M2C_UNK);
s32 TObjPlayer__sub_8011F63C();

extern s32 tl_05;

void spawn_cane_effect_active__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80123490
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *set_vtable__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A1950[];

void *set_vtable__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1950;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80123524
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Sp8Type_80123524 { s32 a; s32 b; s32 c; s32 d; };

extern "C" {

void draw_mag__10TObjPlayerFPv(void *arg0);
void try_spawn_cane_effect__10TObjPlayerFi(s32 arg0);
void update_pulse__10TObjPlayerFPv(void *arg0);
s32 get_flag_40__8TItemMagFPv();
M2C_UNK TOHangerMachine01__sub_803D9C00(Sp8Type_80123524 *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, s32, M2C_UNK);
s32 TObjPlayer__sub_8011F63C();
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, Sp8Type_80123524 *, s32);
M2C_UNK TObjPlayer__sub_80120BBC(void *, M2C_UNK, void *);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv(s32);
M2C_UNK TObjPlayer__sub_80364028();
M2C_UNK TObjPlayer__sub_8036414C();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 some_id_805c6f74;

void draw_mag__10TObjPlayerFPv(void *arg0) {
    Sp8Type_80123524 sp8;
    s32 temp_r3;
    s32 temp_r6;
    void *temp_r5;
    void *temp_r31;
    void *temp_r30;
    void *temp_r29;

    if (((void *) M2C_FIELD(arg0, void **, 0xF4) != NULL) && (get_flag_40__8TItemMagFPv() == 0)) {
        temp_r5 = M2C_FIELD(arg0, void **, 0xF4);
        temp_r31 = M2C_FIELD(temp_r5, void **, 0x2C);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 8);
        temp_r30 = M2C_FIELD(temp_r31, void **, 0x2C);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) | 8);
        temp_r29 = M2C_FIELD(temp_r30, void **, 0x30);
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) | 8);
        TObjPlayer__sub_80120BBC(arg0, 0x30, temp_r5);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFF7);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) & 0xFFFFFFF7);
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) & 0xFFFFFFF7);
        TObjPlayer__sub_80364198();
        some_id_805c6f74 &= 0xFFFFFFEF;
        get_mag_scale__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_80364028();
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 1);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) & 0xFFFFFFFD);
        M2C_FIELD(temp_r30, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0x1F8));
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) & 0xFFFFFFFD);
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x1F8);
        M2C_FIELD(temp_r29, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r29, s32 *, 0x18) - temp_r6);
        if (draw_icon__10TObjPlayerFPvii(arg0, 1, &sp8, temp_r6) != 0) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(&sp8);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), s32 *, 0x60));
            TObjBoss2Tunnel__sub_803DB470(temp_r31);
            TObjPlayer__sub_803D9B78();
        }
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFFE);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) | 2);
        M2C_FIELD(temp_r30, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x18) - M2C_FIELD(arg0, s32 *, 0x1F8));
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) | 2);
        temp_r3 = M2C_FIELD(temp_r29, s32 *, 0x18);
        M2C_FIELD(temp_r29, s32 *, 0x18) = (s32) (temp_r3 + M2C_FIELD(arg0, s32 *, 0x1F8));
        warn_if_gauge_low__10TObjPlayerFv(temp_r3);
        TObjPlayer__sub_8036414C();
    }
}

extern s32 tl_05;

void try_spawn_cane_effect__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
}

void update_pulse__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) >= 0x1555) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = 0x1555;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) - 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = 0x1555;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801237B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_state_1__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A1A48[];

void *init_state_1__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1A48;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80123864
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_with_temp_level__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80120908();
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);

void run_with_temp_level__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    TObjPlayer__sub_80120908();
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801239A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_801239A8(void* p);
void *set_vtable_mode1__10TObjPlayerFPv(void *arg0);
int TObjPlayer__sub_8011E87C(void*, void*);
int TObjPlayer__sub_80120BBC(void*, void*);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void TObjPlayer__sub_801239A8(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); }

extern M2C_UNK lbl_804A1C38[];

void *set_vtable_mode1__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1C38;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80123B18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_field200_cap__10TObjPlayerFPv(void *arg0);
void update_1f8_if_ready__10TObjPlayerFPv(void* p);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);

extern const f32 lbl_805DAD14;
extern const f32 lbl_805DAD18;

void approach_field200_cap__10TObjPlayerFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x200);
    if (temp_f2 < lbl_805DAD18) {
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) (temp_f2 + lbl_805DAD14);
        if (lbl_805DAD18 < M2C_FIELD(arg0, f32 *, 0x200)) {
            M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DAD18;
        }
    }
}

void update_1f8_if_ready__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80123BDC
#include "types.h"

extern "C" {

void* init_state__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_801210B0(void*, void*, void*, void*);

    extern unsigned char lbl_804A1D30[];
    extern const float lbl_805DAD18;
void* init_state__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A1D30; TObjPlayer__sub_801210B0(a0, (void*)0, (void*)3, (void*)2); TObjPlayer__sub_801210B0(a0, (void*)1, (void*)4, (void*)5); *(float*)((char*)a0 + 0x200) = lbl_805DAD18; *(float*)((char*)a0 + 0x1fc) = lbl_805DAD18; *(float*)((char*)a0 + 0x1f8) = lbl_805DAD18; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80123F70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80123F70(void* p);
void TObjPlayer__sub_80123F7C(void* p);
void refresh_inventory_slot__10TObjPlayerFPv(void *arg0);
s32 submit_computer_command__10TObjPlayerFPv(s32, s32, s32, s32);
s32 TObjPlayer__sub_8010069C();

void TObjPlayer__sub_80123F70(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
void TObjPlayer__sub_80123F7C(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
void refresh_inventory_slot__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    TObjPlayer__sub_8010069C();
    temp_r3 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFPv(M2C_FIELD(temp_r3, s32 *, 0x2C), 2, 0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012402C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_804A1F20__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A1F20[];

void *init_vtable_804A1F20__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1F20;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801240C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_item_camera_target__10TObjPlayerFPv(void *arg0);
void *TObjPlayer__sub_8012417C(void *arg0, s16 arg1);
s32 get_flag_40__8TItemMagFPv(s32);
s32 TLobby__sub_80101AB0(s32);
u32 get_item_ctrl__10TObjPlayerFv();
s8 TObjPlayer__sub_80102C30();
s32 draw_icon__10TObjPlayerFPvii(s32, s32, M2C_UNK *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK copy_position__15TEffStarLight2DFPv(u32, M2C_UNK *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK queue_target_destruction__10TObjCameraFPv(u32);

void update_item_camera_target__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != get_item_ctrl__10TObjPlayerFv()) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        temp_r3 = TLobby__sub_80101AB0(M2C_FIELD(arg0, s32 *, 0x1C));
        if ((temp_r3 != 0) && (TObjPlayer__sub_80102C30() == 2) && (draw_icon__10TObjPlayerFPvii(temp_r3, M2C_FIELD(arg0, s32 *, 0x20), &sp8) != 0)) {
            if (get_flag_40__8TItemMagFPv(temp_r3) == 0) {
                copy_position__15TEffStarLight2DFPv(M2C_FIELD(arg0, u32 *, 0x24), &sp8);
                return;
            }
            queue_target_destruction__10TObjCameraFPv(M2C_FIELD(arg0, u32 *, 0x24));
            return;
        }
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK lbl_804A2018[];

void *TObjPlayer__sub_8012417C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2018;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012429C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_icon__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void cast_megid__10TObjPlayerFPv(void *arg0);
void update_blink__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_800196EC();
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8011E618(void *);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
s32 get_tp__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801241D4(void *, s32, s32, s32);
s32 TObjPlayer__sub_802034B0();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create_ex__9TTecMegidFiiii(void *, M2C_UNK *, s32, s32);

void create_icon__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    if (arg0 != 0) {
        temp_r3 = (void *)__nw__7TObjectFUl(0x2C);
        if (temp_r3 != (void *)0U) {
            TObjPlayer__sub_801241D4(temp_r3, arg0, arg1, arg2);
        }
    }
}

void cast_megid__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 5, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create_ex__9TTecMegidFiiii(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), get_tp__10TObjPlayerFPv(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

extern s32 tl_05;

void update_blink__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 1) {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xAAA);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) >= 0x2000) {
            M2C_FIELD(arg0, s32 *, 0x200) = 0x2000;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) - 0xAAA);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) <= -0x2000) {
            M2C_FIELD(arg0, s32 *, 0x200) = -0x2000;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
        }
    }
    temp_r3 = TObjPlayer__sub_800196EC();
    if (((s32) M2C_FIELD(arg0, s32 *, 0x204) != temp_r3) && ((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U)) {
        M2C_FIELD(arg0, s32 *, 0x204) = temp_r3;
        if (TObjPlayer__sub_802034B0() != 0) {
            create_icon__10TObjPlayerFiii((s32)(tl_05), (s32)(get_field_d8__10TObjPlayerFPv(arg0)), (s32)(5));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801244C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_held_item__10TObjPlayerFPv(void *arg0);
void init_armor__10TObjPlayerFPv(void *arg0);
s32 get_flag_40__8TItemMagFPv();
s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8011E618(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
M2C_UNK TObjPlayer__sub_80120BBC(void *, M2C_UNK, void *);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv(s32);
M2C_UNK TObjPlayer__sub_80364028();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK init_vtable__13TItemProArmorFPv(s32, u32, s32, M2C_UNK);

extern s32 some_id_805c6f74;

void draw_held_item__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;
    void *temp_r31;
    void *temp_r5;

    if (((void *) M2C_FIELD(arg0, void **, 0xF4) != NULL) && (get_flag_40__8TItemMagFPv() == 0)) {
        temp_r5 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF4), void **, 0x2C), void **, 0x30);
        temp_r31 = M2C_FIELD(temp_r5, void **, 0x30);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 0x18);
        TObjPlayer__sub_80120BBC(arg0, 0x30, temp_r5);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFE7);
        if (draw_icon__10TObjPlayerFPvii(arg0, 5, &sp8) != 0) {
            TObjPlayer__sub_803D9B2C();
            TObjPlayer__sub_80364198();
            some_id_805c6f74 &= 0xFFFFFFEF;
            get_mag_scale__10TObjPlayerFPv(arg0);
            TObjPlayer__sub_80364028();
            TOHangerMachine01__sub_803D9C00(&sp8);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), s32 *, 0x60));
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 0x11);
            TObjBoss2Tunnel__sub_803DB470(temp_r31);
            begin_effect_render__13TParticleCtrlFv();
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(temp_r31, void **, 0x2C));
            end_effect_render__13TParticleCtrlFv();
            temp_r3 = M2C_FIELD(temp_r31, s32 *, 0);
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (temp_r3 & ~0x11);
            warn_if_gauge_low__10TObjPlayerFv(temp_r3);
            TObjPlayer__sub_803D9B78();
            TObjPlayer__sub_803D9B78();
        }
    }
}

void init_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x204) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            init_vtable__13TItemProArmorFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
    TObjPlayer__sub_8011E618(arg0);
    TObjPlayer__sub_8011E618(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80124694
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_80124694(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern M2C_UNK lbl_804A204C[];

void *TObjPlayer__sub_80124694(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A204C;
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    set_effect_state__10TObjPlayerFPvi(arg0, 12);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x200) = 0;
    M2C_FIELD(arg0, u32 *, 0x204) = -1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801249C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_photon_chair_state__10TObjPlayerFPv(void *arg0);
void update_breath_pulse__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
s32 get_player_list__10TObjPlayerFv();

void update_photon_chair_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    if ((temp_r3 > 0) && (temp_r3 < 4)) {
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x200));
        return;
    }
    if (temp_r3 == 4) {
        if (M2C_FIELD(arg0, u32 *, 0x188) != 0U) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 1) {
                TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, u32 *, 0x188));
            }
        }
    }
}

void update_breath_pulse__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    void *temp_r4;
    void *temp_r4_2;

    M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1FC) + 0x1999);
    temp_r4 = M2C_FIELD(arg0, void **, 0x188);
    if (temp_r4 != NULL) {
        temp_r4_2 = M2C_FIELD(temp_r4, void **, 0x2C);
        M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) & 0xFFFFFFFD);
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1FC);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x204);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xE38);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x200) = 0;
            M2C_FIELD(arg0, s32 *, 0x204) = 0;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) - 0xE38);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) <= -0x31C7) {
            M2C_FIELD(arg0, s32 *, 0x200) = -0x31C7;
            M2C_FIELD(arg0, s32 *, 0x204) = 3;
            return;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x204) = 1;
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80124B44
#include "types.h"

extern "C" {

void* enter_state_34__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char spawn_shoot_particle_entity__10TObjPlayerFiiif[];
    extern unsigned char lbl_804A2164[];
    extern const float lbl_805DAD30;
void* enter_state_34__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2164; *(int*)((char*)a0 + 0x1f0) = (int)spawn_shoot_particle_entity__10TObjPlayerFiiif; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD30; set_status_flags__10TObjPlayerFPvUi(a0, (void*)34); *(int*)((char*)a0 + 0x1f8) = 1; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x200) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80124C0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt_item_shoot_model__10TObjPlayerFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);

extern M2C_UNK lbl_804A2148[];

void *dt_item_shoot_model__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2148;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80124C64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80124C64(void *arg0);
s32 get_anim_state__10TObjPlayerFPv(void* p);

void TObjPlayer__sub_80124C64(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80124C88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80124C64(void *arg0);
s32 get_anim_state__10TObjPlayerFPv(void* p);

s32 get_anim_state__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x18); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80124FBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_tech_effect__10TObjPlayerFPv(void *arg0);
void play_side_step_particle__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80125090(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_8011E2FC(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80124C90(void *);
s16 get_tech_level__10TObjPlayerFPv(s32);

extern f32 lbl_805DAD3C;

void update_tech_effect__10TObjPlayerFPv(void *arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (get_tech_level__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 0) {
            TObjPlayer__sub_8011E2FC(arg0, lbl_805DAD3C);
            TObjPlayer__sub_80124C90(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

void play_side_step_particle__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 4:
        play_particle_effect_once__10TObjPlayerFv();
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    }
}

void TObjPlayer__sub_80125090(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 0xAAA);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801251AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_tech_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801251B4(void *arg0);
void reset_effect_slots__10TObjPlayerFPv(void* p);
void apply_11e618_twice__10TObjPlayerFPv(void* p);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
int TObjPlayer__sub_8011E618(void*);
int TObjPlayer__sub_8011E87C(void*, void*);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32 *);
int TObjPlayer__sub_80120BBC(void*, void*);
s32 get_tp__10TObjPlayerFPv(void *);
s32 create__8TTecFoieFPvPvPvPv(void *, s32 *, s32, s32);

s16 get_tech_level__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x12); }
void TObjPlayer__sub_801251B4(void *arg0) {
    s32 sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), get_tp__10TObjPlayerFPv(arg0) + 2);
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}
void reset_effect_slots__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); TObjPlayer__sub_8011E87C(p, (void*)2); }
void apply_11e618_twice__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8011E618(p); TObjPlayer__sub_8011E618(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80125318
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_and_configure__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_801210B0(void *, int, int, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern M2C_UNK lbl_804A2358[];

void *init_and_configure__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2358;
    TObjPlayer__sub_801210B0(arg0, 2, 6, 5);
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    set_effect_state__10TObjPlayerFPvi(arg0, 13);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801253D8
#include "types.h"

extern "C" {

void* init_vtable_and_handler__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char spawn_shoot_particle_9f[];
    extern unsigned char lbl_804A2450[];
    extern const float lbl_805DAD48;
void* init_vtable_and_handler__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2450; *(int*)((char*)a0 + 0x1f0) = (int)spawn_shoot_particle_9f; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD48; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801254D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_fade_timer__10TObjPlayerFPv(void *arg0);
s32 has_game_join_id();
M2C_UNK TItemAttackCol__sub_802E4918(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern f32 lbl_805DAD50;

void update_fade_timer__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;

    if (has_game_join_id() != 0) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x40);
        if (temp_f1 < M2C_FIELD(arg0, f32 *, 0xC4)) {
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f1 + lbl_805DAD50);
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xC4);
            if (temp_f1_2 < M2C_FIELD(arg0, f32 *, 0x40)) {
                M2C_FIELD(arg0, f32 *, 0x40) = temp_f1_2;
            }
        } else {
            queue_destruction__7TObjectFv(arg0);
        }
        TItemAttackCol__sub_802E4918(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80125550
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_80125550(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);

extern M2C_UNK lbl_804A2548[];

void *TObjPlayer__sub_80125550(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2548;
        destroy_attack_collision__14TItemAttackColFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801255A8
#include "types.h"

extern "C" {

void* init_vtable_c4__10TObjPlayerFPv(void* a0);
int fn_802E4A4C(void);

    extern unsigned char lbl_804A2548[];
    extern const float lbl_805DAD54;
void* init_vtable_c4__10TObjPlayerFPv(void* a0) { fn_802E4A4C(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2548; *(float*)((char*)a0 + 0xc4) = lbl_805DAD54; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80125780
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_child_transform__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
s32 get_player_list__10TObjPlayerFv();

extern const f32 lbl_805DAD58;
extern const f32 lbl_805DAD5C;

void reset_child_transform__10TObjPlayerFPv(void *arg0) {
    void *temp_r31;
    void *temp_r3;

    if (get_player_list__10TObjPlayerFv() == 1) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x188);
        if ((temp_r3 != NULL) && ((s32) M2C_FIELD(arg0, s32 *, 0x234) == 0)) {
            temp_r31 = M2C_FIELD(temp_r3, void **, 0x2C);
            if (temp_r31 != NULL) {
                M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD58;
                M2C_FIELD(temp_r31, f32 *, 0x24) = (f32) lbl_805DAD58;
                M2C_FIELD(temp_r31, f32 *, 0x28) = (f32) lbl_805DAD58;
                M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFFB);
                TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, void **, 0x188));
                M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 4);
                M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD5C;
                M2C_FIELD(temp_r31, f32 *, 0x24) = (f32) lbl_805DAD5C;
                M2C_FIELD(temp_r31, f32 *, 0x28) = (f32) lbl_805DAD5C;
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80125818
#include "types.h"

extern "C" {

void TObjPlayer__sub_80125818(void* p);
void TObjPlayer__sub_8012583C(void* p);

void TObjPlayer__sub_80125818(void* p) { *(s32*)((char*)p + 0x234) = 60; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012583C
#include "types.h"

extern "C" {

void TObjPlayer__sub_80125818(void* p);
void TObjPlayer__sub_8012583C(void* p);

void TObjPlayer__sub_8012583C(void* p) { *(s32*)((char*)p + 0x234) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012599C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_item_follow_effect__10TObjPlayerFPv(void *arg0);
void *__dt__10TObjPlayerFPvs(void *arg0, s16 arg1);
s32 get_flag_40__8TItemMagFPv(s32);
s32 TLobby__sub_80101AB0(s32);
u32 get_item_ctrl__10TObjPlayerFv();
s8 TObjPlayer__sub_80102C30();
s32 draw_icon__10TObjPlayerFPvii(s32, s32, M2C_UNK *);
M2C_UNK clear_active_flag__13TParticleCtrlFPv(u32);
M2C_UNK enable__13TParticleCtrlFPv(u32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(u32, M2C_UNK *);
s32 obj_testFlags30(s32, M2C_UNK);
void queue_destruction__7TObjectFv(void *);

void update_item_follow_effect__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8[5];
    s32 var_r31;
    s32 var_r30;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != get_item_ctrl__10TObjPlayerFv()) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    var_r31 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        var_r30 = TLobby__sub_80101AB0(M2C_FIELD(arg0, s32 *, 0x1C));
        if ((var_r30 != 0) && (TObjPlayer__sub_80102C30() == 2)) {
            var_r31 = 1;
            if (draw_icon__10TObjPlayerFPvii(var_r30, M2C_FIELD(arg0, s32 *, 0x20), sp8) != 0) {
                copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, u32 *, 0x24), sp8);
                if ((get_flag_40__8TItemMagFPv(var_r30) == 0) || (obj_testFlags30(var_r30, 0x08000000) == 0)) {
                    clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x24));
                } else {
                    enable__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x24));
                }
            } else {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x24));
            }
        }
    }
    if (var_r31 == 0) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

extern M2C_UNK lbl_804A2660[];

void *__dt__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2660;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x24))); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80125B80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_effect__10TObjPlayerFiUiii(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
void cast_gifoie__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80125C70(void* p);
void create_pro_armor__10TObjPlayerFPv(void *arg0);
void update_terminal_state__10TObjPlayerFPv(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_mag_active__10TObjPlayerFPv(void *);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
s32 TObjPlayer__sub_8011E618(void *);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32 *);
s32 get_tp__10TObjPlayerFPv(void *);
s16 get_tech_level__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_80125AF8(u32 a0 = 0, s32 a1 = 0, u32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
s32 TObjPlayer__sub_802034B0(s32);
u32 __nw__7TObjectFUl(s32 a0 = 0);
s32 alloc__13TItemProArmorFi(s32);
s32 create__10TTecGiFoieFPvPvPv(s32, s32 *, s32);
s32 ct__13TItemProArmorFPv(s32, u32, s32, s32);

void spawn_effect__10TObjPlayerFiUiii(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && (arg1 != 0U) && ((obj = __nw__7TObjectFUl(0x2C)) != 0U)) {
        TObjPlayer__sub_80125AF8(obj, arg0, arg1, arg2, arg3);
    }
}
void cast_gifoie__10TObjPlayerFPv(void *arg0) {
    s32 sp8;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if ((get_tech_level__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 0) && (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0)) {
            create__10TTecGiFoieFPvPvPv(M2C_FIELD(arg0, s32 *, 0xF0), &sp8, get_tp__10TObjPlayerFPv(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}
void TObjPlayer__sub_80125C70(void* p) { *(s32*)((char*)p + 0x1f8) = -1; }
void create_pro_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x1F8) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            ct__13TItemProArmorFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
    TObjPlayer__sub_8011E618(arg0);
    TObjPlayer__sub_8011E618(arg0);
}

extern s32 tl_05;

void update_terminal_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    if ((temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x1F8)) && (is_mag_active__10TObjPlayerFPv(arg0) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = temp_r3;
        if (TObjPlayer__sub_802034B0(temp_r3) != 0) {
            spawn_effect__10TObjPlayerFiUiii((s32)(tl_05), (u32)(arg0), (s32)(1), (s32)(0x1AE));
            spawn_effect__10TObjPlayerFiUiii((s32)(tl_05), (u32)(arg0), (s32)(2), (s32)(0x1AE));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80125DD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_state_vt2678__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern M2C_UNK lbl_804A2678[];

void *init_state_vt2678__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2678;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    set_effect_state__10TObjPlayerFPvi(arg0, 10);
    M2C_FIELD(arg0, u32 *, 0x1F8) = -1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80125E88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_cane_effect_if_ready__10TObjPlayerFi(s32 arg0);
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, s32, M2C_UNK);
s32 TObjPlayer__sub_8011F63C();

extern s32 tl_05;

void spawn_cane_effect_if_ready__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80125F24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_80125F24(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A2770[];

void *TObjPlayer__sub_80125F24(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2770;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80126278
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_armor_effect__10TObjPlayerFPv(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK TObjPlayer__sub_80126414(s32, u32, s32, M2C_UNK, f32);
s32 alloc__13TItemProArmorFi(M2C_UNK);

extern f32 lbl_805DAD74;

void create_armor_effect__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3 != 0) {
            TObjPlayer__sub_80126414(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0xE10, lbl_805DAD74);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80126460
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 spawn_shoot_effect__10TObjPlayerFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void release_item_if_ready__10TObjPlayerFPv(void* p);
M2C_UNK TItemShootParticle__sub_8011B704(u32, M2C_UNK, M2C_UNK);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(void *, s32, s32, f32);
u32 TObjPlayer__sub_8011BA54();
int get_player_list__10TObjPlayerFv(void*);
int TObjPlayer__sub_803D9214(void*, void*);
M2C_UNK set_parent__7TObjectFP7TObject(u32, u32);

u32 spawn_shoot_effect__10TObjPlayerFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 temp_r31;
    u32 temp_r30;
    void *temp_r4;

    temp_r31 = TObjPlayer__sub_8011BA54();
    temp_r30 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
    if ((temp_r31 != 0U) && (temp_r30 != 0U)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x188);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) & 0xFFFFFFFD);
            M2C_FIELD(temp_r4, s32 *, 0x14) = 0x4000;
        }
        TItemShootParticle__sub_8011B704(temp_r30, 0x1BB, 0);
        set_parent__7TObjectFP7TObject(temp_r30, temp_r31);
    }
    return temp_r31;
}

void release_item_if_ready__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012665C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012665C(void *arg0);

void TObjPlayer__sub_8012665C(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (temp_r4 - 0x888);
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) - 0x888);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801266D8
#include "types.h"

extern "C" {

void* init_state_shop__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char spawn_shoot_effect__10TObjPlayerFPviif[];
    extern unsigned char lbl_804A2A58[];
    extern const float lbl_805DAD78;
void* init_state_shop__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2A58; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(int*)((char*)a0 + 0x1f0) = (int)spawn_shoot_effect__10TObjPlayerFPviif; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x1e4) = lbl_805DAD78; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801267C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_shield_scale_to_unit__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK set_evp__12TItemProUnitFPvf(s32, f32);

extern f32 lbl_805DAD80;
extern f32 lbl_805DAD84;
extern f32 lbl_805DAD88;
extern f32 lbl_805DAD8C;
extern f32 lbl_805DAD90;

void apply_shield_scale_to_unit__10TObjPlayerFPv(void *arg0) {
    f32 var_f31;
    u8 temp_r3;

    var_f31 = lbl_805DAD80;
    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch ((s32) temp_r3) {
    case 0:
        var_f31 = lbl_805DAD84;
        break;
    case 1:
        var_f31 = lbl_805DAD88;
        break;
    case 2:
        var_f31 = lbl_805DAD8C;
        break;
    case 3:
        var_f31 = lbl_805DAD90;
        break;
    }
    set_evp__12TItemProUnitFPvf(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC, var_f31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80126990
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_shield_ready__10TObjPlayerFi(s32 arg0);
void *init_vtable_and_flags__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_80120908(s32);
M2C_UNK TObjPlayer__sub_80120BBC(s32, M2C_UNK);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_805D5518;

void update_shield_ready__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 3) {
        lbl_805D5518 = 0;
        TObjPlayer__sub_80120908(arg0);
        lbl_805D5518 = 1;
        TObjPlayer__sub_80120BBC(arg0, 0x23);
    }
}

extern M2C_UNK lbl_804A2B98[];

void *init_vtable_and_flags__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2B98;
    set_status_flags__10TObjPlayerFPvUi(arg0, 577);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80126AE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_on_shield_state6__10TObjPlayerFi(s32 arg0);
void *init_with_update_handler__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_8010069C(s32);
void TObjPlayer__sub_80120D50(void *);

void apply_on_shield_state6__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 6) {
        TObjPlayer__sub_8010069C(arg0);
    }
}

extern M2C_UNK lbl_804A2D88[];
extern M2C_UNK TObjPlayer__sub_80109440[];

void *init_with_update_handler__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2D88;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = TObjPlayer__sub_80109440;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80126D30
#include "types.h"

extern "C" {

void run_tentacle_if_state1__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80126D6C(void* a0);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);

void run_tentacle_if_state1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

    extern const float lbl_805DAD98;
void TObjPlayer__sub_80126D6C(void* a0) { *(float*)((char*)a0 + 0x1fc) = lbl_805DAD98; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80126E04
#include "types.h"

extern "C" {

void* init_shot_effect__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804A2E80[];
    extern const float lbl_805DAD9C;
void* init_shot_effect__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2E80; *(float*)((char*)a0 + 0x200) = lbl_805DAD9C; *(float*)((char*)a0 + 0x1fc) = lbl_805DAD9C; *(float*)((char*)a0 + 0x1f8) = lbl_805DAD9C; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80126EA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_tentacle_state_2__10TObjPlayerFPv(void* p);
void update_orga_flow_shot__10TObjPlayerFi(s32 arg0);
void approach_value_field200__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_80126F3C(void);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

void handle_tentacle_state_2__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

extern const f32 lbl_805DADA0;
extern const f32 lbl_805DADA4;

void update_orga_flow_shot__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DADA0, lbl_805DADA4);
}

extern const f32 lbl_805DADA8;
extern const f32 lbl_805DADAC;

void approach_value_field200__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DADA8, lbl_805DADAC);
}

void TObjPlayer__sub_80126F3C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80126F98
#include "types.h"

extern "C" {

void* setup_effect__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804A2F78[];
    extern const float lbl_805DADA4;
void* setup_effect__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2F78; *(float*)((char*)a0 + 0x200) = lbl_805DADA4; *(float*)((char*)a0 + 0x1fc) = lbl_805DADA4; *(float*)((char*)a0 + 0x1f8) = lbl_805DADA4; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012703C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_shield_action__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_8011E2FC(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8011EDFC(void *, M2C_UNK, M2C_UNK, f32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);

extern f32 lbl_805DADB0;
extern f32 lbl_805DADB4;

void start_shield_action__10TObjPlayerFPv(void *arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 0) {
        if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
            TObjPlayer__sub_8011E2FC(arg0, lbl_805DADB0);
            TObjPlayer__sub_8011EDFC(arg0, 0, 1, lbl_805DADB4);
            TBoss3Volopt__sub_8022675C(0x4001A341, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            return;
        }
        update_active_game_effect__10TObjPlayerFPv(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801271FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_state_effect__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_8011E2FC(s32, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8011EDFC(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(s32);

extern f32 lbl_805DADC0;
extern f32 lbl_805DADC4;

void apply_state_effect__10TObjPlayerFi(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        TObjPlayer__sub_8011E2FC(arg0, lbl_805DADC0);
        TObjPlayer__sub_8011EDFC(arg0, 0, 1, lbl_805DADC4);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012736C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_container_change__10TObjPlayerFPv(void *arg0);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);

void notify_container_change__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x210) == get_player_list__10TObjPlayerFv()) {
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x214));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801277A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_variant_34__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A3358[];

void *init_variant_34__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3358;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012789C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012789C(void* p);
void cast_jellen_zalure__10TObjPlayerFPv(void *arg0);
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(s32, void *, M2C_UNK, M2C_UNK);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
int TObjPlayer__sub_8011E618(void*);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_8011F63C();
s32 get_tp__10TObjPlayerFPv(void *);
M2C_UNK create__9TTecJelinFiiii(s32, s32, s32, M2C_UNK);
M2C_UNK create_instance__9TTecZaruaFiiii(s32, s32, s32, M2C_UNK);

void TObjPlayer__sub_8012789C(void* p) { TObjPlayer__sub_8011E618((void*)(p)); TObjPlayer__sub_8011E618((void*)(p)); }

extern s32 tl_05;

void cast_jellen_zalure__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;

    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 2, 1);
    }
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        if (get_tp__10TObjPlayerFPv(arg0) == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0xF0);
            temp_r4 = temp_r3 + 0x38;
            create__9TTecJelinFiiii(temp_r3, temp_r4, temp_r4, 4);
        } else {
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xF0);
            temp_r4_2 = temp_r3_2 + 0x38;
            create_instance__9TTecZaruaFiiii(temp_r3_2, temp_r4_2, temp_r4_2, 4);
        }
        TObjPlayer__sub_8011E618((void*)(arg0));
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801279D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_substate_b__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern M2C_UNK lbl_804A3450[];

void *init_substate_b__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3450;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    set_effect_state__10TObjPlayerFPvi(arg0, 2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80127A7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_foie_effect__10TObjPlayerFPv(void *arg0);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
M2C_UNK create__8TTecFoieFPvPvPvPv(void *, M2C_UNK *, s32, M2C_UNK);

void create_foie_effect__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 1, &sp8) != 0) {
            temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r3, &sp8, M2C_FIELD(temp_r3, s32 *, 0x60), 5);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80127B40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_804A3548__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A3548[];

void *init_vtable_804A3548__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3548;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80127D24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_with_id_2__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A3640[];

void *init_with_id_2__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3640;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80127DC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_armor__10TObjPlayerFPv(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK TObjPlayer__sub_80127F40(s32, u32, s32, M2C_UNK, f32);
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK ct__13TItemProArmorFPv(s32, u32, s32, M2C_UNK);

extern f32 lbl_805DADD8;

void create_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3 != 0) {
            TObjPlayer__sub_80127F40(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0xE10, lbl_805DADD8);
        }
        temp_r3_2 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3_2 != 0) {
            ct__13TItemProArmorFPv(temp_r3_2, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80127EAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_804A3738__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A3738[];

void *init_vtable_804A3738__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3738;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128060
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct_state_variant__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_801210B0(void *, int, int, int);

extern M2C_UNK lbl_804A3830[];

void *construct_state_variant__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3830;
    TObjPlayer__sub_801210B0(arg0, 2, 1, 2);
    TObjPlayer__sub_801210B0(arg0, 3, 3, 4);
    set_status_flags__10TObjPlayerFPvUi(arg0, 513);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128158
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void ramp_up_field200__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80128188(void* p);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);

extern const f32 lbl_805DADE4;
extern const f32 lbl_805DADE8;

void ramp_up_field200__10TObjPlayerFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x200);
    if (temp_f2 < lbl_805DADE8) {
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) (temp_f2 + lbl_805DADE4);
        if (lbl_805DADE8 < M2C_FIELD(arg0, f32 *, 0x200)) {
            M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DADE8;
        }
    }
}

void TObjPlayer__sub_80128188(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012821C
#include "types.h"

extern "C" {

void* init_shot_params__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804A3928[];
    extern const float lbl_805DADE8;
void* init_shot_params__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A3928; *(float*)((char*)a0 + 0x200) = lbl_805DADE8; *(float*)((char*)a0 + 0x1fc) = lbl_805DADE8; *(float*)((char*)a0 + 0x1f8) = lbl_805DADE8; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801282C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_mode__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A3A20[];

void *init_mode__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3A20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1536);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801283B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801283B8(void);
void spawn_cane_effects_if_ready__10TObjPlayerFi(s32 arg0);
void *init_state_vtable__10TObjPlayerFPv(void *arg0);
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8011F63C();
void TObjPlayer__sub_8012A884(void *);

void TObjPlayer__sub_801283B8(void) {  }

extern s32 tl_05;

void spawn_cane_effects_if_ready__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 1, 2);
    }
}

extern M2C_UNK lbl_804A3B20[];

void *init_state_vtable__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3B20;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801284F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_801284F0(void* p);
void *TObjPlayer__sub_80128538(void *arg0);
int TObjPlayer__sub_8011E87C(void*, void*);
int TObjPlayer__sub_80120BBC(void*, void*);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

void TObjPlayer__sub_801284F0(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); }

extern M2C_UNK lbl_804A3C20[];

void *TObjPlayer__sub_80128538(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3C20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128630
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *setup_shoot_model_callback__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A3D20[];
extern M2C_UNK TObjPlayer__sub_80109440[];

void *setup_shoot_model_callback__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3D20;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = TObjPlayer__sub_80109440;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128728
#include "types.h"

extern "C" {

void notify_tentacle_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80128764(void* a0);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);

void notify_tentacle_if_active__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1fc); } }

    extern const float lbl_805DADF0;
void TObjPlayer__sub_80128764(void* a0) { *(float*)((char*)a0 + 0x200) = lbl_805DADF0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801287FC
#include "types.h"

extern "C" {

void* init_shot_state__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_8012A884(void);

    extern unsigned char lbl_804A3E20[];
    extern const float lbl_805DADF4;
void* init_shot_state__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A3E20; *(float*)((char*)a0 + 0x204) = lbl_805DADF4; *(float*)((char*)a0 + 0x200) = lbl_805DADF4; *(float*)((char*)a0 + 0x1fc) = lbl_805DADF4; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012896C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_variant__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A3F20[];
extern M2C_UNK TObjPlayer__sub_80109440[];

void *init_variant__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3F20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = TObjPlayer__sub_80109440;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128A70
#include "types.h"

extern "C" {

s32 TObjEneDellBiter__sub_80087350(u32, s32);
s32 clear_rico_ring_flag__10TObjPlayerFUi(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_80128A70(void);
void TObjPlayer__sub_80128BD0(void);

void TObjPlayer__sub_80128A70(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128AE4
#include "types.h"

extern "C" {

s32 TObjEneDellBiter__sub_80087350(u32, s32);
s32 clear_rico_ring_flag__10TObjPlayerFUi(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_80128A70(void);
void TObjPlayer__sub_80128BD0(void);

void notify_hit_target__10TObjPlayerFUiUiUiUi(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        clear_rico_ring_flag__10TObjPlayerFUi(arg1);
        TObjEneDellBiter__sub_80087350(arg3, 0x45);
        TBoss3Volopt__sub_8022675C(0x4001C112, 0, 0, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128B48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_and_detach_target__10TObjPlayerFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
s32 TObjEneDellBiter__sub_80087350(u32, s32);
void TObjPlayer__sub_80128A70(void);
void TObjPlayer__sub_80128BD0(void);
s32 clear_rico_ring_flag__10TObjPlayerFUi(u32);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 is_owner_alive__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(int);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void notify_and_detach_target__10TObjPlayerFPv(u8 *arg0) {
    if ((is_owner_alive__10TObjPlayerFPv() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
        TObjPlayer__sub_803D9B2C();
        notify_fish_if_valid__10TObjPlayerFUi((int) (M2C_FIELD(arg0, u32 *, 0x5C)));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x1C));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x2C)));
        TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x28) - 0x4000));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, u32 *, 0x58)));
        TObjPlayer__sub_803D9B78();
    }
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128BD0
#include "types.h"

extern "C" {

s32 TObjEneDellBiter__sub_80087350(u32, s32);
s32 clear_rico_ring_flag__10TObjPlayerFUi(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_80128A70(void);
void TObjPlayer__sub_80128BD0(void);

void TObjPlayer__sub_80128BD0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128C38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 spawn_shot_effect__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TItemShootParticle__sub_8011B704(M2C_UNK, M2C_UNK, M2C_UNK);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(s32, s32, s32, f32);
u32 TObjPlayer__sub_80128BD4(u32, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(u32, u32);

u32 spawn_shot_effect__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 var_r31;
    u32 temp_r30;

    var_r31 = 0U;
    if (arg0 != 0) {
        var_r31 = __nw__7TObjectFUl(0x6C);
        if (var_r31 != 0U) {
            var_r31 = TObjPlayer__sub_80128BD4(var_r31, arg0, arg1, arg2, farg0);
        }
        temp_r30 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
        if ((var_r31 != 0U) && (temp_r30 != 0U)) {
            TItemShootParticle__sub_8011B704(temp_r30, 0x1BB, 0);
            set_parent__7TObjectFP7TObject(temp_r30, var_r31);
        }
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128E80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_status_icons__10TObjPlayerFPv(u8 *arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, M2C_UNK);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, void *);
M2C_UNK TObjPlayer__sub_80120BBC(void *, M2C_UNK);

void draw_status_icons__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    set_flags__10TObjPlayerFPvUi(arg0 + 0x1FC, 1);
    TObjPlayer__sub_80120BBC(arg0, 0x30);
    draw_icon__10TObjPlayerFPvii(arg0, 1, arg0 + 0x200);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x180);
    clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1FC, 1);
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    draw_icon__10TObjPlayerFPvii(arg0, 1, arg0 + 0x20C);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80128F60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_event_callbacks__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void init_forward__10TObjPlayerFPv(void *);
void clear_id__10TObjPlayerFPv(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A403C[];
extern M2C_UNK notify_hit_target__10TObjPlayerFUiUiUiUi[];
extern M2C_UNK TObjPlayer__sub_80128A74[];
extern M2C_UNK spawn_shot_effect__10TObjPlayerFiiif[];
extern const f32 lbl_805DADF8;
struct VOff_80128F60_arg0_80128f60 { char pad_0[0x1FC]; char f_1FC[1]; };

void *init_event_callbacks__10TObjPlayerFPv(void *arg0) {
    struct VOff_80128F60_arg0_80128f60 *self = (struct VOff_80128F60_arg0_80128f60 *)arg0;
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A403C;
    init_forward__10TObjPlayerFPv(self->f_1FC);
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = notify_hit_target__10TObjPlayerFUiUiUiUi;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = TObjPlayer__sub_80128A74;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = spawn_shot_effect__10TObjPlayerFiiif;
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DADF8;
    clear_id__10TObjPlayerFPv(self->f_1FC);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80129048
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_80129048(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);

extern M2C_UNK lbl_804A4020[];

void *TObjPlayer__sub_80129048(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4020;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801290A0
#include "types.h"

extern "C" {

s32 clear_flags__11TAdRicoRingFPvUi(s32, s32);
int get_player_list__10TObjPlayerFv(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
void handle_tunnel_state_0__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80129124(void* p);

void clear_rico_ring_flag__10TObjPlayerFUi(u32 arg0) {
    if (arg0 != 0U) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1FC, 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801290D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 clear_flags__11TAdRicoRingFPvUi(s32, s32);
int get_player_list__10TObjPlayerFv(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
void handle_tunnel_state_0__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80129124(void* p);

s32 TObjPlayer__sub_801290D0(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0x1FC), (int) (4)) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x188);
    }
    return M2C_FIELD(arg0, s32 *, 0x184);
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80129124
#include "types.h"

extern "C" {

s32 clear_flags__11TAdRicoRingFPvUi(s32, s32);
int get_player_list__10TObjPlayerFv(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
void handle_tunnel_state_0__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80129124(void* p);

void TObjPlayer__sub_80129124(void* p) { *(s32*)((char*)p + 0x1fc) = 0; }
void handle_tunnel_state_0__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x1fc)); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80129308
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_80129308(void *arg0);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A4138[];

void *TObjPlayer__sub_80129308(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4138;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80129540
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *enter_state_804A4238__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A4238[];

void *enter_state_804A4238__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4238;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801295E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801295E0(void *arg0);

extern const f32 lbl_805DAE28;

void TObjPlayer__sub_801295E0(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DAE28;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DAE28;
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DAE28;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80129724
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *set_vtable_mode2__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A4338[];

void *set_vtable_mode2__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4338;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012981C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_directional_input__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
s32 get_player_list__10TObjPlayerFv();

void apply_directional_input__10TObjPlayerFPv(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x200));
    }
    if (get_player_list__10TObjPlayerFv() == 4) {
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x200));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801299DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void grow_field200_if_small__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_80129A14(u8 *arg0);
void* init_dead_state__10TObjPlayerFPv(void* a0);
M2C_UNK TObjPlayer__sub_80115BC0(void *, M2C_UNK, M2C_UNK);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);
int TObjPlayer__sub_8012A884(void);

void grow_field200_if_small__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x200) < 0x2000) {
        TObjPlayer__sub_80115BC0(arg0 + 0x200, 0x2D8, 0x2000);
    }
}

void TObjPlayer__sub_80129A14(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x200) > 0) {
        TObjPlayer__sub_80115BC0(arg0 + 0x200, -0x2000, 0);
    }
}

    extern unsigned char fn_8011B620[];
    extern unsigned char lbl_804A444C[];
    extern const float lbl_805DAE40;
void* init_dead_state__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A444C; *(int*)((char*)a0 + 0x200) = 8192; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(int*)((char*)a0 + 0x1f0) = (int)fn_8011B620; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE40; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80129B60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scaled_effect__10TObjPlayerFPv(void *arg0);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);

extern f32 lbl_805DAE48;
extern f32 lbl_805DAE4C;

void update_scaled_effect__10TObjPlayerFPv(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_803D9624(0, lbl_805DAE48, lbl_805DAE4C * M2C_FIELD(arg0, f32 *, 0x1FC), lbl_805DAE48);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80129CA0
#include "types.h"

extern "C" {

void* init_flame_effect__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_8012A884(void);

    extern unsigned char play_effect__13TItemEffFlameFiiii[];
    extern unsigned char fn_8010A710[];
    extern unsigned char fn_8011BE50[];
    extern unsigned char lbl_804A4548[];
    extern const float lbl_805DAE48;
    extern const float lbl_805DAE5C;
void* init_flame_effect__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A4548; *(float*)((char*)a0 + 0x1fc) = lbl_805DAE48; *(int*)((char*)a0 + 0x1ec) = (int)play_effect__13TItemEffFlameFiiii; *(int*)((char*)a0 + 0x200) = 0; *(int*)((char*)a0 + 0x1f4) = (int)fn_8010A710; *(int*)((char*)a0 + 0x1f0) = (int)fn_8011BE50; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE5C; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80129D70
#include "types.h"

extern "C" {

void TObjPlayer__sub_80129D70(void* p);

void TObjPlayer__sub_80129D70(void* p) { *(s32*)((char*)p + 0x200) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80129F2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *enter_state_2__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A4648[];
extern M2C_UNK fn_80109CBC[];
extern M2C_UNK fn_80109A30[];
extern M2C_UNK TObjPlayer__sub_8011BA54[];

void *enter_state_2__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4648;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = fn_80109CBC;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = fn_80109A30;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = TObjPlayer__sub_8011BA54;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012A16C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *setup_action__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A4748[];
extern M2C_UNK fn_8011B620[];
extern M2C_UNK TObjPlayer__sub_80109440[];

void *setup_action__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4748;
    set_status_flags__10TObjPlayerFPvUi(arg0, 547);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = fn_8011B620;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = TObjPlayer__sub_80109440;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012A224
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void drop_item_if_state3__10TObjPlayerFPv(void* p);
void update_guarded_by_flag__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8012A2EC(void *arg0);
void update_recovery_meter__10TObjPlayerFPv(void *arg0);
void update_field1fc__10TObjPlayerFPv(u8 *arg0);
int TObjContainerIdo__sub_803D96A8(void*, void*);
M2C_UNK TObjPlayer__sub_80115BFC(void *, s32);
M2C_UNK TObjPlayer__sub_8011E87C(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80120908(void *);
int get_player_list__10TObjPlayerFv(void*);

void drop_item_if_state3__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 3) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1fc)); } }

void update_guarded_by_flag__10TObjPlayerFPv(void *arg0) {
    s32 *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        temp_r31 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF4), void **, 0x2C), void **, 0x30), s32 **, 0x30);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x208) == 0) {
            *temp_r31 |= 0x10;
        }
        TObjPlayer__sub_80120908(arg0);
        TObjPlayer__sub_8011E87C(arg0, 0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x208) == 0) {
            *temp_r31 &= 0xFFFFFFEF;
        }
    }
}

void TObjPlayer__sub_8012A2EC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x200);
    if (temp_r4 > 0xCCC) {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (temp_r4 - 0xB6);
    }
}

void update_recovery_meter__10TObjPlayerFPv(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x204) = (s32) (M2C_FIELD(arg0, s32 *, 0x204) + 1);
    if (!(M2C_FIELD(arg0, s32 *, 0x204) & 3)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x200);
        if (temp_r4 < 0x3333) {
            M2C_FIELD(arg0, s32 *, 0x200) = (s32) (temp_r4 + 0xB6);
        }
    }
}

void update_field1fc__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_80115BFC(arg0 + 0x1FC, M2C_FIELD(arg0, s32 *, 0x200));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012A3B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012A3B4(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A4848[];

void *TObjPlayer__sub_8012A3B4(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4848;
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, u32 *, 0x200) = 3276;
    M2C_FIELD(arg0, u32 *, 0x204) = 0;
    M2C_FIELD(arg0, u32 *, 0x208) = 1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012A78C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_armor_item__10TObjPlayerFPv(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK init_item_timer_event__10TObjPlayerFPv(s32, s32, s32, M2C_UNK);
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK construct_timer_event__10TObjPlayerFPv(s32, s32, s32, M2C_UNK);

void create_armor_item__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F8);
    switch (temp_r0) {
    case 3:
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            init_item_timer_event__10TObjPlayerFPv(temp_r3, M2C_FIELD(arg0, s32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
        return;
    case 4:
        temp_r3_2 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3_2 != 0) {
            construct_timer_event__10TObjPlayerFPv(temp_r3_2, M2C_FIELD(arg0, s32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012AA0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_motion_state__10TObjPlayerFi(s32 arg0);
void update_photon_chair_sit__10TObjPlayerFPv(u8 *arg0);
void* init_state_object__10TObjPlayerFPv(void* a0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_80115BFC(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E2FC(s32, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8011EDFC(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(s32);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);
s32 get_player_list__10TObjPlayerFv();

extern f32 lbl_805DAE68;
extern f32 lbl_805DAE6C;

void update_motion_state__10TObjPlayerFi(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        TObjPlayer__sub_8011E2FC(arg0, lbl_805DAE68);
        TObjPlayer__sub_8011EDFC(arg0, 0, 1, lbl_805DAE6C);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

void update_photon_chair_sit__10TObjPlayerFPv(u8 *arg0) {
    if (get_player_list__10TObjPlayerFv() == 2) {
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        TObjPlayer__sub_80115BFC(arg0 + 0x1F8, 0x1999);
    }
}

    extern unsigned char fn_80109710[];
    extern unsigned char lbl_804A4A88[];
    extern const float lbl_805DAE70;
void* init_state_object__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A4A88; set_status_flags__10TObjPlayerFPvUi(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)fn_80109710; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE70; *(int*)((char*)a0 + 0x1f8) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012AE00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_subobject_state__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012AF00(void *);

extern M2C_UNK lbl_804A4B80[];

void *init_subobject_state__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4B80;
    TObjPlayer__sub_8012AF00((void *)((char *)arg0 + 504));
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012AF50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_8012AF50(s32 arg0);
M2C_UNK TObjPlayer__sub_8012AF80();

s32 TObjPlayer__sub_8012AF50(s32 arg0) {
    TObjPlayer__sub_8012AF80();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012AF98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_rand_below_threshold__10TObjPlayerFv(void);
s32 rand__11TOBoss4RockFv();

extern M2C_UNK lbl_8043E980;
extern f32 lbl_805DAE78;
extern f32 lbl_805DAE7C;

s32 is_rand_below_threshold__10TObjPlayerFv(void) {
    return (u32)__cntlzw(((lbl_805DAE78 * (f32) rand__11TOBoss4RockFv()) < lbl_805DAE7C)) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012B0F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012B0F8(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A4C78[];

void *TObjPlayer__sub_8012B0F8(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4C78;
    set_status_flags__10TObjPlayerFPvUi(arg0, 513);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012B1F0
#include "types.h"

extern "C" {

void TObjPlayer__sub_8012B1F0(void* p, s16 v);
s16 TObjPlayer__sub_8012B1F8(void* p);

void TObjPlayer__sub_8012B1F0(void* p, s16 v) { *(s16*)((char*)p + 0x1e8) = v; }
s16 TObjPlayer__sub_8012B1F8(void* p) { return *(s16*)((char*)p + 0x1e8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012B318
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_area_effect_objects__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
s32 get_player_list__10TObjPlayerFv();

void update_area_effect_objects__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3_2;
    u8 temp_r3;

    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch ((s32) temp_r3) {
    case 6:
        if (get_player_list__10TObjPlayerFv() == 4) {
            TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x1F8)));
        }
        break;
    case 5:
        temp_r3_2 = get_player_list__10TObjPlayerFv();
        switch (temp_r3_2) {
        case 1:
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x208));
            return;
        case 2:
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x214));
            return;
        case 3:
            TBoss7Tentacle__sub_803D9BA0((void *) (arg0 + 0x1FC));
            break;
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012B4BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_proshield_charge_bonus__10TObjPlayerFPv(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_80115BFC(void *, s32);
s32 obj_getPtr2B0_20(s32);

void apply_proshield_charge_bonus__10TObjPlayerFPv(u8 *arg0) {
    s32 var_r4;

    if (get_slot_count__14TItemProShieldFPv() == 6) {
        var_r4 = obj_getPtr2B0_20(M2C_FIELD(arg0, s32 *, 0xF0)) / 100000;
        var_r4 = var_r4 * 0x222;
        if (var_r4 > 0x1555) {
            var_r4 = 0x1555;
        }
        TObjPlayer__sub_80115BFC(arg0 + 0x1F8, var_r4 + 0x1555);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012B618
#include "types.h"

extern "C" {

void TObjPlayer__sub_8012B618(void* p);
void TObjPlayer__sub_8012B658(void* p);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer__sub_8012B618(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x1f8)); } }
void TObjPlayer__sub_8012B658(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012B854
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_and_clear_field1f8__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A4E68[];

void *init_vtable_and_clear_field1f8__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4E68;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012BAA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void sync_hp_damage__10TObjPlayerFPv(void *arg0);
void update_cane_cast__10TObjPlayerFi(s32 arg0);
void play_action_sound__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_800112A4(s32, s16);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, s32, M2C_UNK);
s32 is_mode_two_and_ready__10TObjPlayerFPv(s32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_8011F63C();
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_8012B9B4(s32);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjectV8047c128_subtract_hp(s32, s16);
s16 obj_getS16_32E(s32);

void sync_hp_damage__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r3;

    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        temp_r3 = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x1F8) - temp_r3;
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, s16 *, 0x1F8) = temp_r3;
        }
        if (temp_r0 > 0) {
            TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, s32 *, 0xF0), temp_r0);
            TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), (s16) (temp_r0 / 2));
        }
    }
}

extern s32 tl_05;

void update_cane_cast__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        TObjPlayer__sub_8012B9B4(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAECC;

void play_action_sound__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 2:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x278));
        return;
    case 5:
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x278));
        return;
    case 1:
        TObjPlayer__sub_803D9624(0, lbl_805DAEC8, lbl_805DAECC * M2C_FIELD(arg0, f32 *, 0x274), lbl_805DAEC8);
        return;
    case 3:
    case 4:
    case 6:
        play_particle_effect_once__10TObjPlayerFv();
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012BC28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_shot_charge__10TObjPlayerFPv(u8 *arg0);
void approach_and_notify__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80115BC0(void *, int, int);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);

extern const f32 lbl_805DAED0;
extern const f32 lbl_805DAED4;

void update_shot_charge__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_80115BC0((void *) (arg0 + 0x278), (int) (0x38E), (int) (0x2AAA));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x278) == 0x2AAA) {
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x274), (f32) (lbl_805DAED0), (f32) (lbl_805DAED4));
    }
}

extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAED8;

void approach_and_notify__10TObjPlayerFPv(u8 *arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x274), (f32) (lbl_805DAED8), (f32) (lbl_805DAEC8));
    if (lbl_805DAEC8 == M2C_FIELD(arg0, f32 *, 0x274)) {
        TObjPlayer__sub_80115BC0((void *) (arg0 + 0x278), (int) (-0x71C), (int) (0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012BDA8
#include "types.h"

extern "C" {

void TObjPlayer__sub_8012BDA8(void* p);
void TObjPlayer__sub_8012BDB4(void* p);

void TObjPlayer__sub_8012BDA8(void* p) { *(s16*)((char*)p + 0x1f8) = -1; }
void TObjPlayer__sub_8012BDB4(void* p) { *(s16*)((char*)p + 0x1f8) = -1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012BE18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_conveyor_effect__10TObjPlayerFPv(void *arg0);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D898C(s32);

void apply_conveyor_effect__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    TObjPlayer__sub_803D898C(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), s32 *, 0xDB4) + (temp_r3 * 0x30));
    if (temp_r3 == 9) {
        play_particle_effect_once__10TObjPlayerFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012BEC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *ct_variant__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A5058[];

void *ct_variant__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5058;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012BF54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_positions__10TObjPlayerFPv(void* p);
void init_pair_1f8__10TObjPlayerFPv(void* p);
void apply_conveyor_move__10TObjPlayerFPv(void *arg0);
void *init_vtable_and_handlers__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
int TObjPlayer__sub_80115BC0(void*, void*, void*);
void TObjPlayer__sub_80120D50(void *);
s32 get_player_list__10TObjPlayerFv();

void init_positions__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((char*)p + 0x1f8, (void*)-910, (void*)-7281); TObjPlayer__sub_80115BC0((char*)p + 0x1fc, (void*)-910, (void*)-9102); }

void init_pair_1f8__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((char*)p + 0x1f8, (void*)1820, (void*)0); TObjPlayer__sub_80115BC0((char*)p + 0x1fc, (void*)1820, (void*)0); }

void apply_conveyor_move__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    case 2:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    case 3:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    }
}

extern M2C_UNK lbl_804A5150[];
extern M2C_UNK spawn_shoot_particle_attached__10TItemShootFiiif[];
extern M2C_UNK fn_80109CBC[];
extern M2C_UNK fn_80109A30[];

void *init_vtable_and_handlers__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5150;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = spawn_shoot_particle_attached__10TItemShootFiiif;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = fn_80109CBC;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = fn_80109A30;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012C180
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_shield_combo__10TObjPlayerFPv(void *arg0);
void approach_shield_effect__10TObjPlayerFi(s32 arg0);
void approach_shield_value__10TObjPlayerFi(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern f32 lbl_805DAEE0;

void check_shield_combo__10TObjPlayerFPv(void *arg0) {
    if ((get_slot_count__14TItemProShieldFPv() == 5) && (get_player_list__10TObjPlayerFv() == 3)) {
        TOMonitorMachine01__sub_803D8B5C(0, lbl_805DAEE0, M2C_FIELD(arg0, f32 *, 0x1F8), lbl_805DAEE0);
    }
}

extern f32 lbl_805DAEE4;
extern f32 lbl_805DAEE8;

void approach_shield_effect__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DAEE4, lbl_805DAEE8);
    }
}

extern f32 lbl_805DAEE0;
extern f32 lbl_805DAEEC;

void approach_shield_value__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DAEEC, lbl_805DAEE0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012C3F4
#include "types.h"

extern "C" {

s32 TObjEneDellBiter__sub_80087350(u32, s32);
s32 update_rico_ring__10TObjPlayerFUi(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_8012C4E0(void);

void send_trade_action__10TObjPlayerFUiUiUiUi(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        update_rico_ring__10TObjPlayerFUi(arg1);
        TObjEneDellBiter__sub_80087350(arg3, 0x45);
        TBoss3Volopt__sub_8022675C(0x4001C112, 0, 0, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012C458
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_and_cleanup_fishing__10TObjPlayerFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
s32 TObjEneDellBiter__sub_80087350(u32, s32);
void TObjPlayer__sub_8012C4E0(void);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 is_owner_alive__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(int);
s32 update_rico_ring__10TObjPlayerFUi(u32);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void notify_and_cleanup_fishing__10TObjPlayerFPv(u8 *arg0) {
    if ((is_owner_alive__10TObjPlayerFPv() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
        TObjPlayer__sub_803D9B2C();
        notify_fish_if_valid__10TObjPlayerFUi((int) (M2C_FIELD(arg0, u32 *, 0x5C)));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x1C));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x2C)));
        TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x28) - 0x4000));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, u32 *, 0x58)));
        TObjPlayer__sub_803D9B78();
    }
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012C4E0
#include "types.h"

extern "C" {

s32 TObjEneDellBiter__sub_80087350(u32, s32);
s32 update_rico_ring__10TObjPlayerFUi(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_8012C4E0(void);

void TObjPlayer__sub_8012C4E0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012C548
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 create_shot_effect__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TItemShootParticle__sub_8011B704(M2C_UNK, M2C_UNK, M2C_UNK);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(s32, s32, s32, f32);
u32 TObjPlayer__sub_8012C4E4(u32, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(u32, u32);

u32 create_shot_effect__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 var_r31;
    u32 temp_r30;

    var_r31 = 0U;
    if (arg0 != 0) {
        var_r31 = __nw__7TObjectFUl(0x6C);
        if (var_r31 != 0U) {
            var_r31 = TObjPlayer__sub_8012C4E4(var_r31, arg0, arg1, arg2, farg0);
        }
        temp_r30 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
        if ((var_r31 != 0U) && (temp_r30 != 0U)) {
            TItemShootParticle__sub_8011B704(temp_r30, 0x1BB, 0);
            set_parent__7TObjectFP7TObject(temp_r30, var_r31);
        }
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012C78C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012C78C(u8 *arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, M2C_UNK);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, void *);
M2C_UNK TObjPlayer__sub_80120908(void *);
M2C_UNK TObjPlayer__sub_80120BBC(void *, M2C_UNK);

void TObjPlayer__sub_8012C78C(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    set_flags__10TObjPlayerFPvUi(arg0 + 0x1F8, 1);
    TObjPlayer__sub_80120908(arg0);
    draw_icon__10TObjPlayerFPvii(arg0, 1, arg0 + 0x1FC);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x180);
    clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1F8, 1);
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    draw_icon__10TObjPlayerFPvii(arg0, 1, arg0 + 0x208);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012C868
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_trade_action__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void init_forward__10TObjPlayerFPv(void *);
void clear_id__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A535C[];
extern M2C_UNK send_trade_action__10TObjPlayerFUiUiUiUi[];
extern M2C_UNK TObjPlayer__sub_8012C384[];
extern M2C_UNK create_shot_effect__10TObjPlayerFiiif[];
extern const f32 lbl_805DAEF0;
struct VOff_8012C868_arg0_8012c868 { char pad_0[0x1F8]; char f_1F8[1]; };

void *init_trade_action__10TObjPlayerFPv(void *arg0) {
    struct VOff_8012C868_arg0_8012c868 *self = (struct VOff_8012C868_arg0_8012c868 *)arg0;
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A535C;
    init_forward__10TObjPlayerFPv(self->f_1F8);
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = send_trade_action__10TObjPlayerFUiUiUiUi;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = TObjPlayer__sub_8012C384;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create_shot_effect__10TObjPlayerFiiif;
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DAEF0;
    clear_id__10TObjPlayerFPv(self->f_1F8);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012C950
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_8012C950(void *arg0, s16 arg1);
void update_rico_ring__10TObjPlayerFUi(u32 arg0);
s32 get_hp_by_flag__10TObjPlayerFPv(u8 *arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(s32, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);

extern M2C_UNK lbl_804A5340[];

void *TObjPlayer__sub_8012C950(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5340;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void update_rico_ring__10TObjPlayerFUi(u32 arg0) {
    if (arg0 != 0U) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1F8, 2);
    }
}

s32 get_hp_by_flag__10TObjPlayerFPv(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x1F8, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x188);
    }
    return M2C_FIELD(arg0, s32 *, 0x184);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012CA78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *construct_weapon_variant__10TObjPlayerFPviPv(void *arg0, M2C_UNK arg1, void *arg2);
M2C_UNK TObjPlayer__sub_80120D50();
M2C_UNK TObjPlayer__sub_801210B0(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_atp__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_804A5458[];

void *construct_weapon_variant__10TObjPlayerFPviPv(void *arg0, M2C_UNK arg1, void *arg2) {
    u8 temp_r0;

    TObjPlayer__sub_80120D50();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5458;
    temp_r0 = M2C_FIELD(arg2, u8 *, 2);
    switch ((s32) temp_r0) {
    case 5:
    case 6:
        TObjPlayer__sub_801210B0(arg0, 0, 3, 2);
        break;
    case 4:
        TObjPlayer__sub_801210B0(arg0, 0, 2, 1);
        break;
    default:
        TObjPlayer__sub_801210B0(arg0, 0, 2, 3);
        break;
    }
    if ((u8) M2C_FIELD(arg2, u8 *, 2) >= 4U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012CB84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_if_shield_type5__10TObjPlayerFi(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_8010069C(s32);

void apply_if_shield_type5__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        TObjPlayer__sub_8010069C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012CC1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *init_state__10TObjPlayerFPviPv(void *arg0, M2C_UNK arg1, void *arg2);
M2C_UNK TObjPlayer__sub_80120D50();
M2C_UNK set_atp__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_804A5550[];

void *init_state__10TObjPlayerFPviPv(void *arg0, M2C_UNK arg1, void *arg2) {
    TObjPlayer__sub_80120D50();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5550;
    if ((u8) M2C_FIELD(arg2, u8 *, 2) >= 5U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012CDE8
#include "types.h"

extern "C" {

void* enter_state_515__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char spawn_shoot_particle_9f[];
    extern unsigned char lbl_804A5648[];
    extern const float lbl_805DAEF8;
void* enter_state_515__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A5648; set_status_flags__10TObjPlayerFPvUi(a0, (void*)515); *(int*)((char*)a0 + 0x1f0) = (int)spawn_shoot_particle_9f; *(float*)((char*)a0 + 0x1e4) = lbl_805DAEF8; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012CE9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjPlayer__sub_8012CE9C(void* p);
int TObjPlayer__sub_8012CEC8(void* p);
void release_container_if_positive__10TObjPlayerFPv(void* p);
void *init_state_1f8__10TObjPlayerFPv(void *arg0);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int TObjPlayer__sub_80115BC0(void*, int, int);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
int get_player_list__10TObjPlayerFv(void*);

int TObjPlayer__sub_8012CE9C(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, 1820, 10922); }
int TObjPlayer__sub_8012CEC8(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, -1820, 0); }
void release_container_if_positive__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) > 0) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_804A5740[];

void *init_state_1f8__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5740;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 10922;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1536);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012D034
#include "types.h"

extern "C" {

void TObjPlayer__sub_8012D034(void* p);
void notify_container_if_mode0__10TObjPlayerFPv(void* p);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer__sub_8012D034(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }
void notify_container_if_mode0__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012D218
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_shield__10TObjPlayerFPv(void *arg0);
void trigger_megid_special__10TObjPlayerFPv(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK create_item_eff_cane__10TObjPlayerFiUiii(s32, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E2FC(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK create_ex__9TTecMegidFiiii(void *, M2C_UNK *, s32, M2C_UNK);
M2C_UNK ct__13TItemProArmorFPv(s32, u32, s32, M2C_UNK);

void create_shield__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        if (get_slot_count__14TItemProShieldFPv() == 0) {
            temp_r3 = alloc__13TItemProArmorFi(0x2C);
            if (temp_r3 != 0) {
                ct__13TItemProArmorFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x96);
            }
        } else {
            temp_r3_2 = alloc__13TItemProArmorFi(0x2C);
            if (temp_r3_2 != 0) {
                ct__13TItemProArmorFPv(temp_r3_2, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
            }
        }
    }
}

extern s32 tl_05;
extern f32 lbl_805DAF18;

void trigger_megid_special__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    if (get_slot_count__14TItemProShieldFPv() == 1) {
        create_item_eff_cane__10TObjPlayerFiUiii(tl_05, arg0, 2, 0x101);
        if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
            if (draw_icon__10TObjPlayerFPvii(arg0, 2, &sp8) != 0) {
                temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
                create_ex__9TTecMegidFiiii(temp_r3, &sp8, M2C_FIELD(temp_r3, s32 *, 0x60), 0);
                TObjPlayer__sub_8011E2FC(arg0, lbl_805DAF18);
            }
        } else {
            update_active_game_effect__10TObjPlayerFPv(arg0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012D4C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_weapon_kill_count__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8012D558(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
u16 TObjPlayer__sub_80100474(void *);
M2C_UNK TObjPlayer__sub_8010047C(void *, u16);
u32 test_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK add_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
s16 get_kill_count__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_8012D6BC(s32, u32, s32, M2C_UNK, f32);
s32 alloc__13TItemProArmorFi(M2C_UNK);

void update_weapon_kill_count__10TObjPlayerFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1F8) < get_kill_count__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0))) {
        TObjPlayer__sub_8010047C(arg0, (u16) (TObjPlayer__sub_80100474(arg0) + 1));
        M2C_FIELD(arg0, s16 *, 0x1F8) = get_kill_count__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    }
    if ((TObjPlayer__sub_80100474(arg0) >= 0x59D8U) && (test_item_flags__10TObjPlayerFPvUi(arg0, 0x200) == 0U)) {
        add_item_flags__10TObjPlayerFPvUi(arg0, 0x200);
    }
}

extern f32 lbl_805DAF20;

void TObjPlayer__sub_8012D558(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3 != 0) {
            TObjPlayer__sub_8012D6BC(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0xE10, lbl_805DAF20);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x1F8) = get_kill_count__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012D620
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012D620(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A5930[];

void *TObjPlayer__sub_8012D620(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5930;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012D6B4
#include "types.h"

extern "C" {

s16 get_kill_count__10TObjPlayerFPv(void* p);

s16 get_kill_count__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x11a); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012D844
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_variant_2_5a28__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A5A28[];

void *init_variant_2_5a28__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5A28;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012D8E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012D8E4(void *arg0);
void setup_item_render__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
s32 get_player_list__10TObjPlayerFv();

extern const f32 lbl_805DAF34;

void TObjPlayer__sub_8012D8E4(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DAF34;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DAF34;
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DAF34;
    }
}

void setup_item_render__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    u8 temp_r3;

    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch ((s32) temp_r3) {
    case 5:
        temp_r3_2 = get_player_list__10TObjPlayerFv();
        switch (temp_r3_2) {
        case 1:
            TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1F8));
            return;
        case 2:
            TBoss7Tentacle__sub_803D9BA0(arg0 + 0x1FC);
            return;
        }
        break;
    case 7:
        temp_r3_3 = get_player_list__10TObjPlayerFv();
        switch (temp_r3_3) {
        case 4:
            TOHangerMachine01__sub_803D9C00(arg0 + 0x1FC);
            return;
        case 2:
            TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
            break;
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012DD44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_frame_camera_shake__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);

extern const f32 lbl_805DAF58;

void apply_frame_camera_shake__10TObjPlayerFPv(void *arg0) {
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = get_player_list__10TObjPlayerFv();
    if (get_slot_count__14TItemProShieldFPv(arg0) != 6) {
        if (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x21C)) {
            TObjPlayer__sub_803D9624(0, lbl_805DAF58, M2C_FIELD(arg0, f32 *, 0x224), lbl_805DAF58);
        }
        var_r30 = M2C_FIELD(arg0, s32 *, 0x220);
    } else {
        if (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x21C)) {
            TObjContainerIdo__sub_803D96A8(0, -M2C_FIELD(arg0, s32 *, 0x220));
        }
        var_r30 = (s32) (M2C_FIELD(arg0, s32 *, 0x220) * 2) / 3;
    }
    if ((temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x20C)) || (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x214))) {
        TObjBoss2Tunnel__sub_803D929C(0, var_r30);
    }
    if ((temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x210)) || (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 0x218))) {
        TObjBoss2Tunnel__sub_803D929C(0, -var_r30);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012DEB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_approach_value__10TObjPlayerFPv(u8 *arg0);
void update_shot_effect__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80115BC0(void *, M2C_UNK, M2C_UNK);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);

extern const f32 lbl_805DAF5C;
extern const f32 lbl_805DAF60;

void update_approach_value__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x220) < 0x2000) {
        TObjPlayer__sub_80115BC0(arg0 + 0x220, 0x2D8, 0x2000);
    }
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x224, lbl_805DAF5C, lbl_805DAF60);
}

extern const f32 lbl_805DAF58;
extern const f32 lbl_805DAF64;

void update_shot_effect__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x220) > 0) {
        TObjPlayer__sub_80115BC0(arg0 + 0x220, -0x2000, 0);
    }
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x224, lbl_805DAF64, lbl_805DAF58);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012E32C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_joined_game_entity__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
u8 *query_game_join_id__10TObjPlayerFv(s32);
M2C_UNK get_entity_id__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

void notify_joined_game_entity__10TObjPlayerFPv(u8 *arg0) {
    u32 temp_r31;
    u8 *temp_r3;

    temp_r3 = query_game_join_id__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0x1C));
    if (temp_r3 != NULL) {
        temp_r31 = M2C_FIELD(temp_r3, u32 *, 0x188);
        if (temp_r31 != 0U) {
            get_entity_id__10TObjPlayerFPv();
            notify_fish_if_valid__10TObjPlayerFUi();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x2C);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x3C));
            TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x38));
            TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x40));
            TObjBoss2Tunnel__sub_803DB470(temp_r31);
            TObjPlayer__sub_803D9B78();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012E3B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_or_destroy__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
u32 query_game_join_id__10TObjPlayerFv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f32 lbl_805DAF70;

void update_or_destroy__10TObjPlayerFPv(u8 *arg0) {
    if (query_game_join_id__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0x1C)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    TBoss4Zako__sub_803D8910(arg0 + 0x2C, arg0 + 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + lbl_805DAF70);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012E550
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_scale_effect__10TObjPlayerFPv(void *arg0);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);

extern f32 lbl_805DAF7C;
extern f32 lbl_805DAF80;

void apply_scale_effect__10TObjPlayerFPv(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_803D9624(0, lbl_805DAF7C, lbl_805DAF80 * M2C_FIELD(arg0, f32 *, 0x1F8), lbl_805DAF7C);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012E690
#include "types.h"

extern "C" {

void* setup_flame_effect__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char play_effect__13TItemEffFlameFiiii[];
    extern unsigned char fn_8010A710[];
    extern unsigned char fn_8011BE50[];
    extern unsigned char lbl_804A5D28[];
    extern const float lbl_805DAF7C;
    extern const float lbl_805DAF90;
void* setup_flame_effect__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A5D28; *(float*)((char*)a0 + 0x1f8) = lbl_805DAF7C; *(int*)((char*)a0 + 0x1ec) = (int)play_effect__13TItemEffFlameFiiii; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x1f4) = (int)fn_8010A710; *(int*)((char*)a0 + 0x1f0) = (int)fn_8011BE50; *(float*)((char*)a0 + 0x1e4) = lbl_805DAF90; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012E760
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012E760(void *arg0, s16 arg1);
int TObjPlayer__sub_8012E7B8(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int queue_destruction__7TObjectFv(void*);

extern M2C_UNK lbl_804A5D10[];

void *TObjPlayer__sub_8012E760(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5D10;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TObjPlayer__sub_8012E7B8(void* p) { return queue_destruction__7TObjectFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012E830
#include "types.h"

extern "C" {

void TObjPlayer__sub_8012E830(void* p);

void TObjPlayer__sub_8012E830(void* p) { *(s32*)((char*)p + 0x1fc) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012E98C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_state_2__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A5E20[];
extern M2C_UNK fn_80109CBC[];
extern M2C_UNK fn_80109A30[];
extern M2C_UNK TObjPlayer__sub_8011BA54[];

void *init_state_2__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5E20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = fn_80109CBC;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = fn_80109A30;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = TObjPlayer__sub_8011BA54;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012EAA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cast_shifta_deband__10TObjPlayerFPv(void *arg0);
int grow_field1f8__10TObjPlayerFPv(void* p);
int apply_recoil_backward__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8012EB7C(void* p);
void release_container_if_ready__10TObjPlayerFPv(void* p);
void *init_variant_a__10TObjPlayerFPv(void *arg0);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int TObjPlayer__sub_80115BC0(void*, int, int);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
int TObjPlayer__sub_8011E618(void*);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
int get_player_list__10TObjPlayerFv(void*);
s32 get_tp__10TObjPlayerFPv(void *);
void set_effect_state__10TObjPlayerFPvi(void *, int);
s32 create__10TTecDebandFiii(s32, s32, s32);
s32 create__9TTecSiftaFPvPvPv(s32, s32, s32);

void cast_shifta_deband__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (get_tp__10TObjPlayerFPv(arg0) == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0xF0);
            create__10TTecDebandFiii(temp_r3, temp_r3 + 0x38, 2);
        } else {
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xF0);
            create__9TTecSiftaFPvPvPv(temp_r3_2, temp_r3_2 + 0x38, 2);
        }
        TObjPlayer__sub_8011E618(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}
int grow_field1f8__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, 1820, 10922); }
int apply_recoil_backward__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, -1820, 0); }
void TObjPlayer__sub_8012EB7C(void* p) { TObjPlayer__sub_8011E618(p); TObjPlayer__sub_8011E618(p); }
void release_container_if_ready__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_804A5F18[];

void *init_variant_a__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5F18;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 10922;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1570);
    set_effect_state__10TObjPlayerFPvi(arg0, 2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012ECFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_turn__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8012ED74(void *arg0);
void try_spawn_cane_effects__10TObjPlayerFi(s32 arg0);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8011F63C();
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);

void apply_turn__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 3:
        play_particle_effect_once__10TObjPlayerFv();
        TObjPlayer__sub_803D9214(0, -M2C_FIELD(arg0, s32 *, 0x1F8));
    case 2:
        return;
    }
}

void TObjPlayer__sub_8012ED74(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 0xCCC);
}

extern s32 tl_05;

void try_spawn_cane_effects__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 2, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012EE24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *set_state_0__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A6010[];

void *set_state_0__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6010;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012EEC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_boss2tunnel_move__10TObjPlayerFPv(void *arg0);
int TObjPlayer__sub_8012EF40(void* p);
void *init_effect_state__10TObjPlayerFPv(void *arg0);
s32 TObjBoss2Tunnel__sub_803D929C(s32, s32);
s32 play_particle_effect_once__10TObjPlayerFv();
int TObjPlayer__sub_80115BFC(void*, int);
void TObjPlayer__sub_80120D50(void *);
s32 get_player_list__10TObjPlayerFv();

void update_boss2tunnel_move__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 2:
        play_particle_effect_once__10TObjPlayerFv();
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 3:
        play_particle_effect_once__10TObjPlayerFv();
        return;
    }
}
int TObjPlayer__sub_8012EF40(void* p) { return TObjPlayer__sub_80115BFC((char*)p + 0x1f8, 3276); }

extern M2C_UNK lbl_804A6108[];

void *init_effect_state__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6108;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F05C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_tentacle_if_state2__10TObjPlayerFPv(void* p);
void start_armor_timer_event__10TObjPlayerFPv(void *arg0);
int TBoss7Tentacle__sub_803D9BA0(void*);
s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK init_item_timer_event__10TObjPlayerFPv(s32, u32, s32, M2C_UNK);
int get_player_list__10TObjPlayerFv(void*);
s32 alloc__13TItemProArmorFi(M2C_UNK);

void run_tentacle_if_state2__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

void start_armor_timer_event__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            init_item_timer_event__10TObjPlayerFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F19C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_angles__10TObjPlayerFi(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern const f32 lbl_805DAFA4;
extern const f32 lbl_805DAFA8;
extern const f32 lbl_805DAFAC;
extern const f32 lbl_805DAFB0;

void approach_angles__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DAFA4, lbl_805DAFA8);
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1FC, lbl_805DAFAC, lbl_805DAFB0);
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DAFA4, lbl_805DAFA8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F24C
#include "types.h"

extern "C" {

void* set_mode_vector__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804A6200[];
    extern const float lbl_805DAF98;
void* set_mode_vector__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6200; *(float*)((char*)a0 + 0x200) = lbl_805DAF98; *(float*)((char*)a0 + 0x1fc) = lbl_805DAF98; *(float*)((char*)a0 + 0x1f8) = lbl_805DAF98; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F2F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_boss2tunnel__10TObjPlayerFPv(void *arg0);
void apply_on_shield_state5__10TObjPlayerFi(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_8010069C(s32);
M2C_UNK TObjPlayer__sub_80100EB4(void *, M2C_UNK);
M2C_UNK setup_particle_once__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();

void update_boss2tunnel__10TObjPlayerFPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1F8) != 0) && (get_player_list__10TObjPlayerFv() == 1)) {
        setup_particle_once__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_80100EB4(arg0, 0);
    }
}

void apply_on_shield_state5__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        TObjPlayer__sub_8010069C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F3DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *init_from_item__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);
M2C_UNK TObjPlayer__sub_80120D50();
M2C_UNK set_status_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK set_atp__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_804A62F8[];

void *init_from_item__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    TObjPlayer__sub_80120D50();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A62F8;
    if (((u8) M2C_FIELD(arg2, u8 *, 2) == 5) || ((u8) M2C_FIELD(arg2, u8 *, 1) == 0x8F)) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) != 0) {
        set_status_flags__10TObjPlayerFPvUi(arg0, 0x800);
    }
    if ((u8) M2C_FIELD(arg2, u8 *, 2) > 5U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F4D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_cane_effect__10TObjPlayerFPv(u8 *arg0);
s32 TObjPlayer__sub_8011F63C();
M2C_UNK create_ex__9TTecBartaFPvPvPvPv(int, void *, int, int);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, int, void *);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(void *, void *, int, int);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);

extern s32 tl_05;

void update_cane_effect__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;
    u8 *temp_r3;

    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii((void *) (tl_05), (void *) (arg0), (int) (3), (int) (2));
    }
    draw_icon__10TObjPlayerFPvii((void *) (arg0), (int) (0), (void *) (&sp8));
    if (is_mode_two_and_ready__10TObjPlayerFPv((void *) (arg0)) != 0) {
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xF0));
        create_ex__9TTecBartaFPvPvPvPv((int) (temp_r3), (void *) (temp_r3 + 0x38), (int) (M2C_FIELD(temp_r3, s32 *, 0x60)), (int) (3));
        return;
    }
    update_active_game_effect__10TObjPlayerFPv((void *) (arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F558
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_804A63F0__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A63F0[];

void *init_vtable_804A63F0__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A63F0;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F650
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_move_input__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
s32 get_player_list__10TObjPlayerFv();

void handle_move_input__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x204));
        return;
    case 2:
        TBoss7Tentacle__sub_803D9BA0(arg0 + 0x1F8);
        return;
    case 3:
        TObjContainerIdo__sub_803D96A8(0, -M2C_FIELD(arg0, s32 *, 0x204));
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F830
#include "types.h"

extern "C" {

void* init_position_state__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char lbl_804A64E8[];
    extern const float lbl_805DAFB8;
void* init_position_state__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A64E8; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(int*)((char*)a0 + 0x204) = 0; *(float*)((char*)a0 + 0x200) = lbl_805DAFB8; *(float*)((char*)a0 + 0x1fc) = lbl_805DAFB8; *(float*)((char*)a0 + 0x1f8) = lbl_805DAFB8; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F8E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cast_gizonde_chain__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_8011E618(void *);
u8 *TObjPlayer__sub_80121248(s32, s32);
s32 TObjPlayer__sub_8012125C();
s32 get_tp__10TObjPlayerFPv(void *);
M2C_UNK create__11TTecGiZondeFPvPvPvPv(int, void *, void *, void *);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, int, void *);
s32 get_extended_state__10TObjPlayerFPv(int);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);

void cast_gizonde_chain__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *var_r30;
    s32 var_r29;
    u8 *temp_r3_2;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        draw_icon__10TObjPlayerFPvii((void *) (arg0), (int) (0), (void *) (arg0 + 0x1F8));
        temp_r3 = get_extended_state__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)));
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x204) = TObjPlayer__sub_8012125C();
            var_r30 = arg0 + 0x208;
            var_r29 = 0;
            do {
                temp_r3_2 = TObjPlayer__sub_80121248(temp_r3, var_r29);
                if (temp_r3_2 != NULL) {
                    M2C_FIELD(var_r30, u16 *, 0) = (u16) M2C_FIELD(temp_r3_2, u16 *, 0);
                    M2C_FIELD(var_r30, s16 *, 2) = (s16) M2C_FIELD(temp_r3_2, s16 *, 2);
                    var_r30 += 8;
                }
                var_r29 += 1;
            } while (var_r29 != 0xA);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x204) != 0) {
                create__11TTecGiZondeFPvPvPvPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)), (void *) (arg0 + 0x1F8), (void *) (arg0 + 0x204), (void *) (get_tp__10TObjPlayerFPv((void *) (arg0))));
            }
            TObjPlayer__sub_8011E618((void *) (arg0));
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv((void *) (arg0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012F9BC
#include "types.h"

extern "C" {

void TObjPlayer__sub_8012F9BC(void* p);
int TObjPlayer__sub_8011E618(void*);

void TObjPlayer__sub_8012F9BC(void* p) { TObjPlayer__sub_8011E618(p); TObjPlayer__sub_8011E618(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012FA48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *initialize_effect_object__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8004433C(void *);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern M2C_UNK lbl_804A65E0[];

void *initialize_effect_object__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A65E0;
    TObjPlayer__sub_8004433C((void *)((char *)arg0 + 516));
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    set_effect_state__10TObjPlayerFPvi(arg0, 5);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012FCB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_with_id_547__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A66D8[];

void *init_with_id_547__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A66D8;
    set_status_flags__10TObjPlayerFPvUi(arg0, 547);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012FD50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_tentacle_state_2_dup__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8012FD8C(void *arg0);
int TBoss7Tentacle__sub_803D9BA0(void*);
s32 get_id__13TItemProArmorFPv(void *);
int get_player_list__10TObjPlayerFv(void*);
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK construct_timer_event__10TObjPlayerFPv(s32, u32, s32, M2C_UNK);

void handle_tentacle_state_2_dup__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

void TObjPlayer__sub_8012FD8C(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            construct_timer_event__10TObjPlayerFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012FE90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_position_vec__10TObjPlayerFi(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern const f32 lbl_805DAFDC;
extern const f32 lbl_805DAFE0;
extern const f32 lbl_805DAFE4;
extern const f32 lbl_805DAFE8;

void approach_position_vec__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DAFDC, lbl_805DAFE0);
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1FC, lbl_805DAFE4, lbl_805DAFE8);
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DAFDC, lbl_805DAFE0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012FF40
#include "types.h"

extern "C" {

void* init_fields__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804A67D0[];
    extern const float lbl_805DAFD0;
void* init_fields__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A67D0; *(float*)((char*)a0 + 0x200) = lbl_805DAFD0; *(float*)((char*)a0 + 0x1fc) = lbl_805DAFD0; *(float*)((char*)a0 + 0x1f8) = lbl_805DAFD0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8012FFE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_shield_effect__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
s32 get_player_list__10TObjPlayerFv();

void update_shield_effect__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;

    if (get_slot_count__14TItemProShieldFPv() == 5) {
        switch (get_player_list__10TObjPlayerFv()) {
        case 1:
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x1F8);
            TOMonitorMachine01__sub_803D8B5C(0, temp_f1, temp_f1, temp_f1);
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80130040
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80130040(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv(void *);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);

extern const f32 lbl_805DAFF0;
extern const f32 lbl_805DAFF4;

void TObjPlayer__sub_80130040(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 1) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    }
    if (get_slot_count__14TItemProShieldFPv(arg0) == 5) {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DAFF0, lbl_805DAFF4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80130290
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_textured_model__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_80130314(void *arg0);
void *init_shoot_model__10TObjPlayerFPv(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
s32 is_owner_alive__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(u32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);

void draw_textured_model__10TObjPlayerFPv(u8 *arg0) {
    if ((is_owner_alive__10TObjPlayerFPv() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
        TObjPlayer__sub_803D9B2C();
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, u32 *, 0x5C));
        TOHangerMachine01__sub_803D9C00(arg0 + 0x1C);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x2C));
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x28));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, u32 *, 0x58));
        TObjPlayer__sub_803D9B78();
    }
}

void TObjPlayer__sub_80130314(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 0xCCC);
}

extern M2C_UNK lbl_804A69C0[];

void *init_shoot_model__10TObjPlayerFPv(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A69C0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80130520
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_container_state_3__10TObjPlayerFPv(void* p);
void set_temp_flag10_and_update__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801305E8(void *arg0);
void tick_meseta_counter__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80130630(u8 *arg0);
int TObjContainerIdo__sub_803D96A8(void*, void*);
M2C_UNK TObjPlayer__sub_80115BFC(void *, s32);
M2C_UNK TObjPlayer__sub_8011E87C(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80120908(void *);
int get_player_list__10TObjPlayerFv(void*);

void handle_container_state_3__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 3) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

void set_temp_flag10_and_update__10TObjPlayerFPv(void *arg0) {
    s32 *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        temp_r31 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF4), void **, 0x2C), void **, 0x30), s32 **, 0x30);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x204) == 0) {
            *temp_r31 |= 0x10;
        }
        TObjPlayer__sub_80120908(arg0);
        TObjPlayer__sub_8011E87C(arg0, 0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x204) == 0) {
            *temp_r31 &= 0xFFFFFFEF;
        }
    }
}

void TObjPlayer__sub_801305E8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if (temp_r4 > 0xCCC) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (temp_r4 - 0xB6);
    }
}

void tick_meseta_counter__10TObjPlayerFPv(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 1);
    if (!(M2C_FIELD(arg0, s32 *, 0x200) & 3)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x1FC);
        if (temp_r4 < 0x3333) {
            M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (temp_r4 + 0xB6);
        }
    }
}

void TObjPlayer__sub_80130630(u8 *arg0) {
    TObjPlayer__sub_80115BFC(arg0 + 0x1F8, M2C_FIELD(arg0, s32 *, 0x1FC));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801306B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_state_35__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A69DC[];
extern M2C_UNK TObjPlayer__sub_80130368[];

void *init_state_35__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A69DC;
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = TObjPlayer__sub_80130368;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 3276;
    M2C_FIELD(arg0, u32 *, 0x200) = 0;
    M2C_FIELD(arg0, u32 *, 0x204) = 1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80130778
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_80130778(void *arg0, s16 arg1);
void TObjPlayer__sub_801307D0(void *arg0);
void TObjPlayer__sub_801307E4(void* p);
int draw_icon__10TObjPlayerFPvii(void*, void*, void*);
int TObjPlayer__sub_80120908(void*);
int TObjPlayer__sub_80120BBC(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);

extern M2C_UNK lbl_804A69C0[];

void *TObjPlayer__sub_80130778(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A69C0;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_801307D0(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x204) = 1;
    }
}

void TObjPlayer__sub_801307E4(void* p) { TObjPlayer__sub_80120908(p); draw_icon__10TObjPlayerFPvii(p, (void*)3, (char*)p + 0x208); draw_icon__10TObjPlayerFPvii(p, (void*)1, (char*)p + 0x220); TObjPlayer__sub_80120BBC(p, (void*)35); draw_icon__10TObjPlayerFPvii(p, (void*)3, (char*)p + 0x214); draw_icon__10TObjPlayerFPvii(p, (void*)1, (char*)p + 0x22c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013085C
#include "types.h"

extern "C" {

void TObjPlayer__sub_8013085C(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer__sub_8013085C(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1fc); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80130B1C
#include "types.h"

extern "C" {

void* init_photon_blast_fields__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char TObjPlayer__sub_80109440[];
    extern unsigned char lbl_804A6AD8[];
    extern const float lbl_805DB00C;
    extern const float lbl_805DB018;
void* init_photon_blast_fields__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6AD8; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)TObjPlayer__sub_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB018; set_status_flags__10TObjPlayerFPvUi(a0, (void*)515); *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB00C; *(float*)((char*)a0 + 0x200) = lbl_805DB00C; *(float*)((char*)a0 + 0x1fc) = lbl_805DB00C; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80130BF0
#include "types.h"

extern "C" {

void update_hanger_position__10TObjPlayerFPv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int get_player_list__10TObjPlayerFv(void*);

void update_hanger_position__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1f8); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80130DDC
#include "types.h"

extern "C" {

void* init_object_effect__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char TObjPlayer__sub_80109440[];
    extern unsigned char lbl_804A6BD0[];
    extern const float lbl_805DB024;
    extern const float lbl_805DB030;
void* init_object_effect__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6BD0; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)TObjPlayer__sub_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB030; *(float*)((char*)a0 + 0x200) = lbl_805DB024; *(float*)((char*)a0 + 0x1fc) = lbl_805DB024; *(float*)((char*)a0 + 0x1f8) = lbl_805DB024; *(int*)((char*)a0 + 0x204) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C721C
#include "types.h"

extern "C" {

void set_flag_2000000_alt__10TObjPlayerFPv(void* p);
void check_flag_04000000__10TObjPlayerFPv(void* p);
void set_flag_0x8000__10TObjPlayerFPv(void* p);
void check_flag_0x8000__10TObjPlayerFPv(void* p);
void* restore_shrunken_font__10TObjPlayerFPv(void* p);
void init_6x88_packet__10TObjPlayerFPv(void* p);
void send_font_update_60__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);
int bswap_32__FPUl(void*);
int check_flag__10TObjPlayerFPvi(void*, void*);

void set_flag_2000000_alt__10TObjPlayerFPv(void* p) { set_state_flags__10TObjPlayerFPvUi(p, (void*)2097152); }
void check_flag_04000000__10TObjPlayerFPv(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)4194304); }
void set_flag_0x8000__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8011E204(p, (void*)32768); }
void check_flag_0x8000__10TObjPlayerFPv(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)32768); }
void* restore_shrunken_font__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void init_6x88_packet__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 136; *(u8*)((char*)p + 0x1) = 1; }
void send_font_update_60__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C732C
#include "types.h"

extern "C" {

void init_6x88_packet__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int check_flag__10TObjPlayerFPvi(void*, void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void bswap_shrink__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C739C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_shrink_effect__10TObjPlayerFPv(void* a0);
void update_and_send_60__10TObjPlayerFPv(void* p);
u16 interpolate_angle__10TObjPlayerFPvUsUsPv(void *arg0, u16 arg1, u16 arg2, s32 *arg3);
int TLobby__send_and_handle_60(void*);
int bswap_shrink__10TObjPlayerFPv(void*);

    extern const float lbl_805DC320;
void init_shrink_effect__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x4) = lbl_805DC320; *(unsigned char*)((char*)a0 + 0x0) = 135; *(unsigned char*)((char*)a0 + 0x1) = 2; }

void update_and_send_60__10TObjPlayerFPv(void* p) { bswap_shrink__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

u16 interpolate_angle__10TObjPlayerFPvUsUsPv(void *arg0, u16 arg1, u16 arg2, s32 *arg3) {
    s16 temp_r0;
    s32 var_r3;

    temp_r0 = (s16) ((u16) arg2 - arg1);
    if ((temp_r0 > -0x3000) && (temp_r0 < 0x3000)) {
        var_r3 = (temp_r0 >> 4) - (temp_r0 >> 5);
    } else {
        var_r3 = temp_r0 >> 4;
    }
    *arg3 = var_r3;
    return (u16) (arg1 + var_r3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C7538
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801C7538 { char pad[8]; };
struct VObj_801C7538 : Base_801C7538 {
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
    virtual int m74();
};

extern "C" {

void update_state_group__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8001053C();
M2C_UNK TObjPlayer__sub_801D0D58(void *);
M2C_UNK TObjPlayer__sub_801D0D7C(void *);
M2C_UNK TObjPlayer__sub_801D0D8C(void *);
M2C_UNK clear_state_flag__10TObjPlayerFPv(void *);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, s32);

void update_state_group__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    TObjPlayer__sub_8001053C();
    clear_state_flag__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_801D0D8C(arg0);
    TObjPlayer__sub_801D0D7C(arg0);
    TObjPlayer__sub_801D0D58(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x380);
    set_field_dc__10TObjPlayerFPvi(arg0, ((VObj_801C7538 *)temp_r3)->m74());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C7630
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase8_801c7630 { char pad[8]; };
struct VObj8_801c7630 : VBase8_801c7630 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual int vf10C();
    virtual int vf110();
};

extern "C" {

void start_action_18__10TObjPlayerFPv(void *arg0);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK get_chair_state__10TObjPlayerFPv(void *, s32);
s32 start_action18_sub__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D0DF4(void *);
M2C_UNK TObjPlayer__sub_801D0E18(void *);
s32 get_action_flag__10TObjPlayerFPv(void *);
M2C_UNK forward_1D1044_at_34c__10TObjPlayerFPv(void *, s16);
s32 is_action_flag_28__10TObjPlayerFPv(void *);
M2C_UNK update_facing_from_lock__10TObjPlayerFPv(void *);

void start_action_18__10TObjPlayerFPv(void *arg0) {
    s16 var_r4;

    M2C_FIELD(arg0, s32 *, 0x33C) = 0x18;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (is_action_flag_28__10TObjPlayerFPv(arg0) != 0) {
        var_r4 = ((VObj8_801c7630 *) M2C_FIELD(arg0, void **, 0x380))->vf110();
    } else {
        var_r4 = ((VObj8_801c7630 *) M2C_FIELD(arg0, void **, 0x380))->vf10C();
    }
    forward_1D1044_at_34c__10TObjPlayerFPv(arg0, var_r4);
    if (get_action_flag__10TObjPlayerFPv(arg0) != 0) {
        update_facing_from_lock__10TObjPlayerFPv(arg0);
    }
    TObjPlayer__sub_801D0E18(arg0);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    get_chair_state__10TObjPlayerFPv(arg0, M2C_FIELD(arg0, s32 *, 0x60));
    TObjPlayer__sub_801D0DF4(arg0);
    set_action_state__10TObjPlayerFPvss(arg0, 0x18, start_action18_sub__10TObjPlayerFPv(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C77C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_state_sync__10TObjPlayerFPv(void *arg0);
s32 TKeyBoardControl__sub_801A58D8();
M2C_UNK TObjPlayer__sub_801D1284(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801D12D8(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801D12E8(M2C_UNK *);
s16 obj_getField1c(void *);
s32 obj_isState2_324();
M2C_UNK send_swapped_bytes__10TObjPlayerFPv(M2C_UNK *);

struct VBase_inner_801c77c8 { char pad[8]; };
struct VBase_380_801c77c8 : VBase_inner_801c77c8 { virtual s32 m0(); virtual s32 m1(); virtual s32 m2(); virtual s32 m3(); virtual s32 m4(); virtual s32 m5(); virtual s32 m6(); virtual s32 m7(); virtual s32 m8(); virtual s32 m9(); virtual s32 m10(); virtual s32 m11(); virtual s32 m12(); virtual s32 m13(); virtual s32 m14(); virtual s32 m15(); virtual s32 m16(); virtual s32 m17(); virtual s32 m18(); virtual s32 m19(); virtual s32 m20(); virtual s32 m21(); virtual s32 m22(); virtual s32 m23(); virtual s32 m24(); virtual s32 m25(); virtual s32 m26(); virtual s32 m27(); virtual s32 m28(); virtual s32 m29(); virtual s32 m30(); virtual s32 m31(); virtual s32 m32(); virtual s32 m33(); virtual s32 m34(); virtual s32 m35(); virtual s32 m36(); virtual s32 m37(); virtual s32 m38(); virtual s32 m39(); virtual s32 m40(); virtual s32 m41(); virtual s32 m42(); virtual s32 m43(); virtual s32 m44(); virtual s32 m45(); virtual s32 m46(); virtual s32 m47(); virtual s32 m48(); virtual s32 m49(); virtual s32 m50(); virtual s32 m51(); virtual s32 m52(); virtual s32 m53(); virtual s32 m54(); virtual s32 m55(); virtual s32 m56(); virtual s32 m57(); virtual s32 m58(); virtual s32 m59(); virtual s32 m60(); virtual s32 m61(); virtual s32 m62(); virtual s32 m63(); virtual s32 m64(); virtual s32 m65(); virtual s32 m66(); };

void send_state_sync__10TObjPlayerFPv(void *arg0) {
    s32 sp8[2];
    void *temp_r3;
    s32 temp_r12;

    if (arg0 == NULL || obj_isState2_324() == 0) {
        TObjPlayer__sub_801D1284(sp8);
        *(s16 *)((s8 *)sp8 + 2) = obj_getField1c(arg0);
        temp_r3 = M2C_FIELD(arg0, void **, 0x380);
        temp_r12 = ((VBase_380_801c77c8*)temp_r3)->m66();
        if ((s16) M2C_FIELD(arg0, s16 *, 0x3C0) == temp_r12) {
            TObjPlayer__sub_801D12E8(sp8);
        }
        if (TKeyBoardControl__sub_801A58D8() != 0) {
            TObjPlayer__sub_801D12D8(sp8);
        }
        send_swapped_bytes__10TObjPlayerFPv(sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C7858
#include "types.h"

extern "C" {

void TObjPlayer__sub_801C7858(void);

void TObjPlayer__sub_801C7858(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C7A4C
#include "types.h"

extern "C" {

int try_change_action__10TObjPlayerFPv(void* p);
int try_change_action__10TObjPlayerFi(void*);

int try_change_action__10TObjPlayerFPv(void* p) { return try_change_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C841C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801C841C { char pad[0x8]; };
struct VObj_801C841C : Base_801C841C {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)VV(62)VV(63)VV(64)VV(65)VV(66)VV(67)VV(68)VV(69)VV(70)
VV(71)VV(72)VV(73)
#undef VV
    virtual s32 v76();
};

extern "C" {

void update_dispatch_v76__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801C8478(void);
void do_action__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8001053C();
s32 TObjPlayer__sub_801D0BC0(void * a0 = 0, s16 a1 = 0, s32 a2 = 0);
M2C_UNK TObjPlayer__sub_801D0D8C(void *);
s32 get_action_flag__10TObjPlayerFPv(void * a0 = 0);
M2C_UNK TObjPlayer__sub_801D0E84(void *);
s32 get_flag__10TObjPlayerFPv(void * a0 = 0);
s32 TObjPlayer__sub_801D2618(void * a0 = 0, f32 a1 = 0);
s32 set_action_flag_40__10TObjPlayerFPv(void * a0 = 0);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, s32);
s32 set_action_state__10TObjPlayerFPvss(void * a0 = 0, s32 a1 = 0, s16 a2 = 0);
s32 update_facing_from_lock__10TObjPlayerFPv(void * a0 = 0);

void update_dispatch_v76__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    TObjPlayer__sub_8001053C();
    TObjPlayer__sub_801D0D8C(arg0);
    TObjPlayer__sub_801D0E84(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x380);
    set_field_dc__10TObjPlayerFPvi(arg0, ((VObj_801C841C *)temp_r3)->v76());
}

s16 ret_801D26AC(void);
s32 obj_isState2_324(void * a0 = 0);

void TObjPlayer__sub_801C8478(void) {  }
void do_action__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x17;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (get_action_flag__10TObjPlayerFPv(arg0) != 0) {
        update_facing_from_lock__10TObjPlayerFPv(arg0);
    }
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ret_801D26AC();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0x17, M2C_FIELD(arg0, s16 *, 0x3C0));
    if (get_flag__10TObjPlayerFPv(arg0) != 0) {
        set_action_flag_40__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801D2618(arg0, M2C_FIELD(arg0, f32 *, 0x3C4));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C862C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_position_from_target__10TObjPlayerFPv(void *);
s32 get_flag__10TObjPlayerFPv();
void TObjPlayer__sub_801C862C(void);
void TObjPlayer__sub_801C8678(void);
int try_change_action_wrapper__10TObjPlayerFPv(void* p);
int try_change_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801C862C(void) {  }
void update_if_flagged__10TObjPlayerFPv(void *arg0) {
    if ((get_flag__10TObjPlayerFPv() == 0) && (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10)) {
        update_position_from_target__10TObjPlayerFPv(arg0);
    }
}
void TObjPlayer__sub_801C8678(void) {  }
int try_change_action_wrapper__10TObjPlayerFPv(void* p) { return try_change_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C8790
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
extern "C" {
M2C_UNK reset_lobby_model__10TObjPlayerFPv(void *);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, int, int);
M2C_UNK set_flag_20000__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801BF690(void *);
M2C_UNK TObjPlayer__sub_801BF964(void *);
s16 ret_801D26AC();
void draw_and_send_field1c__10TObjPlayerFi(s32 arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK set_cmd_87__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK draw_and_send__10TObjPlayerFPv(M2C_UNK *);
int TObjPlayer__sub_8011E204(void*, void*);
int set_indexed_flags(void*, void*, void*);
int TObjPlayer__sub_801B12CC(void*);
int TObjPlayer__sub_801BE9A8(void*);
int TObjPlayer__sub_801C5B18(void*);
int TObjPlayer__sub_801C8770(void* p);
int TObjPlayer__sub_801B130C(void*);

void TObjPlayer__sub_801C8790(u8 *arg0) {
    TObjPlayer__sub_801BF690((void *) (arg0 + 0x730));
    TObjPlayer__sub_801BF964((void *) (arg0 + 0x5FC));
    reset_lobby_model__10TObjPlayerFPv((void *) (arg0 + 0x644));
    set_state_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (4));
    TObjPlayer__sub_801B130C((void *) (arg0));
    set_flag_20000__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (0x16), (int) (ret_801D26AC()));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C8A20
#include "types.h"

extern "C" {

void TObjPlayer__sub_801C8A20(void);
void TObjPlayer__sub_801C8A24(void);

void TObjPlayer__sub_801C8A20(void) {  }
void TObjPlayer__sub_801C8A24(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C8AA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Base_A { char pad[0x18]; };
struct V_A : public Base_A {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m15();
};

extern "C" {

void start_action_21__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_80019248(void *);
M2C_UNK TObjPlayer__sub_801B0FF4(void *);
s32 TObjPlayer__sub_801D0458(void *);
M2C_UNK TObjPlayer__sub_801D04B4(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);

extern const f32 TObjPlayer__data_805DC36C;

void start_action_21__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x15;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_801D04B4(arg0);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    M2C_FIELD(arg0, f32 *, 0x624) = (f32) TObjPlayer__data_805DC36C;
    TObjPlayer__sub_801B0FF4(arg0);
    ((V_A *) arg0)->m15();
    if (TObjPlayer__sub_80019248(arg0) != 0) {
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x40003206);
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 1;
    set_action_state__10TObjPlayerFPvss(arg0, 0x15, TObjPlayer__sub_801D0458(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C8D4C
#include "types.h"

extern "C" {

void init_flags_vec4__10TObjPlayerFPv(void* p);
int set_vec4_const__10TObjPlayerFPv(void*);

int set_indexed_flags(void*, void*, void*);

void init_flags_vec4__10TObjPlayerFPv(void* p) { set_indexed_flags(p, (void*)0, (void*)1); set_vec4_const__10TObjPlayerFPv((char*)p + 0x608); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C8F48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_dead_state__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_801D0458(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK TObjPlayer__sub_8001053C(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);

void set_dead_state__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x14;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_8001053C(arg0);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x40003205);
    set_action_state__10TObjPlayerFPvss(arg0, 0x14, TObjPlayer__sub_801D0458(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C90F8
#include "types.h"

extern "C" {

int update_position_from_target__10TObjPlayerFPv(void*);
void check_state_dead__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C90F8(void);
void TObjPlayer__sub_801C9128(void);
void TObjPlayer__sub_801C912C(void);

void TObjPlayer__sub_801C90F8(void) {  }
void check_state_dead__10TObjPlayerFPv(void* p) { if (*(short*)((char*)p + 0x328) == 4) { update_position_from_target__10TObjPlayerFPv(p); } }
void TObjPlayer__sub_801C9128(void) {  }
void TObjPlayer__sub_801C912C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C91AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_lobby_state__10TObjPlayerFPv(u8 *arg0);
void try_use_mag__10TObjPlayerFPv(u8 *arg0);
s32 is_active__8TItemMagFPv();
s32 TObjPlayer__sub_80019248(void *);
M2C_UNK TObjPlayer__sub_800194AC(void *, M2C_UNK, s32);
M2C_UNK clear_status_bit6__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8001053C(void *);
M2C_UNK reset_lobby_model__10TObjPlayerFPv(void *);
s32 check_input_angle__16TKeyBoardControlFPv(void *);

M2C_UNK obj_clearFlags30(void *, M2C_UNK);

void reset_lobby_state__10TObjPlayerFPv(u8 *arg0) {
    clear_status_bit6__10TObjPlayerFPv();
    TObjPlayer__sub_8001053C(arg0);
    obj_clearFlags30(arg0, 0x20);
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 1) && (TObjPlayer__sub_80019248(arg0) != 0)) {
        reset_lobby_model__10TObjPlayerFPv(arg0 + 0x644);
    }
}

void try_use_mag__10TObjPlayerFPv(u8 *arg0) {
    if ((is_active__8TItemMagFPv() == 0) && (TObjPlayer__sub_80019248(arg0) != 0) && (check_input_angle__16TKeyBoardControlFPv(arg0 + 0x64C) != 0)) {
        TObjPlayer__sub_800194AC(arg0, 1, M2C_FIELD(arg0, s32 *, 0x3D4));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C96C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_velocity_if_free__10TObjPlayerFPv(void *arg0);
void clear_flag__10TObjPlayerFPv(void* p);
s32 try_change_action__10TObjPlayerFi(s32 arg0);
int TObjPlayer__sub_8001053C(void*);
void *TObjPlayer__sub_801B5EA4(void *);
M2C_UNK set_action_id__10TObjPlayerFPvs(s32, M2C_UNK);
s16 get_action_id__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_801D0BC0(s32, s16, M2C_UNK);
void apply_velocity__10TObjPlayerFPv(void *);
s32 is_status_locked__10TObjPlayerFPv();
int obj_clearFlags30(void*, void*);

s32 try_change_action__10TObjPlayerFi(s32 arg0) {
    if (is_status_locked__10TObjPlayerFPv() != 0) {
        if (get_action_id__10TObjPlayerFPv(arg0 + 0x5F0) == 0x10) {
            TObjPlayer__sub_801D0BC0(arg0, 0x10, 5);
        } else {
            obj_clearFlags30((void*)(arg0), (void*)(0x10000));
            TObjPlayer__sub_801D0BC0(arg0, get_action_id__10TObjPlayerFPv(arg0 + 0x5F0), 5);
            set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
        }
        return 1;
    }
    return 0;
}

void clear_flag__10TObjPlayerFPv(void* p) { obj_clearFlags30((void*)(p), (void*)((void*)65536)); TObjPlayer__sub_8001053C(p); }

void apply_velocity_if_free__10TObjPlayerFPv(void *arg0) {
    void *x;
    x = TObjPlayer__sub_801B5EA4(arg0);
    if (x == NULL) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C999C
#include "types.h"

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi(s32);
s32 is_status_flag_200__10TObjPlayerFPv();
s32 TObjPlayer__sub_801CB874(s32);
s32 TObjPlayer__sub_801D0BC0(s32, s32, s32);
void TObjPlayer__sub_801C999C(void);
void TObjPlayer__sub_801C9A14(void);

void TObjPlayer__sub_801C999C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C9A14
#include "types.h"

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi(s32);
s32 is_status_flag_200__10TObjPlayerFPv();
s32 TObjPlayer__sub_801CB874(s32);
s32 TObjPlayer__sub_801D0BC0(s32, s32, s32);
void TObjPlayer__sub_801C999C(void);
void TObjPlayer__sub_801C9A14(void);

void TObjPlayer__sub_801C9A14(void) {  }
void set_motion__10TObjPlayerFi(s32 arg0) {
    if (is_status_flag_200__10TObjPlayerFPv() != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            TObjPlayer__sub_801D0BC0(arg0, 0xE, 5);
            return;
        }
        TObjPlayer__sub_801D0BC0(arg0, 0xD, 5);
        return;
    }
    if (TObjPlayer__sub_801CB874(arg0) != 0) {
        TObjPlayer__sub_801D0BC0(arg0, 0xA, 5);
        return;
    }
    if (check_flag30_bit20__10TObjPlayerFi(arg0) != 0) {
        TObjPlayer__sub_801D0BC0(arg0, 0x13, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C9B48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_lobby__10TObjPlayerFi(s32 arg0);
void ensure_default__10TObjPlayerFPv(void *arg0);
void init_action__10TObjPlayerFPv(u8 *arg0);
void *TObjPlayer__sub_801B5EA4(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK clear_status_bit6__10TObjPlayerFPv();
M2C_UNK TTecReverser__sub_80239E44(void *, void *, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TObjPlayer__sub_8000FF4C(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8001053C(void *);
void apply_velocity__10TObjPlayerFPv(void *);
M2C_UNK set_type__10TObjPlayerFPvi(void *, M2C_UNK);
M2C_UNK fn_800660B8(void *);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s16);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK TLobby__sub_8024AC20(int);
M2C_UNK queue_destruction__7TObjectFv(void *);

u16 obj_getField1c(s32);

void notify_lobby__10TObjPlayerFi(s32 arg0) {
    clear_status_bit6__10TObjPlayerFPv();
    TLobby__sub_8024AC20(obj_getField1c(arg0));
}

void ensure_default__10TObjPlayerFPv(void *arg0) {
    void *x;
    x = TObjPlayer__sub_801B5EA4(arg0);
    if (x == NULL) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

s32 ret_801D26AC();
extern s32 tl_07;
extern const f32 lbl_805DC374;

void init_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x12;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_8001053C(arg0);
    set_type__10TObjPlayerFPvi(arg0 + 0x644, 0x12C);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) lbl_805DC374;
    TObjPlayer__sub_8000FF4C(arg0, 0xFFFF);
    set_action_state__10TObjPlayerFPvss(arg0, 0x12, (s16) ret_801D26AC());
    fn_800660B8(arg0);
    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        void *new_obj = (void *)(size_t)__nw__7TObjectFUl(0x38);
        if (new_obj != 0U) {
            TTecReverser__sub_80239E44(new_obj, arg0, tl_07);
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x548) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x548));
        M2C_FIELD(arg0, u32 *, 0x548) = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C9D0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_6x4F_revived__10TObjPlayerFi(s32 arg0);
void update_lobby_display__10TObjPlayerFUi(u32 arg0);
void update_timer_state__10TObjPlayerFPv(void *arg0);
void update_timer_action__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK init__14TObjEnePanarmsFPvPv(void *, s32);
M2C_UNK TObjPlayer__sub_801AF7E0(u32);
s32 TObjPlayer__sub_801D0458();
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_revived_state__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK broadcast_lobby_display__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK set_action_flag_40__10TObjPlayerFPv(void *);
M2C_UNK clear_status_bit6__10TObjPlayerFPv();
s32 TObjPlayer__sub_8001BEF8(s32, M2C_UNK);
M2C_UNK set_type__10TObjPlayerFPvi(void *, s32);
M2C_UNK TObjPlayer__sub_801B4430(u32);
s32 TObjPlayer__sub_801D8ADC(void *);
s32 is_alive_and_ready__10TObjPlayerFi(u32);
M2C_UNK send_code_49_1__10TObjPlayerFi(u32);
M2C_UNK update_if_ready__15TFontSmallLobbyFPv(s32);

s32 handle_6x4F_revived__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

s32 obj_isState2_324(u32);
s16 obj_getField1c(u32);

struct Local801C9D3C {
    s16 field0;
    s16 fieldA;
};

void update_lobby_display__10TObjPlayerFUi(u32 arg0) {
    struct Local801C9D3C sp8;

    if (TObjPlayer__sub_8001BEF8(arg0 + 0x858, 4) != 0) {
        send_code_49_1__10TObjPlayerFi(arg0);
        if (is_alive_and_ready__10TObjPlayerFi(arg0) != 0) {
            TObjPlayer__sub_801AF7E0(arg0);
        }
    } else {
        TObjPlayer__sub_801B4430(arg0);
    }
    update_if_ready__15TFontSmallLobbyFPv(arg0 + 0x4AC);
    if ((arg0 == 0U) || (obj_isState2_324(arg0) == 0)) {
        set_revived_state__10TObjPlayerFPv((M2C_UNK *)&sp8);
        sp8.fieldA = obj_getField1c(arg0);
        broadcast_lobby_display__10TObjPlayerFPv((M2C_UNK *)&sp8);
    }
}

extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 TObjPlayer__data_805DC378;

void update_timer_state__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            init__14TObjEnePanarmsFPvPv(arg0, TObjPlayer__sub_801D0458());
            set_action_flag_40__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) TObjPlayer__data_805DC378;
        }
        break;
    case 1:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1_2;
        if (temp_f1_2 < TObjPlayer__data_805DC36C) {
            clear_status_bit6__10TObjPlayerFPv();
            TObjPlayer__sub_801D0BC0(arg0, 1, 0);
        }
        break;
    }
}

extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 TObjPlayer__data_805DC378;

void update_timer_action__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            init__14TObjEnePanarmsFPvPv(arg0, TObjPlayer__sub_801D0458());
            set_action_flag_40__10TObjPlayerFPv(arg0);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) TObjPlayer__data_805DC378;
        }
        break;
    case 1:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1_2;
        if (temp_f1_2 < TObjPlayer__data_805DC36C) {
            clear_status_bit6__10TObjPlayerFPv();
            set_type__10TObjPlayerFPvi(arg0 + 0x644, TObjPlayer__sub_801D8ADC(arg0));
            update_position_from_target__10TObjPlayerFPv(arg0);
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C9F64
#include "types.h"

extern "C" {

void TObjPlayer__sub_801C9F64(void);
void TObjPlayer__sub_801C9F68(void);

void TObjPlayer__sub_801C9F64(void) {  }
void TObjPlayer__sub_801C9F68(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CA054
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_subobject__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_801BF964(s32);
M2C_UNK set_pos_z__10TObjPlayerFPvf(s32, f32);
M2C_UNK update_action_render__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_801D0BC0(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801C58CC(s32, s32);

extern f32 TObjPlayer__data_805DC360;

void init_subobject__10TObjPlayerFi(s32 arg0) {
    if (arg0 != 0) {
        TObjPlayer__sub_801D0BC0(arg0, 0xF, 0);
        update_action_render__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801BF964(arg0 + 0x5FC);
        TObjPlayer__sub_801C58CC(arg0 + 0x5FC, arg0);
        set_pos_z__10TObjPlayerFPvf(arg0 + 0x5FC, TObjPlayer__data_805DC360);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CA10C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_active_state__10TObjPlayerFPv(u8 *arg0);
s16 get_action_animation__10TObjPlayerFPv(void *);
M2C_UNK set_pos_z__10TObjPlayerFPvf(void *, f32);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E204(void *, M2C_UNK);
s32 TObjPlayer__sub_801AFF0C();
M2C_UNK revive_or_spawn_marker__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801CA35C(void *);

s32 obj_testFlags30(void *, M2C_UNK);
extern const f32 TObjPlayer__data_805DC360;

void update_active_state__10TObjPlayerFPv(u8 *arg0) {
    if (TObjPlayer__sub_801AFF0C() != 0) {
        TObjPlayer__sub_8011E204(arg0, 4);
        if (obj_testFlags30(arg0, 0x800) == 0) {
            TObjPlayer__sub_801D0BC0(arg0, 1, 0);
            return;
        }
        TObjPlayer__sub_801D0BC0(arg0, 0xF, 0);
        if (TObjPlayer__sub_8001BEF8(arg0 + 0x858, 1) != 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = get_action_animation__10TObjPlayerFPv(arg0);
        } else {
            TObjPlayer__sub_801CA35C(arg0);
        }
        set_pos_z__10TObjPlayerFPvf(arg0 + 0x5FC, TObjPlayer__data_805DC360);
        revive_or_spawn_marker__10TObjPlayerFi(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CA244
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_revivable__10TObjPlayerFi(s32 arg0);
void update_lobby_font__10TObjPlayerFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK init_revive_packet__10TObjPlayerFPv(void *);
M2C_UNK bswap_font_lobby2__10TObjPlayerFPv(void *);

s32 handle_revivable__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

s32 obj_isState2_324();
s16 obj_getField1c(s32);

struct S801CA274 { s8 b[2]; s16 h; };
void update_lobby_font__10TObjPlayerFi(s32 arg0) {
    struct S801CA274 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        init_revive_packet__10TObjPlayerFPv(&sp8);
        sp8.h = obj_getField1c(arg0);
        bswap_font_lobby2__10TObjPlayerFPv(&sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CA2C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_render__10TObjPlayerFPv(u8 *arg0);
s32 TObjPlayer__sub_8001BEF8(void *, int);
s16 get_action_animation__10TObjPlayerFPv(void *);
M2C_UNK set_action_flag_40__10TObjPlayerFPv(void *);
M2C_UNK draw__10TObjPlayerFPvf(void *, f32);
s16 get_model_field_m25__10TObjPlayerFPv(void *);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);

extern const f32 TObjPlayer__data_805DC360;

void update_action_render__10TObjPlayerFPv(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0x858), (int) (1)) != 0) {
        M2C_FIELD(arg0, s16 *, 0xB8) = get_action_animation__10TObjPlayerFPv((void *) (arg0));
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = get_model_field_m25__10TObjPlayerFPv((void *) (arg0));
    }
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) - TObjPlayer__data_805DC360);
    draw__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    set_action_flag_40__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFDF);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CA440
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801CA440(u8 *arg0);
M2C_UNK TObjPlayer__sub_801BF964(void *, s32);
M2C_UNK clear_status_bit6__10TObjPlayerFPv(void *);

void TObjPlayer__sub_801CA440(u8 *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x36C) = 0;
    TObjPlayer__sub_801BF964(arg0 + 0x5FC, temp_r4);
    clear_status_bit6__10TObjPlayerFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CA48C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801CA48C(u8 *arg0);
s32 TBoss1Dragon__sub_80143960(void *, M2C_UNK);
u32 TObjPlayer__sub_801B5EA4(void *);
M2C_UNK TObjPlayer__sub_801C5954(void *);
M2C_UNK TObjPlayer__sub_801CA35C(void *);
M2C_UNK TObjPlayer__sub_801D2834(void *, f32);
M2C_UNK apply_velocity__10TObjPlayerFPv(void *);

extern const f32 lbl_805DC37C;

void TObjPlayer__sub_801CA48C(u8 *arg0) {
    if ((TBoss1Dragon__sub_80143960(arg0, 0x20) != 0) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA))) {
        TObjPlayer__sub_801CA35C(arg0);
    }
    TObjPlayer__sub_801D2834(arg0 + 0x5FC, lbl_805DC37C);
    TObjPlayer__sub_801C5954(arg0 + 0x5FC);
    if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CAA58
#include "types.h"

extern "C" {

void TObjPlayer__sub_801CAA58(void);

void TObjPlayer__sub_801CAA58(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CAAD8
#include "types.h"

extern "C" {

int TObjPlayer__sub_801CAAD8(void* p);
int TObjPlayer__sub_8001053C(void*);

int TObjPlayer__sub_801CAAD8(void* p) { return TObjPlayer__sub_8001053C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CAC08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_action_0e__10TObjPlayerFPv(u8 *arg0);
M2C_UNK set_type__10TObjPlayerFPvi(void *, M2C_UNK);
s32 get_action_animation__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 obj_isState2_324(void *);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK trigger_switch_attack__10TObjPlayerFPvi(void *, s32);

struct VBase_801cac08 {
    char pad[0x18];
};
struct VObj_801cac08 : VBase_801cac08 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};
M2C_UNK VObj_801cac08::m0() { return 0; }
M2C_UNK VObj_801cac08::m1() { return 0; }
M2C_UNK VObj_801cac08::m2() { return 0; }
M2C_UNK VObj_801cac08::m3() { return 0; }
M2C_UNK VObj_801cac08::m4() { return 0; }
M2C_UNK VObj_801cac08::m5() { return 0; }
M2C_UNK VObj_801cac08::m6() { return 0; }
M2C_UNK VObj_801cac08::m7() { return 0; }

void start_action_0e__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xE;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    VecCopy__FP3VecPC3Vec(arg0 + 0x308, &sp8);
    set_type__10TObjPlayerFPvi(arg0 + 0x644, 0x12C);
    obj_clearFlags30(arg0, 0x10000);
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x4000AD13);
    if (obj_isState2_324(arg0) != 0) {
        trigger_switch_attack__10TObjPlayerFPvi(arg0, ((VObj_801cac08 *)arg0)->m7());
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    set_action_state__10TObjPlayerFPvss(arg0, 0xE, get_action_animation__10TObjPlayerFPv(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CAEAC
#include "types.h"

extern "C" {

int check_flag30_bit20__10TObjPlayerFi(void*);
int TObjPlayer__sub_801D0BC0(void*, void*, void*);
void check_and_trigger_19_5__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801CAEAC(void);
void TObjPlayer__sub_801CAF6C(void);

void TObjPlayer__sub_801CAEAC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CAF6C
#include "types.h"

extern "C" {

int check_flag30_bit20__10TObjPlayerFi(void*);
int TObjPlayer__sub_801D0BC0(void*, void*, void*);
void check_and_trigger_19_5__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801CAEAC(void);
void TObjPlayer__sub_801CAF6C(void);

void TObjPlayer__sub_801CAF6C(void) {  }
void check_and_trigger_19_5__10TObjPlayerFPv(void* p) { if (check_flag30_bit20__10TObjPlayerFi(p) != 0) { TObjPlayer__sub_801D0BC0(p, (void*)19, (void*)5); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CB030
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_100000__10TObjPlayerFPv(void* p);
void end_freeze_action__10TObjPlayerFPv(u8 *arg0);
void update_move_state__10TObjPlayerFi(s32 arg0);
int TObjPlayer__sub_8001053C(void*);
M2C_UNK set_type__10TObjPlayerFPvi(void *, s32);
s32 TObjPlayer__sub_801B5DDC(s32);
u32 TObjPlayer__sub_801B5EA4(s32);
M2C_UNK TObjPlayer__sub_801B5FB0();
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
s32 TObjPlayer__sub_801D8B8C(void *);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK apply_velocity__10TObjPlayerFPv(s32);
s32 call_model_m24__10TObjPlayerFPv(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 obj_isState2_324(void *);
int obj_setFlags30(void*, void*);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK trigger_switch_attack__10TObjPlayerFPvi(void *, s32);

void set_flag_100000__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001053C((void*)(p)); obj_setFlags30(p, (void*)1048576); }

void update_move_state__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801B5FB0();
    if (TObjPlayer__sub_801B5DDC(arg0) != 0) {
        TObjPlayer__sub_8001053C((void*)(arg0));
    }
    if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

struct Base_801cb0c4 { char pad[0x18]; };
struct VObj_801cb0c4 : Base_801cb0c4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

void end_freeze_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xD;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    VecCopy__FP3VecPC3Vec(arg0 + 0x308, &sp8);
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        set_type__10TObjPlayerFPvi(arg0 + 0x644, 0x1E);
    } else {
        set_type__10TObjPlayerFPvi(arg0 + 0x644, TObjPlayer__sub_801D8B8C(arg0));
    }
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x4000AD12);
    if (obj_isState2_324(arg0) != 0) {
        trigger_switch_attack__10TObjPlayerFPvi(arg0, ((VObj_801cb0c4 *)arg0)->m7());
    }
    obj_clearFlags30(arg0, 0x10000);
    set_action_state__10TObjPlayerFPvss(arg0, 0xD, call_model_m24__10TObjPlayerFPv(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CB2F0
#include "types.h"

extern "C" {

int check_flag30_bit20__10TObjPlayerFi(void*);
int TObjPlayer__sub_801D0BC0(void*, void*, void*);
void do_action_19_5_if_flag30__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801CB2F0(void);
void TObjPlayer__sub_801CB360(void);

void TObjPlayer__sub_801CB2F0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CB360
#include "types.h"

extern "C" {

int check_flag30_bit20__10TObjPlayerFi(void*);
int TObjPlayer__sub_801D0BC0(void*, void*, void*);
void do_action_19_5_if_flag30__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801CB2F0(void);
void TObjPlayer__sub_801CB360(void);

void TObjPlayer__sub_801CB360(void) {  }
void do_action_19_5_if_flag30__10TObjPlayerFPv(void* p) { if (check_flag30_bit20__10TObjPlayerFi(p) != 0) { TObjPlayer__sub_801D0BC0(p, (void*)19, (void*)5); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CB424
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 ret_801D26AC(void);
s32 TObjPlayer__sub_801D0BC0(void * a0 = 0, s16 a1 = 0, s32 a2 = 0);
s32 call_obj_vt26__10TObjPlayerFPv(void * a0 = 0);
s32 set_action_state__10TObjPlayerFPvss(void * a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_isState2_324(void * a0 = 0);
s32 apply_velocity__10TObjPlayerFPv(s32);
u32 TObjPlayer__sub_801B5EA4();
s32 update_position_from_target__10TObjPlayerFPv();
void TObjPlayer__sub_801CB424(void);
void TObjPlayer__sub_801CB52C(void);
void TObjPlayer__sub_801CB55C(void);
int try_apply_status_action__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CB424(void) {  }
void TObjPlayer__sub_801CB428(s32 arg0) {
    if (TObjPlayer__sub_801B5EA4() == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}
void begin_action_0xB__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xB;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ret_801D26AC();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0xB, call_obj_vt26__10TObjPlayerFPv(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CB52C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 ret_801D26AC(void);
s32 TObjPlayer__sub_801D0BC0(void * a0 = 0, s16 a1 = 0, s32 a2 = 0);
s32 call_obj_vt26__10TObjPlayerFPv(void * a0 = 0);
s32 set_action_state__10TObjPlayerFPvss(void * a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_isState2_324(void * a0 = 0);
s32 apply_velocity__10TObjPlayerFPv(s32);
u32 TObjPlayer__sub_801B5EA4();
s32 update_position_from_target__10TObjPlayerFPv();
void TObjPlayer__sub_801CB424(void);
void TObjPlayer__sub_801CB52C(void);
void TObjPlayer__sub_801CB55C(void);
int try_apply_status_action__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CB52C(void) {  }
void run_if_flag_10__10TObjPlayerFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        update_position_from_target__10TObjPlayerFPv();
    }
}
void TObjPlayer__sub_801CB55C(void) {  }
int try_apply_status_action__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CB5FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801CB5FC(void);
void apply_velocity_if_ready__10TObjPlayerFi(s32 arg0);
void start_action_c__10TObjPlayerFPv(void *arg0);
u32 TObjPlayer__sub_801B5EA4();
s32 set_action_state__10TObjPlayerFPvss(void * a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 get_weapon_stat_c__10TObjPlayerFPv(void * a0 = 0);
s32 TObjPlayer__sub_801D0BC0(void * a0 = 0, s16 a1 = 0, s32 a2 = 0);
s32 apply_velocity__10TObjPlayerFPv(s32);
s32 obj_isState2_324(void * a0 = 0);
s16 ret_801D26AC(void);

void TObjPlayer__sub_801CB5FC(void) {  }
void apply_velocity_if_ready__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_801B5EA4() == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}
void start_action_c__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xC;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ret_801D26AC();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0xC, get_weapon_stat_c__10TObjPlayerFPv(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CB7A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_position_from_target__10TObjPlayerFPv();
void TObjPlayer__sub_801CB7A4(void);
void TObjPlayer__sub_801CB7D4(void);
int TObjPlayer__sub_801CB7D8(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CB7A4(void) {  }
void update_if_flag_set__10TObjPlayerFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        update_position_from_target__10TObjPlayerFPv();
    }
}
void TObjPlayer__sub_801CB7D4(void) {  }
int TObjPlayer__sub_801CB7D8(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CB8CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_0x100000__10TObjPlayerFPv(void* p);
void apply_velocity_if_free__10TObjPlayerFi(s32 arg0);
void start_use_item_action__10TObjPlayerFPv(u8 *arg0);
int TObjPlayer__sub_8001053C(void*);
u32 TObjPlayer__sub_801B5EA4(s32);
M2C_UNK TObjPlayer__sub_801B5FB0();
M2C_UNK use_current_item__10TObjPlayerFPv(void *);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK apply_velocity__10TObjPlayerFPv(s32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 obj_isState2_324(void *);
int obj_setFlags30(void*, void*);
s32 query_child_state__10TObjPlayerFPv(void *);
s16 ret_801D26AC();

void set_flag_0x100000__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001053C(p); obj_setFlags30(p, (void*)1048576); }

void apply_velocity_if_free__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801B5FB0();
    if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

void start_use_item_action__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xA;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    VecCopy__FP3VecPC3Vec(arg0 + 0x308, &sp8);
    obj_clearFlags30(arg0, 0x10000);
    use_current_item__10TObjPlayerFPv(arg0);
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ret_801D26AC();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0xA, query_child_state__10TObjPlayerFPv(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CBA8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi();
s32 is_status_flag_200__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801D0BC0(s32, s32, s32);
void send_object_id_packet__10TObjPlayerFi(s32 arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK init_shield_attack_packet__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK draw_font_and_send__10TObjPlayerFPv(M2C_UNK *);
int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801CBB10(void);
void TObjPlayer__sub_801CBB80(void);

void* shield_attack__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void send_object_id_packet__10TObjPlayerFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        init_shield_attack_packet__10TObjPlayerFPv((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        draw_font_and_send__10TObjPlayerFPv((M2C_UNK *)&sp8);
    }
}
void TObjPlayer__sub_801CBB10(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CBB80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi();
s32 is_status_flag_200__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801D0BC0(s32, s32, s32);
void send_object_id_packet__10TObjPlayerFi(s32 arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK init_shield_attack_packet__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK draw_font_and_send__10TObjPlayerFPv(M2C_UNK *);
int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801CBB10(void);
void TObjPlayer__sub_801CBB80(void);

void TObjPlayer__sub_801CBB80(void) {  }
void select_hit_action__10TObjPlayerFi(s32 arg0) {
    if (check_flag30_bit20__10TObjPlayerFi() != 0) {
        TObjPlayer__sub_801D0BC0(arg0, 0x13, 5);
        return;
    }
    if (is_status_flag_200__10TObjPlayerFPv(arg0) != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            TObjPlayer__sub_801D0BC0(arg0, 0xE, 5);
            return;
        }
        TObjPlayer__sub_801D0BC0(arg0, 0xD, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CBD00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_current_target_id__10TObjPlayerFv(void);
s32 TObjPlayer__sub_80312E0C(void*);

extern u32 lbl_805D5D68;

s32 get_current_target_id__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5D68 != 0U) {
        return TObjPlayer__sub_80312E0C((void*)lbl_805D5D68);
    }
    return 0xFFFF;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CBD6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_photon_blast_state__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_80312F0C(void*);

extern u32 lbl_805D5D68;

void update_photon_blast_state__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5D68 != 0U) {
        TObjPlayer__sub_80312F0C((void*)lbl_805D5D68);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CBDD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_photon_blast__10TObjPlayerFii(s32 arg0, s32 arg1);
void update_active_instance__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_801A8868(s32, s32);
s32 reset_volopt_state__10TObjPlayerFv();
s32 TObjPlayer__sub_801CBD98(s32);
M2C_UNK TObjPlayer__sub_80312C50(u32);
M2C_UNK TObjPlayer__sub_80312F0C(u32);
M2C_UNK TObjPlayer__sub_80312F5C(u32, s32, s32);

extern u32 lbl_805D5D68;

void apply_photon_blast__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if ((u32) lbl_805D5D68 != 0U) {
        TObjPlayer__sub_80312F5C(lbl_805D5D68, arg0, arg1);
    }
}

extern u32 lbl_805D5D68;

void update_active_instance__10TObjPlayerFi(s32 arg0) {
    if ((u32) lbl_805D5D68 != 0U) {
        if (reset_volopt_state__10TObjPlayerFv() == 0) {
            TObjPlayer__sub_80312F0C(lbl_805D5D68);
            return;
        }
        TObjPlayer__sub_80312C50(lbl_805D5D68);
        TObjPlayer__sub_801A8868(TObjPlayer__sub_801CBD98(0), arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CC1F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_conditions__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_80019248(s32);
s32 reset_volopt_state__10TObjPlayerFv(s32);
s32 check_flag_clear__10TObjPlayerFPv(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 TLobby__sub_800822E8(s32, M2C_UNK);
s32 TObjPlayer__sub_801C1F50(s32);
s32 get_camera_field__10TObjPlayerFPv(s32);

s32 obj_testFlags30(s32, M2C_UNK);

s32 check_conditions__10TObjPlayerFi(s32 arg0) {
    if ((obj_testFlags30(arg0, 0x20006) != 0) || (TLobby__sub_800822E8(arg0, 0x11E) == 0) || (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) == 0) || (check_flag_clear__10TObjPlayerFPv(arg0 + 0x4AC) == 0) || ((TObjPlayer__sub_80019248(arg0) != 0) && ((check_flag_100__10TObjPlayerFPv(arg0) != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0))) || (reset_volopt_state__10TObjPlayerFv(arg0) == 0)) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CC7E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_tech_params__10TObjPlayerFPvPv(void *arg0, void *arg1);

void copy_tech_params__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CC910
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_band_state__10TObjPlayerFPv(u8 *arg0);
void update_target_approach__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_801CC194(void *);
void TObjPlayer__sub_801CC9E4(void);
M2C_UNK set_action_flag_40__10TObjPlayerFPv(void *);
M2C_UNK get_dist__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *);
int try_apply_status_action__10TObjPlayerFi(void*);
int try_apply_status_action_default__10TObjPlayerFPv(void* p);
M2C_UNK update_position_from_target__10TObjPlayerFPv();

#include "types.h"
extern "C" {
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void update_band_state__10TObjPlayerFPv(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x328) == 2) {
        get_dist__10TObjPlayerFPv((void *) (arg0 + 0x4AC));
        if (objInBand__FP7GameObjf((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            set_action_flag_40__10TObjPlayerFPv((void *) (arg0));
        }
    }
}

}
void update_target_approach__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        update_position_from_target__10TObjPlayerFPv();
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x328) == 2) {
        get_dist__10TObjPlayerFPv((void *) (arg0 + 0x4AC));
        if (objInBand__FP7GameObjf((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            set_action_flag_40__10TObjPlayerFPv((void *) (arg0));
            TObjPlayer__sub_801CC194((void *) (arg0));
        }
    }
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CC9E4
#include "types.h"

extern "C" {

void TObjPlayer__sub_801CC9E4(void);
int try_apply_status_action_default__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CC9E4(void) {  }
int try_apply_status_action_default__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CCBB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_and_set_unit_value__10TObjPlayerFiUci(s32 arg0, u8 arg1, s32 arg2);
M2C_UNK TItemProUnit__sub_801D98F8(s32, s32, u8);
u8 TObjPlayer__sub_801C010C(s32, s32);
s32 is_invalid_slot__10TObjPlayerFUc(u8);
s32 obj_isState3_324();

void clamp_and_set_unit_value__10TObjPlayerFiUci(s32 arg0, u8 arg1, s32 arg2) {
    if (obj_isState3_324() != 0 && is_invalid_slot__10TObjPlayerFUc(arg1) == 0 &&
        arg1 > (u8)TObjPlayer__sub_801C010C(arg0 + 0x428, arg2)) {
        arg1 = TObjPlayer__sub_801C010C(arg0 + 0x428, arg2);
    }
    TItemProUnit__sub_801D98F8(arg0 + 0x428, arg2, arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CCC40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_cursor__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 try_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 can_equip_item__10TObjPlayerFii(s32, s16);
M2C_UNK TObjPlayer__sub_801CD72C(s32);
s32 TLobby__sub_800822E8(s32, M2C_UNK);
s32 TMainCursor__sub_8013B41C(s32, void *, M2C_UNK, u8);
M2C_UNK set_slot__20TWindowActionPaletteFPvUc(s32, u8);
M2C_UNK set_mode__20TWindowActionPaletteFPvUc(s32, M2C_UNK);
M2C_UNK TMainCursor__sub_8013DFC4(s32);
M2C_UNK set_technique_id__10TObjPlayerFPvs(s32, s32);

void update_cursor__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x424);
    if ((temp_r3 != 0U) && (TMainCursor__sub_8013B41C(temp_r3 + 0x520, arg0, 3, (u8) arg1) != 0)) {
        set_mode__20TWindowActionPaletteFPvUc(M2C_FIELD(arg0, u32 *, 0x424) + 0x520, 3);
        set_slot__20TWindowActionPaletteFPvUc(M2C_FIELD(arg0, u32 *, 0x424) + 0x520, (u8) arg1);
        TMainCursor__sub_8013DFC4(M2C_FIELD(arg0, u32 *, 0x424) + 0x520);
    }
}

s32 try_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (TLobby__sub_800822E8(arg0, 0x100) == 0) {
        if (can_equip_item__10TObjPlayerFii(arg0, arg1) == 0) {
            return 0;
        }
        set_technique_id__10TObjPlayerFPvs(arg0 + 0x428, arg1);
        TObjPlayer__sub_801CD72C(arg0);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CCFC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_camera_action__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 can_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 TObjPlayer__sub_80019248();
s32 TObjPlayer__sub_801CD078(s32, s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 get_camera_field__10TObjPlayerFPv(s32);

s32 try_camera_action__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if ((TObjPlayer__sub_80019248() != 0) && ((check_flag_100__10TObjPlayerFPv(arg0) != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0))) {
        return 0;
    }
    return TObjPlayer__sub_801CD078(arg0, arg1);
}

s32 can_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (TObjPlayer__sub_80019248() != 0) {
        return TObjPlayer__sub_801CD078(arg0, arg1);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CD864
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_anim_done__10TObjPlayerFPv(void *arg0);
void update_state5_action__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801CD904(void);
int apply_status_action_a__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D0BC0(void *, s32, s32);
s32 is_anim_finished__10TObjPlayerFPv();
int try_apply_status_action__10TObjPlayerFi(void*);

void check_anim_done__10TObjPlayerFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (is_anim_finished__10TObjPlayerFPv() != 0)) {
        TObjPlayer__sub_801D0BC0(arg0, 1, 0);
    }
}
void update_state5_action__10TObjPlayerFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (is_anim_finished__10TObjPlayerFPv() != 0)) {
        TObjPlayer__sub_801D0BC0(arg0, 1, 0);
    }
}
void TObjPlayer__sub_801CD904(void) {  }
int apply_status_action_a__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CD9A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_linked_obj__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8001053C();
M2C_UNK clear_status_bit6__10TObjPlayerFPv(void *);
int TObjPlayer__sub_801CD9F0(void* p);
int update_action_state__10TObjPlayerFPv(void*);

void reset_linked_obj__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    TObjPlayer__sub_8001053C();
    clear_status_bit6__10TObjPlayerFPv(arg0);
    temp_r4 = M2C_FIELD(arg0, void **, 0x424);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
}
int TObjPlayer__sub_801CD9F0(void* p) { return update_action_state__10TObjPlayerFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CDC68
#include "types.h"

extern "C" {

void TObjPlayer__sub_801CDC68(void);
void TObjPlayer__sub_801CDD00(void);
int try_apply_status_action_1__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CDC68(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CDD00
#include "types.h"

extern "C" {

void TObjPlayer__sub_801CDC68(void);
void TObjPlayer__sub_801CDD00(void);
int try_apply_status_action_1__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CDD00(void) {  }
int try_apply_status_action_1__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CDDA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_target_link__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8001053C();
M2C_UNK clear_status_bit6__10TObjPlayerFPv(void *);
int TObjPlayer__sub_801CDDEC(void* p);
int update_action_state__10TObjPlayerFPv(void*);

void reset_target_link__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    TObjPlayer__sub_8001053C();
    clear_status_bit6__10TObjPlayerFPv(arg0);
    temp_r4 = M2C_FIELD(arg0, void **, 0x424);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
}
int TObjPlayer__sub_801CDDEC(void* p) { return update_action_state__10TObjPlayerFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CE064
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801CEAC8();
s32 TObjPlayer__sub_801D2FB0(s32, s32, s32, s32);
void TObjPlayer__sub_801CE064(void);
int apply_status_action__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CE064(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CE134
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801CEAC8();
s32 TObjPlayer__sub_801D2FB0(s32, s32, s32, s32);
void TObjPlayer__sub_801CE064(void);
int apply_status_action__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CE134(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_801CEAC8();
    if (temp_r3 != -1) {
        TObjPlayer__sub_801D2FB0(arg0 + 0x7CC, arg0, temp_r3, 2);
    }
}
int apply_status_action__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CEBBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_mode_action__10TObjPlayerFii(s32 arg0, s32 arg1);
u32 get_item_field_6__10TObjPlayerFPv();
s32 TObjPlayer__sub_801CEC1C(s32);
s32 TObjPlayer__sub_8011E248();

s32 check_mode_action__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (arg1 == 2) {
        if (get_item_field_6__10TObjPlayerFPv() != 0U) {
            if (TObjPlayer__sub_8011E248() == 0) {
                return 0;
            }
            goto block_5;
        }
        return 0;
    }
block_5:
    return TObjPlayer__sub_801CEC1C(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CECE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_by_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK set_flag_1_at_c__10TObjPlayerFPv(void *);
s16 get_handle_value__10TObjPlayerFPv();
M2C_UNK update_if_flag8_set__10TObjPlayerFi(void *);
M2C_UNK tick_countdown_timer__10TObjPlayerFPv(void *);

void update_by_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r3;

    temp_r3 = get_handle_value__10TObjPlayerFPv();
    switch (temp_r3) {
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            set_flag_1_at_c__10TObjPlayerFPv(arg0 + 0x7CC);
        }
        return;
    case 8:
        update_if_flag8_set__10TObjPlayerFi(arg0 + 0x7CC);
        return;
    default:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            tick_countdown_timer__10TObjPlayerFPv(arg0 + 0x7CC);
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CED64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_movement_if_ready__10TObjPlayerFPv(u8 *arg0);
s32 TObjPlayer__sub_801B5DDC(void *);
u32 TObjPlayer__sub_801B5EA4(void *);
s32 TObjPlayer__sub_801D2680(void *);
M2C_UNK TObjPlayer__sub_8001053C(void *);
M2C_UNK apply_velocity__10TObjPlayerFPv(void *);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
f32 fn_80142950(void *, void *, void *);
s16 get_handle_value__10TObjPlayerFPv();

extern const f32 TObjPlayer__data_805DC36C;

void apply_movement_if_ready__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r3;

    temp_r3 = get_handle_value__10TObjPlayerFPv();
    if ((temp_r3 != 0x11) && ((temp_r3 >= 0x11) || (temp_r3 >= 0xA) || (temp_r3 < 6)) && (is_flag_b0_4__10TObjPlayerFPv(arg0) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA)) && (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20000000) && (TObjPlayer__sub_801D2680(arg0) == 0)) {
        if (TObjPlayer__data_805DC36C > fn_80142950(arg0, arg0 + 0x308, arg0 + 0x310)) {
            TObjPlayer__sub_8001053C(arg0);
        }
        if (TObjPlayer__sub_801B5DDC(arg0) != 0) {
            TObjPlayer__sub_8001053C(arg0);
        }
        if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
            apply_velocity__10TObjPlayerFPv(arg0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CEE40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_anim_action__10TObjPlayerFPv(u8 *arg0);
M2C_UNK get_item_field_6__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_801CEA08(void *);
M2C_UNK set_action_flag_40__10TObjPlayerFPv(void *);
M2C_UNK get_anim_field_c__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D2D94(void *);
M2C_UNK set_flags__10TObjPlayerFPvUi(s32, s32);
s32 TObjPlayer__sub_8001BEF8(s32, s32);
M2C_UNK TObjPlayer__sub_80124C78(void *);
s32 get_anim_state__10TObjPlayerFPv(void *);
s16 get_handle_value__10TObjPlayerFPv(void *);
M2C_UNK apply_anim_action__10TObjPlayerFPvi(void *, void *);
M2C_UNK TObjPlayer__sub_801D9078(void *);
s32 objInBand__FP7GameObjf(void *);

void update_anim_action__10TObjPlayerFPv(u8 *arg0) {
    get_item_field_6__10TObjPlayerFPv();
    if (get_handle_value__10TObjPlayerFPv(arg0) != 8) {
        TObjPlayer__sub_801D9078(arg0);
        if (objInBand__FP7GameObjf(arg0) != 0) {
            TObjPlayer__sub_801CEA08(arg0);
            TObjPlayer__sub_801D2D94(arg0 + 0x7CC);
            apply_anim_action__10TObjPlayerFPvi(arg0 + 0x7CC, arg0);
        }
    } else {
        if (TObjPlayer__sub_8001BEF8(get_anim_field_c__10TObjPlayerFPv(arg0 + 0x7CC), 8) == 0) {
            TObjPlayer__sub_801D9078(arg0);
            if (objInBand__FP7GameObjf(arg0) != 0) {
                TObjPlayer__sub_801CEA08(arg0);
                TObjPlayer__sub_80124C78(arg0 + 0x7CC);
                if (get_anim_state__10TObjPlayerFPv(arg0 + 0x7CC) >= 3) {
                    set_flags__10TObjPlayerFPvUi(get_anim_field_c__10TObjPlayerFPv(arg0 + 0x7CC), 8);
                    apply_anim_action__10TObjPlayerFPvi(arg0 + 0x7CC, arg0);
                    set_action_flag_40__10TObjPlayerFPv(arg0);
                    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x10);
                }
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CEF38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_801CE218(void *);
M2C_UNK update_by_state__10TObjPlayerFPv(void *);
M2C_UNK apply_movement_if_ready__10TObjPlayerFPv(void *);
M2C_UNK update_anim_action__10TObjPlayerFPv(void *);
M2C_UNK set_action_flag_40__10TObjPlayerFPv(void *);
M2C_UNK clear_status_bit6__10TObjPlayerFPv(void *);
M2C_UNK set_action_type__10TObjPlayerFPvi(void *, s32);
s32 get_field_1c__10TObjPlayerFPv(void *);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
s32 is_anim_finished__10TObjPlayerFPv(void *);

void update_action_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r31;

    M2C_FIELD(arg0, s32 *, 0x60) = lerp_angle_half__10TObjPlayerFUsUs(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3F0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        TObjPlayer__sub_801CE218(arg0);
    case 1:
        if (is_anim_finished__10TObjPlayerFPv(arg0) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            set_action_flag_40__10TObjPlayerFPv(arg0);
        }
    case 4:
        return;
    case 2:
        temp_r31 = get_field_1c__10TObjPlayerFPv(arg0 + 0x7CC) - 1;
        if (temp_r31 < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            clear_status_bit6__10TObjPlayerFPv(arg0);
        }
        set_action_type__10TObjPlayerFPvi(arg0 + 0x7CC, temp_r31);
        return;
    case 3:
        update_anim_action__10TObjPlayerFPv(arg0);
        apply_movement_if_ready__10TObjPlayerFPv(arg0);
        update_by_state__10TObjPlayerFPv(arg0);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CF014
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_lockon__10TObjPlayerFPv(void *arg0);
M2C_UNK clear_status_bit6__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8001053C();

void reset_lockon__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    TObjPlayer__sub_8001053C();
    clear_status_bit6__10TObjPlayerFPv(arg0);
    temp_r4 = M2C_FIELD(arg0, void **, 0x424);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CF060
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_state__10TObjPlayerFv(void);
M2C_UNK update_action_state__10TObjPlayerFPv();

void update_action_state__10TObjPlayerFv(void) {
    update_action_state__10TObjPlayerFPv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CF2AC
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801CEAC8();
s32 TObjPlayer__sub_801D2FB0(s32, s32, s32, s32);
void TObjPlayer__sub_801CF2AC(void);
int TObjPlayer__sub_801CF3C0(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CF2AC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CF378
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801CEAC8();
s32 TObjPlayer__sub_801D2FB0(s32, s32, s32, s32);
void TObjPlayer__sub_801CF2AC(void);
int TObjPlayer__sub_801CF3C0(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void update_active_item__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_801CEAC8();
    if (temp_r3 != -1) {
        TObjPlayer__sub_801D2FB0(arg0 + 0x7CC, arg0, temp_r3, 1);
    }
}
int TObjPlayer__sub_801CF3C0(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CF45C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_aim_target__10TObjPlayerFPv(void *arg0);
void apply_damage_and_reset__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_80019248(void *);
s32 TObjPlayer__sub_801B5DDC(void *);
s32 TObjPlayer__sub_801B5EA4(void *);
int TObjPlayer__sub_8001053C(void*);
s32 check_player_flag1__6TLobbyFPv(void *);
s32 is_inactive__10TObjPlayerFPv();
int TObjEnePanarms__sub_800E2DE4(void*, void*);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32, f32, f32);

extern const f32 TObjPlayer__data_805DC36C;
extern const f32 lbl_805DC3B0;

s32 update_aim_target__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    s32 temp_r3;

    if (is_inactive__10TObjPlayerFPv() == 0) {
        return 0;
    }
    temp_f1 = lbl_805DC3B0 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x3F0));
    M2C_FIELD(arg0, f32 *, 0x308) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805DC36C;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) (lbl_805DC3B0 * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x3F0), temp_f1, lbl_805DC3B0));
    if (TObjPlayer__sub_801B5DDC(arg0) != 0) {
        TObjPlayer__sub_8001053C((void*)(arg0));
        return 0;
    }
    temp_r3 = TObjPlayer__sub_801B5EA4(arg0);
    if (temp_r3 == 0) {
        return 1;
    }
    if ((TObjPlayer__sub_80019248(arg0) != 0) && (check_player_flag1__6TLobbyFPv(arg0) == 0) && (temp_r3 == 4)) {
        return 1;
    }
    return 0;
}

void apply_damage_and_reset__10TObjPlayerFPv(void* p) { TObjEnePanarms__sub_800E2DE4(p, (void*)256); TObjPlayer__sub_8001053C((void*)(p)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CF6C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_action__10TObjPlayerFPv(u8 *arg0);
s32 get_vobj_state_28__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
f32 TObjPlayer__sub_801D2640(void *);
M2C_UNK set_action_flag__10TObjPlayerFPv(void *);
f32 TObjPlayer__sub_801D2858(void *);
M2C_UNK clear_id__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s16);
M2C_UNK apply_stat_multipliers_and_reset__10TObjPlayerFPv(void *, void *, f32);
s32 is_matching_id__10TObjPlayerFPvs(void *, s16);

extern const f32 lbl_805DC3B0;

void start_action__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f1;
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x33C) = 4;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    clear_id__10TObjPlayerFPv(arg0 + 0x5EC);
    temp_r3 = get_vobj_state_28__10TObjPlayerFPv(arg0);
    if (is_matching_id__10TObjPlayerFPvs(arg0, temp_r3) != 0) {
        set_action_flag__10TObjPlayerFPv(arg0);
    }
    apply_stat_multipliers_and_reset__10TObjPlayerFPv(arg0 + 0x5E0, arg0, lbl_805DC3B0);
    set_action_state__10TObjPlayerFPvss(arg0, 4, temp_r3);
    temp_f31 = TObjPlayer__sub_801D2858(arg0 + 0x5E0);
    temp_f1 = TObjPlayer__sub_801D2640(arg0);
    TObjPlayer__sub_800A7798(arg0, temp_f1 * temp_f31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CF8B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_ring_release__10TObjPlayerFi(s32 arg0);
void try_trigger_effect__10TObjPlayerFi(s32 arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801D0BC0(s32, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(s32, M2C_UNK);

void handle_ring_release__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x5EC, 4) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x5EC, 4);
        TObjPlayer__sub_801D0BC0(arg0, 1, 0);
    }
}

void try_trigger_effect__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x5EC, 4) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x5EC, 4);
        TObjPlayer__sub_801D0BC0(arg0, 1, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CFAA4
#include "types.h"

extern "C" {

int TObjPlayer__sub_801CFAA4(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

int TObjPlayer__sub_801CFAA4(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CFB40
#include "types.h"

extern "C" {

void TObjPlayer__sub_801CFB40(void);
void TObjPlayer__sub_801CFB44(void);
void TObjPlayer__sub_801CFB48(void);

void TObjPlayer__sub_801CFB40(void) {  }
void TObjPlayer__sub_801CFB44(void) {  }
void TObjPlayer__sub_801CFB48(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CFB50
#include "types.h"

extern "C" {

void TObjPlayer__sub_801CFB50(void);
void TObjPlayer__sub_801CFB54(void);
void TObjPlayer__sub_801CFB58(void);
void TObjPlayer__sub_801CFB5C(void);
int apply_status_action_b__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CFB50(void) {  }
void TObjPlayer__sub_801CFB54(void) {  }
void TObjPlayer__sub_801CFB58(void) {  }
void TObjPlayer__sub_801CFB5C(void) {  }
int apply_status_action_b__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CFC6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_combat_stats__10TObjPlayerFPv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int, f32);
M2C_UNK TObjPlayer__sub_8001053C(void *);
s32 TObjPlayer__sub_80019248(void *);
s32 is_inactive__10TObjPlayerFPv();
s32 TObjPlayer__sub_801B5DDC(void *);
s32 TObjPlayer__sub_801B5EA4(void *);
f32 apply_stat_multipliers_default__10TObjPlayerFv(void *, void *);
s32 check_player_flag1__6TLobbyFPv(void *);

extern const f32 TObjPlayer__data_805DC36C;

s32 update_combat_stats__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r3;

    if (is_inactive__10TObjPlayerFPv() == 0) {
        return 0;
    }
    temp_f31 = apply_stat_multipliers_default__10TObjPlayerFv((void *) (arg0 + 0x5E0), (void *) (arg0));
    temp_f1 = temp_f31 * TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x3F0)));
    M2C_FIELD(arg0, f32 *, 0x308) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805DC36C;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) (temp_f31 * TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x3F0)), (f32) (temp_f1)));
    if (TObjPlayer__sub_801B5DDC((void *) (arg0)) != 0) {
        TObjPlayer__sub_8001053C((void *) (arg0));
        return 0;
    }
    temp_r3 = TObjPlayer__sub_801B5EA4((void *) (arg0));
    if (temp_r3 == 0) {
        return 1;
    }
    if ((TObjPlayer__sub_80019248((void *) (arg0)) != 0) && (check_player_flag1__6TLobbyFPv((void *) (arg0)) == 0) && (temp_r3 == 4)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CFDC0
#include "types.h"

extern "C" {

void reset_and_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8001053C(void*);
int TObjEnePanarms__sub_800E2DE4(void*, void*);

void reset_and_flag__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001053C(p); TObjEnePanarms__sub_800E2DE4(p, (void*)256); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801CFF50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_attack_state__10TObjPlayerFPv(u8 *arg0);
s32 TObjPlayer__sub_801CFBFC(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
f32 TObjPlayer__sub_801D2640(void *);
M2C_UNK set_action_flag__10TObjPlayerFPv(void *);
f32 TObjPlayer__sub_801D2858(void *);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s16);
M2C_UNK apply_stats_and_update__10TObjPlayerFPv(void *, void *);
s32 is_matching_id__10TObjPlayerFPvs(void *, s16);

void set_attack_state__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f1;
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x33C) = 2;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    temp_r3 = TObjPlayer__sub_801CFBFC(arg0);
    if (is_matching_id__10TObjPlayerFPvs(arg0, temp_r3) != 0) {
        set_action_flag__10TObjPlayerFPv(arg0);
    }
    apply_stats_and_update__10TObjPlayerFPv(arg0 + 0x5E0, arg0);
    set_action_state__10TObjPlayerFPvss(arg0, 2, temp_r3);
    temp_f31 = TObjPlayer__sub_801D2858(arg0 + 0x5E0);
    temp_f1 = TObjPlayer__sub_801D2640(arg0);
    TObjPlayer__sub_800A7798(arg0, temp_f1 * temp_f31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D0170
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_ring_hit__10TObjPlayerFi(s32 arg0);
void check_ring_action__10TObjPlayerFi(s32 arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801D0BC0(s32, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(s32, M2C_UNK);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(s32, M2C_UNK, M2C_UNK);
M2C_UNK set_ring_action__10TObjPlayerFPvi(s32, M2C_UNK);

void handle_ring_hit__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x5EC, 4) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x5EC, 4);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x01C00000);
        TObjPlayer__sub_801D0BC0(arg0, 1, 0);
    }
}

void check_ring_action__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x5EC, 4) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x5EC, 4);
        set_ring_action__10TObjPlayerFPvi(arg0 + 0x5E0, 0);
        TObjPlayer__sub_801D0BC0(arg0, 1, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D03BC
#include "types.h"

extern "C" {

int TObjPlayer__sub_801D03BC(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

int TObjPlayer__sub_801D03BC(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D04B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801D04B4(void* p);
void TObjPlayer__sub_801D0514(void);
void update_action__10TObjPlayerFi(s32 arg0);
void start_animation__10TObjPlayerFPv(void *arg0);
s32 TFontSmallLobby__sub_801AFEE0();
s32 TItemProShield__sub_8001140C(s32, s32);
s32 TObjPlayer__sub_801AF290(s32);
u32 TObjPlayer__sub_801B5EA4();
s32 TObjPlayer__sub_801B6024(s32);
s32 TObjPlayer__sub_801BE2D0(s32);
int TObjPlayer__sub_801BF964(void*);
s32 TObjPlayer__sub_801D0458(void *);
s32 TObjPlayer__sub_801D0BC0(void *, s16, s32);
s32 TObjPlayer__sub_801D1018(s32);
int clear_status_bit6__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8001053C(void*);
s32 apply_velocity__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_800112A4(s32, s32);
int TObjPlayer__sub_8011E204(void*, void*);
s32 set_action_state__10TObjPlayerFPvss(void *, s32, s32);
int set_ring_action__10TObjPlayerFPvi(void*, void*);

int obj_clearFlags30(void*, void*);

void TObjPlayer__sub_801D04B4(void* p) { obj_clearFlags30(p, (void*)3840); TObjPlayer__sub_8011E204(p, (void*)128); set_ring_action__10TObjPlayerFPvi((char*)p + 0x5e0, (void*)0); clear_status_bit6__10TObjPlayerFPv(p); TObjPlayer__sub_8001053C(p); TObjPlayer__sub_801BF964((char*)p + 0x5fc); }
void TObjPlayer__sub_801D0514(void) {  }
void update_action__10TObjPlayerFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = TObjPlayer__sub_801B5EA4();
    if (temp_r3 == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    } else if (temp_r3 == 1U) {
        TObjPlayer__sub_801B6024(arg0);
    }
    if ((TObjPlayer__sub_801BE2D0(arg0) != 0) && (TFontSmallLobby__sub_801AFEE0() == 0) && (TObjPlayer__sub_801AF290(arg0) != 0)) {
        TObjPlayer__sub_800112A4(arg0, 1);
    }
    if ((TObjPlayer__sub_801D1018(arg0) != 0) && (TFontSmallLobby__sub_801AFEE0() == 0) && (TObjPlayer__sub_801AF290(arg0) != 0)) {
        TItemProShield__sub_8001140C(arg0, 1);
    }
}
void start_animation__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 1;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_801D04B4((void*)(arg0));
    set_action_state__10TObjPlayerFPvss(arg0, 1, TObjPlayer__sub_801D0458(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D0888
#include "types.h"

extern "C" {

int TObjPlayer__sub_801D08B0(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void update_position_from_target__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D09F4(void);
void TObjPlayer__sub_801D09F8(void);

void update_position_from_target__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801D08B0(p, (char*)p + 0x38, *(void**)((char*)p + 0x60)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D09F4
#include "types.h"

extern "C" {

int TObjPlayer__sub_801D08B0(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void update_position_from_target__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D09F4(void);
void TObjPlayer__sub_801D09F8(void);

void TObjPlayer__sub_801D09F4(void) {  }
void TObjPlayer__sub_801D09F8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D0B24
#include "types.h"

extern "C" {

int try_apply_status_action_2__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

int try_apply_status_action_2__10TObjPlayerFPv(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D0D10
#include "types.h"

extern "C" {

int update_lobby_chair__10TObjPlayerFPv(void* p);
int get_chair_state__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D0D58(void* p);
void TObjPlayer__sub_801D0D7C(void* p);
void TObjPlayer__sub_801D0D8C(void* p);
void clear_state_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D0DAC(void* p);
int start_action18_sub__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D0DF4(void* p);
void TObjPlayer__sub_801D0E18(void* p);
int get_action_flag__10TObjPlayerFPv(void* p);
int forward_1D1044_at_34c__10TObjPlayerFPv(void* p);
int is_action_flag_28__10TObjPlayerFPv(void* p);
void set_anim_flag__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D0E74(void* p);
void TObjPlayer__sub_801D0E84(void* p);
int get_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1024(void*);
int TObjPlayer__sub_801D102C(void*);
int TObjPlayer__sub_801D1034(void*);
int TObjPlayer__sub_801D103C(void*);
int TObjPlayer__sub_801D1044(void*);
int TBoss7LaserPtcl__sub_8035AF14(void*);
int fn_8035AF18(void*);

int update_lobby_chair__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801D1024((char*)p + 0x34c); }
int get_chair_state__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801D102C((char*)p + 0x34c); }
int TObjPlayer__sub_801D0D58(void* p) { return TBoss7LaserPtcl__sub_8035AF14((char*)p + 0x34c); }
void TObjPlayer__sub_801D0D7C(void* p) { *(u32*)((char*)p + 0x334) &= 0xfbffffff; }
void TObjPlayer__sub_801D0D8C(void* p) { *(u32*)((char*)p + 0x334) &= 0xf7ffffff; }
void clear_state_flag__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) &= 0xefffffff; }
int TObjPlayer__sub_801D0DAC(void* p) { return TObjPlayer__sub_801D1034((char*)p + 0x34c); }
int start_action18_sub__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801D103C((char*)p + 0x34c); }
int TObjPlayer__sub_801D0DF4(void* p) { return fn_8035AF18((char*)p + 0x34c); }
void TObjPlayer__sub_801D0E18(void* p) { *(u32*)((char*)p + 0x334) |= 0x4000000; }
int get_action_flag__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 27) & 0x1; }
int forward_1D1044_at_34c__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801D1044((char*)p + 0x34c); }
int is_action_flag_28__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 28) & 0x1; }
void set_anim_flag__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) |= 0x8000000; }
void TObjPlayer__sub_801D0E74(void* p) { *(u32*)((char*)p + 0x334) |= 0x10000000; }
void TObjPlayer__sub_801D0E84(void* p) { *(u32*)((char*)p + 0x334) &= 0xdfffffff; }
int get_flag__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 29) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D0F0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_801D0F0C { char pad[0x8]; };
struct VObj_801D0F0C : Base_801D0F0C {
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
    virtual int m23();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

short query_child_state2__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801D0F40(void* p);
void clear_flag_200__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D0F70(void* p);
void* get_field4_ptr__10TObjPlayerFPv(void* p);
int copy_position__10TObjPlayerFPv(void* p);
void set_float_param__10TObjPlayerFis(s32 arg0, s16 arg1);
M2C_UNK set_field_3c__10TObjPlayerFPvf(s32, f32);
int VecCopy__FP3VecPC3Vec(void*);

short query_child_state2__10TObjPlayerFPv(void *arg0) {
    struct VObj_801D0F0C *o = (struct VObj_801D0F0C *)M2C_FIELD(arg0, void **, 0x380);
    return o->m23();
}

void TObjPlayer__sub_801D0F40(void* p) { clear_flag_200__10TObjPlayerFPv((void*)(p)); }
void clear_flag_200__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) &= 0xfffffdff; }
void TObjPlayer__sub_801D0F70(void* p) { *(u32*)((char*)p + 0x334) |= 0x200; }
void* get_field4_ptr__10TObjPlayerFPv(void* p) { return (char*)p + 0x4; }
int copy_position__10TObjPlayerFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x4); }

void set_float_param__10TObjPlayerFis(s32 arg0, s16 arg1) {
    set_field_3c__10TObjPlayerFPvf(arg0 + 0x4AC, (f32) (s32) arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D0FF4
#include "types.h"

extern "C" {

int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

int query_field_340__10TObjPlayerFPv(void* p) { return update_action_palette__10TObjPlayerFPv((char*)p + 0x340); }
int TObjPlayer__sub_801D1018(void* p) { return (*(u32*)((char*)p + 0x890) >> 4) & 0x1; }
void TObjPlayer__sub_801D1024(void* p, s32 v) { *(s32*)((char*)p + 0x10) = v; }
void TObjPlayer__sub_801D102C(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
s32 TObjPlayer__sub_801D1034(void* p) { return *(s32*)((char*)p + 0xc); }
s16 TObjPlayer__sub_801D103C(void* p) { return *(s16*)((char*)p + 0x0); }
void TObjPlayer__sub_801D1044(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_801D104C(void* p) { *(s16*)((char*)p + 0x6) = 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1090
#include "types.h"

extern "C" {

int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void TObjPlayer__sub_801D1090(void* p) { *(s16*)((char*)p + 0x8) = 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D10D4
#include "types.h"

extern "C" {

int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void TObjPlayer__sub_801D10D4(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1160
#include "types.h"

extern "C" {

int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void swap_endian32__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D11EC
#include "types.h"

extern "C" {

int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

int TObjPlayer__sub_801D11EC(void* p) { return *(u16*)((char*)p + 0x6) & 0x1; }
int TObjPlayer__sub_801D11F8(void* p) { return (*(u16*)((char*)p + 0x6) >> 1) & 0x1; }
void swap_bytes__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D12A4
#include "types.h"

extern "C" {
void TObjPlayer__sub_801D10D4(void* p);
void swap_endian32__10TObjPlayerFPv(void* p);
void swap_bytes__10TObjPlayerFPv(void* p);

int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void send_swapped_bytes__10TObjPlayerFPv(void* p) { swap_bytes__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D12D8(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }
void TObjPlayer__sub_801D12E8(void* p) { *(u16*)((char*)p + 0x6) |= 0x2; }
void send_swapped_packet__10TObjPlayerFPv(void* p) { swap_endian32__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void bswap_and_send__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801D10D4(p); TLobby__send_and_handle_60(p); }
int TObjPlayer__sub_801D1360(void* p) { return *(u16*)((char*)p + 0x6) & 0x1; }
void bswap_packet__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D140C
#include "types.h"

extern "C" {
void bswap_packet__10TObjPlayerFPv(void* p);

int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void handle_recv_packet__10TObjPlayerFPv(void* p) { bswap_packet__10TObjPlayerFPv(p); update_players__6TLobbyFi(p); }
void TObjPlayer__sub_801D1440(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }
void* handle_6x57__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void set_cmd_87__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 87; *(u8*)((char*)p + 0x1) = 1; }
void draw_and_send__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void swap_endian_words__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1568
#include "types.h"

extern "C" {

void init_position_packet__10TObjPlayerFPv(void* a0);
void update_and_send2__10TObjPlayerFPv(void* p);
void swap_and_send__10TObjPlayerFPv(void* p);
void swap_endian__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1658(void* a0);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int swap_endian_words__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);

    extern const float TObjPlayer__data_805DC36C;
void init_position_packet__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x10) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 86; *(unsigned char*)((char*)a0 + 0x1) = 5; }

void update_and_send2__10TObjPlayerFPv(void* p) { swap_endian_words__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void swap_and_send__10TObjPlayerFPv(void* p) { swap_endian__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void swap_endian__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); }

    extern const float TObjPlayer__data_805DC36C;
void TObjPlayer__sub_801D1658(void* a0) { *(int*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0x10) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x1c) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x18) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x14) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 85; *(unsigned char*)((char*)a0 + 0x1) = 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1690
#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1);
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int bswap_field_u32__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D28DC(void*);
int TLobby__send_and_handle_60(void*);
void set_type_53__10TObjPlayerFPv(void* p);
void set_revived_state__10TObjPlayerFPv(void* p);
void init_revive_packet__10TObjPlayerFPv(void* p);

void set_type_53__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 83; *(u8*)((char*)p + 0x1) = 1; }
void send_name__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void swap_stats_bytes__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D178C
#include "types.h"

extern "C" {
void swap_stats_bytes__10TObjPlayerFPv(void* p);

int TFontSmallLobby__sub_801C0228(void*);
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1);
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int bswap_field_u32__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D28DC(void*);
int TLobby__send_and_handle_60(void*);
void set_type_53__10TObjPlayerFPv(void* p);
void set_revived_state__10TObjPlayerFPv(void* p);
void init_revive_packet__10TObjPlayerFPv(void* p);

void update_display__10TObjPlayerFPv(void* p) { swap_stats_bytes__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void set_revived_state__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 79; *(u8*)((char*)p + 0x1) = 1; }
void broadcast_lobby_display__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_fields__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D18B0
#include "types.h"

extern "C" {
void bswap_fields__10TObjPlayerFPv(void* p);

int TFontSmallLobby__sub_801C0228(void*);
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1);
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int bswap_field_u32__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D28DC(void*);
int TLobby__send_and_handle_60(void*);
void set_type_53__10TObjPlayerFPv(void* p);
void set_revived_state__10TObjPlayerFPv(void* p);
void init_revive_packet__10TObjPlayerFPv(void* p);

void init_revive_packet__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 78; *(u8*)((char*)p + 0x1) = 1; }
void bswap_font_lobby2__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_field_4__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_field_u32__10TObjPlayerFPv((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1978
#include "types.h"

extern "C" {
void init_field_4__10TObjPlayerFPv(void* p);
void bswap_fields__10TObjPlayerFPv(void* p);

int TFontSmallLobby__sub_801C0228(void*);
void* copy_font_state__10TObjPlayerFPvPv(void* p, void* a1);
void* copy_head_fields__10TObjPlayerFPvPv(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int bswap_field_u32__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D28DC(void*);
int TLobby__send_and_handle_60(void*);
void set_type_53__10TObjPlayerFPv(void* p);
void set_revived_state__10TObjPlayerFPv(void* p);
void init_revive_packet__10TObjPlayerFPv(void* p);

void init_and_send__10TObjPlayerFPv(void* p) { init_field_4__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void update_and_send3__10TObjPlayerFPv(void* p) { bswap_fields__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void bswap_head_pair__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_801D28DC((char*)p + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1A24
#include "types.h"

extern "C" {

void TObjPlayer__sub_801D1A24(void* a0);
void send_head_pair_packet__10TObjPlayerFPv(void* p);
void read_swapped_fields__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_head_pair__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D28DC(void*);
int bswap_16__FPUs(void*);

    extern const float TObjPlayer__data_805DC36C;
void TObjPlayer__sub_801D1A24(void* a0) { *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 76; *(unsigned char*)((char*)a0 + 0x1) = 4; }

void send_head_pair_packet__10TObjPlayerFPv(void* p) { bswap_head_pair__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void read_swapped_fields__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_801D28DC((char*)p + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1B1C
#include "types.h"

extern "C" {

void reset_action_state__10TObjPlayerFPv(void* a0);

    extern const float TObjPlayer__data_805DC36C;
void reset_action_state__10TObjPlayerFPv(void* a0) { *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 75; *(unsigned char*)((char*)a0 + 0x1) = 4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1B48
#include "types.h"

extern "C" {

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void handle_recv_state__10TObjPlayerFPv(void* p) { read_swapped_fields__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void swap_endian_field__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1BCC
#include "types.h"

extern "C" {
void swap_endian_field__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void refresh_players__10TObjPlayerFPv(void* p) { swap_endian_field__10TObjPlayerFPv(p); update_players__6TLobbyFi(p); }
void bswap_field4__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }
void* copy_font__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1C8C
#include "types.h"

extern "C" {
void bswap_field4__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void sync_players__10TObjPlayerFPv(void* p) { bswap_field4__10TObjPlayerFPv(p); update_players__6TLobbyFi(p); }
void init_shield_attack_packet__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 74; *(u8*)((char*)p + 0x1) = 1; }
void draw_font_and_send__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void swap_endian16__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1DA8
#include "types.h"

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void update_and_send4__10TObjPlayerFPv(void* p) { swap_endian16__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1E3C
#include "types.h"

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void swap_endian_shorts__10TObjPlayerFPv(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D1F44
#include "types.h"

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void TObjPlayer__sub_801D1F44(void* p) { *(s16*)((char*)p + 0x6) = 0; *(s16*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x2) = 0; *(u8*)((char*)p + 0x1) = 0; *(u8*)((char*)p + 0x0) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D201C
#include "types.h"

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void bswap_coords__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D2058
#include "types.h"

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void* TObjPlayer__sub_801D2058(void* p, void* a1);
void update_cursor_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);
void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void* TObjPlayer__sub_801D2058(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D20C4
#include "types.h"

extern "C" {
void bswap_coords__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void send_coords__10TObjPlayerFPv(void* p) { bswap_coords__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void swap_header__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D2198
#include "types.h"

extern "C" {
void swap_header__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void send_swapped_header__10TObjPlayerFPv(void* p) { swap_header__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D222C
#include "types.h"

extern "C" {
void swap_header__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void swap_field6__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x6); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D22D0
#include "types.h"

extern "C" {
void swap_field6__10TObjPlayerFPv(void* p);
void swap_header__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void send_swap_field6__10TObjPlayerFPv(void* p) { swap_field6__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D238C
#include "types.h"

extern "C" {
void swap_header__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void bswap_field4_sub__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); TObjPlayer__sub_801D2B2C((char*)p + 0x4); }
void* build_packet_header__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8012AF00((char*)p + 0x4); *(unsigned char*)(p) = 70; *(unsigned char*)((char*)p + 0x1) = 12; return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D2448
#include "types.h"

extern "C" {
void swap_header__10TObjPlayerFPv(void* p);
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void TObjPlayer__sub_801D2448(void* p) { read_be16_field2__10TObjPlayerFPv(p); TObjPlayer__sub_801D2C18((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D2618
#include "types.h"

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void TObjPlayer__sub_801D2618(void* p, f32 v) { *(f32*)((char*)p + 0xc0) = v; }
void set_action_flag_40__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0xb0) |= 0x40; }
void clear_status_bit6__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0xb0) &= 0xffffffbf; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D2680
#include "types.h"

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

int TObjPlayer__sub_801D2680(void* p) { return (*(u32*)((char*)p + 0xb0) >> 6) & 0x1; }
void set_action_flag__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0xb0) |= 0x80; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035A630
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void process_callback_list__10TObjPlayerFi(s32 arg0);
void draw_node_tree__10TObjPlayerFPvPv(void *arg0, void *arg1);
extern M2C_UNK (*lbl_805D6F3C)(s32);
M2C_UNK TObjPlayer__sub_803D898C(s32);
M2C_UNK TObjPlayer__sub_803D9730(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4684(s32);

extern s32 lbl_805D6F30;
extern s32 lbl_805D6F34;
extern s32 lbl_805D6F38;

void process_callback_list__10TObjPlayerFi(s32 arg0) {
    if ((s32) lbl_805D6F30 < (s32) lbl_805D6F34) {
        TObjPlayer__sub_803D898C(lbl_805D6F38 + (lbl_805D6F30 * 0x30));
    }
    if (((M2C_UNK (*)(s32)) lbl_805D6F3C) != NULL) {
        lbl_805D6F3C(arg0);
    }
    lbl_805D6F30 += 1;
}

extern s32 lbl_805D6F38;

void draw_node_tree__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    M2C_UNK (*temp_r12)(void *);
    s32 temp_r31;
    void *var_r30;

    var_r30 = arg1;
    do {
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9730(0, lbl_805D6F38 + (M2C_FIELD(arg0, s32 *, 0x30) * 0x30));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x34);
        if (temp_r12 != NULL) {
            temp_r12(var_r30);
        }
        if (!(temp_r31 & 8)) {
            TObjPlayer__sub_803E4684(M2C_FIELD(var_r30, s32 *, 4));
        }
        TObjPlayer__sub_803D9B78();
        if (!(temp_r31 & 0x10)) {
            draw_node_tree__10TObjPlayerFPvPv(arg0, M2C_FIELD(var_r30, void **, 0x2C));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0x30);
    } while (var_r30 != NULL);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035A740
#include "types.h"

extern "C" {

void draw_node_tree_if_visible__10TObjPlayerFPv(void* p);
int draw_node_tree__10TObjPlayerFPvPv(void*, void*);

void draw_node_tree_if_visible__10TObjPlayerFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { *(int*)((char*)p + 0x30) = 0; draw_node_tree__10TObjPlayerFPvPv(p, *(void**)((char*)p + 0x1c)); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035A778
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_with_callback__10TObjPlayerFPvif(void *arg0, s32 arg1, f32 farg0);
M2C_UNK render_model_tree__12TBoss8DragonFPvPv(s32, s32, f32);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(M2C_UNK *);

extern M2C_UNK process_callback_list__10TObjPlayerFi[];
extern s32 lbl_805D6F30;
extern s32 lbl_805D6F34;
extern s32 lbl_805D6F38;
extern s32 lbl_805D6F3C;

void apply_with_callback__10TObjPlayerFPvif(void *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, f32 *, 0x24) = farg0;
    lbl_805D6F30 = 0;
    lbl_805D6F34 = M2C_FIELD(arg0, s32 *, 0x2C);
    lbl_805D6F38 = M2C_FIELD(arg0, s32 *, 0x28);
    lbl_805D6F3C = M2C_FIELD(arg0, s32 *, 0x38);
    set_global_state__16TObjEneRe7BeruraFi(process_callback_list__10TObjPlayerFi);
    render_model_tree__12TBoss8DragonFPvPv(M2C_FIELD(arg0, s32 *, 0x1C), arg1, farg0);
    set_global_state__16TObjEneRe7BeruraFi(NULL);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8000FEAC
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 trigger_switch_attack__10TObjPlayerFPvi(s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80019248(s32);
u16 obj_getField1c(void* a0 = 0);
int test_flag_1000__10TObjPlayerFPv(void* p);
int has_flag_0x800__10TObjPlayerFPv(void* p);
int test_flag30_512__10TObjPlayerFPv(void* p);
int test_flag_256__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8000FF4C(void* p, s16 v);
u16 get_field_2d4__10TObjPlayerFPv(void* p);
int obj_testFlags30(void*, int);

int test_flag_1000__10TObjPlayerFPv(void* p) { return obj_testFlags30(p, 4096); }
int has_flag_0x800__10TObjPlayerFPv(void* p) { return obj_testFlags30(p, 2048); }
int test_flag30_512__10TObjPlayerFPv(void* p) { return obj_testFlags30(p, 512); }
int test_flag_256__10TObjPlayerFPv(void* p) { return obj_testFlags30(p, 256); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8000FF4C
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 trigger_switch_attack__10TObjPlayerFPvi(s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80019248(s32);
u16 obj_getField1c(void* a0 = 0);
int test_flag_1000__10TObjPlayerFPv(void* p);
int has_flag_0x800__10TObjPlayerFPv(void* p);
int test_flag30_512__10TObjPlayerFPv(void* p);
int test_flag_256__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8000FF4C(void* p, s16 v);
u16 get_field_2d4__10TObjPlayerFPv(void* p);
int obj_testFlags30(void*, int);

void TObjPlayer__sub_8000FF4C(void* p, s16 v) { *(s16*)((char*)p + 0x2d4) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8000FF54
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 trigger_switch_attack__10TObjPlayerFPvi(s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80019248(s32);
u16 obj_getField1c(void* a0 = 0);
int test_flag_1000__10TObjPlayerFPv(void* p);
int has_flag_0x800__10TObjPlayerFPv(void* p);
int test_flag30_512__10TObjPlayerFPv(void* p);
int test_flag_256__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8000FF4C(void* p, s16 v);
u16 get_field_2d4__10TObjPlayerFPv(void* p);
int obj_testFlags30(void*, int);

u16 get_field_2d4__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x2d4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8000FFA4
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 trigger_switch_attack__10TObjPlayerFPvi(s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80019248(s32);
u16 obj_getField1c(void* a0 = 0);
int test_flag_1000__10TObjPlayerFPv(void* p);
int has_flag_0x800__10TObjPlayerFPv(void* p);
int test_flag30_512__10TObjPlayerFPv(void* p);
int test_flag_256__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8000FF4C(void* p, s16 v);
u16 get_field_2d4__10TObjPlayerFPv(void* p);
int obj_testFlags30(void*, int);

void activate_switch_attacks__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (obj_testFlags30((void*)(arg0), 0x02000000) == 0) {
        TOSwitchAttack__sub_80087278(arg1, 0xB9, 0x40);
        TOSwitchAttack__sub_80087278(arg1, 0xBA, 0x40);
        trigger_switch_attack__10TObjPlayerFPvi(arg0, arg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800109B0
#include "types.h"

extern "C" {

s32 obj_setArrS16_FC(s32, s32, u16);
u16 obj_getArrU16_FC(s32, s32);
s32 obj_getField1c(s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
int obj_clearArrS16_FC(void*, void*);
void clear_s16_arrays__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80010A78(void);
void TObjPlayer__sub_80010A80(void);

void add_id_to_slots__10TObjPlayerFiUs(s32 arg0, u16 arg1) {
    s32 var_r30;

    var_r30 = 0;
loop_1:
    if (arg1 != obj_getArrU16_FC(arg0, var_r30)) {
        if (obj_getArrU16_FC(arg0, var_r30) == 0xFFFF) {
            obj_setArrS16_FC(arg0, var_r30, arg1);
            return;
        }
        var_r30 += 1;
        if (var_r30 >= 4) {

        } else {
            goto loop_1;
        }
    }
}
void clear_s16_arrays__10TObjPlayerFPv(void* p) { { int i; for (i = 0; i < 4; i++) { obj_clearArrS16_FC(p, (void*)i); } } }
int TObjPlayer__sub_80010A78(void) { return 0; }
void TObjPlayer__sub_80010A80(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80010AF0
#include "types.h"

extern "C" {

s32 obj_setArrS16_FC(s32, s32, u16);
u16 obj_getArrU16_FC(s32, s32);
s32 obj_getField1c(s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
int obj_clearArrS16_FC(void*, void*);
void clear_s16_arrays__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80010A78(void);
void TObjPlayer__sub_80010A80(void);

void trigger_switch_attack__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x1FE, 0x50);
    if (temp_r3 != 0) {
        TObjPlayer__sub_80087638(temp_r3, obj_getField1c(arg0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80010BB0
#include "types.h"

extern "C" {

s32 obj_setArrS16_FC(s32, s32, u16);
u16 obj_getArrU16_FC(s32, s32);
s32 obj_getField1c(s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
int obj_clearArrS16_FC(void*, void*);
void clear_s16_arrays__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80010A78(void);
void TObjPlayer__sub_80010A80(void);

void apply_switch_attack__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x1FD, 0x50);
    if (temp_r3 != 0) {
        TObjPlayer__sub_80087638(temp_r3, obj_getField1c(arg0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80010E40
#include "types.h"

extern "C" {

void TObjPlayer__sub_80010E40(void);

void TObjPlayer__sub_80010E40(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80010FCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TOMineTrap__sub_80010F54(void* a0 = 0, void* a1 = 0);

s32 add_id_to_slots__10TObjPlayerFiUs(void *, s32);
s32 obj_getArrU16_FC(s32, s32);
s32 is_split_screen();
s32 obj_getField1c(u32);
void fn_80010EBC(void);
void fn_80010EC0(void);
void fn_80010EC4(void);
void fn_80010EC8(void);
u16 fn_80010F4C(void* p);
void TObjPlayer__sub_80011010(void);

void attach_mine_trap__10TObjPlayerFiUi(s32 arg0, u32 arg1) {
    if (arg1 != 0U) {
        TOMineTrap__sub_80010F54((void*)(arg0), (void*)(obj_getField1c(arg1)));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80011010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 add_id_to_slots__10TObjPlayerFiUs(void *, s32);
s32 obj_getArrU16_FC(s32, s32);
s32 is_split_screen();
s32 obj_getField1c(u32);
void fn_80010EBC(void);
void fn_80010EC0(void);
void fn_80010EC4(void);
void fn_80010EC8(void);
u16 fn_80010F4C(void* p);
void TObjPlayer__sub_80011010(void);

void TObjPlayer__sub_80011010(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80011014
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi(s32 arg0);
s32 rand__11TOBoss4RockFv();
f32 calc_random_ratio__10TObjPlayerFv(s32);

s32 get_main_phase();
extern M2C_UNK TObjPlayer__data_80434080;
extern f32 lbl_805D7D38;

f32 calc_boss4_scale__10TObjPlayerFi(s32 arg0) {
    if (get_main_phase() == 0xE) {
        return lbl_805D7D38 * (f32) rand__11TOBoss4RockFv();
    }
    return calc_random_ratio__10TObjPlayerFv(arg0 + 0x160);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80011080
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_with_position_override__10TObjPlayerFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
M2C_UNK TBoss1Dragon__sub_8014220C(void *, void *, void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjPlayer__sub_800F09E8(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern const f32 lbl_805D7D40;
extern const f32 TObjPlayer__data_805D7D44;

void render_with_position_override__10TObjPlayerFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 spC;
    s32 sp8;

    TObjPlayer__sub_803D9B2C();
    TBoss1Dragon__sub_8014220C((void *) (arg0 + 0x248), (void *) (&spC), (void *) (&sp8));
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (lbl_805D7D40 + M2C_FIELD(arg0, f32 *, 0x3C)), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
    TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (sp8));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (spC));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (-0x4000));
    if (arg1 != NULL) {
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (M2C_FIELD(arg1, f32 *, 0)), (f32) (M2C_FIELD(arg1, f32 *, 8)), (f32) (TObjPlayer__data_805D7D44));
    }
    TObjPlayer__sub_800F09E8((void *) (arg2));
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001119C
#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 TObjPlayer__sub_8001119C(void* p);

s32 TObjPlayer__sub_8001119C(void* p) { return *(s32*)((char*)*(void**)((char*)p + 0x2b0) + 0x18); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80011304
#include "types.h"

extern "C" {
int TObjPlayer__sub_800112D4(void* a0 = 0, void* a1 = 0);

s32 obj_isState2_324();
s32 TObjPlayer__sub_8001119C(void* p);

s32 check_can_act__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (obj_isState2_324() != 0) {
        return 0;
    }
    return TObjPlayer__sub_800112D4((void*)(arg0), (void*)(arg1));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001148C
#include "types.h"

extern "C" {
int TObjectV8047c128_subtract_hp(void* a0 = 0, void* a1 = 0);

s32 obj_isState2_324();
s32 TObjPlayer__sub_8001119C(void* p);

s32 damage_hp__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (obj_isState2_324() != 0) {
        return 0;
    }
    return TObjectV8047c128_subtract_hp((void*)(arg0), (void*)(arg1));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80014830
#include "types.h"

extern "C" {

int obj_clearFlags30(void*, void*);
void reset_pose__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80014830(void);
int TObjPlayer__sub_80014838(void);
void TObjPlayer__sub_80014840(void);
void TObjPlayer__sub_80014884(void);
void TObjPlayer__sub_80014888(void);
void TObjPlayer__sub_8001488C(void);
void TObjPlayer__sub_80014890(void);
void TObjPlayer__sub_80014894(void);
void TObjPlayer__sub_80014898(void);

int TObjPlayer__sub_80014830(void) { return 0; }
int TObjPlayer__sub_80014838(void) { return 0; }
void TObjPlayer__sub_80014840(void) {  }
void reset_pose__10TObjPlayerFPv(void* p) { obj_clearFlags30(p, (void*)2048); *(short*)((char*)p + 0x32c) = *(short*)((char*)p + 0x2b8); *(short*)((char*)p + 0x32e) = *(short*)((char*)p + 0x2ba); }
void TObjPlayer__sub_80014884(void) {  }
void TObjPlayer__sub_80014888(void) {  }
void TObjPlayer__sub_8001488C(void) {  }
void TObjPlayer__sub_80014890(void) {  }
void TObjPlayer__sub_80014894(void) {  }
void TObjPlayer__sub_80014898(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80015CB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOSwitchAttack__sub_80087278(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_testFlags30(void * a0 = 0, s32 a1 = 0);
void copy_entry_bytes__10TObjPlayerFPvPv(void* p, void* q);

void trigger_switch_attack__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (obj_testFlags30(arg0, 0x02000000) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2E4);
        switch (temp_r0) {
        case 1:
            TOSwitchAttack__sub_80087278(arg1, 0xF1, 0x40);
            return;
        case 2:
            TOSwitchAttack__sub_80087278(arg1, 0xF2, 0x40);
            return;
        case 4:
            TOSwitchAttack__sub_80087278(arg1, 0xE3, 0x40);
            return;
        case 8:
            TOSwitchAttack__sub_80087278(arg1, 0x10D, 0x40);
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80015DB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOSwitchAttack__sub_80087278(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_testFlags30(void * a0 = 0, s32 a1 = 0);
void copy_entry_bytes__10TObjPlayerFPvPv(void* p, void* q);

void copy_entry_bytes__10TObjPlayerFPvPv(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A85A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_any_teammate_in_state__10TObjPlayerFv(void);
s32 TObjPlayer__sub_800196EC();
s32 get_field_3e4__10TObjPlayerFPv();
s32 TObjPlayer__sub_801AA17C(void *, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

s32 is_any_teammate_in_state__10TObjPlayerFv(void) {
    struct { u8 _pad[0x20]; } sp8;
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = TObjPlayer__sub_800196EC();
    var_r30 = 0;
loop_1:
    if ((TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U) && (temp_r31 == get_field_3e4__10TObjPlayerFPv()) && (TObjPlayer__sub_801AA17C(&sp8, var_r30) == 2)) {
        return 1;
    }
    var_r30 += 1;
    if (var_r30 >= 4) {
        return 0;
    }
    goto loop_1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A9BAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct SA9_801a9bac {
    char pad0[0x44];
    s32 f44;
    s32 f48;
    s32 pad4C;
    s32 arr50[4];
    s32 arr60[4];
} SA9_801a9bac;

void update_and_destroy__10TObjPlayerFPv(u8 *arg0);
void update_target__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_801A92B0(void *);
M2C_UNK TObjPlayer__sub_801A9870(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK TObjPlayer__sub_801A72C8(s32, s32, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_and_destroy__10TObjPlayerFPv(u8 *arg0) {
    SA9_801a9bac *self = (SA9_801a9bac *)arg0;
    s32 temp_r0;
    s32 var_r31;
    s32 var_r30;
    s32 var_r28;
    s32 var_r27;
    s32 inner;

    self->f44 += 1;
    if (self->f48 < self->f44) {
        for (var_r28 = 0; var_r28 < 4; var_r28++) {
            temp_r0 = self->arr50[var_r28];
            if ((temp_r0 == 4) || (temp_r0 == 5)) {
                for (var_r27 = 0; var_r27 < 4; var_r27++) {
                    inner = self->arr60[var_r27];
                    if ((u32) inner < 4U) {
                        TObjPlayer__sub_801A72C8(inner, self->arr50[var_r28], 1);
                    }
                }
            }
        }
        TObjPlayer__sub_801A92B0(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void update_target__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x3C));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        TObjPlayer__sub_801A9870(arg0);
        return;
    }
    update_and_destroy__10TObjPlayerFPv((u8 *)(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AA220
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_photon_blast__10TObjPlayerFiUs(s32 arg0, u16 arg1);
void* get_photon_blast_entry__10TObjPlayerFi(int a0);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
s32 TObjPlayer__sub_80019248(s32);
M2C_UNK TPhotonMagicSquare__sub_801AD330(void *, s32, s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, s16);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);

extern s32 tl_07;

void start_photon_blast__10TObjPlayerFiUs(s32 arg0, u16 arg1) {
    s32 temp_r3;
    void *temp_r31;
    void *temp_nw;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (temp_r3 != 0) {
        temp_r31 = get_photon_blast_entry__10TObjPlayerFi((int)(arg0));
        if (TObjPlayer__sub_80019248(temp_r3) != 0) {
            play_effect_default__10TObjPlayerFii(temp_r3, M2C_FIELD(temp_r31, s16 *, 0x20));
        }
        TObjEneDellBiter__sub_80087350(temp_r3 + 0x38, 0x13D);
        set_shake_preset__11TCameraCtrlFi(0);
        switch (arg0) {
        case 2:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 2, arg1);
                return;
            }
            break;
        case 3:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 3, arg1);
                return;
            }
            break;
        case 4:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 4, arg1);
                return;
            }
            break;
        case 0:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 0, arg1);
                return;
            }
            break;
        case 1:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 1, arg1);
                return;
            }
            break;
        case 5:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 5, arg1);
            }
            break;
        }
    }
}

    extern unsigned char lbl_804C32C0[];
void* get_photon_blast_entry__10TObjPlayerFi(int a0) {  return (char*)lbl_804C32C0 + a0 * 44; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AA508
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_803966F8(s32, s32 *, s32, s32);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
void* TObjPlayer__sub_801AA61C(void* p);
s16 get_hp__10TObjPlayerFPv(void* p);
u16 get_section_id__10TObjPlayerFPv(void* p);
void set_field_2__10TObjPlayerFPvs(void* p, s16 v);
void set_type__10TObjPlayerFPvs(void* p, s16 v);
u16 get_entity_type__10TObjPlayerFPv(void* p);

s16 get_hp__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2cc); }
u16 get_section_id__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }
void set_field_2__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void set_type__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
s32 TObjPlayer__sub_801AA528(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        TObjPlayer__sub_803966F8(arg0 + 8, (s32 *)TObjPlayer__sub_801AA584, 4, 4);
        if (arg1 > 0) {
            __dl__FPv((void*)(arg0));
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AA5C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK init_forward__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80313138(void *);
M2C_UNK __construct_array(void *, void *, void *, int, int);
s32 TObjPlayer__sub_803966F8(s32, s32 *, s32, s32);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
void* TObjPlayer__sub_801AA61C(void* p);
s16 get_hp__10TObjPlayerFPv(void* p);
u16 get_section_id__10TObjPlayerFPv(void* p);
void set_field_2__10TObjPlayerFPvs(void* p, s16 v);
void set_type__10TObjPlayerFPvs(void* p, s16 v);
u16 get_entity_type__10TObjPlayerFPv(void* p);

s32 init_arrays__10TObjPlayerFi(s32 arg0) {
    init_forward__10TObjPlayerFPv((void *) (arg0 + 4));
    __construct_array((void *) (arg0 + 8), (void *) (&TObjPlayer__sub_801AA61C), (void *) (&TObjPlayer__sub_801AA584), (int) (4), (int) (4));
    TObjPlayer__sub_80313138((void *) (arg0));
    return arg0;
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AA61C
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_803966F8(s32, s32 *, s32, s32);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
void* TObjPlayer__sub_801AA61C(void* p);
s16 get_hp__10TObjPlayerFPv(void* p);
u16 get_section_id__10TObjPlayerFPv(void* p);
void set_field_2__10TObjPlayerFPvs(void* p, s16 v);
void set_type__10TObjPlayerFPvs(void* p, s16 v);
u16 get_entity_type__10TObjPlayerFPv(void* p);

void* TObjPlayer__sub_801AA61C(void* p) { TObjPlayer__sub_801AA64C(p); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AA664
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_803966F8(s32, s32 *, s32, s32);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
void* TObjPlayer__sub_801AA61C(void* p);
s16 get_hp__10TObjPlayerFPv(void* p);
u16 get_section_id__10TObjPlayerFPv(void* p);
void set_field_2__10TObjPlayerFPvs(void* p, s16 v);
void set_type__10TObjPlayerFPvs(void* p, s16 v);
u16 get_entity_type__10TObjPlayerFPv(void* p);

u16 get_entity_type__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }
void* TObjPlayer__sub_801AA66C(void* p, void* a1) { *(short*)(p) = *(unsigned short*)(a1); *(short*)((char*)p + 0x2) = *(short*)((char*)a1 + 0x2); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); TObjPlayer__sub_801AA6E4((char*)p + 0x8, (char*)a1 + 0x8); TObjPlayer__sub_801AA6E4((char*)p + 0xc, (char*)a1 + 0xc); TObjPlayer__sub_801AA6E4((char*)p + 0x10, (char*)a1 + 0x10); TObjPlayer__sub_801AA6E4((char*)p + 0x14, (char*)a1 + 0x14); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AA6F8
#include "types.h"

extern "C" {

void TObjPlayer__sub_801AA6F8(void* a0);

    extern const float lbl_805DC138;
void TObjPlayer__sub_801AA6F8(void* a0) { *(float*)((char*)a0 + 0x180) = lbl_805DC138; *(float*)((char*)a0 + 0x184) = lbl_805DC138; *(float*)((char*)a0 + 0x188) = lbl_805DC138; *(float*)((char*)a0 + 0x18c) = lbl_805DC138; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AEB84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_luck_reward__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void add_dfp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void add_evp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void add_mst_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void add_stat_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void set_speed_scaled_by_camera__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void apply_speed_with_camera_scale__10TObjPlayerFiUc(s32 arg0, u8 arg1);
s32 TLobby__sub_800822E8(s32, s32);
s32 TLobby__sub_8030A7B0();
M2C_UNK TObjPlayer__sub_80011274(void *, int);
M2C_UNK TObjPlayer__sub_80011378(void *, int);
int TObjPlayer__sub_80019248(void*);
void TObjPlayer__sub_801AEB80(void);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
int get_max_level__10TObjPlayerFv(void);
s32 TObjPlayer__sub_801AF868(s32);
s32 TObjPlayer__sub_801AFDB0(void *);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
s32 TObjPlayer__sub_801BF19C(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 TObjPlayer__sub_801BF3E8(s32);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK add_dfp__10TObjPlayerFPvi(void *, int);
M2C_UNK add_evp__10TObjPlayerFPvi(void *, int);
M2C_UNK add_item_count__10TObjPlayerFiii(void *, void *, int);
M2C_UNK add_item_count_kind4__10TObjPlayerFiii(void *, void *, int);
M2C_UNK add_lck__10TObjPlayerFPvi(void *, int);
M2C_UNK add_mst__10TObjPlayerFPvi(void *, int);
M2C_UNK add_stat__10TObjPlayerFPvi(void *, int);
s32 check_camera_mode__10TObjPlayerFv();
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 get_main_phase();
s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 reset_volopt_state__10TObjPlayerFv(s32);
int test_flag_2000000__10TObjPlayerFPv(void*);
M2C_UNK try_add_item__10TObjPlayerFiii(void *, void *, int);
M2C_UNK try_add_item_count_kind3__10TObjPlayerFiii(void *, void *, int);
M2C_UNK try_add_item_count_type2__10TObjPlayerFiii(void *, void *, int);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
s32 update_movement_by_screen__10TObjPlayerFv(s32);

#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void apply_luck_reward__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_lck__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    add_item_count_kind4__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (TObjPlayer__sub_801AFDB0((void *) (arg0))), (int) (1));
}

}
void add_dfp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_dfp__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    try_add_item_count_kind3__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (TObjPlayer__sub_801AFDB0((void *) (arg0))), (int) (1));
}

}
void add_evp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_evp__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    try_add_item_count_type2__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (TObjPlayer__sub_801AFDB0((void *) (arg0))), (int) (1));
}

}
void add_mst_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_mst__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    add_item_count__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (TObjPlayer__sub_801AFDB0((void *) (arg0))), (int) (1));
}

}
void add_stat_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_stat__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    try_add_item__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (TObjPlayer__sub_801AFDB0((void *) (arg0))), (int) (1));
}

}
void set_speed_scaled_by_camera__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    TObjPlayer__sub_80011274((void *) (arg0), (int) (var_r31));
}

}
void apply_speed_with_camera_scale__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    TObjPlayer__sub_80011378((void *) (arg0), (int) (var_r31));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AEE10
#include "types.h"

extern "C" {

s32 check_camera_mode__10TObjPlayerFv();
s32 TLobby__sub_8030A7B0();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 reset_volopt_state__10TObjPlayerFv(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 TLobby__sub_800822E8(s32, s32);
s32 update_movement_by_screen__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801BF19C(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 TObjPlayer__sub_801BF3E8(s32);
int TObjPlayer__sub_80019248(void*);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801AEB80(void);
int get_max_level__10TObjPlayerFv(void);

u8 is_final_phase__10TObjPlayerFv(void) {
    return (u8) (get_main_phase() == 0xF);
}
u8 is_camera_ready__10TObjPlayerFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((check_camera_mode__10TObjPlayerFv() != 0) && (TLobby__sub_8030A7B0() == 2)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
u8 is_camera_mode_active__10TObjPlayerFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((check_camera_mode__10TObjPlayerFv() != 0) && (TLobby__sub_8030A7B0() == 1)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
u8 is_single_screen__10TObjPlayerFv(void) {
    return (u8) (is_not_split_screen__13TRaderMapCoreFv() == 1);
}
s32 is_player_valid_target__10TObjPlayerFi(s32 arg0) {
    s32 temp_r31;

    if (TObjPlayer__sub_80354E3C() == 0) {
        return 0;
    }
    temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if ((TObjPlayer__sub_80354C7C(arg0) == 0) || (check_flag_100__10TObjPlayerFPv(temp_r31) != 0) || (reset_volopt_state__10TObjPlayerFv(temp_r31) == 0)) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AEFFC
#include "types.h"

extern "C" {

s32 check_camera_mode__10TObjPlayerFv();
s32 TLobby__sub_8030A7B0();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 reset_volopt_state__10TObjPlayerFv(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 TLobby__sub_800822E8(s32, s32);
s32 update_movement_by_screen__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801BF19C(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 TObjPlayer__sub_801BF3E8(s32);
int TObjPlayer__sub_80019248(void*);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801AEB80(void);
int get_max_level__10TObjPlayerFv(void);

void stop_force_if_alive__10TObjPlayerFPv(void* p) { if (TObjPlayer__sub_80019248(p) != 0) { TObjPlayer__sub_801BEF60((char*)p + 0x550, (void*)0); } }
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p) { if (test_flag_2000000__10TObjPlayerFPv(p) == 0) { TObjPlayer__sub_801BEF68((char*)p + 0x384); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AF1B8
#include "types.h"

extern "C" {

s32 check_camera_mode__10TObjPlayerFv();
s32 TLobby__sub_8030A7B0();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 reset_volopt_state__10TObjPlayerFv(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 TLobby__sub_800822E8(s32, s32);
s32 update_movement_by_screen__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801BF19C(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 TObjPlayer__sub_801BF3E8(s32);
int TObjPlayer__sub_80019248(void*);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801AEB80(void);
int get_max_level__10TObjPlayerFv(void);

void update_movement_effects__10TObjPlayerFi(s32 arg0) {
    if ((is_technique_ready__8TTecCtrlFv() != 0) && (TObjPlayer__sub_801AF868(arg0) == 0) && (update_movement_by_screen__10TObjPlayerFv(arg0) != 0) && (TLobby__sub_800822E8(arg0, 0x408000) == 0) && (test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) == 0) && (check_flag_800000__10TObjPlayerFPv(arg0) == 0)) {
        TObjPlayer__sub_801BF1DC(arg0 + 0x384);
    }
    if ((test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) == 0) && (TLobby__sub_800822E8(arg0, 2) != 0) && (TObjPlayer__sub_801BF3E8(arg0 + 0x360) != 0)) {
        TObjPlayer__sub_801BF19C(arg0 + 0x384);
    }
}
int get_max_level__10TObjPlayerFv(void) { return 199; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AF3C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801AF3C4 { char pad[0x8]; };
struct VObj_801AF3C4 : Base_801AF3C4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
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
    virtual s32 m75(s32);
};

extern "C" {

void update_facing_from_lock__10TObjPlayerFPv(void *arg0);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, s32);

void update_facing_from_lock__10TObjPlayerFPv(void *arg0) {
    if (((VObj_801AF3C4 *)M2C_FIELD(arg0, void **, 0x380))->m8() != 0) {
        set_field_dc__10TObjPlayerFPvi(arg0, ((VObj_801AF3C4 *)M2C_FIELD(arg0, void **, 0x380))->m75(1));
        return;
    }
    set_field_dc__10TObjPlayerFPvi(arg0, ((VObj_801AF3C4 *)M2C_FIELD(arg0, void **, 0x380))->m75(0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AF490
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_battle_value__10TObjPlayerFiii(s32 arg0, int arg1, s32 arg2);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TObjPlayer__sub_801AFDB0(s32);
f32 fn_801D94C8(s32, s32);

extern f32 TObjPlayer__data_805DC278;

f32 get_battle_value__10TObjPlayerFiii(s32 arg0, int arg1, s32 arg2) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((u16)arg1) == 0U) {
        return TObjPlayer__data_805DC278;
    }
    return fn_801D94C8(TObjPlayer__sub_801AFDB0(arg0), arg2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AF5B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 is_camera_ready__10TObjPlayerFv();
s32 is_ready__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_80203418();
s32 reset_key_machine_state__10TObjPlayerFv();
u32 TObjPlayer__sub_801C6D40(s32 a0 = 0, s32 a1 = 0);
s32 TObjPlayer__sub_801BF40C(u32 a0 = 0, s32 a1 = 0);
s32 TFontSmallLobby__sub_801AFEE0(void);
s32 obj_getField1c(void * a0 = 0);
s32 set_facing__10TObjPlayerFPvs(void * a0 = 0, s16 a1 = 0);
s32 TObjPlayer__sub_800113E4(void * a0 = 0, s16 a1 = 0);
int update_rotation__10TObjPlayerFPv(void*);
int obj_clearFlags30(void*, void*);
int TObjPlayer__sub_801AF694(void* p);
int fn_801C543C(void*);

void play_voice_pair__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_800113E4(arg0, M2C_FIELD(arg0, s16 *, 0x2B8));
    set_facing__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0x2BA));
}
void TObjPlayer__vt62(void* p) { obj_clearFlags30(p, (void*)2048); update_rotation__10TObjPlayerFPv(p); }
u32 get_or_create_lobby_font__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    u32 temp;

    if (TFontSmallLobby__sub_801AFEE0() == 0) {
        return 0U;
    }
    temp = M2C_FIELD(arg0, u32 *, 0x3B8);
    if (temp == 0U) {
        M2C_FIELD(arg0, u32 *, 0x3B8) = TObjPlayer__sub_801C6D40(obj_getField1c(arg0), arg1);
    } else {
        TObjPlayer__sub_801BF40C(temp, arg1);
    }
    return M2C_FIELD(arg0, u32 *, 0x3B8);
}
int TObjPlayer__sub_801AF694(void* p) { return fn_801C543C((char*)p + 0x7c4); }
s32 is_action_available__10TObjPlayerFi(s32 arg0) {
    if ((reset_key_machine_state__10TObjPlayerFv() == 0) || (TObjPlayer__sub_80203418() != 0)) {
        return 0;
    }
    if (is_camera_ready__10TObjPlayerFv() != 0) {
        return (u32)__cntlzw(obj_testFlags30(arg0, 0x20000)) >> 5;
    }
    return is_ready__10TObjPlayerFPv(arg0) != 0 ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AF790
#include "types.h"

extern "C" {

s32 is_alive_and_ready__10TObjPlayerFi(s32 arg0);
s32 is_ready__10TObjPlayerFPv(s32);
s32 is_technique_ready__8TTecCtrlFv();

s32 is_alive_and_ready__10TObjPlayerFi(s32 arg0) {
    if ((is_technique_ready__8TTecCtrlFv() == 0) && (is_ready__10TObjPlayerFPv(arg0) != 0)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AF834
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_movement_by_screen__10TObjPlayerFv(void);
s32 is_single_screen__10TObjPlayerFv();
M2C_UNK TLobby__sub_801C2678();
M2C_UNK TLobby__sub_803100FC();

void update_movement_by_screen__10TObjPlayerFv(void) {
    if (is_single_screen__10TObjPlayerFv() != 0) {
        TLobby__sub_803100FC();
        return;
    }
    TLobby__sub_801C2678();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AF8D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flags_a00__10TObjPlayerFPv(void *arg0);

M2C_UNK obj_setFlags30(void *, M2C_UNK);

void set_flags_a00__10TObjPlayerFPv(void *arg0) {
    if (arg0 != NULL) {
        obj_setFlags30(arg0, 0xA00);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AF95C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_stats__10TObjPlayerFiPv(s32 arg0, void *arg1);
s32 get_max_level__10TObjPlayerFv();
M2C_UNK check_stat_flag_41c__10TObjPlayerFPv(s32);
M2C_UNK check_flag_at_41c__10TObjPlayerFPv(s32);
M2C_UNK set_flag_41c_bit1__10TObjPlayerFPv(s32);
M2C_UNK clamp_stat_41c__10TObjPlayerFPv(s32);
void *get_quest_id__12TQuestListVMFPv();
M2C_UNK TObjPlayer__sub_801AFDB0(s32);
s32 get_current_state_field__10TObjPlayerFv(s32, s32);
void *TObjPlayer__sub_801D9390();

void clamp_stats__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r0_4;
    s16 temp_r0_5;
    s16 temp_r0_6;
    s16 temp_r0_7;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 temp_r3_3;
    s16 temp_r3_4;
    s16 temp_r3_5;
    s16 temp_r3_6;
    s16 temp_r3_7;
    s16 temp_r4;
    s32 temp_r27;
    s32 temp_r28_2;
    s32 temp_r28_3;
    s32 temp_r3_8;
    s32 temp_r4_2;
    void *temp_r28;
    void *temp_r31;

    temp_r31 = get_quest_id__12TQuestListVMFPv();
    TObjPlayer__sub_801AFDB0(arg0);
    temp_r28 = TObjPlayer__sub_801D9390();
    temp_r4 = M2C_FIELD(temp_r31, s16 *, 0);
    if (temp_r4 < 0) {
        M2C_FIELD(arg1, s16 *, 0) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0 = M2C_FIELD(temp_r28, s16 *, 0);
        if (temp_r4 > temp_r0) {
            M2C_FIELD(arg1, s16 *, 0) = temp_r0;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 0) = temp_r4;
        }
    }
    temp_r3 = M2C_FIELD(temp_r31, s16 *, 2);
    if (temp_r3 < 0) {
        M2C_FIELD(arg1, s16 *, 2) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_2 = M2C_FIELD(temp_r28, s16 *, 2);
        if (temp_r3 > temp_r0_2) {
            M2C_FIELD(arg1, s16 *, 2) = temp_r0_2;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 2) = temp_r3;
        }
    }
    temp_r3_2 = M2C_FIELD(temp_r31, s16 *, 4);
    if (temp_r3_2 < 0) {
        M2C_FIELD(arg1, s16 *, 4) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_3 = M2C_FIELD(temp_r28, s16 *, 4);
        if (temp_r3_2 > temp_r0_3) {
            M2C_FIELD(arg1, s16 *, 4) = temp_r0_3;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 4) = temp_r3_2;
        }
    }
    if (M2C_FIELD(temp_r31, s16 *, 6) < 0) {
        M2C_FIELD(arg1, s16 *, 6) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    }
    temp_r3_3 = M2C_FIELD(temp_r31, s16 *, 6);
    temp_r0_4 = M2C_FIELD(temp_r28, s16 *, 6);
    if (temp_r3_3 > temp_r0_4) {
        M2C_FIELD(arg1, s16 *, 6) = temp_r0_4;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        M2C_FIELD(arg1, s16 *, 6) = temp_r3_3;
    }
    temp_r3_4 = M2C_FIELD(temp_r31, s16 *, 8);
    if (temp_r3_4 < 0) {
        M2C_FIELD(arg1, s16 *, 8) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_5 = M2C_FIELD(temp_r28, s16 *, 8);
        if (temp_r3_4 > temp_r0_5) {
            M2C_FIELD(arg1, s16 *, 8) = temp_r0_5;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 8) = temp_r3_4;
        }
    }
    temp_r3_5 = M2C_FIELD(temp_r31, s16 *, 0xA);
    if (temp_r3_5 < 0) {
        M2C_FIELD(arg1, s16 *, 0xA) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_6 = M2C_FIELD(temp_r28, s16 *, 0xA);
        if (temp_r3_5 > temp_r0_6) {
            M2C_FIELD(arg1, s16 *, 0xA) = temp_r0_6;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 0xA) = temp_r3_5;
        }
    }
    temp_r3_6 = M2C_FIELD(temp_r31, s16 *, 0xC);
    if (temp_r3_6 < 0) {
        M2C_FIELD(arg1, s16 *, 0xC) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        temp_r0_7 = M2C_FIELD(temp_r28, s16 *, 0xC);
        if (temp_r3_6 > temp_r0_7) {
            M2C_FIELD(arg1, s16 *, 0xC) = temp_r0_7;
            clamp_stat_41c__10TObjPlayerFPv(arg0);
        } else {
            M2C_FIELD(arg1, s16 *, 0xC) = temp_r3_6;
        }
    }
    temp_r3_7 = M2C_FIELD(temp_r31, s16 *, 0xE);
    if (temp_r3_7 < 0) {
        M2C_FIELD(arg1, s16 *, 0xE) = 1;
        clamp_stat_41c__10TObjPlayerFPv(arg0);
    } else {
        M2C_FIELD(arg1, s16 *, 0xE) = temp_r3_7;
    }
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(temp_r31, f32 *, 0x10);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(temp_r31, f32 *, 0x14);
    temp_r28_2 = M2C_FIELD(temp_r31, s32 *, 0x18);
    temp_r27 = get_max_level__10TObjPlayerFv();
    if (temp_r28_2 < 0) {
        M2C_FIELD(arg1, s32 *, 0x18) = 0;
        set_flag_41c_bit1__10TObjPlayerFPv(arg0);
    } else if (temp_r28_2 > temp_r27) {
        M2C_FIELD(arg1, s32 *, 0x18) = temp_r27;
        set_flag_41c_bit1__10TObjPlayerFPv(arg0);
    } else {
        M2C_FIELD(arg1, s32 *, 0x18) = temp_r28_2;
    }
    temp_r28_2 = M2C_FIELD(temp_r31, s32 *, 0x1C);
    temp_r3_8 = get_current_state_field__10TObjPlayerFv(TObjPlayer__sub_801AFDB0(arg0), temp_r27);
    if (temp_r28_2 < 0) {
        M2C_FIELD(arg1, s32 *, 0x1C) = 0;
        check_flag_at_41c__10TObjPlayerFPv(arg0);
    } else if (temp_r28_2 > temp_r3_8) {
        M2C_FIELD(arg1, s32 *, 0x1C) = temp_r3_8;
        check_flag_at_41c__10TObjPlayerFPv(arg0);
    } else {
        M2C_FIELD(arg1, s32 *, 0x1C) = temp_r28_2;
    }
    temp_r4_2 = M2C_FIELD(temp_r31, s32 *, 0x20);
    if (temp_r4_2 < 0) {
        M2C_FIELD(arg1, s32 *, 0x20) = 0;
        check_stat_flag_41c__10TObjPlayerFPv(arg0);
        return;
    }
    if (temp_r4_2 > 0xF423F) {
        M2C_FIELD(arg1, s32 *, 0x20) = 0xF423F;
        check_stat_flag_41c__10TObjPlayerFPv(arg0);
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x20) = temp_r4_2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AFC68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjPlayer__vt20(s32 arg0, s32 arg1, f32 farg0);
f32 TObjPlayer__sub_80014108(s32, s32, f32);

s32 obj_isState2_324();
extern f32 TObjPlayer__data_805DC278;

f32 TObjPlayer__vt20(s32 arg0, s32 arg1, f32 farg0) {
    if (obj_isState2_324() != 0) {
        return TObjPlayer__data_805DC278;
    }
    return TObjPlayer__sub_80014108(arg0, arg1, farg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AFCCC
#include "types.h"

extern "C" {

s16 get_handle_value__10TObjPlayerFPv(void* p);
int sub_802a7290_fwd__10TObjPlayerFPv(void*);

s16 get_handle_value__10TObjPlayerFPv(void* p) { return (s16)(sub_802a7290_fwd__10TObjPlayerFPv(*(void**)((char*)p + 0x380))); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B8C78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_input__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_801D49F4(s32, void *, s32, s32, void *);

void dispatch_input__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    TObjPlayer__sub_801D49F4(M2C_FIELD(arg0, s32 *, 0xD00), arg0, arg1, arg2, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B8D30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK use_item__6TLobbyFiiii(s32, void *, s32, s32, void *);

void dispatch_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    use_item__6TLobbyFiiii(M2C_FIELD(arg0, s32 *, 0xD00), arg0, arg1, arg2, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B90C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 can_pickup_item__10TObjPlayerFPvPv(void *arg0, u8 *arg1);
void can_pickup_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 copy_and_register_item_data__11TItemObjectFPv();
M2C_UNK copy_to_item_data__5TItemFPvPv(s32, M2C_UNK *);
s32 lookup_item_def__9TItemDataFPv(u8 *);
u32 get_item_type_or_default__9TItemListFPv(u8 *);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(void *, u8 *);
void *get_owner_if_alive__10TObjPlayerFPv();

s32 obj_getPtr2B0_20(void *);

}

struct Base_B { char pad[0x18]; };
struct V_B : Base_B {
    virtual void f0();
    virtual void f1(); virtual void f2(); virtual void f3();
    virtual void f4(); virtual void f5(); virtual void f6();
    virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(); virtual void f11(); virtual void f12();
    virtual void f13(); virtual void f14(); virtual void f15();
    virtual void f16(); virtual void f17(); virtual void f18();
    virtual void f19(); virtual void f20(); virtual void f21();
    virtual void f22(); virtual void f23(); virtual void f24();
    virtual void f25(); virtual void f26(); virtual void f27();
    virtual void f28(); virtual void f29(); virtual void f30();
    virtual void f31(); virtual void f32(); virtual void f33();
    virtual s32 m34();
};

extern "C" {

s32 can_pickup_item__10TObjPlayerFPvPv(void *arg0, u8 *arg1) {
    s32 temp_r31;
    s32 temp_r31_2;
    void *temp_r3;

    if (lookup_item_def__9TItemDataFPv(arg1) != 0) {
        if ((u8) *arg1 == 4) {
            return obj_getPtr2B0_20(arg0) < 0xF423F;
        }
        if (set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, void **, 0xD00), arg1) != 0U) {
            temp_r3 = get_owner_if_alive__10TObjPlayerFPv();
            if (temp_r3 == NULL) {
                return 0;
            }
            temp_r31_2 = copy_and_register_item_data__11TItemObjectFPv();
            temp_r31 = temp_r31_2 - ((V_B *)temp_r3)->m34();
            return ((s32) get_item_type_or_default__9TItemListFPv(arg1) <= temp_r31) ? 1 : 0;
        }
        goto block_7;
    }
block_7:
    if ((s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0xD00), s16 *, 0x1C) >= 0x1E) {
        return 0;
    }
    return 1;
}

void can_pickup_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1) {
    M2C_UNK sp8[5];

    copy_to_item_data__5TItemFPvPv(arg1, sp8);
    can_pickup_item__10TObjPlayerFPvPv((void *)(arg0), (u8 *)(sp8));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B93F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_target_lock__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_801B92EC(void *, s32);
u32 TPhotonMylla__sub_80154CB4(u16);
s32 get_position_ptr__10TObjPlayerFPv();
M2C_UNK fn_801C1B88(s32);
f32 fn_801C1B90(s32, u32);
u16 fn_801C1B98(s32);

extern const f32 lbl_805DC2C0;
extern const f32 lbl_805DC2C4;

s32 update_target_lock__10TObjPlayerFPv(void *arg0) {
    f32 temp_f31;
    u32 temp_r3;
    u16 var_r31;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x424);
    if (temp_r3 == 0U) {
        return 0;
    }
    var_r31 = fn_801C1B98(temp_r3 + 0x510);
    temp_f31 = fn_801C1B90(M2C_FIELD(arg0, u32 *, 0x424) + 0x510, M2C_FIELD(arg0, u32 *, 0x424));
    fn_801C1B88(M2C_FIELD(arg0, u32 *, 0x424) + 0x510);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x100000)) {
        if ((u16) var_r31 == 0xFFFF) {
            return 0;
        }
        if (TPhotonMylla__sub_80154CB4(var_r31) == 0U) {
            return 0;
        }
        if (!(temp_f31 < lbl_805DC2C0)) {
            goto block_17;
        }
        if (TObjPlayer__sub_801B92EC(arg0, get_position_ptr__10TObjPlayerFPv()) == 0) {
            goto block_17;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x100000);
        return 1;
    }
    if ((u16) var_r31 == 0xFFFF) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFEFFFFF);
        return 0;
    }
    if (TPhotonMylla__sub_80154CB4(var_r31) == 0U) {
        return 0;
    }
    if (temp_f31 > lbl_805DC2C4) {
        goto clear_and_return;
    }
    if (TObjPlayer__sub_801B92EC(arg0, get_position_ptr__10TObjPlayerFPv()) != 0) {
        goto block_17;
    }
clear_and_return:
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFEFFFFF);
    return 0;
block_17:
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B95C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void use_current_item__10TObjPlayerFPv(void *arg0);
M2C_UNK create__9TEffGuardFi(M2C_UNK *);
void *test_flag3__9TItemDataFPv();

}

struct Base_801B95C8 { char pad[0x18]; };
struct VObj_801B95C8 : Base_801B95C8 {
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
    virtual void pad29(); virtual void pad30(); virtual void pad31();
    virtual void pad32(); virtual void pad33(); virtual void pad34();
    virtual void pad35(); virtual void pad36(); virtual void pad37();
    virtual void pad38(); virtual void pad39(); virtual void pad40();
    virtual void pad41(); virtual void pad42(); virtual void pad43();
    virtual void pad44(); virtual void pad45(); virtual void pad46();
    virtual void pad47(); virtual void pad48(); virtual void pad49();
    virtual void pad50(); virtual void pad51(); virtual void pad52();
    virtual void pad53(); virtual void pad54(); virtual void pad55();
    virtual void pad56(); virtual void pad57(); virtual void pad58();
    virtual void pad59(); virtual void pad60(); virtual void pad61();
    virtual void pad62();
    virtual void m63(s32, M2C_UNK *);
};

extern "C" {

void use_current_item__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    temp_r3 = test_flag3__9TItemDataFPv();
    if (temp_r3 != NULL) {
        ((VObj_801B95C8*)temp_r3)->m28();
        return;
    }
    ((VObj_801B95C8*)arg0)->m63(0x24, &sp8);
    create__9TEffGuardFi(&sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B9E98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *copy_unequip_fields__10TObjPlayerFPvPv(void *arg0, void *arg1);
M2C_UNK TFontSmallLobby__sub_801C0228();

void *copy_unequip_fields__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BA458
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 end_camera_pan__10TObjPlayerFPv(void *arg0);

extern s32 lbl_805D55C0;

s32 end_camera_pan__10TObjPlayerFPv(void *arg0) {
    if ((s32) lbl_805D55C0 != 0) {
        return 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x320) & 0x10000)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFEFFFF);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BA4BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 start_camera_pan__10TObjPlayerFPvs(u8 *arg0, s16 arg1);
M2C_UNK set_anim_state__10TObjPlayerFPvi(void *, s32);
M2C_UNK set_state__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK set_anim_state__10TObjPlayerFPvs(void *, s16);
M2C_UNK set_action_id__10TObjPlayerFPvs(void *);

s32 start_camera_pan__10TObjPlayerFPvs(u8 *arg0, s16 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x320) & 0x1E000) {
        return 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) == arg1) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10000);
    set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0);
    set_anim_state__10TObjPlayerFPvs(arg0 + 0x5F0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_state__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
    set_anim_state__10TObjPlayerFPvi(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BA54C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_photon_blast__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
M2C_UNK set_anim_state__10TObjPlayerFPvi(void *, s32);
M2C_UNK set_state__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK set_anim_state__10TObjPlayerFPvs(void *, s32);
M2C_UNK set_action_id__10TObjPlayerFPvs(void *, M2C_UNK);

s32 init_photon_blast__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x320) & 0x1E000) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10000);
    set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0x10);
    set_anim_state__10TObjPlayerFPvs(arg0 + 0x5F0, arg1);
    set_state__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
    set_anim_state__10TObjPlayerFPvi(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BA5CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 start_freeze__10TObjPlayerFPv(u8 *arg0);
M2C_UNK set_anim_state__10TObjPlayerFPvi(void *, s32);
M2C_UNK set_state__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK set_anim_state__10TObjPlayerFPvs(void *, s32);
M2C_UNK set_action_id__10TObjPlayerFPvs(void *, M2C_UNK);
s32 TObjPlayer__sub_801D0458(void *);

s32 start_freeze__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x320) & 0x1E000) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10000);
    set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0x10);
    set_anim_state__10TObjPlayerFPvs(arg0 + 0x5F0, TObjPlayer__sub_801D0458(arg0));
    set_state__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
    set_anim_state__10TObjPlayerFPvi(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BA650
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_action_state__10TObjPlayerFPvss(void *arg0, s16 arg1, s16 arg2);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
s32 TObjPlayer__sub_801C00E4(s32);

void set_action_state__10TObjPlayerFPvss(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x32A) = (s16) M2C_FIELD(arg0, s16 *, 0x326);
    M2C_FIELD(arg0, s16 *, 0x326) = arg1;
    if (TObjPlayer__sub_801C00E4(arg2) == 0) {
        M2C_FIELD(arg0, s16 *, 0xB8) = arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x320) = (s32) (1 << arg1);
    set_state_flags__10TObjPlayerFPvUi(arg0, 0x10);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BAA00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_state_transform__10TObjPlayerFUi(u32 arg0);
s32 get_field_3e4__10TObjPlayerFPv(u32);
M2C_UNK set_flag_400000__10TObjPlayerFi();
M2C_UNK TObjPlayer__sub_801C17D0(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801C17EC(M2C_UNK *);
s16 obj_getField1c(u32);
s32 obj_isState2_324(u32);

struct Sp8Struct_801baa00 {
    s16 f0;
    s16 fA;
    s32 fC;
};

void apply_state_transform__10TObjPlayerFUi(u32 arg0) {
    struct Sp8Struct_801baa00 sp8;

    set_flag_400000__10TObjPlayerFi();
    if ((arg0 == 0U) || (obj_isState2_324(arg0) == 0)) {
        TObjPlayer__sub_801C17D0((M2C_UNK *)&sp8);
        sp8.fA = obj_getField1c(arg0);
        sp8.fC = get_field_3e4__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801C17EC((M2C_UNK *)&sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BAC48
#include "types.h"

extern "C" {

void TObjPlayer__sub_801BAC48(void);

void TObjPlayer__sub_801BAC48(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BB330
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__10TObjPlayerFv(u8 *arg0);
s32 get_type__10TObjPlayerFPv(void *);
s32 check_flag__10TObjPlayerFPvi(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801564A0(void *);
M2C_UNK update_movement_effects__10TObjPlayerFi(void *);
M2C_UNK update_subsystems__10TObjPlayerFi(void *);
M2C_UNK update_facing_vector__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801B6F8C(void *);
M2C_UNK update_position_history__10TObjPlayerFPv(void *);
M2C_UNK calc_attach_pos__10TObjPlayerFPv(void *);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK handle_state2_transitions__10TObjPlayerFPv();
M2C_UNK copy_offset_position__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);

s32 obj_testFlags30(void *, M2C_UNK);

void run_task__10TObjPlayerFv(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r0_2;

    handle_state2_transitions__10TObjPlayerFPv();
    update_subsystems__10TObjPlayerFi(arg0);
    update_position_history__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_801B6F8C(arg0);
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 1);
    TBoss1Dragon__sub_80143504(arg0);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    copy_offset_position__10TObjPlayerFPvPv(arg0 + 0x84C, arg0);
    if (obj_testFlags30(arg0, 0x800) != 0) {
        TObjPlayer__sub_80154E3C(arg0);
    } else if (get_type__10TObjPlayerFPv(arg0 + 0x828) == 0) {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x324);
        switch (temp_r0) {
        case 1:
            TObjPlayer__sub_80154E3C(arg0);
            TObjPlayer__sub_801564A0(arg0);
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        case 6:
        case 2:
            TObjPlayer__sub_80154E3C(arg0);
            break;
        case 3:
            TObjPlayer__sub_80154E3C(arg0);
            TObjPlayer__sub_801564A0(arg0);
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x324);
        switch (temp_r0_2) {
        case 3:
        case 1:
            check_object_collisions__10TObjPlayerFPv(arg0);
            TObjPlayer__sub_801564A0(arg0);
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        case 2:
            if (check_flag__10TObjPlayerFPvi(arg0, 4) != 0) {
                TObjPlayer__sub_80154E3C(arg0);
            } else {
                check_object_collisions__10TObjPlayerFPv(arg0);
            }
            break;
        case 6:
            TObjPlayer__sub_80154E3C(arg0);
            break;
        }
    }
    update_movement_effects__10TObjPlayerFi(arg0);
    update_facing_vector__10TObjPlayerFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BB4D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unregister__10TObjPlayerFi(s32 arg0);
M2C_UNK clear_links__10TObjPlayerFPv();
M2C_UNK unregister_sub__10TObjPlayerFPv(s32);

s32 obj_getField1c(s32);
extern M2C_UNK lbl_8050EA10[];

void unregister__10TObjPlayerFi(s32 arg0) {
    clear_links__10TObjPlayerFPv();
    unregister_sub__10TObjPlayerFPv(arg0);
    lbl_8050EA10[(u16)obj_getField1c(arg0)] = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BB8A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 TObjPlayer__sub_801BEB3C(s32);
s8 TObjPlayer__sub_801BEB44(s32);
s8 TObjPlayer__sub_801BEB4C(s32);
void TObjPlayer__sub_801BB8A8(void);
void TObjPlayer__sub_801BB8AC(void);

void TObjPlayer__sub_801BB8A8(void) {  }
void TObjPlayer__sub_801BB8AC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BB900
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 TObjPlayer__sub_801BEB3C(s32);
s8 TObjPlayer__sub_801BEB44(s32);
s8 TObjPlayer__sub_801BEB4C(s32);
void TObjPlayer__sub_801BB8A8(void);
void TObjPlayer__sub_801BB8AC(void);

void init_class_flags__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x338) = TObjPlayer__sub_801BEB4C(arg1);
    M2C_FIELD(arg0, s8 *, 0x339) = TObjPlayer__sub_801BEB44(arg1);
    M2C_FIELD(arg0, s8 *, 0x33A) = TObjPlayer__sub_801BEB3C(arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BBA8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801BBA8C(u8 *arg0, u8 *arg1);
s32 TFontSmallLobby__sub_801AFEE0();
u32 TLockOnCursor__ct(u32, void *, s32);
int TLockOnCursor__sub_8013DAB0(void*);
s32 TObjPlayer__sub_80019248(void *);
M2C_UNK TObjPlayer__sub_801AF7E0(void *);
M2C_UNK TObjPlayer__sub_801B130C(void *);
int TObjPlayer__sub_801B35AC(void*);
void TObjPlayer__sub_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void TObjPlayer__sub_801BBC2C(void* p);
void TObjPlayer__sub_801BBC64(void);
int clear_links__10TObjPlayerFPv(void* p);
s32 is_ready__10TObjPlayerFPv(void *);
M2C_UNK set_play_time__10TObjPlayerFPvi(void *, int);
M2C_UNK TObjPlayer__sub_801BF93C(void *, void *);
s8 TObjPlayer__sub_801C21AC(void *);
s8 TObjPlayer__sub_801C21B4(void *);
s8 TObjPlayer__sub_801C21BC(void *);
u32 __nw__7TObjectFUl(s32);
s32 check_camera_mode__10TObjPlayerFv();
M2C_UNK disable_drop_weapon_on_death__10TObjPlayerFPv(void *);
int clear_obj_links(void*);
s32 is_alive_and_ready__10TObjPlayerFi(void *);
s32 is_single_screen__10TObjPlayerFv();
s32 obj_getField1c(void *);
s32 obj_isState2_324();
s32 obj_isState3_324(void *);
M2C_UNK set_flag_10000__10TObjPlayerFPv(void *);
void update_lock_on_cursor__10TObjPlayerFPv(void* p);

#include "types.h"
extern "C" {

void TObjPlayer__sub_801BBA8C(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s16 *, 0x32E) = (s16) M2C_FIELD(arg0, s16 *, 0x2BA);
    if ((obj_isState2_324() != 0) && (TFontSmallLobby__sub_801AFEE0() == 0) && (check_camera_mode__10TObjPlayerFv() == 0)) {
        TObjPlayer__sub_801B130C((void *) (arg0));
    }
    if (is_ready__10TObjPlayerFPv((void *) (arg0)) != 0) {
        set_flag_10000__10TObjPlayerFPv((void *) (arg0));
    }
    if (is_alive_and_ready__10TObjPlayerFi((void *) (arg0)) != 0) {
        TObjPlayer__sub_801AF7E0((void *) (arg0));
    }
    set_play_time__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD(arg1, u8 *, 3)));
    TObjPlayer__sub_801BF93C((void *) (arg0 + 0x5B0), (void *) (obj_getField1c((void *) (arg0))));
    disable_drop_weapon_on_death__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s8 *, 0x338) = TObjPlayer__sub_801C21BC((void *) (arg1));
    M2C_FIELD(arg0, s8 *, 0x339) = TObjPlayer__sub_801C21B4((void *) (arg1));
    M2C_FIELD(arg0, s8 *, 0x33A) = TObjPlayer__sub_801C21AC((void *) (arg1));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BBB70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248(void *);
s32 obj_isState3_324(void *);
s32 obj_getField1c(void *);
u32 TLockOnCursor__ct(u32, void *, s32);
s32 is_single_screen__10TObjPlayerFv();
u32 __nw__7TObjectFUl(s32);
void TObjPlayer__sub_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void TObjPlayer__sub_801BBC2C(void* p);
void update_lock_on_cursor__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BBC64(void);
int clear_links__10TObjPlayerFPv(void* p);
int TLockOnCursor__sub_8013DAB0(void*);
int clear_obj_links(void*);
int TObjPlayer__sub_801B35AC(void*);

void TObjPlayer__sub_801BBB70(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BBB74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248(void *);
s32 obj_isState3_324(void *);
s32 obj_getField1c(void *);
u32 TLockOnCursor__ct(u32, void *, s32);
s32 is_single_screen__10TObjPlayerFv();
u32 __nw__7TObjectFUl(s32);
void TObjPlayer__sub_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void TObjPlayer__sub_801BBC2C(void* p);
void update_lock_on_cursor__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BBC64(void);
int clear_links__10TObjPlayerFPv(void* p);
int TLockOnCursor__sub_8013DAB0(void*);
int clear_obj_links(void*);
int TObjPlayer__sub_801B35AC(void*);

int TObjPlayer__sub_801BBB74(void* p) { return TObjPlayer__sub_801B35AC(p); }
void TObjPlayer__sub_801BBB94(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BBC2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248(void *);
s32 obj_isState3_324(void *);
s32 obj_getField1c(void *);
u32 TLockOnCursor__ct(u32, void *, s32);
s32 is_single_screen__10TObjPlayerFv();
u32 __nw__7TObjectFUl(s32);
void TObjPlayer__sub_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void TObjPlayer__sub_801BBC2C(void* p);
void update_lock_on_cursor__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BBC64(void);
int clear_links__10TObjPlayerFPv(void* p);
int TLockOnCursor__sub_8013DAB0(void*);
int clear_obj_links(void*);
int TObjPlayer__sub_801B35AC(void*);

void TObjPlayer__sub_801BBC2C(void* p) { *(s32*)((char*)p + 0x424) = 0; }
void update_lock_on_cursor__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) TLockOnCursor__sub_8013DAB0(m); }
void TObjPlayer__sub_801BBC64(void) {  }
void create_lockon_cursor__10TObjPlayerFPv(void *arg0) {
    u32 var_r31;
    u32 var_r31_2;

    if (is_single_screen__10TObjPlayerFv() != 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0U) {
            var_r31 = __nw__7TObjectFUl(0x52C);
            if (var_r31 != 0U) {
                var_r31 = TLockOnCursor__ct(var_r31, arg0, obj_getField1c(arg0));
            }
            M2C_FIELD(arg0, u32 *, 0x424) = var_r31;
        }
    } else if (((TObjPlayer__sub_80019248(arg0) != 0) || (obj_isState3_324(arg0) != 0)) && ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0U)) {
        var_r31_2 = __nw__7TObjectFUl(0x52C);
        if (var_r31_2 != 0U) {
            var_r31_2 = TLockOnCursor__ct(var_r31_2, arg0, obj_getField1c(arg0));
        }
        M2C_FIELD(arg0, u32 *, 0x424) = var_r31_2;
    }
}
int clear_links__10TObjPlayerFPv(void* p) { return clear_obj_links(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BC140
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK save_position__14TBoss4DarkFalzFi(void *);
M2C_UNK TBoss4DarkFalz__sub_8004C220(void *, s32);
M2C_UNK calc_attach_pos__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BEA38(void *, M2C_UNK, f32, f32);

void update_position__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    TBoss4DarkFalz__sub_8004C220(arg0, arg1 + 8);
    save_position__14TBoss4DarkFalzFi(arg0);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_801BEA38(arg0, 0, M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x40));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BC404
#include "types.h"

extern "C" {

s32 has_active_camera_event__10TObjPlayerFv(void);
void TObjPlayer__sub_801BC504(void);
void init_from_data__10TObjPlayerFPvPv(void* p, void* a1);
int TObjPlayer__sub_801BC6C4(void*);
s32 check_camera_mode__10TObjPlayerFv();
int TObjPlayer__sub_801BEEAC(void*, void*);
int TObjPlayer__sub_801BEEE0(void*, void*);
int TObjPlayer__sub_801BEEEC(void*, void*);
int TObjPlayer__sub_801BEF30(void*, void*);
s32 get_instance__6TLobbyFv();
int copy_xyz__10TObjPlayerFPvPv(void*, void*);
int copy_header_struct__6TLobbyFPvPv(void*, void*);
int set_floor__10TObjPlayerFPvi(void*, void*);
int set_floor_index__10TObjPlayerFPvi(void*, void*);
int set_play_time__10TObjPlayerFPvi(void*, void*);
s32 TLevelSelect__sub_801F441C(s32, s32);

s32 has_active_camera_event__10TObjPlayerFv(void) {
    if (get_instance__6TLobbyFv() == 0) {
        if ((check_camera_mode__10TObjPlayerFv() == 0) && (TLevelSelect__sub_801F441C(0, 0xB) == 0) && (TLevelSelect__sub_801F441C(1, 0xB) == 0) && (TLevelSelect__sub_801F441C(2, 0xB) == 0) && (TLevelSelect__sub_801F441C(3, 0xB) == 0)) {
            return 0;
        }
        goto block_14;
    }
    if ((get_instance__6TLobbyFv() == 1) && (check_camera_mode__10TObjPlayerFv() == 0) && (TLevelSelect__sub_801F441C(0, 0x5B) == 0) && (TLevelSelect__sub_801F441C(1, 0x5B) == 0) && (TLevelSelect__sub_801F441C(2, 0x5B) == 0) && (TLevelSelect__sub_801F441C(3, 0x5B) == 0)) {
        return 0;
    }
block_14:
    return 1;
}
void TObjPlayer__sub_801BC504(void) {  }
void init_from_data__10TObjPlayerFPvPv(void* p, void* a1) { TObjPlayer__sub_801BC6C4(p); *(short*)((char*)p + 0x1c) = *(unsigned short*)(a1); *(short*)((char*)p + 0x2e) = *(short*)((char*)a1 + 0x2); *(void**)((char*)p + 0x30) = *(void**)((char*)a1 + 0x4); copy_xyz__10TObjPlayerFPvPv((char*)p + 0x5c, (char*)a1 + 0x14); *(short*)((char*)p + 0x326) = *(short*)((char*)a1 + 0x20); *(short*)((char*)p + 0x32c) = *(short*)((char*)a1 + 0x22); copy_header_struct__6TLobbyFPvPv((char*)p + 0xdac, (char*)a1 + 0x68); TObjPlayer__sub_801BEF30((char*)p + 0x828, (char*)a1 + 0x70); TObjPlayer__sub_801BEEEC((char*)p + 0x830, (char*)a1 + 0x78); TObjPlayer__sub_801BEEE0((char*)p + 0x858, (char*)a1 + 0x94); TObjPlayer__sub_801BEEAC((char*)p + 0x730, (char*)a1 + 0x98); set_floor_index__10TObjPlayerFPvi(p, *(void**)((char*)a1 + 0xac)); set_floor__10TObjPlayerFPvi(p, *(void**)((char*)a1 + 0x488)); *(void**)((char*)p + 0x334) = *(void**)((char*)a1 + 0xb0); set_play_time__10TObjPlayerFPvi(p, *(void**)((char*)a1 + 0x64)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BC5D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
M2C_UNK TObjPlayer__sub_801BF690(void *);
M2C_UNK TObjPlayer__sub_801BF964(void *);
M2C_UNK init_tag__10TObjPlayerFPv(void *);
M2C_UNK reset_counter_field4__10TObjPlayerFPv(void *);
M2C_UNK set_vec4_const__10TObjPlayerFPv(void *);
M2C_UNK reset_type__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8011E204(void *, int);
M2C_UNK reset_movement_state__10TObjPlayerFPv(void *);

extern const f32 TObjPlayer__data_805DC278;

void reset_state__10TObjPlayerFPv(u8 *arg0) {
    clear_flags__11TAdRicoRingFPvUi(arg0 + 0x858, 2);
    reset_counter_field4__10TObjPlayerFPv(arg0 + 0x63C);
    reset_type__10TObjPlayerFPv(arg0 + 0x644);
    reset_movement_state__10TObjPlayerFPv(arg0 + 0x7CC);
    TObjPlayer__sub_801BF690(arg0 + 0x730);
    set_vec4_const__10TObjPlayerFPv(arg0 + 0x608);
    M2C_FIELD(arg0, s32 *, 0x548) = 0;
    init_tag__10TObjPlayerFPv(arg0 + 0x340);
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
    TObjPlayer__sub_8011E204(arg0, 0x283);
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
    M2C_FIELD(arg0, f32 *, 0x400) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjPlayer__data_805DC278;
    TObjPlayer__sub_801BF964(arg0 + 0x5FC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BC81C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjPlayer__sub_801BC8F0();
M2C_UNK set_flag_400000__10TObjPlayerFi(void *);
M2C_UNK enter_battle_state__10TObjPlayerFPv(void *);
s32 obj_isState2_324();
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 apply_state_transform__10TObjPlayerFUi(s32);
s32 set_flag_400000__10TObjPlayerFPv(s32);
int queue_destruction__7TObjectFv(void*);
void destroy_owned_object__10TObjPlayerFPv(void* p);
int TWindowSubComCard__sub_801058F8(void*);
int TObjPlayer__sub_801AFF50(void*);
int TObjPlayer__sub_801AFF80(void*);
void update_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int can_cast_technique__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCC50(void);
int check_technique_castable__10TObjPlayerFi(void*);

void init_battle__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801BC8F0();
    set_flag_400000__10TObjPlayerFi((void *) (arg0));
    enter_battle_state__10TObjPlayerFPv((void *) (arg0 + 0x634));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BC8B0
#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 apply_state_transform__10TObjPlayerFUi(s32);
s32 set_flag_400000__10TObjPlayerFPv(s32);
int queue_destruction__7TObjectFv(void*);
void destroy_owned_object__10TObjPlayerFPv(void* p);
int TWindowSubComCard__sub_801058F8(void*);
int TObjPlayer__sub_801AFF50(void*);
int TObjPlayer__sub_801AFF80(void*);
void update_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int can_cast_technique__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCC50(void);
int check_technique_castable__10TObjPlayerFi(void*);

void destroy_owned_object__10TObjPlayerFPv(void* p) { if (*(unsigned int*)((char*)p + 0x548) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x548)); *(int*)((char*)p + 0x548) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCA0C
#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 apply_state_transform__10TObjPlayerFUi(s32);
s32 set_flag_400000__10TObjPlayerFPv(s32);
int queue_destruction__7TObjectFv(void*);
void destroy_owned_object__10TObjPlayerFPv(void* p);
int TWindowSubComCard__sub_801058F8(void*);
int TObjPlayer__sub_801AFF50(void*);
int TObjPlayer__sub_801AFF80(void*);
void update_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int can_cast_technique__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCC50(void);
int check_technique_castable__10TObjPlayerFi(void*);

void TObjPlayer__sub_801BCA0C(void) {  }
void TObjPlayer__sub_801BCA10(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCAB0
#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 apply_state_transform__10TObjPlayerFUi(s32);
s32 set_flag_400000__10TObjPlayerFPv(s32);
int queue_destruction__7TObjectFv(void*);
void destroy_owned_object__10TObjPlayerFPv(void* p);
int TWindowSubComCard__sub_801058F8(void*);
int TObjPlayer__sub_801AFF50(void*);
int TObjPlayer__sub_801AFF80(void*);
void update_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int can_cast_technique__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCC50(void);
int check_technique_castable__10TObjPlayerFi(void*);

void TObjPlayer__sub_801BCAB0(void) {  }
void update_state__10TObjPlayerFi(s32 arg0) {
    if (obj_isState2_324() != 0) {
        set_flag_400000__10TObjPlayerFPv(arg0);
    } else {
        TObjPlayer__sub_801AFF80((void*)(arg0));
        TObjPlayer__sub_801AFF50((void*)(arg0));
    }
    if ((is_final_phase__10TObjPlayerFv() != 0) && (is_current_room__10TObjRoomIdFPv(arg0) != 0)) {
        apply_state_transform__10TObjPlayerFUi(arg0);
    }
}
void TObjPlayer__sub_801BCB28(void) {  }
void update_if_active__10TObjPlayerFPv(void* p) { if (TWindowSubComCard__sub_801058F8(p) != 0) { TObjPlayer__sub_801AFF80(p); TObjPlayer__sub_801AFF50(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCC30
#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 apply_state_transform__10TObjPlayerFUi(s32);
s32 set_flag_400000__10TObjPlayerFPv(s32);
int queue_destruction__7TObjectFv(void*);
void destroy_owned_object__10TObjPlayerFPv(void* p);
int TWindowSubComCard__sub_801058F8(void*);
int TObjPlayer__sub_801AFF50(void*);
int TObjPlayer__sub_801AFF80(void*);
void update_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int can_cast_technique__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCC50(void);
int check_technique_castable__10TObjPlayerFi(void*);

int can_cast_technique__10TObjPlayerFPv(void* p) { return check_technique_castable__10TObjPlayerFi(p); }
void TObjPlayer__sub_801BCC50(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCC54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_player_data__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80018990(void *, void *, void *, void *, f32, f32);
M2C_UNK TObjPlayer__sub_801B5450(void *);
s32 TObjPlayer__sub_801D92F4(void *);
s32 TObjPlayer__sub_801D9328(void *);
f32 TObjPlayer__sub_801D93F8(void *);
f32 TObjPlayer__sub_801D9440(void *);
M2C_UNK apply_input_mode__10TObjPlayerFi(void *);
M2C_UNK copy_data__6TLobbyFPvPv(void *);
M2C_UNK copy_entry__6TLobbyFPvPv(void *, s32);
M2C_UNK copy_from__6TLobbyFPvPv(void *, s32);
M2C_UNK set_move_mode__10TObjPlayerFi(void *);

extern const f32 TObjPlayer__data_805DC28C;

void init_player_data__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;

    temp_f31 = M2C_FIELD(arg0, f32 *, 0xD48);
    copy_data__6TLobbyFPvPv(arg0 + 0xD38);
    M2C_FIELD(arg0, f32 *, 0xD48) = temp_f31;
    M2C_FIELD(arg0, void **, 0x2B0) = (void *) (arg0 + 0xD38);
    apply_input_mode__10TObjPlayerFi(arg0);
    set_move_mode__10TObjPlayerFi(arg0);
    TObjPlayer__sub_801B5450(arg0);
    copy_from__6TLobbyFPvPv(arg0 + 0xD5C, TObjPlayer__sub_801D92F4(arg0));
    copy_entry__6TLobbyFPvPv(arg0 + 0xD8C, TObjPlayer__sub_801D9328(arg0));
    temp_f31_2 = TObjPlayer__sub_801D93F8(arg0);
    TObjPlayer__sub_80018990(arg0, M2C_FIELD(arg0, void **, 0x2B0), arg0 + 0xD5C, arg0 + 0xD8C, TObjPlayer__sub_801D9440(arg0), temp_f31_2);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TObjPlayer__data_805DC28C * M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), f32 *, 0x10));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCD28
#include "types.h"

extern "C" {

int is_flag_set_550__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCD50(void);
void TObjPlayer__sub_801BCD54(void);
int TObjPlayer__sub_801BEF60(void*, int);

int is_flag_set_550__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BEF60((char*)p + 0x550, 0); }
void TObjPlayer__sub_801BCD50(void) {  }
void TObjPlayer__sub_801BCD54(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCD58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_control_mode__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_80019248();
int is_flag_set_550__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCD50(void);
void TObjPlayer__sub_801BCD54(void);
int TObjPlayer__sub_801BEF60(void*, int);
M2C_UNK TObjPlayer__sub_803518E0(void *, void *, int);
s32 obj_getField1c(void *);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void init_control_mode__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    if (TObjPlayer__sub_80019248() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) (arg1 & 3);
        TObjPlayer__sub_803518E0((void *) (arg0 + 0x550), (void *) (obj_getField1c((void *) (arg0))), (int) ((s16) M2C_FIELD(arg0, s32 *, 0x3D0)));
        return;
    }
    TObjPlayer__sub_801BEF60((void *) (arg0 + 0x550), (int) (0));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCDC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_data_table_ptr__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_801C2114();
M2C_UNK TKeyBoardControl__sub_801AFCF4(void *, s16);
M2C_UNK TObjPlayer__sub_801B826C();

u16 obj_getField1c(void *);
extern s32 lbl_805D5D84;

void init_data_table_ptr__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_801B826C();
    TKeyBoardControl__sub_801AFCF4(arg0, TObjPlayer__sub_801C2114());
    M2C_FIELD(arg0, s32 *, 0xDB4) = (s32) (lbl_805D5D84 + (obj_getField1c(arg0) * 0x600));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCE1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_from_source__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
s32 TObjPlayer__sub_801C2114();
M2C_UNK TKeyBoardControl__sub_801AFCF4(void *, s16);
M2C_UNK TObjPlayer__sub_801B81E8(void *, void *, s32);
M2C_UNK TObjPlayer__sub_801B826C();

u16 obj_getField1c(void *);
extern s32 lbl_805D5D84;

void init_from_source__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xD00) = 0;
    TObjPlayer__sub_801B826C();
    TKeyBoardControl__sub_801AFCF4(arg0, (s16) TObjPlayer__sub_801C2114());
    TObjPlayer__sub_801B81E8(arg0, arg1 + 0x140, M2C_FIELD(arg1, s32 *, 0x13C));
    M2C_FIELD(arg0, s32 *, 0xDB4) = (s32) (lbl_805D5D84 + (obj_getField1c(arg0) * 0x600));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCE90
#include "types.h"

extern "C" {

void update_recobox__10TObjPlayerFi(s32 arg0);
void destroy_child__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801BE9A8(s32);
s32 set_flag_20000__10TObjPlayerFi(s32);
s32 reset_key_machine_state__10TObjPlayerFv();
int queue_destruction__7TObjectFv(void*);

void update_recobox__10TObjPlayerFi(s32 arg0) {
    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        TObjPlayer__sub_801BE9A8(arg0);
        return;
    }
    set_flag_20000__10TObjPlayerFi(arg0);
}
void destroy_child__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0xd00); if (m) queue_destruction__7TObjectFv(m); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCF04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_character_state__10TObjPlayerFPvPv(void *arg0, u8 *arg1);
s32 TFontSmallLobby__sub_801AFEE0();
s32 TObjPlayer__sub_801C2114();
s32 get_ptr_4__10TObjPlayerFPv(u8 *);
M2C_UNK TKeyBoardControl__sub_801AFCF4(void *, s16);
M2C_UNK fn_801B80C0(void *, s32, u8);
M2C_UNK TObjPlayer__sub_801B81E8(void *, s32, u8);
M2C_UNK TObjPlayer__sub_801B826C(void *);

s32 obj_isState2_324(void *);
u16 obj_getField1c(void *);
extern s32 lbl_805D5D84;
extern s32 lbl_805D5D88;

void load_character_state__10TObjPlayerFPvPv(void *arg0, u8 *arg1) {
    u8 temp_r31;
    s32 temp_r30;

    temp_r31 = *arg1;
    temp_r30 = get_ptr_4__10TObjPlayerFPv(arg1);
    TObjPlayer__sub_801B826C(arg0);
    TKeyBoardControl__sub_801AFCF4(arg0, (s16) TObjPlayer__sub_801C2114());
    if ((obj_isState2_324(arg0) == 0) || (TFontSmallLobby__sub_801AFEE0() == 0)) {
        if (!(lbl_805D5D88 & 1)) {
            fn_801B80C0(arg0, temp_r30, temp_r31);
        }
        TObjPlayer__sub_801B81E8(arg0, temp_r30, temp_r31);
    }
    M2C_FIELD(arg0, s32 *, 0xDB4) = (s32) (lbl_805D5D84 + (obj_getField1c(arg0) * 0x600));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BCFBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_animation__10TObjPlayerFPv(u8 *arg0);
s32 TFontSmallLobby__sub_801AFEE0();
s16 get_action_animation__10TObjPlayerFPv(void *);
M2C_UNK set_pos_z__10TObjPlayerFPvf(void *, f32);
s32 is_mounted__15TPlyPhotonChairFPv(void *);
s32 TObjPlayer__sub_8001BEF8(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E204(void *, M2C_UNK);
s32 TObjPlayer__sub_801AFF0C(void *);
M2C_UNK revive_or_spawn_marker__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801CA35C(void *);
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, M2C_UNK, M2C_UNK);

s32 obj_isState2_324();
s32 obj_testFlags30(void *, M2C_UNK);
extern const f32 TObjPlayer__data_805DC294;

void update_action_animation__10TObjPlayerFPv(u8 *arg0) {
    if (obj_isState2_324() == 0) {
        update_position_from_target__10TObjPlayerFPv(arg0);
        return;
    }
    if (TObjPlayer__sub_801AFF0C(arg0) != 0) {
        TObjPlayer__sub_8011E204(arg0, 4);
        if (obj_testFlags30(arg0, 0x800) != 0) {
            TObjPlayer__sub_801D0BC0(arg0, 0xF, 0);
            if (TObjPlayer__sub_8001BEF8(arg0 + 0x858, 1) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = get_action_animation__10TObjPlayerFPv(arg0);
            } else {
                TObjPlayer__sub_801CA35C(arg0);
            }
            set_pos_z__10TObjPlayerFPvf(arg0 + 0x5FC, TObjPlayer__data_805DC294);
            revive_or_spawn_marker__10TObjPlayerFi(arg0);
            return;
        }
        if ((TFontSmallLobby__sub_801AFEE0() != 0) && (is_mounted__15TPlyPhotonChairFPv(arg0) != 0)) {
            TObjPlayer__sub_801D0BC0(arg0, 0x18, 0);
            return;
        }
        TObjPlayer__sub_801D0BC0(arg0, 1, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BD2B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_input_and_draw__10TObjPlayerFi(s32 arg0);
M2C_UNK TKeyBoardControl__sub_801AFCF4(void *, int);
M2C_UNK TObjPlayer__sub_801BD1B4(void *);
void TObjPlayer__sub_801BD314(void);
s16 TObjPlayer__sub_801C2114();
M2C_UNK draw__10TObjPlayerFPv(void *);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK update_action_animation__10TObjPlayerFPv(void *);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void update_input_and_draw__10TObjPlayerFi(s32 arg0) {
    if (reset_key_machine_state__10TObjPlayerFv() == 0) {
        TKeyBoardControl__sub_801AFCF4((void *) (arg0), (int) (TObjPlayer__sub_801C2114()));
    }
    TObjPlayer__sub_801BD1B4((void *) (arg0));
    draw__10TObjPlayerFPv((void *) (arg0));
    update_action_animation__10TObjPlayerFPv((void *) (arg0));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BD314
#include "types.h"

extern "C" {

void TObjPlayer__sub_801BD314(void);

void TObjPlayer__sub_801BD314(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BD384
#include "types.h"

extern "C" {

void TObjPlayer__sub_801BD3A4(void);
void free_chara_making__10TObjPlayerFPv(void* p);
void update_body_parts__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BD384(void* p);
int TNpcPlayer__sub_8007206C(void*);
int TObjWaitEntryHairMoveSim__sub_800FE73C(void*);
int free_loaded_buffers__12TCharaMakingFPv(void*);
int update_body_parts__12TCharaMakingFPv(void*);
int apply_pending_effect__11TBoss6Type2FPv(void*);

void TObjPlayer__sub_801BD384(void* p) { update_body_parts__10TObjPlayerFPv(p); }
void TObjPlayer__sub_801BD3A4(void) {  }
void free_chara_making__10TObjPlayerFPv(void* p) { apply_pending_effect__11TBoss6Type2FPv(p); free_loaded_buffers__12TCharaMakingFPv(p); }
void update_body_parts__10TObjPlayerFPv(void* p) { TNpcPlayer__sub_8007206C((char*)p + 0x85c); *(int*)((char*)p + 0xcfc) = 255; update_body_parts__12TCharaMakingFPv(p); TObjWaitEntryHairMoveSim__sub_800FE73C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BD424
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_801BC688(void *);
void free_chara_making__10TObjPlayerFPv(void *);
void destroy_child__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BCD54(void *);
void TObjPlayer__sub_801BCC50(void *);
void TObjPlayer__sub_801BCB28(void *);
void TObjPlayer__sub_801BCA10(void *);
void destroy_owned_object__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BD314(void *);
void TObjPlayer__sub_801BC504(void *);
void TObjPlayer__sub_801BBC64(void *);
void TObjPlayer__sub_801BBB94(void *);
void TObjPlayer__sub_801BB8AC(void *);
void unregister__10TObjPlayerFi(void *);
void TObjPlayer__sub_801C1FBC(void *, int);
void destroy__10TObjPlayerFis(void *, int);
void TObjPlayer__sub_801BFAD4(void *, int);
void dt__10TObjPlayerFis(void *, int);
void __dt__14TPlyDispConfigFv(void *, int);
void TObjPlayer__sub_801C1F80(void *, int);
void TObjPlayer__sub_80309E4C(void *, int);
void TObjPlayer__sub_801BEDC0(void *, int);
void TObjPlayer__sub_801BFA4C(void *, int);
void conditional_delete_ex__10TObjPlayerFis(void *, int);
void TObjPlayer__sub_801BF9F0(void *, int);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK __vt__10TObjPlayer[];

void *__dt__10TObjPlayerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjPlayer;
        TObjPlayer__sub_801BC688(arg0);
        free_chara_making__10TObjPlayerFPv(arg0);
        destroy_child__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801BCD54(arg0);
        TObjPlayer__sub_801BCC50(arg0);
        TObjPlayer__sub_801BCB28(arg0);
        TObjPlayer__sub_801BCA10(arg0);
        destroy_owned_object__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801BD314(arg0);
        TObjPlayer__sub_801BC504(arg0);
        TObjPlayer__sub_801BBC64(arg0);
        TObjPlayer__sub_801BBB94(arg0);
        TObjPlayer__sub_801BB8AC(arg0);
        unregister__10TObjPlayerFi(arg0);
        TObjPlayer__sub_801C1FBC((s8 *)arg0 + 0x7CC, -1);
        destroy__10TObjPlayerFis((s8 *)arg0 + 0x754, -1);
        TObjPlayer__sub_801BFAD4((s8 *)arg0 + 0x644, -1);
        dt__10TObjPlayerFis((s8 *)arg0 + 0x550, -1);
        __dt__14TPlyDispConfigFv((s8 *)arg0 + 0x500, -1);
        TObjPlayer__sub_801C1F80((s8 *)arg0 + 0x4AC, -1);
        TObjPlayer__sub_80309E4C((s8 *)arg0 + 0x384, -1);
        TObjPlayer__sub_801BEDC0((s8 *)arg0 + 0x374, -1);
        TObjPlayer__sub_801BFA4C((s8 *)arg0 + 0x360, -1);
        conditional_delete_ex__10TObjPlayerFis((s8 *)arg0 + 0x34C, -1);
        TObjPlayer__sub_801BF9F0((s8 *)arg0 + 0x340, -1);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BD570
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__ct(void *arg0, void *arg1, void *arg2);
void *__ct__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);
void TFontSmallLobby__sub_801C0164(void *);
void TFontSmallLobby__sub_801D65B4(void *);
void init_forward__10TObjPlayerFPv(void *);
void reset_fields__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BB524(void *, int);
void TObjPlayer__sub_801BB85C(void *, void *);
void TObjPlayer__sub_801BBC2C(void *, void *);
void update_position__10TObjPlayerFPvi(void *, void *);
void init_from_data__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801BC6C4(void *);
void init_battle__10TObjPlayerFi(void *, void *);
void TObjPlayer__sub_801BC948(void *, void *);
void TObjPlayer__sub_801BCAB0(void *, void *);
void TObjPlayer__sub_801BCB70(void *, void *);
void init_player_data__10TObjPlayerFPv(void *, void *);
void is_flag_set_550__10TObjPlayerFPv(void *, void *);
void init_data_table_ptr__10TObjPlayerFPv(void *);
void init_from_source__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801BD240(void *, void *);
void TObjPlayer__sub_801BD384(void *, void *);
void update_body_parts__10TObjPlayerFPv(void *, void *);
void TObjPlayer__sub_801BEC50(void *);
void TObjPlayer__sub_801BEC78(void *);
void TObjPlayer__sub_801BF660(void *);
void reset_and_return__10TObjPlayerFi(void *);
void TObjPlayer__sub_801BFB4C(void *);
void clear_base__10TObjPlayerFPv(void *);
void forward_release__10TObjPlayerFPv(void *);
void set_vec3_const_wrapper__10TObjPlayerFPv(void *);
void reset_scale_vector__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BFBEC(void *);
void reset_and_clear__10TObjPlayerFPv(void *);
void wrap_update__10TObjPlayerFPv(void *);
void set_vec4_const_wrapper__10TObjPlayerFPv(void *);
void init_members__10TObjPlayerFPv(void *);
void init_wrapper__10TObjPlayerFPv(void *);
void init_sub__10TObjPlayerFPv(void *);
void init_subobjects__10TObjPlayerFPv(void *);
void init_state__10TObjPlayerFi(void *);
void init_subobject__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C1A00(void *);
void init__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C20A4(void *);
void setup_ctrl__10TObjPlayerFPv(void *);
void init_partial__10TObjPlayerFi(void *);
void init_sub_objects__10TObjPlayerFPv(void *);
void __ct__14TPlyDispConfigFv(void *);
void TObjPlayer__sub_80019038(void *);
void clear_header_struct__10TObjPlayerFPv(void *);
void init_class_flags__10TObjPlayerFPvi(void *, void *);
void TObjPlayer__sub_801BBB70(void *, void *);
void TObjPlayer__sub_80309E9C(void *);
void TObjPlayer__sub_803374C4(void *);
void TObjPlayer__sub_80351974(void *);

extern M2C_UNK __vt__10TObjPlayer[];
extern void *lbl_805D3530;

void *TObjPlayer__ct(void *arg0, void *arg1, void *arg2) {
    TObjPlayer__sub_80019038(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjPlayer;
    init_subobject__10TObjPlayerFPv((void *)((char *)arg0 + 832));
    setup_ctrl__10TObjPlayerFPv((void *)((char *)arg0 + 844));
    init_state__10TObjPlayerFi((void *)((char *)arg0 + 864));
    TObjPlayer__sub_803374C4((void *)((char *)arg0 + 884));
    TObjPlayer__sub_80309E9C((void *)((char *)arg0 + 900));
    init_forward__10TObjPlayerFPv((void *)((char *)arg0 + 1052));
    TFontSmallLobby__sub_801C0164((void *)((char *)arg0 + 1064));
    TFontSmallLobby__sub_801D65B4((void *)((char *)arg0 + 1196));
    __ct__14TPlyDispConfigFv((void *)((char *)arg0 + 1280));
    TObjPlayer__sub_80351974((void *)((char *)arg0 + 1360));
    init_subobjects__10TObjPlayerFPv((void *)((char *)arg0 + 1456));
    init_sub__10TObjPlayerFPv((void *)((char *)arg0 + 1504));
    init_wrapper__10TObjPlayerFPv((void *)((char *)arg0 + 1520));
    init_members__10TObjPlayerFPv((void *)((char *)arg0 + 1532));
    set_vec4_const_wrapper__10TObjPlayerFPv((void *)((char *)arg0 + 1544));
    wrap_update__10TObjPlayerFPv((void *)((char *)arg0 + 1588));
    reset_and_clear__10TObjPlayerFPv((void *)((char *)arg0 + 1596));
    TObjPlayer__sub_801BFBEC((void *)((char *)arg0 + 1604));
    reset_fields__10TObjPlayerFPv((void *)((char *)arg0 + 1612));
    reset_scale_vector__10TObjPlayerFPv((void *)((char *)arg0 + 1624));
    set_vec3_const_wrapper__10TObjPlayerFPv((void *)((char *)arg0 + 1644));
    TObjPlayer__sub_801BEC78((void *)((char *)arg0 + 1656));
    forward_release__10TObjPlayerFPv((void *)((char *)arg0 + 1708));
    TObjPlayer__sub_801BF660((void *)((char *)arg0 + 1840));
    TObjPlayer__sub_801BEC50((void *)((char *)arg0 + 1860));
    init_sub_objects__10TObjPlayerFPv((void *)((char *)arg0 + 1876));
    init_partial__10TObjPlayerFi((void *)((char *)arg0 + 1988));
    clear_base__10TObjPlayerFPv((void *)((char *)arg0 + 1992));
    init__10TObjPlayerFPv((void *)((char *)arg0 + 1996));
    TObjPlayer__sub_801C1A00((void *)((char *)arg0 + 2088));
    TObjPlayer__sub_801C20A4((void *)((char *)arg0 + 2096));
    TObjPlayer__sub_801BFB4C((void *)((char *)arg0 + 2124));
    init_forward__10TObjPlayerFPv((void *)((char *)arg0 + 2136));
    reset_and_return__10TObjPlayerFi((void *)((char *)arg0 + 3332));
    clear_header_struct__10TObjPlayerFPv((void *)((char *)arg0 + 3500));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3530;
    TObjPlayer__sub_801BC6C4(arg0);
    M2C_FIELD(arg0, u16 *, 0x1C) = 0;
    TObjPlayer__sub_801BB524(arg0, 7);
    update_body_parts__10TObjPlayerFPv(arg0, arg2);
    init_player_data__10TObjPlayerFPv(arg0, (void *)((char *)arg2 + 136));
    init_data_table_ptr__10TObjPlayerFPv(arg0);
    return arg0;
}

extern M2C_UNK __vt__10TObjPlayer[];
extern void *lbl_805D3530;

void *__ct__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    TObjPlayer__sub_80019038(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjPlayer;
    init_subobject__10TObjPlayerFPv((void *)((char *)arg0 + 832));
    setup_ctrl__10TObjPlayerFPv((void *)((char *)arg0 + 844));
    init_state__10TObjPlayerFi((void *)((char *)arg0 + 864));
    TObjPlayer__sub_803374C4((void *)((char *)arg0 + 884));
    TObjPlayer__sub_80309E9C((void *)((char *)arg0 + 900));
    init_forward__10TObjPlayerFPv((void *)((char *)arg0 + 1052));
    TFontSmallLobby__sub_801C0164((void *)((char *)arg0 + 1064));
    TFontSmallLobby__sub_801D65B4((void *)((char *)arg0 + 1196));
    __ct__14TPlyDispConfigFv((void *)((char *)arg0 + 1280));
    TObjPlayer__sub_80351974((void *)((char *)arg0 + 1360));
    init_subobjects__10TObjPlayerFPv((void *)((char *)arg0 + 1456));
    init_sub__10TObjPlayerFPv((void *)((char *)arg0 + 1504));
    init_wrapper__10TObjPlayerFPv((void *)((char *)arg0 + 1520));
    init_members__10TObjPlayerFPv((void *)((char *)arg0 + 1532));
    set_vec4_const_wrapper__10TObjPlayerFPv((void *)((char *)arg0 + 1544));
    wrap_update__10TObjPlayerFPv((void *)((char *)arg0 + 1588));
    reset_and_clear__10TObjPlayerFPv((void *)((char *)arg0 + 1596));
    TObjPlayer__sub_801BFBEC((void *)((char *)arg0 + 1604));
    reset_fields__10TObjPlayerFPv((void *)((char *)arg0 + 1612));
    reset_scale_vector__10TObjPlayerFPv((void *)((char *)arg0 + 1624));
    set_vec3_const_wrapper__10TObjPlayerFPv((void *)((char *)arg0 + 1644));
    TObjPlayer__sub_801BEC78((void *)((char *)arg0 + 1656));
    forward_release__10TObjPlayerFPv((void *)((char *)arg0 + 1708));
    TObjPlayer__sub_801BF660((void *)((char *)arg0 + 1840));
    TObjPlayer__sub_801BEC50((void *)((char *)arg0 + 1860));
    init_sub_objects__10TObjPlayerFPv((void *)((char *)arg0 + 1876));
    init_partial__10TObjPlayerFi((void *)((char *)arg0 + 1988));
    clear_base__10TObjPlayerFPv((void *)((char *)arg0 + 1992));
    init__10TObjPlayerFPv((void *)((char *)arg0 + 1996));
    TObjPlayer__sub_801C1A00((void *)((char *)arg0 + 2088));
    TObjPlayer__sub_801C20A4((void *)((char *)arg0 + 2096));
    TObjPlayer__sub_801BFB4C((void *)((char *)arg0 + 2124));
    init_forward__10TObjPlayerFPv((void *)((char *)arg0 + 2136));
    reset_and_return__10TObjPlayerFi((void *)((char *)arg0 + 3332));
    clear_header_struct__10TObjPlayerFPv((void *)((char *)arg0 + 3500));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3530;
    init_from_data__10TObjPlayerFPvPv(arg0, arg2);
    TObjPlayer__sub_801BB524(arg0, 4);
    TObjPlayer__sub_801BD384(arg0, (void *)((char *)arg2 + 200));
    TObjPlayer__sub_801BCB70(arg0, arg2);
    update_position__10TObjPlayerFPvi(arg0, arg2);
    TObjPlayer__sub_801BBC2C(arg0, arg2);
    TObjPlayer__sub_801BD240(arg0, arg2);
    is_flag_set_550__10TObjPlayerFPv(arg0, arg2);
    TObjPlayer__sub_801BC948(arg0, arg2);
    init_from_source__10TObjPlayerFPvPv(arg0, arg2);
    TObjPlayer__sub_801BCAB0(arg0, arg2);
    init_battle__10TObjPlayerFi(arg0, arg2);
    TObjPlayer__sub_801BBB70(arg0, arg2);
    init_class_flags__10TObjPlayerFPvi(arg0, arg2);
    TObjPlayer__sub_801BB85C(arg0, arg2);
    M2C_FIELD(arg0, u16 *, 0x32C) = M2C_FIELD(arg2, s16 *, 0x22);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BD928
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *construct_player_instance__10TObjPlayerFPvisiPv(u8 *arg0, s32 arg1, s16 arg2, s32 arg3, u8 *arg4);
M2C_UNK TFontSmallLobby__sub_801C0164(void *);
M2C_UNK TFontSmallLobby__sub_801D65B4(void *);
M2C_UNK TObjPlayer__sub_80019038();
M2C_UNK clear_header_struct__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BB524(void *, void *);
M2C_UNK TObjPlayer__sub_801BB8B0(void *, void *);
M2C_UNK TObjPlayer__sub_801BBA8C(void *, void *);
M2C_UNK TObjPlayer__sub_801BBB98(void *, void *);
M2C_UNK TObjPlayer__sub_801BC6C4(void *);
M2C_UNK TObjPlayer__sub_801BC8F0(void *);
M2C_UNK TObjPlayer__sub_801BCA14(void *, void *);
M2C_UNK init_player_data__10TObjPlayerFPv(void *, void *);
M2C_UNK init_control_mode__10TObjPlayerFPvi(void *, void *);
M2C_UNK TObjPlayer__sub_801BD318(void *);
M2C_UNK TObjPlayer__sub_801BEB68(void *, void *);
M2C_UNK get_quest_status__10TObjPlayerFPv(void *, void *);
M2C_UNK TObjPlayer__sub_801BEC50(void *);
M2C_UNK TObjPlayer__sub_801BEC78(void *);
M2C_UNK TObjPlayer__sub_801BEE24(void *, int);
M2C_UNK TObjPlayer__sub_801BEE2C(void *, int);
M2C_UNK TObjPlayer__sub_801BF660(void *);
M2C_UNK TObjPlayer__sub_801BFB4C(void *);
M2C_UNK clear_base__10TObjPlayerFPv(void *);
M2C_UNK set_vec3_const_wrapper__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BFBEC(void *);
M2C_UNK reset_and_clear__10TObjPlayerFPv(void *);
M2C_UNK set_vec4_const_wrapper__10TObjPlayerFPv(void *);
M2C_UNK init_members__10TObjPlayerFPv(void *);
M2C_UNK init_state__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801C1A00(void *);
M2C_UNK TObjPlayer__sub_801C20A4(void *);
s32 TObjPlayer__sub_801C221C(void *);
s32 TObjPlayer__sub_801C2224(void *);
s32 TObjPlayer__sub_801C222C(void *);
s32 TObjPlayer__sub_801C2234(void *);
s32 TObjPlayer__sub_801C223C(void *);
M2C_UNK setup_ctrl__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80309E9C(void *);
M2C_UNK TObjPlayer__sub_803374C4(void *);
M2C_UNK TObjPlayer__sub_80351974(void *);
M2C_UNK __ct__14TPlyDispConfigFv(void *);
M2C_UNK create_lockon_cursor__10TObjPlayerFPv(void *);
M2C_UNK forward_release__10TObjPlayerFPv(void *);
M2C_UNK get_field_0x374__10TObjPlayerFPv(void *, void *);
M2C_UNK init__10TObjPlayerFPv(void *);
M2C_UNK init_forward__10TObjPlayerFPv(void *);
M2C_UNK init_partial__10TObjPlayerFi(void *);
M2C_UNK init_sub__10TObjPlayerFPv(void *);
M2C_UNK init_sub_objects__10TObjPlayerFPv(void *);
M2C_UNK init_subobject__10TObjPlayerFPv(void *);
M2C_UNK init_subobjects__10TObjPlayerFPv(void *);
M2C_UNK init_wrapper__10TObjPlayerFPv(void *);
M2C_UNK load_character_state__10TObjPlayerFPvPv(void *, void *);
u16 obj_getField1c(void *);
M2C_UNK query_field374__10TObjPlayerFPv(void *, void *);
M2C_UNK query_flags_374__10TObjPlayerFPv(void *, void *);
M2C_UNK reset_and_return__10TObjPlayerFi(void *);
M2C_UNK reset_fields__10TObjPlayerFPv(void *);
M2C_UNK reset_scale_vector__10TObjPlayerFPv(void *);
M2C_UNK set_com_card_window__10TObjPlayerFi(void *);
M2C_UNK update_body_parts__10TObjPlayerFPv(void *, void *);
M2C_UNK update_if_active__10TObjPlayerFPv(void *);
M2C_UNK wrap_update__10TObjPlayerFPv(void *);

extern M2C_UNK __vt__10TObjPlayer[];
extern s32 lbl_805D3530;

u8 *construct_player_instance__10TObjPlayerFPvisiPv(u8 *arg0, s32 arg1, s16 arg2, s32 arg3, u8 *arg4) {
    TObjPlayer__sub_80019038();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjPlayer;
    init_subobject__10TObjPlayerFPv((void *) (arg0 + 0x340));
    setup_ctrl__10TObjPlayerFPv((void *) (arg0 + 0x34C));
    init_state__10TObjPlayerFi((void *) (arg0 + 0x360));
    TObjPlayer__sub_803374C4((void *) (arg0 + 0x374));
    TObjPlayer__sub_80309E9C((void *) (arg0 + 0x384));
    init_forward__10TObjPlayerFPv((void *) (arg0 + 0x41C));
    TFontSmallLobby__sub_801C0164((void *) (arg0 + 0x428));
    TFontSmallLobby__sub_801D65B4((void *) (arg0 + 0x4AC));
    __ct__14TPlyDispConfigFv((void *) (arg0 + 0x500));
    TObjPlayer__sub_80351974((void *) (arg0 + 0x550));
    init_subobjects__10TObjPlayerFPv((void *) (arg0 + 0x5B0));
    init_sub__10TObjPlayerFPv((void *) (arg0 + 0x5E0));
    init_wrapper__10TObjPlayerFPv((void *) (arg0 + 0x5F0));
    init_members__10TObjPlayerFPv((void *) (arg0 + 0x5FC));
    set_vec4_const_wrapper__10TObjPlayerFPv((void *) (arg0 + 0x608));
    wrap_update__10TObjPlayerFPv((void *) (arg0 + 0x634));
    reset_and_clear__10TObjPlayerFPv((void *) (arg0 + 0x63C));
    TObjPlayer__sub_801BFBEC((void *) (arg0 + 0x644));
    reset_fields__10TObjPlayerFPv((void *) (arg0 + 0x64C));
    reset_scale_vector__10TObjPlayerFPv((void *) (arg0 + 0x658));
    set_vec3_const_wrapper__10TObjPlayerFPv((void *) (arg0 + 0x66C));
    TObjPlayer__sub_801BEC78((void *) (arg0 + 0x678));
    forward_release__10TObjPlayerFPv((void *) (arg0 + 0x6AC));
    TObjPlayer__sub_801BF660((void *) (arg0 + 0x730));
    TObjPlayer__sub_801BEC50((void *) (arg0 + 0x744));
    init_sub_objects__10TObjPlayerFPv((void *) (arg0 + 0x754));
    init_partial__10TObjPlayerFi((void *) (arg0 + 0x7C4));
    clear_base__10TObjPlayerFPv((void *) (arg0 + 0x7C8));
    init__10TObjPlayerFPv((void *) (arg0 + 0x7CC));
    TObjPlayer__sub_801C1A00((void *) (arg0 + 0x828));
    TObjPlayer__sub_801C20A4((void *) (arg0 + 0x830));
    TObjPlayer__sub_801BFB4C((void *) (arg0 + 0x84C));
    init_forward__10TObjPlayerFPv((void *) (arg0 + 0x858));
    reset_and_return__10TObjPlayerFi((void *) (arg0 + 0xD04));
    clear_header_struct__10TObjPlayerFPv((void *) (arg0 + 0xDAC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3530;
    TObjPlayer__sub_801BC6C4((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    TObjPlayer__sub_801BB524((void *) (arg0), (void *) (arg3));
    update_body_parts__10TObjPlayerFPv((void *) (arg0), (void *) (arg4 + 0x370));
    TObjPlayer__sub_801BEE2C((void *) (arg0), (int) (M2C_FIELD(arg4, u8 *, 1)));
    TObjPlayer__sub_801BEE24((void *) (arg0), (int) (M2C_FIELD(arg4, u8 *, 2)));
    get_field_0x374__10TObjPlayerFPv((void *) (arg0), (void *) (TObjPlayer__sub_801C223C((void *) (arg4))));
    get_quest_status__10TObjPlayerFPv((void *) (arg0), (void *) (TObjPlayer__sub_801C2234((void *) (arg4))));
    query_flags_374__10TObjPlayerFPv((void *) (arg0), (void *) (TObjPlayer__sub_801C222C((void *) (arg4))));
    query_field374__10TObjPlayerFPv((void *) (arg0), (void *) (TObjPlayer__sub_801C2224((void *) (arg4))));
    TObjPlayer__sub_801BEB68((void *) (arg0), (void *) (TObjPlayer__sub_801C221C((void *) (arg4))));
    init_player_data__10TObjPlayerFPv((void *) (arg0), (void *) (arg4 + 0x34C));
    create_lockon_cursor__10TObjPlayerFPv((void *) (arg0));
    TObjPlayer__sub_801BD318((void *) (arg0));
    init_control_mode__10TObjPlayerFPvi((void *) (arg0), (void *) (arg3));
    TObjPlayer__sub_801BCA14((void *) (arg0), (void *) (arg4));
    TObjPlayer__sub_801BBB98((void *) (arg0), (void *) (arg4 + 0x3C0));
    load_character_state__10TObjPlayerFPvPv((void *) (arg0), (void *) (arg4));
    update_if_active__10TObjPlayerFPv((void *) (arg0));
    TObjPlayer__sub_801BC8F0((void *) (arg0));
    TObjPlayer__sub_801BBA8C((void *) (arg0), (void *) (arg4));
    TObjPlayer__sub_801BB8B0((void *) (arg0), (void *) (arg4));
    set_com_card_window__10TObjPlayerFi((void *) (obj_getField1c((void *) (arg0))));
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BDD8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_801BDD8C(void *arg0);
M2C_UNK TItem__sub_80101CF0();
void *__ct__10TObjPlayerFPvPvPv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *TObjPlayer__sub_801BDD8C(void *arg0) {
    void *o;

    TItem__sub_80101CF0();
    o = __nw__7TObjectFUl(0xDB8);
    if (o != NULL) {
        o = __ct__10TObjPlayerFPvPvPv(o, tl_03, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BDDDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__10TObjPlayerFUii(u32 arg0, s32 arg1);
s32 construct_player_instance__10TObjPlayerFPvisiPv(s32, s32, u16, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK copy_header_struct__6TLobbyFPvPv(s32, s32);
s32 get_sub_obj__10TObjPlayerFPv(s32);
s32 get_char_data__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801C22B4(s32);

extern s32 tl_03;

s32 create__10TObjPlayerFUii(u32 arg0, s32 arg1) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = __nw__7TObjectFUl(0xDB8);
    if (var_r30 != 0) {
        var_r30 = construct_player_instance__10TObjPlayerFPvisiPv(var_r30, tl_03, (u16)arg0, TObjPlayer__sub_801C22B4(arg1), get_char_data__10TObjPlayerFPv(arg1));
    }
    copy_header_struct__6TLobbyFPvPv(var_r30 + 0xDAC, get_sub_obj__10TObjPlayerFPv(arg1));
    return var_r30;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BDF5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_shared_data__10TObjPlayerFv(void);
void free__11TOBoss4RockFUi(void*);
void fn_801C2308(void*, int);

extern u32 lbl_805D5D68;
extern u32 TObjPlayer__data_805D5D80;
extern u32 lbl_805D5D84;

void free_shared_data__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5D68 != 0U) {
        fn_801C2308((void*)lbl_805D5D68, 1);
        lbl_805D5D68 = 0U;
    }
    if ((u32) lbl_805D5D84 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5D84);
        lbl_805D5D84 = 0U;
    }
    if ((u32) TObjPlayer__data_805D5D80 != 0U) {
        free__11TOBoss4RockFUi((void*)TObjPlayer__data_805D5D80);
        TObjPlayer__data_805D5D80 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BE03C
#include "types.h"

extern "C" {

void finalize_shared__10TObjPlayerFv(void);
void init_shared__10TObjPlayerFv(void);
int TLockOnCursor__sub_8013DBF4(void);
int TLockOnCursor__sub_8013DC38(void);
int free_shared_data__10TObjPlayerFv(void);
int TObjPlayer__sub_801BDFC4(void);
int set_shared_flag__10TObjPlayerFi(void*);
int set_shared_count__10TObjPlayerFi(void*);
int set_player_count__6TLobbyFi(void*);
int reset_settings_to_default__6TLobbyFPv(void*);
int TLobby__sub_802A7BD8(void);
int copy_if_space(void);
int TLobby__sub_802A7C5C(void);
int init_default__15TWindowSnapShotFv(void);
int free_shared_instance__15TWindowSnapShotFv(void);
int TWindowSnapShot__sub_802A7E28(void);
int free_instance__16TPlayerFootStampFv(void);
int load_player_footstamp(void);
int TObjPlayer__sub_80354E7C(void);

    extern unsigned char lbl_8050EA40[];
    extern int lbl_805D5D7C;
    extern int lbl_805D5D88;
void finalize_shared__10TObjPlayerFv(void) { set_player_count__6TLobbyFi((void*)0); set_shared_count__10TObjPlayerFi((void*)0); set_shared_flag__10TObjPlayerFi((void*)0); lbl_805D5D7C = 0; reset_settings_to_default__6TLobbyFPv(lbl_8050EA40); lbl_805D5D88 = 0; TLockOnCursor__sub_8013DBF4(); TLobby__sub_802A7BD8(); free_instance__16TPlayerFootStampFv(); free_shared_data__10TObjPlayerFv(); }

    extern int lbl_805D5D7C;
    extern int lbl_805D5D88;
void init_shared__10TObjPlayerFv(void) { TObjPlayer__sub_801BDFC4(); set_player_count__6TLobbyFi((void*)0); set_shared_count__10TObjPlayerFi((void*)1); set_shared_flag__10TObjPlayerFi((void*)0); lbl_805D5D7C = 0; TLobby__sub_802A7C5C(); TWindowSnapShot__sub_802A7E28(); copy_if_space(); init_default__15TWindowSnapShotFv(); free_shared_instance__15TWindowSnapShotFv(); TLockOnCursor__sub_8013DC38(); load_player_footstamp(); TObjPlayer__sub_80354E7C(); lbl_805D5D88 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BE1C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801BE210 { char pad[0x18]; };
struct VObj_801BE210 : Base_801BE210 {
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
    virtual void m63(s32 a, s32 b);
};

extern "C" {

s32 destroy_char_data__10TObjPlayerFis(s32 arg0, s16 arg1);
void TObjPlayer__vt66(void *arg0, s32 arg1);
M2C_UNK __dl__FPv(s32);
M2C_UNK __dt__12TPlyCharDataFv(s32, M2C_UNK);

s32 destroy_char_data__10TObjPlayerFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0 + 0xC, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__vt66(void *arg0, s32 arg1) {
    ((VObj_801BE210*)arg0)->m63(0x3A, arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BE28C
#include "types.h"

extern "C" {

s32 TCameraCtrl__sub_8006B368();
void TObjPlayer__sub_801BE2C0(void* p, s32 v);
s32 TObjPlayer__sub_801BE2C8(void* p);
int TObjPlayer__sub_801BE2D0(void* p);
int is_ready__10TObjPlayerFPv(void* p);
int check_stat_flag_41c__10TObjPlayerFPv(void* p);
int check_flag_at_41c__10TObjPlayerFPv(void* p);
int set_flag_41c_bit1__10TObjPlayerFPv(void* p);
int clamp_stat_41c__10TObjPlayerFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);

int TObjPlayer__vt77(void) { return 0; }
u8 check_camera_mode__10TObjPlayerFv(void) {
    return (u8) (TCameraCtrl__sub_8006B368() == 1);
}
void TObjPlayer__sub_801BE2C0(void* p, s32 v) { *(s32*)((char*)p + 0x370) = v; }
s32 TObjPlayer__sub_801BE2C8(void* p) { return *(s32*)((char*)p + 0x370); }
int TObjPlayer__sub_801BE2D0(void* p) { return (*(u32*)((char*)p + 0x890) >> 3) & 0x1; }
int is_ready__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x890) >> 4) & 0x1; }
int check_stat_flag_41c__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x41c, 32); }
int check_flag_at_41c__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x41c, 4); }
int set_flag_41c_bit1__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x41c, 2); }
int clamp_stat_41c__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x41c, 8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BE3B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801BE3D8 { char pad[0x8]; };
struct VObj_801BE3D8 : Base_801BE3D8 {
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
    virtual int m25();
};
struct Base_801BE40C { char pad[0x8]; };
struct VObj_801BE40C : Base_801BE40C {
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
    virtual int m22();
};
struct Base_801BE440 { char pad[0x8]; };
struct VObj_801BE440 : Base_801BE440 {
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
    virtual int m24();
};
struct Base_801BE474 { char pad[0x8]; };
struct VObj_801BE474 : Base_801BE474 {
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
    virtual int m26();
};
struct Base_801BE4A8 { char pad[0x8]; };
struct VObj_801BE4A8 : Base_801BE4A8 {
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
    virtual int m26();
};
struct Base_801BE4DC { char pad[0x8]; };
struct VObj_801BE4DC : Base_801BE4DC {
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
    virtual int m19();
};
struct Base_801BE510 { char pad[0x8]; };
struct VObj_801BE510 : Base_801BE510 {
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
    virtual int m27();
};
struct Base_801BE544 { char pad[0x8]; };
struct VObj_801BE544 : Base_801BE544 {
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
    virtual int m14();
};
struct Base_801BE578 { char pad[0x8]; };
struct VObj_801BE578 : Base_801BE578 {
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
    virtual int m17();
};
struct Base_801BE5AC { char pad[0x8]; };
struct VObj_801BE5AC : Base_801BE5AC {
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
    virtual int m16();
};
struct Base_801BE5E0 { char pad[0x8]; };
struct VObj_801BE5E0 : Base_801BE5E0 {
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
    virtual int m15();
};
struct Base_801BE614 { char pad[0x8]; };
struct VObj_801BE614 : Base_801BE614 {
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
    virtual int m28();
};

extern "C" {

void set_flag_400000__10TObjPlayerFPv(void *arg0);
short get_model_field_m25__10TObjPlayerFPv(void *arg0);
short get_action_animation__10TObjPlayerFPv(void *arg0);
short call_model_m24__10TObjPlayerFPv(void *arg0);
short get_weapon_stat_c__10TObjPlayerFPv(void *arg0);
short call_obj_vt26__10TObjPlayerFPv(void *arg0);
short query_child_state__10TObjPlayerFPv(void *arg0);
short query_equip__10TObjPlayerFPv(void *arg0);
short get_status__10TObjPlayerFPv(void *arg0);
short get_model_state__10TObjPlayerFPv(void *arg0);
short get_state__10TObjPlayerFPv(void *arg0);
short call_subobject_m15__10TObjPlayerFPv(void *arg0);
short get_vobj_state_28__10TObjPlayerFPv(void *arg0);
void update_battle_controller__10TObjPlayerFv(void);
int TPlayerBattleCtrl4P__sub_801BA74C(void*);
M2C_UNK TObjPlayer__sub_8011E204(void *, M2C_UNK);

void set_flag_400000__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8011E204(arg0, 0x400000);
}

short get_model_field_m25__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE3D8 *o = (struct VObj_801BE3D8 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m25();
}

short get_action_animation__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE40C *o = (struct VObj_801BE40C *)M2C_FIELD(arg0, void **, 0x380);
    return o->m22();
}

short call_model_m24__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE440 *o = (struct VObj_801BE440 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m24();
}

short get_weapon_stat_c__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE474 *o = (struct VObj_801BE474 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m26();
}

short call_obj_vt26__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE4A8 *o = (struct VObj_801BE4A8 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m26();
}

short query_child_state__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE4DC *o = (struct VObj_801BE4DC *)M2C_FIELD(arg0, void **, 0x380);
    return o->m19();
}

short query_equip__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE510 *o = (struct VObj_801BE510 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m27();
}

short get_status__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE544 *o = (struct VObj_801BE544 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m14();
}

short get_model_state__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE578 *o = (struct VObj_801BE578 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m17();
}

short get_state__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE5AC *o = (struct VObj_801BE5AC *)M2C_FIELD(arg0, void **, 0x380);
    return o->m16();
}

short call_subobject_m15__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE5E0 *o = (struct VObj_801BE5E0 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m15();
}

short get_vobj_state_28__10TObjPlayerFPv(void *arg0) {
    struct VObj_801BE614 *o = (struct VObj_801BE614 *)M2C_FIELD(arg0, void **, 0x380);
    return o->m28();
}

    extern int lbl_805D53A0;
void update_battle_controller__10TObjPlayerFv(void) { TPlayerBattleCtrl4P__sub_801BA74C((void*)(lbl_805D53A0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BE66C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_max_level__10TObjPlayerFv();
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
int check_flag_4__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BE6E4(void* p);
int set_flag_4000__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v);
s32 get_anim_id__10TObjPlayerFPv(void* p);
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
int is_action_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
u8 get_battle_mode__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE794(void* p, u8 v);
u8 get_byte_339__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
int get_equip_flags__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int get_inventory_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int get_field_374_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int get_field_374__10TObjPlayerFPv(void* p);
void set_move_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_action_flag_2__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int start_freeze_self__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
s32 TObjPlayer__sub_801BEB0C(void* p);
int unregister_sub__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BEB34(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
void TObjPlayer__sub_801BEB5C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
int query_field374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
int get_quest_status__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int is_mounted__15TPlyPhotonChairFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_80154A00(void*);
int end_camera_pan__10TObjPlayerFPv(void*);
int start_freeze__10TObjPlayerFPv(void*);
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

void set_flag_200000__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_8011E204((void*)(arg0), 0x200000);
}
int check_flag_4__10TObjPlayerFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 4); }
void* set_invisible__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
int TObjPlayer__sub_801BE6E4(void* p) { return set_flag_4000__10TObjPlayerFPv(p); }
int set_flag_4000__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8011E204(p, 16384); }
int clear_flag_4000__10TObjPlayerFPv(void* p) { return set_state_flags__10TObjPlayerFPvUi(p, 16384); }
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x3b4) = v; }
s32 get_anim_id__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x3b4); }
int check_flag_0x40000000__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 30) & 0x1; }
void clear_flag_0x2__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) &= 0xfffffffd; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BE778
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_max_level__10TObjPlayerFv();
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
int check_flag_4__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BE6E4(void* p);
int set_flag_4000__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v);
s32 get_anim_id__10TObjPlayerFPv(void* p);
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
int is_action_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
u8 get_battle_mode__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE794(void* p, u8 v);
u8 get_byte_339__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
int get_equip_flags__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int get_inventory_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int get_field_374_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int get_field_374__10TObjPlayerFPv(void* p);
void set_move_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_action_flag_2__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int start_freeze_self__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
s32 TObjPlayer__sub_801BEB0C(void* p);
int unregister_sub__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BEB34(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
void TObjPlayer__sub_801BEB5C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
int query_field374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
int get_quest_status__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int is_mounted__15TPlyPhotonChairFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_80154A00(void*);
int end_camera_pan__10TObjPlayerFPv(void*);
int start_freeze__10TObjPlayerFPv(void*);
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

int is_action_active__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 1) & 0x1; }
void TObjPlayer__sub_801BE784(void* p, u8 v) { *(u8*)((char*)p + 0x2e7) = v; }
u8 get_battle_mode__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x33a); }
void TObjPlayer__sub_801BE794(void* p, u8 v) { *(u8*)((char*)p + 0x2cb) = v; }
u8 get_byte_339__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x339); }
void TObjPlayer__sub_801BE7A4(void* p, u8 v) { *(u8*)((char*)p + 0x2af) = v; }
u8 get_mag_level__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0x338); }
void TObjPlayer__sub_801BE7B4(void* p, u8 v) { *(u8*)((char*)p + 0x293) = v; }
int TObjPlayer__sub_801BE7BC(void* p) { return TObjPlayer__sub_801BED70((char*)p + 0x374); }
void TObjPlayer__sub_801BE7E0(void* p, u8 v) { *(u8*)((char*)p + 0x277) = v; }
int get_equip_flags__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BED78((char*)p + 0x374); }
void TObjPlayer__sub_801BE80C(void* p, u8 v) { *(u8*)((char*)p + 0x25b) = v; }
int get_inventory_state__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BED80((char*)p + 0x374); }
void TObjPlayer__sub_801BE838(void* p, u8 v) { *(u8*)((char*)p + 0x23f) = v; }
int get_field_374_state__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BED88((char*)p + 0x374); }
void TObjPlayer__sub_801BE864(void* p, u8 v) { *(u8*)((char*)p + 0x223) = v; }
int get_field_374__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BED90((char*)p + 0x374); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BE8E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_max_level__10TObjPlayerFv();
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
int check_flag_4__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BE6E4(void* p);
int set_flag_4000__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v);
s32 get_anim_id__10TObjPlayerFPv(void* p);
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
int is_action_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
u8 get_battle_mode__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE794(void* p, u8 v);
u8 get_byte_339__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
int get_equip_flags__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int get_inventory_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int get_field_374_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int get_field_374__10TObjPlayerFPv(void* p);
void set_move_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_action_flag_2__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int start_freeze_self__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
s32 TObjPlayer__sub_801BEB0C(void* p);
int unregister_sub__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BEB34(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
void TObjPlayer__sub_801BEB5C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
int query_field374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
int get_quest_status__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int is_mounted__15TPlyPhotonChairFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_80154A00(void*);
int end_camera_pan__10TObjPlayerFPv(void*);
int start_freeze__10TObjPlayerFPv(void*);
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

void set_move_mode__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x3dc) = v; }
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x3d8) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BE918
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_max_level__10TObjPlayerFv();
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
int check_flag_4__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BE6E4(void* p);
int set_flag_4000__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v);
s32 get_anim_id__10TObjPlayerFPv(void* p);
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
int is_action_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
u8 get_battle_mode__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE794(void* p, u8 v);
u8 get_byte_339__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
int get_equip_flags__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int get_inventory_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int get_field_374_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int get_field_374__10TObjPlayerFPv(void* p);
void set_move_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_action_flag_2__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int start_freeze_self__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
s32 TObjPlayer__sub_801BEB0C(void* p);
int unregister_sub__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BEB34(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
void TObjPlayer__sub_801BEB5C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
int query_field374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
int get_quest_status__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int is_mounted__15TPlyPhotonChairFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_80154A00(void*);
int end_camera_pan__10TObjPlayerFPv(void*);
int start_freeze__10TObjPlayerFPv(void*);
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
s32 clamp_index_to_max__10TObjPlayerFi(s32 arg0) {
    s32 var_r31;

    var_r31 = arg0;
    if (var_r31 < 0) {
        var_r31 = 0;
    } else if (var_r31 > get_max_level__10TObjPlayerFv()) {
        var_r31 = get_max_level__10TObjPlayerFv();
    }
    return var_r31;
}
void clamp_nested_index__10TObjPlayerFPv(void *arg0) {
    clamp_index_to_max__10TObjPlayerFi(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), s32 *, 0x18));
}
void TObjPlayer__sub_801BE9A8(s32 arg0) {
    TObjPlayer__sub_8011E204((void*)(arg0), 0x20000);
}
void set_flag_20000__10TObjPlayerFi(s32 arg0) {
    set_state_flags__10TObjPlayerFPvUi((void*)(arg0), 0x20000);
}
void set_flag_2000000__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8011E204(arg0, 0x02000000);
}
void set_flag_02000000__10TObjPlayerFPv(void *arg0) {
    check_flag__10TObjPlayerFPvi(arg0, 0x02000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BEA4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_max_level__10TObjPlayerFv();
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
int check_flag_4__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BE6E4(void* p);
int set_flag_4000__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v);
s32 get_anim_id__10TObjPlayerFPv(void* p);
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
int is_action_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
u8 get_battle_mode__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE794(void* p, u8 v);
u8 get_byte_339__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
int get_equip_flags__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int get_inventory_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int get_field_374_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int get_field_374__10TObjPlayerFPv(void* p);
void set_move_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_action_flag_2__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int start_freeze_self__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
s32 TObjPlayer__sub_801BEB0C(void* p);
int unregister_sub__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BEB34(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
void TObjPlayer__sub_801BEB5C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
int query_field374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
int get_quest_status__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int is_mounted__15TPlyPhotonChairFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_80154A00(void*);
int end_camera_pan__10TObjPlayerFPv(void*);
int start_freeze__10TObjPlayerFPv(void*);
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

void set_action_flag_2__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) |= 0x2; }
void set_flag_400000__10TObjPlayerFi(s32 arg0) {
    set_state_flags__10TObjPlayerFPvUi((void*)(arg0), 0x400000);
}
int check_flag_48__10TObjPlayerFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 48); }
int is_status_locked__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0x30) & 0x10000; }
int is_status_flag_200__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0x30) & 0x200; }
int TObjPlayer__sub_801BEABC(void* p) { return end_camera_pan__10TObjPlayerFPv(p); }
int start_freeze_self__10TObjPlayerFPv(void* p) { return start_freeze__10TObjPlayerFPv(p); }
void set_floor__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x3e4) = v; }
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x3e0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BEB0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801BEB0C(void* p);
int unregister_sub__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BEB34(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
void TObjPlayer__sub_801BEB5C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
int query_field374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
int get_quest_status__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int TFontSmallLobby__sub_801C0228(void*);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_80154A00(void*);
s32 get_max_level__10TObjPlayerFv();
int TObjPlayer__sub_801BE6E4(void* p);
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v);
s32 get_anim_id__10TObjPlayerFPv(void* p);
int is_action_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
u8 get_battle_mode__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE794(void* p, u8 v);
u8 get_byte_339__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
int get_equip_flags__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int get_inventory_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int get_field_374_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int get_field_374__10TObjPlayerFPv(void* p);
void set_move_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
void set_action_flag_2__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int start_freeze_self__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
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
int is_mounted__15TPlyPhotonChairFPv(void* p);
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
int check_flag_4__10TObjPlayerFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
int end_camera_pan__10TObjPlayerFPv(void*);
int set_flag_4000__10TObjPlayerFPv(void* p);
int start_freeze__10TObjPlayerFPv(void*);

s32 TObjPlayer__sub_801BEB0C(void* p) { return *(s32*)((char*)p + 0x334); }
int unregister_sub__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80154A00(p); }
void TObjPlayer__sub_801BEB34(void* p, s32 v) { *(s32*)((char*)p + 0x3e8) = v; }
u8 TObjPlayer__sub_801BEB3C(void* p) { return *(u8*)((char*)p + 0x2e7); }
u8 TObjPlayer__sub_801BEB44(void* p) { return *(u8*)((char*)p + 0x2cb); }
u8 TObjPlayer__sub_801BEB4C(void* p) { return *(u8*)((char*)p + 0x2af); }
void set_play_time__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x3bc) = v; }
void TObjPlayer__sub_801BEB5C(void* p) { *(s32*)((char*)p + 0x3c8) = -1; }
int TObjPlayer__sub_801BEB68(void* p) { return TObjPlayer__sub_801BED98((char*)p + 0x374); }
u8 TObjPlayer__sub_801BEB8C(void* p) { return *(u8*)((char*)p + 0x293); }
int query_field374__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BEDA0((char*)p + 0x374); }
u8 TObjPlayer__sub_801BEBB8(void* p) { return *(u8*)((char*)p + 0x277); }
int query_flags_374__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BEDA8((char*)p + 0x374); }
u8 TObjPlayer__sub_801BEBE4(void* p) { return *(u8*)((char*)p + 0x25b); }
int get_quest_status__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BEDB0((char*)p + 0x374); }
u8 TObjPlayer__sub_801BEC10(void* p) { return *(u8*)((char*)p + 0x23f); }
int get_field_0x374__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BEDB8((char*)p + 0x374); }
u8 TObjPlayer__sub_801BEC3C(void* p) { return *(u8*)((char*)p + 0x223); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D9908
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 clamp_to_max__10TObjPlayerFiUcUc(M2C_UNK arg0, u8 arg1, u8 arg2);
s32 is_invalid_slot__10TObjPlayerFUc(u8);

u8 clamp_to_max__10TObjPlayerFiUcUc(M2C_UNK arg0, u8 arg1, u8 arg2) {
    u8 var_r3;

    if (is_invalid_slot__10TObjPlayerFUc(arg1) != 0) {
        return arg1;
    }
    var_r3 = arg1;
    if (arg1 > arg2) {
        var_r3 = arg2;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D9964
#include "types.h"

extern "C" {

void validate_and_clear_slot__10TObjPlayerFPv(void* p);
int is_invalid_slot__10TObjPlayerFUc(void);
int fn_801D9870(void*);

void validate_and_clear_slot__10TObjPlayerFPv(void* p) { fn_801D9870(p); is_invalid_slot__10TObjPlayerFUc(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D9988
#include "types.h"

extern "C" {

u8 is_invalid_slot__10TObjPlayerFUc(u8 arg0);

u8 is_invalid_slot__10TObjPlayerFUc(u8 arg0) {
    return (u8) (arg0 == 0xFF);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D9A04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_valid_technique_id__10TObjPlayerFs(s16 arg0);
u8 is_valid_technique_slot__10TObjPlayerFUc(u8 arg0);
s32 check_technique_level__10TObjPlayerFiiUc(s32 arg0, s32 arg1, u8 arg2);
u8 TObjPlayer__sub_801C010C(s32, s32);
s32 is_invalid_slot__10TObjPlayerFUc(u8);
u8 TObjPlayer__sub_801D9BE8(s32, s32);

u8 is_valid_technique_id__10TObjPlayerFs(s16 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if ((arg0 >= 0) && (arg0 < 0x13)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

u8 is_valid_technique_slot__10TObjPlayerFUc(u8 arg0) {
    return (u8) (arg0 <= 0xFU);
}

s32 check_technique_level__10TObjPlayerFiiUc(s32 arg0, s32 arg1, u8 arg2) {
    if (is_invalid_slot__10TObjPlayerFUc(arg2) != 0) {
        return 1;
    }
    if (arg2 > TObjPlayer__sub_801C010C(arg0, arg1)) {
        return 0;
    }
    return arg2 <= TObjPlayer__sub_801D9BE8(arg0, arg1) ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D9B18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_tech_level__10TObjPlayerFPvs(void *arg0, s16 arg1);

void set_tech_level__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    s16 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0xA)) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s16 *, 6) = var_r4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D9C88
#include "types.h"

extern "C" {

void reset_slots__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D9AD0(void*, void*, void*, void*);

void reset_slots__10TObjPlayerFPv(void* p) { *(short*)((char*)p + 0x6) = 0; { int i; for (i = 0; i < 10; i++) { TObjPlayer__sub_801D9AD0(p, (void*)i, (void*)65535, (void*)0); } } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D9E08
#include "types.h"

extern "C" {

int TObjPlayer__sub_801D9E08(void);
void TObjPlayer__sub_801D9E10(void* p, s16 v);
void set_field_1c__10TObjPlayerFPvf(void* p, f32 v);
void set_field18__10TObjPlayerFPvf(void* p, f32 v);

int TObjPlayer__sub_801D9E08(void) { return 19; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D9E10
#include "types.h"

extern "C" {

int TObjPlayer__sub_801D9E08(void);
void TObjPlayer__sub_801D9E10(void* p, s16 v);
void set_field_1c__10TObjPlayerFPvf(void* p, f32 v);
void set_field18__10TObjPlayerFPvf(void* p, f32 v);

void TObjPlayer__sub_801D9E10(void* p, s16 v) { *(s16*)((char*)p + 0x8) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D9E40
#include "types.h"

extern "C" {

int TObjPlayer__sub_801D9E08(void);
void TObjPlayer__sub_801D9E10(void* p, s16 v);
void set_field_1c__10TObjPlayerFPvf(void* p, f32 v);
void set_field18__10TObjPlayerFPvf(void* p, f32 v);

void set_field_1c__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }
void set_field18__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x18) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C09A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_instance__10TObjPlayerFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D67B8;

void free_static_instance__10TObjPlayerFv(void) {
    if ((u32) lbl_805D67B8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D67B8, 1);
        lbl_805D67B8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C0A38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 remap_episode__10TObjPlayerFv(void);
s32 TLobby__sub_80351DFC();

s32 remap_episode__10TObjPlayerFv(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80351DFC();
    switch (var_r3) {
    case 3:
    case 9:
        var_r3 = 3;
        break;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C0DA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_level_display_state__10TObjPlayerFPv(void *arg0);
s32 remap_episode__10TObjPlayerFv(void *);

void calc_level_display_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 1) {
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xA0) = 1;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r3 < 1) {
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) == 0) {
        if (temp_r3 > 1) {
            M2C_FIELD(arg0, s32 *, 0xA4) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0xA4) = 0xA;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xA4) = 5;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) == remap_episode__10TObjPlayerFv(arg0)) {
        M2C_FIELD(arg0, s32 *, 0x98) = 3;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C11AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_802C11AC(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjPathObjFv(void *, int);

extern M2C_UNK lbl_804E0898[];

void *TObjPlayer__sub_802C11AC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E0898;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C1324
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create_child_object__10TObjPlayerFPv(void *arg0);
void destroy_instance__10TObjPlayerFv(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *TObjPlayer__sub_802C19E8(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create_child_object__10TObjPlayerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TObjPlayer__sub_802C19E8(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D67B0;
extern u32 lbl_805D67B4;

void destroy_instance__10TObjPlayerFv(void) {
    if ((u32) lbl_805D67B4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D67B4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D67B4);
        lbl_805D67B4 = 0U;
    }
    if ((u32) lbl_805D67B0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D67B0, 1);
        lbl_805D67B0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C1754
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_debug_lines__10TObjPlayerFPv(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw_line_strip__10TObjPlayerFPviif(void *, s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D67B4;
extern const f32 lbl_805DE4FC;

void draw_debug_lines__10TObjPlayerFPv(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (get_state_flag__9TMainTaskFv() == 0)) {
        draw_line_strip__10TObjPlayerFPviif(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    set_global_param__8TObjFishFi(lbl_805D67B4);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    TOHangerMachine01__sub_803D9C00(arg0 + 0xAC);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xB8));
    TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0xC0));
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C1990
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt_path_obj__10TObjPlayerFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjPathObjFv(void *, int);

extern M2C_UNK lbl_804E08D4[];

void *dt_path_obj__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E08D4;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C1AF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__10TObjPlayerFPv(void *arg0);
void free_statics__10TObjPlayerFv(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *TObjPlayer__sub_802C20E8(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__10TObjPlayerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjPlayer__sub_802C20E8(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D67A8;
extern u32 lbl_805D67AC;

void free_statics__10TObjPlayerFv(void) {
    if ((u32) lbl_805D67AC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D67AC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D67AC);
        lbl_805D67AC = 0U;
    }
    if ((u32) lbl_805D67A8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D67A8, 1);
        lbl_805D67A8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C1F28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_demo_lines_and_meshes__10TObjPlayerFPv(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw_line_strip__10TObjPlayerFPviif(void *, s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D67AC;
extern const f32 lbl_805DE4FC;

void draw_demo_lines_and_meshes__10TObjPlayerFPv(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (get_state_flag__9TMainTaskFv() == 0)) {
        draw_line_strip__10TObjPlayerFPviif(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    set_global_param__8TObjFishFi(lbl_805D67AC);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    TOHangerMachine01__sub_803D9C00(arg0 + 0xAC);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xB8));
    TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0xC0));
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C2090
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *deleting_dtor_pathobj__10TObjPlayerFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjPathObjFv(void *, int);

extern M2C_UNK lbl_804E0910[];

void *deleting_dtor_pathobj__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E0910;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C21A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create_path_obj__10TObjPlayerFPv(void *arg0);
void free_chr_select__10TObjPlayerFv(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *TObjPlayer__sub_802C27FC(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create_path_obj__10TObjPlayerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjPlayer__sub_802C27FC(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D67A0;
extern u32 lbl_805D67A4;

void free_chr_select__10TObjPlayerFv(void) {
    if ((u32) lbl_805D67A4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D67A4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D67A4);
        lbl_805D67A4 = 0U;
    }
    if ((u32) lbl_805D67A0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D67A0, 1);
        lbl_805D67A0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C263C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_demo_trajectory__10TObjPlayerFPv(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw_line_strip__10TObjPlayerFPviif(void *, s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D67A4;
extern const f32 lbl_805DE4FC;

void draw_demo_trajectory__10TObjPlayerFPv(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (get_state_flag__9TMainTaskFv() == 0)) {
        draw_line_strip__10TObjPlayerFPviif(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    set_global_param__8TObjFishFi(lbl_805D67A4);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    TOHangerMachine01__sub_803D9C00(arg0 + 0xAC);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xB8));
    TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0xC0));
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C27A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_802C27A4(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjPathObjFv(void *, int);

extern M2C_UNK lbl_804E094C[];

void *TObjPlayer__sub_802C27A4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E094C;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C28B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_802C28B4(void *arg0);
void TObjPlayer__sub_802C2900(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *TObjPlayer__sub_802C2F04(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjPlayer__sub_802C28B4(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjPlayer__sub_802C2F04(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D6798;
extern u32 lbl_805D679C;

void TObjPlayer__sub_802C2900(void) {
    if ((u32) lbl_805D679C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D679C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D679C);
        lbl_805D679C = 0U;
    }
    if ((u32) lbl_805D6798 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6798, 1);
        lbl_805D6798 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C2D3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_model_parts__10TObjPlayerFPv(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK draw_line_strip__10TObjPlayerFPviif(void *, s32, s32, f32);

extern s32 lbl_805D679C;
extern const f32 lbl_805DE4FC;

void draw_model_parts__10TObjPlayerFPv(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (get_state_flag__9TMainTaskFv() == 0)) {
        draw_line_strip__10TObjPlayerFPviif(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    set_global_param__8TObjFishFi(lbl_805D679C);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    TOHangerMachine01__sub_803D9C00(arg0 + 0xAC);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xB8));
    TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0xC0));
    set_global_flag__10TObjPlayerFv();
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C2EAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_802C2EAC(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjPathObjFv(void *, int);

extern M2C_UNK lbl_804E0988[];

void *TObjPlayer__sub_802C2EAC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E0988;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
