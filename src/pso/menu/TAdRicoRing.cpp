#include "pso/TAdRicoRing.h"

TAdRicoRing::~TAdRicoRing() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void queue_destruction__7TObjectFv(void *);
void update_position__11TAdRicoRingFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, s32);
void clear_flags__11TAdRicoRingFPvUi(void *, s32);
volatile int TObjPlayer__sub_8001BEF8(void *, s32);
extern const f32 lbl_805D7E4C;
extern const f32 lbl_805D7E54;
void run_task__11TAdRicoRingFv(u8 *arg0);
}

extern "C" {

void render__11TAdRicoRingFv(void* p);
void set_scale4__15TAdRicoRingCtrlFPvf(void *arg0, f32 farg0);
void update_position__11TAdRicoRingFPv(void *arg0);
int TBoss7Tentacle__sub_803D8A6C(void*, void*, void*, void*);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjFish__sub_803E46BC(void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int func_803e11e8__FUl(void*);
int func_803e11f0__Fv(void);
int set_global_param__8TObjFishFi(void*);

void render__11TAdRicoRingFv(void* p) { TObjPlayer__sub_803D9B2C(p); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x50)); TOHangerMachine01__sub_803D9C00((char*)p + 0x58); TBoss7Tentacle__sub_803D8A6C((void*)0, *(void**)((char*)p + 0x64), *(void**)((char*)p + 0x68), *(void**)((char*)p + 0x6c)); func_803e11e8__FUl((void*)1); TObjFish__sub_803E46BC(*(void**)((char*)p + 0x4c)); func_803e11e8__FUl((void*)2); TObjFish__sub_803E46BC(*(void**)((char*)p + 0x4c)); func_803e11f0__Fv(); TObjPlayer__sub_803D9B78(); }

void set_scale4__15TAdRicoRingCtrlFPvf(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x20) = farg0;
    M2C_FIELD(arg0, f32 *, 0x24) = farg0;
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
}

void update_position__11TAdRicoRingFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + M2C_FIELD(arg0, f32 *, 0x38));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
}
void run_task__11TAdRicoRingFv(u8 *arg0) {
  f32 temp_f1;
  if (TObjPlayer__sub_8001BEF8(arg0 + 0x2C, 1) != 0)
  {
    update_position__11TAdRicoRingFPv(arg0);
    if ((*((f32 *) (((s8 *) arg0) + 0x1C))) <= lbl_805D7E54)
    {
      queue_destruction__7TObjectFv(arg0);
      return;
    }
  }
  if (TObjPlayer__sub_8001BEF8(arg0 + 0x2C, 2) != 0)
  {
    update_position__11TAdRicoRingFPv(arg0);
    temp_f1 = *((f32 *) (((s8 *) arg0) + 0x34));
    if (temp_f1 <= (*((f32 *) (((s8 *) arg0) + 0x1C))))
    {
      *((f32 *) (((s8 *) arg0) + 0x1C)) = temp_f1;
      *((f32 *) (((s8 *) arg0) + 0x28)) = (f32) lbl_805D7E4C;
      *((f32 *) (((s8 *) arg0) + 0x24)) = (f32) lbl_805D7E4C;
      *((f32 *) (((s8 *) arg0) + 0x20)) = (f32) lbl_805D7E4C;
      clear_flags__11TAdRicoRingFPvUi(arg0 + 0x2C, 2);
    }
  }
  *((s32 *) (((s8 *) arg0) + 0x68)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x68))) + (*((s32 *) (((s8 *) arg0) + 0x30))));
  if (TObjPlayer__sub_8001BEF8(arg0 + 0x2C, 4) != 0)
  {
    *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) + (*((s32 *) (((s8 *) arg0) + 0x48))));
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x30)))) >= 0xCCC)
    {
      clear_flags__11TAdRicoRingFPvUi(arg0 + 0x2C, 4);
    }
  }
  else
  {
    *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) - (*((s32 *) (((s8 *) arg0) + 0x48))));
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x30)))) <= 0x5B0)
    {
      set_flags__10TObjPlayerFPvUi(arg0 + 0x2C, 4);
    }
  }
}

}
