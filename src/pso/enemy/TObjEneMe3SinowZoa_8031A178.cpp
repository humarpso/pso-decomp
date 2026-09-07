#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8031A3D8_lbl_80542FDC {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
s32 initialize_enemy_state__9TObjEneDDFPv(void *, int);
s32 TObjEneMe3SinowZoa__sub_8031A454(void *);
extern RecoveredGlobal_8031A3D8_lbl_80542FDC lbl_80542FDC;
extern u8 *TObjEneMe3SinowZoa__data_805D6AD8;
void TObjEneMe3SinowZoa__sub_8031A3D8(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8031A3D8_lbl_80542FDC_size[sizeof(RecoveredGlobal_8031A3D8_lbl_80542FDC) == 0x14 ? 1 : -1];
void TObjEneMe3SinowZoa__sub_8031A3D8(u8 *arg0) {
    if (TObjEneMe3SinowZoa__sub_8031A454((void *) (arg0)) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &lbl_80542FDC.value;
        initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x46));
        M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(TObjEneMe3SinowZoa__data_805D6AD8, u8 **, 0x42C), M2C_UNK **, 0xC);
    initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x45));
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
}

}
