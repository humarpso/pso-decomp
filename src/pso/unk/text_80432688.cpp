#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8043395C_lbl_805D2200 {
    M2C_UNK value;
    u8 remaining[0x3FC];
};

struct RecoveredGlobal_80432688_lbl_805D2200 {
    M2C_UNK value;
    u8 remaining[0x3FC];
};

struct RecoveredGlobal_80433890_lbl_805D2200 {
    M2C_UNK value;
    u8 remaining[0x3FC];
};

typedef s32 M2C_UNK;
struct RecoveredGlobal_80433C94_lbl_805D2200 {
    M2C_UNK value;
    u8 remaining[0x3FC];
};

struct Ent_80433C94 { u8 pad[0x30]; u64 v; u8 pad2[0xC8]; };

struct Ent_80432780 { s8 type; u8 pad1[0x13]; s32 f14; u8 pad2[4]; u32 f1C; u8 pad3[0xE0]; };

struct Ent_804327E4 { u8 type; u8 pad1[0x13]; s32 f14; u8 pad2[4]; u32 f1C; u8 pad3[0xE0]; };

struct Sub_80432D50 { u8 pad0[0x10]; u8 *p10; void (*cb)(s32, s32); u8 pad18[0x10]; s32 f28; s32 f2C; };

struct Ent_80432D50 { u8 pad0[0x20]; s32 f20; u8 pad24[0x1C]; Sub_80432D50 sub; };

struct Sub_80433810 { u8 pad0[0x10]; u8 *p10; void (*cb)(s32, s32); u8 pad18[0x10]; s32 f28; s32 f2C; };

struct Ent_80433810 { u8 pad0[0x20]; s32 f20; u8 pad24[0x1C]; Sub_80433810 sub; };

struct Ent_804338F0 { s8 type; u8 pad1[0x13]; s32 f14; s32 f18; u32 f1C; u8 pad3[0xE0]; };

struct Ent_80433C20 { u8 pad0[0xC]; s32 f0C; s32 f10; u8 pad14[0x24]; s32 f38; u8 pad3C[0xC4]; };

struct Sub_80432B08 { u8 pad0[0x10]; s32 f10; void (*cb)(s32, s32); u8 pad18[0x10]; s32 f28; s32 f2C; };

struct Ent_80432B08 { u8 pad0[0x20]; s32 f20; u8 pad24[0x1C]; Sub_80432B08 sub; };

struct Ent_8043398C { s8 type; u8 data[0x13]; s32 f14; s32 f18; u32 f1C; u8 pad3[0xE0]; };

extern "C" {
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_8043395C(s32 arg0);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_80432688(s32 arg0);
extern s32 lbl_805D7CF8;
s32 TLobby__sub_80432848(void);
M2C_UNK memcpy(int, void *, int);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_80433890(s32 arg0);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
u64 TLobby__sub_80433C94(s32 i, u64 v);
void TLobby__sub_80432688(s32 arg0);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
s32 TLobby__sub_80432780(s32 arg0, s32 arg1, u32 arg2);
void TLobby__sub_80432688(s32 arg0);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
s32 TLobby__sub_804327E4(s32 arg0, s32 arg1, u32 arg2);
void TLobby__sub_80433E3C(s32, void *);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_80432D50(s32 arg0, s32 arg1);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_80433810(s32 arg0, s32 arg1);
void TLobby__sub_80433890(s32 arg0);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
s32 TLobby__sub_804338F0(s32 arg0, s32 arg1, s32 arg2, u32 arg3);
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(s32);
void Dolphin_SIGetTypeAsync(s32, void *);
void TLobby__sub_80433AFC(void);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
s32 TLobby__sub_80433C20(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TLobby__sub_804327E4(s32 arg0, s32 arg1, u32 arg2);
void TLobby__sub_80432BB0(s32, s32);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_80432B08(s32 arg0, s32 arg1);
M2C_UNK memcpy(int, void *, int);
s32 TLobby__sub_80433C20(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_8043395C(s32 arg0);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
s32 TLobby__sub_8043398C(s32 arg0, s32 arg1, s32 arg2, u32 arg3);
}

extern "C" {

typedef char RecoveredGlobal_8043395C_lbl_805D2200_size[sizeof(RecoveredGlobal_8043395C_lbl_805D2200) == 0x400 ? 1 : -1];

typedef char RecoveredGlobal_80432688_lbl_805D2200_size[sizeof(RecoveredGlobal_80432688_lbl_805D2200) == 0x400 ? 1 : -1];
void TLobby__sub_80432688(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)&(*(RecoveredGlobal_80432688_lbl_805D2200 *)&lbl_805D2200).value + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) == 0) {
        if (((u8) M2C_FIELD(temp_r3, u8 *, 5) != 0) || ((u8) M2C_FIELD(temp_r3, u8 *, 6) != 4)) {
            M2C_FIELD(temp_r3, s32 *, 0x20) = 1;
            return;
        }
        *M2C_FIELD(temp_r3, s8 **, 0x14) = M2C_FIELD(temp_r3, u8 *, 7) & 0x3A;
    }
}

s32 TLobby__sub_80432780(s32 arg0, s32 arg1, u32 arg2) {
    Ent_80432780 *e = (Ent_80432780 *)(((u8 *)&lbl_805D2200) + (arg0 << 8));
    if (e->f1C != 0) {
        return 2;
    }
    e->type = 0;
    e->f14 = arg1;
    e->f1C = arg2;
    return TLobby__sub_80433C20((s32)(arg0), (s32)(1), (s32)(3), (s32)((s32)TLobby__sub_80432688));
}

