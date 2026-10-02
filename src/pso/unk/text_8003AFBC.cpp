#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8003AFBC___vt__19TObjBoss2RaftSplash { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 TTecZondeEff__sub_8002DF28(void);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
extern RecoveredGlobal_8003AFBC___vt__19TObjBoss2RaftSplash __vt__19TObjBoss2RaftSplash;
extern s32 lbl_805D2700;
extern const f32 lbl_805D85B0;
extern const f32 lbl_805D85D0;
extern const f32 lbl_805D85D4;
u8 *TObjBoss2RaftSplash__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4);
}

extern "C" {

u8 *TObjBoss2RaftSplash__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__19TObjBoss2RaftSplash.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2700;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (lbl_805D85B0 * (lbl_805D85D0 + TTecZondeEff__sub_8002DF28()));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * (lbl_805D85D4 * (f32) rand()));
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, arg3);
    M2C_FIELD(arg0, s32 *, 0x24) = arg4;
    return arg0;
}

}
