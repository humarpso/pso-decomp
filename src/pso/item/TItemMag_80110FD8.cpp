#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct TItemMag_80111140 { u8 pad[0x1bd]; u8 a[4]; u8 b[4]; };

struct TItemMag_80111758 { u8 pad[0x1a8]; void *subs[2]; };

extern "C" {
M2C_UNK try_add_action__8TItemMagFii(void *, int);
M2C_UNK TItemMag__sub_801123F8(void *);
void TItemMag__sub_80111188(u8 *arg0, u8 arg1);
u8 get_field_ed__10TObjPlayerFPv(void *);
u8 *get_type__8TItemMagFPv(s32);
extern s32 TItemMag__data_805D54A8;
s32 TItemMag__sub_801117C0(void * _w0);
void *memcpy(void *dst, const void *src, u32 n);
void TItemMag__sub_80111140(TItemMag_80111140 *self, void *a, void *b);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
void set_flag_4__9TObjLukerFPv(void *);
void TItemMag__sub_80111758(TItemMag_80111758 *self, s32 on);
}

extern "C" {

int TItemMag__sub_801112B0(void);
int TItemMag__sub_801112B8(void);
s32 check_action_probability__8TItemMagFPvi(u8 *arg0, s32 arg1);
s32 rand__11TOBoss4RockFv();

extern M2C_UNK TItemMag__data_8043E558;
extern const f32 lbl_805DAB9C;
extern const f32 lbl_805DABAC;

s32 check_action_probability__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    s16 temp_r0;
    u8 temp_r0_2;
    u8 temp_r3;
    u8 var_r31;
    u8 var_r5;
    u8 *temp_r4;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x19A);
    if (temp_r0 < 0x1F) {
        var_r5 = 0;
    } else if (temp_r0 < 0x3D) {
        var_r5 = 0xF;
    } else if (temp_r0 < 0x51) {
        var_r5 = 0x19;
    } else if (temp_r0 < 0x65) {
        var_r5 = 0x1E;
    } else {
        var_r5 = 0x23;
    }
    temp_r4 = arg0 + arg1;
    var_r31 = 0;
    if ((u8) M2C_FIELD(temp_r4, u8 *, 0x1BD) != 0) {
        temp_r0_2 = M2C_FIELD(temp_r4, u8 *, 0x1C1);
        switch ((s32) temp_r0_2) {
        case 0:
            var_r31 = M2C_FIELD(arg0, u8 *, 0x1BC);
            break;
        case 1:
            var_r31 = M2C_FIELD(arg0, u8 *, 0x1BC) + var_r5;
            break;
        case 2:
            var_r31 = var_r5;
            break;
        case 3:
            temp_r3 = M2C_FIELD(arg0, u8 *, 0x1BC);
            if (temp_r3 > 0xAU) {
                var_r31 = temp_r3 - 0xA;
            } else {
                var_r31 = 0;
            }
            break;
        case 4:
            if (var_r5 > 0xAU) {
                var_r31 = var_r5 - 0xA;
            } else {
                var_r31 = 0;
            }
            break;
        }
        if ((u8) (s32) (lbl_805DABAC * (lbl_805DAB9C * (f32) rand__11TOBoss4RockFv())) < var_r31) {
            return 1;
        }
        goto block_29;
    }
block_29:
    return 0;
}

void TItemMag__sub_80111140(TItemMag_80111140 *self, void *a, void *b) {
    memcpy(self->a, a, 4);
    memcpy(self->b, b, 4);
}

void TItemMag__sub_80111188(u8 *arg0, u8 arg1) {
    u8 temp_r31;
    temp_r31 = get_field_ed__10TObjPlayerFPv((void *) (arg0));
    switch ((s32) arg1) {
    case 0:
        if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), u8 *, 0x88C) & 1) {
            try_add_action__8TItemMagFii((void *) (arg0), (int) (0x1D));
        } else {
            try_add_action__8TItemMagFii((void *) (arg0), (int) (0x21));
        }
        break;
    case 1:
        if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), u8 *, 0x88C) & 1) {
            try_add_action__8TItemMagFii((void *) (arg0), (int) (0x22));
        } else {
            try_add_action__8TItemMagFii((void *) (arg0), (int) (0x27));
        }
        break;
    case 2:
        try_add_action__8TItemMagFii((void *) (arg0), (int) (0x28));
        break;
    case 3:
        try_add_action__8TItemMagFii((void *) (arg0), (int) (0x29));
        break;
    case 4:
        try_add_action__8TItemMagFii((void *) (arg0), (int) (0x2A));
        break;
    case 5:
        try_add_action__8TItemMagFii((void *) (arg0), (int) (0x2B));
        break;
    }
    if (temp_r31 != get_field_ed__10TObjPlayerFPv((void *) (arg0))) {
        TItemMag__sub_801123F8((void *) (arg0));
    }
}

int TItemMag__sub_801112B0(void) { return 0; }

int TItemMag__sub_801112B8(void) { return 0; }

void TItemMag__sub_80111758(TItemMag_80111758 *self, s32 on) {
    s32 i;
    for (i = 0; i != 2; i++) {
        if (self->subs[i] != 0) {
            if (on) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(self->subs[i]);
            } else {
                set_flag_4__9TObjLukerFPv(self->subs[i]);
            }
        }
    }
}

s32 TItemMag__sub_801117C0(void * _w0) {
    u8 temp_r3;
    u8 var_r31;
    temp_r3 = get_field_ed__10TObjPlayerFPv((void *)(_w0));
    var_r31 = temp_r3;
    if (temp_r3 >= 0x42U) {
        var_r31 = 0x42;
    }
    if (var_r31 <= 0x42U) {
        return M2C_FIELD(M2C_FIELD(get_type__8TItemMagFPv(TItemMag__data_805D54A8), s32 *, 0x14), s8 *, var_r31);
    }
    return 0;
}

}
