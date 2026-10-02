#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803F76F4_lbl_805A9008 {
    M2C_UNK value;
    u8 remaining[0x108C];
};

struct RecoveredGlobal_803F7790_lbl_805A9008 {
    M2C_UNK value;
    u8 remaining[0x108C];
};

struct RecoveredGlobal_803F7984_lbl_805AA098 {
    M2C_UNK value;
    u8 remaining[0x4C14];
};

struct RecoveredGlobal_803F79C0_lbl_805A9008 {
    M2C_UNK value;
    u8 remaining[0x108C];
};

struct RecoveredGlobal_803F7A30_lbl_805C18A0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct E_803F7684 { u32 key; s32 val; };

struct P_803F7A90 { s32 a; s32 b; };

struct Q_803F7AF4 { s32 a; s32 b; };

struct A_803F8314 {
    u8 pad[0x1A];
    s16 flag;
    char *name;
};

struct H_803F8470 {
    s16 a;
    s16 b;
    u16 n1;
    u16 n2;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
    s32 g;
};

struct T_803F86C0 { s16 a; s16 b; s16 c; };

struct Cfg_803F86C0 {
    s16 f0;
    s16 f2;
    s16 f4;
    s16 f6;
    s16 f8;
    s16 fA;
    T_803F86C0 *fC;
    s16 f10;
    s16 f12;
    u8 *f14;
    s16 f18;
    s16 f1A;
    s16 f1C;
    s16 f1E;
    u8 *f20;
    s16 f24;
    s16 f26;
    u8 *f28;
    s16 f2C;
    s16 f2E;
    s16 f30;
    s16 f32;
    u8 *f34;
    u8 *f38;
    u8 *f3C;
    s16 f40;
    s16 f42;
    u8 *f44;
};

