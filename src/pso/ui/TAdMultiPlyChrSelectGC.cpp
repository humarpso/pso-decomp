#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_event__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);

s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5BCC(void *, s32 *, s32 *);
M2C_UNK init__22TAdMultiPlyChrSelectGCFv();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C658C();
void * TAdMultiPlyChrSelectGC__sub_802C6920();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0024(s32, s32);
M2C_UNK set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(s32, s32);

void handle_event__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    void *temp_r3;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    switch (arg1) {
    case 10:
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6920();
        TAdMultiPlyChrSelectGC__sub_802C5BCC(temp_r3, &sp14, &sp10);
        init__22TAdMultiPlyChrSelectGCFv();
        set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), sp14);
        TAdMultiPlyChrSelectGC__sub_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), sp10);
        M2C_FIELD(arg0, s32 *, 0x9C) = 1;
        return;
    case 4:
        TAdMultiPlyChrSelectGC__sub_802C6920();
        TAdMultiPlyChrSelectGC__sub_802C658C();
        if (is_slot_active__23TAdSinglePlyChrSelectGCFUi() == 0) {
            temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6920();
            TAdMultiPlyChrSelectGC__sub_802C5BCC(temp_r3, &spC, &sp8);
            init__22TAdMultiPlyChrSelectGCFv();
            set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), spC);
            TAdMultiPlyChrSelectGC__sub_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), sp8);
        }
        M2C_FIELD(arg0, s32 *, 0x9C) = 1;
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A6EA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 pack_color_bits__13TRaderMapCoreFii();
M2C_UNK fn_801A6FF8(s32, s32, s32, s32);

void dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 t = pack_color_bits__13TRaderMapCoreFii();
    fn_801A6FF8(arg0, t, arg2, arg3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80299454
#include "types.h"

extern "C" {

int TAdMultiPlyChrSelectGC__sub_80299454(void);

    extern int lbl_805D68C8;
int TAdMultiPlyChrSelectGC__sub_80299454(void) {  return lbl_805D68C8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B1850
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32 arg0, s32 arg1, u32 arg2);

void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32 arg0, s32 arg1, u32 arg2) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (arg0 + (arg1 * 4));
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0x24) != arg2) {
        M2C_FIELD(temp_r3, u32 *, 0x1C) = arg2;
        M2C_FIELD(temp_r3, s32 *, 0x3C) = 0;
    }
    M2C_FIELD(temp_r3, u32 *, 0x24) = arg2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C54C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C50EC(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C522C(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5314(s32);
s32 get_state_flag__9TMainTaskFv();

extern s32 TAdMultiPlyChrSelectGC__data_805D67DC;

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0) {
    if (get_state_flag__9TMainTaskFv() != 1) {
        TAdMultiPlyChrSelectGC__sub_802C5314(arg0);
        switch ((s32) TAdMultiPlyChrSelectGC__data_805D67DC) {
        case 0:
            TAdMultiPlyChrSelectGC__sub_802C522C(arg0);
            return;
        case 1:
            TAdMultiPlyChrSelectGC__sub_802C50EC(arg0);
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C6418
#include "types.h"

extern "C" {

void init__22TAdMultiPlyChrSelectGCFv(void);
int TAdMultiPlyChrSelectGC__sub_802C65C0(void);
int TAdMultiPlyChrSelectGC__sub_802C6920(void);

    extern int TAdMultiPlyChrSelectGC__data_805D67D8;
void init__22TAdMultiPlyChrSelectGCFv(void) { TAdMultiPlyChrSelectGC__data_805D67D8 = TAdMultiPlyChrSelectGC__sub_802C6920(); TAdMultiPlyChrSelectGC__sub_802C6920(); TAdMultiPlyChrSelectGC__sub_802C65C0(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C6444
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_status__22TAdMultiPlyChrSelectGCFv(void);

extern s32 TAdMultiPlyChrSelectGC__data_805D67D8;
extern s32 TAdMultiPlyChrSelectGC__data_805D67DC;
extern s32 TAdMultiPlyChrSelectGC__data_805D67E0;

s32 get_status__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r3 = (s32) TAdMultiPlyChrSelectGC__data_805D67D8;
    if (var_r3 == 0) {
        return 0;
    }
    switch ((s32) TAdMultiPlyChrSelectGC__data_805D67DC) {
    case 0:
        return var_r3;
    case 1:
        return (s32) TAdMultiPlyChrSelectGC__data_805D67E0;
    default:
        return 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C6488
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_selection_confirmed__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdMultiPlyChrSelectGC__sub_802C6920();
s32 TAdMultiPlyChrSelectGC__sub_80299454();

s32 is_selection_confirmed__22TAdMultiPlyChrSelectGCFv(void) {
    if (TAdMultiPlyChrSelectGC__sub_80299454() != 0) {
        if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
            return TAdMultiPlyChrSelectGC__sub_802C6920();
        }
        return 0;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C6508
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 count_ready__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);

s32 count_ready__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    var_r30 = 0;
    do {
        if (TAdMultiPlyChrSelectGC__sub_802C6848(var_r30) != 0) {
            var_r31 += 1;
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C69EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void);

extern s32 TAdMultiPlyChrSelectGC__data_805D67D8;

s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void) {
    if (((s32) TAdMultiPlyChrSelectGC__data_805D67D8 < 0) || ((s32) TAdMultiPlyChrSelectGC__data_805D67D8 > 3)) {
        TAdMultiPlyChrSelectGC__data_805D67D8 = 0;
    }
    return TAdMultiPlyChrSelectGC__data_805D67D8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C6A68
#include "types.h"

extern "C" {

s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);

s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if ((TAdMultiPlyChrSelectGC__sub_802C6848(var_r31) != 0) && (TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) == 0)) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 3;
    }
    goto loop_1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C6F88
#include "types.h"

extern "C" {

s32 get_field_20__22TAdMultiPlyChrSelectGCFPv(void* p);

s32 get_field_20__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x20); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C6F90
#include "types.h"

extern "C" {

int get_state__22TAdMultiPlyChrSelectGCFv(void);

    extern int lbl_805D68D0;
int get_state__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D68D0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C6F98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_selected_slot__22TAdMultiPlyChrSelectGCFv(void);
int get_global_6700__22TAdMultiPlyChrSelectGCFv(void);
int TAdMultiPlyChrSelectGC__sub_802C6FA8(void);
void update_transition_anim_if_active__22TAdMultiPlyChrSelectGCFv(void);
void update_transition_anim__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TLobby__sub_8001E998(f32, f32, f32, f32);
M2C_UNK TLobby__sub_8001EA5C(s32, f32, f32, f32, f32);

    extern int lbl_805D6F08;
int get_selected_slot__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D6F08; }

    extern int lbl_805D6700;
int get_global_6700__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D6700; }

    extern int lbl_805D6668;
int TAdMultiPlyChrSelectGC__sub_802C6FA8(void) {  return lbl_805D6668; }

extern u32 lbl_805D67E8;

void update_transition_anim_if_active__22TAdMultiPlyChrSelectGCFv(void) {
    if ((u32) lbl_805D67E8 != 0U) {
        update_transition_anim__22TAdMultiPlyChrSelectGCFPv((void *)((void*)lbl_805D67E8));
    }
}

extern M2C_UNK lbl_80471D08;
extern const f32 lbl_805DE5A8;
extern const f32 lbl_805DE5AC;
extern const f32 lbl_805DE5B0;

void update_transition_anim__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    f32 var_f31;
    f32 var_f4;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_r3 <= 0x96) {
        var_r3 = temp_r3 ^ 0x80000000;
        var_f4 = lbl_805DE5A8;
        var_f31 = (lbl_805DE5AC - (f32) temp_r3) / lbl_805DE5AC;
    } else {
        temp_r3_2 = temp_r3 - 0x96;
        var_r3 = temp_r3_2 ^ 0x80000000;
        var_f31 = lbl_805DE5A8;
        var_f4 = (lbl_805DE5AC - (f32) temp_r3_2) / lbl_805DE5AC;
    }
    TLobby__sub_8001EA5C(var_r3, M2C_FIELD(arg0, f32 *, 0x1C), M2C_FIELD(arg0, f32 *, 0x20), lbl_805DE5B0, var_f4);
    TLobby__sub_8001E998(M2C_FIELD(arg0, f32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0x30), lbl_805DE5B0, var_f31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D50A0
#include "types.h"

extern "C" {

void set_selection_state__21TAdMultiSelGameModeGCFPvi(void* p, s32 v);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);

s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x24); }
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DC0B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_state_result__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);

s32 get_state_result__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = -1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        var_r4 = 0;
        break;
    case 12:
        var_r4 = get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C));
        break;
    case 29:
        var_r4 = 0;
        break;
    }
    return var_r4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DC2F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 queue_destruction__7TObjectFv(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 TAdChrMoveEffectGC__sub_803490AC();
int request_scene_change__22TAdMultiPlyChrSelectGCFPv(void* p);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

int request_scene_change__22TAdMultiPlyChrSelectGCFPv(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
void TAdMultiPlyChrSelectGC__sub_802DC310(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x88));
        M2C_FIELD(arg0, u32 *, 0x88) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x1D) {
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x68), 1);
        set_field_1c__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x6C), 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DC3D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_cancel_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DC440(void *arg0);
