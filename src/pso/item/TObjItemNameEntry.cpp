#include "pso/TObjItemNameEntry.h"

extern "C" void TWindow__close(void*);
extern "C" void queue_destruction__7TObjectFv(void*);

TObjItemNameEntry::~TObjItemNameEntry() {
    if (m_20 != nullptr) { TWindow__close(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { queue_destruction__7TObjectFv(m_1c); m_1c = nullptr; }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjItemNameEntry__ct(void *arg0);
u32 TKeyBoardControl__ct(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK align_menu_entry_positions(u32);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
u32 __nw__7TObjectFUl(M2C_UNK);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(s32, s32);
M2C_UNK fn_80131ADC(u32, s32);
M2C_UNK fn_80131B18(u32, s32);
s32 fn_8026CB5C();
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(u32, f32, f32);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(u32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(u32, s32);

extern M2C_UNK __vt__17TObjItemNameEntry[];
extern s32 lbl_805D35D8;
extern s32 lbl_805D53A0;
extern const f32 lbl_805DC4EC;
extern const f32 lbl_805DC4F0;

void *TObjItemNameEntry__ct(void *arg0) {
    u32 var_r0;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjItemNameEntry;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D35D8;
    if ((var_r0 = __nw__7TObjectFUl(0x2C)) != 0U) {
        var_r0 = TKeyBoardControl__ct((void*)var_r0, arg0, 8, 0, 1, lbl_805D53A0);
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = var_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        set_sub_position__15TWindowMakeTeamFPvPv(M2C_FIELD(arg0, u32 *, 0x1C), get_window_layout_position(0xBF));
        fn_80131ADC(M2C_FIELD(arg0, u32 *, 0x1C), get_window_layout_position(0xC0));
        fn_80131B18(M2C_FIELD(arg0, u32 *, 0x1C), fn_8026CB5C());
    }
    M2C_FIELD(arg0, u32 *, 0x20) = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0x56), 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x20), TQuestVmDownLoadServer__sub_8006EF6C(0x47), 0x81, 0);
    }
    set_scroll_target__17TWindowSubComCardFPvff(M2C_FIELD(arg0, u32 *, 0x20), lbl_805DC4EC, lbl_805DC4F0);
    align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0x20));
    set_status_flag_80__12TQuestThreadFPv(M2C_FIELD(arg0, u32 *, 0x20));
    return arg0;
}

}
