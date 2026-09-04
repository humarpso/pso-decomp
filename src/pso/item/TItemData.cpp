#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap__9TItemDataFv(s32 arg0);
M2C_UNK bswap_32__FPUl(s32);

void bswap__9TItemDataFv(s32 arg0) {
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0xC);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80104D0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_item_usable__9TItemDataFiPv(s32 arg0, u8 *arg1);
s32 TItemData__sub_80104DAC(s32, u8 *);
s32 TItemData__sub_8010C52C(u8 *);
void *TItemData__sub_8010EA38(u8 *);

u8 is_item_usable__9TItemDataFiPv(s32 arg0, u8 *arg1) {
    if (TItemData__sub_8010C52C(arg1) != 0) {
        return 1U;
    }
    if ((u8) *arg1 == 3) {
        if (M2C_FIELD(TItemData__sub_8010EA38(arg1), s32 *, 0x10) & 1) {
            return 1U;
        }
        return (u8) (TItemData__sub_80104DAC(arg0, arg1) != 0);
    }
    return (u8) (TItemData__sub_80104DAC(arg0, arg1) != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105934
#include "types.h"

extern "C" {

int TItemMagSub__sub_80114524(void*);
void fn_801058E8(void* p);
int activate_d04_slot__10TObjPlayerFPv(void* p);
int test_flag3__9TItemDataFPv(void* p);
int get_item_field_2__9TItemDataFPv(void* p);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);

int test_flag3__9TItemDataFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 3); }
int get_item_field_2__9TItemDataFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105984
#include "types.h"

extern "C" {

void* initialize_mag_data__9TItemDataFPv(void* p);
int test_flag3__9TItemDataFPv(void* p);
int get_item_field_2__9TItemDataFPv(void* p);
int activate_d04_slot__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
void fn_801058E8(void* p);
int TItemMagSub__sub_80114524(void*);

void* initialize_mag_data__9TItemDataFPv(void* p) { TItemMagSub__sub_80114524(p); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010B7F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1);
void TItemData__sub_8010B818(void *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
int check_flag_32__14TItemEquipBaseFPv(void* p);
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1) {
    *arg0 -= arg1;
}
s32 TItemData__sub_8010B808(void* p) { return *(s32*)((char*)p + 0x31c); }
s32 TItemData__sub_8010B810(void* p) { return *(s32*)((char*)p + 0x318); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010B818
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1);
void TItemData__sub_8010B818(void *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
int check_flag_32__14TItemEquipBaseFPv(void* p);
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);

void TItemData__sub_8010B818(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) + arg1);
}
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
}
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1) {
    *arg0 += arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010C638
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemData__sub_8010C638(void *arg0, u16 arg1);

void TItemData__sub_8010C638(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (arg1 >> 8U);
    M2C_FIELD(arg0, u8 *, 0xB) = arg1;
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (M2C_FIELD(arg0, u8 *, 0xA) | 0x80);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010C654
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 get_packed_value__9TItemDataFPv(void *arg0);
s32 is_usable__9TItemDataFPv();

u16 get_packed_value__9TItemDataFPv(void *arg0) {
    if (is_usable__9TItemDataFPv() != 0) {
        return (u16) (((M2C_FIELD(arg0, u8 *, 0xA) << 8) & 0x7F00) | M2C_FIELD(arg0, u8 *, 0xB));
    }
    return 0U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010C6A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_usable__9TItemDataFPv(void *arg0);
s32 TItemData__sub_8010CC68();

s32 is_usable__9TItemDataFPv(void *arg0) {
    u8 temp_r0;

    if (TItemData__sub_8010CC68() == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        if ((temp_r0 != 2) && (temp_r0 != 4) && (M2C_FIELD(arg0, u8 *, 0xA) & 0x80)) {
            return 1;
        }
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010C738
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TItemData__sub_8010C738(void);
void TItemData__sub_8010C740(void);
void unpack_from_item__9TItemDataFPvPv(void *arg0, void *arg1);
M2C_UNK TItemData__sub_8010D510(void *, M2C_UNK *);
M2C_UNK initialize_mag_data__9TItemDataFPv(M2C_UNK *);
M2C_UNK set_stack_count__24TShopEquipmentListWindowFPvc(void *, M2C_UNK);
M2C_UNK init__9TItemDataFv();

int TItemData__sub_8010C738(void) { return 0; }
void TItemData__sub_8010C740(void) {  }

void unpack_from_item__9TItemDataFPvPv(void *arg0, void *arg1) {
    M2C_UNK sp8;
    u8 temp_r0;
    u8 temp_r0_2;

    if (arg1 != NULL) {
        init__9TItemDataFv();
        M2C_FIELD(arg0, u8 *, 0) = (u8) (((u32) M2C_FIELD(arg1, u32 *, 0x30) >> 0x18U) & 0xF);
        M2C_FIELD(arg0, u8 *, 1) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x30) >> 0x10U);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        if ((temp_r0 == 0) || (temp_r0 == 1)) {
            M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) + 1);
        }
        M2C_FIELD(arg0, u8 *, 2) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x30) >> 8U);
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0);
        switch ((s32) temp_r0_2) {
        case 0:
            M2C_FIELD(arg0, u8 *, 6) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 8U);
            M2C_FIELD(arg0, s8 *, 7) = (s8) M2C_FIELD(arg1, u32 *, 0x34);
            M2C_FIELD(arg0, s8 *, 8) = (s8) ((u32) M2C_FIELD(arg1, u32 *, 0x38) >> 0x18U);
            M2C_FIELD(arg0, u8 *, 9) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x38) >> 0x10U);
            M2C_FIELD(arg0, u8 *, 0xA) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x38) >> 8U);
            M2C_FIELD(arg0, s8 *, 0xB) = (s8) M2C_FIELD(arg1, u32 *, 0x38);
            M2C_FIELD(arg0, s8 *, 3) = (s8) ((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 0x18U);
            M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u32 *, 0x30);
            return;
        case 3:
            if ((u8) M2C_FIELD(arg0, u8 *, 1) == 2) {
                M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u32 *, 0x30);
            }
            set_stack_count__24TShopEquipmentListWindowFPvc(arg0, 1);
            return;
        case 4:
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 0x10U) * 0xA);
            return;
        case 1:
            M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg1, u32 *, 0x30);
            M2C_FIELD(arg0, s8 *, 3) = (s8) ((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 0x18U);
            M2C_FIELD(arg0, u8 *, 4) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 0x10U);
            return;
        case 2:
            initialize_mag_data__9TItemDataFPv(&sp8);
            TItemData__sub_8010D510(arg0, &sp8);
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010CCB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemData__sub_8010EA38();
s32 fn_80101A48(u8, u8);
s32 bswap_16__FPUs(s16 *);
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

