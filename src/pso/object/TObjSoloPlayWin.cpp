#include "pso/TObjSoloPlayWin.h"

extern "C" {
void start_win_timer__15TObjSoloPlayWinFPv(void*);
void update_close_timer__15TObjSoloPlayWinFPv(void*);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjSoloPlayWin__ct(void *arg0);
void start_win_timer__15TObjSoloPlayWinFPv(void *arg0);
M2C_UNK TObjSoloPlayWin__sub_8007483C(void *);
void __ct__7TObjectFP7TObject(void *);
s32 can_start_win_timer__15TObjSoloPlayWinFi();
s32 fn_80074724(void *);

void start_win_timer__15TObjSoloPlayWinFPv(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) && (can_start_win_timer__15TObjSoloPlayWinFi() != 0) && (fn_80074724(arg0) != 0)) {
        TObjSoloPlayWin__sub_8007483C(arg0);
        M2C_FIELD(arg0, s32 *, 0x24) = 0x12C;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

extern M2C_UNK __vt__15TObjSoloPlayWin[];
extern void *lbl_805D2880;

}

void TObjSoloPlayWin::run_task() {
    switch (m_state) {
    case 0:
        start_win_timer__15TObjSoloPlayWinFPv(this);
        return;
    case 1:
        update_close_timer__15TObjSoloPlayWinFPv(this);
        return;
    }
}

TObjSoloPlayWin::~TObjSoloPlayWin() {}

extern "C" {

void *TObjSoloPlayWin__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjSoloPlayWin;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2880;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
