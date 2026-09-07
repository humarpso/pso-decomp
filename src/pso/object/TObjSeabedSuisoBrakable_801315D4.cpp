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
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32 arg0, s32 arg1);
extern s32 lbl_805D5520;
extern s32 lbl_805D5524;
extern void *lbl_805D5528;
void collect_recursive__23TObjSeabedSuisoBrakableFPv(void *arg0);
}

extern "C" {

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
            walk_linked_switches__23TObjSeabedSuisoBrakableFPv((void *)(M2C_FIELD(arg0, void **, 0x2C)));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            walk_linked_switches__23TObjSeabedSuisoBrakableFPv((void *)(M2C_FIELD(arg0, void **, 0x30)));
        }
    }
}
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        return 0;
    }
    lbl_805D5530 = arg1;
    lbl_805D552C = 0;
    (*(s32 *)&lbl_805D5534) = 0;
    walk_linked_switches__23TObjSeabedSuisoBrakableFPv((void *)(arg0));
    return (*(s32 *)&lbl_805D5534);
}
void collect_recursive__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    if ((s32) lbl_805D5520 == (s32) lbl_805D5524) {
        lbl_805D5528 = arg0;
    }
    lbl_805D5520 += 1;
    if ((void *) lbl_805D5528 == NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            collect_recursive__23TObjSeabedSuisoBrakableFPv((void *)(M2C_FIELD(arg0, void **, 0x2C)));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            collect_recursive__23TObjSeabedSuisoBrakableFPv((void *)(M2C_FIELD(arg0, void **, 0x30)));
        }
    }
}

}
