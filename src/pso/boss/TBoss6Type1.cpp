#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802B5938_lbl_80470FFC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B5938_lbl_80471008 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B5970_lbl_80470FE4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B5970_lbl_80470FF0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B7E88_lbl_80470CEC {
    M2C_UNK value;
    u8 remaining[0x2C];
};

#include <stddef.h>
struct Stack_802B5140 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_802B5140_lbl_80470CD4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B5140_lbl_80470CE0 {
    const f32 value;
    u8 remaining[0x8];
};

struct Obj_802B4B34 { u8 pad[0x508]; s32 f508; s32 arr[1]; };

struct Obj_802B5E48 { u8 pad[0x498]; s32 f498; };

struct Obj_802B4D38 { u8 pad[0x4f8]; s32 arr[4]; };

struct Obj_802B5100 { u8 pad[0x3c]; f32 f3c; u8 pad2[0x424 - 0x40]; f32 f424; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Blk_802B8624 { s32 a; s32 b; s32 rest[14]; };

struct Obj_802B5DD4 { u8 pad[0x4e0]; s32 f4e0; s32 f4e4; };

extern "C" {
void TBoss6Type1__sub_802B4B04(u8 *arg0);
u8 TBoss6Type1__sub_802B5D9C(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const f32 lbl_805DE314;
extern const f32 TBoss6Type1__data_805DE318;
extern const f32 lbl_805DE31C;
void TBoss6Type1__sub_802B5598(void *arg0, void *arg1);
extern const f32 lbl_805DE354;
s32 TBoss6Type1__sub_802B5FDC(u8 *arg0);
extern const f32 lbl_805DE358;
s32 TBoss6Type1__sub_802B5FF4(u8 *arg0);
extern const f32 TBoss6Type1__data_805DE318;
s32 TBoss6Type1__sub_802B6060(u8 *arg0);
s32 rand__11TOBoss4RockFv();
extern const f32 lbl_805DE300;
extern f32 TBoss6Type1__data_805DE304;
s32 TBoss6Type1__sub_802B52E0(M2C_UNK arg0, s32 arg1, s32 arg2);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TBoss6Type1__sub_802B570C(u8 *arg0, u8 *arg1);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
extern const f32 lbl_805DE34C;
s32 TBoss6Type1__sub_802B5ED8(u8 *arg0);
s32 rand__11TOBoss4RockFv();
extern f32 TBoss6Type1__data_805DE304;
extern const f32 lbl_805DE308;
int TBoss6Type1__sub_802B5378(M2C_UNK arg0, int arg1, int arg2);
s32 TBoss6Type1__sub_802B57D4(void *, void *, void *, int);
extern RecoveredGlobal_802B5938_lbl_80470FFC lbl_80470FFC;
extern RecoveredGlobal_802B5938_lbl_80471008 lbl_80471008;
void TBoss6Type1__sub_802B5938(s32 arg0);
s32 TBoss6Type1__sub_802B57D4(void *, void *, void *, int);
extern RecoveredGlobal_802B5970_lbl_80470FE4 lbl_80470FE4;
extern RecoveredGlobal_802B5970_lbl_80470FF0 lbl_80470FF0;
void TBoss6Type1__sub_802B5970(s32 arg0);
u8 *dispatch_shared_handler_a__6TLobbyFPv(s32);
extern RecoveredGlobal_802B7E88_lbl_80470CEC lbl_80470CEC;
extern const f32 TBoss6Type1__data_805DE2D0;
void TBoss6Type1__sub_802B7E88(u8 *arg0);
extern const f32 TBoss6Type1__data_805DE2D0;
extern const s32 lbl_805DE3A8;
extern const s32 lbl_805DE3B0;
void TBoss6Type1__sub_802B7D50(u8 *arg0);
f32 TBoss6PlotFalz__sub_802AB9F0(f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern RecoveredGlobal_802B5140_lbl_80470CD4 lbl_80470CD4;
extern RecoveredGlobal_802B5140_lbl_80470CE0 lbl_80470CE0;
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE2E4;
extern const f32 lbl_805DE2F4;
extern const f32 lbl_805DE2F8;
extern const f32 lbl_805DE2FC;
void TBoss6Type1__sub_802B5140(s32 arg0, s32 arg1, s32 arg2);
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 lbl_805DE370;
void TBoss6Type1__sub_802B64B4(u8 *arg0);
extern const f32 TBoss6Type1__data_805DE2E4;
extern const f32 lbl_805DE374;
void TBoss6Type1__sub_802B64DC(u8 *arg0);
s32 request_destroy__11TBoss4Type2FUi(int);
void TBoss6Type1__sub_802B4B64(s32 arg0, s32 arg1);
void TBoss6Type1__sub_802B4B64(s32 arg0, s32 arg1);
void TBoss6Type1__sub_802B4CF4(s32 arg0);
s32 TBoss6Type1__sub_802B57D4(void *, void *, void *, int);
void TBoss6Type1__sub_802B5938(s32 arg0);
void TBoss6Type1__sub_802B5970(s32 arg0);
void TBoss6Type1__sub_802B59A8(void);
void TBoss6Type1__sub_802B59CC(void *);
void TBoss6Type1__sub_802B5AB0(void);
extern const f32 lbl_805DE348;
void TBoss6Type1__sub_802B5CB4(u8 *arg0);
extern const s32 lbl_805DE2D4;
void TBoss6Type1__sub_802B4B34(Obj_802B4B34 *self);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
int TBoss6Type1__sub_802B5E48(Obj_802B5E48 *self);
void TBoss6Type1__sub_802B4D38(Obj_802B4D38 *self);
extern const f32 lbl_805DE2F0;
extern const f32 lbl_805DE2EC;
void TBoss6Type1__sub_802B5100(Obj_802B5100 *self, s32 a, s32 b);
Blk_802B8624 *TBoss6Type1__sub_802B8624(Blk_802B8624 *d, Blk_802B8624 *s);
void TBoss6Type1__sub_802B5DD4(Obj_802B5DD4 *self);
}

extern "C" {

int TBoss6Type1__sub_802B4A70(void* p);
void TBoss6Type1__sub_802B4A90(void* p);
int TBoss6Type1__sub_802B4B14(void* p);
void TBoss6Type1__sub_802B59A8(void);
void TBoss6Type1__sub_802B5AB0(void);
void handle_6xa4_action__11TBoss6Type1FPv(void* p, u8 * _w1);
void init_parts__11TBoss6Type1FPv(void* p);
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0);
s32 is_ready__11TBoss6Type1FPv(void *arg0);
int is_time_up__11TBoss6Type1FPv(void *arg0);
void reset_fields_4e0__11TBoss6Type1FPv(void* p);
void set_flag_on_threshold__11TBoss6Type1FPv(void *arg0);
void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1);
s32 TBoss6PlotFalz__sub_802AAC74(s32);
int TBoss6Type1__sub_802B4A9C(void*);
M2C_UNK TBoss6Type1__sub_802B5AD4(f32);
int TBoss6Type1__sub_802B60E8(void*);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
int release_object__11TBoss6Type1FPv(void*);

int TBoss6Type1__sub_802B4A70(void* p) { return release_object__11TBoss6Type1FPv(p); }
void TBoss6Type1__sub_802B4A90(void* p) { *(s32*)((char*)p + 0x680) = 0; }

void TBoss6Type1__sub_802B4B04(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x508) = (s32) (M2C_FIELD(arg0, s32 *, 0x508) + 1);
}

int TBoss6Type1__sub_802B4B14(void* p) { return TBoss6Type1__sub_802B4A9C(p); }

void TBoss6Type1__sub_802B4B34(Obj_802B4B34 *self) {
    s32 i;
    self->f508 = 0;
    for (i = 0; i < lbl_805DE2D4; i++) self->arr[i] = 0;
}

#pragma push
#pragma opt_common_subs off
void TBoss6Type1__sub_802B4B64(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    temp_r3 = M2C_FIELD(temp_r31, u32 *, 0x4F8);
    if (temp_r3 != 0U) {
        request_destroy__11TBoss4Type2FUi((int) (temp_r3));
        M2C_FIELD(temp_r31, u32 *, 0x4F8) = 0U;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
typedef char RecoveredGlobal_802B5140_lbl_80470CD4_size[sizeof(RecoveredGlobal_802B5140_lbl_80470CD4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802B5140_lbl_80470CE0_size[sizeof(RecoveredGlobal_802B5140_lbl_80470CE0) == 0xC ? 1 : -1];

void TBoss6Type1__sub_802B4CF4(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        TBoss6Type1__sub_802B4B64(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 < 4);
}

void TBoss6Type1__sub_802B4D38(Obj_802B4D38 *self) {
    s32 i;
    for (i = 0; i < 4; i++) self->arr[i] = 0;
}

#pragma push
#pragma fp_contract on
void TBoss6Type1__sub_802B5100(Obj_802B5100 *self, s32 a, s32 b) {
    s32 h = b / 2;
    if (b <= 0 || a <= h) return;
    self->f3c += lbl_805DE2EC * ((lbl_805DE2F0 + self->f424) - self->f3c);
}
#pragma pop

void TBoss6Type1__sub_802B5140(s32 arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_802B5140, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802B5140, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802B5140, sp10) == 0x8) ? 1 : -1];
    Stack_802B5140 stack;
    f32 temp_f31;
    f32 var_f30;
    f32 var_f31;
    s32 temp_r31;
    var_f30 = TBoss6Type1__data_805DE2E4 - ((f32) arg1 / (f32) arg2);
    if (var_f30 < TBoss6Type1__data_805DE2D0) {
        var_f30 = TBoss6Type1__data_805DE2D0;
    } else if (var_f30 > TBoss6Type1__data_805DE2E4) {
        var_f30 = TBoss6Type1__data_805DE2E4;
    }
    temp_r31 = (s32) (lbl_805DE2F4 * var_f30);
    temp_f31 = TBoss8Dragon__sub_803D64C0((s32)((int) (0x6000)));
    var_f31 = TBoss8Dragon__sub_803D64C0((s32)((int) (temp_r31))) / temp_f31;
    if (temp_r31 > 0x4000) {
        var_f31 += (TBoss6Type1__data_805DE2E4 - var_f31) * TBoss6PlotFalz__sub_802AB9F0((var_f30 - lbl_805DE2F8) / lbl_805DE2FC);
    }
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (&lbl_80470CE0.value));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (&lbl_80470CD4.value));
    stack.sp8 *= var_f31;
    stack.spC *= var_f31;
    stack.sp10 *= var_f31;
    TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (&lbl_80470CD4.value));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&stack.sp8));
}
#pragma pop

