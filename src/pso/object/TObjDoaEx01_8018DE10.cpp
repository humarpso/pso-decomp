#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void try_open__11TObjDoaEx01FPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoaEx01__sub_8018DD0C(void *, s32);
M2C_UNK free_children__12TObjDoorJungFPvPv(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798();

struct TObjDoaEx01_base { char pad[0x18]; };
struct TObjDoaEx01_VObj : TObjDoaEx01_base {
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
extern s32 lbl_805D5BB0;
extern u8 *lbl_805D5BB4;
extern u8 *lbl_805D5BB8;
extern const f32 lbl_805DBDB4;
extern const f32 lbl_805DBDB8;

void try_open__11TObjDoaEx01FPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = TObjFish__sub_8001EDC4(lbl_805D5BB0, 0);
    if (((TObjDoaEx01_VObj*)arg0)->m8(lbl_805DBDB4, lbl_805DBDB8) != 0) {
        free_children__12TObjDoorJungFPvPv(M2C_FIELD(lbl_805D5BB4, s32 *, 4), 1);
        free_children__12TObjDoorJungFPvPv(M2C_FIELD(lbl_805D5BB8, s32 *, 4), 1);
        TObjFish__sub_8001EDB0(lbl_805D5BB0, 0);
        fn_803DA798();
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjDoaEx01__sub_8018DD0C(arg0, temp_r31);
        fn_803D9B78();
    }
}

}
