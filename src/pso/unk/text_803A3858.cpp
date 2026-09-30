#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803AA0C0_lbl_80556E88 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803A98F0_lbl_80556F88 {
    M2C_UNK value;
    u8 remaining[0x3BC];
};

struct Ent_803B89B4 { u8 pad0[0xC]; Ent_803B89B4 *next; Ent_803B89B4 *prev; u8 pad14[0xD8]; u8 active; u8 padED[2]; u8 idx; };
struct Rec_803B59E4 { u8 pad[0x48]; Ent_803B89B4 *head; u8 pad4c[4]; u8 f50; u8 pad2[0xBC - 0x51]; };

struct Node_803B2598 { Node_803B2598 *next; u32 pad; u32 key; };

struct Rec_803A9944 { u8 pad[0x2d]; u8 f2d; u8 pad2[2]; };

struct Program_803B1DA4 {
    u8 pad[0x44];
    Program_803B1DA4 *next;
    Program_803B1DA4 *prev;
    u8 pad4c[0x98 - 0x4C];
    u64 deadline;
};

struct Envelope_803B431C {
    u8 mode, phase, pad[2];
    u32 remaining, level, logLevel;
    s32 step;
    u32 attack, decay;
    u16 sustain, pad2;
    u32 release;
};

typedef s32 M2C_UNK;
typedef struct Req_803AE60C { u8 pad0[4]; s16 f4; u8 pad1[2]; } Req_803AE60C;

typedef s32 (*RecoveredCallback_bdb219c29499)(s32, s32);

struct Node_803A3C24 { Node_803A3C24 *next; Node_803A3C24 *prev; };

struct Owner_803A3C24 { u8 pad[0xE6C]; Node_803A3C24 *head; };

struct Node_803A4964 { Node_803A4964 *next; Node_803A4964 *prev; s8 state; };

struct Node_803A5A04 { Node_803A5A04 *next; Node_803A5A04 *prev; u32 key; };

struct List_803A5A04 { u8 pad[0x1C]; Node_803A5A04 *head; };

struct Obj_803A6F18 { u8 pad0[0x122]; u8 b122; u8 b123; };

struct Obj_803A6F4C { u8 pad0[0x114]; u32 fh; u32 fl_; u8 pad11C[0x14]; u8 b130; u8 b131; u8 pad132[2]; s32 i134; s32 i138; s32 i13C; };

typedef struct Req_803AE6DC { u8 pad0[4]; s16 f4; u8 pad1[2]; } Req_803AE6DC;

typedef struct Res_803AE6DC { s32 f0; u16 pad4; u16 h6; } Res_803AE6DC;

struct Obj_803AFF38 { u8 pad0[0xAC]; s32 v[16]; };

struct Obj_803AFF9C { u8 pad0[0xAC]; s32 v[16]; };

struct Obj_803B0004 { u8 pad0[0xAC]; s32 v[16]; };

struct Obj_803B3AA8 { u8 pad0[0xF4]; u32 id; u8 pad1[0x29]; u8 b121; u8 b122; };

struct Obj_803B3B24 { u8 pad0[0xF4]; u32 id; u8 pad1[0x29]; u8 b121; u8 b122; };

struct Obj_803B3B80 { u8 pad0[0xF4]; u32 id; u8 pad1[0x29]; u8 b121; u8 b122; };

struct Node_803BA1B8 { Node_803BA1B8 *next; Node_803BA1B8 *prev; u8 pad8[8]; u32 f10; u8 pad14[0x28]; u32 id; };

