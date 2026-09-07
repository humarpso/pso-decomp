#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801AD0F0_TPhotonMagicSquare__data_804C3940 { M2C_UNK value; u8 remaining[0x5C]; };

struct RecoveredGlobal_801AD0F0___vt__18TPhotonMagicSquare { M2C_UNK value; u8 remaining[0x34]; };

struct RecoveredGlobal_801AD218_TPhotonMagicSquare__data_804C3940 { M2C_UNK value; u8 remaining[0x5C]; };

struct RecoveredGlobal_801AD218___vt__18TPhotonMagicSquare { M2C_UNK value; u8 remaining[0x34]; };

struct RecoveredGlobal_801AD330_TPhotonMagicSquare__data_804C3940 { M2C_UNK value; u8 remaining[0x5C]; };

struct RecoveredGlobal_801AD330___vt__18TPhotonMagicSquare { M2C_UNK value; u8 remaining[0x34]; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern RecoveredGlobal_801AD0F0_TPhotonMagicSquare__data_804C3940 TPhotonMagicSquare__data_804C3940;
extern RecoveredGlobal_801AD0F0___vt__18TPhotonMagicSquare __vt__18TPhotonMagicSquare;
extern s32 TPhotonMagicSquare__data_805D3508;
extern u8 *lbl_805D5D28;
extern const f32 TPhotonMagicSquare__data_805DC1E4;
extern const f32 TPhotonMagicSquare__data_805DC1EC;
extern const f32 TPhotonMagicSquare__data_805DC1F0;
u8 *TPhotonMagicSquare__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern RecoveredGlobal_801AD0F0_TPhotonMagicSquare__data_804C3940 TPhotonMagicSquare__data_804C3940;
extern RecoveredGlobal_801AD0F0___vt__18TPhotonMagicSquare __vt__18TPhotonMagicSquare;
extern s32 TPhotonMagicSquare__data_805D3508;
extern u8 *lbl_805D5D28;
extern const f32 TPhotonMagicSquare__data_805DC1E4;
extern const f32 TPhotonMagicSquare__data_805DC1EC;
extern const f32 TPhotonMagicSquare__data_805DC1F0;
extern const f32 lbl_805DC1F4;
u8 *TPhotonMagicSquare__sub_801AD218(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TPhotonMylla__sub_80154CB4(void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
s32 TBoss3Volopt__sub_8022675C(int, int, int, int);
extern RecoveredGlobal_801AD0F0_TPhotonMagicSquare__data_804C3940 TPhotonMagicSquare__data_804C3940;
extern RecoveredGlobal_801AD0F0___vt__18TPhotonMagicSquare __vt__18TPhotonMagicSquare;
extern s32 TPhotonMagicSquare__data_805D3508;
extern u8 *lbl_805D5D28;
extern const f32 TPhotonMagicSquare__data_805DC1E4;
extern const f32 lbl_805DC1E8;
extern const f32 TPhotonMagicSquare__data_805DC1EC;
extern const f32 TPhotonMagicSquare__data_805DC1F0;
u8 *TPhotonMagicSquare__sub_801AD330(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
}

extern "C" {

u8 *TPhotonMagicSquare__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__18TPhotonMagicSquare.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TPhotonMagicSquare__data_805D3508;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x28);
    M2C_FIELD(arg0, u8 **, 0x90) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x430), void **, 0x14));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TPhotonMagicSquare__data_805DC1EC;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), u32 *, 4) - TPhotonMagicSquare__data_805DC1E4);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TPhotonMagicSquare__data_805DC1F0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) TPhotonMagicSquare__data_805DC1EC;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) TPhotonMagicSquare__data_805DC1EC;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) TPhotonMagicSquare__data_805DC1EC;
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xA0), (void *) ((u8 *)&TPhotonMagicSquare__data_804C3940.value + (arg2 * 0x10)));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB8), (void *) (arg3));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = arg4;
    M2C_FIELD(arg0, f32 *, 0xC8) = farg0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0xFFFFFF;
    return arg0;
}
u8 *TPhotonMagicSquare__sub_801AD218(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801AD218___vt__18TPhotonMagicSquare *)&__vt__18TPhotonMagicSquare).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TPhotonMagicSquare__data_805D3508;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x28);
    M2C_FIELD(arg0, u8 **, 0x90) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x430), void **, 0x14));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TPhotonMagicSquare__data_805DC1EC;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), u32 *, 4) - TPhotonMagicSquare__data_805DC1E4);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TPhotonMagicSquare__data_805DC1F0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) TPhotonMagicSquare__data_805DC1EC;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) TPhotonMagicSquare__data_805DC1EC;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) TPhotonMagicSquare__data_805DC1EC;
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xA0), (void *) ((u8 *)&(*(RecoveredGlobal_801AD218_TPhotonMagicSquare__data_804C3940 *)&TPhotonMagicSquare__data_804C3940).value + (arg2 * 0x10)));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB8), (void *) (arg3));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = arg4;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DC1F4;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0xFFFFFF;
    return arg0;
}
u8 *TPhotonMagicSquare__sub_801AD330(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801AD330___vt__18TPhotonMagicSquare *)&__vt__18TPhotonMagicSquare).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TPhotonMagicSquare__data_805D3508;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x28);
    M2C_FIELD(arg0, u8 **, 0x90) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x430), void **, 0x14));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TPhotonMagicSquare__data_805DC1EC;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), u32 *, 4) - TPhotonMagicSquare__data_805DC1E4);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TPhotonMagicSquare__data_805DC1F0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) TPhotonMagicSquare__data_805DC1EC;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) TPhotonMagicSquare__data_805DC1EC;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) TPhotonMagicSquare__data_805DC1EC;
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xA0), (void *) ((u8 *)&(*(RecoveredGlobal_801AD330_TPhotonMagicSquare__data_804C3940 *)&TPhotonMagicSquare__data_804C3940).value + (arg2 * 0x10)));
    temp_r3 = TPhotonMylla__sub_80154CB4((void *) (arg3));
    if (temp_r3 != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB8), (void *) (temp_r3 + 0x38));
    }
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) (M2C_FIELD(arg0, f32 *, 0xBC) + lbl_805DC1E8);
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0x37;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) TPhotonMagicSquare__data_805DC1F0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    TBoss3Volopt__sub_8022675C((int) (0x4002AD2E), (int) (0), (int) (0), (int) (0));
    return arg0;
}

}
