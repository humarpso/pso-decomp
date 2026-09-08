#include "pso/TBoss6CrushRock.h"

TBoss6CrushRock::~TBoss6CrushRock() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035A1A4___vt__15TBoss6CrushRock {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDC4(int, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 TBoss6Rock__sub_80353A04();
s32 TBoss6Rock__sub_80353A0C();
s32 rand__11TOBoss4RockFv();
extern RecoveredGlobal_8035A1A4___vt__15TBoss6CrushRock __vt__15TBoss6CrushRock;
extern s32 lbl_805D4408;
extern const f32 lbl_805E00C8;
extern const f32 lbl_805E00CC;
extern const f32 lbl_805E00D0;
extern const f32 lbl_805E00D4;
u8 *__ct__15TBoss6CrushRockFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

s32 get_hp__14TBoss6PlotFalzFv(void);

extern s32 TBoss6PlotFalz__data_805D66EC;

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char RecoveredGlobal_8035A1A4___vt__15TBoss6CrushRock_size[sizeof(RecoveredGlobal_8035A1A4___vt__15TBoss6CrushRock) == 0x18 ? 1 : -1];
u8 *__ct__15TBoss6CrushRockFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TBoss6CrushRock.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4408;
    M2C_FIELD(arg0, s32 *, 0x1C) = TObjFish__sub_8001EDC4((int) (TBoss6Rock__sub_80353A0C()), (void *) (arg3));
    M2C_FIELD(arg0, s32 *, 0x20) = TBoss6Rock__sub_80353A04();
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x24), (void *) (arg2));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (lbl_805E00C8 * ((lbl_805E00CC * (f32) rand__11TOBoss4RockFv()) - lbl_805E00C8));
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (lbl_805E00C8 * ((lbl_805E00CC * (f32) rand__11TOBoss4RockFv()) - lbl_805E00C8));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805E00C8 * ((lbl_805E00CC * (f32) rand__11TOBoss4RockFv()) - lbl_805E00C8));
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (lbl_805E00D0 * (lbl_805E00CC * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (lbl_805E00D0 * (lbl_805E00CC * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (lbl_805E00D0 * (lbl_805E00CC * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (lbl_805E00D4 * ((lbl_805E00CC * (f32) rand__11TOBoss4RockFv()) - lbl_805E00C8));
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (lbl_805E00D4 * ((lbl_805E00CC * (f32) rand__11TOBoss4RockFv()) - lbl_805E00C8));
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (lbl_805E00D4 * ((lbl_805E00CC * (f32) rand__11TOBoss4RockFv()) - lbl_805E00C8));
    return arg0;
}
#pragma pop

s32 get_hp__14TBoss6PlotFalzFv(void) {
    return TBoss6PlotFalz__data_805D66EC;
}

}
