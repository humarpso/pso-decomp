#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803C90B0_lbl_80575140 {
    M2C_UNK value;
    u8 remaining[0x9FC];
};

struct RecoveredGlobal_803C6830_lbl_80573AC0 {
    M2C_UNK value;
    u8 remaining[0x167C];
};

struct RecoveredGlobal_803C6800_lbl_80573AC0 {
    M2C_UNK value;
    u8 remaining[0x167C];
};

typedef s32 M2C_UNK;
typedef struct S_803C6138 {
    u8 pad0[0x80];
    u8 *f80;
    u8 *f84;
} S_803C6138;

extern "C" {
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
void TLobby__sub_803CEFC8(void *);
void TLobby__sub_803C89C4(u8 *arg0);
s32 TLobby__sub_803CF1A8(int);
s32 TLobby__sub_803C8A98(u8 *arg0);
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
void TLobby__sub_803CEFC8(void *);
void TLobby__sub_803CF250(void *);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803C8B38(u8 *arg0);
short TLobby__sub_803C8B2C(u8 *arg0);
M2C_UNK TLobby__sub_803C57C8(void *);
void TLobby__sub_803C5B2C(M2C_UNK arg0, s32 arg1);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C90B0_lbl_80575140 lbl_80575140;
s32 TLobby__sub_803C90B0(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C6830_lbl_80573AC0 lbl_80573AC0;
void TLobby__sub_803C6830(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C6830_lbl_80573AC0 lbl_80573AC0;
void TLobby__sub_803C6800(void);
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
void TLobby__sub_803C9DB4(void *);
void TLobby__sub_803CA0C8(void *, s32);
void TLobby__sub_803D0FD0(void *, s32);
void TLobby__sub_803D158C(void *);
void TLobby__sub_803C5D24(u8 *arg0);
s32 TLobby__sub_803C7748(void *);
s32 DVDLowRead(void *);
void TLobby__sub_803C6064(u8 *arg0);
s32 TLobby__sub_803CF1A8(int);
s32 TLobby__sub_803C85AC(u8 *arg0, s32 *arg1);
s32 TLobby__sub_803C9284(u16 *p, s32 size, s32 *out);
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803C6138(S_803C6138 *arg0);
s32 ARStartDMA(u8 *arg0, s32 arg1, s16 *arg2, u8 *arg3, s8 *arg4, s8 *arg5, u8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9);
s32 DVDLowSeek(u16 *arg0, s32 arg1, s32 *arg2);
}

extern "C" {

void TLobby__sub_803C5D00(u8 *arg0);
void TLobby__sub_803C5E58(void);
void TLobby__sub_803C5E68(void);
void TLobby__sub_803C60F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_803C610C(u8 *arg0);
void TLobby__sub_803C6118(u8 *arg0);
void TLobby__sub_803C8514(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C8578(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C8594(u8 *arg0, s32 *arg1, s32 *arg2);
s32 ar_alloc__6TLobbyFv(void);
s32 get_field_14__6TLobbyFPv(u8 *arg0);
s32 get_state_zero__6TLobbyFv(void);
void on_set_mode__6TLobbyFv(void);
s32 process_connection_state__6TLobbyFv(void);
void set_buffer__6TLobbyFPvPv(u8 *arg0, void **arg1);
void set_coords__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
void set_field_10_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_range__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 set_scroll_offset__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_scroll_position__6TLobbyFPvi(u8 *arg0, s32 arg1);
void si_get_type_async__6TLobbyFv(void);
M2C_UNK ARAlloc();
M2C_UNK SIGetTypeAsync();
M2C_UNK TLobby__sub_803C9608();
s32 TLobby__sub_803CB844();
M2C_UNK TLobby__sub_803CBA38();
M2C_UNK TLobby__sub_803CE240();
M2C_UNK TLobby__sub_803CF100(int, int, int);
s32 TLobby__sub_803CF1A8(int);
M2C_UNK TLobby__sub_803D13C0(int);
M2C_UNK TLobby__sub_803D1444();
M2C_UNK set_global_805D7520__6TLobbyFi();

s32 ar_alloc__6TLobbyFv(void) {
    ARAlloc();
    return 0;
}

s32 get_state_zero__6TLobbyFv(void) {
    TLobby__sub_803C9608();
    return 0;
}

s32 process_connection_state__6TLobbyFv(void) {
    if (TLobby__sub_803CB844() == 1) {
        TLobby__sub_803D1444();
        TLobby__sub_803CE240();
    } else {
        TLobby__sub_803CBA38();
        TLobby__sub_803D1444();
        TLobby__sub_803CE240();
    }
    return 0;
}

void TLobby__sub_803C5B2C(M2C_UNK arg0, s32 arg1) {
    TLobby__sub_803C57C8((void *) (arg1));
}

void TLobby__sub_803C5D00(u8 *arg0) {
    TLobby__sub_803D13C0((int) (M2C_FIELD(arg0, s32 *, 0x94)));
}

extern s32 lbl_805D7548;

void TLobby__sub_803C5D24(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[2]; s8 field_2; u8 pad_3[13]; s32 field_10; void ** field_14; u8 pad_18[38]; s16 field_3E; u8 pad_40[84]; u8 * field_94; s8 field_98; };
    void **temp_r3;
    u8 *temp_r31;
    u8 *temp_r4;
    temp_r31 = (u8 *)(((Fields_arg0*)arg0)->field_94);
    TLobby__sub_803C9DB4(arg0);
    init_once__6TLobbyFv();
    TLobby__sub_803CA0C8(arg0, ((Fields_arg0*)arg0)->field_10);
    temp_r3 = (void **)(((Fields_arg0*)arg0)->field_14);
    temp_r4 = (u8 *)(*temp_r3);
    M2C_FIELD(temp_r4, M2C_UNK (**)(void **, void *), 0x14)(temp_r3, temp_r4);
    ((Fields_arg0*)arg0)->field_2 = 4;
    TLobby__sub_803D0FD0(temp_r31, ((Fields_arg0*)arg0)->field_3E << 0xB);
    TLobby__sub_803D158C(temp_r31);
    ((Fields_arg0*)arg0)->field_98 = 1;
    release_ref__6TLobbyFv();
}

void TLobby__sub_803C5E58(void) {
    lbl_805D7548 -= 1;
}

extern s32 lbl_805D7548;

void TLobby__sub_803C5E68(void) {
    lbl_805D7548 += 1;
}

void TLobby__sub_803C6064(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[1]; s8 field_1; u8 pad_2[1]; u8 field_3; u8 pad_4[40]; s32 field_2C; s32 field_30; u8 pad_34[8]; s32 field_3C; };
    s32 temp_r3;
loop_1:
    if ((s8) ((Fields_arg0*)arg0)->field_3 == 0) {
loop_2:
        temp_r3 = DVDLowRead(arg0);
        if (temp_r3 != 0) {
            ((Fields_arg0*)arg0)->field_2C = (s32) (((Fields_arg0*)arg0)->field_2C + temp_r3);
            if ((s32) ((Fields_arg0*)arg0)->field_30 >= (s32) ((Fields_arg0*)arg0)->field_3C) {
                ((Fields_arg0*)arg0)->field_3 = 1U;
                goto loop_1;
            }
            goto loop_2;
        }
    } else if (TLobby__sub_803C7748(arg0) > 0) {
        ((Fields_arg0*)arg0)->field_1 = 3;
    }
}

void TLobby__sub_803C60F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x60) = arg3;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x11C;
}

void TLobby__sub_803C610C(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 1;
}

void TLobby__sub_803C6118(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 1;
}

typedef char RecoveredGlobal_803C6830_lbl_80573AC0_size[sizeof(RecoveredGlobal_803C6830_lbl_80573AC0) == 0x1680 ? 1 : -1];

typedef char RecoveredGlobal_803C6800_lbl_80573AC0_size[sizeof(RecoveredGlobal_803C6800_lbl_80573AC0) == 0x1680 ? 1 : -1];

void TLobby__sub_803C6138(S_803C6138 *arg0) {
    u8 *p;
    if (arg0 != NULL) {
        init_once__6TLobbyFv();
        p = arg0->f80;
        if (p != NULL && p != NULL) {
            *p = 0;
            memset(p, 0, 0x90);
        }
        p = arg0->f84;
        if (p != NULL && p != NULL) {
            *p = 0;
            memset(p, 0, 0x90);
        }
        memset(arg0, 0, 4);
        release_ref__6TLobbyFv();
    }
}

void TLobby__sub_803C6800(void) {
    memset((void *) (&(*(RecoveredGlobal_803C6800_lbl_80573AC0 *)&lbl_80573AC0).value), (int) (0), (int) (0x1680));
}

void TLobby__sub_803C6830(void) {
    memset((void *) (&lbl_80573AC0.value), (int) (0), (int) (0x1680));
}

void set_field_10_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    TLobby__sub_803CF100((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10)), (int) (0));
    TLobby__sub_803CF1A8((int)((int) (M2C_FIELD(arg0, s32 *, 8))));
}

