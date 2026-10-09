#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct TObjNewFloorWin_80073DCC { u8 pad[0x1C]; s32 state; void *window; s32 timer24; s32 timer28; };

extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK fn_800740DC();
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
s32 TObjNewFloorWin__sub_8007410C();
M2C_UNK close_active_window__11TWindowCtrlFv();
M2C_UNK ensure_initialized__11TWindowCtrlFv();
M2C_UNK calc_window_size__17TWindowSubComCardFPv(u32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, void *, M2C_UNK, M2C_UNK);
u32 create_window_menu(M2C_UNK);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK);
M2C_UNK get_window_layout_position(M2C_UNK);
s32 sprintf(void *, const char *, ...);
extern char lbl_80438660[];
void open_window__15TObjNewFloorWinFPv(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void open_window__15TObjNewFloorWinFPv(u8 *arg0);
void TWindow__close(void *);
s32 TWindowCtrlMain__sub_8024CE58();
void run_task__15TObjNewFloorWinFv(TObjNewFloorWin_80073DCC *self);
}

extern "C" {

void set_field_20__12TQuestListVMFPvi(void* p, s32 v);
int get_status_flag__17TWindowSubComCardFPv(void* p);

void set_field_20__12TQuestListVMFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

void run_task__15TObjNewFloorWinFv(TObjNewFloorWin_80073DCC *self) {
    switch (self->state) {
    case 0:
        if (self->window == NULL) {
            if (TWindowCtrlMain__sub_8024CE58() == 0) {
                if (--self->timer24 <= 0) {
                    queue_destruction__7TObjectFv(self);
                    return;
                }
                return;
            } else {
                open_window__15TObjNewFloorWinFPv((u8 *)self);
                self->state = 1;
            }
        }
        break;
    case 1:
        if (--self->timer28 == 0x3C) {
            if (self->window != NULL) {
                TWindow__close(self->window);
                self->window = NULL;
            }
            self->state = 2;
        }
        break;
    case 2:
        if (--self->timer28 <= 0) {
            queue_destruction__7TObjectFv(self);
        }
        break;
    }
}

void open_window__15TObjNewFloorWinFPv(u8 *arg0) {
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
        calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x20));
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0x20));
        fn_800740DC();
        close_active_window__11TWindowCtrlFv();
        ensure_initialized__11TWindowCtrlFv();
    }
}

}
