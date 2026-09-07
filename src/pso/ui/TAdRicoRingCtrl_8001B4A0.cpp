#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_8001B8AC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8001B8AC_lbl_8043481C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8001B8AC___vt__15TAdRicoRingCtrl {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 fn_8001B424(void *, void *);
s32 set_scale4__15TAdRicoRingCtrlFPvf(int, f32);
u32 create__15TAdRicoRingCtrlFPv(int);
s32 TAdRicoRingCtrl__sub_8001BED0(int, f32);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8001B8AC_lbl_8043481C lbl_8043481C;
extern RecoveredGlobal_8001B8AC___vt__15TAdRicoRingCtrl __vt__15TAdRicoRingCtrl;
extern s32 lbl_805D261C;
extern s32 tl_04;
extern const f32 lbl_805D7E4C;
extern const f32 TAdRicoRingCtrl__data_805D7E50;
u8 *TAdRicoRingCtrl__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void start_fade__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0);
void start_anim__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);

extern const f32 lbl_805D7E4C;

typedef char RecoveredGlobal_8001B8AC_lbl_8043481C_size[sizeof(RecoveredGlobal_8001B8AC_lbl_8043481C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8001B8AC___vt__15TAdRicoRingCtrl_size[sizeof(RecoveredGlobal_8001B8AC___vt__15TAdRicoRingCtrl) == 0x18 ? 1 : -1];
u8 *TAdRicoRingCtrl__ct(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8001B8AC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001B8AC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001B8AC, sp10) == 0x8) ? 1 : -1];
    Stack_8001B8AC stack;
    u32 temp_r3;
    u32 temp_r3_2;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TAdRicoRingCtrl.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D261C;
    M2C_FIELD(arg0, u32 *, 0x1C) = create__15TAdRicoRingCtrlFPv((int) (tl_04));
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3 != 0U) {
        TAdRicoRingCtrl__sub_8001BED0((int) (temp_r3), (f32) (lbl_805D7E4C));
        set_scale4__15TAdRicoRingCtrlFPvf((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (f32) (lbl_805D7E4C));
    }
    M2C_FIELD(arg0, u32 *, 0x20) = create__15TAdRicoRingCtrlFPv((int) (tl_04));
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x20);
    if (temp_r3_2 != 0U) {
        TAdRicoRingCtrl__sub_8001BED0((int) (temp_r3_2), (f32) (lbl_805D7E4C));
        set_scale4__15TAdRicoRingCtrlFPvf((int) (M2C_FIELD(arg0, u32 *, 0x20)), (f32) (lbl_805D7E4C));
    }
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) TAdRicoRingCtrl__data_805D7E50;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D7E4C;
    stack.sp8 = M2C_FIELD(&lbl_8043481C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043481C.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043481C.value, s32 *, 8);
    fn_8001B424((void *) (arg0), (void *) (&stack.sp8));
    return arg0;
}

void start_fade__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0) {
    f32 temp_f0;

    if (TObjPlayer__sub_8001BEF8(arg0 + 0x2C, 1) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x2C, 1);
    }
    set_flags__10TObjPlayerFPvUi(arg0 + 0x2C, 2);
    if (lbl_805D7E4C != farg0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x1C)) / farg0);
        temp_f0 = (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x20)) / farg0;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x40) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x44) = temp_f0;
    }
}

extern const f32 lbl_805D7E4C;
extern const f32 lbl_805D7E54;

void start_anim__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0) {
    f32 temp_f0;

    if (TObjPlayer__sub_8001BEF8(arg0 + 0x2C, 2) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x2C, 2);
    }
    set_flags__10TObjPlayerFPvUi(arg0 + 0x2C, 1);
    if (lbl_805D7E4C != farg0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((lbl_805D7E54 - M2C_FIELD(arg0, f32 *, 0x1C)) / farg0);
        temp_f0 = (lbl_805D7E54 - M2C_FIELD(arg0, f32 *, 0x20)) / farg0;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x40) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x44) = temp_f0;
    }
}

}
