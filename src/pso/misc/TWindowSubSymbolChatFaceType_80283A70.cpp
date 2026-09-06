#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80283F38
{
  f32 sp8;
  f32 spC;
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubSymbolChatFaceType__sub_80283FA8(void *);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
void render__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
s32 fn_802839A4(void *);
void TWindowSubSymbolChatFaceType__sub_80283C84(void *, void *, f32, f32);
extern const f32 lbl_805DD778;
extern const f32 lbl_805DD77C;
extern const f32 lbl_805DD780;
void TWindowSubSymbolChatFaceType__sub_80283F38(u8 *arg0, u8 *arg1);
}

extern "C" {

typedef struct Stack_80283F38 Stack_80283F38;
void TWindowSubSymbolChatFaceType__sub_80283F38(u8 *arg0, u8 *arg1) {
  int new_var;
  u8 *temp_r3;
  Stack_80283F38 stack;
  new_var = fn_802839A4(arg0);
  temp_r3 = (u8 *) get_array_entry__20TWindowSubStatusDispFPvi(arg0, new_var);
  stack.sp8 = (*((f32 *) (((s8 *) temp_r3) + 8))) - lbl_805DD778;
  stack.spC = (*((f32 *) (((s8 *) temp_r3) + 0xC))) - lbl_805DD778;
  TWindowSubSymbolChatFaceType__sub_80283C84(arg1, &stack.sp8, lbl_805DD77C, lbl_805DD780);
}

void render__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = draw_default_entry__9TWindowDDFi();
    TWindowSubSymbolChatFaceType__sub_80283FA8((void *) (arg0));
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r31));
    TWindowSubSymbolChatFaceType__sub_80283F38((u8 *)((void *) (arg0)), (u8 *)((int) (temp_r31)));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x68)), (int) (temp_r31));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r31));
}

}
