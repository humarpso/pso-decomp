#include "pso/TChallenge4PItemSelect.h"

extern "C" void TWindow__close(void*);

void TChallenge4PItemSelect::run_task() {}

TChallenge4PItemSelect::~TChallenge4PItemSelect() {
    if (m_2c != nullptr) { TWindow__close(m_2c); m_2c = nullptr; }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TChallenge4PItemSelect__ct(void *arg0, void *arg1, void *arg2);
void challenge4p_item_select_open_menu(void *arg0);
void queue_destruction_with_callback__22TChallenge4PItemSelectFPv(void *arg0);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, s32, s32);
s32 TItemData__sub_8010EEDC(s32);
M2C_UNK TWindowSubComCard__sub_80265500(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
void __ct__7TObjectFP7TObject(void *);
s32 fn_8034BE30(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, s32);
s32 get_instance__11TCameraCtrlFv();
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
M2C_UNK set_position_xy(u32, f32, f32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(u32, f32, f32);

void queue_destruction_with_callback__22TChallenge4PItemSelectFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x1C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x28));
    }
    queue_destruction__7TObjectFv((void *)(arg0));
}

extern M2C_UNK lbl_804F00A8[];
extern const f32 lbl_805DFD98;
extern const f32 lbl_805DFD9C;
extern const f32 lbl_805DFDA0;
extern const f32 lbl_805DFDA4;

void challenge4p_item_select_open_menu(void *arg0) {
    s32 temp_r0;
    u16 temp_r30;
    s32 var_r29;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    if (temp_r0 <= 0) {
        temp_r30 = fn_8034BE30(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, u32 *, 0x2C) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x42), 8, temp_r30);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            var_r29 = 0;
            do {
                forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TItemData__sub_8010EEDC(lbl_804F00A8[var_r29]), 6, var_r29);
                var_r29 += 1;
            } while (var_r29 < 8);
            set_scroll_target__17TWindowSubComCardFPvff(M2C_FIELD(arg0, u32 *, 0x2C), lbl_805DFD98, lbl_805DFD9C);
            TWindowSubComCard__sub_80265500(M2C_FIELD(arg0, u32 *, 0x2C));
            set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, u32 *, 0x2C), lbl_805DFDA0);
            if (get_instance__11TCameraCtrlFv() > 2) {
                set_position_xy(M2C_FIELD(arg0, u32 *, 0x2C), lbl_805DFDA4, lbl_805DFDA4);
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        }
    }
}

extern M2C_UNK __vt__22TChallenge4PItemSelect[];
extern void *lbl_805D433C;

void *TChallenge4PItemSelect__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TChallenge4PItemSelect;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D433C;
    M2C_FIELD(arg0, void **, 0x28) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 90;
    if (M2C_FIELD(arg0, void **, 0x28) == NULL) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
    return arg0;
}

}