s32 TBoss6Type1__sub_802B52E0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    var_r0 = (s32) (((f32) arg2 - lbl_805DE300) * ((*(const f32 *)&TBoss6Type1__data_805DE304) * (f32) rand__11TOBoss4RockFv()));
    if (var_r0 >= arg2) {
        var_r0 = 0;
    }
    return M2C_FIELD(arg1, M2C_UNK *, (var_r0 * 4));
}

#pragma push
#pragma fp_contract on
int TBoss6Type1__sub_802B5378(M2C_UNK arg0, int arg1, int arg2) {
    if (arg1 >= arg2) {
        return arg1;
    }
    return (int) (((lbl_805DE308 + ((f32) arg2 - (f32) arg1)) * ((*(const f32 *)&TBoss6Type1__data_805DE304) * (f32) rand__11TOBoss4RockFv())) + (f32) arg1);
}
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss6Type1__sub_802B5598(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 var_f31;
    s32 temp_r31;
    s32 var_r4;
    u32 temp_r5;
    u32 var_r5;
    {
        s32 k = M2C_FIELD(arg0, s32 *, 0x374) * 0x12D687;
        s8 c = M2C_FIELD(arg0, s8 *, 0x41C);
        temp_r5 = c * k;
    }
    var_r4 = ((temp_r5 & 3) * 0x1800) + 0x2000;
    var_r5 = (temp_r5 >> 3U) & 1;
    if ((temp_r5 >> 2U) & 1) {
        var_r4 = -var_r4;
    }
    var_f31 = lbl_805DE314;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x60) + var_r4;
    if ((s32) var_r5 != 0) {
        var_f31 = lbl_805DE31C;
    }
    temp_f1 = var_f31 * TBoss8Dragon__sub_803D64C0(temp_r31);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) TBoss6Type1__data_805DE318;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (var_f31 * TBoss8Dragon__sub_803D64DC(temp_r31));
}
#pragma pop

