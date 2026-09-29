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

}
