#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK heap_free__5THeapFPv(void *);
u8 *heap_alloc__5THeapFUl(s32, s32);
s32 measure_string_len__20TWindowSubStatusDispFPv(void *);
M2C_UNK TLobby__sub_8026A6DC(int);
s32 TLobby__sub_8026A76C(void *);
M2C_UNK strncpy(int, void *, int);
extern s32 lbl_805D5544;
extern s32 lbl_805D6460;
extern u8 *lbl_805D6464;

void TLobby__sub_8026A7B0(u32 arg0) {
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r3;

    if ((void *) lbl_805D6464 != NULL) {
        heap_free__5THeapFPv((void *) (lbl_805D6460));
        lbl_805D6464 = NULL;
    }
    if (arg0 != 0U) {
        temp_r31 = TLobby__sub_8026A76C((void *) (arg0));
        var_r30 = measure_string_len__20TWindowSubStatusDispFPv((void *) (arg0)) + 1;
        if (temp_r31 != 0) {
            var_r30 += 2;
        }
        var_r3 = heap_alloc__5THeapFUl(lbl_805D6460, var_r30);
        if (var_r3 == NULL) {
            do {
                TLobby__sub_8026A6DC((int) (0));
                var_r3 = heap_alloc__5THeapFUl(lbl_805D6460, var_r30);
            } while (var_r3 == NULL);
        }
        lbl_805D6464 = var_r3;
        if (temp_r31 != 0) {
            M2C_FIELD(var_r3, s8 *, 0) = 9;
            if ((s32) lbl_805D5544 == 0) {
                M2C_FIELD(var_r3, s8 *, 1) = 0x4A;
                var_r3 += 2;
            } else {
                M2C_FIELD(var_r3, s8 *, 1) = 0x45;
                var_r3 += 2;
            }
            var_r30 -= 2;
        }
        strncpy((int) (var_r3), (void *) (arg0), (int) (var_r30));
    }
}

}
