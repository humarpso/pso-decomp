#include "types.h"

#include "stdarg.h"
typedef void (*RecoveredCallback_c88e8900640a)(s32, u8 *);

#include "pso/system/GcciRequests.h"
#include "pso/misc/TLobby.h"

extern "C" {
extern s32 dvd_synchronous_read_enabled;
void set_dvd_synchronous_read_mode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
int vsprintf(char *s, const char *fmt, va_list ap);
extern u8 log_printf_buffer[];
extern RecoveredCallback_c88e8900640a log_printf_callback;
extern s32 lobby_log_callback_arg;
void DCInvalidateRange(void *, u32);
s32 DVDGetTransferredSize(void *);
s32 DVDGetCommandBlockStatus(void *);
extern GcciStatus dvd_active_request;
extern GcciRequest dvd_request_table[40];

void TLobby::poll_dvd_requests() {
    GcciRequest *r;
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
void set_dvd_synchronous_read_mode(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    dvd_synchronous_read_enabled = arg3;
}
#pragma pop

void TLobby::log_printf(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vsprintf((char *)log_printf_buffer, fmt, ap);
    if (log_printf_callback != 0) {
        log_printf_callback(lobby_log_callback_arg, log_printf_buffer);
    }
}

GcciStatus dvd_active_request;
GcciRequest dvd_request_table[40];
char dvd_default_path_buffer[0x100] ATTRIBUTE_ALIGN(8);
u8 log_printf_buffer[0x100];
}
