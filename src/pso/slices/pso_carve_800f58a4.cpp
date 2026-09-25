#include "types.h"

struct Model_800F58A4 { void *vlist; void *plist; };

struct Node_800F58A4 {
    u32 evalflags;
    Model_800F58A4 *model;
    f32 pos[3];
    s32 ang[3];
    f32 scl[3];
    Node_800F58A4 *child;
    Node_800F58A4 *sibling;
};

extern "C" {
void fn_800F591C(void *ctx, void *plist, void *arg);
void fn_800F58A4(void *ctx, Node_800F58A4 *node, void *arg);
}

extern "C" {

int draw_model__16TObjEneMe3StelthFPv(void* p);
int draw_model__12TObjNpcEnemyFPv(void*);

void fn_800F58A4(void *ctx, Node_800F58A4 *node, void *arg) {
    do {
        if (node->model != 0 && node->model->plist != 0) {
            fn_800F591C(ctx, node->model->plist, arg);
        }
        if (node->child != 0) {
            fn_800F58A4(ctx, node->child, arg);
        }
        node = node->sibling;
    } while (node != 0);
}

}
