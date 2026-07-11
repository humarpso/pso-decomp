#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1GiGue__sub_802CC350(void *arg0);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC4(void *, void *);
M2C_UNK TObjPlayer__sub_80017BA8(void *, s32, f32, f32, f32);
M2C_UNK fn_80011734(void *, M2C_UNK, f32);
M2C_UNK fn_80040B3C(void *, M2C_UNK);
M2C_UNK fn_80143504(void *);
M2C_UNK fn_80156698(void *);

extern const f32 TObjEneMe1GiGue__data_805DE660;
extern const f32 TObjEneMe1GiGue__data_805DE694;

void TObjEneMe1GiGue__sub_802CC350(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        TObjEneMe1GiGueBarrier__sub_80325CC4(arg0, arg0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        M2C_FIELD(arg0, s32 *, 0x384) = 0x2D;
        fn_80143504(arg0);
        fn_80011734(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        fn_80156698(arg0);
        return;
    case 2:
        TObjPlayer__sub_80017BA8(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8), M2C_FIELD(arg0, f32 *, 0x3E4), TObjEneMe1GiGue__data_805DE694, TObjEneMe1GiGue__data_805DE694);
        fn_80143504(arg0);
        fn_80011734(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        fn_80156698(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            fn_80040B3C(arg0, 0);
        }
    case -1:
        return;
    }
}

}