void handle_6xa4_action__11TBoss6Type1FPv(void* p, u8 * _w1) { TBoss6Type1__sub_802B570C((u8 *)((char*)p + 0x1), (u8 *)(_w1)); }

extern const f32 TBoss6Type1__data_805DE2D0;

void TBoss6Type1__sub_802B570C(u8 *arg0, u8 *arg1) {
  f32 temp_f31;
  f32 temp_f30;
  s32 temp_r31;
  temp_r31 = ((s8) (*((u8 *) (((s8 *) arg0) + 0)))) << 8;
  temp_f31 = (f32) (((s8) (*((u8 *) (((s8 *) arg0) + 1)))) * 0xA);
  temp_f30 = (f32) (((s8) (*((u8 *) (((s8 *) arg0) + 2)))) * 0xA);
  *((f32 *) (((s8 *) arg1) + 0)) = (f32) (temp_f31 * TBoss8Dragon__sub_803D64C0(temp_r31));
  *((f32 *) (((s8 *) arg1) + 8)) = (f32) (temp_f31 * TBoss8Dragon__sub_803D64DC((s32)(temp_r31)));
  *((f32 *) (((s8 *) arg1) + 4)) = temp_f30;
}

typedef char RecoveredGlobal_802B5938_lbl_80470FFC_size[sizeof(RecoveredGlobal_802B5938_lbl_80470FFC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802B5938_lbl_80471008_size[sizeof(RecoveredGlobal_802B5938_lbl_80471008) == 0xC ? 1 : -1];
void TBoss6Type1__sub_802B5938(s32 arg0) {
    TBoss6Type1__sub_802B57D4((void *) (arg0), (void *) (&lbl_80470FFC.value), (void *) (&lbl_80471008.value), (int) (0xFFFF));
}

typedef char RecoveredGlobal_802B5970_lbl_80470FE4_size[sizeof(RecoveredGlobal_802B5970_lbl_80470FE4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802B5970_lbl_80470FF0_size[sizeof(RecoveredGlobal_802B5970_lbl_80470FF0) == 0xC ? 1 : -1];
void TBoss6Type1__sub_802B5970(s32 arg0) {
    TBoss6Type1__sub_802B57D4((void *) (arg0), (void *) (&lbl_80470FE4.value), (void *) (&lbl_80470FF0.value), (int) (0xFFFF));
}

void TBoss6Type1__sub_802B59A8(void) {
    TBoss6Type1__sub_802B5AD4(TBoss6Type1__data_805DE2D0);
}

extern const f32 TBoss6Type1__data_805DE32C;

void TBoss6Type1__sub_802B5AB0(void) {
    TBoss6Type1__sub_802B5AD4(TBoss6Type1__data_805DE32C);
}

void TBoss6Type1__sub_802B5CB4(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x374);
    switch (temp_r0) {
    case 1:
    case 2:
    case 4:
    case 24:
    case 25:
        TBoss6Type1__sub_802B5AB0();
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        TBoss6Type1__sub_802B5970((s32) arg0);
        break;
    case 22:
        TBoss6Type1__sub_802B59CC(arg0);
        break;
    case 21:
        TBoss6Type1__sub_802B59A8();
        break;
    case 26:
        TBoss6Type1__sub_802B5AB0();
        break;
    case 30:
    case 31:
        TBoss6Type1__sub_802B5970((s32) arg0);
        break;
    case 27:
        TBoss6Type1__sub_802B5970((s32) arg0);
        break;
    case 32:
        TBoss6Type1__sub_802B5970((s32) arg0);
        break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 34:
    case 35:
    case 36:
        TBoss6Type1__sub_802B5938((s32) arg0);
        break;
    case 37:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x410) > (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x40C) - lbl_805DE348)) {
            TBoss6Type1__sub_802B5938((s32) arg0);
            break;
        }
        break;
    default:
        TBoss6Type1__sub_802B57D4((void *)((s32) arg0), (void *)(NULL), (void *)(NULL), (int)(0xFFFF));
        break;
    }
}

