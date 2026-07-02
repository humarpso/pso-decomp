#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_A { s32 a; M2C_UNK (*fn)(s32, s32); };

extern "C" {

s32 fn_801F2CE0();
s32 fn_801F2D2C(struct Ent_A *);
extern struct Ent_A lbl_804C69D8[];

void fn_801F2974(s32 arg0) {
    M2C_UNK (*temp_r31)(s32, s32);
    s32 temp_r30;
    struct Ent_A *e;

    e = (struct Ent_A *) (u8 *) lbl_804C69D8;
    e = (struct Ent_A *) ((u8 *) e + (arg0 * 8));
    temp_r31 = e->fn;
    temp_r30 = fn_801F2D2C(e);
    temp_r31(temp_r30, fn_801F2CE0());
}

}
