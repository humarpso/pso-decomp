#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct L_8013FF20 { u8 pad0[0x1012]; s16 a[0x1000]; u8 pad1[0x5016 - 0x3012]; s16 b[0x1101]; };

#define NIL_8013FCB0 0x1000
struct Lz_8013FCB0 {
    u8 pad[0x1012];
    s16 dad[0x1001];
    s16 lson[0x1001];
    s16 rson[0x1101];
};

struct Lz_8013FDC4 {
    u8 text_buf[0x1012];
    s16 dad[0x1001];
    s16 lson[0x1001];
    s16 rson[0x1101];
    s32 match_position;
    s32 match_length;
};

struct Lz_8013F99C {
    u8 text_buf[0x1012];
    s16 dad[0x1001];
    s16 lson[0x1001];
    s16 rson[0x1101];
    u32 match_position;
    s32 match_length;
    u8 *in;
    u8 *out;
    u8 *in_end;
    s32 codesize;
};

extern "C" {
void TLobby__sub_8013FDC4(Lz_8013FDC4 *lz, s32 r);
void TLobby__sub_8013FF64(u8 *arg0, s8 arg1);
u8 TLobby__sub_8013FF94(u8 *arg0);
u8 TLobby__sub_8013FF78(u8 *arg0);
void init_lookup_tables__6TLobbyFPv(L_8013FF20 *arg0);
void TLobby__sub_8013FCB0(Lz_8013FCB0 *t, s32 p);
void debug_print__FPCc(const char *);
void TLobby__sub_8013FCB0(Lz_8013FCB0 *t, s32 p);
void TLobby__sub_8013FDC4(Lz_8013FDC4 *lz, s32 r);
void init_lookup_tables__6TLobbyFPv(L_8013FF20 *arg0);
void TLobby__sub_8013FF64(u8 *arg0, s8 arg1);
u8 TLobby__sub_8013FF78(u8 *arg0);
u8 TLobby__sub_8013FF94(u8 *arg0);
void set_range__6TLobbyFPviii(void *, int, int, int);
void bswap_32__FPUl(u32 *);
int sprintf(char *, const char *, ...);
s32 TLobby__sub_803DF1CC(void);
s32 calc_delta__6TLobbyFii(s32, s32);
s32 fn_803DF204(s32);
extern char lbl_8043F168[];
s32 TLobby__sub_8013F99C(Lz_8013F99C *lz, void *src, s32 size, s32 *hdr);
}

extern "C" {

void update_floor__6TLobbyFv(void);
int clear_session_buffers__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);

#pragma push
#pragma opt_propagation off
#define EOF_8013F99C(c) (((s32 (*)(u8 *))TLobby__sub_8013FF78)(c))
#define PUT_8013F99C(c, v) (((void (*)(u8 *, s32))TLobby__sub_8013FF64)(c, v))
#define GET_8013F99C(c) (((s32 (*)(u8 *))TLobby__sub_8013FF94)(c))
s32 TLobby__sub_8013F99C(Lz_8013F99C *lz, void *src, s32 size, s32 *hdr) {
    u8 code_buf[17];
    char msg[256];
    s32 t0;
    s32 *out;
    s32 len;
    s32 code_buf_ptr;
    u8 mask;
    s32 s;
    s32 r;
    s32 c;
    s32 m;
    s32 i;
    s32 t1;
    out = hdr;
    t0 = TLobby__sub_803DF1CC();
    set_range__6TLobbyFPviii(lz, (int)src, size, (s32)(hdr + 2));
    init_lookup_tables__6TLobbyFPv((L_8013FF20 *)lz);
    code_buf[0] = 0;
    mask = code_buf_ptr = 1;
    lz->codesize = 0;
    s = 0;
    r = 0xFEE;
    for (i = 0; i < 0xFEE; i++) {
        lz->text_buf[i] = 0;
    }
    for (len = 0; len < 0x12; len++) {
        c = GET_8013F99C((u8 *)lz);
        if (EOF_8013F99C((u8 *)lz) != 0) {
            break;
        }
        lz->text_buf[0xFEE + len] = c;
    }
    if (len == 0) {
        return lz->codesize;
    }
    for (i = 1; i <= 0x12; i++) {
        TLobby__sub_8013FDC4((Lz_8013FDC4 *)lz, r - i);
    }
    TLobby__sub_8013FDC4((Lz_8013FDC4 *)lz, r);
    do {
        if (lz->match_length > len) {
            lz->match_length = len;
        }
        if (lz->match_length < 3) {
            lz->match_length = 1;
            code_buf[0] |= mask;
            code_buf[code_buf_ptr++] = lz->text_buf[r];
        } else {
            code_buf[code_buf_ptr++] = lz->match_position;
            code_buf[code_buf_ptr++] = ((lz->match_position >> 4) & 0xF0) | (lz->match_length - 3);
        }
        if ((mask <<= 1) == 0) {
            for (i = 0; i < code_buf_ptr; i++) {
                PUT_8013F99C((u8 *)lz, code_buf[i]);
            }
            lz->codesize += code_buf_ptr;
            code_buf[0] = 0;
            code_buf_ptr = mask = 1;
        }
        i = lz->match_length;
        for (m = 0; m < i; m++) {
            c = GET_8013F99C((u8 *)lz);
            if (EOF_8013F99C((u8 *)lz) != 0) {
                break;
            }
            TLobby__sub_8013FCB0((Lz_8013FCB0 *)lz, s);
            lz->text_buf[s] = c;
            if (s < 0x11) {
                lz->text_buf[s + 0x1000] = c;
            }
            s = (s + 1) & 0xFFF;
            r = (r + 1) & 0xFFF;
            TLobby__sub_8013FDC4((Lz_8013FDC4 *)lz, r);
        }
        while (m++ < i) {
            TLobby__sub_8013FCB0((Lz_8013FCB0 *)lz, s);
            s = (s + 1) & 0xFFF;
            r = (r + 1) & 0xFFF;
            if (--len) {
                TLobby__sub_8013FDC4((Lz_8013FDC4 *)lz, r);
            }
        }
    } while (len > 0);
    if (code_buf_ptr > 1) {
        s32 k;
        for (k = 0; k < code_buf_ptr; k++) {
            PUT_8013F99C((u8 *)lz, code_buf[k]);
        }
        lz->codesize += code_buf_ptr;
    }
    out[0] = size;
    out[1] = lz->codesize;
    bswap_32__FPUl((u32 *)out);
    bswap_32__FPUl((u32 *)(out + 1));
    lz->codesize += 8;
    t1 = TLobby__sub_803DF1CC();
    sprintf(msg, lbl_8043F168, size, lz->codesize, fn_803DF204(calc_delta__6TLobbyFii(t0, t1)));
    debug_print__FPCc(msg);
    return lz->codesize;
}
#pragma pop