extern "C" {
void TLobby__sub_803A49C8(s32);
void TLobby__sub_803A4B7C(s32);
void TLobby__sub_803A4FC4(s32, s32, s32);
void TLobby__sub_803A8DC0(u8 *arg0);
void TLobby__sub_803BB98C(u8, void *, void *);
void TLobby__sub_803A93D0(u8 *arg0, u8 *arg1);
void TLobby__sub_803A4DDC(s32, s16);
void TLobby__sub_803BE700(void);
void TLobby__sub_803BE738(void);
void TLobby__sub_803A9F80(s32 arg0, s16 arg1);
void TLobby__sub_803A4EB8(s32);
void TLobby__sub_803BE700(void);
void TLobby__sub_803BE738(void);
void TLobby__sub_803A9FC8(s32 arg0);
void TLobby__sub_803A4FC4(s32, s32, s32);
void TLobby__sub_803BE700(void);
void TLobby__sub_803BE738(void);
void TLobby__sub_803AA000(s32 arg0, s32 arg1, s32 arg2);
void TLobby__sub_803A5078(s8, s32, s32, s32);
void TLobby__sub_803BE700(void);
void TLobby__sub_803BE738(void);
void TLobby__sub_803AA058(s8 arg0, s32 arg1, s32 arg2, s32 arg3);
extern RecoveredGlobal_803AA0C0_lbl_80556E88 lbl_80556E88;
u16 TLobby__sub_803AA0C0(s32 arg0, s32 arg1);
s32 TLobby__sub_803A9454(int);
void TLobby__sub_803BE700(void);
void TLobby__sub_803BE738(void);
s32 TLobby__sub_803AA1A0(s32 arg0);
void TLobby__sub_803A94E0(u8, u16, u8, s8, s32);
void TLobby__sub_803BE700(void);
void TLobby__sub_803BE738(void);
void TLobby__sub_803AA2FC(u8 arg0, u16 arg1, u8 arg2);
void TLobby__sub_803BD62C(u8);
void TLobby__sub_803AA75C(u8 arg0);
void TLobby__sub_803BD660(u8);
void TLobby__sub_803AA77C(u8 arg0);
extern s32 lbl_805D73AC;
void TLobby__sub_803AB574(s8 *arg0, s8 *arg1);
s32 TLobby__sub_803B3F2C(void *);
void TLobby__sub_803B41A0(u8 *arg0);
M2C_UNK DCFlushRangeNoSync(void *, int);
M2C_UNK memset(void *, int, int);
extern s32 lbl_805D7480;
void TLobby__sub_803B58A4(void);
extern s32 (*lbl_805D7490)(s32, s32);
s32 TLobby__sub_803B88CC(u8 *arg0, s32 arg1);
extern s8 lbl_805D7498;
extern s32 lbl_805D749C;
extern s32 lbl_805D74A0;
extern s32 lbl_805D74A4;
extern s32 lbl_805D74A8;
extern s32 lbl_805D74AC;
extern s8 lbl_805D74B0;
extern s8 lbl_805D74B1;
extern s8 lbl_805D74B2;
void TLobby__sub_803BAB10(s32 arg0);
s32 TLobby__sub_803A8B0C(void *, int, int);
void TLobby__sub_803A8D04(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern RecoveredGlobal_803A98F0_lbl_80556F88 lbl_80556F88;
extern s32 lbl_805D73A8;
s32 TLobby__sub_803A98F0(u8 arg0);
s32 TLobby__sub_803B5398(u16, u16, s32, s32, u8, s32);
void TLobby__sub_803B54D8(u16 arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4);
extern Rec_803B59E4 lbl_805663D8[];
void TLobby__sub_803B59E4(u8 i);
extern Node_803B2598 *lbl_805D743C;
Node_803B2598 *TLobby__sub_803B2598(u32 key);
extern u8 lbl_805D7380;
extern Rec_803A9944 lbl_8055755C[];
void TLobby__sub_803A9944(u8 i, u8 v);
extern u32 TLobby__sub_803B2A30(u32 id);
u32 TLobby__sub_803AA2B8(u32 id);
extern Program_803B1DA4 *lbl_805D7420;
void TLobby__sub_803B1DA4(Program_803B1DA4 *self);
extern s32 TLobby__sub_803B41C8(struct Envelope_803B431C *e, u32 duration);
s32 TLobby__sub_803B431C(struct Envelope_803B431C *e);
s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1);
s32 *TLobby__sub_803BC9A8(Req_803AE60C *, void *, u16, s32, s32 (*)(u8 *, u8 *));
extern Req_803AE60C lbl_805D73F8;
extern u8 lbl_8055A470[];
extern u16 lbl_805D73D2;
extern s32 *lbl_805D7400;
s32 TLobby__sub_803AE60C(s16 arg0);
s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1);
s32 *TLobby__sub_803BC9A8(Req_803AE60C *, void *, u16, s32, s32 (*)(u8 *, u8 *));
extern Req_803AE60C lbl_805D7404;
extern u8 lbl_8055E470[];
extern u16 lbl_805D73D4;
extern s32 *lbl_805D740C;
s32 TLobby__sub_803AE66C(s16 arg0);
extern Owner_803A3C24 *lbl_805D7360;
extern Node_803A3C24 *lbl_805D7364;
void TLobby__sub_803A3C24(Node_803A3C24 *arg0);
extern Node_803A4964 *lbl_805D7378;
extern Node_803A4964 *lbl_805D737C;
void TLobby__sub_803A4964(Node_803A4964 *arg0);
void TLobby__sub_803A5A04(List_803A5A04 *arg0, Node_803A5A04 *arg1);
extern RecoveredGlobal_803A98F0_lbl_80556F88 lbl_80556F88;
void TLobby__sub_803A6ED0(s32 arg0, u8 arg1, u8 arg2);
void TLobby__sub_803A6F4C(Obj_803A6F4C *arg0);
s32 TLobby__sub_803A6F18(Obj_803A6F18 *arg0);
void TLobby__sub_803A8CC0(void *arg0);
void TLobby__sub_803B89B4(Ent_803B89B4 *arg0);
u32 TLobby__sub_803ABB10(u32 arg0, u32 arg1);
s32 *TLobby__sub_803BC9A8(Req_803AE60C *, void *, u16, s32, s32 (*)(u8 *, u8 *));
s32 TLobby__sub_803AE6CC(u8 *arg0, u8 *arg1);
extern u8 lbl_80559E70[];
extern u16 lbl_805D73D6;
extern Res_803AE6DC *lbl_805D7410;
s32 TLobby__sub_803AE6DC(s16 arg0, u16 *arg1);
u16 TLobby__sub_803BC7E4(void *, s32);
extern s32 lbl_80557C2C[];
s32 TLobby__sub_803AFF38(Obj_803AFF38 *arg0, u32 arg1, u32 arg2);
u16 TLobby__sub_803BC7E4(void *, s32);
extern s32 lbl_80557C2C[];
s16 TLobby__sub_803AFF9C(Obj_803AFF9C *arg0, u32 arg1, u32 arg2);
void TLobby__sub_803BC884(void *, s32, s16);
extern s32 lbl_80557C2C[];
void TLobby__sub_803B0004(Obj_803B0004 *arg0, u32 arg1, u32 arg2, s32 arg3);
extern u8 lbl_80564CC8[][16];
extern u8 lbl_80564D48[];
s32 TLobby__sub_803B3AA8(Obj_803B3AA8 *arg0);
extern u8 lbl_80564CC8[][16];
extern u8 lbl_80564D48[];
void TLobby__sub_803B3B24(Obj_803B3B24 *arg0);
extern u8 lbl_80564CC8[][16];
extern u8 lbl_80564D48[];
void TLobby__sub_803B3B80(Obj_803B3B80 *arg0);
s32 TLobby__sub_803A9454(int);
extern s32 lbl_805D749C;
void TLobby__sub_803BA1B8(Node_803BA1B8 *arg0);
}

