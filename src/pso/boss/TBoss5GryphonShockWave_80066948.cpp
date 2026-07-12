#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TBoss5GryphonShockWave__ct(u8 *arg0, u8 *arg1_parent, s32 arg2, u8 *arg3, u8 *arg4, s32 arg5, s16 arg6);
M2C_UNK TBoss4Zako__sub_803D8910(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);

extern M2C_UNK __vt__22TBoss5GryphonShockWave[];
extern s32 lbl_805D2818;
extern const f32 lbl_805D8EEC;
extern const f32 lbl_805D8EF0;

u8 *TBoss5GryphonShockWave__ct(u8 *arg0, u8 *arg1_parent, s32 arg2, u8 *arg3, u8 *arg4, s32 arg5, s16 arg6) {
    M2C_UNK sp8[4];

    __ct__7TObjectFP7TObject(arg0, arg1_parent);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TBoss5GryphonShockWave;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2818;
    VecCopy__FP3VecPC3Vec(arg0 + 0x40, arg3);
    VecCopy__FP3VecPC3Vec(arg0 + 0x50, arg3);
    TBoss4Zako__sub_803D8910(arg0 + 0x50, arg5);
    VecCopy__FP3VecPC3Vec(arg0 + 0x60, arg4);
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_805D8EEC;
    VecCopy__FP3VecPC3Vec(arg0 + 0x2C, arg0 + 0x40);
    M2C_FIELD(arg0, s16 *, 0x28) = arg6;
    M2C_FIELD(arg0, s32 *, 0x38) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    VecCopy__FP3VecPC3Vec(sp8, arg0 + 0x2C);
    TBoss6Type1__sub_803D9370(sp8, arg4);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (lbl_805D8EF0 * update_scale__15TObjBoss2TunnelFPv(sp8));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) < 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0x1E;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}
