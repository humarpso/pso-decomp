#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

s32 get_array_entry__20TWindowSubStatusDispFPvi(void* p, int i);

s32 get_array_entry__20TWindowSubStatusDispFPvi(void* p, int i) { return ((s32*)*(void**)((char*)p + 0x28))[i]; }

}
#else
#if PSO_CLASS_PACKAGE == 0x8006F094
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_layout_id__20TWindowSubStatusDispFv(void);
s32 TWindowSubStatusDisp__sub_8006F190();

extern M2C_UNK lbl_8043859C[];

s32 get_layout_id__20TWindowSubStatusDispFv(void) {
    if (TWindowSubStatusDisp__sub_8006F190() < 3) {
        return lbl_8043859C[TWindowSubStatusDisp__sub_8006F190()];
    }
    return 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80071774
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_status_index__20TWindowSubStatusDispFi(int arg0);
s32 get_status_index_or_default__20TWindowSubStatusDispFPv(s32);
u32 get_card_window__17TWindowSubComCardFUi(u16);

s32 get_status_index__20TWindowSubStatusDispFi(int arg0) {
    u32 temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 == 0U) {
        return -1;
    }
    return get_status_index_or_default__20TWindowSubStatusDispFPv(temp_r3 + 0x21C4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800717B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_status_index_or_default__20TWindowSubStatusDispFPv(u16 *arg0);
M2C_UNK *get_status_window__20TWindowSubStatusDispFi(int arg0);
s32 TLobby__sub_80071654(u16);
M2C_UNK *TWindowSubStatusDisp__sub_80071820(s32);
u32 get_card_window__17TWindowSubComCardFUi(u16);

s32 get_status_index_or_default__20TWindowSubStatusDispFPv(u16 *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return TLobby__sub_80071654(*arg0);
}

extern M2C_UNK lbl_805D285C;

M2C_UNK *get_status_window__20TWindowSubStatusDispFi(int arg0) {
    u32 temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 == 0U) {
        return &lbl_805D285C;
    }
    return TWindowSubStatusDisp__sub_80071820(temp_r3 + 0x21C4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077760
#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int byteswap_entry__20TWindowSubSymbolChatFPv(void*);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int is_initialized__20TWindowSubSymbolChatFPv(void* p);
int fn_80077788(void);
int fn_80077790(void);

void get_message_10__20TWindowSubStatusDispFPv(void* p) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)10, p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FC248
#include "types.h"

extern "C" {

void TWindowSubStatusDisp__sub_800FC248(void);

void TWindowSubStatusDisp__sub_800FC248(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FC3E0
#include "types.h"

extern "C" {

int render_forward__20TWindowSubStatusDispFPv(void* p);
int begin_render__20TWindowSubStatusDispFv(void*);

int render_forward__20TWindowSubStatusDispFPv(void* p) { return begin_render__20TWindowSubStatusDispFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FC400
#include "types.h"

extern "C" {

void begin_render__20TWindowSubStatusDispFv(void);
int set_global_param__8TObjFishFi(void*);

    extern int lbl_805D5540;
void begin_render__20TWindowSubStatusDispFv(void) { set_global_param__8TObjFishFi((void*)(lbl_805D5540)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FFE1C
#include "types.h"

extern "C" {

s32 test_item_flags__10TObjPlayerFPvUi(s32, s32);
int TObjTailsTailsMove__sub_800FFE04(void);
void TObjTailsTailsMove__sub_800FFE0C(void);
void TObjTailsTailsMove__sub_800FFE10(void);
int TObjTailsTailsMove__sub_800FFE14(void);
int set_flag_1024__11TItemObjectFPv(void* p);
int clear_item_flags__10TObjPlayerFPvUi(void*, int);

u8 check_flag_400__20TWindowSubStatusDispFv(void) {
    s32 uninit;
    return (u8) (test_item_flags__10TObjPlayerFPvUi(uninit, 0x400) == 0x400);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80100DD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void refresh_if_current_player__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK mark_selected__6TLobbyFv();

extern s32 lbl_805D53A0;

void refresh_if_current_player__20TWindowSubStatusDispFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, u16 *, 0xE4) == (s32) lbl_805D53A0) {
        mark_selected__6TLobbyFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801059B4
#include "types.h"

extern "C" {

int TItemMagSub__sub_80114524(void*);
void fn_801058E8(void* p);
int activate_d04_slot__10TObjPlayerFPv(void* p);
int test_flag3__9TItemDataFPv(void* p);
int get_item_field_2__9TItemDataFPv(void* p);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);

void clear_fields__20TWindowSubStatusDispFPv(void* p) { *(s16*)((char*)p + 0xa) = 0; *(s16*)((char*)p + 0x8) = 0; *(s16*)((char*)p + 0x6) = 0; *(s16*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x2) = 0; *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x14) = 0; *(s16*)((char*)p + 0x12) = 0; *(s16*)((char*)p + 0x10) = 0; *(s16*)((char*)p + 0xe) = 0; *(s16*)((char*)p + 0xc) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010EEF0
#include "types.h"

extern "C" {

int get_download_server__20TWindowSubStatusDispFv(void);
int TQuestVmDownLoadServer__sub_8006EF6C(void*);

int get_download_server__20TWindowSubStatusDispFv(void) { return TQuestVmDownLoadServer__sub_8006EF6C((void*)(0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014500C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_alpha_char__20TWindowSubStatusDispFUs(u16 arg0);

s32 is_alpha_char__20TWindowSubStatusDispFUs(u16 arg0) {
    if (arg0 < 0x41U) {
        return 0;
    }
    if (arg0 > 0x7AU) {
        return 0;
    }
    if (arg0 >= 0x61U) {
        return 1;
    }
    return arg0 <= 0x5AU ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80145134
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void pack_status_flags__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1);

void pack_status_flags__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) ((arg1 >> 4U) & 3);
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) | ((arg1 >> 2U) & 0x30));
    M2C_FIELD(arg0, u8 *, 1) = (u8) (arg1 & 3);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) | ((arg1 * 4) & 0x30));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014544C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 calc_gauge_scale__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2);
void *TWindowSubStatusDisp__sub_801452DC();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(u8, s32);

extern M2C_UNK lbl_8043F3D0;
extern u8 lbl_805D56C0;
extern const f32 lbl_805DB194;

u8 calc_gauge_scale__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_801452DC();
    M2C_FIELD(temp_r3, u8 *, 3) = (u8) lbl_805D56C0;
    TWindowSubStatusDisp__sub_803DF160(M2C_FIELD(temp_r3, u8 *, 4), arg2);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) ((f32) M2C_FIELD(temp_r3, u8 *, 5) * lbl_805DB194);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) ((f32) M2C_FIELD(temp_r3, u8 *, 6) * lbl_805DB194);
    return M2C_FIELD(temp_r3, u8 *, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80145508
#include "types.h"

extern "C" {

int end_render_forward__20TWindowSubStatusDispFPv(void* p);
void reset_gauge__20TWindowSubStatusDispFPv(void* p);
int TWindowSubStatusDisp__sub_801454E0(void*);
int TWindowSubStatusDisp__sub_803DF160(void*, void*);
int TWindowSubStatusDisp__sub_803DEE6C(void*);
int get_player__20TWindowSubStatusDispFv(void*);

int end_render_forward__20TWindowSubStatusDispFPv(void* p) { return get_player__20TWindowSubStatusDispFv(p); }
void reset_gauge__20TWindowSubStatusDispFPv(void* p) { TWindowSubStatusDisp__sub_803DEE6C((void*)1); TWindowSubStatusDisp__sub_801454E0(p); TWindowSubStatusDisp__sub_803DF160((void*)0, (void*)-1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A5258
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_card_window_flags__20TWindowSubStatusDispFi(s32 arg0);
void *get_card_window__17TWindowSubComCardFUi(s32);

extern s32 lbl_805D53A0;

s32 get_card_window_flags__20TWindowSubStatusDispFi(s32 arg0) {
    s32 var_r3;
    void *temp_r3;

    var_r3 = arg0;
    if (var_r3 >= 4) {
        var_r3 = lbl_805D53A0;
    }
    temp_r3 = get_card_window__17TWindowSubComCardFUi(var_r3);
    if (temp_r3 == NULL) {
        return 1;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 8U) & 3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80228C30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void measure_string_len__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK strnlen__19TWindowKeyBoardSoftFPvUi(void *, M2C_UNK);

void measure_string_len__20TWindowSubStatusDispFPv(void *arg0) {
    strnlen__19TWindowKeyBoardSoftFPvUi(arg0, 0x100);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242908
#include "types.h"

extern "C" {

void* get_sub_disp_ptr__20TWindowSubStatusDispFPv(void* p);
s32 get_id__6TLobbyFPv(void* p);

void* get_sub_disp_ptr__20TWindowSubStatusDispFPv(void* p) { return (char*)p + 0x9c; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248968
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_selected_index__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK refresh_selected_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

void set_selected_index__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x88) = arg1;
    M2C_FIELD(arg0, s16 *, 0x74) = arg1;
    refresh_selected_entry__20TWindowSubStatusDispFPvi(arg0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248ADC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_status__20TWindowSubStatusDispFiii(s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TWindowSubStatusDisp__sub_802673A8(M2C_UNK, s32, s32, s32, M2C_UNK, M2C_UNK);

void draw_status__20TWindowSubStatusDispFiii(s32 arg1, s32 arg2, s32 arg3) {
    TWindowSubStatusDisp__sub_802673A8(arg1, 0, arg2, arg3, 0, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248B10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_without_flags__20TWindowSubStatusDispFiii(s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TWindowSubStatusDisp__sub_802673A8(M2C_UNK, s32, s32, s32, M2C_UNK, M2C_UNK);

void dispatch_without_flags__20TWindowSubStatusDispFiii(s32 arg1, s32 arg2, s32 arg3) {
    TWindowSubStatusDisp__sub_802673A8(arg1, 0, arg2, arg3, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248B44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void sync_level_field__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK TWindowSubStatusDisp__sub_802671F0(void *, M2C_UNK);

void sync_level_field__20TWindowSubStatusDispFPv(void *arg0) {
    s16 temp_r4;

    if (M2C_FIELD(arg0, s16 *, 0x88) != (temp_r4 = M2C_FIELD(arg0, s16 *, 0x74))) {
        M2C_FIELD(arg0, s16 *, 0x88) = temp_r4;
        TWindowSubStatusDisp__sub_802671F0(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248C48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void refresh_with_default_list__20TWindowSubStatusDispFii(s32 a, s32 b);
M2C_UNK TWindowSubStatusDisp__sub_80248BE8(s32, s32, s32);

extern s32 lbl_805D53A0;

void refresh_with_default_list__20TWindowSubStatusDispFii(s32 a, s32 b) {
    TWindowSubStatusDisp__sub_80248BE8(a, b, lbl_805D53A0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248C6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_status_and_children__20TWindowSubStatusDispFPv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
M2C_UNK draw_selected_list_entry(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render_status_and_children__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_selected_list_entry(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x80), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x84), temp_r3, arg0 + 0x68);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248FAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804CE7E8[];

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE7E8;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249060
#include "types.h"

extern "C" {

int is_flag_4_set__20TWindowSubStatusDispFPv(void* p);
int get_flag__20TWindowSubStatusDispFPv(void* p);
s32 get_cursor_pos__14TWindowSubItemFPv(void* p);

int is_flag_4_set__20TWindowSubStatusDispFPv(void* p) { return *(u16*)((char*)p + 0x0) & 0x4; }
int get_flag__20TWindowSubStatusDispFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 6) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024F688
#include "types.h"

extern "C" {

u8 get_type__20TWindowSubStatusDispFPv(void* p);

u8 get_type__20TWindowSubStatusDispFPv(void* p) { return *(u8*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024FBA8
#include "types.h"

extern "C" {

void set_input_mode__20TWindowSubStatusDispFPvUc(void* p, u8 v);

void set_input_mode__20TWindowSubStatusDispFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x64) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255DF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
s32 is_confirmed__18TWindowInputNumberFPv();
s16 get_value__20TWindowSubStatusDispFPv(void* p);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

s16 get_item_type__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2fa); }
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2f8); }
s16 get_stat__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2f2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255E0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 is_confirmed__18TWindowInputNumberFPv();
s32 TWindowHelpItem__sub_80255DDC(void* p);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

s16 get_value__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2ce); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80256B94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804CF918[];

void *destroy__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF918;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80256BF8
#include "types.h"

extern "C" {

void TWindowSubStatusDisp__sub_80256BF8(void);
void TWindowSubStatusDisp__sub_80256BFC(void);

void TWindowSubStatusDisp__sub_80256BF8(void) {  }
void TWindowSubStatusDisp__sub_80256BFC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80257298
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubStatusDisp__sub_80257298(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(void *, s16);

extern M2C_UNK lbl_804CF930[];

void *TWindowSubStatusDisp__sub_80257298(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF930;
        destroy__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802572F0
#include "types.h"

extern "C" {

void* init_from__20TWindowSubStatusDispFPvPvi(void* a0, void* a1, int a2);
int TWindowSubStatusDisp__sub_80256BDC(void*, int);

    extern unsigned char lbl_804CF930[];
    extern const float lbl_805DCE58;
void* init_from__20TWindowSubStatusDispFPvPvi(void* a0, void* a1, int a2) { TWindowSubStatusDisp__sub_80256BDC(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF930; *(float*)((char*)a0 + 0x1c) = lbl_805DCE58; *(float*)((char*)a0 + 0xc) = *(float*)((char*)a1 + 0x4); *(float*)((char*)a0 + 0x10) = *(float*)((char*)a1 + 0x8); *(float*)((char*)a0 + 0x8) = *(float*)((char*)a1 + 0xc); *(float*)((char*)a0 + 0x14) = *(float*)((char*)a1 + 0x18); *(int*)((char*)a0 + 0x18) = *(int*)((char*)a1 + 0x10); *(short*)((char*)a0 + 0x0) = *(int*)((char*)a1 + 0x14); *(float*)((char*)a0 + 0x20) = *(float*)((char*)a1 + 0x1c); *(float*)((char*)a0 + 0x24) = *(float*)((char*)a1 + 0x20); return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80257AF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80257298(void *, s16);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804CF948[];

void *TWindowSubStatusDisp__sub_80257AF4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF948;
        TWindowSubStatusDisp__sub_80257298(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80258050
#include "types.h"

extern "C" {

void TWindowSubStatusDisp__sub_80258050(void);
void TWindowSubStatusDisp__sub_80258054(void);

void TWindowSubStatusDisp__sub_80258050(void) {  }
void TWindowSubStatusDisp__sub_80258054(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80258058
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *deleting_destructor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(M2C_UNK, M2C_UNK *);

extern M2C_UNK lbl_804CF998[];

void *deleting_destructor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF998;
        destroy__20TWindowSubStatusDispFPvs((M2C_UNK)arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802580B0
#include "types.h"

extern "C" {

void* reset_entry__20TWindowSubStatusDispFPv(void* a0);
int TWindowSubStatusDisp__sub_80256BDC(void);

    extern unsigned char lbl_804CF998[];
    extern const float lbl_805DCEF8;
void* reset_entry__20TWindowSubStatusDispFPv(void* a0) { TWindowSubStatusDisp__sub_80256BDC(); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF998; *(float*)((char*)a0 + 0x8) = lbl_805DCEF8; *(float*)((char*)a0 + 0xc) = lbl_805DCEF8; *(float*)((char*)a0 + 0x10) = lbl_805DCEF8; *(float*)((char*)a0 + 0x14) = lbl_805DCEF8; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80258164
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_state__20TWindowSubStatusDispFPv(void *arg0);

void advance_state__20TWindowSubStatusDispFPv(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x1D) == 0x14) {
        M2C_FIELD(arg0, u8 *, 0x1D) = 0x15U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025817C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void finalize_state__20TWindowSubStatusDispFPv(void *arg0);

void finalize_state__20TWindowSubStatusDispFPv(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x1D) == 0x15) {
        M2C_FIELD(arg0, u8 *, 0x1D) = 0x14U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80258194
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK free__11TOBoss4RockFUi(u32);

void reset__20TWindowSubStatusDispFPv(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) && (M2C_FIELD(arg0, u16 *, 0) & 0x10)) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x24));
    }
    M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) && (M2C_FIELD(arg0, u16 *, 0) & 8)) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x20));
    }
    M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) & ~0x1BFD);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025823C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stat_line__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_80229080(M2C_UNK *);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_805DCF00;

void update_stat_line__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080(&lbl_805DCF00);
    TWindowSubStatusDisp__sub_80228F5C(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025829C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
M2C_UNK update_stat_line__20TWindowSubStatusDispFPvi(void *);

void update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    if (arg1 > 0) {
        update_stat_line__20TWindowSubStatusDispFPvi(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802582C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18B_802582c4 { char pad[0x18]; };
struct VObj18B_802582c4 : VBase18B_802582c4 {
    virtual void vpad0(); virtual void vpad1(); virtual void vpad2(); virtual void vpad3();
    virtual void vpad4(); virtual void vpad5(); virtual void vpad6(); virtual void vpad7();
    virtual void vpad8(); virtual void vpad9(); virtual void vpad10(); virtual void vpad11();
    virtual void vpad12(); virtual void vpad13(); virtual void vpad14(); virtual void vpad15();
    virtual void vpad16(); virtual void vpad17(); virtual void vpad18(); virtual void vpad19();
    virtual void vpad20(); virtual void vpad21(); virtual void vpad22(); virtual void vpad23();
    virtual void vpad24(); virtual void vpad25(); virtual void vpad26(); virtual void vpad27();
    virtual void vpad28(); virtual void vpad29(); virtual void vpad30(); virtual void vpad31();
    virtual void vpad32();
    virtual s32 vm8C();
};

extern "C" {

void update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *arg0, void *arg1);
s32 TItem__sub_8010147C(void *, M2C_UNK, s32);
s32 copy_item_data_to_icon__10TObjPlayerFPv(void *);
s32 get_item_info__10TObjPlayerFiiPv(void *, s32, s16 *);
s32 test_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 fn_80100D68(void *);
s32 update_item_data__5TItemFPv(void *);
s32 TItem__sub_801013E8(void *);
u8 calc_display_grade__5TItemFPv(void *);

void update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *arg0, void *arg1) {
    s16 sp8;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r28_2;
    s32 temp_r3;

    if (check_flag_400__20TWindowSubStatusDispFv(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = -1;
        return;
    }
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 2));
    if (temp_r3 != 0) {
        temp_r26 = test_item_flags__10TObjPlayerFPvUi(arg1, 8);
        temp_r28 = TItem__sub_8010147C(arg1, 0x10, temp_r3);
        temp_r27 = get_item_info__10TObjPlayerFiiPv(arg1, temp_r3, &sp8);
        temp_r28_2 = ((VObj18B_802582c4 *) arg1)->vm8C();
        if (temp_r28 != 0) {
            if (temp_r26 != 0) {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x30;
            } else {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x2F;
            }
        } else if (temp_r26 != 0) {
            M2C_FIELD(arg0, s8 *, 0x1C) = 0xC;
        } else {
            if ((temp_r28_2 == 0) && (TItem__sub_801013E8(arg1) != 0)) {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x19;
            } else if (sp8 & 1) {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x13;
            } else {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
        }
        if (temp_r28_2 == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            M2C_FIELD(arg0, s32 *, 0x30) = 0xFF00FFFC;
            return;
        }
        if (temp_r27 != 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            if (update_item_data__5TItemFPv(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFFFE3C28;
                return;
            }
            if (fn_80100D68(arg1) == 2) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x800);
                return;
            }
            if (calc_display_grade__5TItemFPv(arg1) >= 9U) {
                M2C_FIELD(arg0, s32 *, 0x30) = -0x1600;
                return;
            }
            if (copy_item_data_to_icon__10TObjPlayerFPv(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF61E853;
                return;
            }
            if (TItem__sub_8010147C(arg1, 0x10000, temp_r3) != 0U) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x30) = -1;
            return;
        }
        if (sp8 & 1) {
            M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80258518
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_item_colors__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
s32 TItemData__sub_8010C52C(s32);
s32 TItemData__sub_8010C738(s32);
s32 TItemData__sub_8010CC68(s32);
s32 TItemData__sub_8010CEF4(s32);
u32 TItemData__sub_8010D028(s32, M2C_UNK, s32);
s32 TItemData__sub_8010DF68(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowHelpItem__sub_80104FCC(s32, s32, s32 *);
u8 calc_display_grade__9TItemDataFPv(s32);
s32 check_item_flags__9TItemDataFPv(s32);

void update_item_colors__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r3;

    if (TItemData__sub_8010C52C(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = -1;
        return;
    }
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 2));
    if (temp_r3 != 0) {
        temp_r29 = TWindowHelpItem__sub_80104FCC(temp_r3, arg1, &sp8);
        temp_r30 = check_item_flags__9TItemDataFPv(arg1);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0x33) {
            if ((temp_r30 == 0) && (TItemData__sub_8010DF68(arg1) != 0)) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 0x19U;
            } else if (sp8 & 1) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 0x13U;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
        }
        if (temp_r30 == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            M2C_FIELD(arg0, s32 *, 0x30) = 0xFF00FFFC;
            return;
        }
        if (temp_r29 != 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            if (TItemData__sub_8010CC68(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFFFE3C28;
                return;
            }
            if (TItemData__sub_8010C738(arg1) == 2) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x800);
                return;
            }
            if (calc_display_grade__9TItemDataFPv(arg1) >= 9U) {
                M2C_FIELD(arg0, s32 *, 0x30) = -0x1600;
                return;
            }
            if (TItemData__sub_8010CEF4(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF61E853;
                return;
            }
            if (TItemData__sub_8010D028(arg1, 0x10000, temp_r3) != 0U) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x30) = -1;
            return;
        }
        if (sp8 & 1) {
            M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80258ABC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_stat_line__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TObjPlayer__sub_80203418();
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK update_stat_line__20TWindowSubStatusDispFPvi(void *, s32);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, s32, s32);

extern const f32 lbl_805DCF08;

void setup_stat_line__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x2D;
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    update_stat_line__20TWindowSubStatusDispFPvi(arg0, arg2);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    if (arg2 <= 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0xC5);
    } else if ((reset_key_machine_state__10TObjPlayerFv() == 0) || (TObjPlayer__sub_80203418() != 0)) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
    } else {
        M2C_FIELD(arg0, s32 *, 0x30) = -1;
        M2C_FIELD(arg0, s32 *, 0x2C) = -1;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80258BF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_list_entry__20TWindowSubStatusDispFPvUcii(void *arg0, u8 arg1, s32 arg2, s32 arg3);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DCF04;

void init_list_entry__20TWindowSubStatusDispFPvUcii(void *arg0, u8 arg1, s32 arg2, s32 arg3) {
    u8 var_r0;

    var_r0 = arg1;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF04;
    if (arg1 == 0x18) {
        var_r0 = 0x16;
    }
    M2C_FIELD(arg0, u8 *, 0x1C) = var_r0;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, arg2, M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x145);
    if (arg1 == 0x18) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80258D38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80258D38 { char pad[0x18]; };
struct VObj_80258D38 : Base_80258D38 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual s32 m10();
};
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();
struct Base_A_80258e2c { char pad[0x18]; };
struct V_A_80258e2c : Base_A_80258e2c {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual s32 m10();
};

extern "C" {

void set_inventory_item__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
void update_from_player__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
s32 get_camera_id__11TCameraCtrlFv();
s32 TLobby__sub_8001DC24();
s32 get_field_ec__12TOSwitchItemFPv(void *);
s32 get_field_ed__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C1AC8(void *);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 lookup_item_data__20TWindowSubStatusDispFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_802586FC(void *, s32, s32, s32, s32);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DCF08;

void set_inventory_item__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r29;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    temp_r29 = lookup_item_data__20TWindowSubStatusDispFPv(arg1);
    TWindowSubStatusDisp__sub_802586FC(arg0, temp_r29, get_field_ec__12TOSwitchItemFPv(arg1), get_field_ed__10TObjPlayerFPv(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, ((VObj_80258D38 *) arg1)->m10(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (TObjPlayer__sub_801C1AC8(arg1) != 0) {
        update_stat_line_if_positive__20TWindowSubStatusDispFPvi(arg0, arg2);
    }
    update_item_icon_colors__20TWindowSubStatusDispFPvPv(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

extern const f32 lbl_805DCF08;
void update_from_player__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    temp_r29 = lookup_item_data__20TWindowSubStatusDispFPv(arg1);
    TWindowSubStatusDisp__sub_802586FC(arg0, temp_r29, get_field_ec__12TOSwitchItemFPv(arg1), get_field_ed__10TObjPlayerFPv(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, ((V_A_80258e2c *) arg1)->m10(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (get_camera_id__11TCameraCtrlFv() <= 2) {
        TWindowSubStatusDisp__sub_802290E0();
        TWindowSubStatusDisp__sub_80228F5C(arg2);
        M2C_FIELD(arg0, s32 *, 0x24) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
    }
    update_item_icon_colors__20TWindowSubStatusDispFPvPv(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025903C
#include "types.h"

extern "C" {

void set_item_info__20TWindowSubStatusDispFPvPviPv(void* a0, void* a1, int a2, void* a3);
int TItemData__sub_8010C52C(void*);
int TLobby__sub_8001DC24(void);
int update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void*, void*);
int update_item_colors__20TWindowSubStatusDispFPvi(void*, void*);
int TWindowSubStatusDisp__sub_802586FC(void*, void*, void*, void*, void*);
int TWindowSubStatusDisp__sub_80259268(void*, void*, void*, void*, void*);
int forward_message__6TLobbyFiUi(int, void*);
int get_item_data__6TLobbyFUi(void*);

    extern const float lbl_805DCF08;

void set_item_info__20TWindowSubStatusDispFPvPviPv(void* a0, void* a1, int a2, void* a3) {
    int temp_r31;
    int temp_r3;

    *(float*)((char*)a0 + 0x8) = lbl_805DCF08;
    *(unsigned char*)((char*)a0 + 0x1c) = 51;
    temp_r31 = get_item_data__6TLobbyFUi(a1);
    temp_r3 = TItemData__sub_8010C52C(a1);
    TWindowSubStatusDisp__sub_802586FC(a0, (void*)temp_r31, (void*)(*(unsigned char*)((char*)a1 + 0x0)), (void*)(*(unsigned char*)((char*)a1 + 0x1)), (void*)temp_r3);
    forward_message__6TLobbyFiUi(TLobby__sub_8001DC24(), a1);
    *(int*)((char*)a0 + 0x20) = TWindowSubStatusDisp__sub_80259268(a0, (void*)TLobby__sub_8001DC24(), (void*)(*(int*)((char*)a0 + 0x20)), (void*)8, (void*)1);
    update_stat_line_if_positive__20TWindowSubStatusDispFPvi(a0, a3);
    update_item_colors__20TWindowSubStatusDispFPvi(a0, a1);
    *(int*)((char*)a0 + 0x34) = *(int*)((char*)a0 + 0x30);
    *(int*)((char*)a0 + 0x18) = a2;
    *(short*)((char*)a0 + 0x0) = (*(unsigned short*)((char*)a0 + 0x0) | 0x45);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025910C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_ground_item__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2);
s32 get_camera_id__11TCameraCtrlFv();
s32 TItemData__sub_8010C52C(void *);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK update_item_colors__20TWindowSubStatusDispFPvi(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_802586FC(void *, s32, u8, u8, s32);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK forward_message__6TLobbyFiUi(s32, void *);
s32 get_item_data__6TLobbyFUi(void *);

extern const f32 lbl_805DCF08;

void set_ground_item__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r31;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    temp_r31 = get_item_data__6TLobbyFUi(arg1);
    TWindowSubStatusDisp__sub_802586FC(arg0, temp_r31, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1), TItemData__sub_8010C52C(arg1));
    forward_message__6TLobbyFiUi(TLobby__sub_8001DC24(), arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (get_camera_id__11TCameraCtrlFv() <= 2) {
        TWindowSubStatusDisp__sub_802290E0();
        TWindowSubStatusDisp__sub_80228F5C(M2C_FIELD(arg1, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x24) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
    }
    update_item_colors__20TWindowSubStatusDispFPvi(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802591FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_display__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DCF0C;

void init_display__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF0C;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80259408
#include "types.h"

extern "C" {

void* get_entry_ptr__20TWindowSubStatusDispFi(int a0);

    extern unsigned char lbl_8044EE60[];
void* get_entry_ptr__20TWindowSubStatusDispFi(int a0) {  return (char*)lbl_8044EE60 + (unsigned char)(a0) * 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80259838
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *dispose__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern M2C_UNK lbl_804CF9B0[];

void *dispose__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    u16 temp_r3;
    u16 temp_r3_2;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9B0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            temp_r3 = M2C_FIELD(arg0, u16 *, 0);
            if (temp_r3 & 0x10) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (temp_r3 & 0xFFFFFFEF);
                free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x24));
            }
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            temp_r3_2 = M2C_FIELD(arg0, u16 *, 0);
            if (temp_r3_2 & 8) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (temp_r3_2 & 0xFFFFFFF7);
                free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x20));
            }
        }
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802598E4
#include "types.h"

extern "C" {

void* reset_entry__20TWindowSubStatusDispFPvii(void* a0, int a1, int a2);
void reset_entry__20TWindowSubStatusDispFPv(void*, int);

    extern unsigned char lbl_804CF9B0[];
    extern const float lbl_805DCF14;
void* reset_entry__20TWindowSubStatusDispFPvii(void* a0, int a1, int a2) { reset_entry__20TWindowSubStatusDispFPv(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF9B0; *(float*)((char*)a0 + 0x14) = lbl_805DCF14; *(unsigned char*)((char*)a0 + 0x1c) = 51; *(unsigned char*)((char*)a0 + 0x1d) = 51; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x24) = 0; *(int*)((char*)a0 + 0x28) = -1; *(int*)((char*)a0 + 0x2c) = -1; *(int*)((char*)a0 + 0x30) = -1; *(int*)((char*)a0 + 0x34) = -1; *(int*)((char*)a0 + 0x18) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80259CE0
#include "types.h"

extern "C" {

void TWindowSubStatusDisp__sub_80259CE0(void);

void TWindowSubStatusDisp__sub_80259CE0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80259CE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubStatusDisp__sub_80259CE4(void *arg0, s16 arg1);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804CF9C8[];

void *TWindowSubStatusDisp__sub_80259CE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9C8;
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80259E00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_animated_target__20TWindowSubStatusDispFPvif(void *arg0, s32 arg1, f32 farg0);
f32 get_random_float__8TObjFishFv(f32, f32);

extern M2C_UNK lbl_8044F010;
extern const f32 lbl_805DCF58;
extern const f32 lbl_805DCF5C;
extern const f32 lbl_805DCF60;

void set_animated_target__20TWindowSubStatusDispFPvif(void *arg0, s32 arg1, f32 farg0) {
    f32 temp_f2;
    f32 var_f31;

    if (M2C_FIELD(arg0, f32 *, 0x28) != (f32) arg1) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) arg1;
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x28);
        var_f31 = temp_f2 - M2C_FIELD(arg0, f32 *, 0x24);
        var_f31 = var_f31 / farg0;
        if (get_random_float__8TObjFishFv(var_f31, temp_f2) < lbl_805DCF5C) {
            if (var_f31 > lbl_805DCF58) {
                var_f31 = lbl_805DCF5C;
            } else {
                var_f31 = lbl_805DCF60;
            }
        }
        M2C_FIELD(arg0, f32 *, 0x2C) = var_f31;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A04C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubStatusDisp__sub_8025A04C(void *arg0, s16 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80259CE4(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804CF9E0[];

void *TWindowSubStatusDisp__sub_8025A04C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9E0;
        TWindowSubStatusDisp__sub_80259CE4(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025AF0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubStatusDisp__sub_8025AF0C(void *arg0, s16 arg1);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern M2C_UNK lbl_804CFA28[];

void *TWindowSubStatusDisp__sub_8025AF0C(void *arg0, s16 arg1) {
    u16 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA28;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            temp_r3 = M2C_FIELD(arg0, u16 *, 0);
            if (temp_r3 & 0x20) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (temp_r3 & 0xFFFFFFDF);
                free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x20));
            }
        }
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B2D8
#include "types.h"

extern "C" {

void TWindowSubStatusDisp__sub_8025B2D8(void);

void TWindowSubStatusDisp__sub_8025B2D8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B2DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubStatusDisp__sub_8025B2DC(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(void *, s16);

extern M2C_UNK lbl_804CFA40[];

void *TWindowSubStatusDisp__sub_8025B2DC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA40;
        destroy__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B334
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init_part_direct__20TWindowSubStatusDispFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
u8 *init_part_scaled__20TWindowSubStatusDispFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
M2C_UNK TWindowSubStatusDisp__sub_80256BDC(void *, void *);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

extern M2C_UNK lbl_804CFA40[];

u8 *init_part_direct__20TWindowSubStatusDispFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    TWindowSubStatusDisp__sub_80256BDC((void *)((void *) (arg0)), (void *)((int) (arg2)));
    M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA40;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 8), (void *) (arg1 + 4));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x10), (void *) (arg1 + 0xC));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s32 *, 0x34);
    return arg0;
}

extern M2C_UNK lbl_804CFA40[];
extern const f32 lbl_805DCFE0;

u8 *init_part_scaled__20TWindowSubStatusDispFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    TWindowSubStatusDisp__sub_80256BDC((void *)(arg0), (void *)((void *) (arg2)));
    M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA40;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 8), (void *) (arg1 + 4));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x10), (void *) (arg1 + 0xC));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg1, f32 *, 0x14) * lbl_805DCFE0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg1, f32 *, 0x18) * lbl_805DCFE0);
    {
        f32 t0 = M2C_FIELD(arg1, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (t0 * lbl_805DCFE0);
    }
    {
        f32 t1 = M2C_FIELD(arg1, f32 *, 0x18) + M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) (t1 * lbl_805DCFE0);
    }
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s32 *, 0x2C);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B4A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_string__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1);
s32 measure_string_len__20TWindowSubStatusDispFPv(u32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK strncpy(s32, u32, s32);

extern f32 lbl_805DD008;

void set_string__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1) {
    s32 temp_r3;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    if (arg1 != 0U) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DD008;
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x20) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x20), arg1, temp_r3 + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B514
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_text__20TWindowSubStatusDispFPvUiii(void *arg0, u32 arg1, s32 arg2, s32 arg3);
s32 measure_string_len__20TWindowSubStatusDispFPv(u32);
M2C_UNK set_string__20TWindowSubStatusDispFPvUi(void *, s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK strncpy(s32, u32, s32);

extern const f32 lbl_805DD008;

void set_text__20TWindowSubStatusDispFPvUiii(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (arg1 != 0U) {
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x1C) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x1C), arg1, temp_r3 + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DD008;
    M2C_FIELD(arg0, u16 *, 0) = M2C_FIELD(arg0, u16 *, 0) | 5;
    set_string__20TWindowSubStatusDispFPvUi(arg0, arg2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B5AC
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_text__20TWindowSubStatusDispFPvUii(void *arg0, u32 arg1, s32 arg2);
u32 TWindowSubStatusDisp__sub_80144D68(u32);
s32 measure_string_len__20TWindowSubStatusDispFPv(u32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK strncpy(s32, u32, s32);

extern const f64 lbl_8044F068[];
extern const f32 lbl_805DD00C;
extern const f32 lbl_805DD010;

void set_text__20TWindowSubStatusDispFPvUii(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_r3;
    f64 tmp;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (arg1 != 0U) {
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x1C) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x1C), arg1, temp_r3 + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x15);
    M2C_FIELD(arg0, f32 *, 8) = lbl_805DD00C - (lbl_805DD010 * (f32) TWindowSubStatusDisp__sub_80144D68(arg1));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B784
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_free_buffers__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);

extern M2C_UNK lbl_804CFA58[];

void *destroy_free_buffers__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA58;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x20));
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266FCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_list_entry__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowSubStatusDisp__sub_8025892C(s32, s32);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void add_list_entry__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    s16 temp_r4;
    temp_r4 = (s16) M2C_FIELD(arg0, s16 *, 0x72);
    if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        TWindowSubStatusDisp__sub_8025892C(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80267288
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void refresh_selected_entry__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK finalize_state__20TWindowSubStatusDispFPv(s32);
s32 is_flag80_set__20TWindowSubStatusDispFPv();
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void refresh_selected_entry__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if (is_flag80_set__20TWindowSubStatusDispFPv() == 0) {
        if (arg1 != 0) {
            TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
        }
        finalize_state__20TWindowSubStatusDispFPv(temp_r31);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802672F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_status_entry__20TWindowSubStatusDispFPvcii(void *arg0, s8 arg1, s32 arg2, s32 arg3);
M2C_UNK TWindowSubStatusDisp__sub_80258CB8(void*, M2C_UNK, s32, s32);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

extern const f32 lbl_805DD194;

void add_status_entry__20TWindowSubStatusDispFPvcii(void *arg0, s8 arg1, s32 arg2, s32 arg3) {
    M2C_UNK var_r29;
    s16 temp_r5;
    void *temp_r31;

    temp_r5 = M2C_FIELD(arg0, s16 *, 0x72);
    if (temp_r5 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (arg1 & 8) {
            var_r29 = 0xD;
        } else if (arg1 & 4) {
            var_r29 = 0xF;
        } else {
            var_r29 = 0x33;
        }
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r5);
        TWindowSubStatusDisp__sub_80258CB8(temp_r31, var_r29, arg2, arg3);
        M2C_FIELD(temp_r31, f32 *, 8) = (f32) lbl_805DD194;
        if (arg1 & 2) {
            M2C_FIELD(temp_r31, s8 *, 0x1C) = 0xE;
            M2C_FIELD(temp_r31, u16 *, 0) = (u16) (M2C_FIELD(temp_r31, u16 *, 0) | 0x100);
        }
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802674B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_inventory_item__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK set_inventory_item__20TWindowSubStatusDispFPvPvii(s32, s32, s32, s32);

void add_inventory_item__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) M2C_FIELD(arg0, s16 *, 0x72);
        if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
            set_inventory_item__20TWindowSubStatusDispFPvPvii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2, arg3);
            M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802675E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_item_info_entry__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK set_item_info__20TWindowSubStatusDispFPvPviPv(s32, s32, s32, s32);

void add_item_info_entry__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) M2C_FIELD(arg0, s16 *, 0x72);
        if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
            set_item_info__20TWindowSubStatusDispFPvPviPv(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2, arg3);
            M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80267648
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_ground_item__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK set_ground_item__20TWindowSubStatusDispFPvPvi(s32, s32, s32);

void add_ground_item__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) M2C_FIELD(arg0, s16 *, 0x72);
        if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
            set_ground_item__20TWindowSubStatusDispFPvPvi(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2);
            M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026787C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag4__20TWindowSubStatusDispFPv(void *arg0);
void handle_open__20TWindowSubStatusDispFPv(void *arg0);
void move_cursor_next__20TWindowSubStatusDispFPv(void *arg0);
void move_cursor__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_status_flag__6TLobbyFPv();
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 is_flag_4_set__20TWindowSubStatusDispFPv();
s32 is_flag80_set__20TWindowSubStatusDispFPv(s32);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(void *, M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void set_flag4__20TWindowSubStatusDispFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (get_status_flag__6TLobbyFPv() == 0)) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}

void handle_open__20TWindowSubStatusDispFPv(void *arg0) {
    s32 temp_r31;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if ((is_flag_4_set__20TWindowSubStatusDispFPv() == 0) || (is_flag80_set__20TWindowSubStatusDispFPv(temp_r31) != 0)) {
        TBoss3Volopt__sub_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x100)) {
        TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    }
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
    if (M2C_FIELD(arg0, void **, 0x80) != NULL) {
        set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, void **, 0x80), 2);
    }
}

void move_cursor_next__20TWindowSubStatusDispFPv(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void move_cursor__20TWindowSubStatusDispFPv(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80267B90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void ensure_status_display__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);

void ensure_status_display__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) == 0U) {
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
        if (var_r0 != 0U) {
            var_r0 = TWindowSubStatusDisp__sub_802880BC(var_r0, arg1, M2C_FIELD(arg0, s16 *, 0x20));
        }
        M2C_FIELD(arg0, u32 *, 0x80) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x40);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80267C1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_scroll_pos__20TWindowSubStatusDispFPv(void *arg0);
void *get_array_entry__20TWindowSubStatusDispFPvi(void*, s16);

extern f32 lbl_805DD18C;
extern f32 lbl_805DD190;

void init_scroll_pos__20TWindowSubStatusDispFPv(void *arg0) {
    u16 temp_r4;
    void *temp;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (!(temp_r4 & 0x20)) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 | 0x20);
        temp = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DD18C + M2C_FIELD(temp, f32 *, 0x14));
        if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x40) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DD190);
        }
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80267FC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_card_and_list__20TWindowSubStatusDispFPv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
M2C_UNK draw_selected_list_entry(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render_card_and_list__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_selected_list_entry(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x80), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x84), temp_r3, arg0 + 0x68);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80268310
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void __dl__7TObjectFPv(void *);
void destroy_window__15TWindowAdditionFPvs(void *, int);

extern M2C_UNK lbl_804D0618[];

void *destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0618;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x84), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x80), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80268488
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int is_flag80_set__20TWindowSubStatusDispFPv(void* p);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 is_open__17TWindowSubComCardFPv();
M2C_UNK get_entry_id__17TWindowSubComCardFPv();
s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
void clear_flag__19TWindowSubTradeMainFPv(void* p);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
s32 TWindowSubComCard__sub_8026906C(void);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);

int is_flag80_set__20TWindowSubStatusDispFPv(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80268738
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_text_entry__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 is_open__17TWindowSubComCardFPv();
M2C_UNK get_entry_id__17TWindowSubComCardFPv();
s32 TWindowSubComCard__sub_8026906C(void);
int is_flag80_set__20TWindowSubStatusDispFPv(void* p);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
void clear_flag__19TWindowSubTradeMainFPv(void* p);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);

void add_text_entry__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x72);
    if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        set_text__20TWindowSubStatusDispFPvUii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80268C80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_80268C80(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
M2C_UNK draw_setting__20TWindowChoiceSettingFPvi(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void TWindowSubStatusDisp__sub_80268C80(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_setting__20TWindowChoiceSettingFPvi(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x78), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x7C), temp_r3, arg0 + 0x68);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80268F90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_children__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void destroy_window__15TWindowAdditionFPvs(void *, int);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void __dl__7TObjectFPv(void *);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);

extern M2C_UNK lbl_804D0658[];

void *destroy_children__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0658;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x7C), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x78), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026CE3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_scale__20TWindowSubStatusDispFPv(void* p);
void set_entry1_field20__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
void * get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);