extern "C" {

void TLobby__sub_803AA864(void);
void TLobby__sub_803AB0E0(void);
s32 TLobby__sub_803AE420(u8 *arg0, u8 *arg1);
s32 TLobby__sub_803AE4C4(u16 *arg0, u16 *arg1);
s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1);
s32 TLobby__sub_803AE6CC(u8 *arg0, u8 *arg1);
s32 TLobby__sub_803AE75C(u16 *arg0, u16 *arg1);
s32 TLobby__sub_803B2920(u8 *arg0);
void TLobby__sub_803B4CEC(void);

void TLobby__sub_803A3C24(Node_803A3C24 *arg0) {
    if (arg0->next != 0) {
        arg0->next->prev = arg0->prev;
    }
    if (arg0->prev != 0) {
        arg0->prev->next = arg0->next;
    } else {
        lbl_805D7360->head = arg0->next;
    }
    if ((arg0->next = lbl_805D7364) != 0) {
        lbl_805D7364->prev = arg0;
    }
    arg0->prev = 0;
    lbl_805D7364 = arg0;
}

void TLobby__sub_803A4964(Node_803A4964 *arg0) {
    if (arg0->prev != 0) {
        arg0->prev->next = arg0->next;
    } else {
        lbl_805D737C = arg0->next;
    }
    if (arg0->next != 0) {
        arg0->next->prev = arg0->prev;
    }
    if ((arg0->next = lbl_805D7378) != 0) {
        lbl_805D7378->prev = arg0;
    }
    arg0->prev = 0;
    lbl_805D7378 = arg0;
    arg0->state = 2;
}