void TLobby__sub_803C8514(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg1 << 0xB);
}

void set_buffer__6TLobbyFPvPv(u8 *arg0, void **arg1) {
    s32 temp_r3;
    u8 *temp_r5;

    M2C_FIELD(arg0, void ***, 4) = arg1;
    temp_r5 = (unsigned char *) (*arg1);
    temp_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(arg1, 0, temp_r5);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3;
}

s32 get_field_14__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 TLobby__sub_803C8578(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    return 1;
}

s32 set_range__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    return 1;
}

s32 TLobby__sub_803C8594(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x1C);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x18);
    return 1;
}

s32 TLobby__sub_803C85AC(u8 *arg0, s32 *arg1) {
    struct Fields_arg0 { u8 pad_0[8]; u8 * field_8; s32 field_C; s32 field_10; };
    s32 var_r4;
    u8 *temp_r3;
    temp_r3 = (u8 *)(((Fields_arg0*)arg0)->field_8);
    if (temp_r3 != NULL) {
        var_r4 = TLobby__sub_803CF1A8((int)(temp_r3)) - ((Fields_arg0*)arg0)->field_10;
    } else {
        var_r4 = 0;
    }
    *arg1 = var_r4 - ((Fields_arg0*)arg0)->field_C;
    return 1;
}

