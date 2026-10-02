#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80235E9C {
    M2C_UNK sp8;
    u8 trailing_storage[0xC];
};

struct RecoveredGlobal_80235E9C_lbl_804CCAA8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80235F60_lbl_804CCAA8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Vec_80235C44 { f32 x, y, z; };

struct Col_80235C44 { f32 a, r, g, b; };

struct Light_80235C44 {
    u8 task[0x1C];
    s32 duration;
    u32 phase;
    Col_80235C44 color;
    Vec_80235C44 desired;
    Vec_80235C44 direction;
    s32 age;
    f32 step;
    s32 source;
    f32 peak;
    f32 intensity;
    u16 actor;
    u16 pad62;
};

struct Base_80235C44 { u8 pad[0x1C]; f32 f1c; f32 f20; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_getField1c(int);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TObjLight__sub_801344A4(void *, void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804CCAA8[];
u8 *TObjLight__sub_80235E9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2, M2C_UNK arg_sp0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_getField1c(int);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TObjLight__sub_801344A4(void *, void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804CCAA8[];
extern const f32 lbl_805DC888;
u8 *TObjPlayer__sub_80235F60(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u8 *arg4, u8 *arg5, f32 farg0);
s32 obj_getField1c(int);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK TObjLight__sub_800827E0(void *, void *, f32);
s32 TObjLight__sub_801344A4(void *, void *, int);
M2C_UNK TObjLight__sub_80134548(int, f32, f32);
M2C_UNK TObjLight__sub_801345F8(int, void *, void *);
M2C_UNK TEffStarLightChild__sub_80141FBC(void *, void *, void *, f32);
u32 get_player_by_client_id(int);
extern Base_80235C44 TObjLight__data_80506320;
extern const f32 lbl_805DC890;
extern const f32 lbl_805DC894;
void TObjLight__sub_80235C44(Light_80235C44 *arg0);
}

extern "C" {

void *TObjLight__sub_80235E44(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CCAA8[];

#pragma push
#pragma fp_contract on
void TObjLight__sub_80235C44(Light_80235C44 *arg0) {
    Vec_80235C44 baseDir;
    Col_80235C44 baseColor;
    Col_80235C44 unused;
    f32 mid;
    f32 frac;
    if (get_player_by_client_id(arg0->actor) == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    TObjLight__sub_801344A4(&baseDir, &baseColor, arg0->actor);
    mid = lbl_805DC890 * (f32) arg0->duration;
    if (arg0->age < (s32) mid) {
        f32 amb1;
        f32 inten1;
        frac = (f32) arg0->age / mid;
        amb1 = frac * (arg0->peak - TObjLight__data_80506320.f20) + TObjLight__data_80506320.f20;
        inten1 = frac * (arg0->intensity - TObjLight__data_80506320.f1c) + TObjLight__data_80506320.f1c;
        TObjLight__sub_80134548((u16) obj_getField1c(arg0->source), inten1, amb1);
        copy_vec4__13TRaderMapCoreFPvPv(&unused, &baseColor);
        TEffStarLightChild__sub_80141FBC(&arg0->direction, &arg0->desired, &arg0->direction, arg0->step);
        TObjLight__sub_800827E0(&unused, &arg0->color, lbl_805DC894);
    } else {
        f32 amb2;
        f32 inten2;
        frac = ((f32) arg0->age - mid) / mid;
        amb2 = frac * (TObjLight__data_80506320.f20 - arg0->peak) + arg0->peak;
        inten2 = frac * (TObjLight__data_80506320.f1c - arg0->intensity) + arg0->intensity;
        TObjLight__sub_80134548((u16) obj_getField1c(arg0->source), inten2, amb2);
        TEffStarLightChild__sub_80141FBC(&arg0->direction, &baseDir, &arg0->direction, arg0->step);
        TObjLight__sub_800827E0(&arg0->color, &baseColor, lbl_805DC894);
    }
    TObjLight__sub_801345F8((u16) obj_getField1c(arg0->source), &arg0->direction, &arg0->color);
    arg0->age++;
    if (arg0->duration < arg0->age) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

void *TObjLight__sub_80235E44(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCAA8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80235E9C_lbl_804CCAA8_size[sizeof(RecoveredGlobal_80235E9C_lbl_804CCAA8) == 0x18 ? 1 : -1];
u8 *TObjLight__sub_80235E9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2, M2C_UNK arg_sp0) {
    Stack_80235E9C stack;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg5));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80235E9C_lbl_804CCAA8 *)&lbl_804CCAA8).value;
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0x24), (void *) (arg1));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x34), (void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, f32 *, 0x50) = farg0;
    M2C_FIELD(arg0, s32 *, 0x54) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, f32 *, 0x58) = farg1;
    M2C_FIELD(arg0, f32 *, 0x5C) = farg2;
    M2C_FIELD(arg0, u16 *, 0x60) = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x54)));
    TObjLight__sub_801344A4((void *) (arg0 + 0x40), (void *) (&stack.sp8), (int) ((s32) M2C_FIELD(arg0, u16 *, 0x60)));
    return arg0;
}
typedef char RecoveredGlobal_80235F60_lbl_804CCAA8_size[sizeof(RecoveredGlobal_80235F60_lbl_804CCAA8) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_80235F60(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u8 *arg4, u8 *arg5, f32 farg0) {
    M2C_UNK sp8;
    __ct__7TObjectFP7TObject(arg0, arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80235F60_lbl_804CCAA8 *)&lbl_804CCAA8).value;
    copy_vec4__13TRaderMapCoreFPvPv(arg0 + 0x24, arg1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, arg2);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, f32 *, 0x50) = farg0;
    M2C_FIELD(arg0, u8 **, 0x54) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805DC888;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805DC888;
    M2C_FIELD(arg0, u16 *, 0x60) = ((u16)obj_getField1c((int)(M2C_FIELD(arg0, u8 **, 0x54))));
    TObjLight__sub_801344A4((void *)((s32) (arg0 + 0x40)), (void *)((s32) &sp8), (int)((u32) M2C_FIELD(arg0, u16 *, 0x60)));
    return arg0;
}

}
