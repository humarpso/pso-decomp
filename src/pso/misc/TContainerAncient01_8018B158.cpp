#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
int TObjEneDellBiter__sub_80087350(void*, void*);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
void TBoss1Dragon__sub_80143504(void *);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
s32 __cvt_fp2unsigned(f32);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 TContainerAncient01__data_805DBD34;
void TContainerAncient01__sub_8018B48C(u8 *arg0);
}

extern "C" {

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2);
void reset_state__19TContainerAncient01FPv(void* a0);
M2C_UNK TContainerAncient01__sub_8018B700();

    extern const float TContainerAncient01__data_805DBD1C;

void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2) { TObjEneDellBiter__sub_80087350(a1, a2); }

void reset_state__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

void TContainerAncient01__sub_8018B48C(u8 *arg0) {
  TBoss1Dragon__sub_80143504(arg0);
  if (((__cvt_fp2unsigned(*((f32 *) (((s8 *) arg0) + 0x2B4))) & 0xFFFFFFFF) % 15) == 0)
  {
    TContainerAncient01__sub_8018B158((void*)(arg0), (void*)(arg0 + 0x344), (void*)((void *) 0x7D));
  }
  if (TContainerAncient01__data_805DBD34 <= (*((f32 *) (((s8 *) arg0) + 0x2B4))))
  {
    *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
    *((s16 *) (((s8 *) arg0) + 0xB8)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x326)));
    *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
  }
}

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            TContainerAncient01__sub_8018B700();
            M2C_FIELD(arg0, s32 *, 0x35C) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0x35C) = 1;
    }
}

}
