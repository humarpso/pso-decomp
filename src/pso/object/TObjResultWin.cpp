#include "pso/TObjResultWin.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8007445C_lbl_8050E208 { M2C_UNK value; u8 remaining[0x1AC]; };
typedef char RecoveredGlobal_8007445C_lbl_8050E208_size[sizeof(RecoveredGlobal_8007445C_lbl_8050E208) == 0x1B0 ? 1 : -1];

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct V_80074664 { s32 x, y, z; };

struct Sub_80074664 { s32 w[5]; };

struct Rec_80074664 { V_80074664 v; Sub_80074664 a; Sub_80074664 b; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
void create_window__13TObjResultWinFPv(u8 *arg0);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK TWindow__close(int);
s32 TWindowCtrlMain__sub_8024CE58();
extern RecoveredGlobal_8007445C_lbl_8050E208 lbl_8050E208;
void run_task__13TObjResultWinFv(u8 *arg0);
Rec_80074664 *TObjResultWin__sub_80074664(Rec_80074664 *d, Rec_80074664 *s);
}

extern "C" {

void *__ct__13TObjResultWinFv(void *arg0, void *arg1, void *arg2);
void *create__13TObjResultWinFPv(void *arg0);
void create_window__13TObjResultWinFPv(u8 *arg0);
void TQuestVmDownLoadServer__sub_80074114(void *);
M2C_UNK get_window_layout_position(M2C_UNK);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
s32 get_camera_id__11TCameraCtrlFv();
M2C_UNK send_and_handle__6TLobbyFPvii(u32, void *, M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
M2C_UNK set_position_xy(u32, f32, f32);
u32 set_window_mode_4__6TLobbyFPvii(M2C_UNK, void *, M2C_UNK);

extern M2C_UNK lbl_8048D1A0[];
extern const f32 lbl_805D915C;
extern const f32 lbl_805D9160;

void run_task__13TObjResultWinFv(u8 *arg0) {
    s32 temp_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        if (TWindowCtrlMain__sub_8024CE58() != 0) {
            create_window__13TObjResultWinFPv((u8 *)((void *) (arg0)));
        }
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
        if (temp_r0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
                TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x1C)));
                queue_destruction__7TObjectFv((void *) (arg0));
            }
        } else if (TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + 0x20), (int) (4)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        }
    }
}

void create_window__13TObjResultWinFPv(u8 *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x41), lbl_8048D1A0, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        if (get_camera_id__11TCameraCtrlFv() == 4) {
            set_position_xy(M2C_FIELD(arg0, u32 *, 0x1C), lbl_805D915C, lbl_805D915C);
        }
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x1C), arg0 + 0x28, 0);
        set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, u32 *, 0x1C), lbl_805D9160);
    }
}

extern M2C_UNK __vt__13TObjResultWin[];
extern void *lbl_805D2878;

TObjResultWin::~TObjResultWin() {}
void *__ct__13TObjResultWinFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjResultWin;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2878;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    TObjResultWin__sub_80074664((Rec_80074664 *)((void *)((char *)arg0 + 296)), (Rec_80074664 *)(arg2));
    M2C_FIELD(arg0, u32 *, 0x24) = 60;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    TQuestVmDownLoadServer__sub_80074114(arg0);
    return arg0;
}

extern void *tl_07;

Rec_80074664 *TObjResultWin__sub_80074664(Rec_80074664 *d, Rec_80074664 *s) {
    d->v = s->v;
    d->a = s->a;
    d->b = s->b;
    return d;
}

void *create__13TObjResultWinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x15C);
    if (o != NULL) {
        o = __ct__13TObjResultWinFv((void *)(o), (void *)(tl_07), (void *)(arg0));
    }
    return o;
}

}
