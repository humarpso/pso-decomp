#include "types.h"

#include <stddef.h>
#include "pso/ui/TAdRicoRingCtrl.h"
struct Stack_8001B8AC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8001B8AC_lbl_8043481C {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8001B8AC___vt__15TAdRicoRingCtrl {
    s32 value;
    u8 remaining[0x14];
};

struct Obj_8001B4A0 { u8 pad0[0x1c]; u32 slot[2]; u8 pad24[4]; f32 f28; };

struct Obj_8001B824 { u8 pad[0x1c]; u32 slot[2]; };

struct Vt_8001B824 { s32 value; u8 remaining[0x14]; };

struct Obj_8001B534 { u8 pad0[0x1c]; u32 slot[2]; u8 pad24[4]; f32 f28; };

extern "C" {
s32 fn_8001B424(void *, void *);
s32 set_scale4__15TAdRicoRingCtrlFf(int, f32);
u32 create__15TAdRicoRingCtrlFPv(int);
s32 TAdRicoRingCtrl__sub_8001BED0(int, f32);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8001B8AC_lbl_8043481C lbl_8043481C;
extern RecoveredGlobal_8001B8AC___vt__15TAdRicoRingCtrl __vt__15TAdRicoRingCtrl;
extern s32 TAdRicoRingCtrl__class_name;
extern s32 tl_04;
extern const f32 lbl_805D7E4C;
extern const f32 TAdRicoRingCtrl__data_805D7E50;
u8 *TAdRicoRingCtrl__ct(u8 *arg0, s32 arg1);
extern const f32 lbl_805D7E4C;
extern const f32 TAdRicoRingCtrl__data_805D7E50;
extern const f32 lbl_805D7E48;
extern const f32 lbl_805D7E4C;
extern const f32 TAdRicoRingCtrl__data_805D7E50;
void TAdRicoRingCtrl__sub_8001B4A0(Obj_8001B4A0 *self, f32 x);
void *__dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(void *);
extern RecoveredGlobal_8001B8AC___vt__15TAdRicoRingCtrl __vt__15TAdRicoRingCtrl;
u8 *__dt__15TAdRicoRingCtrlFv(u8 *self, s16 flag);
extern const f32 lbl_805D7E4C;
extern const f32 lbl_805D7E54;
}

extern "C" {

s32 clear_flags__11TAdRicoRingFUl(void *, int);
s32 set_flags__10TObjPlayerFUl(void *, int);
s32 test_flags_any(void *, int);

extern const f32 lbl_805D7E4C;

typedef char RecoveredGlobal_8001B8AC_lbl_8043481C_size[sizeof(RecoveredGlobal_8001B8AC_lbl_8043481C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8001B8AC___vt__15TAdRicoRingCtrl_size[sizeof(RecoveredGlobal_8001B8AC___vt__15TAdRicoRingCtrl) == 0x18 ? 1 : -1];

void TAdRicoRingCtrl__sub_8001B4A0(Obj_8001B4A0 *self, f32 x) {
    s32 i;
    for (i = 0; i != 2; i++) {
        if (self->slot[i] != 0) {
            ((TAdRicoRingCtrl *)((u8 *)self->slot[i]))->start_anim(x);
            self->slot[i] = 0;
        }
    }
    f32 t = lbl_805D7E48 + x;
    if (lbl_805D7E4C != t) {
        self->f28 = TAdRicoRingCtrl__data_805D7E50 / t;
    }
}

void TAdRicoRingCtrl::start_fade_all(f32 x) {
    Obj_8001B534 *self = (Obj_8001B534 *)this;
    s32 i;
    for (i = 0; i != 2; i++) {
        if (self->slot[i] != 0) {
            ((TAdRicoRingCtrl *)((u8 *)self->slot[i]))->start_fade(x);
        }
    }
    if (lbl_805D7E4C != x) {
        self->f28 = lbl_805D7E54 / x;
    }
}

#pragma push
#pragma opt_common_subs off
void TAdRicoRingCtrl::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) (*(f32 *)((s8 *)arg0 + 0x24) + *(f32 *)((s8 *)arg0 + 0x28));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x24);
    if (temp_f1 < lbl_805D7E4C) {
        *(f32 *)((s8 *)arg0 + 0x24) = (f32) lbl_805D7E4C;
        return;
    }
    if (temp_f1 > (*(f32 *)&TAdRicoRingCtrl__data_805D7E50)) {
        *(f32 *)((s8 *)arg0 + 0x24) = (f32) (*(f32 *)&TAdRicoRingCtrl__data_805D7E50);
    }
}
#pragma pop

u8 *__dt__15TAdRicoRingCtrlFv(u8 *self, s16 flag) {
    s32 i;
    if (self != NULL) {
        *(void **)(self + 0x18) = &__vt__15TAdRicoRingCtrl;
        for (i = 0; i < 2; i++) {
            if (((Obj_8001B824 *)self)->slot[i] != 0) {
                queue_destruction__7TObjectFv((void *)((Obj_8001B824 *)self)->slot[i]);
            }
        }
        __dt__7TObjectFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

u8 *TAdRicoRingCtrl__ct(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8001B8AC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001B8AC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001B8AC, sp10) == 0x8) ? 1 : -1];
    Stack_8001B8AC stack;
    u32 temp_r3;
    u32 temp_r3_2;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__15TAdRicoRingCtrl.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TAdRicoRingCtrl__class_name;
    *(u32 *)((s8 *)arg0 + 0x1C) = create__15TAdRicoRingCtrlFPv((int) (tl_04));
    temp_r3 = *(u32 *)((s8 *)arg0 + 0x1C);
    if (temp_r3 != 0U) {
        TAdRicoRingCtrl__sub_8001BED0((int) (temp_r3), (f32) (lbl_805D7E4C));
        set_scale4__15TAdRicoRingCtrlFf((int) (*(u32 *)((s8 *)arg0 + 0x1C)), (f32) (lbl_805D7E4C));
    }
    *(u32 *)((s8 *)arg0 + 0x20) = create__15TAdRicoRingCtrlFPv((int) (tl_04));
    temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x20);
    if (temp_r3_2 != 0U) {
        TAdRicoRingCtrl__sub_8001BED0((int) (temp_r3_2), (f32) (lbl_805D7E4C));
        set_scale4__15TAdRicoRingCtrlFf((int) (*(u32 *)((s8 *)arg0 + 0x20)), (f32) (lbl_805D7E4C));
    }
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) TAdRicoRingCtrl__data_805D7E50;
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) lbl_805D7E4C;
    stack.sp8 = *(s32 *)((s8 *)(&lbl_8043481C.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_8043481C.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_8043481C.value) + 8);
    fn_8001B424((void *) (arg0), (void *) (&stack.sp8));
    return arg0;
}

