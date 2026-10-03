#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80208D28_lbl_805139F8 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct Ent_80208A04 { u8 pad[8]; s32 n; };

struct Rec_80208B7C { s32 id; s16 f4; u8 pad[0xE]; };

struct Grp_80208B7C { u8 pad[8]; s32 count; s32 pad3; Rec_80208B7C recs[1]; };

typedef s32 M2C_UNK;
struct Rec_80208904 { s32 id; s16 f4; s16 f6; s16 f8; s16 fa; s32 fc; s32 f10; };

struct Grp_80208904 { s32 a; s32 b; s32 count; s32 pad; Rec_80208904 recs[1]; };

struct Rec_80208A40 { s32 id; s16 f4; u8 pad[0xE]; };

struct Grp_80208A40 { u8 pad[8]; s32 count; s32 pad3; Rec_80208A40 recs[1]; };

struct Rec_80208AD8 { s32 id; s16 f4; u8 pad[0xE]; };

struct Grp_80208AD8 { u8 pad[8]; s32 count; s32 pad3; Rec_80208AD8 recs[1]; };

struct Rec_80208BD8 { s32 id; s16 f4; s16 f6; u8 pad[0xC]; };
struct Grp_80208BD8 { u8 pad[8]; s32 count; s32 pad3; Rec_80208BD8 recs[1]; };
typedef void (*Fn_80208BD8)(Rec_80208BD8 *);

struct Rec_802089B0 { u8 pad[4]; s16 f4; u8 pad2[0xE]; };

struct Grp_802089B0 { u8 pad[8]; s32 count; s32 pad3; Rec_802089B0 recs[1]; };

extern "C" {
s32 get_current_floor();
extern Fn_80208BD8 lbl_804C9428[];
void activate_triggered_floor_events(void);
s32 TLobby__sub_80208C78(s32 idx, s32 id);
u8 * heap_alloc__5THeapFUl(void *, s32);
extern RecoveredGlobal_80208D28_lbl_805139F8 lbl_805139F8;
extern u8 *lbl_805D6094;
u8 *TLobby__sub_80208D28(s32 arg0, s32 arg1);
extern RecoveredGlobal_80208D28_lbl_805139F8 lbl_805139F8;
s32 TLobby__sub_80208A04(void);
extern RecoveredGlobal_80208D28_lbl_805139F8 lbl_805139F8;
s32 set_floor_event_flags(s32 arg0, s32 arg1, s32 arg2);
void bswap_16__FPUs(void *);
void bswap_32__FPUl(void *);
extern RecoveredGlobal_80208D28_lbl_805139F8 lbl_805139F8;
void TLobby__sub_80208904(s32 idx);
void bswap_16__FPUs(void *);
s32 TLobby__sub_80208A04(void);
extern RecoveredGlobal_80208D28_lbl_805139F8 lbl_805139F8;
void TLobby__sub_80208A40(s16 *arg0);
void bswap_16__FPUs(void *);
s32 TLobby__sub_80208A04(void);
extern RecoveredGlobal_80208D28_lbl_805139F8 lbl_805139F8;
s32 TLobby__sub_80208AD8(s16 *arg0);
extern RecoveredGlobal_80208D28_lbl_805139F8 lbl_805139F8;
void TLobby__sub_802089B0(void);
}

extern "C" {

void TLobby__sub_80208884(void* a0);
void set_destroy_event__6TLobbyFi(int a0);
void spawn_destroy_event__6TLobbyFPv(void *arg0);
void TLobby__sub_80208900(void);
s32 get_destroy_event_obj__6TLobbyFv();
M2C_UNK TNpcPlayer__sub_8034E5A8(s16);
M2C_UNK TSetEvtDestroy__ct(void *, s32, void *);
void *__nw__7TObjectFUl(M2C_UNK);

    extern int lbl_805D6078;
    extern int lbl_805D607C;
void TLobby__sub_80208884(void* a0) { lbl_805D6078 = *(int*)((char*)a0 + 0x0); lbl_805D607C = *(int*)((char*)a0 + 0x4); }

    extern int lbl_805D6090;
void set_destroy_event__6TLobbyFi(int a0) { lbl_805D6090 = a0; }

extern s32 tl_01;

void spawn_destroy_event__6TLobbyFPv(void *arg0) {
    void *obj;

    if (get_destroy_event_obj__6TLobbyFv() != -1) {
        TNpcPlayer__sub_8034E5A8(M2C_FIELD(arg0, s16 *, 8));
    }
    obj = __nw__7TObjectFUl(0x34);
    if (obj != NULL) {
        TSetEvtDestroy__ct(obj, tl_01, arg0);
    }
    set_destroy_event__6TLobbyFi(-1);
}

void TLobby__sub_80208900(void) {  }
typedef char RecoveredGlobal_80208D28_lbl_805139F8_size[sizeof(RecoveredGlobal_80208D28_lbl_805139F8) == 0x48 ? 1 : -1];

void TLobby__sub_80208904(s32 idx) {
    Rec_80208904 *r = ((Rec_80208904 **)&lbl_805139F8)[idx];
    s32 n;
    s32 i;
    if (r != NULL) {
        bswap_32__FPUl((u8 *)r);
        bswap_32__FPUl((u8 *)r + 4);
        bswap_32__FPUl((u8 *)r + 8);
        n = ((Grp_80208904 *)r)->count;
        r = ((Grp_80208904 *)r)->recs;
        i = 0;
        for (; i < n; i++, r++) {
            bswap_32__FPUl(&r->id);
            bswap_16__FPUs(&r->f4);
            bswap_16__FPUs(&r->f6);
            bswap_16__FPUs(&r->f8);
            bswap_16__FPUs(&r->fa);
            bswap_32__FPUl(&r->fc);
            bswap_32__FPUl(&r->f10);
        }
    }
}

void TLobby__sub_802089B0(void) {
    Grp_802089B0 **t;
    Grp_802089B0 *g;
    s32 i;
    s32 n;
    Rec_802089B0 *r;
    s32 j;
    i = 0;
    t = (Grp_802089B0 **)&lbl_805139F8;
    do {
        g = t[i];
        if (g != NULL) {
            n = g->count;
            r = g->recs;
            for (j = 0; j < n; j++, r++) {
                r->f4 = 0;
            }
        }
        i++;
    } while (i < 0x12);
}

s32 TLobby__sub_80208A04(void) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < 18; i++) {
        if (((Ent_80208A04 * *)&lbl_805139F8)[i] != 0) sum += ((Ent_80208A04 * *)&lbl_805139F8)[i]->n;
    }
    return sum * 2;
}