void handle_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdChrMoveEffectGC__sub_803490AC();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK set_state__15TAdPlayerLoadGCFi(M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5594(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s8 lbl_8050E3B8[];

void check_cancel_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) || (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0)) {
        set_state__15TAdPlayerLoadGCFi(1);
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
    }
}

void TAdMultiPlyChrSelectGC__sub_802DC440(void *arg0) {
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 0x14) {
        set_field_1c__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x6C), 0x1B);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x25;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 0x13) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        TAdMultiPlyChrSelectGC__sub_802C5594(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0x24;
    }
}

extern s8 lbl_8050E3B8[];

void handle_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    void *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
        M2C_FIELD(arg0, u32 *, 0x94) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    temp_r31 = lbl_8050E3B8 + 0x20;
    if ((TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) || (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DC760
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_input_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 TWindowSubComCard__sub_802A57FC(u32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(u32);

extern M2C_UNK lbl_8050E3B8[];

void update_input_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (TWindowShortListCtrl__check_controller_button((s8 *)lbl_8050E3B8 + 0x20, 2) != 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
            M2C_FIELD(arg0, u32 *, 0x94) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
            M2C_FIELD(arg0, u32 *, 0x94) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, u32 *, 0x94)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x94));
        switch (temp_r3) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x20) = 0x21;
            return;
        case 1:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
                M2C_FIELD(arg0, u32 *, 0x94) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DCB80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_reset__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, M2C_UNK *);
s32 TWindowShortListCtrl__check_controller_button(char *, M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5594(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 TAdMultiPlyChrSelectGC__sub_802E00CC(s32);

extern char lbl_8050E3B8[];
extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;

void close_and_reset__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
        M2C_FIELD(arg0, u32 *, 0x94) = 0U;
    }
    TAdMultiPlyChrSelectGC__sub_802C5594(M2C_FIELD(arg0, s32 *, 0x5C));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        disallow_rendering__7TObjectFv(M2C_FIELD(arg0, void **, 0x70));
    }
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, &TAdMultiPlyChrSelectGC__data_805DE898);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    if ((TAdMultiPlyChrSelectGC__sub_802E00CC(M2C_FIELD(arg0, s32 *, 0x6C)) == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0)) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1B;
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
        return;
    }
    if ((get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 0xE) && (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x14)) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1E;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DCD14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiPlyChrSelectGC__sub_802DCD14(void *arg0);
M2C_UNK begin_change_game_mode__21TAdMultiChgGameModeGCFv();
M2C_UNK request_scene_change__21TAdMultiChgGameModeGCFv();
M2C_UNK set_game_mode_state__21TAdMultiChgGameModeGCFv();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();