void TAdRicoRingCtrl::start_fade(f32 farg0) {
    u8 *arg0 = (u8 *)this;
    f32 temp_f0;

    if (test_flags_any(arg0 + 0x2C, 1) != 0) {
        clear_flags__11TAdRicoRingFUl(arg0 + 0x2C, 1);
    }
    set_flags__10TObjPlayerFUl(arg0 + 0x2C, 2);
    if (lbl_805D7E4C != farg0) {
        *(f32 *)((s8 *)arg0 + 0x38) = (f32) ((*(f32 *)((s8 *)arg0 + 0x34) - *(f32 *)((s8 *)arg0 + 0x1C)) / farg0);
        temp_f0 = (*(f32 *)((s8 *)arg0 + 0x34) - *(f32 *)((s8 *)arg0 + 0x20)) / farg0;
        *(f32 *)((s8 *)arg0 + 0x3C) = temp_f0;
        *(f32 *)((s8 *)arg0 + 0x40) = temp_f0;
        *(f32 *)((s8 *)arg0 + 0x44) = temp_f0;
    }
}

extern const f32 lbl_805D7E4C;
extern const f32 lbl_805D7E54;

void TAdRicoRingCtrl::start_anim(f32 farg0) {
    u8 *arg0 = (u8 *)this;
    f32 temp_f0;

    if (test_flags_any(arg0 + 0x2C, 2) != 0) {
        clear_flags__11TAdRicoRingFUl(arg0 + 0x2C, 2);
    }
    set_flags__10TObjPlayerFUl(arg0 + 0x2C, 1);
    if (lbl_805D7E4C != farg0) {
        *(f32 *)((s8 *)arg0 + 0x38) = (f32) ((lbl_805D7E54 - *(f32 *)((s8 *)arg0 + 0x1C)) / farg0);
        temp_f0 = (lbl_805D7E54 - *(f32 *)((s8 *)arg0 + 0x20)) / farg0;
        *(f32 *)((s8 *)arg0 + 0x3C) = temp_f0;
        *(f32 *)((s8 *)arg0 + 0x40) = temp_f0;
        *(f32 *)((s8 *)arg0 + 0x44) = temp_f0;
    }
}

}
