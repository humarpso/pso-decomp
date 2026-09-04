#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowFukidasi__ct(void *arg0, s16 arg1, s32 arg2, s16 arg3, f32 farg0);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK clear_flag2c_bit100__15TWindowFukidasiFPv(void *);
s32 strnlen__19TWindowKeyBoardSoftFPvUi(s32, M2C_UNK);
M2C_UNK set_color__15TWindowFukidasiFPvUs(void *, s16);
M2C_UNK clear_flag__15TWindowFukidasiFPv(void *);

M2C_UNK strncpy(s32, s32, s32);
extern s32 lbl_805D3900;
extern const f32 TWindowFukidasi__data_805DCD30;

void TWindowFukidasi__ct(void *arg0, s16 arg1, s32 arg2, s16 arg3, f32 farg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3900;
    M2C_FIELD(arg0, s8 *, 0x70) = 0;
    M2C_FIELD(arg0, s8 *, 0x71) = 0;
    M2C_FIELD(arg0, s8 *, 0x72) = 2;
    M2C_FIELD(arg0, s8 *, 0x73) = -1;
    M2C_FIELD(arg0, s16 *, 0x76) = arg1;
    M2C_FIELD(arg0, s16 *, 0x20) = arg3;
    if (arg2 != 0) {
        temp_r3 = strnlen__19TWindowKeyBoardSoftFPvUi(arg2, 0x18);
        M2C_FIELD(arg0, s32 *, 0x78) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x78), arg2, temp_r3 + 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x78) = 0;
    }
    set_color__15TWindowFukidasiFPvUs(arg0, arg1);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) TWindowFukidasi__data_805DCD30;
    M2C_FIELD(arg0, f32 *, 0x7C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) TWindowFukidasi__data_805DCD30;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) TWindowFukidasi__data_805DCD30;
    clear_flag__15TWindowFukidasiFPv(arg0);
    clear_flag2c_bit100__15TWindowFukidasiFPv(arg0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8024695C
#include "types.h"

extern "C" {

int TWindowFukidasi__sub_8024695C(void* p);
int get_visible_flag__15TWindowFukidasiFPv(void* p);
int is_bit10_set__15TWindowFukidasiFPv(void* p);

int TWindowFukidasi__sub_8024695C(void* p) { return (*(u32*)((char*)p + 0x2c) >> 8) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80246968
#include "types.h"

extern "C" {

int TWindowFukidasi__sub_8024695C(void* p);
int get_visible_flag__15TWindowFukidasiFPv(void* p);
int is_bit10_set__15TWindowFukidasiFPv(void* p);

int get_visible_flag__15TWindowFukidasiFPv(void* p) { return (*(u32*)((char*)p + 0x2c) >> 9) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80246974
#include "types.h"

extern "C" {

int is_bit10_set__15TWindowFukidasiFPv(void* p);
int TWindowFukidasi__sub_8024695C(void* p);
int get_visible_flag__15TWindowFukidasiFPv(void* p);

int is_bit10_set__15TWindowFukidasiFPv(void* p) { return (*(u32*)((char*)p + 0x2c) >> 10) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249788
#include "types.h"

extern "C" {

void TWindowFukidasi__sub_80249788(void* p);
void hide__15TWindowFukidasiFPv(void* p);

void TWindowFukidasi__sub_80249788(void* p) { *(u32*)((char*)p + 0x2c) |= 0x400; }
void hide__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffbff; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802502BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_card_match_enabled__15TWindowFukidasiFPvi(void *arg0, s32 arg1);
s32 TLobby__sub_8039DAFC(s32, s32);
s32 get_field_20__17TWindowSubComCardFPv();
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

s32 check_card_match_enabled__15TWindowFukidasiFPvi(void *arg0, s32 arg1) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x72) != 0) {
        return 0;
    }
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    return (u32) __cntlzw(TLobby__sub_8039DAFC(get_field_20__17TWindowSubComCardFPv(), arg1)) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80250408
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void sync_display_pos__15TWindowFukidasiFPv(void* p);
s32 approach__15TWindowFukidasiFPvf(void *arg0, f32 farg0);
void TWindowFukidasi__sub_802504A8(void *arg0);
f32 get_random_float__8TObjFishFv(f32);

void sync_display_pos__15TWindowFukidasiFPv(void* p) { *(f32*)((char*)p + 0x60) = *(f32*)((char*)p + 0x80); *(f32*)((char*)p + 0x64) = *(f32*)((char*)p + 0x80); }

extern f32 lbl_805DCD00;
extern f32 lbl_805DCD04;

s32 approach__15TWindowFukidasiFPvf(void *arg0, f32 farg0) {
    f32 temp_f31;

    temp_f31 = lbl_805DCD00 * (farg0 - M2C_FIELD(arg0, f32 *, 0x80));
    if (get_random_float__8TObjFishFv(temp_f31) < lbl_805DCD04) {
        M2C_FIELD(arg0, f32 *, 0x80) = farg0;
        return 1;
    }
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) (M2C_FIELD(arg0, f32 *, 0x80) + temp_f31);
    return 0;
}

void TWindowFukidasi__sub_802504A8(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x71) & 0x10)) {
        M2C_FIELD(arg0, s8 *, 0x70) = 7;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80251964
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_color__15TWindowFukidasiFPvUs(void *arg0, u16 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);

s32 obj_isState3_324();
extern M2C_UNK lbl_8044ED18[];

void set_color__15TWindowFukidasiFPvUs(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = 0xFFF8F8F8;
    if (((u32)arg1 < 0xCU) && (TPlayerBattleCtrl4P__sub_801BA74C((u32)arg1) != 0U) && (obj_isState3_324() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) lbl_8044ED18[(u16)arg1];
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802519D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

s32 clamp_position__15TWindowFukidasiFPvPvf(void *arg0, void *arg1, f32 farg0);
f32 get_field_18__15TWindowCtrlMainFv(s16);
f32 get_ctrl_field14__15TWindowCtrlMainFv(s16);
f32 get_field10__15TWindowCtrlMainFv(s16);
f32 get_position_z__15TWindowCtrlMainFv(s16);

extern const f32 TWindowFukidasi__data_805DCCFC;
extern const f32 lbl_805DCD44;

s32 clamp_position__15TWindowFukidasiFPvPvf(void *arg0, void *arg1, f32 farg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    s32 var_r31;

    var_r31 = 0;
    temp_f1 = TWindowFukidasi__data_805DCCFC + get_position_z__15TWindowCtrlMainFv(M2C_FIELD(arg0, s16 *, 0x20));
    if (M2C_FIELD(arg1, f32 *, 0) < temp_f1) {
        M2C_FIELD(arg1, f32 *, 0) = temp_f1;
        var_r31 = 1;
    }
    temp_f1_2 = (get_ctrl_field14__15TWindowCtrlMainFv(M2C_FIELD(arg0, s16 *, 0x20)) - TWindowFukidasi__data_805DCCFC) - (M2C_FIELD(arg0, f32 *, 0x48) * farg0);
    if (M2C_FIELD(arg1, f32 *, 0) > temp_f1_2) {
        M2C_FIELD(arg1, f32 *, 0) = temp_f1_2;
        var_r31 = 1;
    }
    temp_f1_3 = lbl_805DCD44 + get_field10__15TWindowCtrlMainFv(M2C_FIELD(arg0, s16 *, 0x20));
    if (M2C_FIELD(arg1, f32 *, 4) < temp_f1_3) {
        M2C_FIELD(arg1, f32 *, 4) = temp_f1_3;
        var_r31 = 1;
    }
    temp_f1_4 = (get_field_18__15TWindowCtrlMainFv(M2C_FIELD(arg0, s16 *, 0x20)) - lbl_805DCD44) - (M2C_FIELD(arg0, f32 *, 0x4C) * farg0);
    if (M2C_FIELD(arg1, f32 *, 4) > temp_f1_4) {
        M2C_FIELD(arg1, f32 *, 4) = temp_f1_4;
        var_r31 = 1;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80251AC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open__15TWindowFukidasiFPvPvi(u8 *arg0, u32 *arg1, s32 arg2);
M2C_UNK init_flags__15TWindowFukidasiFPvi(void *, s32);
M2C_UNK TWindowSubSymbolChat__sub_800773BC(s32);
f32 TWindowSubStatusDisp__sub_801A5228(s16);
M2C_UNK set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(void *, u32 *);
M2C_UNK TWindowSubSymbolChat__sub_80248494(void *, s16);
M2C_UNK clear_flag__15TWindowFukidasiFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80257CB8(void *);

extern const f32 TWindowFukidasi__data_805DCD30;

void open__15TWindowFukidasiFPvPvi(u8 *arg0, u32 *arg1, s32 arg2) {
    s32 var_r31;
    u8 temp_r0;

    var_r31 = 0;
    init_flags__15TWindowFukidasiFPvi(arg0, arg2);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x72) != 1) {
        M2C_FIELD(arg0, u8 *, 0x72) = 1U;
        TWindowSubStatusDisp__sub_80257CB8(arg0 + 0x24);
        TWindowSubSymbolChat__sub_80248494(arg0 + 0x24, M2C_FIELD(arg0, s16 *, 0x20));
        if ((u8) M2C_FIELD(arg0, u8 *, 0x70) != 0) {
            var_r31 = 1;
        }
    } else {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x70);
        if ((temp_r0 != 0) && (temp_r0 != 4)) {
            var_r31 = 1;
        }
    }
    if (var_r31 != 0) {
        M2C_FIELD(arg0, u8 *, 0x70) = 5U;
        clear_flag__15TWindowFukidasiFPv(arg0);
        if (TWindowSubStatusDisp__sub_801A5228(M2C_FIELD(arg0, s16 *, 0x20)) > TWindowFukidasi__data_805DCD30) {
            M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        }
    }
    set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(arg0 + 0x24, arg1);
    TWindowSubSymbolChat__sub_800773BC(((u32) *arg1 >> 5U) & 0xF);
    M2C_FIELD(arg0, s16 *, 0x74) = 0x5A;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80251D28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_flags__15TWindowFukidasiFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_1c__6TLobbyFPvf(f32);
s32 TWindowSubAreaMapDisp__sub_80246948(void *);
M2C_UNK set_flag__15TWindowFukidasiFPv(void *);
M2C_UNK set_flag2c_bit200__15TWindowFukidasiFPv(void *);

extern const f32 TWindowFukidasi__data_805DCD30;
extern const f32 lbl_805DCD58;

void init_flags__15TWindowFukidasiFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) TWindowFukidasi__data_805DCD30;
    set_field_1c__6TLobbyFPvf(lbl_805DCD58);
    if (TWindowSubAreaMapDisp__sub_80246948(arg0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 1);
    }
    M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) & ~0x50);
    if (arg1 & 2) {
        M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) & 0xFFFFFFF7);
    }
    if (arg1 & 0x20) {
        M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) | 2);
        set_flag__15TWindowFukidasiFPv(arg0);
        set_flag2c_bit200__15TWindowFukidasiFPv(arg0);
        M2C_FIELD(arg0, s8 *, 0x73) = 4;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) & 0xFFFFFFFD);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80252AE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *destroy__15TWindowFukidasiFPvs(u8 *arg0, s16 arg1);
