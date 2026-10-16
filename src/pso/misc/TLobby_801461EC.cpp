#include "types.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_80146CB8_lbl_8050CCE8 {
    s32 value;
    u8 remaining[0x128];
};

struct RecoveredGlobal_8014672C_lbl_8050C0A8 {
    s32 value;
    u8 remaining[0x6D8];
};

struct RecoveredGlobal_80146588_lbl_8050CCE8 {
    s32 value;
    u8 remaining[0x128];
};

struct RecoveredGlobal_80146D14_lbl_8050CCE8 {
    s32 value;
    u8 remaining[0x128];
};

struct RecoveredGlobal_80146CA0_lbl_8050C784 {
    s32 value;
    u8 remaining[0x560];
};

struct RecoveredGlobal_80146D44_lbl_8050CE14 {
    s32 value;
    u8 remaining[0x150];
};

struct RecoveredGlobal_80146D50_lbl_8050C784 {
    s32 value;
    u8 remaining[0x560];
};

extern "C" {
void flush_pending_flags__6TLobbyFv(void);
s32 TLobby__sub_803FAFDC();
s32 TLobby__sub_803FB184(void *);
s32 TLobby__sub_803FB1A4(void *);
s32 TLobby__sub_80407358();
s32 TLobby__sub_8041509C();
s32 TLobby__sub_80423064(void *, int);
s32 TLobby__sub_80424CA8();
s32 TLobby__sub_80424CF4(void *, void *, int);
void TLobby__sub_801469B8(void* p);
    extern int lbl_805D5708;
void call_146CA0_with_5708__6TLobbyFv(void);
void* TLobby__sub_80146D68(int a0);
void TLobby__sub_8014715C(void* p, void* q);
s32 TLobby__sub_8040A3C0();
extern s32 lbl_805D570C;
void teardown_boss2__6TLobbyFv(void);
s32 TLobby__sub_8014618C(void);
void strncpy(s32, s32, s32);
s32 memset(int, int, int);
void set_ppp_password__6TLobbyFi(s32 arg0);
void TLobby__sub_8014672C(s32 *arg0);
extern s32 lbl_805D56D8;
extern s32 lobby_dns_server_addr;
extern s32 lbl_805D56E0;
extern s32 lobby_connect_battle_flag;
s32 TLobby__sub_80146588(s32 *arg0);
s32 TLobby__sub_8014618C(void);
u8 *TLobby__sub_80146D14(void);
u8 *TLobby__sub_80146CA0(s32 arg0);
s32 *TLobby__sub_80146D44(void);
u8 *TLobby__sub_80146D50(s32 arg0);
s32 TLobby__sub_801466F4(u32 arg0);
s32 TLobby__sub_80145EE4(void);
s32 poll_connect__6TLobbyFv(void);
void set_battle_flag__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80146314(s32 *);
s32 TLobby__sub_80146588(s32 *arg0);
s32 TLobby__sub_801465C0(s32 *);
s32 set_dns_servers__6TLobbyFv(void);
void fn_80147A68(void);
void TLobby__sub_804073B8(void);
s16 run_connect_step__6TLobbyFv(void);
s16 TLobby__sub_804150EC(void);
s16 TLobby__sub_8042315C(s16, void *);
extern s32 lbl_805D2D00;
extern s32 lbl_805D56D8;
extern s32 lobby_connect_battle_flag;
extern s32 TLobby__connect_pending_flags;
extern s32 lobby_connect_active_flag;
s32 run_connect_sequence__6TLobbyFv(void);
}

struct Sub_801465C0 {
    u8 pad0[0x1C];
    char name[0x124 - 0x1C];
};

struct Acct_80146D7C {
    char host[0x80];
    char user[0x20];
    char pass[0x20];
    char dns1[0x20];
    char dns2[0x20];
    char f100[0x40];
    char f140[0x40];
    char f180[0x40];
    u32 f1C0;
    u32 f1C4;
    s32 valid;
};
struct Work_80146D7C {
    s32 f0;
    char host[0x80];
    char user[0x20];
    char pass[0x40];
    char dns1[0x40];
    char dns2[0x40];
    u32 f164;
    u32 f168;
    char f16C[0x20];
    char f18C[0x40];
    char f1CC[0x40];
    u8 pad[0x274 - 0x20C];
};
struct Conn_80146D7C {
    s32 f0;
    s32 f4, f8, fC, f10, f14, f18;
    char f1C[0x20];
    char f3C[0x40];
    char f7C[0x80];
    char fFC[0x20];
    u16 f11C;
    s32 f120;
};
struct Info_80146D7C {
    s32 f0;
    s32 f4;
    char f8[0x80];
    char f88[0x20];
    s32 fA8, fAC, fB0, fB4, fB8, fBC;
    s32 fC0;
    char fC4[0x40];
    char f104[0x140];
    u16 f244;
    u8 pad[0x26C - 0x246];
};

