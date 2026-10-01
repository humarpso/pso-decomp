#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803C5850_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803C588C_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct Hdr_803C46A4 { u16 type; s16 len; };

typedef void (*RecoveredCallback_e2efd47cbcab)(s32, char *);

typedef s32 M2C_UNK;

struct Fmt_803C46DC { s16 a; s16 b; s16 c; s16 d; s32 e; s32 f; s32 g; s32 h; };

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 lbl_80572020;
extern s32 lbl_805D7528;
extern s32 lbl_805D752C;
void TLobby__sub_803C5850(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 lbl_80572020;
extern s32 lbl_805D7528;
extern s32 lbl_805D752C;
void TLobby__sub_803C588C(void);
extern RecoveredGlobal_803C5850_lbl_80572020 lbl_80572020;
extern s32 lbl_805D7528;
extern s32 lbl_805D752C;
char *strncpy(char *dst, const char *src, u32 n);
void TQuestVmDownLoadServer__sub_8039DC24(char *buf, s32 arg, s32 n);
void TLobby__sub_803D38B4(const char *fmt, ...);
void TLobby__sub_803C5744(const char *msg, s32 arg);
s32 TLobby__sub_803C46A4(Hdr_803C46A4 *p, s32 size, s16 *out);
s32 TLobby__sub_803C4A00(s16 *arg0, s32 arg1, s16 *arg2);
char *strncpy(char *dst, const char *src, u32 n);
void TLobby__sub_803D38B4(const char *fmt, ...);
extern RecoveredGlobal_803C5850_lbl_80572020 lbl_80572020;
extern s32 lbl_805D7528;
extern s32 lbl_805D752C;
void TLobby__sub_803C57C8(const char *arg0);
s32 TLobby__sub_803C47F8(u8 *arg0, s32 arg1, u16 *arg2, u16 *arg3);
s32 ARStartDMA(u8 *arg0, s32 arg1, s16 *arg2, u8 *arg3, s8 *arg4, s8 *arg5, u8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9);
void TLobby__sub_803C0B08(void);
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
void TLobby__sub_803C4698(void);
void TLobby__sub_803C588C(void);
void TLobby__sub_803C90B0(void);
void flush_update__6TLobbyFv(void *, int);
void TLobby__sub_803CC114(void);
void TLobby__sub_803CC1D0(void);
void TLobby__sub_803D1CC0(void);
void TLobby__sub_803D25DC(void);
void TLobby__sub_803D2E44(void);
void TLobby__sub_803D2ED4(void);
void TLobby__sub_803D3540(int, int, void *, int);
s32 TLobby__sub_803D3750(int, void *, int);
M2C_UNK memset(void *, int, int);
void ar_alloc__6TLobbyFv(void);
void get_state_zero__6TLobbyFv(void);
void process_connection_state__6TLobbyFv(void);
void TLobby__sub_803C5B2C(void);
extern u8 lbl_80572120[];
extern s32 lbl_805D4658;
extern s32 lbl_805D7538;
extern s32 lbl_805D753C;
extern s32 lbl_805D7540;
extern const s32 lbl_805E0D30;
void TLobby__sub_803C59B8(void);
s32 __DVDPrepareResetAsync(u8 *hdr, s32 size, s32 *o1, s16 *o2, s16 *o3, s32 *o4, s32 *o5, s32 *o6, s32 *o7);
}

