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

struct Node_803A3C24 { Node_803A3C24 *next; Node_803A3C24 *prev; s32 f8; s32 key; u8 ch; u8 grp; };
struct Chan_803A3934 { u8 grp; u8 pad[0x37]; };

struct Owner_803A3C24 { u8 pad[0xE64]; Node_803A3C24 *lists[2]; Node_803A3C24 *head; u8 padE70[0x1518 - 0xE70]; Chan_803A3934 chans[1]; };

struct Node_803A4964 { Node_803A4964 *next; Node_803A4964 *prev; s8 state; u8 idx; u8 padA[2]; u32 id; };

struct Node_803A5A04 { Node_803A5A04 *next; Node_803A5A04 *prev; u32 key; };

struct List_803A5A04 { u8 pad[0x1C]; Node_803A5A04 *head; u8 pad20[0x18]; };

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

struct Node_803A8D2C { Node_803A8D2C *next; u32 f4; u8 idx; u8 f9; };

struct Rec_803A8D2C { u8 pad[0x11C]; u8 busy; u8 pad11D[0x404 - 0x11D]; };

struct Se_803A9144 { u16 f0; u16 id; u8 b4; u8 b5; u8 b6; u8 b7; u8 b8; u8 b9; };

struct Rec_803A9454 {
    u8 pad0[0xEC];
    u32 next;
    u8 padF0[4];
    u32 id;
    u8 padF8[0x404 - 0xF8];
};

struct Rec_803A996C {
    u8 pad0[0xF4];
    u32 id;
    u8 padF8[0x11C - 0xF8];
    u8 busy;
    u8 pad11D[0x404 - 0x11D];
};

struct Lim_803A3A28 { s32 v; s32 pad; };

struct Ch_803A3A28 { Lim_803A3A28 lim[2]; u8 pad[0x28]; };

struct Tbl_803A3A28 { u8 pad[0x150C]; Ch_803A3A28 ch[1]; };

struct Slot_803A4EB8 { Node_803A4964 n; u8 pad10[0xEDA - 0x10]; u8 fEDA; u8 padEDB[0x1868 - 0xEDB]; };

struct Rec_803ADBF0 { u8 pad[9]; u8 f9; };

struct Ent_803ADBF0 { u16 id; u16 count; Rec_803ADBF0 *data; };

struct Tbl_803ADBF0 { u8 pad[0xA200]; Ent_803ADBF0 ents[1]; };

extern "C" {
void TLobby__sub_803A49C8(s32);
void TLobby__sub_803A4B7C(s32);
void TLobby__sub_803A4FC4(s32, s32, s32);
void TLobby__sub_803A8DC0(u8 *arg0);
void TLobby__sub_803BB98C(u8, void *, void *);
void TLobby__sub_803A93D0(u8 *arg0, u8 *arg1);
void TLobby__sub_803A4DDC(u32, s16);
void TLobby__sub_803BE700(void);
void TLobby__sub_803BE738(void);
void TLobby__sub_803A9F80(s32 arg0, s16 arg1);
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
extern s32 lbl_805D749C;
void TLobby__sub_803BA1B8(Node_803BA1B8 *arg0);
extern Rec_803A8D2C *lbl_805D73B0;
void TLobby__sub_803A8D2C(Node_803A8D2C **list, void (*cb)(u8));
s32 TLobby__sub_803A7880(s32, s32, s32, s32, u8, u8, s32, s32, s32, s32, s32, s32, s32, s32, s32);
Se_803A9144 *TLobby__sub_803AE76C(s16);
s32 TLobby__sub_803A9144(s16 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4);
extern u8 lbl_805D7380;
extern Rec_803A8D2C *lbl_805D73B0;
extern u32 TLobby__sub_803B2A30(u32 id);
void TLobby__sub_803B1BA4(Rec_803A9454 *);
s32 TLobby__sub_803A9454(int id);
extern Rec_803A8D2C *lbl_805D73B0;
s32 get_slot_value__6TLobbyFi(u8);
void TLobby__sub_803B488C(s32);
void TLobby__sub_803B1AF4(Rec_803A996C *);
void TLobby__sub_803B36A8(u8);
s32 TLobby__sub_803B46A4(u8);
s32 TLobby__sub_803A996C(s32 op, u32 idx);
s32 TLobby__sub_803A9454(int id);
extern Owner_803A3C24 *lbl_805D7360;
s32 TLobby__sub_803A3A28(void);
extern Node_803A4964 *lbl_805D7378;
extern Node_803A4964 *lbl_805D737C;
extern Slot_803A4EB8 lbl_8054AB48[];
void TLobby__sub_803A4EB8(s32 arg0);
void TLobby__sub_803BE700(void);
void TLobby__sub_803BE738(void);
extern u8 lbl_80559E70[];
extern u16 lbl_805D73DA;
s32 TLobby__sub_803ADBF0(u16 arg0, Rec_803ADBF0 *arg1, u16 arg2);
}