extern "C" {
void fn_80147A60(int a0);
s16 TLobby__sub_8042455C(void *);
s16 TLobby__sub_8042474C(void *, void *, void *);
s16 TLobby__sub_8042489C(void *, void *);
s16 validate_slot_buffers__6TLobbyFlPvPvPv(void *, void *, void *, void *);
s16 TLobby__sub_80424D58(s16, s32, s32, void *, void *, s32 *, void *, s32);
s16 TLobby__sub_80424E44(s16);
extern s32 lbl_805D56E8;
extern s32 lbl_805D56EC;
extern s32 lbl_805D56F0;
extern s32 lbl_805D56F4;
s32 TLobby__sub_80145E40(void);
s32 init_struct(void *);
s32 init_work(int, void *);
void load_network_configs__6TLobbyFv(void);
}

extern "C" {

int TLobby__sub_80146724(void);
int TLobby__sub_80146740(void);
int TLobby__sub_8014677C(void);
void cleanup__6TLobbyFv(void* _w0);
void flush_pending_flag2__6TLobbyFv(void);
int get_link_status_value__6TLobbyFv(void);
void init_keyboard_buffer__6TLobbyFv(void);
s32 poll_connect__6TLobbyFv(void);
s32 query_task_active__6TLobbyFv(void);
void set_battle_flag__6TLobbyFi(s32 arg0);
int TLobby__sub_80145A94(void);
int TLobby__sub_80145DB4(void*);
s32 TLobby__sub_80147284();
int get_network_config_buffer_size(void*);
s32 TLobby__sub_804219D0(s32, s32, s32);
s32 TLobby__sub_80421A50(s32, s32, s32);
s8 func_801A5E54__Fv();
s32 send_and_handle__6TLobbyFv();
void xfree__FPv(void*);
int xmalloc__FUl(void);

    extern int lbl_805D56C8;
    extern short lbl_805D56CE;
    extern int keyboard_buffer_cursor;
u32 lbl_8050C0A8[7];
u32 lbl_8050C0C4[368];
u32 lbl_8050C684[64];
u32 lbl_8050C784[345];
u32 lbl_8050CCE8[73];
__declspec(section ".data") s32 lbl_8050CE0C[2];
char lbl_8050CE14[0x20];
char lbl_8050CE34[0x20];
u8 lbl_8050CE54[0x114];
extern s32 lbl_805D5714;
#define lbl_8050C0A8 (*(RecoveredGlobal_8014672C_lbl_8050C0A8 *)lbl_8050C0A8)
#define lbl_8050C784 (*(unsigned char (*)[0x564])lbl_8050C784)
#define lbl_8050CCE8 (*(RecoveredGlobal_80146CB8_lbl_8050CCE8 *)lbl_8050CCE8)
#define lbl_8050CE14 (*(RecoveredGlobal_80146D44_lbl_8050CE14 *)lbl_8050CE14)

void init_keyboard_buffer__6TLobbyFv(void) { keyboard_buffer_cursor = 0; lbl_805D56CE = 0; lbl_805D56C8 = 0; get_network_config_buffer_size((void*)0); lbl_805D56C8 = xmalloc__FUl(); TLobby__sub_80145A94(); }

s32 poll_connect__6TLobbyFv(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if (var_r31 > 0x12C) {
        return 0;
    }
    var_r31 += 1;
    send_and_handle__6TLobbyFv();
    if (func_801A5E54__Fv() != 0) {
        return 1;
    }
    if (TLobby::query_link_status() == 1) {
        return 2;
    }
    goto loop_1;
}

extern s32 TLobby__connect_pending_flags;
extern s32 TLobby__battle_flag;

void flush_pending_flag2__6TLobbyFv(void) {
    if (TLobby__connect_pending_flags & 2) {
        TLobby__sub_804219D0(0, 0, TLobby__battle_flag);
        TLobby__connect_pending_flags &= 0xFFFFFFFD;
    }
}

extern s32 TLobby__connect_pending_flags;
extern s32 TLobby__battle_flag;

void set_battle_flag__6TLobbyFi(s32 arg0) {
    TLobby__battle_flag = arg0;
    TLobby__connect_pending_flags |= 2;
    TLobby__sub_80421A50(0, 0, arg0);
}

typedef char RecoveredGlobal_80146588_lbl_8050CCE8_size[sizeof(RecoveredGlobal_80146588_lbl_8050CCE8) == 0x12C ? 1 : -1];
s32 TLobby__sub_80146588(s32 *arg0) {
    lbl_805D56D8 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value) + 4);
    *(s32 *)((s8 *)arg0 + 0) = *(s32 *)((s8 *)(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value) + 8);
    lobby_connect_battle_flag = *(s32 *)((s8 *)(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value) + 0x18);
    lobby_dns_server_addr = *(s32 *)((s8 *)(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value) + 0x10);
    lbl_805D56E0 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value) + 0x14);
    return 0;
}

