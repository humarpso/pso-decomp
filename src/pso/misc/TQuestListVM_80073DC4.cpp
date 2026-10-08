#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK fn_800740DC();
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
s32 TObjNewFloorWin__sub_8007410C();
M2C_UNK close_active_window__11TWindowCtrlFv();
M2C_UNK ensure_initialized__11TWindowCtrlFv();
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, void *, M2C_UNK, M2C_UNK);
u32 create_window_menu(M2C_UNK);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK);
M2C_UNK get_window_layout_position(M2C_UNK);
s32 sprintf(void *, const char *, ...);
extern char lbl_80438660[];
void TObjNewFloorWin__sub_80073EB4(u8 *arg0);
}

extern "C" {

int run_task__15TObjNewFloorWinFv(void);
void set_field_20__12TQuestListVMFPvi(void* p, s32 v);
int get_status_flag__17TWindowSubComCardFPv(void* p);

void set_field_20__12TQuestListVMFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

int run_task__15TObjNewFloorWinFv(void) { return 0; }
void TObjNewFloorWin__sub_80073EB4(u8 *arg0) {
    M2C_UNK pos;
    pos = get_window_layout_position(0x3D);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) < 0) {
        M2C_FIELD(arg0, u32 *, 0x20) = ((u32 (*)(M2C_UNK, s32, s32)) check_room_seq_4__16TAdChrSelASlotGCFii)(pos, 1, M2C_FIELD(arg0, s32 *, 0x4C));
    } else {
        M2C_FIELD(arg0, u32 *, 0x20) = ((u32 (*)(M2C_UNK, s32, s32)) create_window_menu)(pos, 1, M2C_FIELD(arg0, s32 *, 0x4C));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
        sprintf(arg0 + 0x2C, lbl_80438660, TQuestVmDownLoadServer__sub_8006EF6C(0x67), TObjNewFloorWin__sub_8007410C());
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x20), arg0 + 0x2C, 0, 0);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x20));
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0x20));
        fn_800740DC();
        close_active_window__11TWindowCtrlFv();
        ensure_initialized__11TWindowCtrlFv();
    }
}

}
