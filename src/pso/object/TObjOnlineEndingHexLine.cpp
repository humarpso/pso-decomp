#include "pso/TObjOnlineEndingHexLine.h"

TObjOnlineEndingHexLine::~TObjOnlineEndingHexLine() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Param_802E5CB0 { f32 a; f32 b; s32 c; f32 d; };
typedef char Param_802E5CB0_size[sizeof(Param_802E5CB0) == 0x10 ? 1 : -1];

extern "C" {
void TObjOnlineEndingHexLine__sub_802E530C(void *);
extern Param_802E5CB0 TObjOnlineEndingHexLine__data_804E3AA8;
extern Param_802E5CB0 lbl_804E3AB8;
extern Param_802E5CB0 lbl_805412B0;
extern const f32 lbl_805DE958;
f32 get_random_float__8TObjFishFv(f32);
s32 angle_difference_abs(int, int);
extern const f32 lbl_805DE968;
void run_task__23TObjOnlineEndingHexLineFv(u8 *arg0);
}

extern "C" {

void TObjOnlineEndingHexLine__sub_802E55A4(void *arg0, void *arg1);
void * create__23TObjOnlineEndingHexLineFPvPv(void *arg0, void *arg1);
void *__ct__23TObjOnlineEndingHexLineFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void TObjOnlineEndingHexLine__sub_802E55A4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

void run_task__23TObjOnlineEndingHexLineFv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (M2C_FIELD(arg0, f32 *, 0x9C) + TObjOnlineEndingHexLine__data_804E3AA8.a);
    if (M2C_FIELD(arg0, f32 *, 0x9C) >= lbl_805DE968) {
        TObjOnlineEndingHexLine__sub_802E530C(arg0);
    }
}

void * create__23TObjOnlineEndingHexLineFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = __ct__23TObjOnlineEndingHexLineFv(o, arg0, arg1);
    }
    return o;
}

#define CUR_802E5CB0 TObjOnlineEndingHexLine__data_804E3AA8

void TObjOnlineEndingHexLine__sub_802E5CB0(void) {
    f32 d;
    f32 t;
    s32 n;

    if (lbl_805DE958 != lbl_805412B0.a) {
        d = lbl_804E3AB8.a - CUR_802E5CB0.a;
        if (d * lbl_805412B0.a < lbl_805DE958) {
            lbl_805412B0.a = lbl_805DE958;
        } else {
            t = get_random_float__8TObjFishFv(lbl_805412B0.a);
            if (get_random_float__8TObjFishFv(d) < t) {
                CUR_802E5CB0.a = lbl_804E3AB8.a;
                lbl_805412B0.a = lbl_805DE958;
            } else {
                CUR_802E5CB0.a = CUR_802E5CB0.a + lbl_805412B0.a;
            }
        }
    }
    if (lbl_805DE958 != lbl_805412B0.b) {
        d = lbl_804E3AB8.b - CUR_802E5CB0.b;
        if (d * lbl_805412B0.b < lbl_805DE958) {
            lbl_805412B0.b = lbl_805DE958;
        } else {
            t = get_random_float__8TObjFishFv(lbl_805412B0.b);
            if (get_random_float__8TObjFishFv(d) < t) {
                CUR_802E5CB0.b = lbl_804E3AB8.b;
                lbl_805412B0.b = lbl_805DE958;
            } else {
                CUR_802E5CB0.b = CUR_802E5CB0.b + lbl_805412B0.b;
            }
        }
    }
    if (lbl_805412B0.c != 0) {
        n = angle_difference_abs(CUR_802E5CB0.c, lbl_804E3AB8.c);
        if (n < angle_difference_abs(0, lbl_805412B0.c)) {
            CUR_802E5CB0.c = lbl_804E3AB8.c;
            lbl_805412B0.c = 0;
        } else {
            CUR_802E5CB0.c = CUR_802E5CB0.c + lbl_805412B0.c;
        }
    }
    if (lbl_805DE958 != lbl_805412B0.d) {
        d = lbl_804E3AB8.d - CUR_802E5CB0.d;
        if (d * lbl_805412B0.d < lbl_805DE958) {
            lbl_805412B0.d = lbl_805DE958;
        } else {
            t = get_random_float__8TObjFishFv(lbl_805412B0.d);
            if (get_random_float__8TObjFishFv(d) < t) {
                CUR_802E5CB0.d = lbl_804E3AB8.d;
                lbl_805412B0.d = lbl_805DE958;
            } else {
                CUR_802E5CB0.d = CUR_802E5CB0.d + lbl_805412B0.d;
            }
        }
    }
}

#undef CUR_802E5CB0

}