void TLobby__sub_80208A40(s16 *arg0) {
    Grp_80208A40 **t;
    s16 *src;
    s32 i;
    s32 n;
    Rec_80208A40 *r;
    s32 j;
    s16 tmp;
    TLobby__sub_80208A04();
    src = arg0;
    t = (Grp_80208A40 **)&lbl_805139F8;
    i = 0;
    do {
        Grp_80208A40 *g = t[i];
        if (g != NULL) {
            n = g->count;
            r = g->recs;
            for (j = 0; j < n; j++, src++, r++) {
                tmp = *src;
                bswap_16__FPUs(&tmp);
                r->f4 = tmp;
            }
        }
        i++;
    } while (i < 0x12);
}

s32 TLobby__sub_80208AD8(s16 *arg0) {
    s32 ret;
    Grp_80208AD8 **t;
    s16 *src;
    s32 i;
    s32 n;
    Rec_80208AD8 *r;
    s32 j;
    s16 tmp;
    ret = TLobby__sub_80208A04();
    src = arg0;
    t = (Grp_80208AD8 **)&lbl_805139F8;
    i = 0;
    do {
        Grp_80208AD8 *g = t[i];
        if (g != NULL) {
            n = g->count;
            r = g->recs;
            for (j = 0; j < n; j++, src++, r++) {
                tmp = r->f4 & ~2;
                bswap_16__FPUs(&tmp);
                *src = tmp;
            }
        }
        i++;
    } while (i < 0x12);
    return ret;
}

s32 set_floor_event_flags(s32 arg0, s32 arg1, s32 arg2) {
    Grp_80208B7C *g = ((Grp_80208B7C * *)&lbl_805139F8)[arg0];
    Rec_80208B7C *r;
    s32 n;
    if (g == 0) {
        return 0;
    }
    n = g->count;
    r = g->recs;
    s32 i;
    for (i = 0; i < n; i++) {
        if (r->id == arg1) {
            r->f4 |= arg2;
        }
        r++;
    }
    return 1;
}

void activate_triggered_floor_events(void) {
    Fn_80208BD8 *tbl;
    s32 n;
    Rec_80208BD8 *r;
    s32 i;
    Grp_80208BD8 *g = ((Grp_80208BD8 **)&lbl_805139F8)[get_current_floor()];
    if (g != NULL) {
        n = g->count;
        r = g->recs;
        i = 0;
        tbl = lbl_804C9428;
        for (; i < n; i++, r++) {
            if (!(r->f4 & 2) && (r->f4 & 4)) {
                tbl[r->f6](r);
                r->f4 |= 6;
            }
        }
    }
}

s32 TLobby__sub_80208C78(s32 idx, s32 id) {
    Grp_80208BD8 *g = ((Grp_80208BD8 **)&lbl_805139F8)[idx];
    Rec_80208BD8 *r;
    s32 i;
    if (g == NULL) {
        return 0;
    }
    r = g->recs;
    for (i = g->count; i > 0; i--, r++) {
        if (r->id == id && !(r->f4 & 2)) {
            lbl_804C9428[r->f6](r);
            r->f4 |= 6;
            return 1;
        }
    }
    return 0;
}

u8 *TLobby__sub_80208D28(s32 arg0, s32 arg1) {
    s32 temp_r30;
    u8 *temp_r3;
    if (arg0 > 0x11) {
        return NULL;
    }
    temp_r30 = arg0 * 4;
    if ((u32) M2C_FIELD(&lbl_805139F8.value, M2C_UNK *, temp_r30) != 0U) {
        return NULL;
    }
    temp_r3 = (u8 *)(heap_alloc__5THeapFUl(lbl_805D6094, arg1));
    if (temp_r3 != NULL) {
        M2C_FIELD(&lbl_805139F8.value, M2C_UNK *, temp_r30) = (long) (temp_r3);
        return temp_r3;
    }
    return NULL;
}

}
