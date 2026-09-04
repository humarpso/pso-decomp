#ifndef PSO_CLASS_PACKAGE
#include "pso/TDeadSpot.h"

TDeadSpot::~TDeadSpot() {}
#else
#if PSO_CLASS_PACKAGE == 0x8002DEB0
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 lerp__9TDeadSpotFff(f32 farg0, f32 farg1);
s32 rand__11TOBoss4RockFv();

extern M2C_UNK lbl_804355D0;
extern const f32 lbl_805D818C;

f32 lerp__9TDeadSpotFff(f32 farg0, f32 farg1) {
    return ((farg1 - farg0) * (lbl_805D818C * (f32) rand__11TOBoss4RockFv())) + farg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D7D74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800D7E10 { char pad[0x18]; };
struct VObj_800D7E10 : Base_800D7E10 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

extern "C" {

void *TDeadSpot__sub_800D7D74(void *arg0, s16 arg1);
void *init__9TDeadSpotFPv(void *arg0);
void update_lifetime__9TDeadSpotFPv(void *arg0);
void TDeadSpot__sub_800D7F08(void *, int);
void TDeadSpot__sub_800D7F60(void *);
void __dl__7TObjectFPv(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804949D8[];

void *TDeadSpot__sub_800D7D74(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804949D8;
        TDeadSpot__sub_800D7F08(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804949D8[];

void *init__9TDeadSpotFPv(void *arg0) {
    TDeadSpot__sub_800D7F60(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804949D8;
    M2C_FIELD(arg0, u32 *, 0x30) = 8;
    return arg0;
}

void update_lifetime__9TDeadSpotFPv(void *arg0) {
    u32 tmp34 = M2C_FIELD(arg0, u32 *, 0x34);
    if ((tmp34 == 0U) || (all_parents_unqueued_for_destruction__7TObjectFv(tmp34) == 0)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) >= (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        ((VObj_800D7E10 *)arg0)->m4();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D7F08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TDeadSpot__sub_800D7F08(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804949F4[];

void *TDeadSpot__sub_800D7F08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804949F4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D8188
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__9TDeadSpotFv(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK fn_801418C4(M2C_UNK);
M2C_UNK fn_80141A30();
f32 TObjPlayer__sub_80141CF8(void *, s32);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TParticleCtrl__sub_803DA7A8(s32);
M2C_UNK fn_803E29B0(void *, M2C_UNK, M2C_UNK);

extern s32 lbl_805D4DF0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TDeadSpot__data_805DA38C;
extern const f32 lbl_805DA39C;

void render__9TDeadSpotFv(u8 *arg0) {
    if ((get_state_flag__9TMainTaskFv() != 1) && (M2C_FIELD(arg0, f32 *, 0xC4) > TDeadSpot__data_805DA38C) && (TObjPlayer__sub_80141CF8(arg0 + 0x7C, lbl_805D4DF0 + 0x178) < lbl_805DA39C)) {
        lbl_805D5660 = some_id_805c6f74;
        reset_transform_state__10TObjPlayerFv();
        fn_801418C4(0x8F);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xB8));
        TParticleCtrl__sub_803DA7A8(M2C_FIELD(arg0, s32 *, 0xBC));
        fn_803E29B0(arg0 + 0x1C, 4, 1);
        fn_80141A30();
        some_id_805c6f74 = lbl_805D5660;
    }
}

}
#endif
#endif