u8 TBoss6Type1__sub_802B5D9C(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4E0);
    if ((temp_r5 <= 0) || (temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4), ((temp_r0 < 0) != 0))) {
        return 1U;
    }
    return (u8) (temp_r5 <= temp_r0);
}

void TBoss6Type1__sub_802B5DD4(Obj_802B5DD4 *self) {
    if (self->f4e0 <= 0 || self->f4e4 < 0) return;
    self->f4e4++;
}

void reset_fields_4e0__11TBoss6Type1FPv(void* p) { *(s32*)((char*)p + 0x4e0) = 0; *(s32*)((char*)p + 0x4e4) = 0; }
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0) {
    return TBoss6PlotFalz__sub_802AAC74(M2C_FIELD(arg0, s32 *, 0x3F8)) > 0x20;
}

int TBoss6Type1__sub_802B5E48(Obj_802B5E48 *self) {
    return calc_field4b0_delta__11TBoss6Type1FPv(self) >= self->f498 ? 1 : 0;
}

s32 is_ready__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) && (calc_field4b0_delta__11TBoss6Type1FPv(arg0) >= (s32) M2C_FIELD(arg0, s32 *, 0x48C))) {
        return 1;
    }
    return 0;
}

s32 TBoss6Type1__sub_802B5ED8(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = (s32) (M2C_FIELD(arg0, f32 *, 0x4B4) * (f32) M2C_FIELD(arg0, s32 *, 0x494));
    if (calc_field4b0_delta__11TBoss6Type1FPv(arg0) >= temp_r31) {
        M2C_FIELD(arg0, f32 *, 0x4B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x4B4) * lbl_805DE34C);
        return 1;
    }
    return 0;
}

