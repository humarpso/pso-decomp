#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FC564_lbl_804C89BC {
    M2C_UNK value;
    u8 remaining[0x74];
};

struct Slot_801FCB04 {
    u8 pad[0x428];
    u32 magic;
    u8 rest[0x2798 - 0x42C];
};

struct RecoveredGlobal_80202A40_lbl_8051381C {
    M2C_UNK value;
    u8 remaining[0xE4];
};

struct Ent_80202B38 { s32 a; s32 b; s32 c[5]; };

struct Obj_80202B38 { s32 hdr; Ent_80202B38 e[1]; };

struct Ent_80202B1C { s32 a; s32 b; s32 c[5]; };

struct Obj_80202B1C { s32 hdr; Ent_80202B1C e[1]; };

struct Ent_80202B4C { s32 a; s32 b; s32 c[5]; };

struct Obj_80202B4C { s32 hdr; Ent_80202B4C e[1]; };

struct Obj_80202C08 { s32 a[4]; s32 b[4]; s32 n; };

struct Obj_80202C3C { s32 a[4]; s32 b[4]; s32 n; };

struct Buf_801FBFD0 {
    u8 pad0[0x2048];
    u32 sum;
    u8 pad204C[0x2160 - 0x204C];
    s32 f2160;
};

struct Buf_801FBFD0;
extern "C" {
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void *, int, int);
void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int);
extern RecoveredGlobal_801FC564_lbl_804C89BC lbl_804C89BC;
extern s32 lbl_805D49B4;
extern s32 lbl_805D5F80;
extern s32 lbl_805D5F98;
s32 TAdSinglePlyChrSelectGC__sub_801FC564(s32 arg0);
u32 CARDGetDiskID();
M2C_UNK strncpy(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern s32 lbl_8044A7E0[];
void TAdSinglePlyChrSelectGC__sub_801FBF90(s32 arg0);
M2C_UNK __dl__FPv(s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TAdPlayerLoadGC__sub_801E1B50(void *);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
M2C_UNK render_tick__Fv();
s32 fields_equal__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FCD74();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void *, int, int);
int memcpy(void*, void*, void*);
extern M2C_UNK lbl_804C8914[];
extern s32 lbl_805D49B4;
extern s32 lbl_805D5F6C;
extern s32 lbl_805D5F8C;
extern s32 lbl_805D5F9C;
s32 TAdSinglePlyChrSelectGC__sub_801FC5D8(void* _w0);
void __construct_array(void*, void*, void*, int, int);
void* init_char_data__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 TAdSinglePlyChrSelectGC__sub_801FC8B4(s32 arg0, s16 arg1);
s32 TAdSinglePlyChrSelectGC__sub_801FC900(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCB04(Slot_801FCB04* arg0);
void __construct_array(void*, void*, void*, int, int);
void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p);
void TAdSinglePlyChrSelectGC__sub_802115C0();
void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p);
u8 *TAdSinglePlyChrSelectGC__sub_801FC984(u8 *arg0);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
Buf_801FBFD0 *alloc__22TQuestVmDownLoadServerFPv(u32);
s32 TAdPlayerLoadGC__sub_801E1B50(void *);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FBEF4(s32);
void copy_name__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void TAdSinglePlyChrSelectGC__sub_801FBF90(s32 arg0);
u32 TAdSinglePlyChrSelectGC__sub_80201204(void *, s32, s32);
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void *, int, int);
extern u8 lbl_804C8934[];
extern s32 lbl_805D49B4;
s32 TAdSinglePlyChrSelectGC__sub_801FBFD0(s32 arg0, s32 *arg1);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
Buf_801FBFD0 *alloc__22TQuestVmDownLoadServerFPv(u32);
s32 TAdPlayerLoadGC__sub_801E1944(s32, char *, void *, s32);
s32 TAdPlayerLoadGC__sub_801E1B50(void *);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
s32 TAdPlayerLoadGC__sub_801E2048(s32, s32);
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
s32 TAdSinglePlyChrSelectGC__sub_801FC900(s32 arg0);
void TAdSinglePlyChrSelectGC__sub_80200560(s32);
s32 get_field_118__22TAdEnterSerialAccessGCFv(void);
void xfree__FPv(void *);
int memcpy(void*, void*, void*);
void *memset(void *, int, u32);
extern char lbl_804C88C0[];
extern s32 lbl_80513910[];
extern int lbl_805D5F58;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
s32 TAdSinglePlyChrSelectGC__sub_801FC6A4(void);
}

