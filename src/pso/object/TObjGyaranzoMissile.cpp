#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TObjGyaranzoMissileFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

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

}
#else
#if PSO_CLASS_PACKAGE == 0x800D1FE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_Sub { char pad[0x14]; };
struct V_Sub : Base_Sub {
    PADV4
    PADV
    virtual s32 m5();
};

extern "C" {

void update__19TObjGyaranzoMissileFPv(u8 *arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TBoss3Volopt__sub_800D8D88(void *, s32);
M2C_UNK TBoss1Dragon__sub_80143504(void *);

void update__19TObjGyaranzoMissileFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TBoss3Volopt__sub_800D8D88(arg0 + 0x2FC, temp_r4);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3D0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if (((V_Sub *) (arg0 + 0x3D0))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0, temp_r5);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D23C0
#include "types.h"

extern "C" {

void copy_from__19TObjGyaranzoMissileFPvPv(void* p, void* q);

void copy_from__19TObjGyaranzoMissileFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D40D8
#include "types.h"

extern "C" {

void TObjGyaranzoMissile__sub_800D40D8(void);
void TObjGyaranzoMissile__sub_800D40DC(void);
int TObjGyaranzoMissile__sub_800D40E0(void);
void TObjGyaranzoMissile__sub_800D40E8(void);

void TObjGyaranzoMissile__sub_800D40D8(void) {  }
void TObjGyaranzoMissile__sub_800D40DC(void) {  }
int TObjGyaranzoMissile__sub_800D40E0(void) { return 0; }
void TObjGyaranzoMissile__sub_800D40E8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D4348
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__19TObjGyaranzoMissileFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 some_id_805c6f74;

void draw__19TObjGyaranzoMissileFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC8));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xBC));
    TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0xC0));
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0xC4));
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D4600
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__19TObjGyaranzoMissileFPvs(void *arg0, s16 arg1);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D48F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TObjGyaranzoMissileFv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjFish__sub_8001EDB0(void *, int);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK TObjFish__sub_803E46BC();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D51FC;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA2C4;

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131100
#include "types.h"

extern "C" {

void* init_missile__19TObjGyaranzoMissileFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char TObjPlayer__sub_80109440[];
    extern unsigned char lbl_804A6CC8[];
    extern const float lbl_805DB038;
    extern const float lbl_805DB044;
    extern const float lbl_805DB04C;
void* init_missile__19TObjGyaranzoMissileFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6CC8; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)TObjPlayer__sub_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB04C; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB038; *(float*)((char*)a0 + 0x200) = lbl_805DB038; *(float*)((char*)a0 + 0x1fc) = lbl_805DB038; *(int*)((char*)a0 + 0x208) = 0; *(float*)((char*)a0 + 0x214) = lbl_805DB044; *(float*)((char*)a0 + 0x210) = lbl_805DB044; *(float*)((char*)a0 + 0x20c) = lbl_805DB044; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801311D8
#include "types.h"

extern "C" {

void TObjGyaranzoMissile__sub_801311D8(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int get_player_list__10TObjPlayerFv(void*);

void TObjGyaranzoMissile__sub_801311D8(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1fc); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013136C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjGyaranzoMissile__sub_8013136C(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804A6DC0[];

void *TObjGyaranzoMissile__sub_8013136C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6DC0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801313C4
#include "types.h"

extern "C" {

void* init_effect__19TObjGyaranzoMissileFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char TObjPlayer__sub_80109440[];
    extern unsigned char lbl_804A6DC0[];
    extern const float lbl_805DB054;
    extern const float lbl_805DB060;
void* init_effect__19TObjGyaranzoMissileFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6DC0; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)TObjPlayer__sub_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB060; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB054; *(float*)((char*)a0 + 0x200) = lbl_805DB054; *(float*)((char*)a0 + 0x1fc) = lbl_805DB054; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801314BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 scale_velocity__19TObjGyaranzoMissileFPvf(void *arg0, f32 farg0);
f32 TObjPlayer__sub_8001978C();
f32 TCameraCtrl__sub_803D8D00();

extern f32 lbl_805DB068;
extern f32 lbl_805DB06C;

f32 scale_velocity__19TObjGyaranzoMissileFPvf(void *arg0, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;

    if (TCameraCtrl__sub_803D8D00() > lbl_805DB068) {
        temp_f1 = TObjPlayer__sub_8001978C();
        temp_f2 = farg0 / temp_f1;
        M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * temp_f2);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * temp_f2);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f2);
        return temp_f1;
    }
    return lbl_805DB06C;
}

}
#endif
#endif
