#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjCHTimeWin__sub_80071DF4(int a0);

    extern int lbl_805D4E40;
void TObjCHTimeWin__sub_80071DF4(int a0) { lbl_805D4E40 = a0; }

}
#else
#if PSO_CLASS_PACKAGE == 0x80074C94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TObjCHTimeWinFv(void *arg0);
M2C_UNK init_timer__13TObjCHTimeWinFv(void *);
s32 TWindowCtrlMain__sub_8024CE58();
M2C_UNK TWindowCtrl__sub_8024A4B0(s32);

extern s32 lbl_805D4E40;

void run_task__13TObjCHTimeWinFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        TWindowCtrl__sub_8024A4B0(lbl_805D4E40);
        return;
    }
    if (TWindowCtrlMain__sub_8024CE58() == 1) {
        init_timer__13TObjCHTimeWinFv(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80074CF0
#include "types.h"

extern "C" {

void init_timer__13TObjCHTimeWinFv(void);
int TWindowCtrl__sub_8024A4B0(void*);
int create_alt_timer__11TWindowCtrlFv(void);

    extern int lbl_805D4E40;
void init_timer__13TObjCHTimeWinFv(void) { create_alt_timer__11TWindowCtrlFv(); TWindowCtrl__sub_8024A4B0((void*)(lbl_805D4E40)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80074D70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__13TObjCHTimeWinFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__13TObjCHTimeWin[];
extern void *lbl_805D2890;

void *__ct__13TObjCHTimeWinFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjCHTimeWin;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2890;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#endif
