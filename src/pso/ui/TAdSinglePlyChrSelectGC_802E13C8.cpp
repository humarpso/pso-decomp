#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802E14B8_lbl_804C89BC {
    M2C_UNK value;
    u8 remaining[0x74];
};

struct RecoveredGlobal_802E14F0_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_802E1560_lbl_804C89BC {
    M2C_UNK value;
    u8 remaining[0x74];
};

struct RecoveredGlobal_802E1594_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_802E1868_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802E1868_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
int TAdSinglePlyChrSelectGC__sub_802E1A8C(void*, void*, void*, void*, void*);
void TAdSinglePlyChrSelectGC__sub_802E1A04(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
extern RecoveredGlobal_802E14B8_lbl_804C89BC lbl_804C89BC;
s32 TAdSinglePlyChrSelectGC__sub_802E14B8(void);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
extern RecoveredGlobal_802E14F0_lbl_804C88C0 lbl_804C88C0;
s32 TAdSinglePlyChrSelectGC__sub_802E14F0(void);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
extern RecoveredGlobal_802E14B8_lbl_804C89BC lbl_804C89BC;
s32 TAdSinglePlyChrSelectGC__sub_802E1560(void);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
extern RecoveredGlobal_802E14F0_lbl_804C88C0 lbl_804C88C0;
s32 TAdSinglePlyChrSelectGC__sub_802E1594(void);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
extern RecoveredGlobal_802E1868_lbl_8050E208 lbl_8050E208;
extern RecoveredGlobal_802E1868_lbl_8050E3B8 lbl_8050E3B8;
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
extern RecoveredGlobal_802E14B8_lbl_804C89BC lbl_804C8914;
s32 TAdSinglePlyChrSelectGC__sub_802E1528(void);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
extern RecoveredGlobal_802E14B8_lbl_804C89BC lbl_804C8914;
s32 TAdSinglePlyChrSelectGC__sub_802E15C8(void);
}

extern "C" {

void *TAdSinglePlyChrSelectGC__sub_802E13C8(void *arg0, s16 arg1);
int TAdSinglePlyChrSelectGC__sub_802E18C8(void);
void apply_settings__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4);
void close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4);
void close_windows__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void *create__23TAdSinglePlyChrSelectGCFv(void);
void create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void *init_object__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *);
s32 is_load_complete__23TAdSinglePlyChrSelectGCFv(void);
s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E24F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdPlyStatusGC__sub_802E11BC(void *);
s32 TAdSinglePlyChrSelectGC__sub_801FF310();
s32 TAdSinglePlyChrSelectGC__sub_801FF384();
s32 TAdSinglePlyChrSelectGC__sub_801FF3F4();
int TAdSinglePlyChrSelectGC__sub_802E1A8C(void*, void*, void*, void*, void*);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(s32 a0 = 0, s32 a1 = 0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802E1F14(void *);
int TKeyBoardControl__sub_8000F9CC(void*);
s32 TLobby__sub_8022614C(s32 a0 = 0);
s32 TLobby__sub_802261E0(s16 a0 = 0);
s32 TLobby__sub_80226328(void);
M2C_UNK TWindow__close(void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__ct__9TAdBackGCFv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 fn_8023F160(void);
s32 fn_8023F18C(void);
void * get_global_state__23TAdSinglePlyChrSelectGCFv(void);
s32 get_load_result__15TAdPlayerLoadGCFv(M2C_UNK);
s32 init_change_mode__21TAdMultiChgGameModeGCFv(void);
s32 set_language__19TWindowKeyBoardSoftFc(u8 a0 = 0);

extern M2C_UNK lbl_804E34FC[];

void *TAdSinglePlyChrSelectGC__sub_802E13C8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E34FC;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E34FC[];
extern M2C_UNK lbl_804E3050[];
extern void *lbl_805D3F84;

void *init_object__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E34FC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F84;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 32), lbl_804E3050);
    return arg0;
}

