#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_801415BC {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
M2C_UNK TObjPlayer__sub_803DED84(void *, f32);
extern s32 some_id_805c6f74;
extern const f32 lbl_805DB150;
extern const f32 lbl_805DB154;
void TObjPlayer__sub_801415BC(void);
}

extern "C" {

int set_cull_none__8TObjFishFv(void);
int set_cull_mode_front__8TObjFishFv(void);
int set_cull_back__8TObjFishFv(void);
int GXSetCullMode(void*);

int set_cull_none__8TObjFishFv(void) { return GXSetCullMode((void*)(0)); }
int set_cull_mode_front__8TObjFishFv(void) { return GXSetCullMode((void*)(1)); }
int set_cull_back__8TObjFishFv(void) { return GXSetCullMode((void*)(2)); }
void TObjPlayer__sub_801415BC(void) {
    Stack_801415BC stack;
    stack.spC = lbl_805DB150;
    stack.sp10 = lbl_805DB150;
    stack.sp14 = lbl_805DB150;
    stack.sp8 = lbl_805DB154;
    TObjPlayer__sub_803DED84((void *) (&stack.sp8), (f32) (lbl_805DB150));
    some_id_805c6f74 |= 0x400;
}

}