void TLobby__sub_803A5A04(List_803A5A04 *arg0, Node_803A5A04 *arg1) {
    Node_803A5A04 *p = arg0->head;
    Node_803A5A04 *q = 0;
    while (p != 0) {
        if (p->key > arg1->key) {
            arg1->next = p;
            arg1->prev = q;
            if (q != 0) {
                q->next = arg1;
            } else {
                arg0->head = arg1;
            }
            p->prev = arg1;
            return;
        }
        q = p;
        p = p->next;
    }
    arg1->prev = q;
    if (q != 0) {
        q->next = arg1;
    } else {
        arg0->head = arg1;
    }
    arg1->next = 0;
}

void TLobby__sub_803A6ED0(s32 arg0, u8 arg1, u8 arg2) {
    if (arg1 == 0xFF) {
        arg1 = 8;
    }
    ((u32 (*)[16])((u8 *)&lbl_80556F88))[arg1][arg2] = (u32)((arg0 << 3) * 0x600) / 240;
}

s32 TLobby__sub_803A6F18(Obj_803A6F18 *arg0) {
    u32 r = arg0->b122;
    if (r == 0xFF) {
        r = 8;
    }
    return ((u32 (*)[16])((u8 *)&lbl_80556F88))[r][arg0->b123];
}

void TLobby__sub_803A6F4C(Obj_803A6F4C *arg0) {
    u64 fl = *(u64 *)&arg0->fh;
    if ((fl & 0x20000) == 0) {
        if (arg0->b131 == 1) {
            if ((fl & 0x1000) == 0) {
                arg0->i13C = 0;
            } else {
                arg0->i13C = arg0->i134;
            }
        } else {
            arg0->i13C = arg0->i134;
        }
        arg0->i138 = arg0->b130 << 16;
    }
}

void TLobby__sub_803A8CC0(void *arg0) {
    TLobby__sub_803A8B0C(arg0, 0, 0);
    TLobby__sub_803A8B0C(arg0, 1, 0);
}

void TLobby__sub_803A8D04(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    TLobby__sub_803A8B0C((void *) (arg0), (int) (2), (int) (0));
}

void TLobby__sub_803A8DC0(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[40]; s32 field_28; u8 field_2C; };
    u8 temp_r0;
    temp_r0 = ((Fields_arg0*)arg0)->field_2C;
    switch ((s32) temp_r0) {
    case 1:
        TLobby__sub_803A4B7C(((Fields_arg0*)arg0)->field_28);
        return;
    case 2:
        TLobby__sub_803A49C8(((Fields_arg0*)arg0)->field_28);
        return;
    case 3:
        TLobby__sub_803A4FC4(((Fields_arg0*)arg0)->field_28, 0, 0);
        return;
    }
}

void TLobby__sub_803A93D0(u8 *arg0, u8 *arg1) {
    TLobby__sub_803BB98C(7U, arg0, arg1);
    TLobby__sub_803BB98C(0xAU, arg0, arg1);
    TLobby__sub_803BB98C(0x5BU, arg0, arg1);
    TLobby__sub_803BB98C(0x80U, arg0, arg1);
    TLobby__sub_803BB98C(0x84U, arg0, arg1);
}

