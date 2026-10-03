#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800D7BFC { char pad[0x14]; };
struct VObj_800D7BFC : Base_800D7BFC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};

extern "C" {

void *TObjPlayer__sub_800D7C58(void *arg0, s16 arg1);
void activate_and_dispatch__10TObjPlayerFPv(void *arg0);
void *init_and_activate__10TObjPlayerFPv(void *arg0);
void init_effect_9472__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_800D96D0(M2C_UNK, M2C_UNK *);
void TObjPlayer__sub_800D9718(void *);
int set_chunk_blend(int);
M2C_UNK __dl__FPv(void *);
int set_flags_and_apply_damage_color__10TObjPlayerFv(void);

void activate_and_dispatch__10TObjPlayerFPv(void *arg0) {
    struct VObj_800D7BFC *o = (struct VObj_800D7BFC *)arg0;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    o->m2();
}

void init_effect_9472__10TObjPlayerFv(void) { set_flags_and_apply_damage_color__10TObjPlayerFv(); set_chunk_blend(9472); }

extern M2C_UNK lbl_804949A8[];

void *TObjPlayer__sub_800D7C58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_804949A8;
        TObjPlayer__sub_800D96D0((M2C_UNK)arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804949A8[];

void *init_and_activate__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_800D9718(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_804949A8;
    activate_and_dispatch__10TObjPlayerFPv((void *)(arg0));
    return arg0;
}

}
