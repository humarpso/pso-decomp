#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int queue_destruction__7TObjectFv(void*);
s32 TObjFish__sub_8001ED9C(void *, int);
s32 TObjFish__sub_8001EDC4(void *, int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 TObjPlayer__sub_803D9214(int, int);
s32 TObjContainerIdo__sub_803D96A8(int, int);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(void *);
s32 TObjEneSlimeOne__sub_803E4AF4(void *, int, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern int lbl_805D6858;
void render__22TObjEneMe1GiGueMissileFv(u8 *arg0);
}

extern "C" {

void TObjEneMe1GiGueMissile__vt4(void* p);
void TObjEneMe1GiGueMissile__vt7(void* p, void* a1);
void TObjEneMe1GiGue__sub_802CE4E8(void);
void TObjEneMe1GiGue__sub_802CE4EC(void);
void *__dt__22TObjEneMe1GiGueMissileFv(void *arg0, s16 arg1);
void create__22TObjEneMe1GiGueMissileFiiiff(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
M2C_UNK TObjEneMe1GiGueMissile__ct(void *, s32, s32, s32, f32, f32);
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
        TObjEneMe1GiGueMissile__ct(temp_r3, arg0, arg1, arg2, farg0, farg1);
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
  TObjPlayer__sub_803D9214((int) 0, temp_r31);
  TObjContainerIdo__sub_803D96A8((int) 0, (int) (*((s32 *) (((s8 *) arg0) + 0xA0))));
  set_global_param__8TObjFishFi((void *) (*((s32 *) (((s8 *) (*((u8 **) (((s8 *) (*(u8 * *)&lbl_805D6858)) + 0x42C)))) + 0x1C))));
  set_global_flag__10TObjPlayerFv();
  temp_r31 = TObjFish__sub_8001ED9C((void *) (*(u8 * *)&lbl_805D6858), (int) 5);
  TObjEneSlimeOne__sub_803E4AF4((void *) TObjFish__sub_8001EDC4((void *) (*(u8 * *)&lbl_805D6858), (int) 1), (int) temp_r31, (f32) (*((f32 *) (((s8 *) arg0) + 0xBC))));
  clear_global_state__10TObjPlayerFv();
  end_effect_render__13TParticleCtrlFv();
  TObjPlayer__sub_803D9B78();
}

void TObjEneMe1GiGue__sub_802CE4E8(void) {  }

    extern int lbl_805D6858;
void TObjEneMe1GiGue__sub_802CE4EC(void) { lbl_805D6858 = get_barrier_count__15TObjEneMe1GiGueFv(); }

}