extern "C" {
extern RecoveredGlobal_803F76F4_lbl_805A9008 lbl_805A9008;
void TLobby__sub_803F76F4(u8 *arg0);
extern RecoveredGlobal_803F76F4_lbl_805A9008 lbl_805A9008;
void TLobby__sub_803F7790(u8 *arg0);
extern RecoveredGlobal_803F7984_lbl_805AA098 lbl_805AA098;
extern M2C_UNK lbl_805D7A00;
void TLobby__sub_803F7984(u8 *arg0);
extern RecoveredGlobal_803F76F4_lbl_805A9008 lbl_805A9008;
void TLobby__sub_803F79C0(u8 *arg0);
s32 TAdSinglePlyChrSelectGC__sub_8042E7B8(s32);
s32 TLobby__sub_803F8044(s32 arg0);
void TLobby__sub_803F95E4(u32);
void TLobby__sub_803F97E8(s32);
void TLobby__sub_803F9AEC(s32);
void TLobby__sub_803F9B48(u32);
s16 TLobby__sub_80427D0C(s16);
s16 TLobby__sub_80427D40(void *, u16, void *);
s32 TLobby__sub_80428094(s16);
void TAdSinglePlyChrSelectGC__sub_8042D604(void);
s32 TAdSinglePlyChrSelectGC__sub_8042E768(u32);
extern s16 lbl_805D47F0;
extern s32 lbl_805D7A08;
extern u32 lbl_805D7A0C;
extern s16 lbl_805D7A34;
void TLobby__sub_803F8238(void);
M2C_UNK TUdpSocket__sub_803F95A4(int);
M2C_UNK TLobby__sub_803F95C4(int);
void TLobby__sub_803F95E4(u32);
void TLobby__sub_803F9AEC(s32);
void TLobby__sub_803F9B48(u32);
extern RecoveredGlobal_803F7A30_lbl_805C18A0 lbl_805C18A0;
void TLobby__sub_803F7A30(void);
extern s32 lbl_805D7A10;
extern s32 lbl_805D7A14;
u32 TLobby__sub_803F8440(u8 *arg0, s32 arg1, u32 arg2);
s32 TLobby__sub_803F861C(int);
extern s16 lbl_805D47F8;
extern u16 lbl_805D47FA;
extern u16 lbl_805D47FC;
extern s32 lbl_805D4800;
extern s16 lbl_805D4804;
extern s32 lbl_805D4808;
extern s32 lbl_805D480C;
extern s32 lbl_805D7A48;
extern s32 lbl_805D7A4C;
s32 TLobby__sub_803F8564(u8 *arg0);
extern s32 lbl_805D7A2C;
s32 TLobby__sub_803F7D6C(void);
extern E_803F7684 lbl_804FD350[];
s32 TLobby__sub_803F9E44(void *, u32);
s32 TLobby__sub_803F7684(void *arg0);
extern RecoveredGlobal_803F7A30_lbl_805C18A0 lbl_805C18A0;
extern u8 TLobby__sub_80405150[];
s16 TLobby__sub_803F96AC(void *);
void TLobby__sub_803F9B28(s32);
s16 TLobby__sub_803F9B94(void *, void *);
void TLobby__sub_803F7A90(void);
extern s32 lbl_805D7A30;
void NetYieldThread(void);
void NetSuspendCurrentThread(void);
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32, s32, void *);
s32 TAdSinglePlyChrSelectGC__sub_8042E184(void);
void TLobby__sub_803F7D5C(s32 arg0);
void TLobby__sub_803F7AF4(void);
s32 TAdSinglePlyChrSelectGC__sub_8042E320(s32, s32, void *);
extern s32 lbl_805D7A2C;
void TLobby__sub_803F7D54(s32 arg0);
s32 TLobby__sub_803F7DD8(s32 arg0, s16 arg1);
s16 TLobby__sub_80427D0C(s16);
s16 TLobby__sub_80427D40(void *, u16, void *);
s32 TAdSinglePlyChrSelectGC__sub_8042E768(u32);
extern s16 lbl_805D47F0;
extern s16 lbl_805D7A34;
s32 TLobby__sub_803F8090(void);
M2C_UNK TUdpSocket__sub_803F95A4(int);
M2C_UNK TLobby__sub_803F95C4(int);
extern u32 lbl_805D7A0C;
extern s32 lbl_805D7A10;
extern s32 lbl_805D7A14;
extern s32 lbl_805D7A1C;
extern s32 lbl_805D7A20;
extern Q_803F7AF4 lbl_805D7A24;
extern s32 lbl_805D7A38;
Q_803F7AF4 *TLobby__sub_803F7B74(void);
s32 OSIsThreadSuspended(s32);
M2C_UNK TUdpSocket__sub_803F95A4(int);
M2C_UNK TLobby__sub_803F95C4(int);
void TLobby__sub_803F9AA8(s32);
void TLobby__sub_803F9F04(void *, void *, s32);
extern s32 lbl_805D7A08;
extern u32 lbl_805D7A0C;
extern s32 lbl_805D7A10;
extern s32 lbl_805D7A14;
extern s32 lbl_805D7A18;
extern s32 lbl_805D7A20;
s32 TLobby__sub_803F7C4C(u8 *src, s32 len);
M2C_UNK TUdpSocket__sub_803F95A4(int);
M2C_UNK TLobby__sub_803F95C4(int);
s16 TLobby__sub_803F96AC(void *);
void TLobby__sub_803F9B28(s32);
s16 TLobby__sub_803F9B94(void *, void *);
s16 TLobby__sub_804281DC(void *);
s32 TAdSinglePlyChrSelectGC__sub_8042CEF8(char *);
void TAdSinglePlyChrSelectGC__sub_8042E488(s32);
void TLobby__sub_803F7AF4(void);
extern u8 lbl_805AECB0[];
extern RecoveredGlobal_803F7A30_lbl_805C18A0 lbl_805C18A0;
extern s16 lbl_805D47F0;
extern s32 lbl_805D7A08;
extern u32 lbl_805D7A0C;
extern s32 lbl_805D7A10;
extern s16 lbl_805D7A34;
extern char lbl_805E1148[4];
s32 TLobby__sub_803F8314(A_803F8314 *arg0);
u32 TLobby__sub_803F8440(u8 *arg0, s32 arg1, u32 arg2);
s32 TLobby__sub_803F861C(int);
u32 TLobby__sub_803F8BA4(u8 *, u32, u32);
extern u32 lbl_805D7A40;
extern u32 lbl_805D7A44;
s32 TLobby__sub_803F8470(u8 *data, s32 size);
extern u8 lbl_805AEEB0[];
extern T_803F86C0 lbl_805D7A50;
void TLobby__sub_803F86C0(Cfg_803F86C0 *c);
u32 TLobby__sub_803F9E84(int);
s32 TAdSinglePlyChrSelectGC__sub_8042D49C(int);
s32 TAdSinglePlyChrSelectGC__sub_8042E57C(int);
s32 TAdSinglePlyChrSelectGC__sub_8042E628(int);
s32 TAdSinglePlyChrSelectGC__sub_8042E6C4(int);
s32 TLobby__sub_803F7E50(s32 arg0, s32 arg1, s32 arg2, s32 n, s32 p);
}