extern void *tl_clipout;

void *create__23TAdSinglePlyChrSelectGCFv(void) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = init_object__23TAdSinglePlyChrSelectGCFPvPv((void *)((void *)(o)), (void *)((void *)(tl_clipout)));
    }
    return o;
}

typedef char RecoveredGlobal_802E14B8_lbl_804C89BC_size[sizeof(RecoveredGlobal_802E14B8_lbl_804C89BC) == 0x78 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_802E14B8(void) {
    return (u8) (TAdPlayerLoadGC__sub_801E2048(0, (s32) &lbl_804C89BC.value) == -0xBF);
}

typedef char RecoveredGlobal_802E14F0_lbl_804C88C0_size[sizeof(RecoveredGlobal_802E14F0_lbl_804C88C0) == 0x54 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_802E14F0(void) {
    return (u8) (TAdPlayerLoadGC__sub_801E2048(0, (s32) &lbl_804C88C0.value) == -0xBF);
}

typedef char RecoveredGlobal_802E1560_lbl_804C89BC_size[sizeof(RecoveredGlobal_802E1560_lbl_804C89BC) == 0x78 ? 1 : -1];

s32 TAdSinglePlyChrSelectGC__sub_802E1528(void) {
    return (u8) (TAdPlayerLoadGC__sub_801E2048(0, (s32) &lbl_804C8914.value) == -0xBF);
}

s32 TAdSinglePlyChrSelectGC__sub_802E1560(void) {
    return (u8) (TAdPlayerLoadGC__sub_801E2048(0, (s32) &(*(RecoveredGlobal_802E1560_lbl_804C89BC *)&lbl_804C89BC).value) == 0);
}

typedef char RecoveredGlobal_802E1594_lbl_804C88C0_size[sizeof(RecoveredGlobal_802E1594_lbl_804C88C0) == 0x54 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_802E1594(void) {
    return (u8) (TAdPlayerLoadGC__sub_801E2048(0, (s32) &(*(RecoveredGlobal_802E1594_lbl_804C88C0 *)&lbl_804C88C0).value) == 0);
}

s32 TAdSinglePlyChrSelectGC__sub_802E15C8(void) {
    return (u8) (TAdPlayerLoadGC__sub_801E2048(0, (s32) &(*(RecoveredGlobal_802E1560_lbl_804C89BC *)&lbl_804C8914).value) == 0);
}

s32 is_load_complete__23TAdSinglePlyChrSelectGCFv(void) {
    return (u32) __cntlzw((u32) TAdPlayerLoadGC__sub_801E24F8(0, 0, 0, 0, 0)) >> 5;
}

s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r31_2;
    s32 var_r3;

    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 1);
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1F14(arg0);
        return 1;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        temp_r3 = get_load_result__15TAdPlayerLoadGCFv(0);
        switch (temp_r3) {
        case -125:
            return 4;
        case -127:
            return 8;
        case -223:
            return 0x10;
        default:
            return 0x20;
        }
    } else {
        if (check_memcard_status__15TAdPlayerLoadGCFi(0) != 0) {
            return 0x40;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E1528() != 0) {
            return 0x80;
        }
        var_r31_2 = 0;
        if (TAdSinglePlyChrSelectGC__sub_802E14F0() != 0) {
            var_r31_2 |= 0x100;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E14B8() != 0) {
            var_r31_2 |= 0x200;
        }
        if (var_r31_2 != 0) {
            return var_r31_2;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == -1) {
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
            if (TAdSinglePlyChrSelectGC__sub_801FF310() != 0) {
                M2C_FIELD(arg0, s32 *, 0x24) = 1;
            }
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 1) {
            return 0x80;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E15C8() != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == -1) {
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                if (TAdSinglePlyChrSelectGC__sub_801FF384() != 0) {
                    M2C_FIELD(arg0, s32 *, 0x28) = 1;
                }
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == -1) {
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                if (TAdSinglePlyChrSelectGC__sub_801FF3F4() != 0) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                }
            }
            var_r3 = 0;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 1) {
                var_r3 |= 0x100;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
                var_r3 |= 0x200;
            }
            if (var_r3 != 0) {
                return var_r3;
            }
            goto block_43;
        }