s32 TLobby__sub_801465C0(s32 *arg0) {
    s32 sp8;

    if (TLobby__sub_80424E44((s16)lbl_805D2D00) != 0) {
        return 0xC;
    }
    Sub_801465C0 *sub = (Sub_801465C0 *)&lbl_8050CCE8;
    TLobby__connect_pending_flags |= 0x10;
    lobby_connect_active_flag = 1;
    char *name = sub->name;
    if (*name != 0 && TLobby__sub_8042455C(name) < 0) {
        return 0xC;
    }
    lbl_805D56D8 = 0;
    lbl_805D56E8 = 0;
    if (TLobby__sub_80424D58((s16)lbl_805D2D00, 0, 0, lbl_8050C0C4, &lbl_805D56D8, arg0, &sp8, 3) != 0) {
        return 0xC;
    }
    if (TLobby__sub_8042489C(lbl_8050C0C4, &lobby_connect_battle_flag) != 0) {
        return 0xC;
    }
    if (TLobby__sub_8042474C(&lbl_805D56EC, &lbl_805D56F0, &lbl_805D56F4) != 0) {
        return 0xC;
    }
    fn_80147A60(lbl_805D56EC);
    return validate_slot_buffers__6TLobbyFlPvPvPv(lbl_8050C0C4, lbl_8050C684, &lobby_dns_server_addr, &lbl_805D56E0) != 0 ? 0xC : 0;
}

s32 TLobby__sub_801466F4(u32 arg0) {
    switch (arg0) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 8:
    case 11:
    case 16:
    case 17:
        return 0;
    default:
        return 1;
    }
}

int TLobby__sub_80146724(void) { return 3; }

typedef char RecoveredGlobal_8014672C_lbl_8050C0A8_size[sizeof(RecoveredGlobal_8014672C_lbl_8050C0A8) == 0x6DC ? 1 : -1];
void TLobby__sub_8014672C(s32 *arg0) {
    *(s32 *)((s8 *)arg0 + 0) = *(s32 *)((s8 *)(&lbl_8050C0A8.value) + 4);
}

int TLobby__sub_80146740(void) { return 0; }

extern s32 lobby_connect_active_flag;

s32 query_task_active__6TLobbyFv(void) {
    if ((s32) lobby_connect_active_flag != 0) {
        return TLobby::get_task_count();
    }
    return 0;
}

int TLobby__sub_8014677C(void) { return TLobby__sub_80145DB4((void*)(1)); }
int get_link_status_value__6TLobbyFv(void) { return TLobby__sub_80145DB4((void*)(4)); }

extern s32 TLobby__connect_pending_flags;
extern u32 lbl_805D5700;
extern s32 TLobby__net_session_mode;