f32 get_scale__20TWindowSubStatusDispFPv(void* p) { return *(f32*)((char*)p + 0x1c); }
void set_entry1_field20__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), s32 *, 0x20) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026E098
#include "types.h"

extern "C" {

int TWindowSubStatusDisp__sub_8026E098(void* p);
int TWindowSubStatusDisp__sub_80268048(void*);

int TWindowSubStatusDisp__sub_8026E098(void* p) { return TWindowSubStatusDisp__sub_80268048(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026E0B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *deleting_dtor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804D0948[];

void *deleting_dtor__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0948;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026F71C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_gauge_entry__20TWindowSubStatusDispFPv(void *arg0);
s32 update_hp_gauge__20TWindowSubStatusDispFi(s32 arg0);
void update_status_entry__20TWindowSubStatusDispFi(s32 arg0);
void *TPlayerBattleCtrl4P__sub_801BA74C();
M2C_UNK get_width__11TWindowCtrlFPv();
M2C_UNK TWindowSubStatusDisp__sub_802575C0(void *, M2C_UNK, f32);
M2C_UNK TWindowSubStatusDisp__sub_8026F6DC(s32);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s16 obj_getS16_2BA(void *);

struct VtBase4_8026f71c { void *vtable; };
struct VObj3_8026f71c : VtBase4_8026f71c { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); };

extern f32 lbl_805DD388;
extern f32 lbl_805DD38C;

void init_gauge_entry__20TWindowSubStatusDispFPv(void *arg0) {
    VObj3_8026f71c *temp_r3;
    f32 temp_f0;

    temp_r3 = (VObj3_8026f71c *) get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(3));
    temp_f0 = lbl_805DD388;
    M2C_FIELD(temp_r3, f32 *, 0x20) = temp_f0;
    M2C_FIELD(temp_r3, f32 *, 0x24) = temp_f0;
    temp_r3->m3();
    TWindowSubStatusDisp__sub_802575C0(temp_r3, 0xFF00FF15, lbl_805DD38C);
}

struct Base_8026F77C { char pad[0x18]; };
struct VObj_8026F77C : Base_8026F77C {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();virtual void m7();
    virtual void m8();virtual void m9();virtual void m10();virtual void m11();
    virtual void m12();virtual void m13();
    virtual int m14();
};

void update_status_entry__20TWindowSubStatusDispFi(s32 arg0) {
    void *temp_r31;
    VObj_8026F77C *temp_r3;

    get_width__11TWindowCtrlFPv();
    temp_r3 = (VObj_8026F77C *) TPlayerBattleCtrl4P__sub_801BA74C();
    if (temp_r3 != NULL) {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(2));
        M2C_FIELD(temp_r31, s32 *, 0x20) = temp_r3->m14() + 1;
    }
}

