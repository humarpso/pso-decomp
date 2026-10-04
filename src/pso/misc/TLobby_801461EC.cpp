#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80146CB8_lbl_8050CCE8 {
    M2C_UNK value;
    u8 remaining[0x128];
};

struct RecoveredGlobal_8014672C_lbl_8050C0A8 {
    M2C_UNK value;
    u8 remaining[0x6D8];
};

struct RecoveredGlobal_80146588_lbl_8050CCE8 {
    M2C_UNK value;
    u8 remaining[0x128];
};

struct RecoveredGlobal_80146D14_lbl_8050CCE8 {
    M2C_UNK value;
    u8 remaining[0x128];
};

struct RecoveredGlobal_80146CA0_lbl_8050C784 {
    M2C_UNK value;
    u8 remaining[0x560];
};

struct RecoveredGlobal_80146D44_lbl_8050CE14 {
    M2C_UNK value;
    u8 remaining[0x150];
};

struct RecoveredGlobal_80146D50_lbl_8050C784 {
    M2C_UNK value;
    u8 remaining[0x560];
};

extern "C" {
int TLobby__sub_801469D8(void*);
int TLobby__sub_801469B8(void* p);
    extern int lbl_805D5708;
void call_146CA0_with_5708__6TLobbyFv(void);
    extern unsigned char lbl_8050C784[];
void* TLobby__sub_80146D68(int a0);
void TLobby__sub_8014715C(void* p, void* q);
M2C_UNK TLobby__sub_8040A3C0();
M2C_UNK TLobby__sub_8040AD64();
extern s32 lbl_805D570C;
void teardown_boss2__6TLobbyFv(void);
s32 is_state_active__6TLobbyFv(void);
s32 TLobby__sub_8014618C(void);
void strncpy(s32, s32, s32);
M2C_UNK memset(int, int, int);
extern RecoveredGlobal_80146CB8_lbl_8050CCE8 lbl_8050CCE8;
void TLobby__sub_80146CB8(s32 arg0);
extern RecoveredGlobal_8014672C_lbl_8050C0A8 lbl_8050C0A8;
void TLobby__sub_8014672C(s32 *arg0);
extern RecoveredGlobal_80146CB8_lbl_8050CCE8 lbl_8050CCE8;
extern s32 lbl_805D56D8;
extern s32 lbl_805D56DC;
extern s32 lbl_805D56E0;
extern s32 lbl_805D56E4;
s32 TLobby__sub_80146588(s32 *arg0);
s32 is_state_active__6TLobbyFv(void);
s32 TLobby__sub_8014618C(void);
extern RecoveredGlobal_80146CB8_lbl_8050CCE8 lbl_8050CCE8;
u8 *TLobby__sub_80146D14(void);
extern unsigned char lbl_8050C784[];
u8 *TLobby__sub_80146CA0(s32 arg0);
extern RecoveredGlobal_80146D44_lbl_8050CE14 lbl_8050CE14;
M2C_UNK *TLobby__sub_80146D44(void);
extern unsigned char lbl_8050C784[];
u8 *TLobby__sub_80146D50(s32 arg0);
s32 TLobby__sub_801466F4(u32 arg0);
s32 is_state_active__6TLobbyFv(void);
s32 TLobby__sub_80145EE4(void);
s32 poll_connect__6TLobbyFv(void);
void set_battle_flag__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80146314(s32 *);
s32 TLobby__sub_80146588(s32 *arg0);
s32 TLobby__sub_801465C0(s32 *);
s32 TLobby__sub_801471A0(void);
void fn_80147A68(void);
void TLobby__sub_804073B8(void);
s16 TLobby__sub_8040876C(void);
s16 TLobby__sub_804150EC(void);
s16 TLobby__sub_8042315C(s16, void *);
void TLobby__sub_80426C34(s32);
extern RecoveredGlobal_8014672C_lbl_8050C0A8 lbl_8050C0A8;
extern RecoveredGlobal_80146CB8_lbl_8050CCE8 lbl_8050CCE8;
extern s32 lbl_805D2D00;
extern s32 lbl_805D56D8;
extern s32 lbl_805D56E4;
extern s32 lbl_805D56F8;
extern s32 lbl_805D5710;
s32 TLobby__sub_80146B08(void);
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
M2C_UNK TLobby__sub_80147284();
int TLobby__sub_803F4B68(void*);
M2C_UNK TLobby__sub_80421620();
M2C_UNK TLobby__sub_804219D0(M2C_UNK, M2C_UNK, s32);
M2C_UNK TLobby__sub_80421A50(M2C_UNK, M2C_UNK, s32);
s16 TLobby__sub_80426BD8();
s8 func_801A5E54__Fv();
s32 get_task_count__6TLobbyFv();
M2C_UNK send_and_handle__6TLobbyFPv();
void xfree__FPv(void*);
int xmalloc__FUl(void);

    extern int lbl_805D56C8;
    extern short lbl_805D56CE;
    extern int lbl_805D56D0;
void init_keyboard_buffer__6TLobbyFv(void) { lbl_805D56D0 = 0; lbl_805D56CE = 0; lbl_805D56C8 = 0; TLobby__sub_803F4B68((void*)0); lbl_805D56C8 = xmalloc__FUl(); TLobby__sub_80145A94(); }

s32 poll_connect__6TLobbyFv(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if (var_r31 > 0x12C) {
        return 0;
    }
    var_r31 += 1;
    send_and_handle__6TLobbyFPv();
    if (func_801A5E54__Fv() != 0) {
        return 1;
    }
    if (TLobby__sub_80426BD8() == 1) {
        return 2;
    }
    goto loop_1;
}

extern s32 lbl_805D56F8;
extern s32 lbl_805D56FC;

void flush_pending_flag2__6TLobbyFv(void) {
    if (lbl_805D56F8 & 2) {
        TLobby__sub_804219D0(0, 0, lbl_805D56FC);
        lbl_805D56F8 &= 0xFFFFFFFD;
    }
}

extern s32 lbl_805D56F8;
extern s32 lbl_805D56FC;

void set_battle_flag__6TLobbyFi(s32 arg0) {
    lbl_805D56FC = arg0;
    lbl_805D56F8 |= 2;
    TLobby__sub_80421A50(0, 0, arg0);
}

typedef char RecoveredGlobal_80146588_lbl_8050CCE8_size[sizeof(RecoveredGlobal_80146588_lbl_8050CCE8) == 0x12C ? 1 : -1];
s32 TLobby__sub_80146588(s32 *arg0) {
    lbl_805D56D8 = M2C_FIELD(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value, s32 *, 8);
    lbl_805D56E4 = M2C_FIELD(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value, s32 *, 0x18);
    lbl_805D56DC = M2C_FIELD(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value, s32 *, 0x10);
    lbl_805D56E0 = M2C_FIELD(&(*(RecoveredGlobal_80146588_lbl_8050CCE8 *)&lbl_8050CCE8).value, s32 *, 0x14);
    return 0;
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
    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(&lbl_8050C0A8.value, s32 *, 4);
}

int TLobby__sub_80146740(void) { return 0; }

extern s32 lbl_805D5710;

s32 query_task_active__6TLobbyFv(void) {
    if ((s32) lbl_805D5710 != 0) {
        return get_task_count__6TLobbyFv();
    }
    return 0;
}

int TLobby__sub_8014677C(void) { return TLobby__sub_80145DB4((void*)(1)); }
int get_link_status_value__6TLobbyFv(void) { return TLobby__sub_80145DB4((void*)(4)); }

extern s32 lbl_805D56F8;
extern u32 lbl_805D5700;
extern s32 lbl_805D5704;

void cleanup__6TLobbyFv(void* _w0) {
    if ((s32) lbl_805D5704 != 0) {
        TLobby__sub_801469B8((void*)(_w0));
    } else {
        TLobby__sub_80147284();
    }
    if (lbl_805D56F8 & 8) {
        TLobby__sub_80421620();
        lbl_805D56F8 &= 0xFFFFFFF7;
    }
    if ((u32) lbl_805D5700 != 0U) {
        xfree__FPv((void*)lbl_805D5700);
        lbl_805D5700 = 0U;
    }
}
int TLobby__sub_801469B8(void* p) { return TLobby__sub_801469D8(p); }

s32 TLobby__sub_80146B08(void) {
    s32 sp8;
    s32 id;
    s32 r;
    s16 ok;
    lbl_805D56F8 &= ~1;
    fn_80147A68();
    if (*(s32 *)((u8 *)&lbl_8050CCE8 + 0x120) != 0) {
        TLobby__sub_804073B8();
        lbl_805D56F8 |= 0x80;
        id = TLobby__sub_8040876C();
        lbl_805D56F8 |= 0x40;
        r = poll_connect__6TLobbyFv();
        if (r == 0) {
            return 0xF;
        }
        if (r == 1) {
            return 0x11;
        }
        lbl_805D56F8 |= 1;
        TLobby__sub_80426C34(4);
        ok = TLobby__sub_804150EC();
        lbl_805D56F8 |= 0x20;
        lbl_805D5710 = 0;
        if (ok != 0) {
            return 0xE;
        }
        if (TLobby__sub_80145EE4() != 0) {
            lbl_805D2D00 = id;
            r = TLobby__sub_801465C0(&sp8);
        } else if (is_state_active__6TLobbyFv() != 0) {
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
                set_battle_flag__6TLobbyFi(lbl_805D56E4);
            } else {
                return 0xD;
            }
            return TLobby__sub_801471A0();
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

void TLobby__sub_80146CB8(s32 arg0) {
    u8 *temp_r31;
    TLobby__sub_8014618C();
    is_state_active__6TLobbyFv();
    temp_r31 = (u8 *)&lbl_8050CCE8.value + 0xFC;
    memset((int) (temp_r31), (int) (0), (int) (0x20));
    strncpy((s32) temp_r31, arg0, 0x1F);
}

typedef char RecoveredGlobal_80146D14_lbl_8050CCE8_size[sizeof(RecoveredGlobal_80146D14_lbl_8050CCE8) == 0x12C ? 1 : -1];
u8 *TLobby__sub_80146D14(void) {
    TLobby__sub_8014618C();
    is_state_active__6TLobbyFv();
    return (u8 *)&(*(RecoveredGlobal_80146D14_lbl_8050CCE8 *)&lbl_8050CCE8).value + 0xFC;
}

typedef char RecoveredGlobal_80146D44_lbl_8050CE14_size[sizeof(RecoveredGlobal_80146D44_lbl_8050CE14) == 0x154 ? 1 : -1];
M2C_UNK *TLobby__sub_80146D44(void) {
    return &lbl_8050CE14.value;
}

typedef char RecoveredGlobal_80146D50_lbl_8050C784_size[sizeof(RecoveredGlobal_80146D50_lbl_8050C784) == 0x564 ? 1 : -1];
u8 *TLobby__sub_80146D50(s32 arg0) {
    return (u8 *)&(*(RecoveredGlobal_80146D50_lbl_8050C784 *)&lbl_8050C784).value + (arg0 * 0x1CC) + 0x80;
}

void* TLobby__sub_80146D68(int a0) {  return (char*)lbl_8050C784 + a0 * 460; }
void TLobby__sub_8014715C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
void teardown_boss2__6TLobbyFv(void) {
    if ((s32) lbl_805D570C != 0) {
        TLobby__sub_8040AD64();
        TLobby__sub_8040A3C0();
        lbl_805D570C = 0;
    }
}

}
