#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredFields_800413C8_arg0 {
    u8 unknown_0[0x24];
    s32 field_24;
    u8 unknown_28[0x8];
    s32 field_30;
    s32 field_34;
    f32 field_38;
    f32 field_3C;
    f32 field_40;
    u8 unknown_44[0x1C];
    s32 field_60;
    u8 unknown_64[0x50];
    u32 field_B4;
    u8 unknown_B8[0x2D4];
    s32 field_38C;
};

extern "C" {
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(int, int);
s32 check_demo_mode__10TObjPlayerFv();
s32 toggle_particle_effect__10TObjPlayerFv();
s32 TObjLight__sub_80134098();
s32 TObjLight__sub_80134194(void *);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 end_effect_render__13TParticleCtrlFv();
f32 TBoss8Dragon__sub_803D64C0(int);
s32 TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
s32 TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D9624(int, f32, f32, f32);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(int);
s32 TObjFish__sub_803E46BC(int);
extern s32 TBoss3VoloptHiraisin__data_805D4C80;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D8708;
extern const f32 lbl_805D8710;
extern const f32 lbl_805D8718;
extern const f32 lbl_805D871C;
extern const f32 lbl_805D8720;
extern const f32 lbl_805D8724;
extern const f32 lbl_805D8728;
extern const f32 lbl_805D872C;
extern const f32 lbl_805D8730;
void render__20TBoss3VoloptHiraisinFv(u8 *arg0);
}

extern "C" {

void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK TObjEnemyCustom__sub_800C7860(void *, s32);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(s32, M2C_UNK *, s32, void *, s32);
M2C_UNK trigger_dell_biter_events__10TObjPlayerFPv(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_80483BB8[];
extern s32 TBoss3VoloptHiraisin__data_805D4C80;
extern s32 lbl_805D4C88;

void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r4_2;

    create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D4C88, lbl_80483BB8, TObjFish__sub_8001EDB0(TBoss3VoloptHiraisin__data_805D4C80, 0x10), arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
    trigger_dell_biter_events__10TObjPlayerFPv(arg0 + 0x2FC);
    TBoss3Volopt__sub_8022675C(0x4001C112, arg0 + 0x38, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s16 *, 0x33E) = temp_r4;
    M2C_FIELD(arg0, s16 *, 0x32C) = temp_r4;
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r4_2 & ~0xA00);
    TObjEnemyCustom__sub_800C7860(arg0, temp_r4_2);
}
#pragma push
#pragma fp_contract on
typedef char RecoveredFields_800413C8_arg0_24_offset[offsetof(RecoveredFields_800413C8_arg0, field_24) == 0x24 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_30_offset[offsetof(RecoveredFields_800413C8_arg0, field_30) == 0x30 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_34_offset[offsetof(RecoveredFields_800413C8_arg0, field_34) == 0x34 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_38_offset[offsetof(RecoveredFields_800413C8_arg0, field_38) == 0x38 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_3C_offset[offsetof(RecoveredFields_800413C8_arg0, field_3C) == 0x3C ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_40_offset[offsetof(RecoveredFields_800413C8_arg0, field_40) == 0x40 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_60_offset[offsetof(RecoveredFields_800413C8_arg0, field_60) == 0x60 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_B4_offset[offsetof(RecoveredFields_800413C8_arg0, field_B4) == 0xB4 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_38C_offset[offsetof(RecoveredFields_800413C8_arg0, field_38C) == 0x38C ? 1 : -1];
void render__20TBoss3VoloptHiraisinFv(u8 *arg0) {
    f32 temp_f31;
    if (!(((RecoveredFields_800413C8_arg0 *)arg0)->field_30 & 0x02000000) && (((VObj_18_26a62c *)(arg0))->m8(lbl_805D8718, lbl_805D871C) != 0)) {
        set_global_param__8TObjFishFi((int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_24));
        lbl_805D5660 = some_id_805c6f74;
        some_id_805c6f74 |= 0x01000000;
        TObjLight__sub_80134194((void *) (arg0));
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        if ((u32) ((RecoveredFields_800413C8_arg0 *)arg0)->field_B4 == 8U) {
            TObjPlayer__sub_803D9624((int) (0), (f32) (lbl_805D8720), (f32) (lbl_805D8724), (f32) (lbl_805D8720));
        }
        TObjPlayer__sub_803D9624((int) (0), (f32) (lbl_805D8720), (f32) (TBoss8Dragon__sub_803D64C0((int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_38C))), (f32) (lbl_805D8720));
        TObjPlayer__sub_803D9214((int) (0), (int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_60));
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjFish__sub_803E46BC((int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_34));
        } else {
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
        }
        TObjPlayer__sub_803D9B78();
        TObjLight__sub_80134098();
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 = lbl_805D5660;
        if (((RecoveredFields_800413C8_arg0 *)arg0)->field_3C < lbl_805D8708) {
            TObjPlayer__sub_803D9B2C();
            temp_f31 = -((lbl_805D872C * (((RecoveredFields_800413C8_arg0 *)arg0)->field_3C - lbl_805D8710)) - lbl_805D8728);
            TObjPlayer__sub_803D9624((int) (0), (f32) (((RecoveredFields_800413C8_arg0 *)arg0)->field_38), (f32) (lbl_805D8730), (f32) (((RecoveredFields_800413C8_arg0 *)arg0)->field_40));
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f31), (f32) (temp_f31), (f32) (temp_f31));
            set_global_param__8TObjFishFi((int) (TObjFish__sub_8001EDB0((s32)((int) (TBoss3VoloptHiraisin__data_805D4C80)), (M2C_UNK)((int) (0)))));
            TObjFish__sub_803E46BC((int) (TObjFish__sub_8001EDC4((int) (TBoss3VoloptHiraisin__data_805D4C80), (int) (0))));
            TObjPlayer__sub_803D9B78();
        }
    }
}
#pragma pop

}
