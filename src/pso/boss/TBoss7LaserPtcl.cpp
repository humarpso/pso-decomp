#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_state_2__15TBoss7LaserPtclFPv(void *arg0);

u8 is_state_2__15TBoss7LaserPtclFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x1C) == 2);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802ECDA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_laser_light__15TBoss7LaserPtclFPv(void *arg0);
void release_laser_light__15TBoss7LaserPtclFPv(void *arg0);
M2C_UNK TBoss7LaserLight__sub_802EF120(void *);
M2C_UNK TBoss7LaserLight__sub_802EF12C(void *);

void release_laser_light__15TBoss7LaserPtclFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x708);
    if ((u32) temp_r3 != 0U) {
        TBoss7LaserLight__sub_802EF120(temp_r3);
    }
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) & 0xFFFFFFEF);
}

void free_laser_light__15TBoss7LaserPtclFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x708);
    if ((u32) temp_r3 != 0U) {
        TBoss7LaserLight__sub_802EF12C(temp_r3);
    }
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x10);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035A934
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_world_position__15TBoss7LaserPtclFPvPv(void *arg0, void *arg1);

void calc_world_position__15TBoss7LaserPtclFPvPv(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + M2C_FIELD(arg0, f32 *, 0x38));
        M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + M2C_FIELD(arg0, f32 *, 0x3C));
        M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + M2C_FIELD(arg0, f32 *, 0x40));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035A970
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__15TBoss7LaserPtclFPv(void *arg0);

extern const f32 lbl_805DE9F0;

void update_position__15TBoss7LaserPtclFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * M2C_FIELD(arg0, f32 *, 0x4C));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DE9F0 - M2C_FIELD(arg0, f32 *, 0x24));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * M2C_FIELD(arg0, f32 *, 0x4C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035A9B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_laser__15TBoss7LaserPtclFPv(u8 *arg0);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
M2C_UNK TBoss7LaserPtcl__sub_8035AA98();
s32 TBoss8Dragon__sub_8008741C(void *, int, int);
M2C_UNK TOSwitchAttack__sub_80087278(void *, int, int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK clamp_velocity__15TObjBoss2TunnelFPv(void *);

extern const f64 lbl_804796D8;
extern const f32 lbl_805E00F4;

void init_laser__15TBoss7LaserPtclFPv(u8 *arg0) {
    TBoss7LaserPtcl__sub_8035AA98();
    TBoss6Type1__sub_803D9370((void *) (arg0 + 0x2C), (void *) (arg0 + 0x20));
    clamp_velocity__15TObjBoss2TunnelFPv((void *) (arg0 + 0x2C));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805E00F4;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (lbl_804796D8 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0x2C)), (f32) (M2C_FIELD(arg0, f32 *, 0x34))));
    TOSwitchAttack__sub_80087278((void *) (arg0 + 0x20), (int) (0x20A), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0x44) = TBoss8Dragon__sub_8008741C((void *) (arg0 + 0x20), (int) (0x177), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035AAE8
#include "types.h"

extern "C" {

void render__15TBoss7LaserPtclFv(void);

void render__15TBoss7LaserPtclFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035AC5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TBoss7LaserPtclFv(void *arg0, s16 arg1);
void TBoss7LaserPtcl__sub_8035AA98(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__15TBoss7LaserPtcl[];

void *__dt__15TBoss7LaserPtclFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss7LaserPtcl;
        TBoss7LaserPtcl__sub_8035AA98(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035AD64
#include "types.h"

extern "C" {

void TBoss7LaserPtcl__sub_8035AD64(void);

void TBoss7LaserPtcl__sub_8035AD64(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035ADFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss7LaserPtcl__sub_8035ADFC(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804F1C88[];

void *TBoss7LaserPtcl__sub_8035ADFC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1C88;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035AF0C
#include "types.h"

extern "C" {

void TBoss7LaserPtcl__sub_8035AF0C(void);
void TBoss7LaserPtcl__sub_8035AF10(void);
void TBoss7LaserPtcl__sub_8035AF14(void);

void TBoss7LaserPtcl__sub_8035AF0C(void) {  }
void TBoss7LaserPtcl__sub_8035AF10(void) {  }
void TBoss7LaserPtcl__sub_8035AF14(void) {  }

}
#endif
#endif