extern M2C_UNK lbl_8044F608;
extern const f32 lbl_805DD390;
extern const f32 lbl_805DD394;

s32 update_hp_gauge__20TWindowSubStatusDispFi(s32 arg0) {
    M2C_UNK var_r4;
    s32 var_r31;
    void *temp_r30;
    void *temp_r3;

    get_width__11TWindowCtrlFPv();
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C();
    if (temp_r3 == NULL) {
        TWindowSubStatusDisp__sub_8026F6DC(arg0);
        return 0xFF008CFC;
    }
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(4));
    M2C_FIELD(temp_r30, f32 *, 0x20) = (f32) obj_getS16_2BA(temp_r3);
    M2C_FIELD(temp_r30, f32 *, 0x24) = (f32) M2C_FIELD(temp_r3, s16 *, 0x32E);
    if (M2C_FIELD(temp_r30, f32 *, 0x24) > (lbl_805DD390 * M2C_FIELD(temp_r30, f32 *, 0x20))) {
        var_r31 = -1;
        var_r4 = 0xFF008CFC;
    } else {
        var_r4 = -0x3EEC;
        var_r31 = -0x3EEC;
    }
    TWindowSubStatusDisp__sub_802575C0(temp_r30, var_r4, lbl_805DD394);
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027FDFC
#include "types.h"

