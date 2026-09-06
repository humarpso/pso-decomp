#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int queue_destruction__7TObjectFv(void*);
M2C_UNK TObjFish__sub_800660D4(int, int, int, int, int, f32);
s32 TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 queue_boss_effect__10TObjPlayerFPv(int);
s32 TObjPlayer__sub_802E80A0();
extern const f32 TBoss7Tentacle__data_805DEC00;
void TBoss7Tentacle__sub_802EF800(u8 *arg0);
}

extern "C" {

void TBoss7Tentacle__sub_802EF954(void* p);
s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0);
int disallow_rendering__7TObjectFv(void*);
int queue_destruction__7TObjectFv(void*);

extern M2C_UNK TBoss7Tentacle__data_804740C8;
extern const f32 TBoss7Tentacle__data_805DEC00;
extern const f32 TBoss7Tentacle__data_805DEC04;

void TBoss7Tentacle__sub_802EF800(u8 *arg0) {
  s32 temp_r31;
  s32 temp_r3;
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0x40)))) != 0U)
  {
    queue_destruction__7TObjectFv((void*)(*((void **) (((s8 *) arg0) + 0x40))));
    *((u32 *) (((s8 *) arg0) + 0x40)) = 0U;
  }
  temp_r31 = TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x1C), (int) 0x215);
  temp_r3 = temp_r31;
  if (temp_r3 != 0)
  {
    temp_r31 = TObjPlayer__sub_802E80A0();
    TObjFish__sub_800660D4((int) temp_r3, (int) queue_boss_effect__10TObjPlayerFPv((int) 4), (int) temp_r31, (int) 0, (int) 0, (f32) (*(f32 *)&TBoss7Tentacle__data_805DEC00));
  }
  TBoss3Volopt__sub_8022675C((int) 0x3A809, (void *) (arg0 + 0x1C), (int) 0, (int) 0);
}

s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0) {
    f32 temp_f4;

    temp_f4 = M2C_FIELD(arg0, f32 *, 0x74);
    if (temp_f4 < ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), u32 *, 4) - TBoss7Tentacle__data_805DEC00)) {
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) (temp_f4 + farg0);
        return 0;
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) TBoss7Tentacle__data_805DEC04;
    return 1;
}

extern const f32 TBoss7Tentacle__data_805DEC00;

void TBoss7Tentacle__sub_802EF954(void* p) { if (advance_toward_limit__14TBoss7TentacleFPvf((void *)(p), TBoss7Tentacle__data_805DEC00) != 0) { queue_destruction__7TObjectFv(p); disallow_rendering__7TObjectFv(p); } }

}
