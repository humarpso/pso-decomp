#include "types.h"
struct Model_800F5A50 { void *vlist; void *plist; };

struct Node_800F5A50 {
    u32 evalflags;
    Model_800F5A50 *model;
    f32 pos[3];
    s32 ang[3];
    f32 scl[3];
    Node_800F5A50 *child;
    Node_800F5A50 *sibling;
};

extern "C" {
void fn_800F5AC8(void *ctx, void *plist, void *arg);
void fn_800F5A50(void *ctx, Node_800F5A50 *node, void *arg);
}

extern "C" {

void fn_800F5A50(void *ctx, Node_800F5A50 *node, void *arg) {
    do {
        if (node->model != 0 && node->model->plist != 0) {
            fn_800F5AC8(ctx, node->model->plist, arg);
        }
        if (node->child != 0) {
            fn_800F5A50(ctx, node->child, arg);
        }
        node = node->sibling;
    } while (node != 0);
}

}