int is_time_up__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        return 0;
    }
    return calc_field4b0_delta__11TBoss6Type1FPv(arg0) >= (s32) M2C_FIELD(arg0, s32 *, 0x490) ? 1 : 0;
}

extern f32 lbl_805DE350;

void set_flag_on_threshold__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x4AC) == 0) && (M2C_FIELD(arg0, f32 *, 0x4D8) < lbl_805DE350)) {
        M2C_FIELD(arg0, s32 *, 0x4AC) = 1;
    }
}

    extern const float TBoss6Type1__data_805DE344;

s32 TBoss6Type1__sub_802B5FDC(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805DE354;
}

s32 TBoss6Type1__sub_802B5FF4(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) > lbl_805DE358;
}

s32 TBoss6Type1__sub_802B6060(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) > TBoss6Type1__data_805DE318;
}

void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1) { *(float*)((char*)a1 + 0x4) = TBoss6Type1__data_805DE344; }

void init_parts__11TBoss6Type1FPv(void* p) { set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5d8)); set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5e4)); set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5f0)); TBoss6Type1__sub_802B60E8(p); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C_boss6_1 { u8 bytes[0xc]; };

struct Stack_802B7D74_boss6_1
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

#include <stddef.h>
struct Stack_802B9204_boss6_1 {
    M2C_UNK sp8;
    s8 spC;
    u8 trailing_storage[0xF];
};

extern "C" {
u8 * TBoss6Type1__sub_802B96C0(s32 arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_800F5E08();
extern const f32 lbl_805DE3D0;
void render_shadows__11TBoss6Type1Fv(u8 *arg0);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 TObjPlayer__sub_80141F84(int, int);
s32 TObjPlayer__sub_801423A4(int, int, int);
f32 TBoss6Kakusan__sub_803D8BD8(void *, f32);
extern const f64 TBoss6Type1__data_80471038;
extern const f32 TBoss6Type1__data_805DE2D0;
extern const f32 TBoss6Type1__data_805DE310;
void TBoss6Type1__sub_802B7D74(u8 *arg0);
void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1);
int is_idle__11TBoss6Type1FPv(void* p);
void step_and_send_60__11TBoss6Type1FPv(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);
void TBoss6Type1__sub_802B9204(u8 *arg0, s8 arg1);
}

