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

struct Rec_803D1034 { s32 key; u8 pad[0x38]; s32 val; };

struct Obj_803D1034 { u8 pad[0x38]; Rec_803D1034 recs[16]; };

struct Obj_803D158C {
    u8 b0; s8 state; u8 b2; u8 pad3[0x19];
    s32 x1c; s32 x20; s32 x24; void *h28; s32 x2c; s32 x30; s32 x34;
};

struct Rec_803D1A98 { s32 key; char name[0x28]; s32 a; s32 b; s32 c; s32 x38; s32 x3c; };

struct Obj_803D1A98 {
    s8 used; u8 state; u8 pad2[6]; struct SJ_803D1A98 *sj; u8 padc[8];
    s32 x14; s32 x18; s32 head; s32 x20; s32 count; u8 pad28[0x10];
    Rec_803D1A98 recs[16];
};

struct SJIf_803D1A98 {
    void *f[9];
    s32 (*GetNumData)(struct SJ_803D1A98 *, s32);
};

struct SJ_803D1A98 { SJIf_803D1A98 *vt; };

extern "C" {
void log_printf__6TLobbyFPvi(const char *fmt, ...);
extern char lbl_8047DCF0[];
s32 get_lsc_value__6TLobbyFPv(Obj_803D0F90 *p);
void log_printf__6TLobbyFPvi(const char *fmt, ...);
extern char lbl_8047DCF0[];
s32 TLobby__sub_803D13C0(Obj_803D13C0 *p);
s32 OSRestoreInterrupts(s32 level);
extern volatile s32 lbl_805D7638;
extern s32 lbl_805D763C;
void restore_interrupts_nested__6TLobbyFv(void);
void log_printf__6TLobbyFPvi(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD14[];
void set_lsc_min__6TLobbyFPvi(S_803D0FD0 *arg0, s32 arg1);
void log_printf__6TLobbyFPvi(const char *fmt, ...);
extern char lbl_8047DCF0[];
s32 TLobby__sub_803D1400(S_803D1400 *arg0);
void log_printf__6TLobbyFPvi(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD58[];
s32 get_queue_entry_key__6TLobbyFPvi(Obj_803D1330 *arg0, s32 arg1);
void set_callback__6TLobbyFUii(u32 arg0, s32 arg1);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);
void TLobby__sub_803D198C(Ent_803D1C24 *e);
void *memset(void *dst, int val, unsigned long n);
extern Ent_803D1C24 lbl_80583058[];
extern s32 lbl_805D7630;
void release_and_close_all_slots__6TLobbyFv(void);
void log_printf__6TLobbyFPvi(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD34[];
s32 TLobby__sub_803D1134(Obj_803D1134 *arg0, s32 arg1);
void log_printf__6TLobbyFPvi(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD34[];
u8 *find_stream_by_id__6TLobbyFPvi(Obj_803D1234 *arg0, s32 arg1);
void log_printf__6TLobbyFPvi(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD34[];
s32 TLobby__sub_803D1034(Obj_803D1034 *arg0, s32 arg1);
void TLobby__sub_803C89C4(void *);
void TLobby__sub_803C8B38(void *);
void log_printf__6TLobbyFPvi(const char *fmt, ...);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);
extern char lbl_8047DCF0[];
void reset_lsc_state__6TLobbyFPv(Obj_803D158C *o);
void log_printf__6TLobbyFPvi(const char *fmt, ...);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);
extern Ent_803D1C24 lbl_80583058[];
extern char lbl_8047DDB8[];
extern char lbl_8047DDE4[];
Obj_803D1A98 *lsc_create__6TLobbyFPv(SJ_803D1A98 *sj);
void set_callback__6TLobbyFUii(u32 arg0, s32 arg1);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);
void *memset(void *dst, int val, unsigned long n);
extern Ent_803D1C24 lbl_80583058[];
extern s32 lbl_805D7630;
extern const char *volatile lbl_805E0DB0;
void TLobby__sub_803D1CC0(void);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);
void TLobby__sub_803D1D28(Ent_803D1C24 *);
extern Ent_803D1C24 lbl_80583058[];
void poll_active_connections__6TLobbyFv(void);
}

extern "C" {

s32 get_lsc_value__6TLobbyFPv(Obj_803D0F90 *p) {
    if (p == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DCF0);
        return -1;
    }
    return p->val;
}

void set_lsc_min__6TLobbyFPvi(S_803D0FD0 *arg0, s32 arg1) {
    if (arg0 == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DCF0);
        return;
    }
    if (arg1 < 0 || arg1 > arg0->b) {
        log_printf__6TLobbyFPvi(lbl_8047DD14);
        return;
    }
    arg0->a = arg1;
}

s32 TLobby__sub_803D1034(Obj_803D1034 *arg0, s32 arg1) {
    s32 i;
    if (arg0 == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DCF0);
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if (arg0->recs[i].key == arg1) {
            break;
        }
    }
    if (i == 16) {
        log_printf__6TLobbyFPvi(lbl_8047DD34);
        return 0;
    }
    return arg0->recs[i].val;
}

