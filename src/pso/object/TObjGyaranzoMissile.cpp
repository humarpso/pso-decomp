#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800D4668_lbl_80494400 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800D4668_lbl_8049442C {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_800D4668_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_800D4BD0_lbl_80494468 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_800D4BD0_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *, int);
s32 TScene__sub_803D8DB4(int, int, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
M2C_UNK TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_800D4668_lbl_80494400 lbl_80494400;
extern M2C_UNK lbl_8049442C[];
extern RecoveredGlobal_800D4668_lbl_8058D490 lbl_8058D490;
extern s32 lbl_805D51FC;
extern s32 tl_04;
extern const f32 lbl_805DA2A4;
extern const f32 lbl_805DA2A8;
extern const f32 lbl_805DA2B4;
extern const f32 lbl_805DA2B8;
u8 *TObjGyaranzoMissile__sub_800D4668(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *, int);
s32 rand__11TOBoss4RockFv();
s32 TCameraCtrl__sub_803D8934(int, int, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
M2C_UNK TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_800D4BD0_lbl_80494468 lbl_80494468;
extern M2C_UNK __vt__19TObjGyaranzoMissile[];
extern RecoveredGlobal_800D4668_lbl_8058D490 lbl_8058D490;
extern s32 lbl_805D2A80;
extern f32 TObjGyaranzoMissile__data_805D51F4;
extern s32 tl_04;
extern const f32 lbl_805DA2C4;
extern const f32 lbl_805DA2CC;
extern const f32 lbl_805DA2D0;
extern const f32 lbl_805DA2D4;
extern const f32 lbl_805DA2D8;
extern const f32 lbl_805DA2DC;
extern const f32 lbl_805DA2E0;
u8 *TObjGyaranzoMissile__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3);
}

extern "C" {

void *__dt__19TObjGyaranzoMissileFv(void *arg0, s16 arg1);
void *destroy__19TObjGyaranzoMissileFPvs(void *arg0, s16 arg1);
void render__19TObjGyaranzoMissileFv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjFish__sub_8001EDB0(void *, int);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK TObjFish__sub_803E46BC();
void TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
M2C_UNK set_global_param__8TObjFishFi();

extern M2C_UNK lbl_8049442C[];

void *destroy__19TObjGyaranzoMissileFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049442C;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D51FC;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA2C4;

typedef char RecoveredGlobal_800D4668_lbl_80494400_size[sizeof(RecoveredGlobal_800D4668_lbl_80494400) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_800D4668_lbl_8049442C_size[sizeof(RecoveredGlobal_800D4668_lbl_8049442C) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_800D4668_lbl_8058D490_size[sizeof(RecoveredGlobal_800D4668_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *TObjGyaranzoMissile__sub_800D4668(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u8 *temp_r4;
    TObjPlayer__sub_801569F4((void *) (arg0), (int) (tl_04));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800D4668_lbl_8049442C *)&lbl_8049442C).value;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xE0), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) (M2C_FIELD(arg0, f32 *, 0xE4) + lbl_805DA2A8);
    M2C_FIELD(arg0, s32 *, 0xDC) = arg4;
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D51FC), u8 **, 0x42C), s32 *, 0x58);
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D51FC), u8 **, 0x42C), s32 *, 0x5C);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, u16 *, 0xD8) = obj_getField1c((void *) (arg1));
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (arg3 + 0x8000);
    M2C_FIELD(arg0, s32 *, 0xC0) = -0x4000;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) lbl_805DA2A4;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DA2A4;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805DA2B4;
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xBC)));
    temp_r4 = (u8 *)(arg0 + 0xAC);
    TScene__sub_803D8DB4((int) (0), (int) (temp_r4), (int) (temp_r4));
    TObjPlayer__sub_803D9B78();
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) lbl_805DA2A4;
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_80494400.value), (int) (1));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805DA2B8;
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xEC) = 0xF;
    return arg0;
}

void render__19TObjGyaranzoMissileFv(u8 *arg0) {
    TObjFish__sub_8001EDB0((void *) (lbl_805D51FC), (int) (6));
    set_global_param__8TObjFishFi();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjPlayer__sub_803D9624((int) (0), (f32) (lbl_805DA2C4), (f32) (M2C_FIELD(arg0, f32 *, 0xD4) * TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0xCC)))), (f32) (lbl_805DA2C4));
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjFish__sub_8001EDC4((void *) (lbl_805D51FC), (int) (6));
    TObjFish__sub_803E46BC();
    TObjPlayer__sub_803D9B78();
}

extern M2C_UNK __vt__19TObjGyaranzoMissile[];

void *__dt__19TObjGyaranzoMissileFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjGyaranzoMissile;
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_800D4BD0_lbl_80494468_size[sizeof(RecoveredGlobal_800D4BD0_lbl_80494468) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile_size[sizeof(RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_800D4BD0_lbl_8058D490_size[sizeof(RecoveredGlobal_800D4BD0_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *TObjGyaranzoMissile__ct(u8 *arg0, u8 *arg1, u8 *arg2, s16 arg3) {
    u8 *temp_r4;
    TObjPlayer__sub_801569F4((void *) (arg0), (int) (tl_04));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800D4BD0___vt__19TObjGyaranzoMissile *)&__vt__19TObjGyaranzoMissile).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A80;
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_80494468.value), (int) (1));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805DA2CC;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((int) (M2C_FIELD(arg2, s32 *, 0))));
    M2C_FIELD(arg0, s16 *, 0xC4) = arg3;
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (lbl_805DA2D0 * (lbl_805DA2D4 * (lbl_805DA2D8 * (f32) rand__11TOBoss4RockFv())));
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg2, f32 *, 0xC) * (lbl_805DA2DC * ((lbl_805DA2D8 * (f32) rand__11TOBoss4RockFv()) + lbl_805DA2E0)));
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, u16 *, 0xD8) = obj_getField1c((void *) (arg1));
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) lbl_805DA2C4;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DA2C4;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjGyaranzoMissile__data_805D51F4;
    TObjPlayer__sub_803D97F0((void *) (&(*(RecoveredGlobal_800D4BD0_lbl_8058D490 *)&lbl_8058D490).value));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    temp_r4 = (u8 *)(arg0 + 0xAC);
    TCameraCtrl__sub_803D8934((int) (0), (int) (temp_r4), (int) (temp_r4));
    TObjPlayer__sub_803D9B78();
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    return arg0;
}
#pragma pop

}
