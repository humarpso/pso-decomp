#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdDrawLineTask__sub_80019A8C(void* p, void* q);
s32 TObject__sub_80019A60(void);
int fn_80019AB0(void);
int fn_80019B08(void);
void func_80019A68__Fv(void);
void queue_destruction__7TObjectFv(void *arg0);
M2C_UNK TBoss8Dragon__sub_8036B088();
M2C_UNK fn_8036B18C();

void queue_destruction__7TObjectFv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) | 1);
}

extern s32 lbl_805D4A38;

s32 TObject__sub_80019A60(void) {
    return lbl_805D4A38;
}

void func_80019A68__Fv(void) {
    fn_8036B18C();
    TBoss8Dragon__sub_8036B088();
}

void TAdDrawLineTask__sub_80019A8C(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); }

int fn_80019AB0(void) { return 0; }
int fn_80019B08(void) { return 0; }

}
