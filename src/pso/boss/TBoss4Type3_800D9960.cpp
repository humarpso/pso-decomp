#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800D9960_lbl_80500FA4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

typedef struct Vec_800D9ABC {
    f32 x, y, z;
} Vec_800D9ABC;

typedef struct Trail_800D9ABC {
    Vec_800D9ABC *buf;
    s32 segs;
    s32 len;
    f32 start;
    f32 end;
    f32 step;
} Trail_800D9ABC;

struct Vec_800D9994 { f32 x, y, z; };

struct Arg_800D9994 { s32 a; s32 b; s32 count; f32 start; u8 pad10[4]; f32 step; };

extern "C" {
extern RecoveredGlobal_800D9960_lbl_80500FA4 lbl_80500FA4;
void draw_trail_with_colors(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
f32 get_status_value_f32__23TObjEneMe1CanadinLeaderFv(f32);
Vec_800D9ABC *alloc_buffer__11TOBoss4RockFPv(int);
extern const f32 lbl_805DA3EC;
extern const f32 lbl_805DA3F0;
Trail_800D9ABC *TBoss4Type3__sub_800D9ABC(Trail_800D9ABC *arg0, s32 segs, f32 start, f32 end, f32 step);
void fn_800D97E8(void *, s32, M2C_UNK);
void TObjPlayer__sub_803D7B68(s32, f32);
void TObjPlayer__sub_803D8CD4(M2C_UNK);
void push_matrix(Vec_800D9994 *);
void pop_matrix();
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
extern Vec_800D9994 lbl_80500F80;
extern s32 lbl_805D5230;
extern s32 lbl_805D5234;
extern s32 lbl_805D5238;
extern s32 lbl_805D523C;
extern s32 lbl_805D5240;
extern const f32 lbl_805DA3EC;
void TBoss4Type3__sub_800D9994(Arg_800D9994 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

s32 *__dt__11TBoss4Type3FPvs(s32 *arg0, s16 arg1);
int free__11TOBoss4RockFUi(s32);
int __dl__FPv(s32 *);

typedef char RecoveredGlobal_800D9960_lbl_80500FA4_size[sizeof(RecoveredGlobal_800D9960_lbl_80500FA4) == 0xC ? 1 : -1];
void draw_trail_with_colors(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&lbl_80500FA4.value, s32 *, 0) = arg3;
    M2C_FIELD(&lbl_80500FA4.value, s32 *, 4) = arg4;
    TBoss4Type3__sub_800D9994((Arg_800D9994 *)(arg0), (s32)(arg1), (s32)(arg2), (s32)((s32) &lbl_80500FA4.value), (s32)(0));
}

void TBoss4Type3__sub_800D9994(Arg_800D9994 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 f;
    s32 i;
    set_global_flag__10TObjPlayerFv();
    lbl_80500F80.x = lbl_805DA3EC;
    lbl_80500F80.y = lbl_805DA3EC;
    lbl_80500F80.z = lbl_805DA3EC;
    lbl_805D5230 = arg0->a;
    lbl_805D5234 = arg0->b;
    lbl_805D523C = arg3;
    lbl_805D5240 = arg4;
    push_matrix(&lbl_80500F80);
    f = arg0->start;
    for (i = 0; i < arg0->count; i++) {
        lbl_805D5238 = 0;
        TObjPlayer__sub_803D8CD4(0);
        TObjPlayer__sub_803D7B68(arg2, f);
        fn_800D97E8(arg0, arg1, 0);
        f += arg0->step;
    }
    pop_matrix();
    clear_global_state__10TObjPlayerFv();
}

s32 *__dt__11TBoss4Type3FPvs(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(*arg0);
        *arg0 = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
Trail_800D9ABC *TBoss4Type3__sub_800D9ABC(Trail_800D9ABC *arg0, s32 segs, f32 start, f32 end, f32 step) {
    s32 n;
    s32 i;
    arg0->step = step;
    arg0->segs = segs;
    arg0->start = get_random_float__21TObjEneMe3ShinowaRealFv(start / arg0->step);
    arg0->end = get_status_value_f32__23TObjEneMe1CanadinLeaderFv(end / arg0->step);
    arg0->len = (s32)(lbl_805DA3F0 + (arg0->end - arg0->start));
    arg0->start *= arg0->step;
    arg0->end *= arg0->step;
    n = arg0->len * arg0->segs;
    arg0->buf = alloc_buffer__11TOBoss4RockFPv(n * 0xC);
    for (i = 0; i < n; i++) {
        arg0->buf[i].x = lbl_805DA3EC;
        arg0->buf[i].y = lbl_805DA3EC;
        arg0->buf[i].z = lbl_805DA3EC;
    }
    return arg0;
}

}
