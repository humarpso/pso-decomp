#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredFields_8003A6F4_arg0 {
 s32 field_0;
 u8 unknown_4[0x14];
 M2C_UNK *unk18;
 u8 unknown_1C[0x2C];
 f32 field_48;
 u8 unknown_4C[8];
 f32 field_54;
 u8 unknown_58[4];
 s32 field_5C;
 s32 field_60;
 u8 unknown_64[0x2C];
 f32 field_90;
 f32 field_94;
 f32 field_98;
 u8 unknown_9C[0xC];
 s32 field_A8;
 s32 field_AC;
 s32 field_B0;
 f32 field_B4;
};

struct RecoveredGlobal_8003A6F4_lbl_80435BD8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 TTecZondeEff__sub_8002DF28();
s32 calc_random_scaled__10TObjPlayerFv();
s32 spawn_effect__15TObjBoss2TunnelFiPvPv(void *, void *, void *, f32, f32);
M2C_UNK TPhotonMagicSquare__sub_801A2640();
s32 rand();
extern RecoveredGlobal_8003A6F4_lbl_80435BD8 lbl_80435BD8;
extern M2C_UNK __vt__17TObjBoss2CeilJunk[];
extern s32 lbl_805D26E8;
extern const f32 lbl_805D856C;
extern const f32 lbl_805D859C;
extern const f32 lbl_805D85A0;
extern const f32 lbl_805D85A4;
extern const f32 lbl_805D85A8;
u8 *TObjBoss2CeilJunk__ct(struct RecoveredFields_8003A6F4_arg0 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__17TObjBoss2CeilJunkFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__17TObjBoss2CeilJunk[];

void *__dt__17TObjBoss2CeilJunkFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjBoss2CeilJunk;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_8003A6F4_lbl_80435BD8_size[sizeof(RecoveredGlobal_8003A6F4_lbl_80435BD8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk_size[sizeof(RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk) == 0x38 ? 1 : -1];
u8 *TObjBoss2CeilJunk__ct(struct RecoveredFields_8003A6F4_arg0 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 temp_f2;
    TPhotonMagicSquare__sub_801A2640();
    arg0->unk18 = &(*(RecoveredGlobal_8003A6F4___vt__17TObjBoss2CeilJunk *)&__vt__17TObjBoss2CeilJunk).value;
    arg0->field_0 = lbl_805D26E8;
    VecCopy__FP3VecPC3Vec(&arg0->unknown_1C[0x1C], (void *) arg2);
    temp_f2 = (f32) rand();
    temp_f1 = lbl_805D85A4 * temp_f2;
    arg0->field_AC = (s32) (lbl_805D85A0 * temp_f1);
    if (spawn_effect__15TObjBoss2TunnelFiPvPv(&arg0->unknown_1C[0x1C], &arg0->unknown_1C[0x28], arg0->unknown_9C, temp_f1, temp_f2) == 0) {
        arg0->field_A8 = 0;
    } else {
        arg0->field_A8 = 2;
        arg0->field_54 = arg0->field_48 + M2C_FIELD(((u8 *)(&lbl_80435BD8.value) + (arg0->field_AC * 4)), f32 *, 0);
    }
    arg0->field_60 = calc_random_scaled__10TObjPlayerFv();
    arg0->field_5C = (s32) (lbl_805D85A8 * TTecZondeEff__sub_8002DF28());
    arg0->field_90 = lbl_805D859C;
    arg0->field_94 = lbl_805D859C;
    arg0->field_98 = lbl_805D859C;
    arg0->field_B0 = 0;
    arg0->field_B4 = lbl_805D856C;
    return (unsigned char *) (arg0);
}
#pragma pop

}
