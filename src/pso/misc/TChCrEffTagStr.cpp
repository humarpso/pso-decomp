#include "pso/TChCrEffTagStr.h"

TChCrEffTagStr::~TChCrEffTagStr() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8029AEDC {
    f32 sp8;
    f32 spC;
};

extern "C" {
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK fn_80141A30();
M2C_UNK fn_80290E28(s32, void *, f32 *, f32, f32, f32, f32, f32);
extern const f32 lbl_805DDCB8;
extern const f32 lbl_805DDCBC;
extern const f32 lbl_805DDCC0;
void render__14TChCrEffTagStrFv(u8 *arg0);
}

extern "C" {

void TChCrEffTagStr__sub_8029AED0(void* p);
void *__ct__14TChCrEffTagStrFv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

void TChCrEffTagStr__sub_8029AED0(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

extern M2C_UNK __vt__14TChCrEffTagStr[];
extern void *lbl_805D3D18;
extern const f32 lbl_805DDCCC;

#pragma push
#pragma fp_contract on
void render__14TChCrEffTagStrFv(u8 *arg0) {
    Stack_8029AEDC stack;
    f32 temp_f2;
    f32 temp_f3;
    set_depth_buffer_settings_1__Fv();
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x24);
    temp_f3 = lbl_805DDCB8 - temp_f2;
    stack.spC = temp_f2 * temp_f2;
    stack.sp8 = (lbl_805DDCBC * temp_f3) + lbl_805DDCB8;
    fn_80290E28(M2C_FIELD(arg0, s32 *, 0x20), arg0 + 0x28, &stack.sp8, lbl_805DDCC0, temp_f2, temp_f3, lbl_805DDCB8, lbl_805DDCBC);
    fn_80141A30();
}
#pragma pop

void *__ct__14TChCrEffTagStrFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TChCrEffTagStr;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D18;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 40), arg3);
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_805DDCCC;
    return arg0;
}

}