void cleanup__6TLobbyFv(void* _w0) {
    if ((s32) TLobby__net_session_mode != 0) {
        TLobby__sub_801469B8((void*)(_w0));
    } else {
        TLobby__sub_80147284();
    }
    if (TLobby__connect_pending_flags & 8) {
        TLobby::cleanup_subsystems();
        TLobby__connect_pending_flags &= 0xFFFFFFF7;
    }
    if ((u32) lbl_805D5700 != 0U) {
        xfree__FPv((void*)lbl_805D5700);
        lbl_805D5700 = 0U;
    }
}
void TLobby__sub_801469B8(void* p) { flush_pending_flags__6TLobbyFv(); }
void flush_pending_flags__6TLobbyFv(void) {
    struct { u8 pad0[4]; s16 f4; u8 pad6[0x3E]; } spC;
    s16 sp8;

    TLobby__connect_pending_flags &= 0xFFFFFFFE;
    teardown_boss2__6TLobbyFv();
    if (TLobby__sub_80145EE4() != 0) {
        if (TLobby__connect_pending_flags & 0x10) {
            TLobby__sub_80424CF4((void *) ((s16) lbl_805D2D00), (void *) (lbl_805D56D8), (int) (3));
            TLobby__connect_pending_flags &= 0xFFFFFFEF;
            TLobby__sub_80424CA8();
        }
    } else if (TLobby::is_state_active() != 0) {
        if ((s32) lbl_805D2D00 != -1) {
            TLobby__sub_80423064((void *) ((s16) lbl_805D2D00), (int) (0));
            sp8 = 0;
            TLobby__sub_803FB1A4((void *) (&sp8));
            do {
                TLobby__sub_803FB184((void *) (&spC));
                send_and_handle__6TLobbyFv();
            } while (spC.f4 != 0);
        }
        if (TLobby__connect_pending_flags & 4) {
            TLobby__sub_803FAFDC();
            TLobby__connect_pending_flags &= 0xFFFFFFFB;
        }
    }
    lbl_805D2D00 = -1;
    if (TLobby__connect_pending_flags & 0x20) {
        TLobby__sub_8041509C();
        TLobby__connect_pending_flags &= 0xFFFFFFDF;
    }
    if (TLobby__connect_pending_flags & 0x40) {
        TLobby::flush_flags_step();
        TLobby__connect_pending_flags &= 0xFFFFFFBF;
    }
    if (TLobby__connect_pending_flags & 0x80) {
        TLobby__sub_80407358();
        TLobby__connect_pending_flags &= 0xFFFFFF7F;
    }
}

s32 run_connect_sequence__6TLobbyFv(void) {
    s32 sp8;
    s32 id;
    s32 r;
    s16 ok;
    TLobby__connect_pending_flags &= ~1;
    fn_80147A68();
    if (*(s32 *)((u8 *)&lbl_8050CCE8 + 0x120) != 0) {
        TLobby__sub_804073B8();
        TLobby__connect_pending_flags |= 0x80;
        id = run_connect_step__6TLobbyFv();
        TLobby__connect_pending_flags |= 0x40;
        r = poll_connect__6TLobbyFv();
        if (r == 0) {
            return 0xF;
        }
        if (r == 1) {
            return 0x11;
        }
        TLobby__connect_pending_flags |= 1;
        TLobby::set_connect_mode(4);
        ok = TLobby__sub_804150EC();
        TLobby__connect_pending_flags |= 0x20;
        lobby_connect_active_flag = 0;
        if (ok != 0) {
            return 0xE;
        }
        if (TLobby__sub_80145EE4() != 0) {
            lbl_805D2D00 = id;
            r = TLobby__sub_801465C0(&sp8);
        } else if (TLobby::is_state_active() != 0) {
            r = TLobby__sub_80146314(&sp8);
        } else {
            lbl_805D2D00 = id;
            r = TLobby__sub_80146588(&sp8);
        }
        if (r == 0) {
            s32 *m = (s32 *)&lbl_8050C0A8;
            m[0] = 4;
            m[1] = lbl_805D56D8;
            m[2] = sp8;
            m[3] = 0;
            if (TLobby__sub_8042315C((s16)lbl_805D2D00, &lbl_8050C0A8) == 0) {
                set_battle_flag__6TLobbyFi(lobby_connect_battle_flag);
            } else {
                return 0xD;
            }
            return set_dns_servers__6TLobbyFv();
        }
        return r;
    }
    return 0xE;
}

void call_146CA0_with_5708__6TLobbyFv(void) { TLobby__sub_80146CA0((s32)((void*)(lbl_805D5708))); }

typedef char RecoveredGlobal_80146CB8_lbl_8050CCE8_size[sizeof(RecoveredGlobal_80146CB8_lbl_8050CCE8) == 0x12C ? 1 : -1];

