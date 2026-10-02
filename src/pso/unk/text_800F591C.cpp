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

struct Count_800F5AC8 { s32 verts; s32 strips; };

struct StripRef_800F591C { s16 *strip; s16 *uv; };

extern "C" {
void fn_800F5A50(void *ctx, Node_800F5A50 *node, void *arg);
extern s32 lbl_805D5320;
void fn_800F5AC8(void *ctx, void *plist, void *arg);
extern StripRef_800F591C *lbl_805D5318;
extern s16 *lbl_805D531C;
extern s32 lbl_805D5320;
void fn_800F591C(void *ctx, s16 *p, s32 tex);
}

extern "C" {

void fn_800F591C(void *ctx, s16 *p, s32 tex) {
    s16 c;
    s16 type;
    u32 n;
    u32 i;
    s16 len;
    s32 k;
    while ((c = *p++) != 0xFF) {
        if ((c & 0xFF) < 8) {
            continue;
        }
        type = c & 0xFF;
        if (type < 0x10) {
            if ((*p++ & 0x1FFF) == tex) {
                lbl_805D5320 = 1;
            } else {
                lbl_805D5320 = 0;
            }
        } else if (type < 0x40) {
            s32 skip = *(u16 *) p;
            p++;
            p += skip;
        } else {
            s32 skip = *(u16 *) p;
            p++;
            if (lbl_805D5320 != 0 && type == 0x41) {
                lbl_805D5318->strip = p;
                lbl_805D5318->uv = lbl_805D531C;
                lbl_805D5318++;
                n = *p++ & 0x3FFF;
                for (i = 0; i < n; i++) {
                    len = *p++;
                    if (len < 0) {
                        len = -len;
                    }
                    for (k = 0; k < len; k++) {
                        *lbl_805D531C++ = p[1];
                        *lbl_805D531C++ = p[2];
                        p += 3;
                    }
                }
            } else {
                p += skip;
            }
        }
    }
}

void fn_800F5A50(void *ctx, Node_800F5A50 *node, void *arg) {
    do {
        if (node->model != 0 && node->model->plist != 0) {
            fn_800F5AC8((void *)(ctx), (void *)(node->model->plist), (void *)(arg));
        }
        if (node->child != 0) {
            fn_800F5A50(ctx, node->child, arg);
        }
        node = node->sibling;
    } while (node != 0);
}
void fn_800F5AC8(void *ctx, void *plist, void *arg) {
    Count_800F5AC8 *cnt = (Count_800F5AC8 *) ctx;
    s16 *p = (s16 *) plist;
    s16 c;
    s32 skip;
    u32 n;
    u32 i;
    s16 len;
    while ((c = *p++) != 0xFF) {
        if ((c & 0xFF) < 8) {
            continue;
        }
        c = c & 0xFF;
        if (c < 0x10) {
            if ((*p++ & 0x1FFF) == (s32) arg) {
                lbl_805D5320 = 1;
            } else {
                lbl_805D5320 = 0;
            }
        } else if (c < 0x40) {
            skip = *(u16 *) p;
            p++;
            p += skip;
        } else {
            s32 size = *(u16 *) p;
            p++;
            if (lbl_805D5320 != 0 && c == 0x41) {
                cnt->strips++;
                n = *p++ & 0x3FFF;
                for (i = 0; i < n; i++) {
                    len = *p++;
                    if (len < 0) {
                        len = -len;
                    }
                    cnt->verts += len;
                    p += len * 3;
                }
            } else {
                p += size;
            }
        }
    }
}

}
