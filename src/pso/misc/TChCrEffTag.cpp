#include "pso/TChCrEffTag.h"

TChCrEffTag::~TChCrEffTag() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8029AA74 {
    f32 sp8;
    f32 spC;
};

struct RecoveredGlobal_8029AA74_lbl_804652A4 {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 TChCrEffTagStr__sub_8029AED0(int);
u32 create_str__11TChCrEffTagFPvPvPv(void *, int, void *);
extern RecoveredGlobal_8029AA74_lbl_804652A4 lbl_804652A4;
extern s32 TChCrEffTag__data_805D3D0C;
extern const f32 lbl_805DDC90;
extern const f32 lbl_805DDC94;
void TChCrEffTag__sub_8029AA74(u8 *arg0);
}

extern "C" {

void render__11TChCrEffTagFv(void* p);
int fn_80141A30(void);
int fn_8029A97C(void*);
int fn_8029A9B8(void*);
int set_depth_buffer_settings_1__Fv(void*);

void render__11TChCrEffTagFv(void* p) { set_depth_buffer_settings_1__Fv(p); fn_8029A9B8(p); fn_8029A97C(p); fn_80141A30(); }
typedef char RecoveredGlobal_8029AA74_lbl_804652A4_size[sizeof(RecoveredGlobal_8029AA74_lbl_804652A4) == 0x34 ? 1 : -1];
void TChCrEffTag__sub_8029AA74(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8029AA74, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8029AA74, spC) == 0x4) ? 1 : -1];
    Stack_8029AA74 stack;
    s32 temp_r0;
    u32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x28);
    if (temp_r3 != 0U) {
        TChCrEffTagStr__sub_8029AED0((int) (temp_r3));
        M2C_FIELD(arg0, u32 *, 0x28) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) TChCrEffTag__data_805D3D0C;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0 >= 0) {
        stack.sp8 = lbl_805DDC90;
        stack.spC = lbl_805DDC94;
        M2C_FIELD(arg0, u32 *, 0x28) = create_str__11TChCrEffTagFPvPvPv((void *) (arg0), (int) (M2C_FIELD(&lbl_804652A4.value, M2C_UNK *, (temp_r0 * 4))), (void *) (&stack.sp8));
    }
}

}
