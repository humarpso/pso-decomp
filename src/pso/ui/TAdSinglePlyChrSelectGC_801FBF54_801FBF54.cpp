#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FC564_lbl_804C89BC {
    M2C_UNK value;
    u8 remaining[0x74];
};

extern "C" {
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void *, int, int);
void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int);
extern RecoveredGlobal_801FC564_lbl_804C89BC lbl_804C89BC;
extern s32 lbl_805D49B4;
extern s32 lbl_805D5F80;
extern s32 lbl_805D5F98;
s32 TAdSinglePlyChrSelectGC__sub_801FC564(s32 arg0);
}

extern "C" {

u16 TAdSinglePlyChrSelectGC__sub_801FC36C(int arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FC8B4(s32 arg0, s16 arg1);
int TAdSinglePlyChrSelectGC__sub_801FCB04(void);
void copy_name__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 fields_equal__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);
s32 find_entry__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
u16 get_card_field_21a8__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_field__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_flag__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_state__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_status__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_value__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_window_field__23TAdSinglePlyChrSelectGCFi(int arg0);
u16 get_card_window_status__23TAdSinglePlyChrSelectGCFi(int arg0);
void* init_char_data__23TAdSinglePlyChrSelectGCFPv(void* p);
u8 is_level_capped__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 is_ready__23TAdSinglePlyChrSelectGCFv(void);
void load_tables(int a0);
int poll_memcard_status__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
s32 register_in_free_room_slot__23TAdSinglePlyChrSelectGCFPvi(u8 *arg0, s32 arg1);
u32 TAdPlayerLoadGC__sub_80381ABC();
int TAdSinglePlyChrSelectGC__sub_801FC5D8(void*);
int TAdSinglePlyChrSelectGC__sub_801FC984(void*);
int TAdSinglePlyChrSelectGC__sub_801FCD04(void*);
int TAdSinglePlyChrSelectGC__sub_801FCD3C(void*);
M2C_UNK TCheckRoomSequence__sub_802114D4(int, void *);
s32 TCheckRoomSequence__sub_80211574(int);
s32 TLobby__sub_8030A770();
s32 TLobby__sub_8030A7B0();
s32 TObjPlayer__sub_801049C8(s32, s32);
M2C_UNK TObjPlayer__sub_803966F8(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
int __ct__12TPlyCharDataFv(void*);
M2C_UNK __dl__FPv(s32);
M2C_UNK __dt__12TPlyCharDataFv(M2C_UNK, M2C_UNK);
int game_state_load(void);
void *get_card_window__17TWindowSubComCardFUi(u16);
s32 is_ready__6TLobbyFv();
int memcpy(void*, void*, void*);
M2C_UNK strncpy(M2C_UNK *, M2C_UNK *, M2C_UNK);

extern M2C_UNK lbl_805D5FB0;

void copy_name__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    u32 var_r3;
    if (arg0 >= 0) {
        var_r3 = TAdPlayerLoadGC__sub_80381ABC();
        if (var_r3 != 0U) {
            strncpy((M2C_UNK *)var_r3, &lbl_805D5FB0, 4);
        }
    }
}

u8 is_level_capped__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x248) >= 0xC8);
}

s32 find_entry__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = arg0 + 0x250;
    var_r30 = 0;
loop_1:
    if ((TCheckRoomSequence__sub_80211574((int)(var_r31)) == 0) && (TObjPlayer__sub_801049C8(arg1, var_r31) != 0)) {
        return 1;
    }
    var_r30 += 1;
    var_r31 += 0x18;
    if (var_r30 >= 0xC8) {
        return 0;
    }
    goto loop_1;
}

