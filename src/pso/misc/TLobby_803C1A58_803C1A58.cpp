#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803C0B08_lbl_80570AC0 {
    M2C_UNK value;
    u8 remaining[0x9BC];
};

struct RecoveredGlobal_803C0AD8_lbl_80570AC0 {
    M2C_UNK value;
    u8 remaining[0x9BC];
};

struct Obj_803C34F4 { u8 pad[0xA8]; s16 state; };

struct Obj_803C3ACC { u8 pad[0xA8]; s16 state; s16 sub; };

struct Hdl_803C43A8 {
    u8 pad0[2];
    s16 f2;
    u8 pad4[8];
    s8 fc;
    s8 fd;
    s8 fe;
    s8 ff;
    s32 f10;
    s32 f14;
    s32 f18;
    s16 f1c;
    u8 pad1e[2];
    s32 f20;
    s16 f24;
    s16 f26;
    s32 f28;
    s32 f2c;
    s32 f30;
    s32 f34;
    u8 pad38[4];
    s32 f3c;
    s32 f40;
    s32 f44;
    s16 f48;
    s16 f4a;
    u8 f4c[0xC];
    s32 f58;
    s32 f5c;
    s32 f60;
    s32 f64;
    s32 f68;
    s32 f6c;
    u8 pad70[0xC];
    s16 f7c;
    s16 f7e;
    u8 *f80;
    u8 pad84[0x14];
    s32 f98;
    s32 f9c;
    u8 padA0[8];
    s16 fa8;
    s16 faa;
};

struct Hdr_803C44C0 {
    u8 pad0[7];
    u8 f7;
    u8 f8;
    u8 f9;
    u8 padA[2];
    s32 fc;
    u8 pad10[0x1A];
    u16 f2a;
};

extern "C" {
void TLobby__sub_803C4020(u8 *arg0, s32 arg1, s32 arg2);
s8 TLobby__sub_803C3B38(u8 *arg0);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803CB71C(void);
extern RecoveredGlobal_803C0B08_lbl_80570AC0 lbl_80571480;
void TLobby__sub_803C406C(void);
int memcmp(const void *a, const void *b, unsigned long n);
extern const char lbl_805E0CE0[4];
s32 TLobby__sub_803C40A0(void *p);
int memcmp(const void *a, const void *b, unsigned long n);
extern s32 lbl_805E0CC0;
extern s32 lbl_805E0CC8;
s32 TLobby__sub_803C2328(u8 *arg0);
int memcmp(const void *a, const void *b, unsigned long n);
extern s32 lbl_805E0CD0;
extern s32 lbl_805E0CD8;
s32 TLobby__sub_803C328C(u8 *arg0);
void TLobby__sub_803C0B3C(void *);
void TLobby__sub_803C19D8(void *);
void dispatch_network_state__6TLobbyFPv(u8 *arg0);
void dispatch_by_state__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803C3570(void *);
void TLobby__sub_803C40D0(void *);
void TLobby__sub_803C34F4(Obj_803C34F4 *arg0);
s32 TLobby__sub_803C3ACC(Obj_803C3ACC *arg0);
s32 TLobby__sub_803C0B88(void *);
s32 DVDReadPrio(void *, void *, void *);
s32 TLobby__sub_803C2174(void *, void *, void *);
s32 TLobby__sub_803C2328(u8 *arg0);
s32 TLobby__sub_803C30E8(void *, void *, void *);
s32 TLobby__sub_803C328C(u8 *arg0);
s32 TRK__write_aram(void *, void *, void *);
s32 TLobby__sub_803C40A0(void *p);
s32 TLobby__sub_803C3B68(s32 arg0, u16 *arg1, s32 arg2);
M2C_UNK memset(void *, int, int);
s32 TLobby__sub_803C43A8(void *arg0, void *arg1, void *arg2);
s32 TLobby__sub_803C44C0(Hdr_803C44C0 *hdr, s32 arg1, s16 *arg2, s8 *arg3, s8 *arg4, s8 *arg5, s8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9, s16 *arg10);
}

