#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802FE378_lbl_80474B68 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802FE378_lbl_80474B74 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802FE378_lbl_80474B80 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802FE378___vt__21TBoss8DragonEffBullet {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern RecoveredGlobal_802FE378_lbl_80474B68 lbl_80474B68;
extern RecoveredGlobal_802FE378_lbl_80474B74 lbl_80474B74;
extern RecoveredGlobal_802FE378_lbl_80474B80 lbl_80474B80;
extern M2C_UNK __vt__21TBoss8DragonEffBullet[];
extern s32 lbl_805D4018;
extern const f32 lbl_805DEF04;
u8 *TBoss8DragonEffBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5);
}

extern "C" {

void *__dt__21TBoss8DragonEffBulletFv(void *arg0, s16 arg1);
void render__21TBoss8DragonEffBulletFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__21TBoss8DragonEffBulletFv(void) {  }

extern M2C_UNK __vt__21TBoss8DragonEffBullet[];

void *__dt__21TBoss8DragonEffBulletFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TBoss8DragonEffBullet;
        if (M2C_FIELD(arg0, void **, 0x50) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x50)); M2C_FIELD(arg0, M2C_UNK *, 0x50) = 0; }
        if (M2C_FIELD(arg0, void **, 0x4C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C)); M2C_FIELD(arg0, M2C_UNK *, 0x4C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802FE378_lbl_80474B68_size[sizeof(RecoveredGlobal_802FE378_lbl_80474B68) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802FE378_lbl_80474B74_size[sizeof(RecoveredGlobal_802FE378_lbl_80474B74) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802FE378_lbl_80474B80_size[sizeof(RecoveredGlobal_802FE378_lbl_80474B80) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802FE378___vt__21TBoss8DragonEffBullet_size[sizeof(RecoveredGlobal_802FE378___vt__21TBoss8DragonEffBullet) == 0x18 ? 1 : -1];
u8 *TBoss8DragonEffBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5) {
    s32 temp_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802FE378___vt__21TBoss8DragonEffBullet *)&__vt__21TBoss8DragonEffBullet).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4018;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg3));
    TBoss6Type1__sub_803D9370((void *) (arg0 + 0x28), (void *) (arg0 + 0x1C));
    M2C_FIELD(arg0, f32 *, 0x40) = update_scale__15TObjBoss2TunnelFPv((void *) (arg0 + 0x28));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DEF04;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = arg4;
    M2C_FIELD(arg0, s16 *, 0x48) = arg5;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    TBoss3Volopt__sub_8022675C((int) (0x4003B20B), (void *) (arg0 + 0x1C), (int) (0), (int) (0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x54) = &lbl_80474B68.value;
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x54) = &lbl_80474B74.value;
        break;
    case 3:
        M2C_FIELD(arg0, M2C_UNK **, 0x54) = &lbl_80474B80.value;
        break;
    }
    return arg0;
}

}
