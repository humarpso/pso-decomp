#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801695a8 { char pad[0x18]; };
struct VObj_801695a8 : Base_801695a8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};

extern "C" {

void render__13TOHealGeneralFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK TObjFish__sub_803DA798(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

void render__13TOHealGeneralFv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;

    if (((VObj_801695a8 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        TObjFish__sub_803DA798((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        TObjPlayer__sub_803D9B2C();
        temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_2 + 8));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xCC)));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x30));
        TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(temp_r31_3, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_3, f32 *, 0xC) - M2C_FIELD(arg0, f32 *, 0xD0)), (f32) (M2C_FIELD(temp_r31_3, f32 *, 0x10)));
        TObjPlayer__sub_803D9214((int) (0), (int) (-M2C_FIELD(arg0, s32 *, 0xCC)));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
    }
}

}