M2C_UNK free__11TOBoss4RockFUi(void *);
M2C_UNK release_slot__11TWindowCtrlFPv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_window__15TWindowAdditionFPvs(void *, M2C_UNK);
M2C_UNK clear_visible_flag__15TWindowFukidasiFPv(void *);
s32 is_flag_set__15TWindowFukidasiFPv(M2C_UNK *);

extern M2C_UNK lbl_804CF0B8[];

u8 *destroy__15TWindowFukidasiFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CF0B8;
        if (is_flag_set__15TWindowFukidasiFPv((M2C_UNK *)arg0) != 0) {
            clear_visible_flag__15TWindowFukidasiFPv(arg0);
            release_slot__11TWindowCtrlFPv(arg0 + 0x73);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x78));
            M2C_FIELD(arg0, u32 *, 0x78) = 0U;
        }
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80252BF8
#include "types.h"

extern "C" {

void set_flag2c_bit100__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void set_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit100__15TWindowFukidasiFPv(void* p);
void TWindowFukidasi__sub_80252C38(void* p);
void clear_visible_flag__15TWindowFukidasiFPv(void* p);
void set_flag__15TWindowFukidasiFPv(void* p);
void TWindowFukidasi__sub_80252C68(void* p);
int is_flag_set__15TWindowFukidasiFPv(void* p);
void TWindowFukidasi__sub_80252C84(void* p);
int is_active__15TWindowFukidasiFPv(void* p);
void clear_flag__15TWindowFukidasiFPv(void* p);
int fn_80252CB0(void* p);
int fn_80252CBC(void* p);
void render__17TWindowGetComCardFv(void);

void set_flag2c_bit100__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) |= 0x100; }
void clear_flag2c_bit200__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffdff; }
void set_flag2c_bit200__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) |= 0x200; }
void clear_flag2c_bit100__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffeff; }

}
#endif
#endif