extern "C" {

struct Voice_803A4DDC { u8 pad[0x32]; s16 vol; u8 pad34[4]; };
struct Slot_803A4DDC {
    u8 pad0[0x22D8];
    s16 f0;
    u8 flags;
    u8 pad3[0x28E8 - 0x22DB];
    Voice_803A4DDC voices[16];
};
extern u8 lbl_80549748[];
struct Owner_803A61F8 {
    u8 pad0[0x14E4];
    u8 *map;
    List_803A5A04 chans[1];
};
Node_803A5A04 *TLobby__sub_803A57EC(u8);

#pragma pack(push, 4)
struct Rec_803AA35C {
    u8 pad0[0x114];
    u64 flags;
    u8 pad11C[0x404 - 0x11C];
};
#pragma pack(pop)
struct Cfg_803AA35C { u8 pad[0x210]; u8 count; };
extern Cfg_803AA35C lbl_80557348;
void TLobby__sub_803BD9F8(void);
void TLobby__sub_803AB5A8(void);
typedef void (*Cb_803AB0E4)(s32, s32, s32, s32, s32);
struct Rec_803AB0E4 { u8 pad[8]; u8 state; u8 pad9[3]; Cb_803AB0E4 cb; u8 pad10[0x38]; s32 f48; s32 f4c; u8 pad50[0x14]; };

void TLobby__sub_803B3628(s32);
extern Rec_803AB0E4 lbl_80558570[];
struct Ent_803ADB58 { u16 id; u16 ref; s32 f4; s32 f8; s32 fc; u8 pad10[0x10]; };
struct Tbl_803ADB58 { Ent_803ADB58 *list; s32 base; s32 f8; };

s32 TLobby__sub_803BD93C(void *, s32);
extern u8 lbl_80559E70[];
extern u16 lbl_805D73D0;
struct Grp_803AE76C { u16 f0; u16 n; void *base; };
struct Key_803AE76C { s16 key; };
struct Grps_803AE76C { Grp_803AE76C g[0x85]; };
struct Blk_803AE76C { u8 pad0[0xA200]; Grps_803AE76C grps; u8 pad428[4]; Key_803AE76C k; };
extern u16 lbl_805D73DA;
struct Slot_803AE814 { u16 count; u16 start; };

void TLobby__sub_803BD884(void *, void *);
extern Slot_803AE814 lbl_8055F870[];
extern u16 lbl_805D73D0;
extern u16 lbl_805D73D2;
extern u16 lbl_805D73D4;
extern u16 lbl_805D73D6;
extern u16 lbl_805D73D8;
extern u16 lbl_805D73DA;
#pragma pack(push, 4)
struct Rec_803B1AF4 {
    u8 pad0[0x34]; u32 f34; s32 f38; u8 pad3c[0x10]; s32 f4c; u8 pad50[4]; u32 f54; u8 pad58[8]; s32 f60;
    u8 pad64[4]; u8 f68; u8 pad69[0x114 - 0x69]; u64 flags;
};
#pragma pack(pop)
void TLobby__sub_803B1F24(void *);
#pragma pack(push, 4)
struct Ch_803B1BA4 {
    u8 pad0[0x34]; u32 f34; s32 f38; u8 pad3c[0x14]; u32 f50; u8 pad54[8]; s32 f5c;
    u8 pad60[8]; u8 f68; u8 pad69[0x114 - 0x69]; u64 flags;
};
#pragma pack(pop)
struct Node_803B24A0 { Node_803B24A0 *next; Node_803B24A0 *prev; u32 f8; u32 fc; };

extern Node_803B24A0 lbl_805644C8[];
extern s32 lbl_805D7438;
extern Node_803B24A0 *lbl_805D7440;
struct Slot_803B312C { u8 prev; u8 next; u16 refs; };
struct Obj_803B312C { u8 pad0[0x34]; s32 f34; u8 pad38[0xBC]; s32 id; u8 padF8[0x14]; u8 grp; u8 pad10d[0x10]; u8 f11d; };

void TLobby__sub_803B202C(Obj_803B312C *, s32);
void TLobby__sub_803B2A80(Obj_803B312C *);
extern Slot_803B312C lbl_80565388[];
extern u8 lbl_805D7446;
extern u8 lbl_805D7447;
extern u8 lbl_805D7448;
extern u8 lbl_805D7449;
u32 TLobby__sub_803B4360(void *, void *, void *);
void TLobby__sub_803B4CF8(u16, void *, void *, void *);
void TLobby__sub_803B4CF8(u16, void *, void *, void *);
struct Ent_803B5DB0 {
    u8 pad[0x1C];
    u32 key;
};
struct Slot_803B8ABC { u32 a; u32 b; u32 src; };
struct Obj_803B8ABC { u8 pad[0x52]; u8 count; u8 pad53[5]; Slot_803B8ABC slots[7]; };
struct Node_803BA228 { Node_803BA228 *next; Node_803BA228 *prev; u8 pad8[8]; u32 f10; u8 pad14[0x30]; u16 id; };
struct Ent_803BA228 { u16 id; u8 pad[8]; };
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

void TLobby__sub_803A3858(Owner_803A3C24 *o) {
    u32 i;
    Node_803A3C24 *p;
    Node_803A3C24 *q;

    for (i = 0; i < 2; i++) {
        if ((p = o->lists[i]) != NULL) {
            while ((q = p->next) != NULL) {
                p = q;
            }
            if (lbl_805D7364 != NULL) {
                p->next = lbl_805D7364;
                lbl_805D7364->prev = p;
            }
            lbl_805D7364 = o->lists[i];
            o->lists[i] = NULL;
        }
    }
    if ((p = o->head) != NULL) {
        while ((q = p->next) != NULL) {
            p = q;
        }
        if (lbl_805D7364 != NULL) {
            p->next = lbl_805D7364;
            lbl_805D7364->prev = p;
        }
        lbl_805D7364 = o->head;
        o->head = NULL;
    }
}

Node_803A3C24 *TLobby__sub_803A3934(s32 key, u8 ch) {
    Node_803A3C24 *n = lbl_805D7364;
    Node_803A3C24 *cur;
    Node_803A3C24 *prev;

    if (n != NULL) {
        if ((lbl_805D7364 = n->next) != NULL) {
            lbl_805D7364->prev = NULL;
        }
        n->key = key;
        n->ch = ch;
        n->grp = lbl_805D7360->chans[ch].grp;
        prev = NULL;
        for (cur = lbl_805D7360->lists[n->grp]; cur != NULL; prev = cur, cur = cur->next) {
            if (cur->key > n->key) {
                n->next = cur;
                n->prev = prev;
                if (prev != NULL) {
                    prev->next = n;
                } else {
                    lbl_805D7360->lists[n->grp] = n;
                }
                cur->prev = n;
                return n;
            }
        }
        n->prev = prev;
        if (prev != NULL) {
            prev->next = n;
        } else {
            lbl_805D7360->lists[n->grp] = n;
        }
        n->next = NULL;
    }
    return n;
}

s32 TLobby__sub_803A3A28(void) {
    Node_803A3C24 *n;
    u32 i;
    s32 r;
    for (i = 0; i < 2; i++) {
        n = lbl_805D7360->lists[i];
        if (n == NULL) {
            continue;
        }
        while (n->key <= ((Tbl_803A3A28 *)lbl_805D7360)->ch[n->ch].lim[i].v) {
            TLobby__sub_803A9454(n->f8);
            if ((lbl_805D7360->lists[i] = n->next) != NULL) {
                lbl_805D7360->lists[i]->prev = NULL;
            }
            if ((n->next = lbl_805D7360->head) != NULL) {
                lbl_805D7360->head->prev = n;
            }
            lbl_805D7360->head = n;
            n = lbl_805D7360->lists[i];
            if (n == NULL) {
                break;
            }
        }
    }
    r = 1;
    if (lbl_805D7360->lists[0] == NULL && lbl_805D7360->lists[1] == NULL) {
        r = 0;
    }
    return r;
}

void TLobby__sub_803A3B54(void) {
    Node_803A3C24 *n;
    Node_803A3C24 *next;
    u32 i;

    for (i = 0; i < 2; i++) {
        for (n = lbl_805D7360->lists[i]; n != NULL; n = next) {
            next = n->next;
            TLobby__sub_803A9454(n->f8);
            if ((lbl_805D7360->lists[i] = n->next) != NULL) {
                lbl_805D7360->lists[i]->prev = NULL;
            }
            if ((n->next = lbl_805D7360->head) != NULL) {
                lbl_805D7360->head->prev = n;
            }
            lbl_805D7360->head = n;
        }
    }
}

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

void TLobby__sub_803A4DDC(u32 id, s16 v) {
    u8 *base = lbl_80549748;
    Node_803A4964 *n;
    u32 key = id & 0x7FFFFFFF;
    s32 h;

    for (n = lbl_805D737C; n != NULL; n = n->next) {
        if (n->id == key) {
            h = (n->idx & 0x7FFFFFFF) | (id & 0x80000000);
            goto found;
        }
    }
    for (n = lbl_805D7378; n != NULL; n = n->next) {
        if (n->id == key) {
            h = (n->idx & 0x7FFFFFFF) | (id & 0x80000000);
            goto found;
        }
    }
    h = -1;
found:
    if (!(h & 0x80000000)) {
        {
            Slot_803A4DDC *sl = (Slot_803A4DDC *)(base + h * 0x1868);
            sl->voices[0].vol = v;
            sl->voices[1].vol = v;
            sl->voices[2].vol = v;
            sl->voices[3].vol = v;
            sl->voices[4].vol = v;
            sl->voices[5].vol = v;
            sl->voices[6].vol = v;
            sl->voices[7].vol = v;
            sl->voices[8].vol = v;
            sl->voices[9].vol = v;
            sl->voices[10].vol = v;
            sl->voices[11].vol = v;
            sl->voices[12].vol = v;
            sl->voices[13].vol = v;
            sl->voices[14].vol = v;
            sl->voices[15].vol = v;
        }
    } else {
        Slot_803A4DDC *s = (Slot_803A4DDC *)(base + (h & 0x7FFFFFFF) * 0x1868);
        s->flags |= 0x20;
        s->f0 = v;
    }
}

void TLobby__sub_803A4EB8(s32 arg0) {
    Node_803A4964 *n;
    u32 key = arg0 & 0x7FFFFFFF;
    s32 h;
    for (n = lbl_805D737C; n != NULL; n = n->next) {
        if (n->id == key) {
            h = (n->idx & 0x7FFFFFFF) | (arg0 & 0x80000000);
            goto found;
        }
    }
    for (n = lbl_805D7378; n != NULL; n = n->next) {
        if (n->id == key) {
            h = (n->idx & 0x7FFFFFFF) | (arg0 & 0x80000000);
            goto found;
        }
    }
    h = -1;
found:
    if (!(h & 0x80000000)) {
        Node_803A4964 *s = &lbl_8054AB48[h].n;
        if ((u8)s->state == 2) {
            if (s->prev != 0) {
                s->prev->next = s->next;
            } else {
                lbl_805D7378 = s->next;
            }
            if (s->next != 0) {
                s->next->prev = s->prev;
            }
            if ((s->next = lbl_805D737C) != 0) {
                lbl_805D737C->prev = s;
            }
            s->prev = 0;
            lbl_805D737C = s;
            s->state = 1;
        }
    } else {
        lbl_8054AB48[h & 0x7FFFFFFF].fEDA &= ~8;
    }
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

void TLobby__sub_803A61F8(void) {
    u32 i;
    Node_803A5A04 *n;

    if (((Owner_803A61F8 *)lbl_805D7360)->map == NULL) {
        for (i = 0; i < 0x40; i++) {
            n = TLobby__sub_803A57EC(i);
            if (n != NULL) {
                TLobby__sub_803A5A04(&((Owner_803A61F8 *)lbl_805D7360)->chans[0], n);
            }
        }
    } else {
        for (i = 0; i < 0x40; i++) {
            n = TLobby__sub_803A57EC(i);
            if (n != NULL) {
                TLobby__sub_803A5A04(&((Owner_803A61F8 *)lbl_805D7360)->chans[((Owner_803A61F8 *)lbl_805D7360)->map[i]], n);
            }
        }
    }
}

void TLobby__sub_803A62A0(u8 ch) {
    u32 i;
    Node_803A5A04 *n;

    if (((Owner_803A61F8 *)lbl_805D7360)->map == NULL) {
        for (i = 0; i < 0x40; i++) {
            n = TLobby__sub_803A57EC(i);
            if (n != NULL) {
                TLobby__sub_803A5A04(&((Owner_803A61F8 *)lbl_805D7360)->chans[0], n);
            }
        }
    } else {
        for (i = 0; i < 0x40; i++) {
            if (ch == ((Owner_803A61F8 *)lbl_805D7360)->map[i]) {
                n = TLobby__sub_803A57EC(i);
                if (n != NULL) {
                    TLobby__sub_803A5A04(&((Owner_803A61F8 *)lbl_805D7360)->chans[ch], n);
                }
            }
        }
    }
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

void TLobby__sub_803A8D2C(Node_803A8D2C **list, void (*cb)(u8)) {
    Node_803A8D2C *n;
    Node_803A8D2C *next;
    for (n = *list; n != NULL; n = next) {
        next = n->next;
        n->f9 = 0xFF;
        if (lbl_805D73B0[n->idx].busy == 0) {
            cb(n->idx);
        }
    }
    *list = NULL;
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

s32 TLobby__sub_803A9144(s16 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4) {
    s32 ret = -1;
    Se_803A9144 *p = TLobby__sub_803AE76C(arg0);
    if (p != NULL) {
        if (arg1 == 0xFF) {
            arg1 = p->b6;
        }
        if (arg2 == 0xFF) {
            arg2 = p->b7;
        }
        ret = TLobby__sub_803A7880(p->id, p->b5, p->b4, p->b8 | 0x80, arg1, arg2, 0xFF, 0xFF,
                                   0, 0, 0xFF, p->b9, 0, arg3, arg4);
    }
    return ret;
}

void TLobby__sub_803A93D0(u8 *arg0, u8 *arg1) {
    TLobby__sub_803BB98C(7U, arg0, arg1);
    TLobby__sub_803BB98C(0xAU, arg0, arg1);
    TLobby__sub_803BB98C(0x5BU, arg0, arg1);
    TLobby__sub_803BB98C(0x80U, arg0, arg1);
    TLobby__sub_803BB98C(0x84U, arg0, arg1);
}

typedef char RecoveredGlobal_803A98F0_lbl_80556F88_size[sizeof(RecoveredGlobal_803A98F0_lbl_80556F88) == 0x3C0 ? 1 : -1];

s32 TLobby__sub_803A9454(int id) {
    u8 idx;
    s32 found = 0;
    u32 cur;
    if (lbl_805D7380 != 0) {
        cur = TLobby__sub_803B2A30(id);
        while (cur != 0xFFFFFFFF) {
            idx = cur;
            if (cur == (*(Rec_803A9454 * *)&lbl_805D73B0)[idx].id) {
                TLobby__sub_803B1BA4(&(*(Rec_803A9454 * *)&lbl_805D73B0)[idx]);
                found = 1;
            }
            cur = (*(Rec_803A9454 * *)&lbl_805D73B0)[idx].next;
        }
    }
    return found;
}

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

s32 TLobby__sub_803A996C(s32 op, u32 idx) {
    s32 ret = 0;
    switch (op) {
    case 0:
        if ((*(Rec_803A996C * *)&lbl_805D73B0)[(u8)idx].busy == 0) {
            TLobby__sub_803B488C(get_slot_value__6TLobbyFi(idx));
            if (idx == (*(Rec_803A996C * *)&lbl_805D73B0)[(u8)idx].id) {
                TLobby__sub_803B1AF4(&(*(Rec_803A996C * *)&lbl_805D73B0)[(u8)idx]);
            }
        }
        break;
    case 1:
        TLobby__sub_803B36A8(idx);
        break;
    case 2:
        ret = TLobby__sub_803B46A4(idx);
        break;
    case 3:
        TLobby__sub_803B488C(get_slot_value__6TLobbyFi(idx));
        break;
    }
    return ret;
}

void TLobby__sub_803A9F80(s32 arg0, s16 arg1) {
    TLobby__sub_803BE738();
    TLobby__sub_803A4DDC(arg0, arg1);
    TLobby__sub_803BE700();
}

void TLobby__sub_803A9FC8(s32 arg0) {
    TLobby__sub_803BE738();
    TLobby__sub_803A4EB8((s32)(arg0));
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
    var_r31 = TLobby__sub_803A9454((int)((int) (var_r3)));
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

void TLobby__sub_803AA35C(s32 mode) {
    u32 old = lbl_805D73AC;
    u32 i;

    switch (mode) {
    case 0:
        lbl_805D73AC = old | 1;
        lbl_805D73AC &= ~2;
        TLobby__sub_803BD9F8();
        break;
    case 1:
        lbl_805D73AC = old & ~1;
        lbl_805D73AC &= ~2;
        TLobby__sub_803BD9F8();
        break;
    case 2:
        lbl_805D73AC = old & ~1;
        lbl_805D73AC |= 2;
        TLobby__sub_803BD9F8();
        break;
    }
    if (old != (u32)lbl_805D73AC) {
        for (i = 0; i < lbl_80557348.count; i++) {
            ((Rec_803AA35C *)lbl_805D73B0)[i].flags |= 0x200000000000ULL;
        }
        TLobby__sub_803AB5A8();
    }
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

void TLobby__sub_803AB0E4(s32 arg0) {
    Rec_803AB0E4 *r = &lbl_80558570[arg0];

    switch (r->state) {
    case 1:
    case 2:
        if (r->state == 2) {
            TLobby__sub_803B3628(r->f48);
        }
        r->state = 3;
        r->cb(0, 0, 0, 0, r->f4c);
        break;
    }
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

s32 TLobby__sub_803ADB58(u16 id) {
    u32 i;

    for (i = 0; i < lbl_805D73D0; i++) {
        Ent_803ADB58 *e;
        u16 v;
        for (e = ((Tbl_803ADB58 *)lbl_80559E70)[i].list; (v = e->id) != 0xFFFF; e++) {
            if (v == id && e->ref != 0xFFFF) {
                e->ref--;
                if (e->ref == 0) {
                    TLobby__sub_803BD93C(&e->fc, e->f8);
                }
                return 1;
            }
        }
    }
    return 0;
}

s32 TLobby__sub_803ADBF0(u16 arg0, Rec_803ADBF0 *arg1, u16 arg2) {
    Tbl_803ADBF0 *t = (Tbl_803ADBF0 *)lbl_80559E70;
    Ent_803ADBF0 *e;
    s32 i;
    u16 n;
    s32 k;
    n = lbl_805D73DA;
    e = t->ents;
    i = 0;
    while (i < n && arg0 != e->id) {
        e++;
        i++;
    }
    if (i == n && n < 0x80) {
        TLobby__sub_803BE738();
        k = lbl_805D73DA;
        t->ents[k].id = arg0;
        t->ents[k].count = arg2;
        t->ents[k].data = arg1;
        k = 0;
        while (k < arg2) {
            arg1->f9 = 0x1F;
            k++;
            arg1++;
        }
        lbl_805D73DA++;
        TLobby__sub_803BE700();
        return 1;
    }
    return 0;
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

Se_803A9144 *TLobby__sub_803AE76C(s16 arg0) {
    s32 i;
    Blk_803AE76C *b;
    s32 *r;

    b = (Blk_803AE76C *)lbl_80559E70;
    i = 0;
    b->k.key = arg0;
    for (; i < lbl_805D73DA; i++) {
        r = TLobby__sub_803BC9A8((Req_803AE60C *)&b->k, ((Grp_803AE76C *)(lbl_80559E70 + 0xA200))[i].base, ((Grp_803AE76C *)(lbl_80559E70 + 0xA200))[i].n, 10,
                                 (s32 (*)(u8 *, u8 *))TLobby__sub_803AE75C);
        if (r != NULL) {
            return (Se_803A9144 *)r;
        }
    }
    return NULL;
}

void TLobby__sub_803AE814(void *arg0, void *arg1) {
    s32 i;

    lbl_805D73D0 = 0;
    lbl_805D73D2 = 0;
    lbl_805D73D4 = 0;
    lbl_805D73D6 = 0;
    lbl_805D73DA = 0;
    lbl_805D73D8 = 0;
    for (i = 0; i < 0x200; i++) {
        lbl_8055F870[i].count = 0;
        lbl_8055F870[i].start = 0;
    }
    TLobby__sub_803BD884(arg0, arg1);
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

#define o ((Rec_803B1AF4 *)ov)
void TLobby__sub_803B1AF4(Rec_803A996C *ov) {
    u32 done;

    if (o->f4c == 1) {
        if (o->f68 != 0 && o->f54 != 0) {
            o->f38 = o->f60;
            o->f34 = o->f54;
            o->f54 = 0;
            TLobby__sub_803B1F24(o);
            done = 1;
        } else {
            done = 0;
        }
        if (done == 0 && (o->flags & 0x40000) != 0) {
            TLobby__sub_803B1F24(o);
        }
    }
}
#undef o

void TLobby__sub_803B1BA4(Rec_803A9454 *arg0) {
    Ch_803B1BA4 *o = (Ch_803B1BA4 *)arg0;
    u32 done;

    o->flags |= 8;
    if (o->f34 != 0) {
        if ((o->flags & 0x10000000000ULL) == 0) {
            if (o->f68 != 0 && o->f50 != 0) {
                o->f38 = o->f5c;
                o->f34 = o->f50;
                o->f50 = 0;
                TLobby__sub_803B1F24(o);
                done = 1;
            } else {
                done = 0;
            }
            if (done == 0 && (o->flags & 4) != 0) {
                TLobby__sub_803B1F24(o);
            }
        } else {
            o->flags |= 0x40000000000ULL;
        }
    }
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

void TLobby__sub_803B24A0(void) {
    s32 i;
    Node_803B24A0 *n;
    Node_803B24A0 *prev;

    n = lbl_805644C8;
    lbl_805D7440 = n;
    lbl_805D7438 = 0;
    lbl_805D743C = NULL;
    prev = NULL;
    for (i = 0; i < 128; i++) {
        n->prev = prev;
        if (prev != NULL) {
            prev->next = n;
        }
        prev = n;
        n++;
    }
    prev->next = NULL;
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

void TLobby__sub_803B312C(Obj_803B312C *o) {
    u8 idx;
    Slot_803B312C *e;

    TLobby__sub_803B202C(o, 2);
    TLobby__sub_803B2A80(o);
    o->f34 = 0;
    o->grp = 0;
    idx = o->id;
    e = &lbl_80565388[(u8)o->id];
    if (e->refs == 0) {
        e->refs = 1;
        if (lbl_805D7449 != 0xFF) {
            e->next = 0xFF;
            e->prev = lbl_805D7448;
            lbl_80565388[lbl_805D7448].next = idx;
        } else {
            e->next = 0xFF;
            e->prev = 0xFF;
            lbl_805D7449 = idx;
        }
        lbl_805D7448 = idx;
        if (o->f11d != 0) {
            lbl_805D7447--;
        } else {
            lbl_805D7446--;
        }
    }
    o->id = -1;
}

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

s32 TLobby__sub_803B4500(void *arg0, void *arg1, void *arg2) {
    u8 i;

    for (i = 0; i < 15; i++) {
        if (TLobby__sub_803B4360(arg0, arg1, arg2) != 0) {
            return 1;
        }
    }
    return 0;
}

void TLobby__sub_803B4CEC(void) {
    lbl_805D7450 = 0;
}

void TLobby__sub_803B4F5C(u16 *p, void *a, void *b, void *c) {
    u16 i;
    u16 v;

    while ((v = *p) != 0xFFFF) {
        if (v & 0x8000) {
            for (i = v & 0x3FFF; i <= p[1]; i++) {
                TLobby__sub_803B4CF8(i, a, b, c);
            }
            p += 2;
        } else {
            TLobby__sub_803B4CF8(*p++, a, b, c);
        }
    }
}

void TLobby__sub_803B4FF8(u16 *start, void *a, void *b, void *c) {
    s16 i;
    u16 *p;

    if (*start == 0xFFFF) {
        return;
    }
    p = start;
    while (*p != 0xFFFF) {
        p++;
    }
    p--;
    while (p >= start) {
        if (p != start) {
            if (p[-1] & 0x8000) {
                for (i = *p; i >= (s16)(p[-1] & 0x3FFF); i--) {
                    TLobby__sub_803B4CF8(i, a, b, c);
                }
                p -= 2;
            } else {
                TLobby__sub_803B4CF8(*p, a, b, c);
                p--;
            }
        } else {
            TLobby__sub_803B4CF8(*p, a, b, c);
            p--;
        }
    }
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

void TLobby__sub_803B5DB0(Ent_803B5DB0 **v, s32 left, s32 right) {
    Ent_803B5DB0 **pm;
    s32 i;
    s32 last;
    Ent_803B5DB0 *t;
    Ent_803B5DB0 *e;
    Ent_803B5DB0 **pl;
    Ent_803B5DB0 **pi;

    if (left >= right) {
        return;
    }
    pl = &v[left];
    pm = &v[(left + right) / 2];
    t = *pl;
    *pl = *pm;
    *pm = t;
    last = left;
    for (i = left + 1; i <= right; i++) {
        e = v[i];
        if (e->key < (*pl)->key) {
            last++;
            t = v[last];
            v[last] = e;
            v[i] = t;
        }
    }
    pm = &v[last];
    t = *pl;
    *pl = *pm;
    *pm = t;
    TLobby__sub_803B5DB0(v, left, last - 1);
    TLobby__sub_803B5DB0(v, last + 1, right);
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

s32 TLobby__sub_803B8ABC(Obj_803B8ABC *arg0, u32 arg1) {
    s32 i;

    for (i = 0; i < arg0->count; i++) {
        if (arg0->slots[i].src == arg1) {
            for (; i <= arg0->count - 2; i++) {
                arg0->slots[i] = arg0->slots[i + 1];
            }
            arg0->count--;
            return 1;
        }
    }
    return 0;
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
        TLobby__sub_803A9454((int)(arg0->id));
    }
}

void TLobby__sub_803BA228(Ent_803BA228 *arg0, u32 arg1) {
    Node_803BA228 *n;
    Node_803BA228 *next;
    u32 i;

    for (n = *(Node_803BA228 **)&lbl_805D749C; n != 0; n = next) {
        next = n->next;
        for (i = 0; i < arg1; i++) {
            if (n->id == arg0[i].id) {
                if (lbl_805D7380 != 0) {
                    TLobby__sub_803BE738();
                    if (n->f10 & 0x10000) {
                        TLobby__sub_803BA1B8((Node_803BA1B8 *)n);
                    }
                    TLobby__sub_803BE700();
                }
                break;
            }
        }
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