void TAdMultiPlyChrSelectGC__sub_802DCD14(void *arg0) {
    s32 temp_r0;

    TAdMultiPlyChrSelectGC__sub_802C6A10();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48);
    switch (temp_r0) {
    case 0:
        if (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() != 0) {
            begin_change_game_mode__21TAdMultiChgGameModeGCFv();
            return;
        }
        set_game_mode_state__21TAdMultiChgGameModeGCFv();
        return;
    case 1:
        request_scene_change__21TAdMultiChgGameModeGCFv();
        return;
    case 2:
        begin_change_game_mode__21TAdMultiChgGameModeGCFv();
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DCE10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_confirm_start__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void handle_cancel_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdGameStartGC__sub_802E644C(s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(M2C_UNK);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_ready_state__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_confirm_start__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    if ((get_ready_state__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x78)) == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1) && (TAdMultiPlyChrSelectGC__sub_802C64D0(0) != 0)) {
        temp_r31 = count_ready__22TAdMultiPlyChrSelectGCFv();
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6558();
        if (temp_r3 != temp_r31) {
            TAdGameStartGC__sub_802E644C(M2C_FIELD(arg0, s32 *, 0x78));
        }
    }
    set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    M2C_FIELD(arg0, s32 *, 0x20) = 3;
}

void handle_cancel_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x1D) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x54) = 1;
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DD010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiPlyChrSelectGC__sub_802DD010(void *arg0);
void update_state_move__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DD2B0(void *arg0);
void handle_confirm_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdChrMoveEffectGC__sub_803490AC();
M2C_UNK TAdChrMoveEffectGC__sub_803490D8(u32, s32, u32);
u32 TAdMultiPlyChrSelectGC__sub_802DBE4C(void *, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(void *, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
s32 swap_characters__23TAdSinglePlyChrSelectGCFii(u32, s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(u32, M2C_UNK);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_state__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0024(s32, u32);
s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(s32, M2C_UNK);
M2C_UNK set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK set_status_value__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TAdMultiPlyChrSelectGC__sub_802DD010(void *arg0) {
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 0x14) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x18;
        set_field_1c__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x6C), 0x1B);
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 0x13) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x17;
    }
}

M2C_UNK load_tables();
extern M2C_UNK lbl_80472870[];
extern M2C_UNK lbl_80472878[];
extern s8 lbl_8050E3B8[];

void update_state_move__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 iter;
    u32 temp_u;
    s32 temp_r5;
    s32 ret;
    s32 temp_r3;

    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)) * 0x50;
    if (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + temp_r5 + 0x20, 2, temp_r5) != 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    iter = 0;
loop_7:
    ret = get_card_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    if (swap_characters__23TAdSinglePlyChrSelectGCFii((u32)iter, ret + 4) == 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x84));
            M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        }
        temp_u = get_global_state__22TAdMultiPlyChrSelectGCFv();
        if (temp_u != 0U) {
            TAdChrMoveEffectGC__sub_803490D8(temp_u, ret, (u32)iter + 3);
        }
        TAdMultiPlyChrSelectGC__sub_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), (u32)iter);
        set_state__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), 1);
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802DC294(arg0, get_cursor__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)));
        load_tables();
        set_status_value__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), temp_r3);
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 2);
        M2C_FIELD(arg0, s32 *, 0x80) = TAdMultiPlyChrSelectGC__sub_802DBEC4(arg0, lbl_80472870);
        set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, u32 *, 0x68), 0x11);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x16;
        return;
    }
    iter += 1;
    if ((u32)iter >= 4U) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x84) = TAdMultiPlyChrSelectGC__sub_802DBE4C(arg0, lbl_80472878);
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xE;
        return;
    }
    goto loop_7;
}

void TAdMultiPlyChrSelectGC__sub_802DD2B0(void *arg0) {
    void *temp_r3;
    temp_r3 = M2C_FIELD(arg0, void **, 0x8C);
    if ((u32) temp_r3 != 0U) {
        close__17TWindowSubComCardFPv(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x74);
    if ((u32) temp_r3 != 0U) {
        queue_destruction__7TObjectFv(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 1) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
    }
}

void handle_confirm_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x54) = 1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DD4B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdChrMoveEffectGC__sub_803490AC();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(u32, M2C_UNK);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x88));
        M2C_FIELD(arg0, u32 *, 0x88) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x19) {
        set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, u32 *, 0x68), 0xF);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x13;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x18) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x12;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DD5C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_card_select_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE304();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK get_instance__22TAdMultiPlyChrSelectGCFv();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK get_card_instance__22TAdMultiPlyChrSelectGCFv();