extern "C" {

void ARAlloc(void);
void TLobby__sub_803C4698(void);
void dec_ref_and_shutdown__6TLobbyFv(void);
void dispatch_receive_update__6TLobbyFv(void);
void set_global_805D7520__6TLobbyFi(s32 arg0);
void set_params__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK TLobby__sub_803C0AD8();
M2C_UNK TLobby__sub_803C4C78();
M2C_UNK TLobby__sub_803C4F14();
M2C_UNK TLobby__sub_803C8610();
M2C_UNK TLobby__sub_803CC134();
M2C_UNK TLobby__sub_803CC884();
M2C_UNK TLobby__sub_803CEF60();
M2C_UNK TLobby__sub_803D1C24();
M2C_UNK TLobby__sub_803D259C();
M2C_UNK TLobby__sub_803D2E04();
M2C_UNK TLobby__sub_803D2E94();
M2C_UNK TLobby__sub_803D3194();
M2C_UNK TLobby__sub_803D33F4();
M2C_UNK TLobby__sub_803D3678(int, void *);
M2C_UNK init_once__6TLobbyFv();
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK shutdown_cleanup__6TLobbyFv();
M2C_UNK si_get_type_async__6TLobbyFv();

extern s32 lbl_805D7518;

void TLobby__sub_803C4698(void) {
    lbl_805D7518 = 0;
}

extern s32 lbl_805D7520;

s32 TLobby__sub_803C46A4(Hdr_803C46A4 *p, s32 size, s16 *out) {
    if (size < 0x10) {
        return -1;
    }
    if (p->type != 0x8001) {
        return -2;
    }
    *out = p->len + 4;
    return 0;
}

s32 __DVDPrepareResetAsync(u8 *hdr, s32 size, s32 *o1, s16 *o2, s16 *o3, s32 *o4, s32 *o5, s32 *o6, s32 *o7) {
    s32 err;
    u8 ver;
    s32 hsz;
    s32 off;
    Fmt_803C46DC *f;
    *o2 = err = 0;
    if (size < 0x14) {
        err = -1;
    } else if (*(u16 *)hdr != 0x8000) {
        err = -2;
    } else if (*(s16 *)(hdr + 2) < 0x10) {
        err = -1;
    } else {
        ver = hdr[0x12];
    }
    if (err != 0) {
        return err;
    }
    hsz = 0x30;
    if (ver == 4) {
        hsz = 0x3C;
    }
    if (size < hsz) {
        return -1;
    }
    if (*(u16 *)hdr != 0x8000) {
        return -2;
    }
    if (*(s16 *)(hdr + 2) < hsz - 4) {
        return -1;
    }
    off = 0x14;
    if (ver == 4) {
        off = 0x20;
    }
    *o1 = *(s16 *)(hdr + off);
    f = (Fmt_803C46DC *)(off + (s32)hdr);
    *o2 = f->b;
    if (*o2 != 1) {
        return -2;
    }
    *o3 = f->d;
    *o4 = f->e;
    *o5 = f->f;
    *o6 = f->g;
    *o7 = f->h;
    return 0;
}

s32 TLobby__sub_803C47F8(u8 *arg0, s32 arg1, u16 *arg2, u16 *arg3) {
    s32 var_r0;
    u8 var_r7;
    if (arg1 < 0x14) {
        var_r0 = -1;
    } else if ((u16) M2C_FIELD(arg0, u16 *, 0) != 0x8000) {
        var_r0 = -2;
    } else if ((s16) M2C_FIELD(arg0, s16 *, 2) < 0x10) {
        var_r0 = -1;
    } else {
        var_r7 = M2C_FIELD(arg0, u8 *, 0x12);
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return -1;
    }
    if (var_r7 >= 4U) {
        if (arg1 < 0x20) {
            return -1;
        }
        if ((u16) M2C_FIELD(arg0, u16 *, 0) != 0x8000) {
            return -2;
        }
        if ((s16) M2C_FIELD(arg0, s16 *, 2) < 0x1C) {
            return -1;
        }
        arg2[0] = (u16) M2C_FIELD(arg0, u16 *, 0x18);
        arg3[0] = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
        arg2[1] = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
        arg3[1] = (u16) M2C_FIELD(arg0, u16 *, 0x1E);
    } else {
        arg2[0] = arg3[0] = arg2[1] = arg3[1] = 0;
    }
    return 0;
}

s32 ARStartDMA(u8 *arg0, s32 arg1, s16 *arg2, u8 *arg3, s8 *arg4, s8 *arg5, u8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9) {
    if (arg1 < 0x10) {
        return -1;
    }
    if ((u16)((arg0[0] << 8) | arg0[1]) != 0x8000) {
        return -2;
    }
    *arg2 = ((arg0[2] << 8) | arg0[3]) + 4;
    *arg3 = arg0[4];
    *arg5 = arg0[5];
    *arg4 = arg0[6];
    *arg6 = arg0[7];
    *arg7 = (arg0[8] << 24) | (arg0[9] << 16) | (arg0[10] << 8) | arg0[11];
    *arg8 = (arg0[12] << 24) | (arg0[13] << 16) | (arg0[14] << 8) | arg0[15];
    if (*arg4 == 0) {
        *arg9 = 0;
    } else {
        *arg9 = ((*arg5 - 2) * 8) / *arg4;
    }
    return 0;
}

s32 TLobby__sub_803C4A00(s16 *arg0, s32 arg1, s16 *arg2) {
    s16 *p = arg0;
    s32 i;
    s32 best = 0x7FFFFFFF;
    for (i = 0; i < arg1 - 1; i += 2, p++) {
        if (*p == -0x8000) {
            best = (i < 0x7FFFFFFF) ? i : 0x7FFFFFFF;
            break;
        }
    }
    if (best != 0x7FFFFFFF) {
        *arg2 = best;
        return 0;
    }
    *arg2 = 0;
    return -1;
}

void set_global_805D7520__6TLobbyFi(s32 arg0) {
    lbl_805D7520 = arg0;
}

extern s32 lbl_805D7520;

void dispatch_receive_update__6TLobbyFv(void) {
    if ((s32) lbl_805D7520 == 0) {
        TLobby__sub_803C4F14();
        return;
    }
    TLobby__sub_803C4C78();
}

extern s32 lbl_805D7528;
extern s32 lbl_805D752C;

typedef void (*Callback_803C5744)(s32 ctx, char *msg);
void TLobby__sub_803C5744(const char *msg, s32 arg) {
    strncpy(((char *)&lbl_80572020), msg, 0xFF);
    TQuestVmDownLoadServer__sub_8039DC24(((char *)&lbl_80572020), arg, 0xFF);
    if ((*(Callback_803C5744 *)&lbl_805D7528) != 0) {
        (*(Callback_803C5744 *)&lbl_805D7528)(lbl_805D752C, ((char *)&lbl_80572020));
    }
    TLobby__sub_803D38B4(((char *)&lbl_80572020));
}

void TLobby__sub_803C57C8(const char *arg0) {
    strncpy(((char *)&lbl_80572020), arg0, 0xFF);
    if ((*(RecoveredCallback_e2efd47cbcab *)&lbl_805D7528) != NULL) {
        (*(RecoveredCallback_e2efd47cbcab *)&lbl_805D7528)(lbl_805D752C, ((char *)&lbl_80572020));
    }
    TLobby__sub_803D38B4(((char *)&lbl_80572020));
}

void set_params__6TLobbyFii(s32 arg0, s32 arg1) {
    lbl_805D7528 = arg0;
    lbl_805D752C = arg1;
    TLobby__sub_803D33F4();
}

extern s32 lbl_805D7530;

typedef char RecoveredGlobal_803C5850_lbl_80572020_size[sizeof(RecoveredGlobal_803C5850_lbl_80572020) == 0x100 ? 1 : -1];
void TLobby__sub_803C5850(void) {
    memset((void *) (&lbl_80572020.value), (int) (0), (int) (0x100));
    lbl_805D7528 = 0;
    lbl_805D752C = 0;
}

typedef char RecoveredGlobal_803C588C_lbl_80572020_size[sizeof(RecoveredGlobal_803C588C_lbl_80572020) == 0x100 ? 1 : -1];
void TLobby__sub_803C588C(void) {
    memset((void *) (&(*(RecoveredGlobal_803C588C_lbl_80572020 *)&lbl_80572020).value), (int) (0), (int) (0x100));
    lbl_805D7528 = 0;
    lbl_805D752C = 0;
}

void ARAlloc(void) {
    if ((s32) lbl_805D7530 == 0) {
        init_once__6TLobbyFv();
        lbl_805D7530 = 1;
        TLobby__sub_803C8610();
        lbl_805D7530 = 2;
        TLobby__sub_803CEF60();
        lbl_805D7530 = 5;
        TLobby__sub_803C8610();
        lbl_805D7530 = 6;
        TLobby__sub_803CC884();
        lbl_805D7530 = 0;
        release_ref__6TLobbyFv();
    }
}

extern s32 lbl_805D7538;
extern s32 lbl_805D753C;

void dec_ref_and_shutdown__6TLobbyFv(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D7538 - 1;
    lbl_805D7538 = temp_r0;
    if (temp_r0 == 0) {
        shutdown_cleanup__6TLobbyFv();
        TLobby__sub_803CC134();
        si_get_type_async__6TLobbyFv();
        TLobby__sub_803D1C24();
        init_once__6TLobbyFv();
        TLobby__sub_803D3678((int) (2), (void *) (1));
        TLobby__sub_803D3678((int) (2), (void *) (3));
        TLobby__sub_803D3678((int) (4), (void *) (lbl_805D753C));
        TLobby__sub_803D3194();
        release_ref__6TLobbyFv();
        init_once__6TLobbyFv();
        TLobby__sub_803C0AD8();
        TLobby__sub_803C5850();
        TLobby__sub_803D259C();
        TLobby__sub_803D2E04();
        TLobby__sub_803D2E94();
        release_ref__6TLobbyFv();
    }
}
void TLobby__sub_803C59B8(void) {
    s32 v = lbl_805E0D30;
    if (lbl_805D7538 == 0) {
        ((void (*)(s32))TLobby__sub_803C4698)(v);
        init_once__6TLobbyFv();
        TLobby__sub_803D2ED4();
        TLobby__sub_803D2E44();
        TLobby__sub_803D25DC();
        TLobby__sub_803C588C();
        TLobby__sub_803C90B0();
        TLobby__sub_803C0B08();
        TLobby__sub_803CC1D0();
        TLobby__sub_803CC114();
        flush_update__6TLobbyFv((void *)TLobby__sub_803C5B2C, 0);
        memset(lbl_80572120, 0, 0xA80);
        TLobby__sub_803D1CC0();
        if (lbl_805D4658 == 1) {
            TLobby__sub_803D3540(2, 1, (void *)get_state_zero__6TLobbyFv, 0);
            TLobby__sub_803D3540(2, 3, (void *)ar_alloc__6TLobbyFv, 0);
            lbl_805D753C = TLobby__sub_803D3750(4, (void *)process_connection_state__6TLobbyFv, 0);
        }
        lbl_805D7540 = 0;
        release_ref__6TLobbyFv();
    }
    lbl_805D7538 += 1;
}

}
