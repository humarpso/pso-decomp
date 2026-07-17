#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VDisp_800a42c4 { char pad[0x18]; virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(void *, void *); };

void TObjPlayer__sub_800A42C4(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);

extern s32 lbl_805D5064;

void TObjPlayer__sub_800A42C4(u8 *arg0) {
    struct { M2C_UNK a, b, c; M2C_UNK d, e, f, g, h; } sp8;
    s32 temp_r3;
    u8 *temp_r3_2;

    temp_r3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (lbl_805D5064), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3 != 0) {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D8CD4((int) (0));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        TObjPlayer__sub_803D8960((int) (0), (int) (temp_r3), (void *) (&sp8), (int) (2));
        TObjPlayer__sub_803D9B78();
        temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3C0));
        if (temp_r3_2 != NULL) {
            ((struct VDisp_800a42c4 *) temp_r3_2)->m4(&sp8, &sp8.d);
        }
    }
}

}
