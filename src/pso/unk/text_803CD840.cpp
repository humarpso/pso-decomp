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

#define BE32_803CDEC8(p) (((p)[0] << 24) | ((p)[1] << 16) | ((p)[2] << 8) | (p)[3])
#define BE16_803CDEC8(p) (((p)[0] << 8) | (p)[1])
struct Ent3_803CDEC8 { u8 b; u8 pad[3]; s32 a; u8 pad8[8]; };

struct Ent1_803CDEC8 { s32 w[4]; };

struct Ent2_803CDEC8 { s16 h[4]; };

struct Out_803CDEC8 {
    u8 f0;
    u8 f1;
    u8 pad2[2];
    s32 f4;
    f32 f8;
    s8 n3;
    u8 padd[3];
    Ent3_803CDEC8 e3[32];
    s32 n1;
    Ent1_803CDEC8 e1[32];
    s32 n2;
    Ent2_803CDEC8 e2[1];
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
int memcmp(const void *, const void *, unsigned long);
unsigned long strlen(const char *);
extern char *lbl_805D4688;
s32 TLobby__sub_803CDEC8(u8 *arg0, s32 arg1, Out_803CDEC8 *arg2);
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

s32 TLobby__sub_803CDEC8(u8 *arg0, s32 arg1, Out_803CDEC8 *arg2) {
    s32 len;
    s32 hdr;
    u8 *p;
    s32 i;
    len = strlen(lbl_805D4688);
    if (arg1 < 0x1800) {
        return 0;
    }
    if (BE32_803CDEC8(arg0) != 0x41495846) {
        return 0;
    }
    hdr = BE32_803CDEC8(arg0 + 4);
    if (memcmp(arg0 + (hdr + 8 - len), lbl_805D4688, len) != 0) {
        return 0;
    }
    arg2->f0 = arg0[8];
    arg2->f1 = arg0[9];
    arg2->f8 = (s32)BE16_803CDEC8(arg0 + 0xA);
    arg2->f4 = BE32_803CDEC8(arg0 + 0xC);
    arg2->n1 = BE16_803CDEC8(arg0 + 0x18);
    p = arg0 + 0x20;
    for (i = 0; i < arg2->n1; i++) {
        arg2->e1[i].w[0] = BE32_803CDEC8(p);
        arg2->e1[i].w[1] = BE32_803CDEC8(p + 4);
        arg2->e1[i].w[2] = BE32_803CDEC8(p + 8);
        arg2->e1[i].w[3] = BE32_803CDEC8(p + 12);
        p += 0x10;
    }
    arg2->n2 = (s8)p[0];
    p += 8;
    for (i = 0; i < arg2->n2; i++) {
        arg2->e2[i].h[0] = BE16_803CDEC8(p);
        arg2->e2[i].h[1] = BE16_803CDEC8(p + 2);
        arg2->e2[i].h[2] = BE16_803CDEC8(p + 4);
        arg2->e2[i].h[3] = BE16_803CDEC8(p + 6);
        p += 8;
    }
    arg2->n3 = p[0];
    p += 8;
    for (i = 0; i < arg2->n3; i++) {
        arg2->e3[i].a = BE32_803CDEC8(p);
        arg2->e3[i].b = p[4];
        p += 8;
    }
    return hdr + 8;
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
