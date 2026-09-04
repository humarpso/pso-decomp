#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_active__13TRaderMapCoreFv(void);
s32 should_show_map__13TRaderMapCoreFv(void);
void reset_counter__13TRaderMapCoreFPv(void* p);
s32 TRaderMapCore__sub_801F9058();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 is_ready__6TLobbyFv();

extern void *TRaderMapCore__data_805D5F40;

s32 is_active__13TRaderMapCoreFv(void) {
    if ((void *) TRaderMapCore__data_805D5F40 != NULL) {
        if (M2C_FIELD(TRaderMapCore__data_805D5F40, u16 *, 4) & 0x10) {
            return 0;
        }
        return TRaderMapCore__sub_801F9058();
    }
    return 0;
}

s32 should_show_map__13TRaderMapCoreFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && (is_ready__6TLobbyFv() == 0)) {
        return 0;
    }
    return is_technique_ready__8TTecCtrlFv();
}
void reset_counter__13TRaderMapCoreFPv(void* p) { *(s32*)((char*)p + 0x184) = 0; }

}
#else
#if PSO_CLASS_PACKAGE == 0x8002F588
#include "types.h"

extern "C" {

void copy_vec4__13TRaderMapCoreFPvPv(void* p, void* q);

void copy_vec4__13TRaderMapCoreFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80053A88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_map_position__13TRaderMapCoreFPvPv(void *arg0, void *arg1);

extern const f32 lbl_805D8B58;
extern const f32 lbl_805D8B5C;

void set_map_position__13TRaderMapCoreFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((lbl_805D8B58 + M2C_FIELD(arg1, f32 *, 0)) / lbl_805D8B5C);
    M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) ((lbl_805D8B58 + M2C_FIELD(arg1, f32 *, 8)) / lbl_805D8B5C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A6CEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 pack_color_bits__13TRaderMapCoreFii(s32 arg1, s32 arg2);
s32 TRaderMapCore__sub_801A6D00(void *arg0, s32 arg1);

s32 pack_color_bits__13TRaderMapCoreFii(s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = arg2 | ((arg2 << 0x10) & 0xF00000);
    return temp_r3 | ((temp_r3 << 0x16) & 0x3C000000);
}

s32 TRaderMapCore__sub_801A6D00(void *arg0, s32 arg1) {
    return (arg1 & 0xFFFFFF0F) | ((arg1 << 0x16) & 0x3C000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A6D10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 pack_flags__13TRaderMapCoreFii(s32 arg1, s32 arg2);

s32 pack_flags__13TRaderMapCoreFii(s32 arg1, s32 arg2) {
    return (arg2 & 0xFF0FFFFF) | ((arg2 << 0x16) & 0x3C000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A6D20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 has_flag__13TRaderMapCoreFPv(void *arg0);
s32 pack_flags__13TRaderMapCoreFii();

u8 has_flag__13TRaderMapCoreFPv(void *arg0) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 4) & pack_flags__13TRaderMapCoreFii()) != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801AFD84
#include "types.h"

extern "C" {

s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 has_item_flag_4096__10TObjPlayerFPv(s32);
s32 check_technique_flag__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_80203418();
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_field_3e0__12TBoss3VoloptFPv();
s32 get_map_id__13TRaderMapCoreFPv(void* p);
s32 get_move_mode__10TObjPlayerFPv(void* p);

s32 get_map_id__13TRaderMapCoreFPv(void* p) { return *(s32*)((char*)p + 0x3d0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3710
#include "types.h"

extern "C" {

void set_mode__13TRaderMapCoreFi(int a0);

    extern int TRaderMapCore__data_805D5F44;
void set_mode__13TRaderMapCoreFi(int a0) { TRaderMapCore__data_805D5F44 = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F959C
#include "types.h"

extern "C" {

void free_heap__13TRaderMapCoreFv(void);
int __dt__5THeapFv(void*, void*);

    extern int TRaderMapCore__data_805D5F50;
void free_heap__13TRaderMapCoreFv(void) { __dt__5THeapFv((void*)(TRaderMapCore__data_805D5F50), (void*)1); TRaderMapCore__data_805D5F50 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FA678
#include "types.h"

extern "C" {

void copy_transform__13TRaderMapCoreFPvPv(void* p, void* q);

void copy_transform__13TRaderMapCoreFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(u32*)((char*)p + 0x18) = *(u32*)((char*)q + 0x18); *(u32*)((char*)p + 0x1c) = *(u32*)((char*)q + 0x1c); *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x20); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FB23C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_target__13TRaderMapCoreFPv(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_card_flag_set__19TWindowKeyBoardHardFPv(u16);

int obj_getField1c(void*);
extern s32 lbl_805D53A0;
extern s32 lbl_805DC56C;

void update_target__13TRaderMapCoreFPv(void *arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0U) {
        M2C_FIELD(arg0, u32 *, 0x184) = temp_r3;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x184) != 0U) {
        if (is_card_flag_set__19TWindowKeyBoardHardFPv(obj_getField1c((void*)M2C_FIELD(arg0, u32 *, 0x184))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) | lbl_805DC56C);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) & 0xFFFFFFFE);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FB2B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

void advance_scroll__13TRaderMapCoreFPv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);

extern const f32 TRaderMapCore__data_805DC534;
extern const f32 lbl_805DC59C;
extern const f32 lbl_805DC5A0;

void advance_scroll__13TRaderMapCoreFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x198) = (s32) (M2C_FIELD(arg0, s32 *, 0x198) + 0x888);
    M2C_FIELD(arg0, f32 *, 0x19C) = lbl_805DC59C + lbl_805DC5A0 * (TRaderMapCore__data_805DC534 + TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x198)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FB6A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__13TRaderMapCoreFv(void);
M2C_UNK TRaderMapCore__ct(void *, s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
u32 __nw__7TObjectFUl(M2C_UNK);
s32 is_ready__6TLobbyFv();

extern s32 tl_radermap;
extern s32 tl_clipout;

void create__13TRaderMapCoreFv(void) {
    void *obj;
    if ((is_not_split_screen__13TRaderMapCoreFv() != 1) || (is_ready__6TLobbyFv() != 1)) {
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            if ((obj = (void *) __nw__7TObjectFUl(0x1A4)) != 0) {
                TRaderMapCore__ct(obj, tl_clipout);
            }
        } else if ((obj = (void *) __nw__7TObjectFUl(0x1A4)) != 0) {
            TRaderMapCore__ct(obj, tl_radermap);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FB8AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_statics__13TRaderMapCoreFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 lbl_805D5F48;
extern u32 TRaderMapCore__data_805D5F4C;

void free_statics__13TRaderMapCoreFv(void) {
    if ((u32) TRaderMapCore__data_805D5F4C != 0U) {
        TLobby__sub_803DA16C((void*)TRaderMapCore__data_805D5F4C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TRaderMapCore__data_805D5F4C);
        TRaderMapCore__data_805D5F4C = 0U;
    }
    if ((u32) lbl_805D5F48 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5F48, 1);
        lbl_805D5F48 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FB964
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__13TRaderMapCoreFPv(void* a0);
void init_map_ptr__13TRaderMapCoreFv(void);
M2C_UNK TObjFish__sub_8001EDC4(s32);

    extern const float TRaderMapCore__data_805DC528;
    extern const float TRaderMapCore__data_805DC534;
void reset__13TRaderMapCoreFPv(void* a0) { *(float*)((char*)a0 + 0x8) = TRaderMapCore__data_805DC528; *(float*)((char*)a0 + 0x4) = TRaderMapCore__data_805DC528; *(float*)((char*)a0 + 0x0) = TRaderMapCore__data_805DC528; *(int*)((char*)a0 + 0xc) = 0; *(float*)((char*)a0 + 0x10) = TRaderMapCore__data_805DC534; *(short*)((char*)a0 + 0x14) = 0; *(short*)((char*)a0 + 0x16) = -1; *(float*)((char*)a0 + 0x24) = TRaderMapCore__data_805DC534; *(float*)((char*)a0 + 0x20) = TRaderMapCore__data_805DC534; *(float*)((char*)a0 + 0x1c) = TRaderMapCore__data_805DC534; *(float*)((char*)a0 + 0x18) = TRaderMapCore__data_805DC534; }

extern s32 lbl_805D5F48;

void init_map_ptr__13TRaderMapCoreFv(void) {
    TObjFish__sub_8001EDC4(lbl_805D5F48);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801FB9C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TRaderMapCore__sub_801FB9C8(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804C88A8[];

void *TRaderMapCore__sub_801FB9C8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C88A8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030A808
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_not_split_screen__13TRaderMapCoreFv(void);

s32 is_split_screen();

s32 is_not_split_screen__13TRaderMapCoreFv(void) {
    return (u32)__cntlzw((u32)(1 - is_split_screen())) >> 5;
}

}
#endif
#endif
