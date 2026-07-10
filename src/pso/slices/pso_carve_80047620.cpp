#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct BaseA { char pad[0x18]; };
struct VObjA : BaseA {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

struct BaseB { char pad[0x14]; };
struct VObjB : BaseB {
    virtual M2C_UNK n0();
    virtual M2C_UNK n1();
    virtual M2C_UNK n2();
    virtual M2C_UNK n3();
    virtual M2C_UNK n4();
    virtual M2C_UNK n5();
    virtual M2C_UNK n6();
    virtual M2C_UNK n7();
};

extern "C" {

s32 fn_80080750();
s32 fn_800D7B1C(void *, void *);
M2C_UNK fn_800D8A2C();
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK fn_801E2F20();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);
extern s32 some_id_805c6f74;
extern const f32 lbl_805D881C;
extern const f32 lbl_805D8820;

void fn_80047620(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((VObjA *)arg0)->m8(lbl_805D881C, lbl_805D8820) != 0)) {
        if (fn_800D7B1C(arg0 + 0x490, arg0 + 0x2FC) != 0) {
            ((VObjB *)(arg0 + 0x490))->n6();
        }
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TObjLight__sub_80134194(arg0);
        fn_800D8A2C();
        fn_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (fn_80080750() == 1) {
            fn_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        fn_803D9B78();
        TObjLight__sub_80134098();
        fn_801E2F20();
        ((VObjB *)(arg0 + 0x490))->n7();
    }
}

}
