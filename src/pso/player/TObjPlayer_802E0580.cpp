#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_802E0580(void);
void draw_model_with_arg__10TObjPlayerFPvPv(void* p, void* a1);
int draw_model_with_callback__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8014394C(void*);
M2C_UNK TObjPlayer__sub_802E0468(f32);

extern const f32 lbl_805DE8A8;

void TObjPlayer__sub_802E0580(void) {
    TObjPlayer__sub_802E0468(lbl_805DE8A8);
}

void draw_model_with_arg__10TObjPlayerFPvPv(void* p, void* a1) { *(void**)((char*)p + 0x34) = a1; TObjPlayer__sub_8014394C(p); draw_model_with_callback__10TObjPlayerFPv(p); }

}
