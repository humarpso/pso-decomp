#include "types.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_804217E4_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80421814_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80421844_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

#include <stddef.h>
#include "pso/misc/TUdpSocket.h"
struct Stack_80421AD8 {
    s16 sp1C;
    s16 sp1E;
    s32 sp20;
    s32 sp24;
    s32 sp28;
};

struct RecoveredGlobal_804218AC_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_804219D0_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80421A50_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80422DE4_lbl_805C1C50 {
    s32 value;
    u8 remaining[0xF4];
};

struct G_80421B3C { s32 f0; };

struct G_8042298C { s32 f0; };

struct G_804228E8 { s32 f0; };

struct G_804229F8 { s32 f0; };

struct O_80421938 { u8 pad0[8]; s32 f8; s16 fC; };

struct Stack_80421938 { s16 flags; s16 len; s32 zero; u8 src[0x10]; u8 dst[0x10]; };

struct O_80421F10 { u8 pad0[8]; s32 f8; s16 fC; };

struct Stack_80421F10 { s16 flags; s16 len; s32 zero; u8 src[0x14]; u8 dst[0x14]; s16 port; };

struct S_804220A0 {
    u8 pad0[0x1FC]; s32 f1FC; u8 pad200[0xAC]; u8 flags; u8 count; s16 f2AE; u8 pad2B0[4]; u8 flags2; u8 pad2B5[0x544 - 0x2B5];
};

struct T_8042213C {
    u8 pad0[0xB]; u8 fB; u8 padC[0x2A4 - 0xC]; u8 f2A4; u8 pad2A5; s16 f2A6; u8 f2A8[0x544 - 0x2A8];
};

struct G_8042213C { s32 f0; };

struct IpAddr_80422B8C { u32 family; u8 a[0xC]; };

struct G_80422B8C { s32 f0; };

struct G_80422CFC { s32 f0; };

struct T_80422E30 {
    u8 pad0[0x2A4]; u8 fl1; u8 p1; s16 st1; s32 th1; u8 pad2AC[8]; u8 fl2; u8 p2; s16 st2; s32 th2; u8 pad2BC[0x544 - 0x2BC];
};

struct P_8042315C { s32 type; s32 a; s32 b; s32 c; s32 pad10; s16 n; s16 m; s32 d; };

struct T_80422368
{
  u8 pad0[0x200];
  s32 z;
  u8 padA[0x2A4 - 0x204];
  u8 fl;
  u8 pad1;
  s16 st;
  s32 th;
  u8 padE[0x544 - 0x2AC];
};

struct T_8042276C
{
  u8 pad0[0x1FC];
  s32 z;
  u8 padA[0x2B4 - 0x200];
  u8 fl;
  u8 pad1;
  s16 st;
  s32 th;
  u8 padE[0x544 - 0x2BC];
};

