#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__12TObjWarpBossFPv(void *arg0);
M2C_UNK update_warp_boss_visibility();
M2C_UNK TObjWarpBossMulti__sub_8019E798(void *);
M2C_UNK warp_boss_handle_window(void *);
M2C_UNK update_state__17TObjWarpBossMultiFPv(void *);
M2C_UNK update_warp_state__17TObjWarpBossMultiFPv(void *);
M2C_UNK TObjWarpBossMulti__sub_8019EB94(void *);

void update__12TObjWarpBossFPv(void *arg0) {
    s16 temp_r0;

    update_warp_boss_visibility();
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xDE);
    switch (temp_r0) {
    case 0:
        TObjWarpBossMulti__sub_8019EB94(arg0);
        return;
    case 1:
        update_warp_state__17TObjWarpBossMultiFPv(arg0);
        return;
    case 2:
        update_state__17TObjWarpBossMultiFPv(arg0);
        return;
    case 3:
        warp_boss_handle_window(arg0);
        return;
    case 4:
        TObjWarpBossMulti__sub_8019E798(arg0);
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8019F358
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__12TObjWarpBossFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(u32, s32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 fn_8013157C(s32, void *);

extern s32 lbl_805D4DF0;
extern s32 lbl_805D5C8C;
extern s32 lbl_805D5CA0;
extern s32 lbl_805D5CA4;
extern const f32 lbl_805DC008;
extern const f32 lbl_805DC00C;
extern const f32 lbl_805DC010;

struct Base2_8019f358 { char pad[0x18]; };
struct VObj2_8019f358 : Base2_8019f358 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

void render__12TObjWarpBossFv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0xE) {
        if (fn_8013157C(lbl_805D4DF0 + 0x178, arg0 + 0x38) > lbl_805DC008) {
            return;
        }
        goto block_4;
    }
    if (((VObj2_8019f358*)arg0)->m8(lbl_805DC00C, lbl_805DC010) != 0) {
block_4:
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(lbl_805D5CA0);
        TObjBoss2Tunnel__sub_803DB470(lbl_805D5C8C);
        if (M2C_FIELD(arg0, void **, 0xD0) != 0) {
            begin_effect_render__13TParticleCtrlFv();
            set_global_param__8TObjFishFi(lbl_805D5CA4);
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, u32 *, 0xD0), M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, f32 *, 0xC4));
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019F510
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TObjWarpBossFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__12TObjAreaWarpFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK close_windows__17TObjWarpBossMultiFPv(void *);

extern M2C_UNK __vt__12TObjWarpBoss[];

void *__dt__12TObjWarpBossFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjWarpBoss;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        close_windows__17TObjWarpBossMultiFPv(arg0);
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