void TLobby__sub_8013FCB0(Lz_8013FCB0 *t, s32 p) {
    s32 q;
    if (t->dad[p] == NIL_8013FCB0) {
        return;
    }
    if (t->rson[p] == NIL_8013FCB0) {
        q = t->lson[p];
    } else if (t->lson[p] == NIL_8013FCB0) {
        q = t->rson[p];
    } else {
        q = t->lson[p];
        if (t->rson[q] != NIL_8013FCB0) {
            do {
                q = t->rson[q];
            } while (t->rson[q] != NIL_8013FCB0);
            t->rson[t->dad[q]] = t->lson[q];
            t->dad[t->lson[q]] = t->dad[q];
            t->lson[q] = t->lson[p];
            t->dad[t->lson[p]] = q;
        }
        t->rson[q] = t->rson[p];
        t->dad[t->rson[p]] = q;
    }
    t->dad[q] = t->dad[p];
    if (t->rson[t->dad[p]] == p) {
        t->rson[t->dad[p]] = q;
    } else {
        t->lson[t->dad[p]] = q;
    }
    t->dad[p] = NIL_8013FCB0;
}

void TLobby__sub_8013FDC4(Lz_8013FDC4 *lz, s32 r) {
    u8 *key;
    s32 i;
    s32 p;
    s32 cmp;

    cmp = 1;
    key = &lz->text_buf[r];
    p = 0x1001 + key[0];
    lz->rson[r] = lz->lson[r] = 0x1000;
    lz->match_length = 0;
    for (;;) {
        if (cmp >= 0) {
            if (lz->rson[p] != 0x1000) {
                p = lz->rson[p];
            } else {
                lz->rson[p] = r;
                lz->dad[r] = p;
                return;
            }
        } else {
            if (lz->lson[p] != 0x1000) {
                p = lz->lson[p];
            } else {
                lz->lson[p] = r;
                lz->dad[r] = p;
                return;
            }
        }
        for (i = 1; i < 0x12; i++) {
            if ((cmp = key[i] - lz->text_buf[p + i]) != 0) {
                break;
            }
        }
        if (i > lz->match_length) {
            lz->match_position = p;
            if ((lz->match_length = i) >= 0x12) {
                break;
            }
        }
    }
    lz->dad[r] = lz->dad[p];
    lz->lson[r] = lz->lson[p];
    lz->rson[r] = lz->rson[p];
    lz->dad[lz->lson[p]] = r;
    lz->dad[lz->rson[p]] = r;
    if (lz->rson[lz->dad[p]] == p) {
        lz->rson[lz->dad[p]] = r;
    } else {
        lz->lson[lz->dad[p]] = r;
    }
    lz->dad[p] = 0x1000;
}

void init_lookup_tables__6TLobbyFPv(L_8013FF20 *arg0) {
    s32 i;
    for (i = 0x1001; i < 0x1101; i++) {
        arg0->b[i] = 0x1000;
    }
    for (i = 0; i < 0x1000; i++) {
        arg0->a[i] = 0x1000;
    }
}

void TLobby__sub_8013FF64(u8 *arg0, s8 arg1) {
    s8 *temp_r5;
    temp_r5 = M2C_FIELD(arg0, s8 **, 0x7224);
    M2C_FIELD(arg0, s8 **, 0x7224) = (s8 *) (temp_r5 + 1);
    *temp_r5 = arg1;
}

u8 TLobby__sub_8013FF78(u8 *arg0) {
    return (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x7220) > (u32) M2C_FIELD(arg0, u32 *, 0x7228));
}

u8 TLobby__sub_8013FF94(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, u8 **, 0x7220);
    M2C_FIELD(arg0, u8 **, 0x7220) = (u8 *) (temp_r4 + 1);
    return *temp_r4;
}

}
