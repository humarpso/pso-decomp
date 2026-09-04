#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void clear_flag70_bit80__19TWindowSubTechniqueFPv(void* p);
void clear_trade_flag__19TWindowSubTradeMainFPv(void* p);

void clear_flag70_bit80__19TWindowSubTechniqueFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }
void clear_trade_flag__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }

}
#else
#if PSO_CLASS_PACKAGE == 0x80286B0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80286B0C { char pad[0x18]; };
struct VObj_80286B0C : Base_80286B0C {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)
#undef VV
    virtual s32 v36();
};

extern "C" {

void get_selection__19TWindowSubTechniqueFPvPvi(s16 *arg0, s32 *arg1, s32 arg2);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);

void get_selection__19TWindowSubTechniqueFPvPvi(s16 *arg0, s32 *arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg2);
    if (temp_r3 != NULL) {
        *arg0 = M2C_FIELD(temp_r3, s16 *, 0x32E);
        *arg1 = ((VObj_80286B0C *)temp_r3)->v36();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80286B64
#include "types.h"

extern "C" {

s32 TItemData__sub_80076E84(s16);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s16);
s32 TWindowSubTradeMain__sub_80266200(s32, s32, s32, s16, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TObjPlayer__sub_801D8044(u32, s32, u8);
int TWindowSubTechnique__sub_80286BD4(void* p);
int get_selection__19TWindowSubTechniqueFPvPvi(void*, void* a1 = 0);

s32 update_selection__19TWindowSubTechniqueFPvPv(s16 *arg0, s32 *arg1) {
    s32 spC;
    s16 sp8;

    get_selection__19TWindowSubTechniqueFPvPvi((void*)(&sp8), (void*)(&spC));
    if ((sp8 == (s16) *arg0) && (spC == (s32) *arg1)) {
        return 0;
    }
    *arg0 = sp8;
    *arg1 = spC;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80286C78
#include "types.h"

extern "C" {
int TWindowSubTechnique__sub_80286BF4(void* a0 = 0, void* a1 = 0);

s32 TItemData__sub_80076E84(s16);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s16);
s32 TWindowSubTradeMain__sub_80266200(s32, s32, s32, s16, s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TObjPlayer__sub_801D8044(u32, s32, u8);
int TWindowSubTechnique__sub_80286BD4(void* p);
int get_selection__19TWindowSubTechniqueFPvPvi(void*, void* a1 = 0);

s32 lookup_technique__19TWindowSubTechniqueFii(s32 arg0, s32 arg1) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (temp == 0U) {
        return 0;
    }
    return TObjPlayer__sub_801D8044(temp, 3, (u8) arg0);
}
void draw_technique_row__19TWindowSubTechniqueFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    temp_r31 = TItemData__sub_80076E84(arg0);
    if (lookup_technique__19TWindowSubTechniqueFii(arg0, arg1) == 0) {
        draw_text_gray__17TWindowSubComCardFiiii(arg2, temp_r31, 6, arg0);
        return;
    }
    if (TWindowSubTechnique__sub_80286BF4((void*)(arg0), (void*)(arg1)) == 0) {
        TWindowSubTradeMain__sub_80266200(arg2, temp_r31, 0x16, arg0, 0xFFFD3901);
        return;
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(arg2, temp_r31, 6, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80286E88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_menu__19TWindowSubTechniqueFPv(void *arg0);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_flag70_bit100__17TWindowOptionCtrlFPv(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
s32 fn_8026652C(s32, M2C_UNK, s32, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern const f32 lbl_805DD838;

s32 open_menu__19TWindowSubTechniqueFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_8026652C(TWindowSubComCard__sub_8026CBB8(0x12), 5, get_message_10__20TWindowSubStatusDispFPv(0x2F), M2C_FIELD(arg0, s32 *, 0x28));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 0);
    set_field_1c__6TLobbyFPvf(temp_r31);
    set_flag70_bit100__17TWindowOptionCtrlFPv(temp_r31);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9C), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9D), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9E), 6, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9F), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xA0), 6, 4);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD838);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802870C0
#include "types.h"

extern "C" {

void render__19TWindowSubTechniqueFv(void);

void render__19TWindowSubTechniqueFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80287418
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubTechnique__ct(void *arg0, s32 arg1, s32 arg2);
void *__dt__19TWindowSubTechniqueFv(void *arg0, s16 arg1);
void TWindow__close(void *);
s32 open_menu__19TWindowSubTechniqueFPv(void *);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__19TWindowSubTechnique[];

void *__dt__19TWindowSubTechniqueFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubTechnique;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__19TWindowSubTechnique[];
extern s32 lbl_805D3AD0;

void *TWindowSubTechnique__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubTechnique;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3AD0;
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = open_menu__19TWindowSubTechniqueFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0x13;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#endif