typedef char RecoveredGlobal_803A98F0_lbl_80556F88_size[sizeof(RecoveredGlobal_803A98F0_lbl_80556F88) == 0x3C0 ? 1 : -1];
s32 TLobby__sub_803A98F0(u8 arg0) {
    u8 *temp_r4;
    temp_r4 = (u8 *)&lbl_80556F88.value + (arg0 * 0x30);
    if (((u8) M2C_FIELD(temp_r4, u8 *, 0x601) != 4) && (lbl_805D73A8 & (1 << arg0)) && (M2C_FIELD(temp_r4, f32 *, 0x5DC) > M2C_FIELD(temp_r4, f32 *, 0x5D8))) {
        return 1;
    }
    return 0;
}

void TLobby__sub_803A9944(u8 i, u8 v) {
    if (lbl_805D7380 != 0) {
        lbl_8055755C[i].f2d = v;
    }
}

void TLobby__sub_803A9F80(s32 arg0, s16 arg1) {
    TLobby__sub_803BE738();
    TLobby__sub_803A4DDC(arg0, arg1);
    TLobby__sub_803BE700();
}

void TLobby__sub_803A9FC8(s32 arg0) {
    TLobby__sub_803BE738();
    TLobby__sub_803A4EB8(arg0);
    TLobby__sub_803BE700();
}

void TLobby__sub_803AA000(s32 arg0, s32 arg1, s32 arg2) {
    TLobby__sub_803BE738();
    TLobby__sub_803A4FC4(arg0, arg1, arg2);
    TLobby__sub_803BE700();
}

void TLobby__sub_803AA058(s8 arg0, s32 arg1, s32 arg2, s32 arg3) {
    TLobby__sub_803BE738();
    TLobby__sub_803A5078(arg0, arg1, arg2, arg3);
    TLobby__sub_803BE700();
}

typedef char RecoveredGlobal_803AA0C0_lbl_80556E88_size[sizeof(RecoveredGlobal_803AA0C0_lbl_80556E88) == 0x100 ? 1 : -1];
u16 TLobby__sub_803AA0C0(s32 arg0, s32 arg1) {
    return M2C_FIELD(((u8 *)(((u8 *)(&lbl_80556E88.value) + ((arg0 << 5) & 0x1FE0))) + ((arg1 * 2) & 0x1FE)), u16 *, 0);
}

s32 TLobby__sub_803AA1A0(s32 arg0) {
    s32 var_r31;
    s32 var_r3;
    var_r31 = arg0;
    TLobby__sub_803BE738();
    var_r3 = var_r31;
    var_r31 = TLobby__sub_803A9454((int) (var_r3));
    TLobby__sub_803BE700();
    var_r3 = var_r31;
    return var_r3;
}

u32 TLobby__sub_803AA2B8(u32 id) {
    if (TLobby__sub_803B2A30(id) != 0xFFFFFFFF) return id;
    return 0xFFFFFFFF;
}

void TLobby__sub_803AA2FC(u8 arg0, u16 arg1, u8 arg2) {
    TLobby__sub_803BE738();
    TLobby__sub_803A94E0(arg0, arg1, arg2, 0, -1);
    TLobby__sub_803BE700();
}

void TLobby__sub_803AA75C(u8 arg0) {
    TLobby__sub_803BD62C(arg0);
}

void TLobby__sub_803AA77C(u8 arg0) {
    TLobby__sub_803BD660(arg0);
}

void TLobby__sub_803AA864(void) {

}

void TLobby__sub_803AB0E0(void) {

}

void TLobby__sub_803AB574(s8 *arg0, s8 *arg1) {
    if (lbl_805D73AC & 1) {
        *arg0 = 0x40;
        *arg1 = 0;
        return;
    }
    if (!(lbl_805D73AC & 2)) {
        *arg1 = 0;
    }
}

u32 TLobby__sub_803ABB10(u32 arg0, u32 arg1) {
    if (arg1 & 1) {
        return (((arg0 + 13) / 7 * 4 & ~7) + 31) & ~31;
    }
    return ((arg0 * 2) + 31) & ~31;
}