extern "C" {

void TLobby__sub_803C3984(u8 *arg0);
void TLobby__sub_803C39CC(u8 *arg0);
void TLobby__sub_803C3A04(u8 *arg0);
s32 TLobby__sub_803C3ABC(u8 *arg0);
s32 TLobby__sub_803C3AC4(u8 *arg0);
s32 TLobby__sub_803C3B44(u8 *arg0);
void TLobby__sub_803C3B5C(u8 *arg0, s32 arg1, s32 arg2);
void clear_record__6TLobbyFPv(u8 *arg0);
void dispatch_by_state__6TLobbyFPv(u8 *arg0);
void dispatch_network_state__6TLobbyFPv(u8 *arg0);
s32 get_entry_id__6TLobbyFPv(u8 *arg0);
s32 get_field30__6TLobbyFPv(u8 *arg0);
s32 get_field_0x3c__6TLobbyFPv(u8 *arg0);
s32 get_field_0xa4__6TLobbyFPv(u8 *arg0);
s32 get_field_28__6TLobbyFPv(u8 *arg0);
s32 get_field_2c__6TLobbyFPv(u8 *arg0);
s32 get_field_34__6TLobbyFPv(u8 *arg0);
s32 get_field_a0__6TLobbyFPv(u8 *arg0);
s16 get_field_a8__6TLobbyFPv(u8 *arg0);
s32 get_progress_info__6TLobbyFPvPvPvPv(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3);
s16 get_slot__6TLobbyFPv(u8 *arg0);
void init_scroll__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_803C1A8C();
M2C_UNK TLobby__sub_803C1DC4();
M2C_UNK TLobby__sub_803C263C();
M2C_UNK TLobby__sub_803C2A00();
M2C_UNK TLobby__sub_803C2D38();
M2C_UNK clear_record_data__6TLobbyFPv(int);
M2C_UNK memset(void *, int, int);
M2C_UNK reset_client_state__6TLobbyFPv(int);
M2C_UNK reset_field_0C__6TLobbyFPv(int);

void dispatch_network_state__6TLobbyFPv(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0xAA) == 1) {
        TLobby__sub_803C1A8C();
        return;
    }
    TLobby__sub_803C1DC4();
}

s32 TLobby__sub_803C2328(u8 *arg0) {
    if (((s32)memcmp((const void *)(arg0), (const void *)(&lbl_805E0CC0), (unsigned long)(4))) == 0 && ((s32)memcmp((const void *)(arg0 + 8), (const void *)(&lbl_805E0CC8), (unsigned long)(4))) == 0) {
        return 1;
    }
    return 0;
}

void dispatch_by_state__6TLobbyFPv(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xAA);
    if (temp_r0 == 2) {
        TLobby__sub_803C263C();
        return;
    }
    if (temp_r0 == 1) {
        TLobby__sub_803C2A00();
        return;
    }
    TLobby__sub_803C2D38();
}

s32 TLobby__sub_803C328C(u8 *arg0) {
    if (((s32)memcmp((const void *)(arg0), (const void *)(&lbl_805E0CD0), (unsigned long)(4))) == 0 || ((s32)memcmp((const void *)(arg0), (const void *)(&lbl_805E0CD8), (unsigned long)(4))) == 0) {
        return 1;
    }
    return 0;
}

void TLobby__sub_803C34F4(Obj_803C34F4 *arg0) {
    s16 s = arg0->state;
    if (s == 0) {
        TLobby__sub_803C3570(arg0);
    } else if (s == 10) {
        TLobby__sub_803C19D8(arg0);
    } else if (s == 2) {
        TLobby__sub_803C40D0(arg0);
    } else if (s == 3) {
        dispatch_network_state__6TLobbyFPv((u8 *)(arg0));
    } else if (s == 4) {
        dispatch_by_state__6TLobbyFPv((u8 *)(arg0));
    } else if (s == 1) {
        TLobby__sub_803C0B3C(arg0);
    }
}

s32 get_field_a0__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA0);
}

s32 get_field_0xa4__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void TLobby__sub_803C3984(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 3) {
        reset_field_0C__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

void TLobby__sub_803C39CC(u8 *arg0) {
    reset_client_state__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void TLobby__sub_803C3A04(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 1;
    }
}

void init_scroll__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s16 *, 0xA8) == 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = arg1;
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (arg2 / (s8) M2C_FIELD(arg0, u8 *, 0xF));
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (arg2 / (s32) (((s8) M2C_FIELD(arg0, u8 *, 0xD) / 8) * (s8) M2C_FIELD(arg0, u8 *, 0xE)));
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
}

s32 get_entry_id__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 get_field_34__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 get_field30__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 get_field_2c__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 get_field_28__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s16 get_slot__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x24);
}

s32 TLobby__sub_803C3ABC(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 TLobby__sub_803C3AC4(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 TLobby__sub_803C3ACC(Obj_803C3ACC *arg0) {
    s16 s = arg0->state;
    if (s == 0) {
        return 0x10;
    }
    if (s == 2) {
        if (arg0->sub == 2) {
            return 4;
        }
        if (arg0->sub == 1) {
            return 8;
        }
        return 0x10;
    }
    if (s == 1) {
        if (arg0->sub == 2) {
            return 4;
        }
        return 0x10;
    }
    return 0x10;
}

s8 TLobby__sub_803C3B38(u8 *arg0) {
  s8 *new_var3;
  unsigned int new_var2;
  s8 *new_var4;
  u8 new_var;
  new_var4 = (s8 *) arg0;
  new_var3 = 0xE + new_var4;
  new_var = (*((u8 *) new_var3)) & 0xFFFFFFFFFFFFFFFFu;
  ;
  return (s8) (new_var & 0xFF);
}

s32 TLobby__sub_803C3B44(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s16 get_field_a8__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xA8);
}

s32 get_field_0x3c__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

void TLobby__sub_803C3B5C(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    M2C_FIELD(arg0, s32 *, 0x8C) = arg2;
}

s32 TLobby__sub_803C3B68(s32 arg0, u16 *arg1, s32 arg2) {
    if ((u16) M2C_FIELD(arg1, u16 *, 0) == 0x8000) {
        return TRK__write_aram((void *)arg0, arg1, (void *)arg2);
    }
    if (TLobby__sub_803C40A0((void *) (arg1)) != 0) {
        return TLobby__sub_803C43A8((void *)((void *) (arg0)), (void *)((void *) (arg1)), (void *)((void *) (arg2)));
    }
    if (TLobby__sub_803C0B88((void *) (arg1)) != 0) {
        return DVDReadPrio((void *) (arg0), (void *) (arg1), (void *) (arg2));
    }
    if (TLobby__sub_803C2328((u8 *) (arg1)) != 0) {
        return TLobby__sub_803C2174((void *) (arg0), (void *) (arg1), (void *) (arg2));
    }
    if (TLobby__sub_803C328C((u8 *) (arg1)) != 0) {
        return TLobby__sub_803C30E8((void *) (arg0), (void *) (arg1), (void *) (arg2));
    }
    return 0;
}

void clear_record__6TLobbyFPv(u8 *arg0) {
    if (arg0 != NULL) {
        clear_record_data__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
        memset((void *) (arg0), (int) (0), (int) (0xB8));
        M2C_FIELD(arg0, s16 *, 0) = 0;
    }
}

void TLobby__sub_803C4020(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) + arg2);
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) (M2C_FIELD(arg0, s32 *, 0x98) + arg2);
}