extern "C" {

void TBoss6Type1__vt42(void);
void TBoss6Type1__vt43(void);
void TBoss6Type1__vt44(void);
void TBoss6Type1__vt45(void);
void TBoss6Type1__vt46(void);
void TBoss6Type1__vt47(void);
void TBoss6Type1__vt48(void);
void TBoss6Type1__vt60(u8 *arg0);
void TBoss6Type1__vt61(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);
s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0);
void copy_transform__11TBoss6Type1FPvPv(void* p, void* q);
s32 create__11TBoss6Type1Fi(s32 arg0);
void do_attack__11TBoss6Type1FPv(void *arg0);
void enable_parts__11TBoss6Type1FPv(void *arg0);
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p);
int is_idle__11TBoss6Type1FPv(void* p);
void latch_phase_counter__11TBoss6Type1FPv(void *arg0);
void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1);
int read_be16_field2__11TBoss6Type1FPv(void* p);
void reset_param__11TBoss6Type1FPv(void *arg0);
void set_child_flags__11TBoss6Type1FPv(void *arg0);
void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1);
void step_and_send_60__11TBoss6Type1FPv(void* p);
void update_parts_flags__11TBoss6Type1FPv(void *arg0);
void update_position__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, void *);
s32 TBoss6Type1__ct(s32, s32, s32);
M2C_UNK TBoss6Type1__sub_802B7944();
int TBoss6Type1__sub_802B865C(void*, void*);
M2C_UNK TBoss6Type1__sub_802B8EE0(void *, M2C_UNK *);
M2C_UNK TBoss6Type1__sub_802B909C(void *, M2C_UNK *);
M2C_UNK TBoss6Type1__sub_802B9178(void *, M2C_UNK, M2C_UNK *);
int TLobby__send_and_handle_60(void*);
s32 TObjControl__ct(s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 rand__11TOBoss4RockFv();
int read_be16_field2__10TObjPlayerFPv(void*);

extern const f32 TBoss6Type1__data_805DE2D0;

void reset_param__11TBoss6Type1FPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2D0;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TBoss6Type1__sub_802B64B4(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) (M2C_FIELD(arg0, f32 *, 0x4DC) + lbl_805DE370);
    if (M2C_FIELD(arg0, f32 *, 0x4DC) < TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2D0;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
void TBoss6Type1__sub_802B64DC(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) (M2C_FIELD(arg0, f32 *, 0x4DC) + lbl_805DE374);
    if (M2C_FIELD(arg0, f32 *, 0x4DC) > TBoss6Type1__data_805DE2E4) {
        M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2E4;
    }
}
#pragma pop

void enable_parts__11TBoss6Type1FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x70) | 1);
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_2, s32 *, 0x9C) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x9C) | 1);
        temp_r4_3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_3, s32 *, 0xC8) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 0xC8) | 1);
        temp_r4_4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_4, s32 *, 0xF4) = (s32) (M2C_FIELD(temp_r4_4, s32 *, 0xF4) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x120) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x120) | 1);
    }
}

void set_child_flags__11TBoss6Type1FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x44) | 1);
    }
}

void update_parts_flags__11TBoss6Type1FPv(void *arg0) {
    TBoss6Type1__sub_802B7944();
    if (M2C_FIELD(arg0, s32 *, 0x418) & 1) {
        set_child_flags__11TBoss6Type1FPv((void *)(arg0));
    }
    if (M2C_FIELD(arg0, s32 *, 0x418) & 2) {
        enable_parts__11TBoss6Type1FPv((void *)(arg0));
    }
}

extern const f32 lbl_805DE3A0;
extern const f32 lbl_805DE3A4;

void update_position__11TBoss6Type1FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x438) != 0) {
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A0);
}

typedef struct Stack_802B7D74_boss6_1 Stack_802B7D74_boss6_1;

void TBoss6Type1__sub_802B7D50(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4E8) = (f32) TBoss6Type1__data_805DE2D0;
    M2C_FIELD(arg0, s32 *, 0x4EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x4F0) = (s32) lbl_805DE3A8;
    M2C_FIELD(arg0, s32 *, 0x4F4) = (s32) lbl_805DE3B0;
}

