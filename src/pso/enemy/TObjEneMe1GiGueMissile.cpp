#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802CE428___vt__22TObjEneMe1GiGueMissile {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
int queue_destruction__7TObjectFv(void*);
s32 TObjFish__sub_8001ED9C(void *, int);
s32 TObjFish__sub_8001EDC4(void *, int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
s32 TObjPlayer__sub_803D9B2C();
s32 pop_matrix();
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(void *);
s32 TObjEneSlimeOne__sub_803E4AF4(void *, int, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern int lbl_805D6858;
void render__22TObjEneMe1GiGueMissileFv(u8 *arg0);
u16 obj_getField1c(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
u8 * TNeedleShoot__ct(void *, s32, void *, void *);
extern M2C_UNK __vt__22TObjEneMe1GiGueMissile[];
extern s32 lbl_805D3F20;
extern const f32 lbl_805DE6DC;
u8 *TObjEneMe1GiGueMissile__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1);
int queue_destruction__7TObjectFv(void*);
u32 find_entity_by_id(int);
M2C_UNK TObjPlayer__sub_802A445C(void *, int);
M2C_UNK update_lifetime__22TObjEneMe1GiGueMissileFPv(void *);
M2C_UNK TNeedleShoot__sub_802A4694(void *);
extern const f32 lbl_805DE6DC;
extern const f32 lbl_805DE6E0;
void run_task__22TObjEneMe1GiGueMissileFv(u8 *arg0);
}

extern "C" {

void TObjEneMe1GiGueMissile__vt4(void* p);
void TObjEneMe1GiGueMissile__vt7(void* p, void* a1);
void TObjEneMe1GiGue__sub_802CE4E8(void);
void TObjEneMe1GiGue__sub_802CE4EC(void);
void *__dt__22TObjEneMe1GiGueMissileFv(void *arg0, s16 arg1);
void create__22TObjEneMe1GiGueMissileFiiiff(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
int TObjEneMe1GiGueMissile__sub_802CE088(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__12TNeedleShootFv(void *, int);
u32 __nw__7TObjectFUl(M2C_UNK);
int get_barrier_count__15TObjEneMe1GiGueFv(void);
int queue_destruction__7TObjectFv(void*);

void TObjEneMe1GiGueMissile__vt4(void* p) { TObjEneMe1GiGueMissile__sub_802CE088(p, (char*)p + 0x6c); queue_destruction__7TObjectFv(p); }

void TObjEneMe1GiGueMissile__vt7(void* p, void* a1) { TObjEneMe1GiGueMissile__sub_802CE088(p, (char*)a1 + 0x38); queue_destruction__7TObjectFv(p); }

void create__22TObjEneMe1GiGueMissileFiiiff(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *temp_r3;
    temp_r3 = (void *) __nw__7TObjectFUl(0xC4);
    if ((u32) temp_r3 != 0U) {
        TObjEneMe1GiGueMissile__ct((u8 *)(temp_r3), (s32)(arg0), (u8 *)(arg1), (u8 *)(arg2), farg0, farg1);
    }
}

extern M2C_UNK __vt__22TObjEneMe1GiGueMissile[];

void *__dt__22TObjEneMe1GiGueMissileFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEneMe1GiGueMissile;
        __dt__12TNeedleShootFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render__22TObjEneMe1GiGueMissileFv(u8 *arg0) {
  s32 temp_r31;
  if (((void *) (*(u8 * *)&lbl_805D6858)) == 0)
  {
    queue_destruction__7TObjectFv((void*)((void *) arg0));
    return;
  }
  TObjPlayer__sub_803D9B2C();
  begin_effect_render__13TParticleCtrlFv();
  TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x6C));
  temp_r31 = (int) (*((s32 *) (((s8 *) arg0) + 0xA4)));
  rotate_matrix_y((int) 0, temp_r31);
  rotate_matrix_x((int) 0, (int) (*((s32 *) (((s8 *) arg0) + 0xA0))));
  set_global_param__8TObjFishFi((void *) (*((s32 *) (((s8 *) (*((u8 **) (((s8 *) (*(u8 * *)&lbl_805D6858)) + 0x42C)))) + 0x1C))));
  set_global_flag__10TObjPlayerFv();
  temp_r31 = TObjFish__sub_8001ED9C((void *) (*(u8 * *)&lbl_805D6858), (int) 5);
  TObjEneSlimeOne__sub_803E4AF4((void *) TObjFish__sub_8001EDC4((void *) (*(u8 * *)&lbl_805D6858), (int) 1), (int) temp_r31, (f32) (*((f32 *) (((s8 *) arg0) + 0xBC))));
  clear_global_state__10TObjPlayerFv();
  end_effect_render__13TParticleCtrlFv();
  pop_matrix();
}

typedef char RecoveredGlobal_802CE428___vt__22TObjEneMe1GiGueMissile_size[sizeof(RecoveredGlobal_802CE428___vt__22TObjEneMe1GiGueMissile) == 0x28 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
void run_task__22TObjEneMe1GiGueMissileFv(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, u32 *, 0x1C) = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x34)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void*)((void *) (arg0)));
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) (M2C_FIELD(arg0, f32 *, 0xBC) + lbl_805DE6DC);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xBC);
    if (temp_f1 >= lbl_805DE6E0) {
        M2C_FIELD(arg0, f32 *, 0xBC) = (f32) (temp_f1 - lbl_805DE6E0);
    }
    TNeedleShoot__sub_802A4694((void *) (arg0));
    update_lifetime__22TObjEneMe1GiGueMissileFPv((void *) (arg0));
    TObjPlayer__sub_802A445C((void *) (arg0), (int) (1));
}
#pragma pop

u8 *TObjEneMe1GiGueMissile__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    TNeedleShoot__ct(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802CE428___vt__22TObjEneMe1GiGueMissile *)&__vt__22TObjEneMe1GiGueMissile).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F20;
    M2C_FIELD(arg0, f32 *, 0xC0) = farg1;
    M2C_FIELD(arg0, f32 *, 0xAC) = farg0;
    TBoss3Volopt__sub_8022675C(0x4002A600, (u32) (arg0 + 0x6C), 0, 0);
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x34) = obj_getField1c(temp_r3);
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x68));
    if (temp_r3_2 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3_2, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805DE6DC;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    return arg0;
}

void TObjEneMe1GiGue__sub_802CE4E8(void) {  }

    extern int lbl_805D6858;
void TObjEneMe1GiGue__sub_802CE4EC(void) { lbl_805D6858 = get_barrier_count__15TObjEneMe1GiGueFv(); }

}