extern "C" {

void TLobby__sub_803F7678(void);
s32 TLobby__sub_803F767C(void);
void TLobby__sub_803F76F0(void);
void TLobby__sub_803F778C(void);
void TLobby__sub_803F77E0(void);
void TLobby__sub_803F7980(void);
void TLobby__sub_803F79AC(void);
void TLobby__sub_803F79B0(u8 *arg0);
void TLobby__sub_803F79BC(void);
void TLobby__sub_803F7D54(s32 arg0);
void TLobby__sub_803F7D5C(s32 arg0);
void TLobby__sub_803F808C(void);
s32 TLobby__sub_803F811C(s16 *arg0);
void TLobby__sub_803F86BC(void);

void TLobby__sub_803F7678(void) {

}

s32 TLobby__sub_803F767C(void) {
    return 0;
}

s32 TLobby__sub_803F7684(void *arg0) {
    E_803F7684 *p;
    for (p = lbl_804FD350; p->key != 0; p++) {
        if (TLobby__sub_803F9E44(arg0, p->key) == 0) {
            return p->val;
        }
    }
    return 0;
}

void TLobby__sub_803F76F0(void) {

}

typedef char RecoveredGlobal_803F76F4_lbl_805A9008_size[sizeof(RecoveredGlobal_803F76F4_lbl_805A9008) == 0x1090 ? 1 : -1];
void TLobby__sub_803F76F4(u8 *arg0) {
    struct Fields_arg0 { u8 * field_0; u8 * field_4; u8 * field_8; u8 * field_C; u8 * field_10; u8 * field_14; u8 * field_18; u8 * field_1C; M2C_UNK * field_20; s16 field_24; s16 field_26; s16 field_28; s16 field_2A; s16 field_2C; s16 field_2E; s16 field_30; s16 field_32; s16 field_34; s8 field_36; s8 field_37; s16 field_38; };
    ((Fields_arg0*)arg0)->field_0 = (u8 *)(&lbl_805A9008.value) + 0x808;
    ((Fields_arg0*)arg0)->field_4 = (u8 *)(&lbl_805A9008.value) + 0x788;
    ((Fields_arg0*)arg0)->field_8 = (u8 *)(&lbl_805A9008.value) + 0x708;
    ((Fields_arg0*)arg0)->field_C = (u8 *)(&lbl_805A9008.value) + 0x608;
    ((Fields_arg0*)arg0)->field_10 = (u8 *)(&lbl_805A9008.value) + 0x508;
    ((Fields_arg0*)arg0)->field_14 = (u8 *)(&lbl_805A9008.value) + 0x384;
    ((Fields_arg0*)arg0)->field_18 = (u8 *)(&lbl_805A9008.value) + 0x200;
    ((Fields_arg0*)arg0)->field_1C = (u8 *)(&lbl_805A9008.value) + 0x100;
    ((Fields_arg0*)arg0)->field_20 = &lbl_805A9008.value;
    ((Fields_arg0*)arg0)->field_24 = 0x80;
    ((Fields_arg0*)arg0)->field_26 = 0x80;
    ((Fields_arg0*)arg0)->field_28 = 0x80;
    ((Fields_arg0*)arg0)->field_2A = 0x100;
    ((Fields_arg0*)arg0)->field_2C = 0x100;
    ((Fields_arg0*)arg0)->field_2E = 0x181;
    ((Fields_arg0*)arg0)->field_30 = 0x181;
    ((Fields_arg0*)arg0)->field_32 = 0x100;
    ((Fields_arg0*)arg0)->field_34 = 0x100;
    ((Fields_arg0*)arg0)->field_36 = 0xA;
    ((Fields_arg0*)arg0)->field_37 = 5;
    ((Fields_arg0*)arg0)->field_38 = 3;
}

void TLobby__sub_803F778C(void) {

}

typedef char RecoveredGlobal_803F7790_lbl_805A9008_size[sizeof(RecoveredGlobal_803F7790_lbl_805A9008) == 0x1090 ? 1 : -1];
void TLobby__sub_803F7790(u8 *arg0) {
    struct Fields_arg0 { u8 * field_0; u8 * field_4; u8 * field_8; s16 field_C; s16 field_E; s16 field_10; s8 field_12; s8 field_13; s16 field_14; };
    ((Fields_arg0*)arg0)->field_0 = (unsigned char *) ((void *) ((u8 *)&(*(RecoveredGlobal_803F7790_lbl_805A9008 *)&lbl_805A9008).value + 0xA08));
    ((Fields_arg0*)arg0)->field_4 = (unsigned char *) ((void *) ((u8 *)&(*(RecoveredGlobal_803F7790_lbl_805A9008 *)&lbl_805A9008).value + 0x988));
    ((Fields_arg0*)arg0)->field_8 = (unsigned char *) ((void *) ((u8 *)&(*(RecoveredGlobal_803F7790_lbl_805A9008 *)&lbl_805A9008).value + 0x888));
    ((Fields_arg0*)arg0)->field_C = 0x80;
    ((Fields_arg0*)arg0)->field_E = 0x80;
    ((Fields_arg0*)arg0)->field_10 = 0x100;
    ((Fields_arg0*)arg0)->field_12 = 0xA;
    ((Fields_arg0*)arg0)->field_13 = 5;
    ((Fields_arg0*)arg0)->field_14 = 3;
}

void TLobby__sub_803F77E0(void) {

}

void TLobby__sub_803F7980(void) {

}

typedef char RecoveredGlobal_803F7984_lbl_805AA098_size[sizeof(RecoveredGlobal_803F7984_lbl_805AA098) == 0x4C18 ? 1 : -1];
void TLobby__sub_803F7984(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[12]; M2C_UNK * field_C; M2C_UNK * field_10; s16 field_14; s16 field_16; };
    ((Fields_arg0*)arg0)->field_C = &lbl_805D7A00;
    ((Fields_arg0*)arg0)->field_10 = &lbl_805AA098.value;
    ((Fields_arg0*)arg0)->field_16 = 4;
    ((Fields_arg0*)arg0)->field_14 = 0x5DC;
}

