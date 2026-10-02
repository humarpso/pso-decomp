#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Data_800C82A4;
struct Gee_800C84C8 { u8 pad[0x494]; s32 count; void *arr[8]; };
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK TObjEneMe1Gee__sub_800CB4DC(void *);
M2C_UNK set_flag3c8_bit4__13TObjEneMe1GeeFPv(void *);
s32 TObjEneMe1Gee__sub_800CB5A0(void *, s32);
M2C_UNK TObjEneMe1Gee__sub_800CB764(void *, s32);
extern Data_800C82A4 TObjEneMe1Gee__data_8043BDB0;

void TObjEneMe1Gee__sub_800C84C8(u8 *arg0) {
    Gee_800C84C8 *self = (Gee_800C84C8 *) arg0;
    s32 j;
    s32 i;

    if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x10) {
        M2C_FIELD(arg0, s32 *, 0x3C8) &= ~0x10;
        M2C_FIELD(arg0, u32 *, 0x4B8) = 7;
    }
    switch (M2C_FIELD(arg0, u32 *, 0x4B8)) {
    case 1:
        TObjEneMe1Gee__sub_800CB764(arg0, 0);
        M2C_FIELD(arg0, u32 *, 0x4B8) = 2;
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
            M2C_FIELD(arg0, u32 *, 0x4B8) = 3;
            M2C_FIELD(arg0, s32 *, 0x3C8) &= ~8;
            copy_vec4__13TRaderMapCoreFPvPv(arg0 + 0x468, &TObjEneMe1Gee__data_8043BDB0);
            for (i = 0; i < self->count; i++) {
                if (TObjEneMe1Gee__sub_800CB5A0(self->arr[i], 0x200) != 0) {
                    set_flag3c8_bit4__13TObjEneMe1GeeFPv(self->arr[i]);
                }
            }
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3C8) & 8) {
            M2C_FIELD(arg0, u32 *, 0x4B8) = 4;
        }
        break;
    case 4:
        TObjEneMe1Gee__sub_800CB764(arg0, 2);
        M2C_FIELD(arg0, u32 *, 0x4B8) = 5;
        break;
    case 5:
        if (M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
            copy_vec4__13TRaderMapCoreFPvPv(arg0 + 0x468, &TObjEneMe1Gee__data_8043BDB0);
            M2C_FIELD(arg0, u32 *, 0x4B8) = 6;
            for (i = 0; i < self->count; i++) {
                if (TObjEneMe1Gee__sub_800CB5A0(self->arr[i], 0x100) != 0) {
                    set_flag3c8_bit4__13TObjEneMe1GeeFPv(self->arr[i]);
                }
            }
        }
        break;
    case 7:
        TObjEneMe1Gee__sub_800CB764(arg0, 4);
        M2C_FIELD(arg0, u32 *, 0x4B8) = 8;
        break;
    case 8:
        if (M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
            M2C_FIELD(arg0, u32 *, 0x4B8) = 9;
            copy_vec4__13TRaderMapCoreFPvPv(arg0 + 0x468, &TObjEneMe1Gee__data_8043BDB0);
            for (j = 0; j < self->count; j++) {
                TObjEneMe1Gee__sub_800CB4DC(self->arr[j]);
            }
            TObjEneMe1Gee__sub_800CB4DC(arg0);
        }
        break;
    case 9:
        break;
    }
}

}
