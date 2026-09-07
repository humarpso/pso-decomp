#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_800496D8
{
  s32 sp8;
  s32 spC;
  s32 sp10;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
f32 scale_velocity__19TObjGyaranzoMissileFPvf(void *, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjPlayer__sub_800495F8(void *);
u32 TObjButterflyLobby__sub_8007A5D8(void *, void *, int);
M2C_UNK TObjPlayer__sub_80142170(void *, void *, void *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *, int);
extern const f32 lbl_805D8890;
void TObjPlayer__sub_800496D8(u8 *arg0);
extern s32 lbl_805D4D1C;
f32 TObjPlayer__sub_800499FC(s32 arg0);
}

extern "C" {

void TObjPlayer__sub_800496D4(void);
void TObjPlayer__sub_80049A0C(void* p);
u8 check_flag__10TObjPlayerFPvi(void *arg0, s32 arg1);
void *destroy__10TObjPlayerFPvs(void *arg0, s16 arg1);
void draw_obj_model(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);

u8 check_flag__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x334) & arg1) != 0);
}

void TObjPlayer__sub_800496D4(void) {  }

extern M2C_UNK lbl_80484A94[];

typedef struct Stack_800496D8 Stack_800496D8;
void TObjPlayer__sub_800496D8(u8 *arg0) {
  Stack_800496D8 stack;
  s32 temp_r0;
  s32 temp_r5;
  u8 *temp_r3;
  s32 new_var;
  u8 *temp_r3_2;
  u8 *temp_r3_3;
  temp_r3 = (u8 *) TPlayerBattleCtrl4P__sub_801BA74C(*((s32 *) (((s8 *) arg0) + 0xCC)));
  if (temp_r3)
  {
    temp_r5 = *((s32 *) (((s8 *) temp_r3) + 0x2FC));
    new_var = *((s32 *) (((s8 *) temp_r3) + 0x300));
    stack.sp8 = temp_r5;
    stack.spC = new_var;
    stack.sp10 = *((s32 *) (((s8 *) temp_r3) + 0x304));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (arg0 + 0x38), (int) temp_r5);
    scale_velocity__19TObjGyaranzoMissileFPvf(&stack.sp8, TObjPlayer__sub_800499FC((s32)((int) 1)));
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0xB4), (void *) (&stack.sp8));
    scale_velocity__19TObjGyaranzoMissileFPvf(arg0 + 0xB4, TObjPlayer__sub_800499FC((s32)((int) 0)));
  }
  VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
  TBoss4Zako__sub_803D8910((void *) (arg0 + 0x38), (void *) (arg0 + 0xB4));
  TObjPlayer__sub_80142170((void *) (arg0 + 0xB4), (void *) (arg0 + 0x60), (void *) (arg0 + 0x64));
  *((s32 *) (((s8 *) arg0) + 0x64)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x64))) - 0x4000);
  temp_r3_2 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0xD4)));
  if (temp_r3_2 != 0)
  {
    copy_pos__11TNowLoadingFPvPv(temp_r3_2, arg0 + 0x38);
    copy_vec3__11TBoss4Type2FPvPv(*((u8 **) (((s8 *) arg0) + 0xD4)), arg0 + 0x5C);
  }
  temp_r3_3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0xD8)));
  if (temp_r3_3 != 0)
  {
    copy_pos__11TNowLoadingFPvPv(temp_r3_3, arg0 + 0x38);
    copy_vec3__11TBoss4Type2FPvPv(*((u8 **) (((s8 *) arg0) + 0xD8)), arg0 + 0x5C);
  }
  if (TObjButterflyLobby__sub_8007A5D8((void *) (arg0 + 0x44), (void *) (arg0 + 0x38), (int) (-1)) != 0U)
  {
    queue_destruction__7TObjectFv(arg0);
    return;
  }
  if (((*((f32 *) (((s8 *) arg0) + 0x3C))) < lbl_805D8890) && (TObjPlayer__sub_800495F8((void *) arg0) != 0))
  {
    queue_destruction__7TObjectFv(arg0);
  }
  temp_r0 = (*((s32 *) (((s8 *) arg0) + 0xD0))) - 1;
  *((s32 *) (((s8 *) arg0) + 0xD0)) = temp_r0;
  if (temp_r0 <= 0)
  {
    queue_destruction__7TObjectFv(arg0);
    return;
  }
  TOTrapAncient01__sub_80226578((int) 0x4003C11D, (void *) arg0, (void *) (arg0 + 0x38), (int) 0, (int) 0);
}

void *destroy__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484A94;
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); }
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD8)); }
        if (M2C_FIELD(arg0, void **, 0x10) != NULL) { TObjPlayer__sub_80049A0C((void*)(M2C_FIELD(arg0, void **, 0x10))); }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

f32 TObjPlayer__sub_800499FC(s32 arg0) {
    return M2C_FIELD((lbl_805D4D1C + (arg0 * 4)), f32 *, 0);
}

void TObjPlayer__sub_80049A0C(void* p) { *(u32*)((char*)p + 0x388) &= 0xffefffff; }

extern s32 some_id_805c6f74;

void draw_obj_model(u8 *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xB0));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0xAC));
    TObjPlayer__sub_803D9B78();
}

}
