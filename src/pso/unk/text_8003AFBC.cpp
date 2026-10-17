#include "types.h"

struct RecoveredGlobal_8003AFBC___vt__19TObjBoss2RaftSplash { s32 value; u8 remaining[0x14]; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 rand_signed_unit(void);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
extern RecoveredGlobal_8003AFBC___vt__19TObjBoss2RaftSplash __vt__19TObjBoss2RaftSplash;
extern s32 lbl_805D2700;
extern const f32 lbl_805D85B0;
extern const f32 lbl_805D85D0;
extern const f32 lbl_805D85D4;
u8 *TObjBoss2RaftSplash__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4);
u8 *TObjBoss2RaftSplash__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__19TObjBoss2RaftSplash.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2700;
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) (lbl_805D85B0 * (lbl_805D85D0 + rand_signed_unit()));
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) (*(f32 *)((s8 *)arg0 + 0x20) * (lbl_805D85D4 * (f32) rand()));
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, arg3);
    *(s32 *)((s8 *)arg0 + 0x24) = arg4;
    return arg0;
}

}
