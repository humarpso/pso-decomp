#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "stdarg.h"
typedef void (*RecoveredCallback_c88e8900640a)(s32, u8 *);
struct P_803D0DEC { void (*fn)(s32, u8 *); s32 arg; };

struct Req_803D0C34 {
    u8 active;
    u8 pad1;
    u8 state;
    u8 pad3[5];
    void *buf;
    s32 status;
    s32 unit;
    u8 pad14[8];
    s32 pos;
    s32 done;
    s32 count;
    u8 block[0x3C];
};

struct Stat_803D0C34 {
    s32 status;
    s8 state;
    u8 pad5[7];
};

extern "C" {
extern s32 lbl_805D4690;
void TLobby__sub_803D0DE4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
int vsprintf(char *s, const char *fmt, va_list ap);
extern u8 log_printf_buffer[];
extern RecoveredCallback_c88e8900640a log_printf_callback;
extern s32 lobby_log_callback_arg;
void log_printf__6TLobbyFPvi(const char *fmt, ...);
void DCInvalidateRange(void *, u32);
s32 DVDGetTransferredSize(void *);
s32 DVDGetCommandBlockStatus(void *);
extern Stat_803D0C34 dvd_active_request;
extern Req_803D0C34 dvd_request_table[40];
void poll_dvd_requests__6TLobbyFv(void);
}

extern "C" {

void poll_dvd_requests__6TLobbyFv(void) {
    Req_803D0C34 *r;
    s32 i;
    s32 n;
    s8 st;
    for (i = 0; i < 40; i++) {
        r = &dvd_request_table[i];
        if ((s32)r->active == 1 && (s32)r->state == 2) {
            r->status = DVDGetCommandBlockStatus(r->block);
            dvd_active_request.status = r->status;
            switch (r->status) {
            case -1:
            case 11:
                r->state = 3;
                dvd_active_request.state = 3;
                break;
            case 0:
                n = r->count * r->unit;
                DCInvalidateRange(r->buf, n);
                r->done = n;
                r->pos += r->count;
                r->state = dvd_active_request.state = 1;
                break;
            case 10:
                n = DVDGetTransferredSize(r->block);
                DCInvalidateRange(r->buf, n);
                r->done = r->unit * (n / r->unit);
                r->pos += n / r->unit;
                r->state = dvd_active_request.state = 0;
                break;
            }
        }
    }
}

#pragma push
#pragma scheduling off
void TLobby__sub_803D0DE4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    lbl_805D4690 = arg3;
}
#pragma pop

void log_printf__6TLobbyFPvi(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vsprintf((char *)log_printf_buffer, fmt, ap);
    if (log_printf_callback != 0) {
        log_printf_callback(lobby_log_callback_arg, log_printf_buffer);
    }
}

}