s32 TLobby__sub_804327E4(s32 arg0, s32 arg1, u32 arg2) {
    Ent_804327E4 *e = (Ent_804327E4 *)(((u8 *)&lbl_805D2200) + (arg0 << 8));
    if (e->f1C != 0) {
        return 2;
    }
    e->type = 0xFF;
    e->f14 = arg1;
    e->f1C = arg2;
    return TLobby__sub_80433C20((s32)(arg0), (s32)(1), (s32)(3), (s32)((s32)TLobby__sub_80432688));
}

s32 TLobby__sub_80432848(void) {
    lbl_805D7CF8 = 1;
    return 1;
}

typedef char RecoveredGlobal_80433890_lbl_805D2200_size[sizeof(RecoveredGlobal_80433890_lbl_805D2200) == 0x400 ? 1 : -1];

void TLobby__sub_80432B08(s32 arg0, s32 arg1) {
    Ent_80432B08 *e = (Ent_80432B08 *)(((u8 *)&lbl_805D2200) + (arg0 << 8));
    Sub_80432B08 *s = &e->sub;
    if (arg1 != 0 || (arg1 = TLobby__sub_804327E4(arg0, s->f10, (u32)TLobby__sub_80432BB0)) != 0) {
        s->f2C = 0;
        s->f28 = 0;
        if (s->cb != 0) {
            void (*cb)(s32, s32) = s->cb;
            s->cb = 0;
            cb(arg0, arg1);
        }
    }
    e->f20 = arg1;
}

void TLobby__sub_80432D50(s32 arg0, s32 arg1) {
    Ent_80432D50 *e = (Ent_80432D50 *)(((u8 *)&lbl_805D2200) + (arg0 << 8));
    Sub_80432D50 *s = &e->sub;
    if (arg1 == 0) {
        TLobby__sub_80433E3C(arg0, (u8 *)s + 0x18);
    } else {
        s->f2C = 0;
        s->f28 = 0;
        if (s->cb != 0) {
            void (*cb)(s32, s32) = s->cb;
            s->cb = 0;
            cb(arg0, arg1);
        }
    }
    e->f20 = arg1;
}

void TLobby__sub_80433810(s32 arg0, s32 arg1) {
    Ent_80433810 *e = (Ent_80433810 *)(((u8 *)&lbl_805D2200) + (arg0 << 8));
    Sub_80433810 *s = &e->sub;
    if (arg1 == 0) {
        *s->p10 = 0;
    }
    s->f2C = 0;
    s->f28 = 0;
    if (s->cb != 0) {
        void (*cb)(s32, s32) = s->cb;
        s->cb = 0;
        cb(arg0, arg1);
    }
    e->f20 = arg1;
}

void TLobby__sub_80433890(s32 arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&(*(RecoveredGlobal_80433890_lbl_805D2200 *)&lbl_805D2200).value + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x20) == 0) {
        memcpy((int) (M2C_FIELD(temp_r31, s32 *, 0x18)), (void *) (temp_r31 + 5), (int) (4));
        *M2C_FIELD(temp_r31, s8 **, 0x14) = M2C_FIELD(temp_r31, u8 *, 9) & 0x3A;
    }
}

s32 TLobby__sub_804338F0(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    Ent_804338F0 *e = (Ent_804338F0 *)(((u8 *)&lbl_805D2200) + (arg0 << 8));
    if (e->f1C != 0) {
        return 2;
    }
    e->type = 0x14;
    e->f18 = arg1;
    e->f14 = arg2;
    e->f1C = arg3;
    return TLobby__sub_80433C20((s32)(arg0), (s32)(1), (s32)(5), (s32)((s32)TLobby__sub_80433890));
}

void TLobby__sub_8043395C(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)&lbl_805D2200.value + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) == 0) {
        *M2C_FIELD(temp_r3, s8 **, 0x14) = M2C_FIELD(temp_r3, u8 *, 5) & 0x3A;
    }
}

s32 TLobby__sub_8043398C(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    Ent_8043398C *e = (Ent_8043398C *)(((u8 *)&lbl_805D2200) + (arg0 << 8));
    if (e->f1C != 0) {
        return 2;
    }
    e->type = 0x15;
    memcpy((int)e->data, (void *)arg1, 4);
    e->f18 = arg1;
    e->f14 = arg2;
    e->f1C = arg3;
    return TLobby__sub_80433C20(arg0, 5, 1, (s32)TLobby__sub_8043395C);
}

s32 TLobby__sub_80433C20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ints;
    Ent_80433C20 *e = (Ent_80433C20 *)(((u8 *)&lbl_805D2200) + (arg0 << 8));
    ints = OSDisableInterrupts();
    e->f38 = arg3;
    e->f0C = arg1;
    e->f10 = arg2;
    Dolphin_SIGetTypeAsync(arg0, (void *)TLobby__sub_80433AFC);
    OSRestoreInterrupts(ints);
    return 0;
}

u64 TLobby__sub_80433C94(s32 i, u64 v) {
    Ent_80433C94 *e = &((Ent_80433C94 *)&lbl_805D2200)[i];
    u64 old = e->v;
    e->v = v;
    return old;
}

}