s32 get_progress_info__6TLobbyFPvPvPvPv(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x9C);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x40) - M2C_FIELD(arg0, s32 *, 0x9C);
    *arg3 = M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(arg0, s32 *, 0x98);
    return M2C_FIELD(arg0, s32 *, 0x3C);
}
typedef char RecoveredGlobal_803C0B08_lbl_80570AC0_size[sizeof(RecoveredGlobal_803C0B08_lbl_80570AC0) == 0x9C0 ? 1 : -1];
typedef char RecoveredGlobal_803C0AD8_lbl_80570AC0_size[sizeof(RecoveredGlobal_803C0AD8_lbl_80570AC0) == 0x9C0 ? 1 : -1];
void TLobby__sub_803C406C(void) {
    TLobby__sub_803CB71C();
    memset((void *) (&lbl_80571480.value), (int) (0), (int) (0xb80));
}
s32 TLobby__sub_803C40A0(void *p) {
    if (memcmp(p, lbl_805E0CE0, 4) == 0) {
        return 1;
    }
    return 0;
}
struct Hdr_803C44C0;
s32 TLobby__sub_803C43A8(void *arg0, void *arg1, void *arg2) {
    Hdl_803C43A8 *h = (Hdl_803C43A8 *)arg0;
    s16 n;
    h->f2 = 1;
    if (TLobby__sub_803C44C0((Hdr_803C44C0 *)((Hdr_803C44C0 *)arg1), (s32)((s32)arg2), (s16 *)(&n), (s8 *)(&h->fc), (s8 *)(&h->fd), (s8 *)(&h->ff), (s8 *)(&h->fe), (s32 *)(&h->f14), (s32 *)(&h->f18), (s32 *)(&h->f10), (s16 *)(&h->faa)) < 0) {
        return 0;
    }
    h->f1c = 0;
    h->f4a = 0;
    h->f48 = 0;
    h->f26 = 0;
    h->f24 = 0;
    h->f34 = 0;
    h->f30 = 0;
    h->f2c = 0;
    h->f28 = 0;
    h->f20 = 0;
    h->f58 = h->fe;
    h->f5c = h->ff;
    h->f60 = h->f10;
    h->f64 = h->f3c;
    h->f68 = h->f40;
    h->f6c = h->f44;
    h->f7c = h->f48;
    h->f7e = h->f4a;
    h->f80 = h->f4c;
    h->f9c = 0;
    h->f98 = 0;
    h->fa8 = 2;
    memset((void *)(h->f4c), (int)(0), (int)(4));
    return n;
}
s32 TLobby__sub_803C44C0(Hdr_803C44C0 *hdr, s32 arg1, s16 *arg2, s8 *arg3, s8 *arg4, s8 *arg5, s8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9, s16 *arg10) {
    *arg2 = hdr->f7 * 0x10;
    *arg6 = (hdr->f9 & 3) + 1;
    *arg7 = hdr->f2a;
    switch (hdr->f8) {
    case 0:
        *arg4 = 0x10;
        *arg5 = *arg6 * 2;
        *arg9 = 1;
        *arg8 = hdr->fc / 2;
        *arg10 = 0;
        break;
    case 1:
        *arg4 = 8;
        *arg5 = *arg6;
        *arg9 = 1;
        *arg8 = hdr->fc;
        *arg10 = 1;
        break;
    case 2:
    case 3:
        *arg4 = 4;
        *arg5 = *arg6;
        *arg9 = 2;
        *arg8 = hdr->fc * 2;
        *arg10 = 2;
        break;
    }
    *arg5 = 2;
    *arg9 = 1;
    *arg8 = hdr->fc / 2;
    *arg4 = 0x10;
    *arg3 = -1;
    return 0;
}

}
