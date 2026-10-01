#include "types.h"
struct Ent_803CE198 { s32 a; s32 b; u8 pad[8]; };

struct Sub_803CE198 { u8 pad[0x214]; Ent_803CE198 e[1]; };

struct Obj_803CE198 { u8 pad[0xa0]; Sub_803CE198 sub; };

struct Ent_803CD840 {
    s32 f0;
    s32 f4;
    s32 f8;
    u8 padC[2];
    s8 fE;
    u8 padF;
    char name[0x100];
    s32 f110;
    u8 pad114[4];
};

extern "C" {
void TLobby__sub_803CE198(Obj_803CE198 *self, s32 i, s32 *a, s32 *b);
char *strncpy(char *, const char *, u32);
void *memset(void *, s32, u32);
void TLobby__sub_803C57C8(const char *);
s32 TLobby__sub_803CCB98(void *, int, int);
void TLobby__sub_803CCE9C(void *);
void *TLobby__sub_803CD3A8(const char *, s32);
extern char lbl_8047C818[];
extern Ent_803CD840 *lbl_8057C7D0[256];
extern u8 lbl_8057DF50[];
extern s32 lbl_805D75D4;
extern void *lbl_805D75D8;
extern s32 lbl_805D75DC;
extern s32 lbl_805D75EC;
extern s32 lbl_805D75F0;
s32 TLobby__sub_803CD840(s32 id, const char *name, s32 arg2, Ent_803CD840 *e);
}

extern "C" {

#pragma dont_inline off
#pragma inline_depth(4)
inline s32 check_803CD840(char *msg, s32 id, Ent_803CD840 *e) {
    if (id < 0 || id >= 0x100) {
        TLobby__sub_803C57C8(msg + 0x3E8);
        return -3;
    }
    if (e == NULL) {
        TLobby__sub_803C57C8(msg + 0x420);
        return -3;
    }
    return 0;
}
s32 TLobby__sub_803CD840(s32 id, const char *name, s32 arg2, Ent_803CD840 *e) {
    char *msg = lbl_8047C818;
    s32 r;
    s32 aligned;
    r = check_803CD840(msg, id, e);
    if (r < 0) {
        return r;
    }
    if (lbl_805D75D4 >= 0) {
        TLobby__sub_803C57C8(msg + 0x56C);
        return -1;
    }
    lbl_805D75D8 = TLobby__sub_803CD3A8(name, arg2);
    if (lbl_805D75D8 == NULL) {
        TLobby__sub_803C57C8(msg + 0x5A4);
        return -1;
    }
    lbl_805D75D4 = id;
    lbl_805D75DC = 0;
    memset(e, 0, 0x118);
    lbl_8057C7D0[id] = e;
    e->f0 = 0;
    strncpy(e->name, name, 0x100);
    e->f110 = arg2;
    e->fE = 0;
    aligned = (s32)(lbl_8057DF50 + 0x20) & ~0x1F;
    lbl_805D75F0 = aligned;
    lbl_805D75EC = aligned;
    r = TLobby__sub_803CCB98(lbl_805D75D8, 1, aligned);
    if (r < 0) {
        TLobby__sub_803CCE9C(lbl_805D75D8);
        return r;
    }
    e->f8 = 0;
    return 0;
}

void TLobby__sub_803CE198(Obj_803CE198 *self, s32 i, s32 *a, s32 *b) {
    Sub_803CE198 *s = &self->sub;
    if (a != 0) {
        *a = s->e[i].a;
    }
    if (b != 0) {
        *b = s->e[i].b;
    }
}

}
