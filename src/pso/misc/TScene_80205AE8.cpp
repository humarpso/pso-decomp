#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
u8 *TScene__sub_80081A30(void *, M2C_UNK, s32, s32, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern void **TScene__data_805D5FD0;
void TScene__sub_80205CC4(s32 arg0);
}

extern "C" {

void TScene__sub_80205AE8(void);
void TScene__sub_80205FD0(void);
void copy_header_and_vec__6TSceneFPvPv(void* p, void* q);

void TScene__sub_80205AE8(void) {  }

void TScene__sub_80205CC4(s32 arg0) {
  s8 *new_var;
  s16 temp_r0;
  u8 *temp_r3;
  u8 *var_r31;
  var_r31 = (u8 *) (*TScene__data_805D5FD0);
  do
  {
    new_var = (s8 *) var_r31;
    temp_r3 = (u8 *) __nw__7TObjectFUl(0x38);
    if (temp_r3 != 0)
    {
      TScene__sub_80081A30(temp_r3, arg0, *((s32 *) (((s8 *) var_r31) + 4)), *((s32 *) (((s8 *) var_r31) + 8)), (s32) (*((s16 *) (((s8 *) var_r31) + 0))));
    }
    temp_r0 = *((s16 *) (new_var + 0xC));
    var_r31 += 0xC;
  }
  while (temp_r0 >= 0);
}

void copy_header_and_vec__6TSceneFPvPv(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); }

void TScene__sub_80205FD0(void) {  }

}