void TLobby__sub_803F79AC(void) {

}

void TLobby__sub_803F79B0(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 8) = 0x28;
}

void TLobby__sub_803F79BC(void) {

}

extern s32 lbl_805D7A2C;

typedef char RecoveredGlobal_803F79C0_lbl_805A9008_size[sizeof(RecoveredGlobal_803F79C0_lbl_805A9008) == 0x1090 ? 1 : -1];
void TLobby__sub_803F79C0(u8 *arg0) {
    struct Fields_arg0 { s32 field_0; u8 * field_4; s16 field_8; s16 field_A; u8 * field_C; u8 * field_10; u8 * field_14; u8 * field_18; u8 * field_1C; s16 field_20; s16 field_22; s16 field_24; s16 field_26; s16 field_28; };
    ((Fields_arg0*)arg0)->field_4 = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x4B78;
    ((Fields_arg0*)arg0)->field_8 = 2;
    ((Fields_arg0*)arg0)->field_A = 0x226;
    ((Fields_arg0*)arg0)->field_C = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x4A60;
    ((Fields_arg0*)arg0)->field_10 = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x3A48;
    ((Fields_arg0*)arg0)->field_14 = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x31B0;
    ((Fields_arg0*)arg0)->field_18 = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x2918;
    ((Fields_arg0*)arg0)->field_1C = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x2800;
    ((Fields_arg0*)arg0)->field_0 = 0x18;
    ((Fields_arg0*)arg0)->field_20 = 0x46;
    ((Fields_arg0*)arg0)->field_22 = 0x406;
    ((Fields_arg0*)arg0)->field_24 = 0x226;
    ((Fields_arg0*)arg0)->field_26 = 0x226;
    ((Fields_arg0*)arg0)->field_28 = 0x46;
}

