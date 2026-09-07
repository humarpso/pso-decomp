#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800FE930___vt__19TObjEZBoneRotPlayer {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
u8 * TObjEZBoneRotBase__ct(void *, s32, void *);
extern RecoveredGlobal_800FE930___vt__19TObjEZBoneRotPlayer __vt__19TObjEZBoneRotPlayer;
extern s32 lbl_805D2B4C;
u8 * __ct__19TObjEZBoneRotPlayerFv(u8 *arg0, s32 arg1, u8 *arg2, void *);
void *__nw__7TObjectFUl(int);
void * create__19TObjEZBoneRotPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);
M2C_UNK fn_800FEBBC(void*, s32);
extern const f32 lbl_805DAA4C;
void advance_bone_rotation__19TObjEZBoneRotPlayerFPv(void *arg0);
}

extern "C" {

void run_task__19TObjEZBoneRotPlayerFv(void *arg0);

extern const f32 lbl_805DAA40;
extern const f32 lbl_805DAA44;
extern const f32 lbl_805DAA48;
extern const f32 lbl_805DAA4C;
extern const f32 lbl_805DAA50;

void run_task__19TObjEZBoneRotPlayerFv(void *arg0) {
    f32 temp_f1;
    s32 temp_r4;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x98);
    temp_r4 = M2C_FIELD(temp_r6, s32 *, 0x320) & 0xDF7FF;
    if (temp_r4 & 0x99003) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) + lbl_805DAA40);
    } else if ((temp_r4 & 0x1E0) || ((s32) M2C_FIELD(arg0, s32 *, 0x9C) != (s32) M2C_FIELD(temp_r6, s32 *, 0x60))) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) + lbl_805DAA44);
    } else if (temp_r4 & 0x4661C) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) + lbl_805DAA48);
    } else {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) + lbl_805DAA40);
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
    if (temp_f1 < lbl_805DAA4C) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DAA4C;
    } else if (temp_f1 > lbl_805DAA50) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DAA50;
    }
    advance_bone_rotation__19TObjEZBoneRotPlayerFPv((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x98), s32 *, 0x60);
}
typedef char RecoveredGlobal_800FE930___vt__19TObjEZBoneRotPlayer_size[sizeof(RecoveredGlobal_800FE930___vt__19TObjEZBoneRotPlayer) == 0x18 ? 1 : -1];
u8 *__ct__19TObjEZBoneRotPlayerFv(u8 *arg0, s32 arg1, u8 *arg2, void * _w3) {
    TObjEZBoneRotBase__ct(arg0, arg1, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__19TObjEZBoneRotPlayer.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2B4C;
    M2C_FIELD(arg0, s32 *, 0x98) = arg1;
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x98), s32 *, 0x60);
    return arg0;
}
void * create__19TObjEZBoneRotPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = ((void *)__ct__19TObjEZBoneRotPlayerFv((u8 *)(o), (s32)(arg0), (u8 *)(arg1), (void *)(arg2)));
    }
    return o;
}
void advance_bone_rotation__19TObjEZBoneRotPlayerFPv(void *arg0) {
    fn_800FEBBC(arg0, M2C_FIELD(arg0, s32 *, 0x84));
    if (M2C_FIELD(arg0, f32 *, 0x94) > (*(f32 *)&lbl_805DAA4C)) {
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 4));
    }
}

}
