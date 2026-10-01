#include "types.h"
struct Obj_803D0F90 { u8 pad[0x14]; s32 val; };

struct Obj_803D13C0 { u8 pad[0x24]; s32 val; };

struct S_803D0FD0 { u8 pad[0x14]; s32 a; s32 b; };

struct S_803D1400 { u8 pad; s8 f; };

struct Rec_803D1330 { s32 key; u8 body[0x3C]; };

struct Obj_803D1330 { u8 pad[0x20]; s32 head; s32 count; u8 pad2[0x10]; Rec_803D1330 recs[16]; };

struct Ent_803D1C24 { u8 state; u8 pad[0x437]; };

struct Rec_803D1134 { s32 key; u8 pad[0x34]; s32 val; u8 pad2[4]; };

struct Obj_803D1134 { u8 pad[0x38]; Rec_803D1134 recs[16]; };

struct Rec_803D1234 { s32 key; u8 body[0x3C]; };

struct Obj_803D1234 { u8 pad[0x38]; Rec_803D1234 recs[16]; };

extern "C" {
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
s32 TLobby__sub_803D0F90(Obj_803D0F90 *p);
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
s32 TLobby__sub_803D13C0(Obj_803D13C0 *p);
s32 OSRestoreInterrupts(s32 level);
extern volatile s32 lbl_805D7638;
extern s32 lbl_805D763C;
void TLobby__sub_803D1FD4(void);
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD14[];
void TLobby__sub_803D0FD0(S_803D0FD0 *arg0, s32 arg1);
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
s32 TLobby__sub_803D1400(S_803D1400 *arg0);
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD58[];
s32 TLobby__sub_803D1330(Obj_803D1330 *arg0, s32 arg1);
void set_callback__6TLobbyFUii(u32 arg0, s32 arg1);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);
void TLobby__sub_803D198C(Ent_803D1C24 *e);
void *memset(void *dst, int val, unsigned long n);
extern Ent_803D1C24 lbl_80583058[];
extern s32 lbl_805D7630;
void TLobby__sub_803D1C24(void);
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD34[];
s32 TLobby__sub_803D1134(Obj_803D1134 *arg0, s32 arg1);
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD34[];
u8 *TLobby__sub_803D1234(Obj_803D1234 *arg0, s32 arg1);
}

extern "C" {

s32 TLobby__sub_803D0F90(Obj_803D0F90 *p) {
    if (p == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return -1;
    }
    return p->val;
}

void TLobby__sub_803D0FD0(S_803D0FD0 *arg0, s32 arg1) {
    if (arg0 == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return;
    }
    if (arg1 < 0 || arg1 > arg0->b) {
        TLobby__sub_803D0DEC(lbl_8047DD14);
        return;
    }
    arg0->a = arg1;
}

s32 TLobby__sub_803D1134(Obj_803D1134 *arg0, s32 arg1) {
    s32 i;
    if (arg0 == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return -1;
    }
    for (i = 0; i < 16; i++) {
        if (arg0->recs[i].key == arg1) {
            break;
        }
    }
    if (i == 16) {
        TLobby__sub_803D0DEC(lbl_8047DD34);
        return -1;
    }
    return arg0->recs[i].val;
}

u8 *TLobby__sub_803D1234(Obj_803D1234 *arg0, s32 arg1) {
    s32 i;
    if (arg0 == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if (arg0->recs[i].key == arg1) {
            break;
        }
    }
    if (i == 16) {
        TLobby__sub_803D0DEC(lbl_8047DD34);
        return 0;
    }
    return arg0->recs[i].body;
}

s32 TLobby__sub_803D1330(Obj_803D1330 *arg0, s32 arg1) {
    if (arg0 == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return -1;
    }
    if (arg1 < 0 || arg1 >= arg0->count) {
        TLobby__sub_803D0DEC(lbl_8047DD58);
        return -1;
    }
    return arg0->recs[(arg0->head + arg1) % 16].key;
}

s32 TLobby__sub_803D13C0(Obj_803D13C0 *p) {
    if (p == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return -1;
    }
    return p->val;
}

s32 TLobby__sub_803D1400(S_803D1400 *arg0) {
    if (arg0 == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return -1;
    }
    return arg0->f;
}

void TLobby__sub_803D1C24(void) {
    u8 lock[8];
    s32 i;
    ((void (*)(void *))enter_lock__6TLobbyFv)(lock);
    if (--lbl_805D7630 == 0) {
        for (i = 0; i < 16; i++) {
            if ((s32)lbl_80583058[i].state == 1) {
                TLobby__sub_803D198C(&lbl_80583058[i]);
            }
        }
        memset(lbl_80583058, 0, 0x4380);
        set_callback__6TLobbyFUii(0, 0);
    }
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(lock);
}

void TLobby__sub_803D1FD4(void) {
    lbl_805D7638--;
    if (lbl_805D7638 == 0) {
        OSRestoreInterrupts(lbl_805D763C);
    }
}

}
