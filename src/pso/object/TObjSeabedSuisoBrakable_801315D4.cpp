#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void walk_linked_switches__23TObjSeabedSuisoBrakableFPv(void *arg0);

extern s32 lbl_805D552C;
extern s32 lbl_805D5530;
extern void *lbl_805D5534;

void walk_linked_switches__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    if ((s32) lbl_805D552C == (s32) lbl_805D5530) {
        lbl_805D5534 = arg0;
    }
    lbl_805D552C += 1;
    if ((void *) lbl_805D5534 == NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            walk_linked_switches__23TObjSeabedSuisoBrakableFPv(M2C_FIELD(arg0, void **, 0x2C));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            walk_linked_switches__23TObjSeabedSuisoBrakableFPv(M2C_FIELD(arg0, void **, 0x30));
        }
    }
}

}