void TItemData__sub_8010CCB0(void) {  }
void TItemData__sub_8010CCB4(void) {  }
u8 get_entry_field16__9TItemDataFv(void) {
    void *temp_r3;

    temp_r3 = TItemData__sub_8010EA38();
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u8 *, 0x16);
    }
    return 0U;
}
int register_drop__9TItemDataFPv(void* p) { return register_item_drop__10TObjPlayerFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010CD0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_item_use_result__9TItemDataFPv(u8 *arg0);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
void *TItemData__sub_8010EA38();
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
s32 bswap_16__FPUs(s16 *);
s32 fn_80101A48(u8, u8);
s32 lookup_item_def__9TItemDataFPv();
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

#include "types.h"
extern "C" {

s32 get_item_use_result__9TItemDataFPv(u8 *arg0) {
    if (lookup_item_def__9TItemDataFPv() != 0) {
        if (((u8) M2C_FIELD(arg0, u8 *, 0) == 3) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 0x10)) {
            return 0x63;
        }
        return 0xA;
    }
    return 1;
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010CD6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemData__sub_8010EA38();
s32 fn_80101A48(u8, u8);
s32 bswap_16__FPUs(s16 *);
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

void lookup_item_def__9TItemDataFPv(void *arg0) {
    fn_80101A48(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 1));
}
s16 get_field6_bswap__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 6);
    bswap_16__FPUs(&sp8);
    return sp8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010CDEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemData__sub_8010EA38();
s32 fn_80101A48(u8, u8);
s32 bswap_16__FPUs(s16 *);
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