extern "C" {
s32 TLobby__sub_80409AA8(void);
s32 TLobby__sub_8040DD68(void);
s32 TLobby__sub_8040ED28(void);
s32 NetIPv6Shutdown(void);
s32 TLobby__sub_8041112C(void);
void NetIPv6ShutdownNeighborDiscovery(void);
s32 TLobby__sub_80418A7C(void);
void TLobby__sub_80419A00(void);
s32 TLobby__sub_80419A7C(void);
s32 TLobby__sub_8041A1D8(void);
extern RecoveredGlobal_804217E4_lbl_805C1C50 network_dispatch_state;
s32 TLobby__sub_804217E4(void);
s32 TLobby__sub_80421814(void);
s32 NetUnregisterTimer(void *);
s32 TLobby__sub_80421844(s32 arg0);
s32 TLobby__sub_80421FB8(void *, void *, void *);
s32 TLobby__sub_80421AD8(u8 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4);
s32 NetRegisterTimer(void *, int, void *);
s32 TLobby__sub_804218AC(s32 arg0, s32 arg1);
s32 TLobby__sub_8040F9CC(void *, void *, void *, int);
s32 TLobby__sub_804219D0(s32 arg0, s32 arg1, s32 arg2);
s32 TRKValidMemory32(void *, void *, void *, int, int, int);
s32 TLobby__sub_80421A50(s32 arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_8041E780();
s32 tcp_create__Fv(void);
s32 TUdpSocket__sub_80421178(s32);
s32 TLobby__sub_80421B3C(s32 a);
s32 mark_connection_closed__6TLobbyFs(s32);
s32 tcp_delete__Fs(s32 a);
u16 str_length__6TLobbyFl(void *);
void TLobby__sub_80425288(s32, s32, void *);
extern s32 lbl_805D7BA0;
s32 TLobby__sub_8042455C(void *a);
s32 get_tcp_stat__6TLobbyFsPsPsPlPl(int, void *, void *, void *, void *);
s16 validate_tcp_handle__6TLobbyFs(int);
s32 tcp_stat__FsPsPsPUlPUl(s32 a, s16 *b, s16 *c, u32 *d, u32 *e);
s16 tcp_get_socket_handle__6TLobbyFs(int);
s32 abort_tcp_connection__6TLobbyFs(int);
s32 tcp_abort__Fs(s32 a);
s32 NetMemcpy(void *, void *, int);
s32 TLobby__sub_80421938(O_80421938 *o, void *src, void *dst, void *cb, s32 flags);
s32 TLobby__sub_80421F10(O_80421F10 *o, void *src, void *dst, s16 port, void *cb, s32 flags);
extern S_804220A0 *tcp_protocol_state[];
s32 complete_request_callback__6TLobbyFv(s32 idx_, void (*cb)(s16, s16, s32), s16 arg2, s32 *arg3);
void OSReport(const char *, ...);
s16 reset_socket_table__6TLobbyFv();
s16 TLobby__sub_80409AD8();
s16 init_ipv4_interfaces__6TLobbyFv();
s16 TLobby__sub_8040ED70();
s16 NetIPv6Init();
s16 TUdpSocket__sub_8041118C();
s16 TLobby__sub_80415690();
s16 NetIPv6InitNeighborDiscovery();
s16 init_packet_fragment_pools__6TLobbyFv();
s16 TLobby__sub_80419A34(int);
s16 NetInitializeDispatcher();
s16 NetTCPInit();
s16 init_ucb_entries__6TLobbyFv();
extern char lbl_804800F0[];
extern u32 TLobby__network_stack_init_count;
extern u8 *lbl_805E1188;
s32 NetStoreCurrentThread(void *);
s32 NetSuspendCurrentThread();
s32 NetMemset(void *, int, int);
s16 TLobby__sub_8041DBD4(int, void *, s16, void *);
s16 tcp_receive__FsPFss_vsPUc(s32 a, void *cb, s32 len, void *buf);
s32 TLobby__sub_8041E2EC(int, void *, void *);
s32 tcp_connect_start__6TLobbyFsls(int, void *, u16);
s32 tcp_connect__FsP10at_ip_addrUsP12at_ip_option(s32 a, IpAddr_80422B8C *addr, u16 port, IpAddr_80422B8C *opt);
s32 TLobby__sub_8041E5E4(int, void *, u16);
s32 tcp_bind__FsP10at_ip_addrUs(s32 a, void *addr, u16 port);
s32 resume_thread__6TLobbyFv(s32);
void TLobby__sub_80422E30(s32 v, s32 cb_, s32 type, s16 code);
s16 TLobby__sub_8040F00C(s16, void *, int, void *);
s16 TLobby__sub_80412058(s16, void *, int, void *);
s16 TLobby__sub_80422F70(s16 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 OSDisableInterrupts();
s32 OSRestoreInterrupts(int);
s16 TLobby__sub_8040F1A0(s16);
s16 TLobby__sub_80412210(s16);
s16 TLobby__sub_80423064(s16 arg0, s32 arg1);
s32 TLobby__sub_8040F454(s32, s32, s32, s16);
s32 TLobby__sub_80412CA4(void *, s16, s16, s16, s32);
s32 TLobby__sub_8042315C(s16 arg0, P_8042315C *p);
extern u8 dhcp_hostname[];
extern u8 lbl_805D7B1C[6];
extern u32 lbl_805D7B4C;
extern u32 lbl_805D7B50;
extern u32 lbl_805D7B58;
extern u32 lbl_805D7B60;
extern volatile s32 lbl_805D4820;
extern u8 lbl_805D7B24[4];
extern s32 lbl_805D7B28;
s32 set_slot_state_and_resume__6TLobbyFv(s32 idx, void (*cb)(s16, s16), s16 arg2);
s32 set_thread_state_and_resume__6TLobbyFv(s32 idx, void (*cb)(s16, s16), s16 arg2);
s32 TLobby::cleanup_subsystems() {
    TLobby__sub_80419A7C();
    TLobby__sub_80409AA8();
    NetIPv6ShutdownNeighborDiscovery();
    TLobby__sub_8041112C();
    TLobby__sub_8040ED28();
    NetIPv6Shutdown();
    TLobby__sub_8040DD68();
    TLobby__sub_80418A7C();
    TLobby::reset_stack_module();
    TLobby__sub_8041A1D8();
    TLobby::shutdown_network_handle();
    TLobby::reset_net_value();
    TLobby__sub_80419A00();
    return 0;
}
typedef char RecoveredGlobal_804217E4_lbl_805C1C50_size[sizeof(RecoveredGlobal_804217E4_lbl_805C1C50) == 0xF8 ? 1 : -1];

s16 TLobby::init_network_stack() {
    s16 var_r31;
    u32 temp_r3;
    if ((s32) *lbl_805E1188 != 0xA) {
        return -1;
    }
    if ((u32) TLobby__network_stack_init_count == 0U) {
        OSReport(lbl_804800F0);
    }
    temp_r3 = TLobby__network_stack_init_count;
    TLobby__network_stack_init_count = temp_r3 + 1;
    var_r31 = TLobby__sub_80419A34((int) (temp_r3));
    if (var_r31 >= 0) {
        var_r31 = TLobby__sub_80415690();
        if (var_r31 >= 0) {
            var_r31 = reset_socket_table__6TLobbyFv();
            if (var_r31 >= 0) {
                var_r31 = NetTCPInit();
                if (var_r31 >= 0) {
                    var_r31 = init_ucb_entries__6TLobbyFv();
                    if (var_r31 >= 0) {
                        var_r31 = init_packet_fragment_pools__6TLobbyFv();
                        if (var_r31 >= 0) {
                            var_r31 = init_ipv4_interfaces__6TLobbyFv();
                            if (var_r31 >= 0) {
                                var_r31 = NetIPv6Init();
                                if (var_r31 >= 0) {
                                    var_r31 = TLobby__sub_8040ED70();
                                    if (var_r31 >= 0) {
                                        var_r31 = TUdpSocket__sub_8041118C();
                                        if (var_r31 >= 0) {
                                            var_r31 = NetIPv6InitNeighborDiscovery();
                                            if (var_r31 >= 0) {
                                                var_r31 = TLobby__sub_80409AD8();
                                                if (var_r31 >= 0) {
                                                    var_r31 = NetInitializeDispatcher();
                                                    if (var_r31 >= 0) {
                                                        return 0;
                                                    }
                                                    TLobby__sub_80409AA8();
                                                    goto block_19;
                                                }
block_19:
                                                NetIPv6ShutdownNeighborDiscovery();
                                                goto block_20;
                                            }
block_20:
                                            TLobby__sub_8041112C();
                                            goto block_21;
                                        }
block_21:
                                        TLobby__sub_8040ED28();
                                        goto block_22;
                                    }
block_22:
                                    NetIPv6Shutdown();
                                    goto block_23;
                                }
block_23:
                                TLobby__sub_8040DD68();
                                goto block_24;
                            }
block_24:
                            TLobby__sub_80418A7C();
                            goto block_25;
                        }
block_25:
                        TLobby::reset_stack_module();
                        goto block_26;
                    }
block_26:
                    TLobby__sub_8041A1D8();
                    goto block_27;
                }
block_27:
                TLobby::shutdown_network_handle();
                goto block_28;
            }
block_28:
            TLobby::reset_net_value();
            goto block_29;
        }
block_29:
        TLobby__sub_80419A00();
        goto block_30;
    }
block_30:
    return var_r31;
}

s32 TLobby__sub_804217E4(void) {
    TUdpSocket::unlock_mutex((int)((void *) (network_dispatch_state.value)));
    return 0;
}
typedef char RecoveredGlobal_80421814_lbl_805C1C50_size[sizeof(RecoveredGlobal_80421814_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_80421814(void) {
    TLobby::lock_mutex((int)((void *) ((*(RecoveredGlobal_80421814_lbl_805C1C50 *)&network_dispatch_state).value)));
    return 0;
}
typedef char RecoveredGlobal_80421844_lbl_805C1C50_size[sizeof(RecoveredGlobal_80421844_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_80421844(s32 arg0) {
    s32 temp_r31;
    if (arg0 == 0) {
        return -2;
    }
    TLobby::lock_mutex((int)((void *) ((*(RecoveredGlobal_80421844_lbl_805C1C50 *)&network_dispatch_state).value)));
    temp_r31 = NetUnregisterTimer((void *) (arg0));
    TUdpSocket::unlock_mutex((int)((void *) ((*(RecoveredGlobal_80421844_lbl_805C1C50 *)&network_dispatch_state).value)));
    return temp_r31;
}

typedef char RecoveredGlobal_804218AC_lbl_805C1C50_size[sizeof(RecoveredGlobal_804218AC_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_804218AC(s32 arg0, s32 arg1) {
    s32 temp_r31;
    if (arg0 == 0) {
        return -2;
    }
    if (arg1 <= 0) {
        return -2;
    }
    TLobby::lock_mutex((int)((void *) ((*(RecoveredGlobal_804218AC_lbl_805C1C50 *)&network_dispatch_state).value)));
    temp_r31 = NetRegisterTimer((void *) (arg1), (int) (0), (void *) (arg0));
    TUdpSocket::unlock_mutex((int)((void *) ((*(RecoveredGlobal_804218AC_lbl_805C1C50 *)&network_dispatch_state).value)));
    return temp_r31;
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_804219D0_lbl_805C1C50_size[sizeof(RecoveredGlobal_804219D0_lbl_805C1C50) == 0xF8 ? 1 : -1];

s32 TLobby__sub_80421938(O_80421938 *o, void *src, void *dst, void *cb, s32 flags) {
    Stack_80421938 s;
    s.flags = flags | 0xC00;
    s.len = o->f8 - o->fC;
    s.zero = 0;
    NetMemcpy(s.src, src, 0x10);
    NetMemcpy(s.dst, dst, 0x10);
    if (cb != NULL) {
        TLobby__sub_80421FB8(cb, &s, o);
    }
    return 0;
}

s32 TLobby__sub_804219D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;
    TLobby::lock_mutex((int)((void *) ((*(RecoveredGlobal_804219D0_lbl_805C1C50 *)&network_dispatch_state).value)));
    temp_r31 = TLobby__sub_8040F9CC((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (0));
    TUdpSocket::unlock_mutex((int)((void *) ((*(RecoveredGlobal_804219D0_lbl_805C1C50 *)&network_dispatch_state).value)));
    return temp_r31;
}
#pragma pop

typedef char RecoveredGlobal_80421A50_lbl_805C1C50_size[sizeof(RecoveredGlobal_80421A50_lbl_805C1C50) == 0xF8 ? 1 : -1];
s32 TLobby__sub_80421A50(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;
    TLobby::lock_mutex((int)((void *) ((*(RecoveredGlobal_80421A50_lbl_805C1C50 *)&network_dispatch_state).value)));
    temp_r31 = TRKValidMemory32((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (1), (int) (0U), (int) (0U));
    TUdpSocket::unlock_mutex((int)((void *) ((*(RecoveredGlobal_80421A50_lbl_805C1C50 *)&network_dispatch_state).value)));
    return temp_r31;
}

s32 TLobby__sub_80421AD8(u8 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    struct Fields_arg0 { u8 pad_0[8]; s32 field_8; s16 field_C; };
    typedef char sp1C_offset[(offsetof(Stack_80421AD8, sp1C) == 0x0) ? 1 : -1];
    typedef char sp1E_offset[(offsetof(Stack_80421AD8, sp1E) == 0x2) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80421AD8, sp20) == 0x4) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_80421AD8, sp24) == 0x8) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_80421AD8, sp28) == 0xC) ? 1 : -1];
    Stack_80421AD8 stack;
    stack.sp1C = arg4 | 0x800;
    stack.sp1E = ((Fields_arg0*)arg0)->field_8 - ((Fields_arg0*)arg0)->field_C;
    stack.sp20 = 0;
    stack.sp24 = arg1;
    stack.sp28 = arg2;
    if (arg3 != 0U) {
        TLobby__sub_80421FB8((void *) (arg3), (void *) (&stack.sp1C), (void *) (arg0));
    }
    return 0;
}
typedef char RecoveredGlobal_80422DE4_lbl_805C1C50_size[sizeof(RecoveredGlobal_80422DE4_lbl_805C1C50) == 0xF8 ? 1 : -1];

s32 TLobby__sub_80421B3C(s32 a) {
    s32 r;
    G_80421B3C *g;
    s32 m;
    if ((a & 0xC00) != 0x400) { return -4; }
    g = ((G_80421B3C *)&network_dispatch_state);
    m = a & 0xFFFFF3FF;
    TLobby::lock_mutex((int)((void *)g->f0));
    r = TUdpSocket__sub_80421178(m);
    TUdpSocket::unlock_mutex((int)((void *)g->f0));
    return r;
}

s32 TLobby__sub_80421F10(O_80421F10 *o, void *src, void *dst, s16 port, void *cb, s32 flags) {
    Stack_80421F10 s;
    s.flags = flags | 0x400;
    s.len = o->f8 - o->fC;
    s.zero = 0;
    NetMemcpy(s.src, src, 0x14);
    NetMemcpy(s.dst, dst, 0x14);
    s.port = port;
    if (cb != NULL) {
        TLobby__sub_80421FB8(cb, &s, o);
    }
    return 0;
}

s32 complete_request_callback__6TLobbyFv(s32 idx_, void (*cb)(s16, s16, s32), s16 arg2, s32 *arg3) {
    s16 idx = idx_;
    S_804220A0 *s = tcp_protocol_state[0];
    s += idx;
    if (cb != NULL && !(s->flags & 8)) {
        cb(arg2, idx, *arg3);
    } else if (!(s->flags2 & 4)) {
        s->f2AE = arg2;
        s->flags2 |= 4;
        s->f1FC = 0;
    }
    s->count--;
    return 0;
}

s16 tcp_receive__FsPFss_vsPUc(s32 a, void *cb, s32 len, void *buf) {
    u8 hdr[8];
    s16 r;
    G_8042213C *g;
    T_8042213C *s;
    if (a & 0xC00) {
        return -4;
    }
    g = (G_8042213C *)&network_dispatch_state;
    a = a & 0xFFFFF3FF;
    TLobby::lock_mutex((int)((void *)g->f0));
    if (validate_tcp_handle__6TLobbyFs(a) < 0) {
        TUdpSocket::unlock_mutex((int)((void *)g->f0));
        return -4;
    }
    if (tcp_get_socket_handle__6TLobbyFs(a) == 1) {
        TUdpSocket::unlock_mutex((int)((void *)g->f0));
        return -9;
    }
    s = (T_8042213C *)tcp_protocol_state[0];
    s += (s16)a;
    if (s->f2A4 & 3) {
        TUdpSocket::unlock_mutex((int)((void *)g->f0));
        return -9;
    }
    ((TLobby *)hdr)->init_packet_header((s32)buf);
    NetMemset(&s->f2A4, 0, 8);
    s->f2A4 |= 1;
    if (s->fB & 0x40) {
        s->f2A4 |= 8;
        r = TLobby__sub_8041DBD4(a, hdr, len, cb);
        s->f2A4 &= ~8;
    } else {
        r = TLobby__sub_8041DBD4(a, hdr, len, cb);
    }
    if (r < 0) {
        s->f2A4 &= ~1;
        TUdpSocket::unlock_mutex((int)((void *)network_dispatch_state.value));
        return r;
    }
    if (cb != NULL && (!(s->fB & 0x40) || !(s->f2A4 & 4))) {
        TUdpSocket::unlock_mutex((int)((void *)network_dispatch_state.value));
        return -1;
    }
    if (s->f2A4 & 4) {
        r = s->f2A6;
        TUdpSocket::unlock_mutex((int)((void *)network_dispatch_state.value));
        return r;
    }
    NetStoreCurrentThread(s->f2A8);
    s->f2A4 |= 2;
    TUdpSocket::unlock_mutex((int)((void *)network_dispatch_state.value));
    NetSuspendCurrentThread();
    TLobby::lock_mutex((int)((void *)network_dispatch_state.value));
    s->f2A4 &= ~2;
    r = s->f2A6;
    s->f2A4 &= ~1;
    TUdpSocket::unlock_mutex((int)((void *)network_dispatch_state.value));
    return r;
}

typedef struct S_804220A0 S_804220A0;
typedef struct T_80422368 T_80422368;
s32 set_slot_state_and_resume__6TLobbyFv(s32 idx, void (*cb)(s16, s16), s16 arg2) {
  T_80422368 *s = (T_80422368 *) tcp_protocol_state[0];
  s16 new_var;
  s += (s16) idx;
  if ((cb != 0) && (!(s->fl & 8)))
  {
    new_var = (s16) idx;
    cb(arg2, new_var);
    s->st = arg2;
    s->fl &= ~1;
    s->fl |= 4;
    s->z = 0;
  }
  else
    if ((s->fl & 1) && (!(s->fl & 4)))
  {
    if (s->fl & 2)
    {
      resume_thread__6TLobbyFv(s->th);
    }
    s->st = arg2;
    s->fl &= ~1;
    s->fl |= 4;
    s->z = 0;
  }
  return 0;
}

typedef struct T_8042276C T_8042276C;
s32 set_thread_state_and_resume__6TLobbyFv(s32 idx, void (*cb)(s16, s16), s16 arg2) {
  T_8042276C *s = (T_8042276C *) tcp_protocol_state[0];
  s16 new_var;
  s += (s16) idx;
  if ((cb != 0) && (!(s->fl & 8)))
  {
    new_var = (s16) idx;
    cb(arg2, new_var);
    s->st = arg2;
    s->fl &= ~1;
    s->fl |= 4;
    s->z = 0;
  }
  else
    if ((s->fl & 1) && (!(s->fl & 4)))
  {
    if (s->fl & 2)
    {
      resume_thread__6TLobbyFv(s->th);
    }
    s->st = arg2;
    s->fl &= ~1;
    s->fl |= 4;
    s->z = 0;
  }
  return 0;
}

s32 tcp_stat__FsPsPsPUlPUl(s32 a, s16 *b, s16 *c, u32 *d, u32 *e) {
    s32 r;
    G_804228E8 *g;
    if (a & 0xC00) { return -4; }
    g = ((G_804228E8 *)&network_dispatch_state);
    a = a & 0xFFFFF3FF;
    TLobby::lock_mutex((int)((void *)g->f0));
    if (validate_tcp_handle__6TLobbyFs(a) < 0) {
        TUdpSocket::unlock_mutex((int)((void *)g->f0));
        return -4;
    }
    r = get_tcp_stat__6TLobbyFsPsPsPlPl(a, b, c, d, e);
    TUdpSocket::unlock_mutex((int)((void *)g->f0));
    return r;
}

s32 tcp_delete__Fs(s32 a) {
    s32 r;
    G_8042298C *g;
    s32 m;
    if (a & 0xC00) { return -4; }
    g = ((G_8042298C *)&network_dispatch_state);
    m = a & 0xFFFFF3FF;
    TLobby::lock_mutex((int)((void *)g->f0));
    r = mark_connection_closed__6TLobbyFs(m);
    TUdpSocket::unlock_mutex((int)((void *)g->f0));
    return r;
}

s32 tcp_abort__Fs(s32 a) {
    s32 r;
    G_804229F8 *g;
    s32 m;
    s16 st;
    if (a & 0xC00) { return -4; }
    g = ((G_804229F8 *)&network_dispatch_state);
    m = a & 0xFFFFF3FF;
    TLobby::lock_mutex((int)((void *)g->f0));
    if (validate_tcp_handle__6TLobbyFs(m) < 0) {
        TUdpSocket::unlock_mutex((int)((void *)g->f0));
        return -4;
    }
    st = tcp_get_socket_handle__6TLobbyFs(m);
    if (st == -1 || st == 1) {
        TUdpSocket::unlock_mutex((int)((void *)network_dispatch_state.value));
        return -9;
    }
    r = abort_tcp_connection__6TLobbyFs(m);
    TUdpSocket::unlock_mutex((int)((void *)g->f0));
    return r;
}

s32 tcp_connect__FsP10at_ip_addrUsP12at_ip_option(s32 a, IpAddr_80422B8C *addr, u16 port, IpAddr_80422B8C *opt) {
    IpAddr_80422B8C tmp;
    s32 r;
    G_80422B8C *g;
    void *p;
    if (a & 0xC00) {
        return -4;
    }
    a = a & 0xFFFFF3FF;
    if (addr != NULL) {
        if (addr->family == 0) {
            return -2;
        }
    } else {
        return -2;
    }
    NetMemset(&tmp, 0, 0x10);
    if (opt != NULL && opt->family != 0) {
        if (opt->family != addr->family) {
            return -2;
        }
    } else {
        opt = &tmp;
    }
    switch (addr->family) {
    case 4:
        p = opt->a;
        opt = (IpAddr_80422B8C *)tmp.a;
        break;
    case 6:
        p = tmp.a;
        opt = (IpAddr_80422B8C *)opt->a;
        break;
    case 5:
    default:
        return -2;
    }
    g = (G_80422B8C *)&network_dispatch_state;
    TLobby::lock_mutex((int)((void *)g->f0));
    if (validate_tcp_handle__6TLobbyFs(a) < 0) {
        TUdpSocket::unlock_mutex((int)((void *)g->f0));
        return -4;
    }
    if (tcp_get_socket_handle__6TLobbyFs(a) != 0) {
        TUdpSocket::unlock_mutex((int)((void *)g->f0));
        return -9;
    }
    TLobby__sub_8041E2EC(a, p, opt);
    r = tcp_connect_start__6TLobbyFsls(a, addr, port);
    TUdpSocket::unlock_mutex((int)((void *)g->f0));
    return r;
}

s32 tcp_bind__FsP10at_ip_addrUs(s32 a, void *addr, u16 port) {
    u8 tmp[0x14];
    s32 r;
    G_80422CFC *g;
    if (a & 0xC00) { return -4; }
    a = a & 0xFFFFF3FF;
    if (addr == NULL) {
        NetMemset(tmp, 0, 0x14);
        addr = tmp;
    }
    g = ((G_80422CFC *)&network_dispatch_state);
    TLobby::lock_mutex((int)((void *)g->f0));
    if (validate_tcp_handle__6TLobbyFs(a) < 0) {
        TUdpSocket::unlock_mutex((int)((void *)g->f0));
        return -4;
    }
    if (tcp_get_socket_handle__6TLobbyFs(a) != 0) {
        TUdpSocket::unlock_mutex((int)((void *)g->f0));
        return -9;
    }
    r = TLobby__sub_8041E5E4(a, addr, port);
    TUdpSocket::unlock_mutex((int)((void *)g->f0));
    return r;
}

s32 tcp_create__Fv(void) {
    s32 temp_r31;
    TLobby::lock_mutex((int)((void *) ((*(RecoveredGlobal_80422DE4_lbl_805C1C50 *)&network_dispatch_state).value)));
    temp_r31 = TLobby__sub_8041E780();
    TUdpSocket::unlock_mutex((int)((void *) ((*(RecoveredGlobal_80422DE4_lbl_805C1C50 *)&network_dispatch_state).value)));
    return temp_r31;
}

void TLobby__sub_80422E30(s32 v, s32 cb_, s32 type, s16 code) {
    T_80422E30 *s;
    switch ((s16)type) {
    case 1:
        v |= 0x800;
        break;
    case 6:
        v |= 0xC00;
        break;
    case 2:
        v |= 0x400;
        break;
    case 3:
        if (validate_tcp_handle__6TLobbyFs(v) < 0) {
            return;
        }
        s = (T_80422E30 *)tcp_protocol_state[0];
        s += (s16)v;
        if ((u16)(code - 10) <= 1 || code == 4) {
            if (s->fl2 & 2) {
                s->st2 = -5;
                s->fl2 &= ~1;
                resume_thread__6TLobbyFv(s->th2);
            }
            if (s->fl1 & 2) {
                s->st1 = -5;
                s->fl1 &= ~1;
                resume_thread__6TLobbyFv(s->th1);
            }
        }
        break;
    default:
        return;
    }
    if ((void *)cb_ != NULL) {
        ((void (*)(s32, s16))cb_)(v, code);
    }
}

s16 TLobby__sub_80422F70(s16 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp18;
    s16 temp_r3_2;
    s16 temp_r3;
    s16 var_r29;
    if (arg0 < 0) {
        return -2;
    }
    var_r29 = 0;
    TLobby::lock_mutex((int)((void *) (network_dispatch_state.value)));
    ((TLobby *)(&sp18))->init_packet_header((s32)((void *) (arg1)));
    temp_r3_2 = TLobby__sub_8040F00C(arg0, (void *) (&sp18), (int) (arg2), (void *) (arg3));
    if (temp_r3_2 > 0) {
        var_r29 = temp_r3_2;
        arg2 -= temp_r3_2 * 0x1C;
    }
    temp_r3 = TLobby__sub_80412058(arg0, (void *) (&sp18), (int) (arg2), (void *) (arg3));
    if (temp_r3 > 0) {
        var_r29 += temp_r3;
    }
    TUdpSocket::unlock_mutex((int)((void *) (network_dispatch_state.value)));
    if (var_r29 == 0) {
        if (temp_r3_2 < temp_r3) {
            return temp_r3_2;
        }
        return temp_r3;
    }
    return var_r29;
}

s16 TLobby__sub_80423064(s16 idx, s32 arg1) {
    s16 temp_r3;
    s16 temp_r3_2;
    s16 var_r31;
    s32 level;
    if (idx < 0) {
        return -2;
    }
    TLobby::lock_mutex((int)((void *) (network_dispatch_state.value)));
    level = OSDisableInterrupts();
    switch (arg1) {
    case 0:
        var_r31 = 0;
        temp_r3 = TLobby__sub_8040F1A0(idx);
        if (temp_r3 < 0) {
            var_r31 = temp_r3;
        }
        temp_r3_2 = TLobby__sub_80412210(idx);
        if (temp_r3_2 < 0) {
            var_r31 = temp_r3_2;
        }
        break;
    case 4:
        var_r31 = TLobby__sub_8040F1A0(idx);
        break;
    case 6:
        var_r31 = TLobby__sub_80412210(idx);
        break;
    default:
        var_r31 = -2;
        break;
    }
    OSRestoreInterrupts((int) (level));
    TUdpSocket::unlock_mutex((int)((void *) (network_dispatch_state.value)));
    return var_r31;
}

s32 TLobby__sub_8042315C(s16 arg0, P_8042315C *p) {
    s32 r;
    s32 intr;
    if (arg0 < 0) {
        return -2;
    }
    TLobby::lock_mutex((int)((void *) (network_dispatch_state.value)));
    intr = OSDisableInterrupts();
    switch (p->type) {
    case 4:
        r = TLobby__sub_8040F454(p->a, p->b, p->c, arg0);
        break;
    case 6:
        if (p->n < 0 || p->n > 0x80) {
            r = -2;
        } else {
            r = TLobby__sub_80412CA4(&p->a, p->n, p->m, arg0, p->d);
        }
        break;
    case 5:
    default:
        r = -2;
        break;
    }
    OSRestoreInterrupts(intr);
    TUdpSocket::unlock_mutex((int)((void *) (network_dispatch_state.value)));
    return r;
}

s32 TLobby::build_dhcp_release() {
    s32 m;
    u8 *p;
    u16 len;
    NetMemset(((u8 *)this), 0, 0x5DC);
    ((u8 *)this)[0] = 1;
    ((u8 *)this)[1] = 1;
    ((u8 *)this)[2] = 6;
    ((u8 *)this)[3] = 0;
    TLobby::get_time_ms((s32 *)(&lbl_805D7B60));
    lbl_805D7B50 = lbl_805D7B60;
    NetMemcpy(((u8 *)this) + 4, &lbl_805D7B50, 4);
    *(s32 *)(((u8 *)this) + 0xC) = lbl_805D7B28;
    NetMemcpy(((u8 *)this) + 0x1C, lbl_805D7B1C, 6);
    p = ((u8 *)this) + 0xEC;
    *(s32 *)p = lbl_805D7B4C;
    p += 4;
    *p++ = 0x35;
    *p++ = 1;
    *p++ = 7;
    *p++ = 0x3D;
    *p++ = 7;
    *p++ = 1;
    NetMemcpy(p, lbl_805D7B1C, 6);
    p += 6;
    *p++ = 0x36;
    *p++ = 4;
    NetMemcpy(p, lbl_805D7B24, 4);
    p += 4;
    len = str_length__6TLobbyFl(dhcp_hostname);
    if (len != 0) {
        *p++ = 0xC;
        m = len + 1;
        *p++ = m;
        NetMemcpy(p, dhcp_hostname, m);
        p += m;
    }
    *p++ = 0xFF;
    return p - ((u8 *)this);
}

s32 TLobby::dhcp_build_packet() {
    s32 m;
    u8 *p;
    u16 len;
    u32 tmp;
    NetMemset(((u8 *)this), 0, 0x5DC);
    ((u8 *)this)[0] = 1;
    ((u8 *)this)[1] = 1;
    ((u8 *)this)[2] = 6;
    ((u8 *)this)[3] = 0;
    NetMemcpy(((u8 *)this) + 4, &lbl_805D7B50, 4);
    *(u16 *)(((u8 *)this) + 0xA) = 0;
    if (lbl_805D4820 == 4 || lbl_805D4820 == 5) {
        *(s32 *)(((u8 *)this) + 0xC) = lbl_805D7B28;
    }
    NetMemcpy(((u8 *)this) + 0x1C, lbl_805D7B1C, 6);
    p = ((u8 *)this) + 0xEC;
    *(s32 *)p = (*(s32 *)&lbl_805D7B4C);
    p += 4;
    *p++ = 0x35;
    *p++ = 1;
    *p++ = 3;
    *p++ = 0x3D;
    *p++ = 7;
    *p++ = 1;
    NetMemcpy(p, lbl_805D7B1C, 6);
    p += 6;
    *p++ = 0x37;
    *p++ = 5;
    *p++ = 1;
    *p++ = 3;
    *p++ = 6;
    *p++ = 0xF;
    *p++ = 0x1C;
    if (lbl_805D4820 != 4 && lbl_805D4820 != 5) {
        *p++ = 0x36;
        *p++ = 4;
        NetMemcpy(p, lbl_805D7B24, 4);
        p += 4;
    }
    if (lbl_805D7B58 != 0) {
        *p++ = 0x33;
        *p++ = 4;
        tmp = lbl_805D7B58;
        NetMemcpy(p, &tmp, 4);
        p += 4;
    }
    if (lbl_805D4820 != 4 && lbl_805D4820 != 5) {
        *p++ = 0x32;
        *p++ = 4;
        NetMemcpy(p, &lbl_805D7B28, 4);
        p += 4;
    }
    len = str_length__6TLobbyFl(((char *)&dhcp_hostname));
    if (len != 0) {
        *p++ = 0xC;
        m = len + 1;
        *p++ = m;
        NetMemcpy(p, ((char *)&dhcp_hostname), m);
        p += m;
    }
    *p++ = 0xFF;
    return p - ((u8 *)this);
}

s32 TLobby::build_dhcp_discover_packet() {
    u32 spC;
    u8 *p;
    u16 len;
    s32 n;
    NetMemset(((u8 *)this), 0, 0x5DC);
    ((u8 *)this)[0] = 1;
    ((u8 *)this)[1] = 1;
    ((u8 *)this)[2] = 6;
    ((u8 *)this)[3] = 0;
    TLobby::get_time_ms((s32 *)(&lbl_805D7B60));
    lbl_805D7B50 = lbl_805D7B60;
    NetMemcpy(((u8 *)this) + 4, &lbl_805D7B50, 4);
    *(s16 *)(((u8 *)this) + 0xA) = 0;
    NetMemcpy(((u8 *)this) + 0x1C, lbl_805D7B1C, 6);
    p = ((u8 *)this) + 0xEC;
    *(u32 *)p = lbl_805D7B4C;
    p += 4;
    *p++ = 0x35;
    *p++ = 1;
    *p++ = 1;
    *p++ = 0x3D;
    *p++ = 7;
    *p++ = 1;
    NetMemcpy(p, lbl_805D7B1C, 6);
    p += 6;
    *p++ = 0x37;
    *p++ = 5;
    *p++ = 1;
    *p++ = 3;
    *p++ = 6;
    *p++ = 0xF;
    *p++ = 0x1C;
    if (lbl_805D7B58 != 0) {
        *p++ = 0x33;
        *p++ = 4;
        spC = lbl_805D7B58;
        NetMemcpy(p, &spC, 4);
        p += 4;
    }
    len = str_length__6TLobbyFl(dhcp_hostname);
    if (len != 0) {
        *p++ = 0xC;
        n = len + 1;
        *p++ = n;
        NetMemcpy(p, dhcp_hostname, n);
        p += n;
    }
    *p++ = 0xFF;
    return p - ((u8 *)this);
}

s32 TLobby__sub_8042455C(void *a) {
    u16 n;
    lbl_805D7BA0 = 0;
    if (a == 0) {
        lbl_805D7BA0 = 1;
        return -1;
    }
    n = str_length__6TLobbyFl(a);
    if (n < 0x20 && n != 0) {
        TLobby__sub_80425288(0x10, n, a);
        return 0;
    }
    lbl_805D7BA0 = 1;
    return -1;
}

}