typedef char RecoveredGlobal_803F7A30_lbl_805C18A0_size[sizeof(RecoveredGlobal_803F7A30_lbl_805C18A0) == 0x10 ? 1 : -1];
void TLobby__sub_803F7A30(void) {
    TLobby__sub_803F95C4((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 0)));
    TLobby__sub_803F9AEC((s32)((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 4))));
    TLobby__sub_803F9B48((u32)((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 4))));
    TUdpSocket__sub_803F95A4((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 0)));
    TLobby__sub_803F95E4((u32)((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 0))));
}

void TLobby__sub_803F7A90(void) {
    if (TLobby__sub_803F96AC(((P_803F7A90 *)&lbl_805C18A0)) < 0 || TLobby__sub_803F9B94(TLobby__sub_80405150, &((P_803F7A90 *)&lbl_805C18A0)[0].b) < 0) {
        return;
    }
    TLobby__sub_803F9B28(((P_803F7A90 *)&lbl_805C18A0)[0].b);
}

void TLobby__sub_803F7AF4(void) {
    Q_803F7AF4 *p;
    for (;;) {
        p = TLobby__sub_803F7B74();
        if (p == NULL) {
            NetSuspendCurrentThread();
            continue;
        }
        lbl_805D7A30 = p->b;
        for (;;) {
            if (TAdSinglePlyChrSelectGC__sub_8042E184() == 0) {
                if (TAdSinglePlyChrSelectGC__sub_8042DD70(p->a, p->b, (void *)TLobby__sub_803F7D5C) == 1) {
                    break;
                }
            }
            NetYieldThread();
        }
        for (;;) {
            if (lbl_805D7A30 <= 0) {
                break;
            }
            NetYieldThread();
        }
        NetYieldThread();
    }
}

Q_803F7AF4 *TLobby__sub_803F7B74(void) {
    s32 pos;
    TLobby__sub_803F95C4(lbl_805D7A0C);
    lbl_805D7A20 -= lbl_805D7A38;
    if (lbl_805D7A20 <= 0) {
        lbl_805D7A20 = 0;
        lbl_805D7A38 = 0;
        TUdpSocket__sub_803F95A4(lbl_805D7A0C);
        return NULL;
    }
    pos = lbl_805D7A1C;
    if (pos + lbl_805D7A20 >= lbl_805D7A14) {
        lbl_805D7A38 = lbl_805D7A14 - pos;
    } else {
        lbl_805D7A38 = lbl_805D7A20;
    }
    if (lbl_805D7A38 > 0x200) {
        lbl_805D7A38 = 0x200;
    }
    lbl_805D7A1C += lbl_805D7A38;
    if (lbl_805D7A1C >= lbl_805D7A14) {
        lbl_805D7A1C = 0;
    }
    lbl_805D7A24.a = lbl_805D7A10 + pos;
    lbl_805D7A24.b = lbl_805D7A38;
    TUdpSocket__sub_803F95A4(lbl_805D7A0C);
    return &lbl_805D7A24;
}

