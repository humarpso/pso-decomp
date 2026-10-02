#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802EF514___vt__18TBoss7PhotonBullet { M2C_UNK value; u8 remaining[0x58]; };
typedef char RecoveredGlobal_802EF514___vt__18TBoss7PhotonBullet_size[sizeof(RecoveredGlobal_802EF514___vt__18TBoss7PhotonBullet) == 0x5C ? 1 : -1];

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_continuous_particle_effect_with_flags(void *, int, int);
s32 fn_800BC4C8(void *, void *, void *);
extern M2C_UNK __vt__18TBoss7PhotonBullet[];
extern s32 lbl_805D3FD4;
extern const f32 lbl_805DEBE8;
extern const f32 lbl_805DEBF0;
extern const f32 lbl_805DEBF4;
u8 *TBoss7PhotonBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
}

extern "C" {

void *__dt__18TBoss7PhotonBulletFv(void *arg0, s16 arg1);
void render__18TBoss7PhotonBulletFv(u8 *arg0);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, int, void *);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__18TBoss7PhotonBulletFv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE8) & 1) {
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xCC, 0, arg0 + 0xD8);
    }
}

extern M2C_UNK __vt__18TBoss7PhotonBullet[];

void *__dt__18TBoss7PhotonBulletFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TBoss7PhotonBullet;
        if (M2C_FIELD(arg0, void **, 0xF0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF0)); }
        if (M2C_FIELD(arg0, void **, 0xF4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF4)); }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TBoss7PhotonBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    fn_800BC4C8((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802EF514___vt__18TBoss7PhotonBullet *)&__vt__18TBoss7PhotonBullet).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3FD4;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xC0), (void *) (arg3))));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB4), (void *) (arg4));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805DEBE8;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805DEBF0;
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) lbl_805DEBF0;
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) lbl_805DEBF0;
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) lbl_805DEBF4;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DEBF4;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DEBF4;
    M2C_FIELD(arg0, f32 *, 0xB0) = farg0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DEBF0;
    M2C_FIELD(arg0, s32 *, 0xF0) = spawn_continuous_particle_effect_with_flags((void *) (arg0 + 0xC0), (int) (0x202), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0xF4) = spawn_continuous_particle_effect_with_flags((void *) (arg0 + 0xC0), (int) (0x203), (int) (0x40));
    return arg0;
}

}
