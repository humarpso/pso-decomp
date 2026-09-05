#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F998(void);
void TKeyBoardControl__sub_8000F9A4(void);
int get_selection__19TWindowSubTechniqueFPvPvi(void*, void* a1);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
int TWindowSubTechnique__sub_80286BD4(void* p, void* _w1);
}

extern "C" {

int TWindowSubTechnique__sub_80286BF4(void* a0 = 0, void* a1 = 0);
void draw_technique_row__19TWindowSubTechniqueFiii(s32 arg0, s32 arg1, s32 arg2);
s32 lookup_technique__19TWindowSubTechniqueFii(s32 arg0, s32 arg1);
s32 TItemData__sub_80076E84(s16);
s32 TObjPlayer__sub_801D8044(u32, s32, u8);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowSubTradeMain__sub_80266200(s32, s32, s32, s16, s32);
s32 draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s16);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s16);

int TWindowSubTechnique__sub_80286BD4(void* p, void* _w1) { return get_selection__19TWindowSubTechniqueFPvPvi((void*)(p), (void*)(_w1)); }

int TWindowSubTechnique__sub_80286BF4(void* a0, void* a1) { return 0; }

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
    if (lookup_technique__19TWindowSubTechniqueFii((s32)(arg0), (s32)(arg1)) == 0) {
        draw_text_gray__17TWindowSubComCardFiiii(arg2, temp_r31, 6, arg0);
        return;
    }
    if (TWindowSubTechnique__sub_80286BF4((void*)((void*)(arg0)), (void*)((void*)(arg1))) == 0) {
        TWindowSubTradeMain__sub_80266200(arg2, temp_r31, 0x16, arg0, 0xFFFD3901);
        return;
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(arg2, temp_r31, 6, arg0);
}

}