s32 register_in_free_room_slot__23TAdSinglePlyChrSelectGCFPvi(u8 *arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r30;

    var_r30 = 0;
    var_r31 = (long) (arg0 + 0x250);
loop_1:
    if (TCheckRoomSequence__sub_80211574((int)((int) (var_r31))) != 0) {
        TCheckRoomSequence__sub_802114D4((int) (var_r31), (void *) (arg1));
        M2C_FIELD(arg0, s32 *, 0x248) = (s32) (M2C_FIELD(arg0, s32 *, 0x248) + 1);
        return 1;
    }
    var_r30 += 1;
    var_r31 += 0x18;
    if (var_r30 >= 0xC8) {
        return 0;
    }
    goto loop_1;
}

s32 is_ready__23TAdSinglePlyChrSelectGCFv(void) {
    if (TLobby__sub_8030A7B0() == 0) {
        return 1;
    }
    if (TLobby__sub_8030A770() != 0) {
        return 0;
    }
    return (u32) __cntlzw(is_ready__6TLobbyFv()) >> 5;
}

u16 get_card_window_field__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x235A);
    }
    return 0U;
}

u16 get_card_window_status__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x2358);
    }
    return 0U;
}

u16 TAdSinglePlyChrSelectGC__sub_801FC36C(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x2356);
    }
    return 0U;
}

u16 get_card_state__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x2354);
    }
    return 0U;
}

u16 get_card_flag__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21B0);
    }
    return 0U;
}

u16 get_card_field__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AE);
    }
    return 0U;
}

u16 get_card_status__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AC);
    }
    return 0U;
}

u16 get_card_value__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AA);
    }
    return 0U;
}

u16 get_card_field_21a8__23TAdSinglePlyChrSelectGCFi(int arg0) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21A8);
    }
    return 0U;
}

typedef char RecoveredGlobal_801FC564_lbl_804C89BC_size[sizeof(RecoveredGlobal_801FC564_lbl_804C89BC) == 0x78 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_801FC564(s32 arg0) {
    s32 var_r0;
    var_r0 = -1;
    lbl_805D5F80 = arg0;
    if ((arg0 >= 0) && (arg0 <= 7)) {
        var_r0 = TAdPlayerLoadGC__sub_801E2048(arg0, (s32) &lbl_804C89BC.value);
        if (var_r0 == 0) {
            set_quest_download_server__23TAdSinglePlyChrSelectGCFi(lbl_805D5F80);
            lbl_805D49B4 = 1;
            var_r0 = load_player_slot__23TAdSinglePlyChrSelectGCFPvii((void *) lbl_805D5F80, (s32) &lbl_804C89BC.value, lbl_805D5F98);
        }
    }
    return var_r0;
}

s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        TObjPlayer__sub_803966F8(arg0 + 4, (M2C_UNK *)TAdSinglePlyChrSelectGC__sub_801FC8B4, 0x2798, 7);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

s32 TAdSinglePlyChrSelectGC__sub_801FC8B4(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void* init_char_data__23TAdSinglePlyChrSelectGCFPv(void* p) { __ct__12TPlyCharDataFv(p); TAdSinglePlyChrSelectGC__sub_801FC984((char*)p + 0x41c); return p; }

s32 fields_equal__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1) {
    return (u32) __cntlzw((u32) (M2C_FIELD(arg1, s32 *, 0x118) - M2C_FIELD(arg0, s32 *, 0x118))) >> 5;
}

int poll_memcard_status__23TAdSinglePlyChrSelectGCFPv(void* p) { return TAdSinglePlyChrSelectGC__sub_801FC5D8(p); }

int TAdSinglePlyChrSelectGC__sub_801FCB04(void) { return 0; }

    extern int lbl_805D5F58;
    extern int lbl_805D5F60;
    extern int lbl_805D5F64;
    extern int lbl_805D5F74;
void load_tables(int a0) { lbl_805D5F74 = a0; memcpy((void*)(lbl_805D5F60), (void*)TAdSinglePlyChrSelectGC__sub_801FCD04((void*)(lbl_805D5F58)), (void*)1052); memcpy((void*)(lbl_805D5F64), (void*)TAdSinglePlyChrSelectGC__sub_801FCD3C((void*)(lbl_805D5F58)), (void*)9072); game_state_load(); }

}
