#include "types.h"
struct C_80082AA8 { s32 v; };

struct B_80082AA8 { u8 pad[0xc]; C_80082AA8 *c; };

struct E_80082AA8 { u32 a; u32 b; B_80082AA8 *node; };

struct Vec_80082954 { s32 x, y, z; };

struct Copy_80082954 {
    struct Vec_80082954 **animation;
    struct Vec_80082954 **destination;
    s32 frame;
    s32 slot;
};

struct Vec_800829E0 { s32 x, y, z; };

struct Copy_800829E0 {
    struct Vec_800829E0 **animation;
    struct Vec_800829E0 **destination;
    s32 frame;
    s32 slot;
};

extern "C" {
extern E_80082AA8 *lbl_8048E5A0[];
extern s32 lbl_80500620[];
extern void *lbl_805D4ED8;
extern char lbl_80438EF8[];
extern void *lbl_80438EE8[];
void *create_named_object(const char *name);
void TScene__sub_8023E638(const char *name, void *data);
void fn_80082AA8(void);
extern s32 lbl_80500620[];
s32 fn_80082910(s32 id);
void fn_80082954(struct Copy_80082954 *c);
void fn_800829E0(struct Copy_800829E0 *c);
}

extern "C" {

s32 fn_80082910(s32 id) {
    s32 r = 0;
    s32 i;
    for (i = 0; i < 0x36; i++) {
        if (id == lbl_80500620[i]) {
            r = i;
            break;
        }
    }
    return r;
}

void fn_80082954(struct Copy_80082954 *c) {
    (*c->animation)[c->frame].z = (*c->destination)[c->slot].z;
    (*c->animation)[c->frame].y = (*c->destination)[c->slot].y;
    (*c->animation)[c->frame].x = (*c->destination)[c->slot].x;
}

void fn_800829E0(struct Copy_800829E0 *c) {
    (*c->destination)[c->slot].z = (*c->animation)[c->frame].z;
    (*c->destination)[c->slot].y = (*c->animation)[c->frame].y;
    (*c->destination)[c->slot].x = (*c->animation)[c->frame].x;
}

void fn_80082AA8(void) {
    E_80082AA8 *e;
    s32 i;
    lbl_805D4ED8 = create_named_object(lbl_80438EF8);
    TScene__sub_8023E638((const char *)lbl_80438EE8[1], lbl_80438EE8[0]);
    e = lbl_8048E5A0[0];
    for (i = 0; i < 0x36; i++) {
        lbl_80500620[i] = e[i].node->c->v;
    }
}

}
