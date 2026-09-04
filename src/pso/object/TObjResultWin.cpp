#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__13TObjResultWinFv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void TQuestVmDownLoadServer__sub_80074114(void *);
void TObjResultWin__sub_80074664(void *, void *);

extern M2C_UNK __vt__13TObjResultWin[];
extern void *lbl_805D2878;

void *__ct__13TObjResultWinFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjResultWin;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2878;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    TObjResultWin__sub_80074664((void *)((char *)arg0 + 296), arg2);
    M2C_FIELD(arg0, u32 *, 0x24) = 60;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    TQuestVmDownLoadServer__sub_80074114(arg0);
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80074510
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_window__13TObjResultWinFPv(u8 *arg0);
s32 get_camera_id__11TCameraCtrlFv();
M2C_UNK set_position_xy(u32, f32, f32);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, void *, M2C_UNK);
u32 set_window_mode_4__6TLobbyFPvii(M2C_UNK, void *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_8048D1A0[];
extern const f32 lbl_805D915C;
extern const f32 lbl_805D9160;

void create_window__13TObjResultWinFPv(u8 *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = set_window_mode_4__6TLobbyFPvii(TWindowSubComCard__sub_8026CBB8(0x41), lbl_8048D1A0, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        if (get_camera_id__11TCameraCtrlFv() == 4) {
            set_position_xy(M2C_FIELD(arg0, u32 *, 0x1C), lbl_805D915C, lbl_805D915C);
        }
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x1C), arg0 + 0x28, 0);
        set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, u32 *, 0x1C), lbl_805D9160);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800746D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__13TObjResultWinFPv(void *arg0);
void *__ct__13TObjResultWinFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_07;

void *create__13TObjResultWinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x15C);
    if (o != NULL) {
        o = __ct__13TObjResultWinFv(o, tl_07, arg0);
    }
    return o;
}

}
#endif
#endif