void set_scroll_position__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x14) + 0x7FF) / 2048);
}

void set_coords__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
}

void TLobby__sub_803C89C4(u8 *arg0) {
    u8 *temp_r3;
    M2C_FIELD(arg0, s8 *, 1) = 1;
    init_once__6TLobbyFv();
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
    if (temp_r3 != NULL) {
        TLobby__sub_803CEFC8(temp_r3);
        M2C_FIELD(arg0, s8 *, 2) = 0;
    }
    release_ref__6TLobbyFv();
}

s32 TLobby__sub_803C8A98(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
    if (temp_r3 != NULL) {
        return TLobby__sub_803CF1A8((int)(temp_r3)) - M2C_FIELD(arg0, s32 *, 0x10);
    }
    return 0;
}

s32 set_scroll_offset__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    TLobby__sub_803CF100((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10) + arg1), (int) (0));
    return TLobby__sub_803CF1A8((int)((int) (M2C_FIELD(arg0, s32 *, 8)))) - M2C_FIELD(arg0, s32 *, 0x10);
}

short TLobby__sub_803C8B2C(u8 *arg0) {
  u8 *new_var;
  s8 *new_var2;
  new_var = arg0;
  new_var2 = ((s8 *) new_var) + 1;
  return *new_var2;
}

void TLobby__sub_803C8B38(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 1) = 1;
        init_once__6TLobbyFv();
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
        if (temp_r3 != NULL) {
            TLobby__sub_803CEFC8(temp_r3);
            M2C_FIELD(arg0, s8 *, 2) = 0;
        }
        release_ref__6TLobbyFv();
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
        if (temp_r3_2 != NULL) {
            TLobby__sub_803CF250(temp_r3_2);
        }
        memset((void *) (arg0), (int) (0), (int) (0x40));
    }
}

void si_get_type_async__6TLobbyFv(void) {
    SIGetTypeAsync();
}

typedef char RecoveredGlobal_803C90B0_lbl_80575140_size[sizeof(RecoveredGlobal_803C90B0_lbl_80575140) == 0xA00 ? 1 : -1];
s32 TLobby__sub_803C90B0(void) {
    memset((void *) (&lbl_80575140.value), (int) (0), (int) (0xA00));
    return 1;
}

void on_set_mode__6TLobbyFv(void) {
    set_global_805D7520__6TLobbyFi();
}
s32 TLobby__sub_803C9284(u16 *p, s32 size, s32 *out) {
    if (size < 2) {
        return 0;
    }
    if (*p != 0x8001) {
        return 0;
    }
    *out = size;
    return 1;
}
s32 DVDLowSeek(u16 *arg0, s32 arg1, s32 *arg2) {
    s32 a7;
    s32 a8;
    s32 a9;
    s16 len;
    u8 b3;
    s8 b4;
    s8 b5;
    u8 b6;
    if (arg1 < 2) {
        return 0;
    }
    if (*arg0 != 0x8000) {
        return 0;
    }
    if (ARStartDMA((u8 *)arg0, arg1, &len, &b3, &b4, &b5, &b6, &a7, &a8, &a9) < 0) {
        return 0;
    }
    *arg2 = len;
    return 1;
}

}