s32 TLobby__sub_803AE420(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 TLobby__sub_803AE4C4(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 TLobby__sub_803AE60C(s16 arg0) {
    lbl_805D73F8.f4 = arg0;
    if ((lbl_805D7400 = TLobby__sub_803BC9A8(&lbl_805D73F8, lbl_8055A470, lbl_805D73D2, 8, TLobby__sub_803AE5FC)) != NULL) {
        return *lbl_805D7400;
    }
    return 0;
}

s32 TLobby__sub_803AE66C(s16 arg0) {
    lbl_805D7404.f4 = arg0;
    if ((lbl_805D740C = TLobby__sub_803BC9A8(&lbl_805D7404, lbl_8055E470, lbl_805D73D4, 8, TLobby__sub_803AE5FC)) != NULL) {
        return *lbl_805D740C;
    }
    return 0;
}

s32 TLobby__sub_803AE6CC(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 TLobby__sub_803AE6DC(s16 arg0, u16 *arg1) {
    ((Req_803AE6DC *)(lbl_80559E70 + 0xA620))->f4 = arg0;
    if ((lbl_805D7410 = (Res_803AE6DC *)TLobby__sub_803BC9A8((Req_803AE60C *)((Req_803AE6DC *)(lbl_80559E70 + 0xA620)), (void *)(lbl_80559E70 + 0x4E00), (u16)(lbl_805D73D6), (s32)(0xC), (s32 (*)(u8 *, u8 *))(TLobby__sub_803AE6CC))) != 0) {
        *arg1 = lbl_805D7410->h6;
        return lbl_805D7410->f0;
    }
    return 0;
}

s32 TLobby__sub_803AE75C(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

s32 TLobby__sub_803AFF38(Obj_803AFF38 *arg0, u32 arg1, u32 arg2) {
    if (arg1 != 0) {
        return TLobby__sub_803BC7E4(arg0, arg2);
    }
    arg2 = arg2 & 0x1F;
    if (arg2 < 0x10) {
        return arg0->v[arg2];
    }
    return lbl_80557C2C[arg2 - 16];
}

s16 TLobby__sub_803AFF9C(Obj_803AFF9C *arg0, u32 arg1, u32 arg2) {
    s32 r;
    if (arg1 != 0) {
        r = (u16)TLobby__sub_803BC7E4(arg0, arg2);
    } else {
        arg2 = arg2 & 0x1F;
        if (arg2 < 0x10) {
            r = arg0->v[arg2];
        } else {
            r = lbl_80557C2C[arg2 - 16];
        }
    }
    return r;
}

void TLobby__sub_803B0004(Obj_803B0004 *arg0, u32 arg1, u32 arg2, s32 arg3) {
    if (arg1 != 0) {
        TLobby__sub_803BC884(arg0, arg2, arg3);
        return;
    }
    arg2 = arg2 & 0x1F;
    if (arg2 < 0x10) {
        arg0->v[arg2] = arg3;
        return;
    }
    lbl_80557C2C[arg2 - 16] = arg3;
}

void TLobby__sub_803B1DA4(Program_803B1DA4 *self) {
    Program_803B1DA4 *p;
    Program_803B1DA4 *prev;
    p = lbl_805D7420;
    prev = NULL;
    while (p != NULL && p->deadline < self->deadline) {
        prev = p;
        p = p->next;
    }
    if (p == NULL) {
        if (prev == NULL) {
            lbl_805D7420 = self;
            self->next = NULL;
            self->prev = NULL;
        } else {
            prev->next = self;
            self->prev = prev;
            self->next = NULL;
        }
    } else {
        self->next = p;
        if ((self->prev = p->prev) != NULL) {
            p->prev->next = self;
        } else {
            lbl_805D7420 = self;
        }
        p->prev = self;
    }
}

Node_803B2598 *TLobby__sub_803B2598(u32 key) {
    Node_803B2598 *n;
    for (n = lbl_805D743C; n != 0; n = n->next) {
        if (n->key == key) {
            return n;
        }
        if (n->key > key) {
            break;
        }
    }
    return 0;
}

s32 TLobby__sub_803B2920(u8 *arg0) {
    M2C_FIELD(arg0, void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 8);
}

extern s16 lbl_805D7450;

s32 TLobby__sub_803B3AA8(Obj_803B3AA8 *arg0) {
    u32 id = arg0->id;
    if (id != 0xFFFFFFFF) {
        u8 a = arg0->b121;
        if (a != 0xFF) {
            u8 b = arg0->b122;
            u8 v = id;
            if (b == 0xFF) {
                if (lbl_80564D48[v] == v) {
                    return 1;
                }
            } else if (v == lbl_80564CC8[b][a]) {
                return 1;
            }
        }
    }
    return 0;
}

void TLobby__sub_803B3B24(Obj_803B3B24 *arg0) {
    u32 id = arg0->id;
    if (id != 0xFFFFFFFF) {
        u8 a = arg0->b121;
        if (a != 0xFF) {
            u8 b = arg0->b122;
            u8 v = id;
            if (b == 0xFF) {
                lbl_80564D48[v] = v;
            } else {
                lbl_80564CC8[b][a] = v;
            }
        }
    }
}

void TLobby__sub_803B3B80(Obj_803B3B80 *arg0) {
    u32 id = arg0->id;
    if (id != 0xFFFFFFFF) {
        u8 a = arg0->b121;
        if (a != 0xFF) {
            u8 b = arg0->b122;
            u8 v = id;
            if (b == 0xFF) {
                if (lbl_80564D48[v] == v) {
                    lbl_80564D48[v] = 0xFF;
                }
            } else if (v == lbl_80564CC8[b][a]) {
                lbl_80564CC8[b][a] = 0xFF;
            }
        }
    }
}

void TLobby__sub_803B41A0(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[1]; s8 field_1; };
    ((Fields_arg0*)arg0)->field_1 = 0;
    TLobby__sub_803B3F2C(arg0);
}

s32 TLobby__sub_803B431C(struct Envelope_803B431C *e) {
    switch (e->mode) {
    case 0:
    case 1:
        return TLobby__sub_803B41C8(e, e->release);
    default:
        return 0;
    }
}

void TLobby__sub_803B4CEC(void) {
    lbl_805D7450 = 0;
}

void TLobby__sub_803B54D8(u16 arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    TLobby__sub_803B5398(arg0, arg1, arg2, arg3, 0U, arg4);
}

void TLobby__sub_803B58A4(void) {
    memset((void *) (lbl_805D7480), (int) (0), (int) (0x100));
    DCFlushRangeNoSync((void *) (lbl_805D7480), (int) (0x100));
}

void TLobby__sub_803B59E4(u8 i) {
    lbl_805663D8[i].f50 = 0;
}

s32 TLobby__sub_803B88CC(u8 *arg0, s32 arg1) {
    struct Fields_arg0 { u8 pad_0[24]; s32 field_18; };
    if (((s32 (*)(s32, s32)) lbl_805D7490) == NULL) {
        return 0;
    }
    return lbl_805D7490(arg1, ((Fields_arg0*)arg0)->field_18);
}

void TLobby__sub_803B89B4(Ent_803B89B4 *arg0) {
    if (arg0->active != 0) {
        if (arg0->prev != 0) {
            arg0->prev->next = arg0->next;
        } else {
            lbl_805663D8[arg0->idx].head = arg0->next;
        }
        if (arg0->next != 0) {
            arg0->next->prev = arg0->prev;
        }
        arg0->active = 0;
    }
}

void TLobby__sub_803BA1B8(Node_803BA1B8 *arg0) {
    if (arg0->next != 0) {
        arg0->next->prev = arg0->prev;
    }
    if (arg0->prev != 0) {
        arg0->prev->next = arg0->next;
    } else {
        (*(Node_803BA1B8 * *)&lbl_805D749C) = arg0->next;
    }
    arg0->f10 = (u16)arg0->f10;
    if (arg0->id != 0xFFFFFFFF) {
        TLobby__sub_803A9454(arg0->id);
    }
}

void TLobby__sub_803BAB10(s32 arg0) {
    lbl_805D749C = 0;
    lbl_805D74A0 = 0;
    lbl_805D74A4 = 0;
    lbl_805D74A8 = 0;
    lbl_805D74AC = 0;
    lbl_805D74B0 = 1;
    lbl_805D74B1 = 3;
    lbl_805D7498 = 0;
    lbl_805D74B2 = (arg0 & 2) != 0;
}

}