block_43:
        var_r31 = 0;
        if (TAdSinglePlyChrSelectGC__sub_802E15C8() == 0) {
            var_r31 |= 0x400;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E1594() == 0) {
            var_r31 |= 0x800;
        }
        if (TAdSinglePlyChrSelectGC__sub_802E1560() == 0) {
            var_r31 |= 0x1000;
        }
        return var_r31;
    }
}

typedef char RecoveredGlobal_802E1868_lbl_8050E208_size[sizeof(RecoveredGlobal_802E1868_lbl_8050E208) == 0x1B0 ? 1 : -1];
typedef char RecoveredGlobal_802E1868_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802E1868_lbl_8050E3B8) == 0x1B0 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void) {
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E3B8.value + 0x20), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
        return 1;
    }
    return 0;
}

int TAdSinglePlyChrSelectGC__sub_802E18C8(void) { return TKeyBoardControl__sub_8000F9CC((void*)(0)); }
void apply_settings__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    void *temp_r3;

    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 == NULL) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 1);
        return;
    }
    set_language__19TWindowKeyBoardSoftFc(M2C_FIELD(temp_r3, u8 *, 7));
    TLobby__sub_802261E0(M2C_FIELD(temp_r3, s16 *, 4));
    TLobby__sub_8022614C(M2C_FIELD(temp_r3, s8 *, 6));
    TLobby__sub_80226328();
    fn_8023F160();
    fn_8023F18C();
    init_change_mode__21TAdMultiChgGameModeGCFv();
}
void close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4) { close_windows__23TAdSinglePlyChrSelectGCFPv((void *)(p)); TAdSinglePlyChrSelectGC__sub_802E1A04((s32)((void*)(p)), (s32)((void*)(a1)), (s32)((void*)(a2)), (s32)((void*)(a3)), (s32)((void*)(a4))); }
void close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4) { close_windows__23TAdSinglePlyChrSelectGCFPv((void *)(p)); TAdSinglePlyChrSelectGC__sub_802E1A8C(p, a1, a2, a3, a4); }

void TAdSinglePlyChrSelectGC__sub_802E1A04(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 var_r6;
    temp_r31 = TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, arg1);
    var_r6 = 0;
    if (arg3 >= 0) {
        var_r6 = TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, arg3);
    }
    if (arg4 >= 0) {
        var_r6 = TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, arg4);
    }
    TAdSinglePlyChrSelectGC__sub_802E1A8C((void*)((void *) (arg0)), (void*)((int) (temp_r31)), (void*)((void *) (arg2)), (void*)((int) (var_r6)), (void*)((int) (0)));
}

void close_windows__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        M2C_FIELD(arg0, s32 *, 0x60) = 7;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x54));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        M2C_FIELD(arg0, s32 *, 0x60) = 7;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
        TAdPlyStatusGC__sub_802E11BC(M2C_FIELD(arg0, void **, 0x58));
    }
}

void create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    void *o;
    void *o2;
    if (M2C_FIELD(arg0, void **, 0x48) == NULL) {
        o = __nw__7TObjectFUl(0x24);
        if (o != NULL) {
            o = __ct__9TAdBackGCFv(o, arg0);
        }
        M2C_FIELD(arg0, void **, 0x48) = o;
    }
    if (M2C_FIELD(arg0, void **, 0x4C) == NULL) {
        o2 = __nw__7TObjectFUl(0x28);
        if (o2 != NULL) {
            o2 = __ct__12TAdBackTxtGCFv(o2, arg0);
        }
        M2C_FIELD(arg0, void **, 0x4C) = o2;
    }
}

}
