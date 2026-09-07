#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80198DCC {
    M2C_UNK sp8;
    s32 spC;
    s32 sp10;
    f32 sp14;
    f32 sp18;
    s8 sp1C;
    u8 trailing_storage[0x3];
};

struct RecoveredGlobal_80198DCC_lbl_8050E208 { M2C_UNK value; u8 remaining[0x1AC]; };
typedef char RecoveredGlobal_80198DCC_lbl_8050E208_size[sizeof(RecoveredGlobal_80198DCC_lbl_8050E208) == 0x1B0 ? 1 : -1];

struct RecoveredGlobal_80198CF8_lbl_804B8DE8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK send_gogo_ball__12TWindowTimerFi(void *);
M2C_UNK TWindowTimer__sub_8019A6F8(void *);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern RecoveredGlobal_80198DCC_lbl_8050E208 lbl_8050E208;
void TWindowTimer__sub_80198DCC(u8 *arg0, s32 arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804B8DE8[];
extern const f32 lbl_805DBF50;
u8 *TWindowTimer__sub_80198CF8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5);
}

extern "C" {

void *TWindowTimer__sub_80198C84(void *arg0, s16 arg1);
void TWindowTimer__sub_80198D98(void);
M2C_UNK TWindowTimer__sub_80199410(void *, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void * __nw__7TObjectFUl(M2C_UNK);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804B8DE8[];

void *TWindowTimer__sub_80198C84(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B8DE8;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_03;

typedef char RecoveredGlobal_80198CF8_lbl_804B8DE8_size[sizeof(RecoveredGlobal_80198CF8_lbl_804B8DE8) == 0x18 ? 1 : -1];
u8 *TWindowTimer__sub_80198CF8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    __ct__7TObjectFP7TObject(arg0, arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80198CF8_lbl_804B8DE8 *)&lbl_804B8DE8).value;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg0 + 0x1C);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) - lbl_805DBF50);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = arg2;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = arg3;
    M2C_FIELD(arg0, s32 *, 0x54) = arg4;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    return arg0;
}

void TWindowTimer__sub_80198D98(void) {
    void *obj = __nw__7TObjectFUl(0x20);
    if (obj != 0) {
        TWindowTimer__sub_80199410(obj, tl_03);
    }
}
void TWindowTimer__sub_80198DCC(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_80198DCC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80198DCC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80198DCC, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80198DCC, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80198DCC, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80198DCC, sp1C) == 0x14) ? 1 : -1];
    Stack_80198DCC stack;
    TWindowTimer__sub_8019A6F8((void *) (&stack.sp8));
    stack.spC = arg2;
    stack.sp10 = arg1;
    stack.sp14 = M2C_FIELD(arg0, f32 *, 0);
    stack.sp18 = M2C_FIELD(arg0, f32 *, 8);
    if (is_on_current_screen__11TCameraCtrlFPv((void *) ((u8 *)&lbl_8050E208.value + 0x20), (int) (4)) != 0) {
        TBoss3Volopt__sub_8022675C((int) (0x4001A311), (void *) (arg0), (int) (0), (int) (0));
        stack.sp1C = 1;
    } else {
        TBoss3Volopt__sub_8022675C((int) (0x4002A600), (void *) (arg0), (int) (0), (int) (0));
        stack.sp1C = 0;
    }
    send_gogo_ball__12TWindowTimerFi((void *) (&stack.sp8));
}

}