s32 TLobby__sub_803F7C4C(u8 *src, s32 len) {
    s32 first;
    s32 over;
    s32 end;
    s32 thread;
    u8 pad[8];
    thread = lbl_805D7A08;
    TLobby__sub_803F95C4(lbl_805D7A0C);
    if (lbl_805D7A14 - lbl_805D7A20 < len) {
        TUdpSocket__sub_803F95A4(lbl_805D7A0C);
        if (OSIsThreadSuspended(thread) == 1) {
            TLobby__sub_803F9AA8(lbl_805D7A08);
        }
        return 0;
    }
    end = lbl_805D7A18 + len;
    if (end >= lbl_805D7A14) {
        over = end - lbl_805D7A14;
        first = len - over;
        TLobby__sub_803F9F04((void *)(lbl_805D7A10 + lbl_805D7A18), src, first);
        TLobby__sub_803F9F04((void *)lbl_805D7A10, src + first, over);
        lbl_805D7A18 = over;
    } else {
        TLobby__sub_803F9F04((void *)(lbl_805D7A10 + lbl_805D7A18), src, len);
        lbl_805D7A18 += len;
    }
    lbl_805D7A20 += len;
    TUdpSocket__sub_803F95A4(lbl_805D7A0C);
    if (OSIsThreadSuspended(thread) == 1) {
        TLobby__sub_803F9AA8(lbl_805D7A08);
    }
    return 1;
}

void TLobby__sub_803F7D54(s32 arg0) {
    lbl_805D7A2C = arg0;
}

extern s32 lbl_805D7A30;

void TLobby__sub_803F7D5C(s32 arg0) {
    lbl_805D7A30 -= arg0;
}

s32 TLobby__sub_803F7D6C(void) {
    switch ((*(u32 *)&lbl_805D7A2C)) {
    case 3:
        return 0;
    case 2:
        return 2;
    case 0:
        return 3;
    case 4:
        return -1;
    case 1:
        return 8;
    case 5:
        return 9;
    case 6:
        return 0xA;
    case 7:
        return 0xB;
    default:
        return 1;
    }
}

s32 TLobby__sub_803F7DD8(s32 arg0, s16 arg1) {
    s32 v;
    switch (arg1) {
    case 0:
        v = 1;
        break;
    case 1:
        v = 2;
        break;
    default:
        return -1;
    }
    lbl_805D7A2C = 4;
    if (TAdSinglePlyChrSelectGC__sub_8042E320(arg0, v, (void *)TLobby__sub_803F7D54) != 1) {
        return -1;
    }
    return 0;
}

s32 TLobby__sub_803F7E50(s32 arg0, s32 arg1, s32 arg2, s32 n, s32 p) {
    s32 v;
    s32 ok;
    u32 len;
    s32 r;
    ok = 1;
    switch (arg0) {
    case 1: v = 1; break;
    case 2: v = 2; break;
    case 3: v = 3; break;
    case 4: v = 4; break;
    case 5: v = 5; break;
    case 0: v = 2; break;
    default: ok = 0; break;
    }
    if (ok != 0 && TAdSinglePlyChrSelectGC__sub_8042E57C(v) != 1) {
        return -1;
    }
    ok = 1;
    switch (arg1) {
    case 1: v = 1; break;
    case 2: v = 2; break;
    case 3: v = 3; break;
    case 0:
    default: ok = 0; break;
    }
    if (ok != 0 && TAdSinglePlyChrSelectGC__sub_8042E628(v) != 1) {
        return -1;
    }
    ok = 1;
    switch (arg2) {
    case 1: v = 1; break;
    case 2: v = 2; break;
    case 3: v = 3; break;
    case 4: v = 4; break;
    case 0:
    default: ok = 0; break;
    }
    if (ok != 0 && TAdSinglePlyChrSelectGC__sub_8042E6C4(v) != 1) {
        return -1;
    }
    while (n != 0) {
        len = TLobby__sub_803F9E84(p);
        if (len > 0x3FU) {
            return -1;
        }
        r = TAdSinglePlyChrSelectGC__sub_8042D49C(p);
        if (r != 1 && r != -8) {
            return -1;
        }
        p = len + p;
        p++;
        n--;
    }
    return 0;
}

