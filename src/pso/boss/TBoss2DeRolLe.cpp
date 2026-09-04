#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2DeRolLe__sub_800338BC(void);
void handle_6x13_de_rol_le_boss_actions(void *arg0);
void handle_6x14_de_rol_le_boss_actions_with_target(void *arg0);
void init_from_param__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
int play_sound(void* p, int a1);
void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p);
void set_params__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2);
int spawn_trap__13TBoss2DeRolLeFPvii(void* p, int a1, int a2);
void update_projectile_spawns__13TBoss2DeRolLeFPv(u8 *arg0);
int TBoss3Volopt__sub_8022675C(void*, int, int, int);
M2C_UNK TBoss4Zako__sub_803D8910(int, void *);
s32 TBoss8Dragon__sub_800B9958(void * a0 = 0, u16 a1 = 0);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TObjEneDD__sub_800B9BEC(void *, void *, f32);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s16 a1 = 0);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
M2C_UNK create_particle__17TObjBoss2CeilJunkFv(s32, M2C_UNK);
void *get_enemy_entity(int);
s32 objInBand__FP7GameObjf(void *, f32);
void swap_6x13_fields__13TBoss2DeRolLeFPv(void *);
void swap_endian__13TBoss2DeRolLeFPv(void *);

int spawn_trap__13TBoss2DeRolLeFPvii(void* p, int a1, int a2) { return TOTrapAncient01__sub_80226578((int)(p), (void *)(a1), (void *)(a2), (int)(0), (int)(0)); }
int play_sound(void* p, int a1) { return TBoss3Volopt__sub_8022675C(p, a1, 0, 0); }
void TBoss2DeRolLe__sub_800338BC(void) {  }

extern const f32 TBoss2DeRolLe__data_805D8280;
extern const f32 TBoss2DeRolLe__data_805D8288;
extern const f32 TBoss2DeRolLe__data_805D8294;
extern const f32 TBoss2DeRolLe__data_805D82F0;

void update_projectile_spawns__13TBoss2DeRolLeFPv(u8 *arg0) {
    u8 *temp_r31;

    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x38), (void *) (arg0 + 0x518), (f32) (TBoss2DeRolLe__data_805D8280));
    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x4D0), (void *) (arg0 + 0x524), (f32) (TBoss2DeRolLe__data_805D8280));
    temp_r31 = arg0 + 0x530;
    VecCopy__FP3VecPC3Vec((int) (temp_r31), (void *) (arg0 + 0x524));
    TBoss4Zako__sub_803D8910((int) (temp_r31), (void *) (arg0 + 0x524));
    M2C_FIELD(temp_r31, f32 *, 0) = (f32) (M2C_FIELD(temp_r31, f32 *, 0) * TBoss2DeRolLe__data_805D8288);
    M2C_FIELD(temp_r31, f32 *, 4) = (f32) (M2C_FIELD(temp_r31, f32 *, 4) * TBoss2DeRolLe__data_805D8288);
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) * TBoss2DeRolLe__data_805D8288);
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 0x100) && ((objInBand__FP7GameObjf((void *) (arg0), (f32) (TBoss2DeRolLe__data_805D82F0)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (TBoss2DeRolLe__data_805D8294)) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x53C) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x53C) <= 0x10) {
        TOTrapAncient01__sub_80226578((int)((int) (0x4003AD00)), (void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x530)), (int)((int) (0)), (int)((int) (0)));
        M2C_FIELD(arg0, s32 *, 0x53C) = (s32) (M2C_FIELD(arg0, s32 *, 0x53C) + 1);
    }
}

void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2) {
    create_particle__17TObjBoss2CeilJunkFv(arg2, 0x121);
}

void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3d4) = 0; }
void set_params__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}
void init_from_param__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}

void handle_6x14_de_rol_le_boss_actions_with_target(void *arg0) {
    void *x;
    swap_endian__13TBoss2DeRolLeFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        set_params__13TBoss2DeRolLeFPvPv((void *)(x), (void *)(arg0));
    }
}

void handle_6x13_de_rol_le_boss_actions(void *arg0) {
    void *x;
    swap_6x13_fields__13TBoss2DeRolLeFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        init_from_param__13TBoss2DeRolLeFPvPv((void *)(x), (void *)(arg0));
    }
}

}
