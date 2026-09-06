#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802878B8
{
  f32 sp8;
  f32 spC;
};

extern "C" {
M2C_UNK TWindowSubStatusDisp__sub_8024FD8C(void *, int, int, int, f32);
M2C_UNK TWindowSubStatusDisp__sub_802500F4(void *, int, int, f32, f32, f32, f32, f32, f32);
extern f32 lbl_805DD840;
extern const f32 lbl_805DD844;
extern const f32 lbl_805DD868;
extern const f32 lbl_805DD86C;
extern const f32 lbl_805DD870;
extern const f32 lbl_805DD874;
void TWindowSubStatusDisp__sub_802878B8(u8 *arg0, u8 *arg1);
extern f32 lbl_805DD840;
extern const f32 lbl_805DD860;
extern const f32 lbl_805DD864;
f32 TWindowSubStatusDisp__sub_802877A4(f32 farg0);
}

extern "C" {

f32 TWindowSubStatusDisp__sub_80287570(void *arg0);
void TWindowSubStatusDisp__sub_802879B0(void *arg0);
u8 TWindowSubStatusDisp__sub_80287AC4(u8 *arg0);
s32 deleting_destructor__20TWindowSubStatusDispFis(s32 arg0, s16 arg1);
f32 get_base_y__20TWindowSubStatusDispFf(f32 farg0);
void set_entry_state__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1);
void update__20TWindowSubStatusDispFPvPv(void* p, void* a1);
M2C_UNK TWindowSubStatusDisp__sub_802877C8();
int TWindowSubStatusDisp__sub_80287860(void*);
M2C_UNK __dl__FPv();

extern f32 lbl_805DD840;

f32 TWindowSubStatusDisp__sub_80287570(void *arg0) {
    return lbl_805DD840 + M2C_FIELD(arg0, f32 *, 0xC);
}

extern f32 lbl_805DD840;

f32 get_base_y__20TWindowSubStatusDispFf(f32 farg0) {
    return lbl_805DD840 + farg0;
}

f32 TWindowSubStatusDisp__sub_802877A4(f32 farg0) {
  float new_var;
  f32 temp_f1;
  f32 temp_f2;
  f32 temp_f0;
  temp_f0 = lbl_805DD860;
  temp_f1 = (*(const f32 *)&lbl_805DD840);
  temp_f2 = temp_f1;
  new_var = temp_f0 + farg0;
  temp_f1 = new_var;
  temp_f0 = lbl_805DD864;
  temp_f1 = temp_f1 - temp_f2;
  if (temp_f1 < temp_f0)
  {
    temp_f1 = temp_f0;
  }
  return temp_f1;
}

void set_entry_state__20TWindowSubStatusDispFPvc(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x18) = arg1;
    TWindowSubStatusDisp__sub_802877C8();
}

typedef struct Stack_802878B8 Stack_802878B8;
#pragma fp_contract on
void TWindowSubStatusDisp__sub_802878B8(u8 *arg0, u8 *arg1) {
  Stack_802878B8 stack;
  f32 new_var;
  f32 temp_f4;
  if (((s32) (*((s32 *) (((s8 *) arg1) + 0x30)))) >= 0)
  {
    if (lbl_805DD868 && lbl_805DD868)
    {
    }
    stack.sp8 = -((lbl_805DD868 * (*((f32 *) (((s8 *) arg0) + 0x10)))) - ((lbl_805DD868 * ((*(const f32 *)&lbl_805DD840) + (*((f32 *) (((s8 *) arg0) + 0xC))))) + ((*((f32 *) (((s8 *) arg1) + 0))) + (*((f32 *) (((s8 *) arg0) + 4))))));
    temp_f4 = *((f32 *) (((s8 *) arg1) + 4));
    stack.spC = lbl_805DD86C + (temp_f4 + (*((f32 *) (((s8 *) arg0) + 8))));
    TWindowSubStatusDisp__sub_802500F4((void *) arg1, (int) 0, (int) 1, (f32) (lbl_805DD844 / (lbl_805DD870 + (*((f32 *) (((s8 *) arg1) + 0x38))))), (f32) lbl_805DD874, (f32) lbl_805DD844, (f32) temp_f4, (f32) lbl_805DD86C, (f32) lbl_805DD868);
    new_var = *((f32 *) (((s8 *) arg0) + 0x1C));
    TWindowSubStatusDisp__sub_8024FD8C((void *) (&stack.sp8), (int) (*((s32 *) (((s8 *) arg0) + 0))), (int) (*((s32 *) (((s8 *) arg0) + 0x14))), (int) 1, (f32) new_var);
  }
}

void update__20TWindowSubStatusDispFPvPv(void* p, void* a1) { TWindowSubStatusDisp__sub_80287860(p); TWindowSubStatusDisp__sub_802878B8((u8 *)(p), (u8 *)(a1)); }

void TWindowSubStatusDisp__sub_802879B0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + M2C_FIELD(arg0, f32 *, 0x20));
}

s32 deleting_destructor__20TWindowSubStatusDispFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

u8 TWindowSubStatusDisp__sub_80287AC4(u8 *arg0) {
    return (u8) ((u32) __cntlzw(M2C_FIELD(arg0, u8 *, 0x19) & 1) >> 5);
}

}