s16 get_bswap16_field8__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 8);
    bswap_16__FPUs(&sp8);
    return sp8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010CE40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemData__sub_8010EA38();
s32 fn_80101A48(u8, u8);
s32 bswap_16__FPUs(s16 *);
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

s16 getS16_06__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 6);
    bswap_16__FPUs(&sp8);
    return sp8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010CE94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemData__sub_8010EA38();
s32 fn_80101A48(u8, u8);
s32 bswap_16__FPUs(s16 *);
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

s16 get_technique_level__9TItemDataFPv(void *arg0) {
    void *temp_r3;

    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 3) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 2)) {
        temp_r3 = TTecCtrl__sub_8022DBC4(M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(arg0, u8 *, 2), 0xFFFF);
        if (temp_r3 != NULL) {
            return M2C_FIELD(temp_r3, s16 *, 0x14);
        }
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010D5CC
#include "types.h"

extern "C" {

void bswap_fields__9TItemDataFPv(void* p);
int bswap_16__FPUs(void*);

void bswap_fields__9TItemDataFPv(void* p) { bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010DDDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_equip_effects__9TItemDataFPviiiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
M2C_UNK TItemData__sub_8010DD6C(void *, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TItemData__sub_8010B908(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010BD24(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010BEC4(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C0A4(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C1E0(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C320(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C5DC(void *, s32);

M2C_UNK apply_bonuses(void *, s32, s32, s32, s32, s32);
extern s32 lbl_805D53A0;

void apply_equip_effects__9TItemDataFPviiiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 temp_r0;
    u8 temp_r0_2;

    if ((arg1 != 0) || (arg1 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0), ((arg1 == 0) == 0))) {
        TItemData__sub_8010DD6C(arg0, arg1);
        TItemData__sub_8010C5DC(arg0, arg1);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        switch ((s32) temp_r0) {
        case 0:
            TItemData__sub_8010C320(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        case 1:
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 1);
            switch ((s32) temp_r0_2) {
            case 1:
                TItemData__sub_8010C1E0(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 2:
                TItemData__sub_8010C0A4(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 3:
                TItemData__sub_8010BEC4(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            }
            break;
        case 2:
            TItemData__sub_8010BD24(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        }
        apply_bonuses(arg0, arg1, arg2, arg3, arg4, arg5);
        TItemData__sub_8010B908(arg0, arg1, arg2, arg3, arg4, arg5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010E390
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_buy_price__9TItemDataFPv(void *arg0);
s32 TItemData__sub_8010DF68();
s32 TItemData__sub_8010EEC8(s32);
s32 check_item_flags__9TItemDataFPv(void *);

extern s32 lbl_805D2B10;

s32 calc_buy_price__9TItemDataFPv(void *arg0) {
    u8 temp_r0;

    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 4);
        if ((temp_r0 != 0) && (temp_r0 < 0x29U) && (TItemData__sub_8010DF68() == 0)) {
            if (check_item_flags__9TItemDataFPv(arg0) == 1) {
                return TItemData__sub_8010EEC8(M2C_FIELD(arg0, u8 *, 4) + 0x1CB);
            }
            return TItemData__sub_8010EEC8(0x1F4);
        }
    }
    return lbl_805D2B10;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010EB10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int calc_display_grade__9TItemDataFPv(void *arg0);
s16 get_field6_bswap__9TItemDataFPv(void *);
s32 TItemData__sub_8010EBD8();
s32 get_unit_attribute_index__10TObjPlayerFUc(u8);

int calc_display_grade__9TItemDataFPv(void *arg0) {
    s16 temp_r3;
    u8 temp_b;
    int var_r31;

    var_r31 = TItemData__sub_8010EBD8();
    switch ((s32) (u8) M2C_FIELD(arg0, u8 *, 0)) {
    case 0:
        if ((u8) var_r31 < 9U) {
            temp_b = M2C_FIELD(arg0, u8 *, 4);
            if (!(temp_b & 0x80)) {
                var_r31 += get_unit_attribute_index__10TObjPlayerFUc(temp_b);
            }
        } else if (M2C_FIELD(arg0, u8 *, 4) & 0x80) {
            var_r31 = 0;
        }
        break;
    case 1:
        if ((u8) M2C_FIELD(arg0, u8 *, 1) == 3) {
            temp_r3 = get_field6_bswap__9TItemDataFPv(arg0);
            if (temp_r3 < 0) {
                var_r31 -= 1;
            } else if (temp_r3 > 0) {
                var_r31 += 1;
            }
        }
        break;
    }
    if ((u8) var_r31 > 0xCU) {
        var_r31 = 0xC;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010EC6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemData__sub_8010EC6C(void *arg0);
s32 check_item_flags__9TItemDataFPv(void *arg0);
s32 TItemData__sub_8010C52C();

void TItemData__sub_8010EC6C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 0) {
        M2C_FIELD(arg0, u8 *, 4) = (u8) (M2C_FIELD(arg0, u8 *, 4) & 0x7F);
    }
}

s32 check_item_flags__9TItemDataFPv(void *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 0) && (M2C_FIELD(arg0, u8 *, 4) & 0x80)) {
        return TItemData__sub_8010C52C() != 0 ? 1 : 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010EDA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemData__sub_8010EDA8(void *arg0, s32 arg1);
void add_quantity__9TItemDataFPvi(void *arg0, s32 arg1);
void TItemData__sub_8010EDC8(void *arg0, s32 arg1);
void TItemData__sub_8010EDD8(void *arg0, s32 arg1);
void adjust_count__9TItemDataFPvi(void *arg0, s32 arg1);
void add_stat_ptr__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_bonus__9TItemDataFPvs(void *arg0, s16 arg1);
void TItemData__sub_8010EE1C(void *arg0, s16 arg1);
void TItemData__sub_8010EE30(s16 *arg0, s32 arg1);
s16 TItemData__sub_8010EE40(void *arg0);
s16 get_stat_percent__9TItemDataFPv(void *arg0);
s16 get_level__9TItemDataFPv(void *arg0);
s16 get_percent__9TItemDataFPv(void *arg0);
void update_player_field__9TItemDataFi(s32 arg0);
s32 TObjPlayer__sub_801AFDB0();
M2C_UNK TObjPlayer__sub_803373D0(s32, s32);

void TItemData__sub_8010EDA8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg0, s16 *, 8) + arg1);
}

void add_quantity__9TItemDataFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) (M2C_FIELD(arg0, s16 *, 0xA) + arg1);
}

void TItemData__sub_8010EDC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 6) = (s16) (M2C_FIELD(arg0, s16 *, 6) + arg1);
}

void TItemData__sub_8010EDD8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) + arg1);
}

void adjust_count__9TItemDataFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
}

void add_stat_ptr__9TItemDataFPvi(s16 *arg0, s32 arg1) {
    *arg0 += arg1;
}

void add_bonus__9TItemDataFPvs(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + arg1);
}

void TItemData__sub_8010EE1C(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - arg1);
}

void TItemData__sub_8010EE30(s16 *arg0, s32 arg1) {
    *arg0 -= arg1;
}

s16 TItemData__sub_8010EE40(void *arg0) {
    return (s16) ((s16) M2C_FIELD(arg0, s16 *, 0xA) / 100);
}

s16 get_stat_percent__9TItemDataFPv(void *arg0) {
    return (s16) ((s16) M2C_FIELD(arg0, s16 *, 4) / 100);
}

s16 get_level__9TItemDataFPv(void *arg0) {
    return (s16) ((s16) M2C_FIELD(arg0, s16 *, 8) / 100);
}

s16 get_percent__9TItemDataFPv(void *arg0) {
    return (s16) ((s16) M2C_FIELD(arg0, s16 *, 6) / 100);
}

void update_player_field__9TItemDataFi(s32 arg0) {
    TObjPlayer__sub_803373D0(arg0 + 0x374, TObjPlayer__sub_801AFDB0());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801146A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TItemData__sub_801146A4(void *arg0);
s16 TItemData__sub_801146C0(void *arg0);
s16 TItemData__sub_801146DC(void *arg0);
s16 TItemData__sub_801146F8(void *arg0);

s16 TItemData__sub_801146A4(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0xA) % 100);
}

s16 TItemData__sub_801146C0(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 8) % 100);
}

s16 TItemData__sub_801146DC(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 6) % 100);
}

s16 TItemData__sub_801146F8(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 4) % 100);
}

}
#endif
#endif
