#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_models__22TObjContainerJungEnemyFPv(void *arg0);
void TObjContainerJungEnemy__vt78(void *arg0);

M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);

void TObjContainerJungEnemy__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    case 1:
        return;
    }
}

s32 TObjContainerJung__sub_8018D3B8(M2C_UNK);
s32 TObjContainerJung__sub_8018D3C0(M2C_UNK);
s32 TObjContainerJungEx__sub_8018D900(M2C_UNK);
s32 TObjContainerJungEx__sub_8018D93C(M2C_UNK);

void load_models__22TObjContainerJungEnemyFPv(void *arg0) {
    s32 var_r0;
    s32 temp_r3 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r3 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
        if (temp_r3 <= 1) {
            var_r0 = temp_r3;
        }
    }
    switch (var_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x368) = TObjContainerJung__sub_8018D3C0(0);
        M2C_FIELD(arg0, s32 *, 0x36C) = TObjContainerJung__sub_8018D3C0(1);
        M2C_FIELD(arg0, s32 *, 0x370) = TObjContainerJung__sub_8018D3C0(2);
        M2C_FIELD(arg0, s32 *, 0x374) = TObjContainerJung__sub_8018D3C0(3);
        M2C_FIELD(arg0, s32 *, 0x24) = TObjContainerJung__sub_8018D3B8(0);
        return;
    default:
    case 1:
        M2C_FIELD(arg0, s32 *, 0x368) = TObjContainerJungEx__sub_8018D93C(0);
        M2C_FIELD(arg0, s32 *, 0x36C) = TObjContainerJungEx__sub_8018D93C(1);
        M2C_FIELD(arg0, s32 *, 0x370) = TObjContainerJungEx__sub_8018D93C(2);
        M2C_FIELD(arg0, s32 *, 0x374) = TObjContainerJungEx__sub_8018D93C(3);
        M2C_FIELD(arg0, s32 *, 0x24) = TObjContainerJungEx__sub_8018D900(0);
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8018CC68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjContainerJungEnemy__vt79(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern const f32 lbl_805DBD9C;

void TObjContainerJungEnemy__vt79(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TOMonitorMachine01__sub_803D8B5C(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x368));
        begin_effect_render__13TParticleCtrlFv();
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x374));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    case 1:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018CE28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__22TObjContainerJungEnemyFPv(void *arg0);
void *__dt__22TObjContainerJungEnemyFv(void *arg0, s16 arg1);
void *TObjContainerJungEnemy__ct(void *, void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern void *tl_05;

void *create__22TObjContainerJungEnemyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x378);
    if (o != NULL) {
        o = TObjContainerJungEnemy__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__22TObjContainerJungEnemy[];

void *__dt__22TObjContainerJungEnemyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjContainerJungEnemy;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
