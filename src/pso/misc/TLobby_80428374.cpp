#include "pso/protocol/NetworkRuntime.h"
#include "pso/network/NetworkTransport.h"
#include "pso/misc/TLobby_80428374.h"
#include "pso/network/ModemRuntime.h"
#include "pso/network/NetworkMessageTransport.h"

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TUdpSocket.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_80428374_lbl_805D0A40 {
    s32 value;
    u8 remaining[0x5C];
};

struct RecoveredGlobal_8042839C_lbl_805D0A40 {
    s32 value;
    u8 remaining[0x5C];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct RecoveredGlobal_8042E768_lbl_805D1D20 {
    s32 value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_80427D0C_lbl_805CFC20 {
    s32 value;
    u8 remaining[0xE1C];
};

struct RecoveredGlobal_80428360_lbl_805CFC20 {
    s16 value;
    u8 remaining[0xE1E];
};

struct RecoveredGlobal_8042DD70_lbl_805D1D20 {
    s32 value;
    u8 remaining[0x18];
};

typedef struct Names_8042E57C {
    char *name[6];
} Names_8042E57C;

typedef struct Names_8042E628 {
    char *name[4];
} Names_8042E628;

typedef struct Names_8042E6C4 {
    char *name[5];
} Names_8042E6C4;

typedef struct Names_8042E7B8 {
    char *name[3];
} Names_8042E7B8;

typedef struct Ent_80426894 {
    s16 count;
    u8 id[6];
} Ent_80426894;

typedef struct Tbl_80426894 {
    u8 pad[6];
    Ent_80426894 ent[6];
} Tbl_80426894;

typedef struct Ent_80425870 {
    s32 used;
    u32 f4;
    u32 base;
} Ent_80425870;

typedef struct Ent_80427C6C {
    u16 pad0;
    u16 id;
    u8 rest[0xE10];
} Ent_80427C6C;

extern u8 lbl_805CF240[0xA0];
extern u8 TLobby__pppoe_message_queue[0xA0];
extern u8 lbl_805CF380[0x48];
extern "C" {
s32 TLobby__sub_803F77E0(void *);
extern RecoveredGlobal_80428374_lbl_805D0A40 lobby_net_session_state;
extern u32 lobby_buffer_pool_alarm_handle;
s16 TLobby__sub_803F96AC(void *, void *, void *);
extern s32 lobby_buffer_pool_base;
extern s32 lobby_buffer_pool_size;
extern s32 lbl_805D7BEC;
extern s32 lbl_805D7BF0;
extern s32 lbl_805D7BF4;
extern s32 lobby_buffer_pool_end;
extern s32 lbl_805D7BFC;
extern u8 lbl_805CF380[];
extern u8 TLobby__pppoe_message_queue[];
typedef struct Ent_804267F0 {
    s16 count;
    u8 id[6];
} Ent_804267F0;

typedef struct Tbl_804267F0 {
    u8 pad[6];
    Ent_804267F0 ent[6];
} Tbl_804267F0;

extern u8 lbl_805CF240[];
s32 TLobby__sub_803F97E8(int);
extern void *lbl_805C18A0[];
extern s16 lbl_805D7A86;
s32 TLobby__sub_80428EC0(u8 *src, u8 *dst, u8 **next);
s16 TLobby__sub_804293B0(u8 *buf, s16 len);
s16 TLobby__sub_804036FC(u16 *avail);
s16 TLobby__sub_80403730(u8 *dst, u16 n);
extern u32 lbl_805D7BD0;
extern u32 lbl_805D7BD4;

#pragma push
#pragma opt_propagation off
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma pop

#define arg0 ((s32)argp)
#undef arg0

#pragma push
#pragma dont_inline on
#pragma pop

typedef char RecoveredGlobal_80427D0C_lbl_805CFC20_size[sizeof(RecoveredGlobal_80427D0C_lbl_805CFC20) == 0xE20 ? 1 : -1];

extern u32 lbl_805D7C04;
extern s32 lbl_805D7C08;
extern s32 lbl_805D7C0C;
extern u32 lbl_805D7C10;
extern u32 lbl_805D7C14;
extern u32 TLobby__buffer_pool_start;
extern s32 TLobby__buffer_pool_limit;
extern s32 lbl_805D7C20;
extern s32 lbl_805D7C24;
extern s32 lobby_buffer_pool_state;

typedef char RecoveredGlobal_80428374_lbl_805D0A40_size[sizeof(RecoveredGlobal_80428374_lbl_805D0A40) == 0x60 ? 1 : -1];

typedef char RecoveredGlobal_80428360_lbl_805CFC20_size[sizeof(RecoveredGlobal_80428360_lbl_805CFC20) == 0xE20 ? 1 : -1];

void TLobby::reset_boot_state() {
    TLobby__sub_803F77E0(&lobby_net_session_state.value);
}
}

typedef char RecoveredGlobal_8042839C_lbl_805D0A40_size[sizeof(RecoveredGlobal_8042839C_lbl_805D0A40) == 0x60 ? 1 : -1];
s32 init_modem_session_config(void) {
    init_modem_buffer_config((void *) (&(*(RecoveredGlobal_8042839C_lbl_805D0A40 *)&lobby_net_session_state).value));
    return 0;
}

s32 TLobby::wait_timeout_loop() {
    u8 *arg0 = (u8 *)this;
    s32 start;
    s32 now;
    s16 *p;
    u32 limit;
    s32 ret;
    ret = 0;
    TLobby::get_time_ms(&start);
    p = **(s16 ***)((s8 *)&lobby_net_session_state.value + 0x10);
    if (p == NULL) {
        limit = *(s16 *)(arg0 + 4) * 1000;
    } else {
        limit = *p * 1000;
    }
    for (;;) {
        if (lbl_805D7A86 != 0) {
            ret = 4;
            break;
        }
        TLobby::get_time_ms(&now);
        if ((u32)(now - start) > limit) {
            break;
        }
        TUdpSocket::unlock_mutex((int)lbl_805C18A0[0]);
        TLobby__sub_803F97E8(100);
        TLobby::lock_mutex((int)lbl_805C18A0[0]);
    }
    return ret;
}

s32 TLobby__sub_80428EC0(u8 *src, u8 *dst, u8 **next) {
    s16 n;
    u8 *p;
    u8 c;
    s32 escape;
    s32 hex;
    s32 value;

    p = src;
    n = 0;
    while (*p++ == 32) {
        n++;
    }
    src += n;
    if (*src == 0) {
        return 0;
    }
    if (*src == 34) {
        escape = 0;
        hex = 0;
        value = 0;
        src++;
        while ((c = *src++) != 0 && c != 10) {
            if (hex != 0) {
                if (c >= 48 && c <= 57) {
                    value = value * 16 + (c - '0');
                    if (--hex == 0) {
                        *dst++ = c;
                    }
                } else if (c >= 97 && c <= 102) {
                    value = value * 16 + (c - '0' + 10);
                    if (--hex == 0) {
                        *dst++ = c;
                    }
                } else {
                    hex = 0;
                }
            } else if (escape != 0) {
                if (c == 114) {
                    *dst++ = '\r';
                } else if (c == 110) {
                    *dst++ = '\n';
                } else if (c == 92) {
                    *dst++ = '\\';
                } else if (c == 34) {
                    *dst++ = '"';
                } else if (c == 120) {
                    hex = 2;
                    value = 0;
                }
                escape = 0;
            } else if (c == 92) {
                escape = 1;
            } else if (c == 34) {
                src++;
                break;
            } else {
                *dst++ = c;
            }
        }
    } else {
        while ((c = *src++) != 0 && c != 10) {
            if (c == 32 || c == 44 || c == 34) {
                break;
            }
            *dst++ = c;
        }
    }
    n = 0;
    *dst = 0;
    src--;
    p = src;
    while (*p++ == 32) {
        n++;
    }
    src += n;
    if (*src == 44) {
        src++;
    }
    *next = src;
    return 1;
}

s16 TLobby__sub_804293B0(u8 *buf, s16 len) {
    u16 avail;
    s32 now;
    s32 start;
    s32 n;
    s32 remaining;

    remaining = len;
    while (remaining > 0) {
        TLobby__sub_804036FC(&avail);
        if ((n = avail) != 0U) {
            if (remaining < n) {
                n = remaining;
            }
            if (TLobby__sub_80403730(buf, n) == 0) {
                buf += n;
                remaining -= n;
                continue;
            }
        }
        TLobby::get_time_ms(&now);
        if (lbl_805D7A86 != 0 || lbl_805D7BD4 == 0) {
            lbl_805D7BD4 = 0;
            return -1;
        }
        if (lbl_805D7BD4 != 0xFFFFFFFF && (u32)(now - lbl_805D7BD0) > lbl_805D7BD4) {
            lbl_805D7BD4 = 0;
            return -1;
        }
        TUdpSocket::unlock_mutex((int)lbl_805C18A0[0]);
        TLobby__sub_803F97E8(100);
        TLobby::lock_mutex((int)lbl_805C18A0[0]);
    }
    return 0;
}

void TLobby::cancel_alarm_b() {
    NetReleaseMutex(lobby_buffer_pool_alarm_handle);
}

s32 TLobby::init_buffer_pool() {
    lbl_805D7BEC = lobby_buffer_pool_base;
    lbl_805D7BF0 = lobby_buffer_pool_base;
    lbl_805D7BF4 = lobby_buffer_pool_base;
    lobby_buffer_pool_end = lobby_buffer_pool_base + lobby_buffer_pool_size;
    lbl_805D7BFC = lobby_buffer_pool_size;
    if (TLobby__sub_803F96AC(&lobby_buffer_pool_alarm_handle, (void *)lobby_buffer_pool_base, (void *)lobby_buffer_pool_size) < 0) {
        return -1;
    }
    TLobby::reset_buffer_pool();
    return 0;
}

void TLobby::reset_buffer_pool() {
    lbl_805D7C0C = 0;
    lbl_805D7C24 = 0;
    lobby_buffer_pool_state = 0;
    if ((u32) lbl_805D7C04 != 0U) {
        lbl_805D7C10 = lbl_805D7C04;
        lbl_805D7C14 = lbl_805D7C04;
        TLobby__buffer_pool_start = lbl_805D7C04;
        TLobby__buffer_pool_limit = lbl_805D7C04 + lbl_805D7C08;
        lbl_805D7C20 = lbl_805D7C08;
        return;
    }
    lbl_805D7C10 = 0U;
    lbl_805D7C14 = 0U;
    TLobby__buffer_pool_start = 0U;
    TLobby__buffer_pool_limit = 0;
    lbl_805D7C20 = 0;
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8042DD70_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042DD70_lbl_805D1D20) == 0x1C ? 1 : -1];
#pragma pop

typedef char RecoveredGlobal_8042E768_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042E768_lbl_805D1D20) == 0x1C ? 1 : -1];