typedef char RecoveredGlobal_80146CA0_lbl_8050C784_size[sizeof(RecoveredGlobal_80146CA0_lbl_8050C784) == 0x564 ? 1 : -1];
u8 *TLobby__sub_80146CA0(s32 arg0) {
    return (u8 *)&(*(RecoveredGlobal_80146CA0_lbl_8050C784 *)&lbl_8050C784).value + (arg0 << 5) + 0x438;
}

void set_ppp_password__6TLobbyFi(s32 arg0) {
    u8 *temp_r31;
    TLobby__sub_8014618C();
    TLobby::is_state_active();
    temp_r31 = (u8 *)&lbl_8050CCE8.value + 0xFC;
    memset((int) (temp_r31), (int) (0), (int) (0x20));
    strncpy((s32) temp_r31, arg0, 0x1F);
}

typedef char RecoveredGlobal_80146D14_lbl_8050CCE8_size[sizeof(RecoveredGlobal_80146D14_lbl_8050CCE8) == 0x12C ? 1 : -1];
u8 *TLobby__sub_80146D14(void) {
    TLobby__sub_8014618C();
    TLobby::is_state_active();
    return (u8 *)&(*(RecoveredGlobal_80146D14_lbl_8050CCE8 *)&lbl_8050CCE8).value + 0xFC;
}

typedef char RecoveredGlobal_80146D44_lbl_8050CE14_size[sizeof(RecoveredGlobal_80146D44_lbl_8050CE14) == 0x154 ? 1 : -1];
s32 *TLobby__sub_80146D44(void) {
    return &lbl_8050CE14.value;
}

typedef char RecoveredGlobal_80146D50_lbl_8050C784_size[sizeof(RecoveredGlobal_80146D50_lbl_8050C784) == 0x564 ? 1 : -1];
u8 *TLobby__sub_80146D50(s32 arg0) {
    return (u8 *)&(*(RecoveredGlobal_80146D50_lbl_8050C784 *)&lbl_8050C784).value + (arg0 * 0x1CC) + 0x80;
}

