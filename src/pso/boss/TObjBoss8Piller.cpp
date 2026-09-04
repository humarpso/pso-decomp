#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjBoss8Piller.h"

TObjBoss8Piller::~TObjBoss8Piller() {}
#else
#if PSO_CLASS_PACKAGE == 0x8030ADBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TObjBoss8PillerFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 is_any_teammate_in_state__10TObjPlayerFv();
s32 is_split_screen();

extern u8 *TObjBoss8Piller__data_805D6A78;
extern const f32 lbl_805DF150;

void render__15TObjBoss8PillerFv(u8 *arg0) {
    s32 var_r31;

    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        if (is_split_screen() != 0) {
            var_r31 = M2C_FIELD(M2C_FIELD(TObjBoss8Piller__data_805D6A78, void **, 0x42C), s32 *, 0x28);
        } else {
            var_r31 = M2C_FIELD(M2C_FIELD(TObjBoss8Piller__data_805D6A78, void **, 0x42C), s32 *, 8);
        }
        set_global_param__8TObjFishFi((void *) (M2C_FIELD(M2C_FIELD(TObjBoss8Piller__data_805D6A78, void **, 0x42C), s32 *, 0xC)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x1C));
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (lbl_805DF150), (f32) (lbl_805DF150), (f32) (lbl_805DF150));
        TObjEneSlimeOne__sub_803E4AF4((int) (var_r31), (int) (M2C_FIELD(arg0, s32 *, 0x2C)), (f32) (M2C_FIELD(arg0, f32 *, 0x28)));
        TObjPlayer__sub_803D9B78();
        reset_transform_state__10TObjPlayerFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030B010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_held_object__15TObjBoss8PillerFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjBoss8Piller__data_805D6A78;

void free_held_object__15TObjBoss8PillerFv(void) {
    if ((u32) TObjBoss8Piller__data_805D6A78 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjBoss8Piller__data_805D6A78, 1);
        TObjBoss8Piller__data_805D6A78 = 0U;
    }
}

}
#endif
#endif
