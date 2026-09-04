#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjSoloPlayWin__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__15TObjSoloPlayWin[];
extern void *lbl_805D2880;

void *TObjSoloPlayWin__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjSoloPlayWin;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2880;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800747C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 can_start_win_timer__15TObjSoloPlayWinFi(s32 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrlMain__sub_8024CE58();
s32 fn_80074758(s32);
s32 obj_testFlags30(u32, M2C_UNK);

extern s32 lbl_805D53A0;

s32 can_start_win_timer__15TObjSoloPlayWinFi(s32 arg0) {
    u32 temp_r31;

    temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((TWindowCtrlMain__sub_8024CE58() == 1) && (fn_80074758(arg0) != 0) && (temp_r31 != 0U) && (obj_testFlags30(temp_r31, 0x02000000) == 0)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800748AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_close_timer__15TObjSoloPlayWinFPv(void *arg0);
M2C_UNK TLobby__sub_8006FBAC();
M2C_UNK TWindow__close(u32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_close_timer__15TObjSoloPlayWinFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    if (temp_r0 < 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, u32 *, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        TLobby__sub_8006FBAC();
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80074908
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_win_timer__15TObjSoloPlayWinFPv(void *arg0);
s32 fn_80074724(void *);
s32 can_start_win_timer__15TObjSoloPlayWinFi();
M2C_UNK TObjSoloPlayWin__sub_8007483C(void *);

void start_win_timer__15TObjSoloPlayWinFPv(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) && (can_start_win_timer__15TObjSoloPlayWinFi() != 0) && (fn_80074724(arg0) != 0)) {
        TObjSoloPlayWin__sub_8007483C(arg0);
        M2C_FIELD(arg0, s32 *, 0x24) = 0x12C;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
#endif
#endif
