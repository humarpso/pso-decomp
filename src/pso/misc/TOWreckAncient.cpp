#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base1_8017dce0 { char pad[0x18]; };
struct VObj1_8017dce0 : Base1_8017dce0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8017DDA8_lbl_804B53D0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8017DDA8_lbl_804B53D0_size[sizeof(RecoveredGlobal_8017DDA8_lbl_804B53D0) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8017DDA8_lbl_804B5408 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8017DDA8_lbl_804B5408_size[sizeof(RecoveredGlobal_8017DDA8_lbl_804B5408) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8017DDA8_lbl_804B53D0 lbl_804B53D0;
extern RecoveredGlobal_8017DDA8_lbl_804B5408 lbl_804B5408;
extern u32 lbl_805D5AF8;
extern u32 lbl_805D5AFC;
void TOWreckAncient__sub_8017DDA8(void);
}

extern "C" {

void *__dt__14TOWreckAncientFv(void *arg0, s16 arg1);
void draw_model__14TOWreckAncientFPv(u8 *arg0);
void free_statics__14TOWreckAncientFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK set_global_param__8TObjFishFi(s32);

void draw_model__14TOWreckAncientFPv(u8 *arg0) {
    VObj1_8017dce0 *self = (VObj1_8017dce0 *)arg0;
    if (self->m8(M2C_FIELD(arg0, f32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xB0)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        TObjPlayer__sub_803D9B78();
    }
}

extern u32 lbl_805D5AF8;
extern u32 lbl_805D5AFC;

void free_statics__14TOWreckAncientFv(void) {
    if ((u32) lbl_805D5AF8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5AF8, 1);
        lbl_805D5AF8 = 0U;
    }
    if ((u32) lbl_805D5AFC != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5AFC, 1);
        lbl_805D5AFC = 0U;
    }
}

extern M2C_UNK __vt__14TOWreckAncient[];

void TOWreckAncient__sub_8017DDA8(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r0_2;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B53D0.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D5AF8) = var_r0;
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0) {
        var_r0_2 = (long) (TLobby__sub_80020004((void *) temp_r3_2, 1, &lbl_804B5408.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D5AFC) = var_r0_2;
}

void *__dt__14TOWreckAncientFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOWreckAncient;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