void* TLobby__sub_80146D68(int a0) {  return (char*)lbl_8050C784 + a0 * 460; }
#define A_80146D7C (*(Acct_80146D7C (*)[3])lbl_8050C784)
#define C_80146D7C (*(Conn_80146D7C *)&lbl_8050CCE8)
#define S_80146D7C ((char *(*)(char *, const char *, u32))strncpy)
void load_network_configs__6TLobbyFv(void) {
    Work_80146D7C w;
    Info_80146D7C info;

    if (TLobby__sub_80145E40() == 1) {
        lbl_8050CE0C[1] = 1;
    } else {
        lbl_8050CE0C[1] = 0;
    }
    if (init_work(1, &w) == 0) {
        S_80146D7C(A_80146D7C[0].host, w.host, 0x7F);
        S_80146D7C(A_80146D7C[0].user, w.user, 0x1F);
        S_80146D7C(A_80146D7C[0].pass, w.pass, 0x1F);
        S_80146D7C(A_80146D7C[0].dns1, w.dns1, 0x1F);
        S_80146D7C(A_80146D7C[0].dns2, w.dns2, 0x1F);
        S_80146D7C(A_80146D7C[0].f100, w.f16C, 0x3F);
        S_80146D7C(A_80146D7C[0].f140, w.f18C, 0x3F);
        S_80146D7C(A_80146D7C[0].f180, w.f1CC, 0x3F);
        TLobby__sub_8014715C(&A_80146D7C[0].f1C0, &w.f164);
        TLobby__sub_8014715C(&A_80146D7C[0].f1C4, &w.f168);
        A_80146D7C[0].valid = 1;
    } else {
        A_80146D7C[0].valid = 0;
    }
    if (init_work(2, &w) == 0) {
        S_80146D7C(A_80146D7C[1].host, w.host, 0x7F);
        S_80146D7C(A_80146D7C[1].user, w.user, 0x1F);
        S_80146D7C(A_80146D7C[1].pass, w.pass, 0x1F);
        S_80146D7C(A_80146D7C[1].dns1, w.dns1, 0x1F);
        S_80146D7C(A_80146D7C[1].dns2, w.dns2, 0x1F);
        S_80146D7C(A_80146D7C[1].f100, w.f16C, 0x3F);
        S_80146D7C(A_80146D7C[1].f140, w.f18C, 0x3F);
        S_80146D7C(A_80146D7C[1].f180, w.f1CC, 0x3F);
        TLobby__sub_8014715C(&A_80146D7C[1].f1C0, &w.f164);
        TLobby__sub_8014715C(&A_80146D7C[1].f1C4, &w.f168);
        A_80146D7C[1].valid = 1;
    } else {
        A_80146D7C[1].valid = 0;
    }
    if (init_work(0, &w) == 0) {
        S_80146D7C(A_80146D7C[2].host, w.host, 0x7F);
        S_80146D7C(A_80146D7C[2].user, w.user, 0x1F);
        S_80146D7C(A_80146D7C[2].pass, w.pass, 0x1F);
        S_80146D7C(A_80146D7C[2].dns1, w.dns1, 0x1F);
        S_80146D7C(A_80146D7C[2].dns2, w.dns2, 0x1F);
        S_80146D7C(A_80146D7C[2].f100, w.f16C, 0x3F);
        S_80146D7C(A_80146D7C[2].f140, w.f18C, 0x3F);
        S_80146D7C(A_80146D7C[2].f180, w.f1CC, 0x3F);
        TLobby__sub_8014715C(&A_80146D7C[2].f1C0, &w.f164);
        TLobby__sub_8014715C(&A_80146D7C[2].f1C4, &w.f168);
        A_80146D7C[2].valid = 1;
    } else {
        A_80146D7C[2].valid = 0;
    }
    C_80146D7C.f120 = 0;
    if (TLobby__net_session_mode == 1 && init_struct(&info) == 0) {
        C_80146D7C.f0 = info.f4;
        C_80146D7C.f4 = info.fA8;
        C_80146D7C.f8 = info.fAC;
        C_80146D7C.fC = info.fB0;
        C_80146D7C.f10 = info.fB4;
        C_80146D7C.f14 = info.fB8;
        C_80146D7C.f18 = info.fBC;
        S_80146D7C(C_80146D7C.f7C, info.f8, 0x7F);
        S_80146D7C(C_80146D7C.fFC, info.f88, 0x1F);
        S_80146D7C(C_80146D7C.f1C, info.fC4, 0x1F);
        S_80146D7C(C_80146D7C.f3C, info.f104, 0x3F);
        C_80146D7C.f11C = info.f244;
        C_80146D7C.f120 = 1;
    }
}
#undef A_80146D7C
#undef C_80146D7C
#undef S_80146D7C
void TLobby__sub_8014715C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
void teardown_boss2__6TLobbyFv(void) {
    if ((s32) lbl_805D570C != 0) {
        TLobby::clear_all_used_records();
        TLobby__sub_8040A3C0();
        lbl_805D570C = 0;
    }
}

}
#undef lbl_8050C0A8
#undef lbl_8050C784
#undef lbl_8050CCE8
#undef lbl_8050CE14

#include "types.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_80147A74_lbl_804EF500 {
    s32 value;
    u8 remaining[0x94];
};

struct S_801472F8 { u8 pad0[4]; s16 a; s16 b; u8 rest[0x38]; };

struct Req_801471A0 { s32 type; u32 addr; u8 pad[0x18]; };

struct Cfg_801471A0 { u8 pad[0x558]; u32 dns1; u32 dns2; };

extern "C" {
extern RecoveredGlobal_80147A74_lbl_804EF500 ppp_password_buffer;
s32 *get_ppp_password_buffer(void);
void TLobby__sub_801472F8(s16 *arg0, s16 *arg1);
void OSReport(const char *, ...);
s16 init_net_tables__6TLobbyFv();
s16 TLobby__sub_8040ADE8(Req_801471A0 *);
extern char lbl_8043F3F0[];
extern char lbl_8043F404[];
extern s32 lbl_805D570C;
s32 set_dns_servers__6TLobbyFv(void);
}