M2C_UNK set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_card_select_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    get_card_instance__22TAdMultiPlyChrSelectGCFv();
    get_instance__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xE;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x8C)) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xE;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x8C)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x8C));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0xE;
            return;
        case 0:
            TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdSinglePlyChrSelectGC__sub_801FE304();
            set_field_1c__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x6C), 0x16);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x14;
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DD714
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state_wait_card__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdChrMoveEffectGC__sub_803490D8(u32, s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(void *, M2C_UNK *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32, s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK get_instance__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(s32, M2C_UNK);
M2C_UNK get_card_instance__22TAdMultiPlyChrSelectGCFv();
M2C_UNK set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80472868[];

void update_state_wait_card__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    get_card_instance__22TAdMultiPlyChrSelectGCFv();
    get_instance__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x88)) != 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x88)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x88));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 0:
            temp_r31 = TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
            temp_r3_2 = get_card_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C), 1);
            if (try_move_char__23TAdSinglePlyChrSelectGCFii(temp_r3_2 + 4, temp_r31) != 0) {
                {
                    u32 temp_u0 = get_global_state__22TAdMultiPlyChrSelectGCFv();
                    if (temp_u0 != 0U) {
                        TAdChrMoveEffectGC__sub_803490D8(temp_u0, temp_r31 + 3, temp_r3_2);
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x80) = TAdMultiPlyChrSelectGC__sub_802DBEC4(arg0, lbl_80472868);
                set_field_1c__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x6C), 0x15);
                M2C_FIELD(arg0, s32 *, 0x20) = 0x11;
                return;
            }
            set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DD8E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_select__22TAdMultiPlyChrSelectGCFPv(void *arg0);