void TBoss6Type1__sub_802B7D74(u8 *arg0) {
  Stack_802B7D74_boss6_1 stack;
  M2C_UNK var_r5;
  int new_var;
  f32 temp_f1;
  s32 var_r31;
  s32 var_r4;
  var_r31 = 0;
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x438)))) != 0)
  {
    var_r31 = 0x8000;
  }
  if (TObjPlayer__sub_80141F84((int) (*((s32 *) (((s8 *) arg0) + 0x5C))), (int) var_r31) < 0x666)
  {
    *((s32 *) (((s8 *) arg0) + 0x5C)) = var_r31;
  }
  else
  {
    *((s32 *) (((s8 *) arg0) + 0x5C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x5C))) + 0x666);
  }
  stack.sp8 = -(*((f32 *) (((s8 *) arg0) + 0x38)));
  temp_f1 = -(*((f32 *) (((s8 *) arg0) + 0x40)));
  stack.spC = (*(const f32 *)&TBoss6Type1__data_805DE2D0);
  stack.sp10 = temp_f1;
  if (!(TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8), (f32) temp_f1) <= TBoss6Type1__data_805DE310))
  {
    var_r4 = (s32) (TBoss6Type1__data_80471038 * get_ad_end_text_start__10TObjPlayerFv((f64) stack.sp8, (f64) stack.sp10));
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x438)))) != 0)
    {
      var_r4 += 0x8000;
    }
    var_r5 = 0x1555;
    new_var = (int) (*((s32 *) (((s8 *) arg0) + 0x60)));
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x414)))) == 0)
    {
      var_r5 = 0x1B4;
    }
    *((s32 *) (((s8 *) arg0) + 0x60)) = TObjPlayer__sub_801423A4(new_var, (int) var_r4, (int) var_r5);
  }
}

s32 calc_field4b0_delta__11TBoss6Type1FPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4B0) - M2C_FIELD(arg0, s16 *, 0x32C);
}

void latch_phase_counter__11TBoss6Type1FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4B0) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}

typedef char RecoveredGlobal_802B7E88_lbl_80470CEC_size[sizeof(RecoveredGlobal_802B7E88_lbl_80470CEC) == 0x30 ? 1 : -1];
void TBoss6Type1__sub_802B7E88(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(dispatch_shared_handler_a__6TLobbyFPv(0x2B));
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) M2C_FIELD(temp_r3, f32 *, 0);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x47C) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x47C) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x480) = (s32) M2C_FIELD(temp_r3, f32 *, 8);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x480) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x480) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 4);
    }
    M2C_FIELD(arg0, s32 *, 0x484) = (s32) M2C_FIELD(temp_r3, f32 *, 0xC);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x484) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x484) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 8);
    }
    M2C_FIELD(arg0, s32 *, 0x488) = (s32) M2C_FIELD(temp_r3, f32 *, 0x10);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x488) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x488) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0xC);
    }
    M2C_FIELD(arg0, s32 *, 0x4A4) = (s32) M2C_FIELD(temp_r3, f32 *, 0x14);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x4A4) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x4A4) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0x28);
    }
    M2C_FIELD(arg0, s32 *, 0x48C) = (s32) M2C_FIELD(temp_r3, s32 *, 0x18);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48C) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x48C) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0x10);
    }
    M2C_FIELD(arg0, s32 *, 0x490) = (s32) M2C_FIELD(temp_r3, s32 *, 0x1C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x490) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x490) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0x14);
    }
    M2C_FIELD(arg0, s32 *, 0x494) = (s32) M2C_FIELD(temp_r3, s32 *, 0x20);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x494) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x494) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0x18);
    }
    M2C_FIELD(arg0, s32 *, 0x498) = (s32) M2C_FIELD(temp_r3, s32 *, 0x24);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x498) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x498) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0x1C);
    }
    M2C_FIELD(arg0, s32 *, 0x49C) = (s32) M2C_FIELD(temp_r3, s32 *, 0x28);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x49C) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x49C) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0x20);
    }
    M2C_FIELD(arg0, s32 *, 0x4A0) = (s32) M2C_FIELD(temp_r3, s32 *, 0x2C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4A0) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x4A0) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0x24);
    }
    M2C_FIELD(arg0, s32 *, 0x4A8) = (s32) M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2F), f32 *, 0x14);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x4A8) <= TBoss6Type1__data_805DE2D0) {
        M2C_FIELD(arg0, s32 *, 0x4A8) = (s32) M2C_FIELD(&lbl_80470CEC.value, s32 *, 0x2C);
    }
}

