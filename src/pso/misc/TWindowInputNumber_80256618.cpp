#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__18TWindowInputNumberFv(u8 *arg0);
s32 is_confirmed__18TWindowInputNumberFPv(void *);
M2C_UNK TWindowInputNumber__sub_802563A0(void *, int, int, int);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(void *, int);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);

void render__18TWindowInputNumberFv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80244C0C((void *) (arg0), (void *) (arg0 + 0x74));
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    temp_r31 = is_confirmed__18TWindowInputNumberFPv((void *) (arg0));
    TWindowInputNumber__sub_802563A0((void *) (arg0), (int) (temp_r3), (int) (get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) M2C_FIELD(arg0, s8 *, 0x63))), (int) (temp_r31));
    {
        void *temp_ptr = (void *) M2C_FIELD(arg0, u32 *, 0x70);
        if (temp_ptr != NULL) {
            forward_render__20TWindowSubStatusDispFPv(temp_ptr, (int) (temp_r3));
        }
    }
}

}
