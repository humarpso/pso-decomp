#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern s32 TObjEneMe3ShinowaMirage__data_805D52A4;
extern s32 TObjEneMe3ShinowaMirage__data_805D52A8;

struct VBase18b { char pad[0x18]; };
struct VObj18b : VBase18b {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4(void *, void *);
};

void TObjEneMe3ShinowaMirage__sub_800E70D4(u8 *arg0) {
    M2C_UNK sp8[8];
    u32 temp_r3;
    u32 temp_r3_3;
    u8 *temp_r3_2;
    u8 *temp_r3_4;

    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8CD4((int) (0));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (TObjEneMe3ShinowaMirage__data_805D52A4), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3 != 0U) {
        TObjPlayer__sub_803D8960((int) (0), (int) (temp_r3), (void *) (&sp8), (int) (2));
        temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3E0));
        ((VObj18b *) temp_r3_2)->m4(&sp8, &sp8[3]);
    }
    temp_r3_3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (TObjEneMe3ShinowaMirage__data_805D52A8), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3_3 != 0U) {
        TObjPlayer__sub_803D8960((int) (0), (int) (temp_r3_3), (void *) (&sp8), (int) (2));
        temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3E4));
        ((VObj18b *) temp_r3_4)->m4(&sp8, &sp8[3]);
    }
    TObjPlayer__sub_803D9B78();
}

}