u32 open_yes_no_window__16TAdChrSelASlotGCFiii(u32, M2C_UNK *, s32);
s32 TAdChrSelBSlotGC__sub_8030E378(s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DBDE0(void *, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
u32 __ct__9TAdFadeGCFv(u32, s32, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
u32 TAdSinglePlyChrSelectGC__sub_801FE3E4(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FE800(s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_selection__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 TAdSinglePlyChrSelectGC__sub_802E012C(s32, M2C_UNK);
M2C_UNK set_status_value__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

M2C_UNK load_tables(s32);
extern M2C_UNK lbl_80472860[];
extern M2C_UNK lbl_8050E3B8[];
extern s32 tl_fade;

void update_select__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r30;
    s32 temp_r5;
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x90));
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)) * 0x50;
    if (TWindowShortListCtrl__check_controller_button((M2C_UNK *)((s8 *)lbl_8050E3B8 + temp_r5 + 0x20), 2, temp_r5) != 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    temp_r30 = TAdMultiPlyChrSelectGC__sub_802DC294(arg0, get_cursor__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C))) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        if (TAdSinglePlyChrSelectGC__sub_801FE3E4(temp_r30) != 0U) {
            load_tables(temp_r30);
            set_status_value__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), temp_r30);
            set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 2);
            if ((TAdSinglePlyChrSelectGC__sub_802E012C(temp_r30, 1) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x40) = 1;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x30) = TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x15;
        return;
    }
    if (get_selection__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)) != 0) {
        load_tables(temp_r30);
        if (TAdSinglePlyChrSelectGC__sub_801FE800(temp_r30) != 0) {
            if (TAdChrSelBSlotGC__sub_8030E378(M2C_FIELD(arg0, s32 *, 0x6C), temp_r30) == 0) {
                M2C_FIELD(arg0, s32 *, 0x88) = TAdMultiPlyChrSelectGC__sub_802DBDE0(arg0, get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)));
                M2C_FIELD(arg0, s32 *, 0x20) = 0xF;
                return;
            }
            var_r0 = __nw__7TObjectFUl(0x38);
            if (var_r0 != 0U) {
                var_r0 = __ct__9TAdFadeGCFv(var_r0, tl_fade, 0);
            }
            M2C_FIELD(arg0, u32 *, 0x74) = var_r0;
            M2C_FIELD(arg0, u32 *, 0x8C) = open_yes_no_window__16TAdChrSelASlotGCFiii(M2C_FIELD(arg0, u32 *, 0x68), lbl_80472860, get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 0x10;
            return;
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DE094
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void init_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void open_char_select__22TAdMultiPlyChrSelectGCFPv(void* p);
void close_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_card_select__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_state_option__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_card_confirm__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdGameStartGC__sub_802E6380(s32);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
s32 TAdMultiPlyChrSelectGC__sub_802DBCE8(void *);
s32 is_visible__17TWindowSubComCardFPv(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(u32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE2D0();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE338(s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK clear_transition_flag__17TWindowSubComCardFPv(u32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C561C(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5688(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
int set_state_ready__22TAdMultiPlyChrSelectGCFPv(void*);
M2C_UNK set_state__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_select_mode__22TAdMultiPlyChrSelectGCFii(s32, M2C_UNK);
int set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(void*, void*);
int TAdMultiPlyChrSelectGC__sub_802E006C(void*, void*, void*);
M2C_UNK restore_selection__22TAdMultiPlyChrSelectGCFv(s32);
M2C_UNK update_field_4E8__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_8030E2E4(void *, M2C_UNK);
s32 create__16TAdChrSelBSlotGCFPv(void *);
M2C_UNK get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;

void open_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    TAdGameStartGC__sub_802E6380(M2C_FIELD(arg0, s32 *, 0x78));
    set_select_mode__22TAdMultiPlyChrSelectGCFii(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x68) = TAdMultiPlyChrSelectGC__sub_8030E2E4(arg0, 2);
    M2C_FIELD(arg0, s32 *, 0x6C) = create__16TAdChrSelBSlotGCFPv(arg0);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, &TAdMultiPlyChrSelectGC__data_805DE898);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
    M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
}

void init_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    TAdMultiPlyChrSelectGC__sub_802E006C((void*)(M2C_FIELD(arg0, s32 *, 0x5C)), (void*)(2), (void*)(2));
    set_field_4ec__22TAdMultiPlyChrSelectGCFPvi((void*)(M2C_FIELD(arg0, s32 *, 0x5C)), (void*)(2));
    set_state__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    open_windows__22TAdMultiPlyChrSelectGCFPv((void *)(arg0));
}

void open_char_select__22TAdMultiPlyChrSelectGCFPv(void* p) { set_field_4ec__22TAdMultiPlyChrSelectGCFPvi((void*)(*(void**)((char*)p + 0x5c)), (void*)((void*)2)); TAdMultiPlyChrSelectGC__sub_802E006C((void*)(*(void**)((char*)p + 0x5c)), (void*)((void*)2), (void*)((void*)2)); set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(void**)((char*)p + 0x5c))); open_windows__22TAdMultiPlyChrSelectGCFPv((void *)(p)); }

void close_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
}

void update__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, s32 *, 0x8C))) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC((s32)(M2C_FIELD(arg0, s32 *, 0x8C))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, s32 *, 0x8C)));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        case 0:
            TAdMultiPlyChrSelectGC__sub_802DFFE8((s32)(M2C_FIELD(arg0, s32 *, 0x5C)));
            TAdSinglePlyChrSelectGC__sub_801FE2D0();
            set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x68), 0xF);
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 8;
            break;
        }
    }
}

void update_card_select__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x98))) != 0) {
        clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
        clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
            M2C_FIELD(arg0, u32 *, 0x98) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC((s32)(M2C_FIELD(arg0, u32 *, 0x98))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x98)));
        switch (temp_r3) {
        case 1:
            clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
            clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
                M2C_FIELD(arg0, u32 *, 0x98) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        case 0:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
                M2C_FIELD(arg0, u32 *, 0x98) = 0U;
            }
            TAdSinglePlyChrSelectGC__sub_801FE338(TAdMultiPlyChrSelectGC__sub_802DFFE8((s32)(M2C_FIELD(arg0, s32 *, 0x5C))) + 4);
            set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x68), 0xF);
            M2C_FIELD(arg0, s32 *, 0x20) = 8;
            break;
        }
    }
}