s32 TLobby__sub_803F8044(s32 arg0) {
    s32 var_r3;
    if (arg0 == 0) {
        var_r3 = 1;
    } else {
        var_r3 = 2;
    }
    if (TAdSinglePlyChrSelectGC__sub_8042E7B8(var_r3) == 1) {
        return 0;
    }
    return -1;
}

void TLobby__sub_803F808C(void) {

}

s32 TLobby__sub_803F8090(void) {
    u8 buf[0x20];
    if (lbl_805D7A34 != 0) {
        if (lbl_805D47F0 < 0) {
            return 0;
        }
        TLobby__sub_80427D40(NULL, 0, NULL);
        if (TLobby__sub_80427D0C(lbl_805D47F0) == 4) {
            return 1;
        }
        return 0;
    }
    if (TAdSinglePlyChrSelectGC__sub_8042E768((u32)buf) == 3) {
        return 1;
    }
    return 0;
}

s32 TLobby__sub_803F811C(s16 *arg0) {
    *arg0 = 0;
    return 0;
}

void TLobby__sub_803F8238(void) {
    s32 var_r31;
    if ((s16) lbl_805D7A34 != 0) {
        if ((s16) lbl_805D47F0 >= 0) {
            TLobby__sub_80428094(lbl_805D47F0);
            var_r31 = 0;
loop_3:
            TLobby__sub_803F97E8(0xA);
            if ((TLobby__sub_80427D40(NULL, 0U, NULL) >= 0) && (TLobby__sub_80427D0C(lbl_805D47F0) != -1)) {
                var_r31 += 1;
                if (var_r31 < 0x12C) {
                    goto loop_3;
                }
            }
            if (TLobby__sub_80427D0C(lbl_805D47F0) != -1) {
                TLobby__sub_80428094(lbl_805D47F0);
            }
            lbl_805D47F0 = -1;
            goto block_10;
        }
    } else {
        TLobby__sub_803F9AEC(lbl_805D7A08);
        TLobby__sub_803F9B48((u32) lbl_805D7A08);
        TLobby__sub_803F95E4(lbl_805D7A0C);
block_10:
        if ((u32) (TAdSinglePlyChrSelectGC__sub_8042E768(0U) - 2) <= 1U) {
            TAdSinglePlyChrSelectGC__sub_8042D604();
        }
    }
}

s32 TLobby__sub_803F8314(A_803F8314 *arg0) {
    u8 *buf = lbl_805AECB0;
    char *name;
    s32 ret;
    if ((u32)lbl_805D7A10 == 0) {
        return 2;
    }
    if (arg0->flag != 0) {
        lbl_805D7A34 = 1;
        buf[0] = 0;
        buf[0x100] = 0;
        lbl_805D47F0 = TLobby__sub_804281DC(buf);
        if (lbl_805D47F0 < 0) {
            return 2;
        }
    } else {
        lbl_805D7A34 = 0;
        if (arg0->name != NULL) {
            name = arg0->name;
        } else {
            name = lbl_805E1148;
        }
        TUdpSocket__sub_803F95A4(lbl_805C18A0.value);
        ret = TAdSinglePlyChrSelectGC__sub_8042CEF8(name);
        TLobby__sub_803F95C4(lbl_805C18A0.value);
        if (ret == 1) {
            TAdSinglePlyChrSelectGC__sub_8042E488(5);
            if (TLobby__sub_803F96AC(&lbl_805D7A0C) < 0) {
                return 2;
            }
            if (TLobby__sub_803F9B94((void *)TLobby__sub_803F7AF4, &lbl_805D7A08) < 0) {
                return 2;
            }
            TLobby__sub_803F9B28(lbl_805D7A08);
        } else {
            return 2;
        }
    }
    return 0;
}

