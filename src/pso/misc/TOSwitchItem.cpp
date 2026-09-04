#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_anim__12TOSwitchItemFPv(void *arg0);

M2C_UNK init_switch_id__5TOKeyFPv();

void update_anim__12TOSwitchItemFPv(void *arg0) {
    f32 temp_f0;

    init_switch_id__5TOKeyFPv();
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) (temp_f0 * temp_f0);
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) >= 8) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) + 1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80102C44
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

u8 get_field_ec__12TOSwitchItemFPv(void* p) { return *(u8*)((char*)p + 0xec); }

void read_be16_field2__10TObjPlayerFPv(void* p);
void bswap_32__FPUl(u32* p);

}
#endif
#if PSO_CLASS_PACKAGE == 0x80177E20
#include "types.h"

extern "C" {

void TOSwitchItem__vt24(void);

void TOSwitchItem__vt24(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80178034
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TOSwitchItemFPv(void *arg0);
void TOSwitchItem__sub_80178080(void);
void TOSwitchItem__sub_80178084(void);
void *__dt__12TOSwitchItemFv(void *arg0, s16 arg1);
void *TOSwitchItem__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__12TOSwitchItemFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOSwitchItem__ct(o, tl_05, arg0);
    }
    return o;
}

void TOSwitchItem__sub_80178080(void) {  }
void TOSwitchItem__sub_80178084(void) {  }

extern M2C_UNK __vt__12TOSwitchItem[];

void *__dt__12TOSwitchItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOSwitchItem;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