extern "C" {

u16 TAdSinglePlyChrSelectGC__sub_801FC36C(int arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FC8B4(s32 arg0, s16 arg1);
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
s32 poll_memcard_status__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
s32 register_in_free_room_slot__23TAdSinglePlyChrSelectGCFPvi(u8 *arg0, s32 arg1);
u32 CARDGetDiskID();
int TAdSinglePlyChrSelectGC__sub_801FCD04(void*);
int TAdSinglePlyChrSelectGC__sub_801FCD3C(void*);
M2C_UNK TCheckRoomSequence__sub_802114D4(int, void *);
s32 is_item_record_empty(int);
s32 TLobby__sub_8030A770();
s32 get_game_play_mode();
s32 item_identity_matches(s32, s32);
M2C_UNK __destroy_arr(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
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
        var_r3 = CARDGetDiskID();
        if (var_r3 != 0U) {
            strncpy((M2C_UNK *)var_r3, &lbl_805D5FB0, 4);
        }
    }
}

void TAdSinglePlyChrSelectGC__sub_801FBF90(s32 arg0) {
    u32 var_r3;
    if (arg0 >= 0) {
        var_r3 = CARDGetDiskID();
        if (var_r3 != 0U) {
            strncpy((M2C_UNK *)((s32 *)var_r3), (M2C_UNK *)(lbl_8044A7E0), (M2C_UNK)(4));
        }
    }
}

s32 TAdSinglePlyChrSelectGC__sub_801FBFD0(s32 arg0, s32 *arg1) {
    s32 ok;
    Buf_801FBFD0 *buf;
    u32 sum;
    s32 v;
    u32 r;
    if (TAdPlayerLoadGC__sub_801E1B50((void *)arg0) != 0) {
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E2048(arg0, (s32)lbl_804C8934) != 0) {
        return 0;
    }
    lbl_805D49B4 = 1;
    TAdSinglePlyChrSelectGC__sub_801FBF90(arg0);
    ok = 0;
    buf = alloc__22TQuestVmDownLoadServerFPv(0x6000);
    if (load_player_slot__23TAdSinglePlyChrSelectGCFPvii((void *)arg0, (int)lbl_804C8934, (int)buf) == 0 &&
        TAdSinglePlyChrSelectGC__sub_801FBEF4(arg0) == 1) {
        v = buf->f2160;
        ok = 1;
        *arg1 = v;
        sum = buf->sum;
        buf->sum = 0;
        r = TAdSinglePlyChrSelectGC__sub_80201204(&buf->sum, 0x12C, v);
        if (r != sum) {
            ok = 0;
        }
    }
    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
    copy_name__23TAdSinglePlyChrSelectGCFi(arg0);
    lbl_805D49B4 = 0;
    return ok;
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
    if ((is_item_record_empty((int)(var_r31)) == 0) && (item_identity_matches(arg1, var_r31) != 0)) {
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
    if (is_item_record_empty((int)((int) (var_r31))) != 0) {
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
    if (get_game_play_mode() == 0) {
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

s32 TAdSinglePlyChrSelectGC__sub_801FC5D8(void* _w0) {
    s32 temp_r3;
    s32 var_r30;
    var_r30 = 0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
    if (temp_r3 == 0) {
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E2048((s32)((void *) (lbl_805D5F8C)), (s32)((void *) (lbl_804C8914))) == 0) {
        lbl_805D49B4 = 1;
        load_player_slot__23TAdSinglePlyChrSelectGCFPvii((void *)((void *) (lbl_805D5F8C)), (int)((void *) (lbl_804C8914)), (int)((void *) (lbl_805D5F9C)));
        init_slots__23TAdSinglePlyChrSelectGCFv();
loop_4:
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F8C)) != 0) {
            TAdSinglePlyChrSelectGC__sub_801FCD74();
            render_tick__Fv();
            goto loop_4;
        }
        lbl_805D49B4 = 0;
        memcpy((void*)((int) (temp_r3)), (void*)((void *) (lbl_805D5F9C + 0x2048)), (void*)((int) (0x11C)));
        var_r30 = fields_equal__23TAdSinglePlyChrSelectGCFPvPv((void *)((int) (temp_r3)), (void *)((void *) (lbl_805D5F6C)));
    }
    __dl__FPv((s32)((int) (temp_r3)));
    return var_r30;
}

s32 TAdSinglePlyChrSelectGC__sub_801FC6A4(void) {
    u8 *buf;
    s32 size;
    s32 p;
    s32 g;
    if (TAdPlayerLoadGC__sub_801E2048(lbl_805D5F7C, (s32)lbl_804C88C0) == 0) {
    size = lbl_805D5F84 << 13;
    buf = (u8 *)alloc__22TQuestVmDownLoadServerFPv(size);
    if (buf == NULL) {
        return 0;
    }
    memset(buf, 0, size);
    while (TAdPlayerLoadGC__sub_801E1944(lbl_805D5F7C, lbl_804C88C0, buf, lbl_805D5F84) != 0) {
        if (TAdPlayerLoadGC__sub_801E1E38(lbl_805D5F7C) != 1) {
            xfree__FPv(buf);
            return 0;
        }
    }
    while (TAdPlayerLoadGC__sub_801E1B50((void *)lbl_805D5F7C) != 0) {
        if (TAdPlayerLoadGC__sub_801E1E38(lbl_805D5F7C) != 1) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
            return 0;
        }
    }
    g = get_field_118__22TAdEnterSerialAccessGCFv();
    lbl_80513910[0] = lbl_80513910[1] = g;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (p != 0) {
        p = TAdSinglePlyChrSelectGC__sub_801FC900(p);
    }
    if ((u32)p == 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        return 0;
    }
    memset((void *)p, 0, 0x1156C);
    memcpy((void *)p, buf + 0x2048, (void *)0x1156C);
    TAdSinglePlyChrSelectGC__sub_80200560(p);
    if (*(u32 *)(lbl_805D5F58 + 0x11564) != *(u32 *)(p + 0x11564)) {
        register_callback__23TAdSinglePlyChrSelectGCFis(p, 1);
        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        return 0;
    }
    register_callback__23TAdSinglePlyChrSelectGCFis(p, 1);
    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
    return 1;
    }
    return 0;
}

s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __destroy_arr(arg0 + 4, (M2C_UNK *)TAdSinglePlyChrSelectGC__sub_801FC8B4, 0x2798, 7);
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

s32 TAdSinglePlyChrSelectGC__sub_801FC900(s32 arg0) {
    __construct_array((void*)(arg0 + 4), (void*)init_char_data__23TAdSinglePlyChrSelectGCFPv, (void*)TAdSinglePlyChrSelectGC__sub_801FC8B4, 0x2798, 7);
    return arg0;
}

void* init_char_data__23TAdSinglePlyChrSelectGCFPv(void* p) { __ct__12TPlyCharDataFv(p); TAdSinglePlyChrSelectGC__sub_801FC984((u8 *)((char*)p + 0x41c)); return p; }

typedef char RecoveredGlobal_80202A40_lbl_8051381C_size[sizeof(RecoveredGlobal_80202A40_lbl_8051381C) == 0xE8 ? 1 : -1];
u8 *TAdSinglePlyChrSelectGC__sub_801FC984(u8 *arg0) {
    __construct_array((void*)(arg0 + 0x250), (void*)((void *)TAdSinglePlyChrSelectGC__sub_802115C0), (void*)(0), (int)(0x18), (int)(0xc8));
    init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv((void*)(arg0 + 0x1510));
    return arg0;
}

s32 fields_equal__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1) {
    return (u32) __cntlzw((u32) (M2C_FIELD(arg1, s32 *, 0x118) - M2C_FIELD(arg0, s32 *, 0x118))) >> 5;
}

s32 poll_memcard_status__23TAdSinglePlyChrSelectGCFPv(void* p) { return TAdSinglePlyChrSelectGC__sub_801FC5D8((void*)(p)); }

    extern int lbl_805D5F58;
    extern int lbl_805D5F60;
    extern int lbl_805D5F64;
    extern int lbl_805D5F74;

s32 TAdSinglePlyChrSelectGC__sub_801FCB04(Slot_801FCB04* arg0) {
    s32 i;
    if (arg0 != NULL) {
        for (i = 0; i < 7; i++) {
            u32 m = arg0[i].magic;
            if (m != 0 && m != 0xA205B064) {
                return 1;
            }
        }
    }
    return 0;
}

void load_tables(int a0) { lbl_805D5F74 = a0; memcpy((void*)(lbl_805D5F60), (void*)TAdSinglePlyChrSelectGC__sub_801FCD04((void*)(lbl_805D5F58)), (void*)1052); memcpy((void*)(lbl_805D5F64), (void*)TAdSinglePlyChrSelectGC__sub_801FCD3C((void*)(lbl_805D5F58)), (void*)9072); game_state_load(); }

}
