#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdPlayerLoadGC.h"

TAdPlayerLoadGC::~TAdPlayerLoadGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x80076BBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_instance__15TAdPlayerLoadGCFv(void);

extern s32 lbl_805D5F78;

s32 get_instance__15TAdPlayerLoadGCFv(void) {
    return lbl_805D5F78;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9EF8
#include "types.h"

extern "C" {

void set_state__15TAdPlayerLoadGCFi(int a0);

    extern int lbl_805D63D0;
void set_state__15TAdPlayerLoadGCFi(int a0) { lbl_805D63D0 = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E0C30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_load_state__15TAdPlayerLoadGCFPvPv(void *arg0, void *arg1);
M2C_UNK TAdPlayerLoadGC__sub_803877F8();

void reset_load_state__15TAdPlayerLoadGCFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    TAdPlayerLoadGC__sub_803877F8();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E0C5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void poll_card_load__15TAdPlayerLoadGCFi(s32 arg0);
M2C_UNK TAdPlayerLoadGC__sub_801E101C(s32);
s32 TAdPlayerLoadGC__sub_80384B30(s32, M2C_UNK *, s32 *);

extern s32 TAdPlayerLoadGC__data_805D5E30;
extern s32 TAdPlayerLoadGC__data_805D5E40;

void poll_card_load__15TAdPlayerLoadGCFi(s32 arg0) {
    M2C_UNK spC;
    s32 sp8;
    s32 temp_r3;

    TAdPlayerLoadGC__data_805D5E30 &= ~(0x400 << arg0);
    do {
        temp_r3 = TAdPlayerLoadGC__sub_80384B30(arg0, &spC, &sp8);
    } while (temp_r3 == -1);
    if (sp8 == 0x2000) {
        if ((temp_r3 == -3) || (temp_r3 == -2)) {
            TAdPlayerLoadGC__data_805D5E40 = -0x7D;
            return;
        }
        TAdPlayerLoadGC__sub_801E101C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E14E4
#include "types.h"

extern "C" {

void TAdPlayerLoadGC__sub_801E14E4(void);

void TAdPlayerLoadGC__sub_801E14E4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E1510
#include "types.h"

extern "C" {

int TAdPlayerLoadGC__sub_801E1510(void);

    extern int lbl_805D5E44;
int TAdPlayerLoadGC__sub_801E1510(void) {  return lbl_805D5E44; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E1530
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_load_result__15TAdPlayerLoadGCFv(void);

extern s32 TAdPlayerLoadGC__data_805D5E40;

s32 get_load_result__15TAdPlayerLoadGCFv(void) {
    return TAdPlayerLoadGC__data_805D5E40;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E1F40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_memcard_status__15TAdPlayerLoadGCFi(s32 arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E101C(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1E38();
s32 fn_803849D8(s32);

extern s32 TAdPlayerLoadGC__data_805D5E30;
extern s32 TAdPlayerLoadGC__data_805D5E40;

s32 check_memcard_status__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 temp_r3;

    if (arg0 >= 2) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    if ((TAdPlayerLoadGC__sub_801E1E38() == 0) || (TAdPlayerLoadGC__sub_801E1B50(arg0) != 0) || (TAdPlayerLoadGC__sub_801E0D8C(arg0) == 0)) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    if (!(TAdPlayerLoadGC__data_805D5E30 & (4 << arg0)) && (TAdPlayerLoadGC__sub_801E101C(arg0) != 0)) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    temp_r3 = fn_803849D8(arg0);
    switch (temp_r3) {
    case -6:
    case -13:
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    case 0:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    default:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E2404
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 query_memcard_capacity__15TAdPlayerLoadGCFi(s32 arg0);
s32 check_memcard_status__15TAdPlayerLoadGCFi();

s32 PADInit(s32, s32 *, M2C_UNK *);
extern s32 TAdPlayerLoadGC__data_805D5E40;

s32 query_memcard_capacity__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r3;

    if (arg0 >= 2) {
        return -0xFF;
    }
    if (check_memcard_status__15TAdPlayerLoadGCFi() != 0) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    }
    temp_r3 = PADInit(arg0, &spC, &sp8);
    switch (temp_r3) {
    case -3:
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    case -1:
        TAdPlayerLoadGC__data_805D5E40 = -1;
        return -1;
    case 0:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return spC / 8192;
    case -6:
    case -128:
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    default:
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E25A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 poll_load_status__15TAdPlayerLoadGCFi(s32 arg0);
s32 TAdPlayerLoadGC__sub_80386DC4();

extern s32 TAdPlayerLoadGC__data_805D5E40;

s32 poll_load_status__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 temp_r3;

    if (arg0 >= 2) {
        TAdPlayerLoadGC__data_805D5E40 = -1;
        return -1;
    }
    temp_r3 = TAdPlayerLoadGC__sub_80386DC4();
    switch (temp_r3) {
    case -1:
        TAdPlayerLoadGC__data_805D5E40 = -1;
        return -1;
    case 0:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    case -4:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    default:
        TAdPlayerLoadGC__data_805D5E40 = -1;
        return -1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D6348
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_load_sound__15TAdPlayerLoadGCFPv(void *arg0);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);

extern f32 lbl_805DE7A8;

void play_load_sound__15TAdPlayerLoadGCFPv(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_803D9624(0, lbl_805DE7A8, M2C_FIELD(arg0, f32 *, 0x1F8), lbl_805DE7A8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D6404
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_player_load__15TAdPlayerLoadGCFi(s32 arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E3E8(s32);
M2C_UNK TObjPlayer__sub_8011EB84(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK draw_status_icon__10TObjPlayerFPvi(s32, M2C_UNK *);

void send_player_load__15TAdPlayerLoadGCFi(s32 arg0) {
    M2C_UNK sp8;

    draw_status_icon__10TObjPlayerFPvi(arg0, &sp8);
    TObjEneDellBiter__sub_80087350(&sp8, 9);
    TObjPlayer__sub_8011E3E8(arg0);
    TObjPlayer__sub_8011EB84(arg0, &sp8, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D645C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_value__15TAdPlayerLoadGCFi(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern const f32 lbl_805DE7B0;
extern const f32 lbl_805DE7B4;

void approach_value__15TAdPlayerLoadGCFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DE7B0, lbl_805DE7B4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D6488
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdPlayerLoadGC__sub_802D6488(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern const f32 lbl_805DE7A8;
extern const f32 lbl_805DE7B8;

void TAdPlayerLoadGC__sub_802D6488(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DE7B8, lbl_805DE7A8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D64B4
#include "types.h"

extern "C" {

void* init_object__15TAdPlayerLoadGCFPv(void* a0);
int TObjPlayer__sub_80120D50(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char lbl_804E24F0[];
    extern const float lbl_805DE7A8;
void* init_object__15TAdPlayerLoadGCFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E24F0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(float*)((char*)a0 + 0x1f8) = lbl_805DE7A8; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D655C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdPlayerLoadGC__sub_802D655C(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804E24F0[];

void *TAdPlayerLoadGC__sub_802D655C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E24F0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D6B80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void set_state__15TAdPlayerLoadGCFi(int);

extern M2C_UNK __vt__15TAdPlayerLoadGC[];
extern void *lbl_805D3F48;

void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TAdPlayerLoadGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F48;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    set_state__15TAdPlayerLoadGCFi(0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033BB14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 poll_memcard_status__15TAdPlayerLoadGCFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_8033BA0C(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_8033BA84(M2C_UNK);
s32 fn_8033BAB4(void *);

s32 poll_memcard_status__15TAdPlayerLoadGCFPv(void *arg0) {
    s32 var_r31;

    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        return 1;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        return 4;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (check_memcard_status__15TAdPlayerLoadGCFi(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        return 8;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x28);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    var_r31 = fn_8033BAB4(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        if (TAdSinglePlyChrSelectGC__sub_8033BA84(0) == 0) {
            var_r31 |= 0x10;
        }
    } else if (TAdSinglePlyChrSelectGC__sub_8033BA0C(0) == 0) {
        var_r31 |= 0x10;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F18B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1);

extern M2C_UNK lbl_805D4700;

s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1) {
    if (((arg0 != 0) && (arg0 != 1)) || (arg1 < 0) || (arg1 > 2)) {
        return 0;
    }
    if (arg1 != 2) {
        (&lbl_805D4700)[arg0] = arg1;
    }
    return (&lbl_805D4700)[arg0];
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F1900
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_load_state__15TAdPlayerLoadGCFv(void);

extern s32 lbl_805D7940;

s32 get_load_state__15TAdPlayerLoadGCFv(void) {
    return lbl_805D7940;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F4B24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_803F4B24(void);

extern s32 lbl_805D4708;

s32 TAdPlayerLoadGC__sub_803F4B24(void) {
    return lbl_805D4708;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F4B80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_803F4B80(void);

s32 TAdPlayerLoadGC__sub_803F4B80(void) {
    return 0x8000;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8042F108
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_8042F108(s8 arg0);

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 TAdPlayerLoadGC__sub_8042F108(s8 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s8 *, 0x13C) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

}
#endif
#endif
