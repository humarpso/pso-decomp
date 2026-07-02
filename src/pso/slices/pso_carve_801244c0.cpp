#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80100E00(void *);
s32 TItemMag__sub_80102C4C();
s32 fn_801207E8(void *, M2C_UNK, M2C_UNK *);
M2C_UNK fn_80120BBC(void *, M2C_UNK, void *);
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_80363FEC(s32);
M2C_UNK fn_80364028();
M2C_UNK fn_80364198();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
extern s32 some_id_805c6f74;

void fn_801244C0(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;
    void *temp_r31;
    void *temp_r5;

    if (((void *) M2C_FIELD(arg0, void **, 0xF4) != NULL) && (TItemMag__sub_80102C4C() == 0)) {
        temp_r5 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF4), void **, 0x2C), void **, 0x30);
        temp_r31 = M2C_FIELD(temp_r5, void **, 0x30);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 0x18);
        fn_80120BBC(arg0, 0x30, temp_r5);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFE7);
        if (fn_801207E8(arg0, 5, &sp8) != 0) {
            fn_803D9B2C();
            fn_80364198();
            some_id_805c6f74 &= 0xFFFFFFEF;
            fn_80100E00(arg0);
            fn_80364028();
            TOHangerMachine01__sub_803D9C00(&sp8);
            fn_803D9214(0, M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), s32 *, 0x60));
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 0x11);
            TObjBoss2Tunnel__sub_803DB470(temp_r31);
            fn_801E2EFC();
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(temp_r31, void **, 0x2C));
            fn_801E2F20();
            temp_r3 = M2C_FIELD(temp_r31, s32 *, 0);
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (temp_r3 & ~0x11);
            fn_80363FEC(temp_r3);
            fn_803D9B78();
            fn_803D9B78();
        }
    }
}

}
