#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80039084___vt__18TBoss2PhotonBullet {
    M2C_UNK value;
    u8 remaining[0x58];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 fn_800BC4C8(void *, void *, void *);
extern RecoveredGlobal_80039084___vt__18TBoss2PhotonBullet __vt__18TBoss2PhotonBullet;
extern s32 lbl_805D26DC;
extern const f32 lbl_805D8518;
extern const f32 lbl_805D8520;
u8 *TBoss2PhotonBullet__ct(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, u8 *arg4, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_80039084___vt__18TBoss2PhotonBullet_size[sizeof(RecoveredGlobal_80039084___vt__18TBoss2PhotonBullet) == 0x5C ? 1 : -1];
u8 *TBoss2PhotonBullet__ct(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, u8 *arg4, f32 farg0) {
    fn_800BC4C8((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__18TBoss2PhotonBullet.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D26DC;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xC0), (void *) (arg3));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0xC0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB4), (void *) (arg4));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805D8518;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805D8520;
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) lbl_805D8520;
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) lbl_805D8520;
    M2C_FIELD(arg0, f32 *, 0xB0) = farg0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805D8520;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    return arg0;
}

}
