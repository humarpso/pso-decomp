#include "types.h"
typedef struct Vec_800D97E8 {
    f32 x, y, z;
} Vec_800D97E8;

typedef struct Node_800D97E8 {
    u32 flags;
    u8 pad4[0x2C - 0x4];
    struct Node_800D97E8 *child;
    struct Node_800D97E8 *next;
} Node_800D97E8;

extern "C" {
void TObjPlayer__sub_803D7CA4(Node_800D97E8 *);
void TCameraCtrl__sub_803D8934(int, void *, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
extern Vec_800D97E8 lbl_80500F80;
extern Vec_800D97E8 *lbl_805D5230;
extern s32 lbl_805D5234;
extern s32 lbl_805D5238;
extern s32 *lbl_805D523C;
extern Vec_800D97E8 *lbl_805D5240;
s32 fn_800D97E8(s32 arg0, Node_800D97E8 *node, s32 idx);
}

extern "C" {

s32 fn_800D97E8(s32 arg0, Node_800D97E8 *node, s32 idx) {
    u32 flags;
    do {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D7CA4(node);
        flags = node->flags;
        while (idx == lbl_805D523C[lbl_805D5238]) {
            if (lbl_805D5240 == NULL) {
                TCameraCtrl__sub_803D8934(0, &lbl_80500F80, lbl_805D5230);
            } else {
                TCameraCtrl__sub_803D8934(0, &lbl_805D5240[lbl_805D5238], lbl_805D5230);
            }
            lbl_805D5230++;
            lbl_805D5238++;
        }
        idx++;
        if (!(flags & 0x10)) {
            idx = fn_800D97E8(arg0, node->child, idx);
        }
        TObjPlayer__sub_803D9B78();
        node = node->next;
    } while (node != NULL && lbl_805D5238 < lbl_805D5234);
    return idx;
}

}