s32 TLobby__sub_803D1134(Obj_803D1134 *arg0, s32 arg1) {
    s32 i;
    if (arg0 == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DCF0);
        return -1;
    }
    for (i = 0; i < 16; i++) {
        if (arg0->recs[i].key == arg1) {
            break;
        }
    }
    if (i == 16) {
        log_printf__6TLobbyFPvi(lbl_8047DD34);
        return -1;
    }
    return arg0->recs[i].val;
}

u8 *find_stream_by_id__6TLobbyFPvi(Obj_803D1234 *arg0, s32 arg1) {
    s32 i;
    if (arg0 == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DCF0);
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if (arg0->recs[i].key == arg1) {
            break;
        }
    }
    if (i == 16) {
        log_printf__6TLobbyFPvi(lbl_8047DD34);
        return 0;
    }
    return arg0->recs[i].body;
}

s32 get_queue_entry_key__6TLobbyFPvi(Obj_803D1330 *arg0, s32 arg1) {
    if (arg0 == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DCF0);
        return -1;
    }
    if (arg1 < 0 || arg1 >= arg0->count) {
        log_printf__6TLobbyFPvi(lbl_8047DD58);
        return -1;
    }
    return arg0->recs[(arg0->head + arg1) % 16].key;
}

s32 TLobby__sub_803D13C0(Obj_803D13C0 *p) {
    if (p == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DCF0);
        return -1;
    }
    return p->val;
}

s32 TLobby__sub_803D1400(S_803D1400 *arg0) {
    if (arg0 == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DCF0);
        return -1;
    }
    return arg0->f;
}

void poll_active_connections__6TLobbyFv(void) {
    u8 sp8[8];
    s32 i;
    ((void (*)(void *))enter_lock__6TLobbyFv)(sp8);
    for (i = 0; i < 16; i++) {
        if ((s32)lbl_80583058[i].state == 1) {
            TLobby__sub_803D1D28(&lbl_80583058[i]);
        }
    }
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(sp8);
}

void reset_lsc_state__6TLobbyFPv(Obj_803D158C *o) {
    u8 lk0[4];
    u8 lk1[4];
    if (o == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DCF0);
        return;
    }
    ((void (*)(void *))enter_lock__6TLobbyFv)(lk0);
    if (o->state != 0) {
        if (o == 0) {
            log_printf__6TLobbyFPvi(lbl_8047DCF0);
        } else if (o->state != 0) {
            ((void (*)(void *))enter_lock__6TLobbyFv)(lk1);
            o->state = 0;
            if (o->h28 != 0) {
                if ((s32)o->b2 == 1) {
                    TLobby__sub_803C89C4(o->h28);
                    o->b2 = 0;
                }
                TLobby__sub_803C8B38(o->h28);
                o->h28 = 0;
            }
            o->x2c = 0;
            if (o == 0) {
                log_printf__6TLobbyFPvi(lbl_8047DCF0);
            } else if (o->state == 0) {
                o->x1c = 0;
                o->x20 = 0;
                o->x24 = 0;
            }
            o->x34 = 0;
            ((void (*)(void *))notify_dvd_read__6TLobbyFv)(lk1);
        }
    }
    if (o->x24 > 0) {
        o->state = 2;
    } else {
        o->state = 1;
    }
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(lk0);
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Obj_803D1A98 *find_free_803D1A98(void) {
    s32 i;
    Obj_803D1A98 *o = 0;
    for (i = 0; i < 16; i++) {
        if ((s8)lbl_80583058[i].state == 0) {
            o = (Obj_803D1A98 *)&lbl_80583058[i];
            break;
        }
    }
    return o;
}
Obj_803D1A98 *lsc_create__6TLobbyFPv(SJ_803D1A98 *sj) {
    u8 lk[4];
    s32 i;
    Obj_803D1A98 *o;
    if (sj == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DDB8);
        return 0;
    }
    ((void (*)(void *))enter_lock__6TLobbyFv)(lk);
    o = find_free_803D1A98();
    if (o == 0) {
        log_printf__6TLobbyFPvi(lbl_8047DDE4);
    } else {
        o->sj = sj;
        o->state = 0;
        o->x18 = sj->vt->GetNumData(sj, 0) + sj->vt->GetNumData(sj, 1);
        o->x14 = (o->x18 * 8) / 10;
        for (i = 0; i < 16; i++) {
            o->recs[i].x38 = 0;
        }
        o->used = 1;
    }
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(lk);
    return o;
}
#pragma pop

void release_and_close_all_slots__6TLobbyFv(void) {
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

typedef struct { const char *s; s32 n; } Ver_803D1CC0;
void TLobby__sub_803D1CC0(void) {
    u8 sp8[8];
    lbl_805E0DB0;
    ((void (*)(void *))enter_lock__6TLobbyFv)(sp8);
    if (lbl_805D7630 == 0) {
        memset((void *)(lbl_80583058), (int)(0), (unsigned long)(0x4380));
        set_callback__6TLobbyFUii(0, 0);
    }
    lbl_805D7630++;
    ((void (*)(void *))notify_dvd_read__6TLobbyFv)(sp8);
}

void restore_interrupts_nested__6TLobbyFv(void) {
    lbl_805D7638--;
    if (lbl_805D7638 == 0) {
        OSRestoreInterrupts(lbl_805D763C);
    }
}

}