void update_state_option__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, u32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x7C)) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x7C)) != 0) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x7C));
        switch (temp_r3) {
        case 0:
            TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
            TAdMultiPlyChrSelectGC__sub_802C561C(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0x19;
            return;
        case 1:
            TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
            update_field_4E8__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
            restore_selection__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xA;
            return;
        case 2:
            open__17TWindowOptionCtrlFPv(M2C_FIELD(arg0, s32 *, 0x7C));
            M2C_FIELD(arg0, s32 *, 0x98) = TAdMultiPlyChrSelectGC__sub_802DBCE8(arg0);
            M2C_FIELD(arg0, s32 *, 0x20) = 6;
            return;
        case 3:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            break;
        }
    }
}

extern s32 lbl_805D68C8;

void update_card_confirm__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x90))) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC((s32)(M2C_FIELD(arg0, u32 *, 0x90))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x90)));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        case 0:
            TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
            TAdMultiPlyChrSelectGC__sub_802C561C(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            lbl_805D68C8 = 1;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x90));
                M2C_FIELD(arg0, u32 *, 0x90) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = 0x1C;
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DEC44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_button_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802DC118(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK *TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();

extern s8 lbl_8050E3B8[];
extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;

void update_button_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0) && (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() < 1)) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(0) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) {
            M2C_FIELD(arg0, s32 *, 0x44) = 0;
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1F, 0xB));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
        }
    } else if (count_ready__22TAdMultiPlyChrSelectGCFv() < 2) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 1) {
            M2C_FIELD(arg0, s32 *, 0x44) = 1;
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1F, 0xC));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x44) = 2;
        TAdMultiPlyChrSelectGC__sub_802DC118(arg0, get_clamped_cursor__22TAdMultiPlyChrSelectGCFv());
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DEF54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state_serial__22TAdMultiPlyChrSelectGCFPv(void *arg0);
u32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5594(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s8 lbl_8050E3B8[];
extern u32 lbl_805D68CC;

void update_state_serial__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r5;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x90));
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
        M2C_FIELD(arg0, u32 *, 0x98) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    TAdMultiPlyChrSelectGC__sub_802C5594(M2C_FIELD(arg0, s32 *, 0x5C));
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r5 + 1);
    if ((TWindowShortListCtrl__check_controller_button((void *)(lbl_8050E3B8 + 0x20), 2, temp_r5) != 0) && (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() == 0)) {
        if ((get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) != 0xE) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA)) {
            TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
            return;
        }
        if (TAdMultiPlyChrSelectGC__sub_802C6558() < 1) {
            TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
            return;
        }
        goto block_19;
    }
block_19:
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 0xE) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
            M2C_FIELD(arg0, s32 *, 0x9C) = 0;
            if ((u32) lbl_805D68CC != get_field_118__22TAdEnterSerialAccessGCFv()) {
                TAdMultiPlyChrSelectGC__sub_802C6A10();
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802DFFE0
#include "types.h"

extern "C" {

int get_instance__22TAdMultiPlyChrSelectGCFv(void);

    extern int TAdMultiPlyChrSelectGC__data_805D67E0;
int get_instance__22TAdMultiPlyChrSelectGCFv(void) {  return TAdMultiPlyChrSelectGC__data_805D67E0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0008
#include "types.h"

extern "C" {

void set_state_ready__22TAdMultiPlyChrSelectGCFPv(void* p);
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_state__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);

void set_state_ready__22TAdMultiPlyChrSelectGCFPv(void* p) { *(s32*)((char*)p + 0x4fc) = 1; }
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4ec); }
void set_state__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4f8) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0044
#include "types.h"

extern "C" {

s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(void* p);
int get_card_instance__22TAdMultiPlyChrSelectGCFv(void);
s32 get_selection__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_select_mode__22TAdMultiPlyChrSelectGCFii(int a0, int a1);

s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4e8); }

    extern int lbl_805D67E4;
int get_card_instance__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D67E4; }

s32 get_selection__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4f8); }

    extern int TAdMultiPlyChrSelectGC__data_805D67DC;