void copy_transform__11TBoss6Type1FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

Blk_802B8624 *TBoss6Type1__sub_802B8624(Blk_802B8624 *d, Blk_802B8624 *s) {
    *d = *s;
    return d;
}

void render_shadows__11TBoss6Type1Fv(u8 *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DE3D0) {
        TObjPlayer__sub_800F5E08();
    }
}

void TBoss6Type1__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 40) { TBoss6Type1__sub_802B865C(p, (void*)40); } }

extern const f32 TBoss6Type1__data_805DE2E4;

void TBoss6Type1__vt60(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) TBoss6Type1__data_805DE2E4;
    TBoss3Volopt__sub_8022675C(0x39E01, arg0 + 0x584, 0, 1, arg0);
}

void do_attack__11TBoss6Type1FPv(void *arg0) {
    M2C_UNK sp8;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        TBoss6Type1__sub_802B909C(arg0, &sp8);
    } else {
        TBoss6Type1__sub_802B8EE0(arg0, &sp8);
    }
    M2C_FIELD(arg0, s32 *, 0x438) = 1;
    TBoss6Type1__sub_802B9178(arg0, 2, &sp8);
}

void TBoss6Type1__sub_802B9204(u8 *arg0, s8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_802B9204_boss6_1, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802B9204_boss6_1, spC) == 0x4) ? 1 : -1];
    Stack_802B9204_boss6_1 stack;
    if (((s32)is_idle__11TBoss6Type1FPv((void*)((int) (M2C_FIELD(arg0, s32 *, 0x3F8))))) != 0) {
        build_6xA4_olga_flow_boss_actions((void*)((void *) (&stack.sp8)));
        set_sync_data__11TBoss6Type1FPvPv((void *) (arg0), (void *) (&stack.sp8));
        stack.spC = arg1;
        step_and_send_60__11TBoss6Type1FPv((void*)((void *) (&stack.sp8)));
    }
}

void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x438) = (s32) (s8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x414) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0x41C) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
}

extern M2C_UNK TBoss6Type1__data_80471040;
extern f32 TBoss6Type1__data_805DE304;
extern f32 lbl_805DE3EC;

void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    M2C_FIELD(arg1, s8 *, 8) = (s8) M2C_FIELD(arg0, s32 *, 0x438);
    M2C_FIELD(arg1, s8 *, 9) = (s8) M2C_FIELD(arg0, s32 *, 0x414);
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) (lbl_805DE3EC * (TBoss6Type1__data_805DE304 * (f32) rand__11TOBoss4RockFv()));
}

extern s32 tl_04;

u8 * TBoss6Type1__sub_802B96C0(s32 arg0, s32 arg1) {
    *(M2CCopy_C_boss6_1 *)(arg0) = *(const M2CCopy_C_boss6_1 *)(arg1);
    return (u8 *)arg0;
}

s32 create__11TBoss6Type1Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x684);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Type1__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void TBoss6Type1__vt42(void) {  }
void TBoss6Type1__vt43(void) {  }
void TBoss6Type1__vt44(void) {  }
void TBoss6Type1__vt45(void) {  }
void TBoss6Type1__vt46(void) {  }
void TBoss6Type1__vt47(void) {  }
void TBoss6Type1__vt48(void) {  }
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p) { return (char*)p + 0x388; }
int is_idle__11TBoss6Type1FPv(void* p) { return *(u32*)((char*)p + 0x374) == 0; }
int read_be16_field2__11TBoss6Type1FPv(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void step_and_send_60__11TBoss6Type1FPv(void* p) { read_be16_field2__11TBoss6Type1FPv((void*)(p)); TLobby__send_and_handle_60(p); }
void build_6xA4_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 164; *(u8*)((char*)p + 0x1) = 5; }

}
