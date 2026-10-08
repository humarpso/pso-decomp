#include "types.h"

struct Node_801A0578 {
    u8 pad0[4];
    s32 f4;
    u8 pad8[0x2C - 8];
    Node_801A0578 *child;
    Node_801A0578 *sibling;
};

extern "C" {
void TLobby__sub_8001FE7C(void *, int);
extern void *lbl_805D5CA8;
extern s32 lbl_805D5CAC;
extern s32 lbl_805D5CB0;
extern s32 lbl_8050DDC8[6];
void fn_801A0520(void);
s32 get_bml_motion(void *, s32);
s32 TObjFish__sub_8001EDB0(void *, s32);
Node_801A0578 *get_bml_model(void *, s32);
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TObjDoorJung__sub_8023DBEC(s32, void *);
extern char lbl_80446718[];
extern char lbl_80446728[];
extern char lbl_80446738[];
extern u8 lbl_804B963C[];
extern s32 lbl_8050DDC8[6];
extern void *lbl_805D5CA8;
extern s32 lbl_805D5CAC;
extern s32 lbl_805D5CB0;
extern s32 lbl_805D5CB4;
extern s32 lbl_805D5CB8;
extern s32 lbl_805D5CBC;
extern s32 lbl_805D5CC0;
extern s32 lbl_805D5CC4;
void load_warp_beam_resources(void);
}

extern "C" {

void fn_801A0520(void) {
    s32 i;
    TLobby__sub_8001FE7C(lbl_805D5CA8, 1);
    lbl_805D5CA8 = 0;
    lbl_805D5CAC = 0;
    lbl_805D5CB0 = 0;
    for (i = 0; i < 6; i++) {
        lbl_8050DDC8[i] = 0;
    }
}
void load_warp_beam_resources(void) {
    Node_801A0578 *root;
    void *p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 5, lbl_804B963C, 0, 0, 0);
    }
    lbl_805D5CA8 = p;
    lbl_805D5CAC = get_bml_motion(p, 0);
    lbl_805D5CB0 = TObjFish__sub_8001EDB0(lbl_805D5CA8, 0);
    root = get_bml_model(lbl_805D5CA8, 1)->child;
    lbl_8050DDC8[0] = root->child->f4;
    lbl_8050DDC8[1] = root->child->sibling->f4;
    lbl_8050DDC8[2] = root->child->sibling->sibling->f4;
    lbl_8050DDC8[3] = root->child->sibling->sibling->sibling->f4;
    lbl_8050DDC8[4] = root->child->sibling->sibling->sibling->sibling->f4;
    lbl_8050DDC8[5] = root->sibling->f4;
    lbl_805D5CB8 = root->sibling->sibling->sibling->f4;
    lbl_805D5CB4 = 0;
    lbl_805D5CBC = TObjDoorJung__sub_8023DBEC(lbl_805D5CB0, lbl_80446718);
    lbl_805D5CC0 = TObjDoorJung__sub_8023DBEC(lbl_805D5CB0, lbl_80446728);
    lbl_805D5CC4 = TObjDoorJung__sub_8023DBEC(lbl_805D5CB0, lbl_80446738);
}

}