extern "C" {

void fn_8027FD88(void* p, f32 a, f32 b);
void fn_8027FD94(void* p, s16 v);
void TWindowSubStatusDisp__vt16(void);

void TWindowSubStatusDisp__vt16(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027FF68
#include "types.h"

extern "C" {

void TWindowSubStatusDisp__vt15(void);

void TWindowSubStatusDisp__vt15(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802804B0
#include "types.h"

extern "C" {

void TWindowSubStatusDisp__vt18(void);

void TWindowSubStatusDisp__vt18(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802806C4
#include "types.h"

extern "C" {

void TWindowSubStatusDisp__vt14(void);

void TWindowSubStatusDisp__vt14(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80280904
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__vt13(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s16 get_class_id__10TObjPlayerFPv(s32);
s16 get_item_index__10TObjPlayerFPv(s32);
s16 get_item_type__20TWindowSubStatusDispFPv(s32);
s16 get_field_2F8__20TWindowSubStatusDispFPv(s32);
s16 get_stat__20TWindowSubStatusDispFPv(s32);

void TWindowSubStatusDisp__vt13(void *arg0) {
    s32 temp_r3;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r31_4;
    void *temp_r31_5;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != 0) {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
        M2C_FIELD(temp_r31, s32 *, 0x20) = (s32) get_stat__20TWindowSubStatusDispFPv(temp_r3);
        temp_r31_2 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
        M2C_FIELD(temp_r31_2, s32 *, 0x20) = (s32) get_class_id__10TObjPlayerFPv(temp_r3);
        temp_r31_3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
        M2C_FIELD(temp_r31_3, s32 *, 0x20) = (s32) get_item_index__10TObjPlayerFPv(temp_r3);
        temp_r31_4 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x14);
        M2C_FIELD(temp_r31_4, s32 *, 0x20) = (s32) get_field_2F8__20TWindowSubStatusDispFPv(temp_r3);
        temp_r31_5 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x1A);
        M2C_FIELD(temp_r31_5, s32 *, 0x20) = (s32) get_item_type__20TWindowSubStatusDispFPv(temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802815D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_status__20TWindowSubStatusDispFPv(u8 *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(s32, s32);

void update_status__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20)) != 0U) {
        temp_r3 = TWindowSubComCard__sub_80244C0C(arg0, arg0 + 0x6C);
        TWindowSubComCard__sub_80245F98(arg0, temp_r3);
        TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
        TWindowSubStatusDisp__sub_8026C800(M2C_FIELD(arg0, s32 *, 0x68), temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802816F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void delete_if_allocated(void *, int);

extern M2C_UNK lbl_804D2B30[];

void *dt__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D2B30;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x68), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80287570
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TWindowSubStatusDisp__sub_80287570(void *arg0);

extern f32 lbl_805DD840;

f32 TWindowSubStatusDisp__sub_80287570(void *arg0) {
    return lbl_805DD840 + M2C_FIELD(arg0, f32 *, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80287798
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_base_y__20TWindowSubStatusDispFf(f32 farg0);

extern f32 lbl_805DD840;

f32 get_base_y__20TWindowSubStatusDispFf(f32 farg0) {
    return lbl_805DD840 + farg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028783C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_entry_state__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1);
M2C_UNK TWindowSubStatusDisp__sub_802877C8();

void set_entry_state__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x18) = arg1;
    TWindowSubStatusDisp__sub_802877C8();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80287974
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__20TWindowSubStatusDispFPvPv(void* p, void* a1);
void TWindowSubStatusDisp__sub_802879B0(void *arg0);
s32 deleting_destructor__20TWindowSubStatusDispFis(s32 arg0, s16 arg1);
int TWindowSubStatusDisp__sub_80287860(void*);
int TWindowSubStatusDisp__sub_802878B8(void*, void*);
M2C_UNK __dl__FPv();

void update__20TWindowSubStatusDispFPvPv(void* p, void* a1) { TWindowSubStatusDisp__sub_80287860(p); TWindowSubStatusDisp__sub_802878B8(p, a1); }

void TWindowSubStatusDisp__sub_802879B0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + M2C_FIELD(arg0, f32 *, 0x20));
}

s32 deleting_destructor__20TWindowSubStatusDispFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80287AC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TWindowSubStatusDisp__sub_80287AC4(u8 *arg0);

u8 TWindowSubStatusDisp__sub_80287AC4(u8 *arg0) {
    return (u8) ((u32) __cntlzw(M2C_FIELD(arg0, u8 *, 0x19) & 1) >> 5);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80288030
#include "types.h"

extern "C" {

int forward_render__20TWindowSubStatusDispFPv(void* p);
int update_subwindow__20TWindowSubStatusDispFPv(void* p);
s32 destroy_status_display__20TWindowSubStatusDispFis(s32 arg0, s16 arg1);
s32 __dl__FPv(s32 a0 = 0);
int update__20TWindowSubStatusDispFPvPv(void*);
int TWindowSubStatusDisp__sub_802879B0(void*);
s32 deleting_destructor__20TWindowSubStatusDispFis(s32 a0 = 0, s32 a1 = 0);

int forward_render__20TWindowSubStatusDispFPv(void* p) { return update__20TWindowSubStatusDispFPvPv(p); }
int update_subwindow__20TWindowSubStatusDispFPv(void* p) { return TWindowSubStatusDisp__sub_802879B0(p); }
s32 destroy_status_display__20TWindowSubStatusDispFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        deleting_destructor__20TWindowSubStatusDispFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A35B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void render_status__20TWindowSubStatusDispFPv(void *arg0);
void set_global_param__8TObjFishFi(void *);
void TWindowSubComCard__sub_803DEECC(void *, f32);
void TWindowSubStatusDisp__sub_803DEE6C(int);
void get_player__20TWindowSubStatusDispFv(void);
void TWindowSubStatusDisp__sub_803DF160(void *, void *);

extern void *lbl_805D6648;
extern const f32 lbl_805DDF38;

void render_status__20TWindowSubStatusDispFPv(void *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C(1);
    set_global_param__8TObjFishFi(lbl_805D6648);
    TWindowSubStatusDisp__sub_803DF160(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, void **, 0x80));
    TWindowSubComCard__sub_803DEECC((void *)((char *)arg0 + 68), lbl_805DDF38);
    get_player__20TWindowSubStatusDispFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4DE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_status_pair__20TWindowSubStatusDispFii(s32 arg0, s32 arg1);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TWindowSubComCard__sub_803DEECC(s32, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, s32);

extern s32 lbl_805D6668;
extern f32 lbl_805DDF88;

void render_status_pair__20TWindowSubStatusDispFii(s32 arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_803DEE6C(1);
    set_global_param__8TObjFishFi(lbl_805D6668);
    TWindowSubStatusDisp__sub_803DF160(0, arg1);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x1C, lbl_805DDF88);
    get_player__20TWindowSubStatusDispFv();
    TWindowSubStatusDisp__sub_803DEE6C(1);
    set_global_param__8TObjFishFi(lbl_805D6668);
    TWindowSubStatusDisp__sub_803DF160(0, arg1);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x3C, lbl_805DDF88);
    get_player__20TWindowSubStatusDispFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80327390
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_status_value__20TWindowSubStatusDispFPv(u8 *arg0);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);

extern s32 lbl_805D6C68;
extern const f32 lbl_805DF698;

void render_status_value__20TWindowSubStatusDispFPv(u8 *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    set_global_param__8TObjFishFi((void *) (lbl_805D6C68));
    TWindowSubStatusDisp__sub_803DF160((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x3C) << 0x18) | 0xFF0000 | 0xFFFF));
    TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0x1C), (f32) (lbl_805DF698));
    get_player__20TWindowSubStatusDispFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803386F0
#include "types.h"

extern "C" {

void TWindowSubStatusDisp__sub_803386F0(void);
int free_if_valid__10TObjPlayerFi(void*);

    extern int lbl_805D6D5C;
void TWindowSubStatusDisp__sub_803386F0(void) { free_if_valid__10TObjPlayerFi((void*)(lbl_805D6D5C)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803387F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_803387F8(void *arg0, s8 arg1);
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(s32);

void TWindowSubStatusDisp__sub_803387F8(void *arg0, s8 arg1) {
    get_message_10__20TWindowSubStatusDispFPv(arg1 + 0x113);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80338820
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_flag_or_zero__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1);
s32 query_status_field__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);

s32 query_status_field__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    return get_message_10__20TWindowSubStatusDispFPv(arg1 + 0x110);
}

s32 get_flag_or_zero__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    return get_message_10__20TWindowSubStatusDispFPv(arg1 + 0x10D);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80338A9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_80338A9C(void);
void *destroy_with_free__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(void *);

void TWindowSubStatusDisp__sub_80338A9C(void) {  }

extern M2C_UNK lbl_804EF440[];

void *destroy_with_free__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804EF440;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80338B14
#include "types.h"

extern "C" {

void* init_state__20TWindowSubStatusDispFPvii(void* a0, int a1, int a2);
int reset_entry__20TWindowSubStatusDispFPv(void*, int);

    extern unsigned char lbl_804EF440[];
    extern const float lbl_805DF9CC;
void* init_state__20TWindowSubStatusDispFPvii(void* a0, int a1, int a2) { reset_entry__20TWindowSubStatusDispFPv(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804EF440; *(float*)((char*)a0 + 0x14) = lbl_805DF9CC; *(unsigned char*)((char*)a0 + 0x1c) = 51; *(signed char*)((char*)a0 + 0x1d) = -1; *(signed char*)((char*)a0 + 0x1e) = -1; *(signed char*)((char*)a0 + 0x1f) = -1; *(signed char*)((char*)a0 + 0x20) = -1; *(signed char*)((char*)a0 + 0x21) = -1; *(int*)((char*)a0 + 0x24) = 0; *(int*)((char*)a0 + 0x18) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80338B88
#include "types.h"

extern "C" {

int TWindowSubStatusDisp__sub_80338B88(void* p);
void set_param__16TEneParticleCtrlFPv(void* p);
void free_particle_ctrl__16TEneParticleCtrlFPv(void* p);
int set_param_ptr__11TBoss4Type2FPvi(void*);
int enable__13TParticleCtrlFPv(void*);

int TWindowSubStatusDisp__sub_80338B88(void* p) { return (*(u16*)((char*)p + 0x0) >> 2) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80338EE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubStatusDisp__sub_80338EE4(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void deleting_dtor__20TWindowSubStatusDispFPvs(void *, int);

extern M2C_UNK lbl_804EF4E0[];

void *TWindowSubStatusDisp__sub_80338EE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF4E0;
        deleting_dtor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034A938
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_status_box__20TWindowSubStatusDispFPv(u8 *arg0);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);

extern s32 lbl_805D6E88;
extern const f32 lbl_805DFD60;

void render_status_box__20TWindowSubStatusDispFPv(u8 *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    set_global_param__8TObjFishFi((void *) (lbl_805D6E88));
    TWindowSubStatusDisp__sub_803DF160((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x74) << 0x18) | 0xFF0000 | 0xFFFF));
    TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0x54), (f32) (lbl_805DFD60));
    get_player__20TWindowSubStatusDispFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DEEAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_player__20TWindowSubStatusDispFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void get_player__20TWindowSubStatusDispFv(void) {
    TObjPlayer__sub_803E2248();
}

}
#endif
#endif
