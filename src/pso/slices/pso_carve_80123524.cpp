#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Sp8Type_80123524 { s32 a; s32 b; s32 c; s32 d; };

extern "C" {

M2C_UNK fn_80100E00(void *);
s32 TItemMag__sub_80102C4C();
s32 fn_801207E8(void *, M2C_UNK, Sp8Type_80123524 *, s32);
M2C_UNK fn_80120BBC(void *, M2C_UNK, void *);
M2C_UNK fn_80363FEC(s32);
M2C_UNK fn_80364028();
M2C_UNK fn_8036414C();
M2C_UNK fn_80364198();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(Sp8Type_80123524 *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
extern s32 some_id_805c6f74;

void fn_80123524(void *arg0) {
    Sp8Type_80123524 sp8;
    s32 temp_r3;
    s32 temp_r6;
    void *temp_r5;
    void *temp_r31;
    void *temp_r30;
    void *temp_r29;

    if (((void *) M2C_FIELD(arg0, void **, 0xF4) != NULL) && (TItemMag__sub_80102C4C() == 0)) {
        temp_r5 = M2C_FIELD(arg0, void **, 0xF4);
        temp_r31 = M2C_FIELD(temp_r5, void **, 0x2C);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 8);
        temp_r30 = M2C_FIELD(temp_r31, void **, 0x2C);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) | 8);
        temp_r29 = M2C_FIELD(temp_r30, void **, 0x30);
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) | 8);
        fn_80120BBC(arg0, 0x30, temp_r5);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFF7);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) & 0xFFFFFFF7);
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) & 0xFFFFFFF7);
        fn_80364198();
        some_id_805c6f74 &= 0xFFFFFFEF;
        fn_80100E00(arg0);
        fn_80364028();
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 1);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) & 0xFFFFFFFD);
        M2C_FIELD(temp_r30, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0x1F8));
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) & 0xFFFFFFFD);
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x1F8);
        M2C_FIELD(temp_r29, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r29, s32 *, 0x18) - temp_r6);
        if (fn_801207E8(arg0, 1, &sp8, temp_r6) != 0) {
            fn_803D9B2C();
            TOHangerMachine01__sub_803D9C00(&sp8);
            fn_803D9214(0, M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), s32 *, 0x60));
            TObjBoss2Tunnel__sub_803DB470(temp_r31);
            fn_803D9B78();
        }
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFFE);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) | 2);
        M2C_FIELD(temp_r30, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x18) - M2C_FIELD(arg0, s32 *, 0x1F8));
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) | 2);
        temp_r3 = M2C_FIELD(temp_r29, s32 *, 0x18);
        M2C_FIELD(temp_r29, s32 *, 0x18) = (s32) (temp_r3 + M2C_FIELD(arg0, s32 *, 0x1F8));
        fn_80363FEC(temp_r3);
        fn_8036414C();
    }
}

}