void set_select_mode__22TAdMultiPlyChrSelectGCFii(int a0, int a1) { TAdMultiPlyChrSelectGC__data_805D67DC = a1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0064
#include "types.h"

extern "C" {

void set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);

void set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4ec) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0078
#include "types.h"

extern "C" {

void restore_selection__22TAdMultiPlyChrSelectGCFv(void);

    extern int TAdMultiPlyChrSelectGC__data_805D67D8;
    extern int TAdMultiPlyChrSelectGC__data_805D67E0;
void restore_selection__22TAdMultiPlyChrSelectGCFv(void) { TAdMultiPlyChrSelectGC__data_805D67E0 = TAdMultiPlyChrSelectGC__data_805D67D8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0084
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdMultiPlyChrSelectGC__sub_802DFFE8();
s32 get_field_0x530__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_field_1c__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(void* p);

void update_field_4E8__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4E8) = TAdMultiPlyChrSelectGC__sub_802DFFE8();
}
s32 get_field_0x530__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x530); }
void set_field_1c__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0100
#include "types.h"

extern "C" {

int get_global_state__22TAdMultiPlyChrSelectGCFv(void);

    extern int lbl_805D6E78;
int get_global_state__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D6E78; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0108
#include "types.h"

extern "C" {

int get_select_flag__22TAdMultiPlyChrSelectGCFv(void);

    extern int lbl_805D384C;
int get_select_flag__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D384C; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E011C
#include "types.h"

extern "C" {

int get_chr_select_state__22TAdMultiPlyChrSelectGCFv(void);

    extern int lbl_805D69E8;
int get_chr_select_state__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D69E8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0124
#include "types.h"

extern "C" {

s32 get_ready_state__22TAdMultiPlyChrSelectGCFPv(void* p);

s32 get_ready_state__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0xa0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0C28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_status_value__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
void * get_index__14TAdPlyStatusGCFv();
M2C_UNK set_status_index__14TAdPlyStatusGCFii(void *, s32);

void set_status_value__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    void *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x110) = arg1;
    temp_r3 = get_index__14TAdPlyStatusGCFv();
    if (temp_r3 != 0U) {
        set_status_index__14TAdPlyStatusGCFii(temp_r3, M2C_FIELD(arg0, s32 *, 0x110));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0C68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
u32 get_index__14TAdPlyStatusGCFv();
M2C_UNK close_window__14TAdPlyStatusGCFPvi(u32, s32);
M2C_UNK fn_802E0CB0(void *, s32);

void set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x104) = arg1;
    fn_802E0CB0(arg0, M2C_FIELD(arg0, s32 *, 0x104));
    u32 temp_r3 = get_index__14TAdPlyStatusGCFv();
    if (temp_r3 != 0U) {
        close_window__14TAdPlyStatusGCFPvi(temp_r3, arg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E0FC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_player__22TAdMultiPlyChrSelectGCFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TAdChrSelPlayerGC__ct(void *, void *);
void TObjMotion__ct(void *);

extern M2C_UNK lbl_804E3008[];

void *init_player__22TAdMultiPlyChrSelectGCFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    TObjMotion__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E3008;
    M2C_FIELD(arg0, void **, 0x10C) = arg4;
    M2C_FIELD(arg0, void **, 0x108) = arg3;
    TAdChrSelPlayerGC__ct(arg0, arg2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803367E8
#include "types.h"

extern "C" {

void TAdMultiPlyChrSelectGC__sub_803367E8(void);

    extern int lbl_805D68C8;
void TAdMultiPlyChrSelectGC__sub_803367E8(void) { lbl_805D68C8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803495B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 get_move_effect__22TAdMultiPlyChrSelectGCFi(s32 arg0);
u32 TAdChrMoveEffectGC__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D6E78;

u32 get_move_effect__22TAdMultiPlyChrSelectGCFi(s32 arg0) {
    u32 var_r0;

    if ((u32) lbl_805D6E78 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x3A4);
        if (var_r0 != 0U) {
            var_r0 = TAdChrMoveEffectGC__ct(var_r0, arg0);
        }
        lbl_805D6E78 = var_r0;
    }
    return lbl_805D6E78;
}

}
#endif
#endif