extern "C" {

s32 TLobby__sub_80147284(void);
void TLobby__sub_80147978(void);
void fn_80147A60(int a0);
void fn_80147A68(void);
s32 TLobby__sub_803FAFDC();

#define lbl_8050C784 (*(Cfg_801471A0 *)lbl_8050C784)
#define TLobby__sub_803FB184 ((s16 (*)(void *))TLobby__sub_803FB184)
#define TLobby__sub_80423064 ((s32 (*)(s16, s32))TLobby__sub_80423064)
extern s32 lbl_805D2D00;
extern s32 TLobby__connect_pending_flags;

s32 set_dns_servers__6TLobbyFv(void) {
    Req_801471A0 req;
    s16 r1;
    s16 r2;
    if (init_net_tables__6TLobbyFv() == 0) {
        lbl_805D570C = 1;
        req.type = 4;
        req.addr = lobby_dns_server_addr;
        if (lbl_8050C784.dns1 != 0) {
            req.addr = lbl_8050C784.dns1;
        }
        r1 = TLobby__sub_8040ADE8(&req);
        req.addr = lbl_805D56E0;
        if (lbl_8050C784.dns2 != 0) {
            req.addr = lbl_8050C784.dns2;
        }
        r2 = TLobby__sub_8040ADE8(&req);
        OSReport(lbl_8043F3F0, r1);
        OSReport(lbl_8043F404, r2);
        if (r1 == 0 || r2 == 0) {
            return 0;
        }
        return 0xB;
    }
    return 0xB;
}

s32 TLobby__sub_80147284(void) {
    s16 sp8;

    if ((s32) lbl_805D2D00 != -1) {
        TLobby__sub_80423064((s16) lbl_805D2D00, 0);
        sp8 = 1;
        TLobby__sub_803FB1A4(&sp8);
    }
    flush_pending_flag2__6TLobbyFv();
    if (TLobby__connect_pending_flags & 4) {
        TLobby__sub_803FAFDC();
        TLobby__connect_pending_flags &= 0xFFFFFFFB;
    }
    teardown_boss2__6TLobbyFv();
    lbl_805D2D00 = -1;
    return 0;
}

void TLobby__sub_801472F8(s16 *arg0, s16 *arg1) {
    S_801472F8 s;
    if (TLobby__sub_803FB184(&s) < 0) {
        s.a = 0;
    }
    *arg0 = s.a;
    *arg1 = s.b;
}

void TLobby__sub_80147978(void) {  }
#undef lbl_8050C784
struct Acct_8014797C {
    char host[0x80];
    char user[0x20];
    char pass[0x20];
    char dns1[0x20];
    char dns2[0x20];
    char f100[0x40];
    char f140[0x40];
    char f180[0x40];
    u32 f1C0;
    u32 f1C4;
    s32 valid;
};
#define lbl_8050C784 (*(Acct_8014797C (*)[3])lbl_8050C784)
#define memset ((void *(*)(void *, s32, u32))memset)
#define strncpy ((char *(*)(char *, const char *, u32))strncpy)
void TLobby::init_account_entries() {
    memset(&lbl_8050C784[0], 0, sizeof(Acct_8014797C));
    memset(&lbl_8050C784[1], 0, sizeof(Acct_8014797C));
    memset(&lbl_8050C784[2], 0, sizeof(Acct_8014797C));
    lbl_8050C784[0].valid = 0;
    lbl_8050C784[1].valid = 0;
    lbl_8050C784[2].valid = 0;
    lbl_805D5714 = 0;
    TLobby__net_session_mode = 0;
    TLobby__connect_pending_flags = 0;
    if (TLobby__sub_8014618C() != 0) {
        TLobby__net_session_mode = 1;
    }
    load_network_configs__6TLobbyFv();
    memset(lbl_8050CE14, 0, 0x20);
    strncpy(lbl_8050CE14, lbl_8050C784[2].user, 0x1F);
    memset(lbl_8050CE34, 0, 0x20);
    strncpy(lbl_8050CE34, lbl_8050C784[0].user, 0x1F);
}
#undef lbl_8050C784
#undef memset
#undef strncpy

    extern int keyboard_buffer_cursor;
void fn_80147A60(int a0) { keyboard_buffer_cursor = a0; }

    extern int keyboard_buffer_cursor;
void fn_80147A68(void) { keyboard_buffer_cursor = 0; }
typedef char RecoveredGlobal_80147A74_lbl_804EF500_size[sizeof(RecoveredGlobal_80147A74_lbl_804EF500) == 0x98 ? 1 : -1];
s32 *get_ppp_password_buffer(void) {
    return &ppp_password_buffer.value;
}

}
#undef TLobby__sub_803FB184
#undef TLobby__sub_80423064