#pragma push
#pragma opt_common_subs off
u32 TLobby__sub_803F8440(u8 *arg0, s32 arg1, u32 arg2) {
    u32 temp_r3;
    lbl_805D7A10 = arg1;
    lbl_805D7A14 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r3 = arg1 + lbl_805D7A14;
    if (temp_r3 > arg2) {
        lbl_805D7A10 = 0;
        lbl_805D7A14 = 0;
        return 0U;
    }
    return temp_r3;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
s32 TLobby__sub_803F8470(u8 *data, s32 size) {
    H_803F8470 hdr;
    u32 end;
    u8 *p;
    s32 r;
    u32 q;
    end = (u32)(data + size);
    r = TLobby__sub_803F861C((int)&hdr);
    if (size < 0) {
        return -1;
    }
    if (size < r) {
        return -1;
    }
    lbl_805D7A40 = (u32)data;
    p = data + hdr.n1 * 0x44;
    if ((u32)p > end) {
        return -1;
    }
    lbl_805D7A44 = (u32)p;
    p += hdr.n2 * 0x544;
    if ((u32)p > end) {
        return -1;
    }
    q = TLobby__sub_803F8BA4((u8 *)&hdr, (u32)p, end);
    if (q == 0) {
        return -1;
    }
    if (hdr.b != 0 && TLobby__sub_803F8440((u8 *)&hdr, q, end) == 0) {
        return -1;
    }
    return 0;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
s32 TLobby__sub_803F8564(u8 *arg0) {
    s32 temp_r5;
    if ((u16) M2C_FIELD(arg0, u16 *, 4) > 0x200U) {
        return -1;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 6) > 0x400U) {
        return -1;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r5 < 0x400) || (temp_r5 > 0xFFFF)) {
        return -1;
    }
    lbl_805D47F8 = M2C_FIELD(arg0, s16 *, 0);
    lbl_805D4804 = M2C_FIELD(arg0, s16 *, 2);
    lbl_805D47FA = M2C_FIELD(arg0, u16 *, 4);
    lbl_805D47FC = M2C_FIELD(arg0, u16 *, 6);
    lbl_805D4800 = M2C_FIELD(arg0, s32 *, 8);
    lbl_805D4808 = M2C_FIELD(arg0, s32 *, 0xC);
    lbl_805D480C = M2C_FIELD(arg0, s32 *, 0x10);
    lbl_805D7A48 = M2C_FIELD(arg0, s32 *, 0x14);
    lbl_805D7A4C = M2C_FIELD(arg0, s32 *, 0x18);
    return TLobby__sub_803F861C((int) (0));
}
#pragma pop

void TLobby__sub_803F86BC(void) {

}
#pragma push
#pragma optimization_level 2
void TLobby__sub_803F86C0(Cfg_803F86C0 *c) {
    u8 *buf = lbl_805AEEB0;
    c->f0 = 0;
    c->f2 = 0x3F;
    c->f4 = 0xFF;
    c->f6 = 0x200;
    c->fA = 3;
    c->fC = &lbl_805D7A50;
    lbl_805D7A50.a = 2;
    lbl_805D7A50.b = 4;
    lbl_805D7A50.c = 8;
    c->f10 = 2;
    c->f14 = buf + 0x49A0;
    c->f1A = 6;
    c->f1C = 0x200;
    c->f20 = buf + 0x39A0;
    c->f24 = 8;
    c->f28 = buf + 0x3960;
    c->f2C = 0x20;
    c->f34 = buf + 0x3460;
    c->f2E = 0x10;
    c->f38 = buf + 0x13A0;
    c->f30 = 0x10;
    c->f3C = buf + 0x1E0;
    c->f40 = 8;
    c->f44 = buf;
}
#pragma pop

}
