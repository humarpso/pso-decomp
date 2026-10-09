#include "types.h"
extern "C" {
u32 lbl_805137C8[4];
u32 chr_select_buffer_ptr_table[8];
u32 chr_select_request_buffer[9];
u32 chr_select_rng_state[58];
u32 char_select_date_stamp[3];
__declspec(section ".data") s32 chr_select_serial_seeds[2];
__declspec(section ".data") s32 lbl_80513918[2];
}

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

struct It_801FC0C8 { u8 b[0x18]; };

struct S_801FC0C8 { u8 pad[8]; s32 magic; u8 pad2[0x248 - 0xC]; s32 f248; s32 f24C; It_801FC0C8 items[200]; };

typedef s32 M2C_UNK;
extern "C" {
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, s32);
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void *, int, int);
void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int);
extern RecoveredGlobal_801FC564_lbl_804C89BC lbl_804C89BC;
extern s32 lbl_805D49B4;
extern s32 lbl_805D5F80;
extern s32 lbl_805D5F98;
s32 load_player_by_slot__23TAdSinglePlyChrSelectGCFi(s32 arg0);
u32 CARDGetDiskID();
M2C_UNK strncpy(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern s32 lbl_8044A7E0[];
void set_card_disk_id__23TAdSinglePlyChrSelectGCFi(s32 arg0);
M2C_UNK __dl__FPv(s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TAdPlayerLoadGC__sub_801E1B50(void *);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, s32);
M2C_UNK render_tick__Fv();
s32 fields_equal__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);
M2C_UNK render_frame__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void *, int, int);
int memcpy(void*, void*, void*);
extern M2C_UNK lbl_804C8914[];
extern s32 lbl_805D49B4;
extern s32 lbl_805D5F6C;
extern s32 lbl_805D5F8C;
extern s32 lbl_805D5F9C;
s32 verify_system_file__23TAdSinglePlyChrSelectGCFPv(void* _w0);
void __construct_array(void*, void*, void*, int, int);
void* init_char_data__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 TAdSinglePlyChrSelectGC__sub_801FC8B4(s32 arg0, s16 arg1);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 has_valid_slot__23TAdSinglePlyChrSelectGCFPv(Slot_801FCB04* arg0);
void __construct_array(void*, void*, void*, int, int);
void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p);
void TAdSinglePlyChrSelectGC__sub_802115C0();
void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p);
u8 *init_char_record__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
Buf_801FBFD0 *alloc__22TQuestVmDownLoadServerFPv(u32);
s32 TAdPlayerLoadGC__sub_801E1B50(void *);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, s32);
s32 wait_for_card_load__23TAdSinglePlyChrSelectGCFi(s32);
void copy_name__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void set_card_disk_id__23TAdSinglePlyChrSelectGCFi(s32 arg0);
u32 TAdSinglePlyChrSelectGC__sub_80201204(void *, s32, s32);
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void *, int, int);
extern u8 lbl_804C8934[];
extern s32 lbl_805D49B4;
s32 load_system_file__23TAdSinglePlyChrSelectGCFiPv(s32 arg0, s32 *arg1);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
Buf_801FBFD0 *alloc__22TQuestVmDownLoadServerFPv(u32);
s32 TAdPlayerLoadGC__sub_801E1944(s32, char *, void *, s32);
s32 TAdPlayerLoadGC__sub_801E1B50(void *);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, s32);
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(s32);
s32 get_field_118__22TAdEnterSerialAccessGCFv(void);
void xfree__FPv(void *);
int memcpy(void*, void*, void*);
void *memset(void *, int, u32);
extern char lbl_804C88C0[];
extern s32 chr_select_serial_seeds[];
extern int lbl_805D5F58;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
s32 load_save_from_card__23TAdSinglePlyChrSelectGCFv(void);
void init_item_entry__23TAdSinglePlyChrSelectGCFPv(void *);
s32 init_char_slot_record__23TAdSinglePlyChrSelectGCFPv(S_801FC0C8 *arg0);
s32 TAdSinglePlyChrSelectGC__sub_80202B1C(s32, s32);
u8 TAdSinglePlyChrSelectGC__sub_80202B30();
s32 TAdSinglePlyChrSelectGC__sub_80203210(s32);
s32 fn_8020325C(s32);
void remove_matching_entries__23TAdSinglePlyChrSelectGCFi(s32 arg0);
M2C_UNK __dl__FPv(s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TAdPlayerLoadGC__sub_801E1B50(void *);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, s32);
M2C_UNK render_tick__Fv();
s32 fields_equal__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);
M2C_UNK render_frame__23TAdSinglePlyChrSelectGCFv();
u32 TAdSinglePlyChrSelectGC__sub_80201204(void *, s32, s32);
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void *, int, int);
int memcpy(void*, void*, void*);
extern M2C_UNK lbl_804C8914[];
extern s32 lbl_805D49B4;
extern s32 lbl_805D5F6C;
extern s32 lbl_805D5F8C;
extern s32 lbl_805D5F9C;
s32 verify_card_player_data__23TAdSinglePlyChrSelectGCFv(void);
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
M2C_UNK copy_item_to_bank_entry__18TCheckRoomSequenceFPvPv(int, void *);
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

void set_card_disk_id__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    u32 var_r3;
    if (arg0 >= 0) {
        var_r3 = CARDGetDiskID();
        if (var_r3 != 0U) {
            strncpy((M2C_UNK *)((s32 *)var_r3), (M2C_UNK *)(lbl_8044A7E0), (M2C_UNK)(4));
        }
    }
}

s32 load_system_file__23TAdSinglePlyChrSelectGCFiPv(s32 arg0, s32 *arg1) {
    s32 ok;
    Buf_801FBFD0 *buf;
    u32 sum;
    s32 v;
    u32 r;
    if (TAdPlayerLoadGC__sub_801E1B50((void *)arg0) != 0) {
        return 0;
    }
    if (find_card_file__15TAdPlayerLoadGCFiPv(arg0, (s32)lbl_804C8934) != 0) {
        return 0;
    }
    lbl_805D49B4 = 1;
    set_card_disk_id__23TAdSinglePlyChrSelectGCFi(arg0);
    ok = 0;
    buf = alloc__22TQuestVmDownLoadServerFPv(0x6000);
    if (load_player_slot__23TAdSinglePlyChrSelectGCFPvii((void *)arg0, (int)lbl_804C8934, (int)buf) == 0 &&
        wait_for_card_load__23TAdSinglePlyChrSelectGCFi(arg0) == 1) {
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

s32 init_char_slot_record__23TAdSinglePlyChrSelectGCFPv(S_801FC0C8 *arg0) {
    s32 i;
    if (arg0 == NULL) {
        return 0;
    }
    arg0->magic = 0xA205B064;
    arg0->f248 = 0;
    arg0->f24C = 0;
    for (i = 0; i < 200; i++) {
        init_item_entry__23TAdSinglePlyChrSelectGCFPv(&arg0->items[i]);
    }
    return 1;
}

void remove_matching_entries__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 i;
    s32 n;
    s32 e;
    n = TAdSinglePlyChrSelectGC__sub_80202B30();
    for (i = 0; i < n; i++) {
        e = TAdSinglePlyChrSelectGC__sub_80202B1C(arg0, i);
        if (fn_8020325C(e + 8) != 0) {
            TAdSinglePlyChrSelectGC__sub_80203210(e);
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
        copy_item_to_bank_entry__18TCheckRoomSequenceFPvPv((int) (var_r31), (void *) (arg1));
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

s32 *TAdSinglePlyChrSelectGC__sub_80202B38(void *self, s32 i);
void clear_inventory_slot_by_index__23TAdSinglePlyChrSelectGCFPvi(void *self, s32 i);

s32 TAdSinglePlyChrSelectGC__sub_801FC4F4(void *arg0_, s32 arg1) {
#define arg0 ((u8 *)arg0_)
    u8 n = *arg0;

    if (n < 0x1E) {
        clear_inventory_slot_by_index__23TAdSinglePlyChrSelectGCFPvi(arg0, n);
        memcpy(TAdSinglePlyChrSelectGC__sub_80202B38(arg0, n), (void *)arg1, (void *)0x14);
        *arg0 += 1;
        return 1;
    }
    return 0;
#undef arg0
}

typedef char RecoveredGlobal_801FC564_lbl_804C89BC_size[sizeof(RecoveredGlobal_801FC564_lbl_804C89BC) == 0x78 ? 1 : -1];
s32 load_player_by_slot__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 var_r0;
    var_r0 = -1;
    lbl_805D5F80 = arg0;
    if ((arg0 >= 0) && (arg0 <= 7)) {
        var_r0 = find_card_file__15TAdPlayerLoadGCFiPv(arg0, (s32) &lbl_804C89BC.value);
        if (var_r0 == 0) {
            set_quest_download_server__23TAdSinglePlyChrSelectGCFi(lbl_805D5F80);
            lbl_805D49B4 = 1;
            var_r0 = load_player_slot__23TAdSinglePlyChrSelectGCFPvii((void *) lbl_805D5F80, (s32) &lbl_804C89BC.value, lbl_805D5F98);
        }
    }
    return var_r0;
}

s32 verify_system_file__23TAdSinglePlyChrSelectGCFPv(void* _w0) {
    s32 temp_r3;
    s32 var_r30;
    var_r30 = 0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
    if (temp_r3 == 0) {
        return 0;
    }
    if (find_card_file__15TAdPlayerLoadGCFiPv((s32)((void *) (lbl_805D5F8C)), (s32)((void *) (lbl_804C8914))) == 0) {
        lbl_805D49B4 = 1;
        load_player_slot__23TAdSinglePlyChrSelectGCFPvii((void *)((void *) (lbl_805D5F8C)), (int)((void *) (lbl_804C8914)), (int)((void *) (lbl_805D5F9C)));
        init_slots__23TAdSinglePlyChrSelectGCFv();
loop_4:
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F8C)) != 0) {
            render_frame__23TAdSinglePlyChrSelectGCFv();
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

s32 load_save_from_card__23TAdSinglePlyChrSelectGCFv(void) {
    u8 *buf;
    s32 size;
    s32 p;
    s32 g;
    if (find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F7C, (s32)lbl_804C88C0) == 0) {
    size = lbl_805D5F84 << 13;
    buf = (u8 *)alloc__22TQuestVmDownLoadServerFPv(size);
    if (buf == NULL) {
        return 0;
    }
    memset(buf, 0, size);
    while (TAdPlayerLoadGC__sub_801E1944(lbl_805D5F7C, lbl_804C88C0, buf, lbl_805D5F84) != 0) {
        if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
            xfree__FPv(buf);
            return 0;
        }
    }
    while (TAdPlayerLoadGC__sub_801E1B50((void *)lbl_805D5F7C) != 0) {
        if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
            return 0;
        }
    }
    g = get_field_118__22TAdEnterSerialAccessGCFv();
    chr_select_serial_seeds[0] = chr_select_serial_seeds[1] = g;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (p != 0) {
        p = init_char_slots__23TAdSinglePlyChrSelectGCFi(p);
    }
    if ((u32)p == 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        return 0;
    }
    memset((void *)p, 0, 0x1156C);
    memcpy((void *)p, buf + 0x2048, (void *)0x1156C);
    decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(p);
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

s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    __construct_array((void*)(arg0 + 4), (void*)init_char_data__23TAdSinglePlyChrSelectGCFPv, (void*)TAdSinglePlyChrSelectGC__sub_801FC8B4, 0x2798, 7);
    return arg0;
}

void* init_char_data__23TAdSinglePlyChrSelectGCFPv(void* p) { __ct__12TPlyCharDataFv(p); init_char_record__23TAdSinglePlyChrSelectGCFPv((u8 *)((char*)p + 0x41c)); return p; }

typedef char RecoveredGlobal_80202A40_lbl_8051381C_size[sizeof(RecoveredGlobal_80202A40_lbl_8051381C) == 0xE8 ? 1 : -1];
u8 *init_char_record__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    __construct_array((void*)(arg0 + 0x250), (void*)((void *)TAdSinglePlyChrSelectGC__sub_802115C0), (void*)(0), (int)(0x18), (int)(0xc8));
    init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv((void*)(arg0 + 0x1510));
    return arg0;
}

s32 fields_equal__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1) {
    return (u32) __cntlzw((u32) (M2C_FIELD(arg1, s32 *, 0x118) - M2C_FIELD(arg0, s32 *, 0x118))) >> 5;
}

s32 verify_card_player_data__23TAdSinglePlyChrSelectGCFv(void) {
    u32 *buf;
    s32 ret;
    u32 sum;
    u32 r;
    ret = 0;
    buf = (u32 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x11C);
    if (buf == NULL) {
        return -3;
    }
    if (find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F8C, (s32)lbl_804C8914) == 0) {
        lbl_805D49B4 = 1;
        load_player_slot__23TAdSinglePlyChrSelectGCFPvii((void *)lbl_805D5F8C, (int)lbl_804C8914, lbl_805D5F9C);
        init_slots__23TAdSinglePlyChrSelectGCFv();
        for (;;) {
            if (TAdPlayerLoadGC__sub_801E1B50((void *)lbl_805D5F8C) == 0) break;
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        lbl_805D49B4 = 0;
        memcpy((void*)(buf), (void*)((void *)(lbl_805D5F9C + 0x2048)), (void*)((void *)0x11C));
        sum = *buf;
        if (fields_equal__23TAdSinglePlyChrSelectGCFPvPv(buf, (void *)lbl_805D5F6C) == 0) {
            ret = -1;
        }
        *buf = 0;
        r = ((u32 (*)(void *, s32))TAdSinglePlyChrSelectGC__sub_80201204)(buf, 0x11C);
        if (r != sum) {
            ret = -2;
        }
    }
    __dl__FPv((s32)buf);
    return ret;
}

s32 poll_memcard_status__23TAdSinglePlyChrSelectGCFPv(void* p) { return verify_system_file__23TAdSinglePlyChrSelectGCFPv((void*)(p)); }

    extern int lbl_805D5F58;
    extern int lbl_805D5F60;
    extern int lbl_805D5F64;
    extern int lbl_805D5F74;

s32 has_valid_slot__23TAdSinglePlyChrSelectGCFPv(Slot_801FCB04* arg0) {
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

namespace P801FCBA0 {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_4a87b2 { char pad[0x18]; };

struct VObj_18_4a87b2 : VBase_18_4a87b2 {
    virtual void m0();
    virtual M2C_UNK m1();
};

struct RecoveredGlobal_801FCD74_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_801FDA4C_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_801FDAAC_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct Ent_801FCD04 { u8 pad[0x41C]; s32 x; s32 v; u8 pad2[0x2798 - 0x424]; };

struct Obj_801FCD04 { s32 hdr; Ent_801FCD04 e[7]; };

struct Ent_801FCD3C { u8 pad[0x41C]; s32 x; s32 v; u8 pad2[0x2798 - 0x424]; };

struct Obj_801FCD3C { s32 hdr; Ent_801FCD3C e[7]; };

struct Ent_801FCCDC { u8 pad[0x41C]; s32 x; s32 v; u8 pad2[0x2798 - 0x424]; };

struct Obj_801FCCDC { s32 hdr; Ent_801FCCDC e[7]; };

struct Obj_801FCBA0 {
    void* a[4];
    void* b[4];
};

struct Ent_801FD668 { u8 pad[0x428]; u32 f428; u8 pad2[0x2798 - 0x42C]; };

struct Ent_801FD728 { u8 pad0[4]; u8 a[0x41C]; u8 b[0x2798 - 0x420]; };

struct A_801FD8B8 { u8 p0[4]; u32 f4; u32 f8; u8 pC[8]; u32 f14; };

struct C_801FD8B8 { u8 p[0x11564]; s32 f11564; };

struct Obj_801FCD04;
struct Obj_801FCD3C;
struct Ent_801FCD04;
struct Ent_801FD668;
struct A_801FD8B8;
struct C_801FD8B8;
struct RecoveredGlobal_801FDA4C_lbl_804C88C0;
typedef s32 M2C_UNK;

struct Ent_801FD6B4 { u8 pad[0x420]; u8 sub[8]; u32 f428; u8 pad2[0x2790 - 0x42C]; u32 f2790; u32 f2794; };

extern "C" {
void TAdSinglePlyChrSelectGC__sub_801FCCB4(u8 *arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FC4F4(void *, s32);
extern u8 *lbl_805D5F60;
s32 forward_to_global_instance__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 __ct__12TPlyCharDataFv(s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 init_char_record__23TAdSinglePlyChrSelectGCFPv(s32);
M2C_UNK memset(int, int, int);
void alloc_char_records__23TAdSinglePlyChrSelectGCFi(s32 arg0);
M2C_UNK get_fog_ctrl__16TKeyBoardControlFPv();
s32 is_split_screen();
M2C_UNK set_fullscreen_viewport__11TCameraCtrlFv();
M2C_UNK set_split_viewport__11TCameraCtrlFii(int, int);
M2C_UNK set_mode__11TCameraCtrlFi(int);
M2C_UNK controller_stuff__Fv();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK run_tl_camera_tasks__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
extern RecoveredGlobal_801FCD74_main_task main_task;
extern u8 *camera_ctrl_instance;
void render_frame__23TAdSinglePlyChrSelectGCFv(void);
u8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
int set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int);
extern RecoveredGlobal_801FDA4C_lbl_804C88C0 lbl_804C88C0;
extern int lbl_805D49B4;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
extern s32 lbl_805D5F94;
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C(void);
u8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
int set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int);
extern RecoveredGlobal_801FDA4C_lbl_804C88C0 lbl_804C88C0;
extern int lbl_805D49B4;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
extern s32 lbl_805D5F94;
s32 TAdSinglePlyChrSelectGC__sub_801FDAAC(void);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
extern int lbl_805D49B4;
extern s32 lbl_805D5F8C;
extern s32 lbl_805D5F9C;
extern s32 lbl_805D5F90;
extern M2C_UNK lbl_804C8914[];
int TAdSinglePlyChrSelectGC__sub_801FD990(s32 a0);
s32 get_selection__23TAdSinglePlyChrSelectGCFv(void *self);
Ent_801FCD04 *TAdSinglePlyChrSelectGC__sub_801FCD04(Obj_801FCD04 *self);
s32 get_selection__23TAdSinglePlyChrSelectGCFv(void *self);
s32 *TAdSinglePlyChrSelectGC__sub_801FCD3C(Obj_801FCD3C *self);
bool is_entry_valid__23TAdSinglePlyChrSelectGCFPvi(Obj_801FCCDC *self, s32 i);
s32 __dt__12TPlyCharDataFv(s32, s32);
s32 __dl__FPv(s32);
void free_char_data_slots__23TAdSinglePlyChrSelectGCFPv(Obj_801FCBA0* arg0);
extern Ent_801FD668 *lbl_805D5F58;
s32 all_players_loaded__23TAdSinglePlyChrSelectGCFv(void);
void init_new_character_data(void *);
void init_char_slot_record__23TAdSinglePlyChrSelectGCFPv(void *);
extern Ent_801FD668 *lbl_805D5F58;
void init_fresh_character_slot(s32 arg0);
s32 compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(A_801FD8B8 *a, A_801FD8B8 *b, C_801FD8B8 *c, C_801FD8B8 *d);
void reset_load_state__15TAdPlayerLoadGCFPvPv(int, void *);
s32 has_valid_slot__23TAdSinglePlyChrSelectGCFPv(Ent_801FD668 *);
s32 init_and_register__23TAdSinglePlyChrSelectGCFi();
extern u32 lbl_805D5F5C;
extern u8 *lbl_805D5F70;
s32 TAdPlayerLoadGC__sub_801FD814(void);
void reset_load_state__15TAdPlayerLoadGCFPvPv(int, void *);
s32 has_valid_slot__23TAdSinglePlyChrSelectGCFPv(Ent_801FD668 *);
s32 init_and_register__23TAdSinglePlyChrSelectGCFi();
extern Ent_801FD668 *lbl_805D5F58;
extern u32 lbl_805D5F6C;
s32 TAdPlayerLoadGC__sub_801FD770(void);
s32 get_main_phase();
u8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
void disconnect_protocol__6TLobbyFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 TAdPlayerLoadGC__sub_801E1944(s32, void *, u32, s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, M2C_UNK *);
void render_tick__Fv();
void register_callback__23TAdSinglePlyChrSelectGCFis(s32, s32);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32);
Ent_801FCD04 *TAdSinglePlyChrSelectGC__sub_801FCD04(Obj_801FCD04 *self);
s32 *TAdSinglePlyChrSelectGC__sub_801FCD3C(Obj_801FCD3C *self);
void render_frame__23TAdSinglePlyChrSelectGCFv(void);
s32 compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(A_801FD8B8 *a, A_801FD8B8 *b, C_801FD8B8 *c, C_801FD8B8 *d);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C(void);
void decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(s32);
void encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(Ent_801FD668 *);
void save_character_file__23TAdSinglePlyChrSelectGCFi(s32);
void update_play_time__23TAdSinglePlyChrSelectGCFv();
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 get_card_window__17TWindowSubComCardFUi(u32);
void set_global_flags__23TAdSinglePlyChrSelectGCFi(s32);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
void init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memcpy(void *, void *, int);
M2C_UNK memset(int, int, int);
extern RecoveredGlobal_801FDA4C_lbl_804C88C0 lbl_804C88C0;
extern s32 chr_select_serial_seeds[];
extern s32 lbl_805D55C0;
extern Ent_801FD668 *lbl_805D5F58;
extern u8 *lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
s32 TAdSinglePlyChrSelectGC__sub_801FCE6C(void);
s32 get_main_phase();
u8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
void disconnect_protocol__6TLobbyFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
s32 fn_80203284();
s32 TAdPlayerLoadGC__sub_801E1944(s32, void *, u32, s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, M2C_UNK *);
void render_tick__Fv();
void register_callback__23TAdSinglePlyChrSelectGCFis(s32, s32);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32);
Ent_801FCD04 *TAdSinglePlyChrSelectGC__sub_801FCD04(Obj_801FCD04 *self);
s32 *TAdSinglePlyChrSelectGC__sub_801FCD3C(Obj_801FCD3C *self);
void render_frame__23TAdSinglePlyChrSelectGCFv(void);
s32 compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(A_801FD8B8 *a, A_801FD8B8 *b, C_801FD8B8 *c, C_801FD8B8 *d);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C(void);
void decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(s32);
void encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(Ent_801FD668 *);
void save_character_file__23TAdSinglePlyChrSelectGCFi(s32);
void update_play_time__23TAdSinglePlyChrSelectGCFv();
void TAdSinglePlyChrSelectGC__sub_8028DC14();
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 get_card_window__17TWindowSubComCardFUi(u32);
void set_global_flags__23TAdSinglePlyChrSelectGCFi(s32);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
void init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memcpy(void *, void *, int);
M2C_UNK memset(int, int, int);
extern RecoveredGlobal_801FDA4C_lbl_804C88C0 lbl_804C88C0;
extern s32 chr_select_serial_seeds[];
extern s32 lbl_805D55C0;
extern Ent_801FD668 *lbl_805D5F58;
extern u8 *lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
s32 load_character_from_card__23TAdSinglePlyChrSelectGCFv(void);
void init_char_slot_record__23TAdSinglePlyChrSelectGCFPv(void *);
void init_fresh_character_slot(s32 arg0);
extern Ent_801FD668 *lbl_805D5F58;
void refresh_char_slots__23TAdSinglePlyChrSelectGCFv(void);
}

extern "C" {

s32 get_type__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 pso_system_load_gc(void);
void set_id__23TAdSinglePlyChrSelectGCFPvi(void* p, s32 v);
void setup__23TAdSinglePlyChrSelectGCFi(int a0);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, M2C_UNK *);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv();

void free_char_data_slots__23TAdSinglePlyChrSelectGCFPv(Obj_801FCBA0* arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (arg0->a[i] != NULL) {
            __dt__12TPlyCharDataFv((s32)arg0->a[i], 1);
        }
        if (arg0->b[i] != NULL) {
            __dl__FPv((s32)arg0->b[i]);
        }
        arg0->a[i] = NULL;
        arg0->b[i] = NULL;
    }
}

void alloc_char_records__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
  s32 temp_r3_2;
  s32 var_r0;
  s32 temp_r3;
  s32 var_r0_2;
  s32 var_r31;
  u8 *temp_r30;
  s32 var_r29;
  var_r29 = 0;
  var_r31 = 0;
  do
  {
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x41C);
    var_r0 = temp_r3;
    temp_r30 += 0;
    if (var_r0 != 0)
    {
      var_r0 = __ct__12TPlyCharDataFv(temp_r3);
    }
    temp_r30 = (u8 *) (arg0 + var_r31);
    *((s32 *) (((s8 *) temp_r30) + 0)) = var_r0;
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x2370);
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0)
    {
      var_r0_2 = init_char_record__23TAdSinglePlyChrSelectGCFPv(temp_r3_2);
    }
    *((s32 *) (((s8 *) temp_r30) + 0x10)) = var_r0_2;
    memset((int) (*((s32 *) (((s8 *) temp_r30) + 0))), (int) 0, (int) 0x41C);
    memset((int) (*((s32 *) (((s8 *) temp_r30) + 0x10))), (int) 0, (int) 0x2370);
    var_r29 += 1;
    var_r31 += 4;
  }
  while (var_r29 < 4);
}

void TAdSinglePlyChrSelectGC__sub_801FCCB4(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x11568) = arg1;
}

s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x11568);
}

void set_id__23TAdSinglePlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s32 get_type__23TAdSinglePlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x0); }

bool is_entry_valid__23TAdSinglePlyChrSelectGCFPvi(Obj_801FCCDC *self, s32 i) {
    if (i >= 7) return 0;
    return self->e[i].v != 0;
}

Ent_801FCD04 *TAdSinglePlyChrSelectGC__sub_801FCD04(Obj_801FCD04 *self) {
    return &self->e[get_selection__23TAdSinglePlyChrSelectGCFv(self)];
}

    extern unsigned char lbl_804C89BC[];
    extern int lbl_805D49B4;
    extern int lbl_805D5F80;
    extern int lbl_805D5F88;
    extern int lbl_805D5F98;

typedef char RecoveredGlobal_801FCD74_main_task_size[sizeof(RecoveredGlobal_801FCD74_main_task) == 0x34 ? 1 : -1];

s32 *TAdSinglePlyChrSelectGC__sub_801FCD3C(Obj_801FCD3C *self) {
    return &self->e[get_selection__23TAdSinglePlyChrSelectGCFv(self)].x;
}

void render_frame__23TAdSinglePlyChrSelectGCFv(void) {
    if ((void *) camera_ctrl_instance != NULL) {
        some_empty_func__9TMainTaskFv((void *) (&main_task.value));
        if (is_split_screen() != 0) {
            set_mode__11TCameraCtrlFi((int) (0));
            get_fog_ctrl__16TKeyBoardControlFPv();
            if ((void *) camera_ctrl_instance != NULL) {
                ((VObj_18_4a87b2 *)(camera_ctrl_instance))->m1();
            }
            set_split_viewport__11TCameraCtrlFii((int) (1), (int) (0));
            render__9TMainTaskFv((void *) (&main_task.value));
            set_mode__11TCameraCtrlFi((int) (0x64));
            set_fullscreen_viewport__11TCameraCtrlFv();
        } else {
            controller_stuff__Fv();
            run_tl_camera_tasks__9TMainTaskFv((void *) (&main_task.value));
            render__9TMainTaskFv((void *) (&main_task.value));
        }
        render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    }
}

s32 forward_to_global_instance__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((void *) lbl_805D5F60 != NULL) {
        TAdSinglePlyChrSelectGC__sub_801FC4F4(lbl_805D5F60, arg0);
        return 1;
    }
    return 0;
}

s32 TAdSinglePlyChrSelectGC__sub_801FCE6C(void) {
    s32 cw;
    s32 ret;
    u32 obj;
    u32 buf;
    if (get_main_phase() == 0xE || lbl_805D55C0 == 1 || is_technique_ready__8TTecCtrlFv() == 0) {
        return 0xFFFF0000;
    }
    init_slots__23TAdSinglePlyChrSelectGCFv();
    ret = 0xFFFF0000;
    if (lbl_805D5F60 != NULL && lbl_805D5F64 != 0 && lbl_805D5F58 != NULL) {
        lbl_805D5F7C = ((s8 (*)(void))get_chr_select_state__23TAdSinglePlyChrSelectGCFv)();
        if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
            disconnect_protocol__6TLobbyFv();
            return 0xFFFF0000;
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                disconnect_protocol__6TLobbyFv();
                return 0xFFFF0000;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        if ((obj = find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F7C, (M2C_UNK *)&lbl_804C88C0)) != 0) {
            disconnect_protocol__6TLobbyFv();
            return obj;
        }
        obj = lbl_805D5F84 << 13;
        buf = alloc__22TQuestVmDownLoadServerFPv(obj);
        memset(buf, 0, obj);
        while (TAdPlayerLoadGC__sub_801E1944(lbl_805D5F7C, &lbl_804C88C0, buf, lbl_805D5F84) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                disconnect_protocol__6TLobbyFv();
                return 0xFFFF0000;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                disconnect_protocol__6TLobbyFv();
                return 0xFFFF0000;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        chr_select_serial_seeds[0] = chr_select_serial_seeds[1] = get_field_118__22TAdEnterSerialAccessGCFv();
        obj = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x1156C);
        if (obj != 0) {
            obj = init_char_slots__23TAdSinglePlyChrSelectGCFi(obj);
        }
        memset(obj, 0, 0x1156C);
        memcpy((void *)obj, (void *)(buf + 0x2048), 0x1156C);
        decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(obj);
        ret = compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(
            (A_801FD8B8 *)TAdSinglePlyChrSelectGC__sub_801FCD3C((Obj_801FCD3C *)obj),
            (A_801FD8B8 *)get_card_window__17TWindowSubComCardFUi(0xFFFF),
            (C_801FD8B8 *)obj,
            (C_801FD8B8 *)get_instance__23TAdSinglePlyChrSelectGCFv());
        if (ret != 7) {
            if (buf != 0) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
            }
            if (obj != 0) {
                register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
            }
            disconnect_protocol__6TLobbyFv();
            return ret;
        }
        memcpy(TAdSinglePlyChrSelectGC__sub_801FCD04((Obj_801FCD04 *)lbl_805D5F58),
               TAdSinglePlyChrSelectGC__sub_801FCD04((Obj_801FCD04 *)obj), 0x41C);
        if (buf != 0) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        }
        if (obj != 0) {
            register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
        }
        if (get_instance__15TAdPlayerLoadGCFv() == 0 && (ret = TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C)) == 0) {
            update_play_time__23TAdSinglePlyChrSelectGCFv();
            set_global_flags__23TAdSinglePlyChrSelectGCFi(1);
            memcpy(TAdSinglePlyChrSelectGC__sub_801FCD3C((Obj_801FCD3C *)lbl_805D5F58), (void *)lbl_805D5F64, 0x2370);
            chr_select_serial_seeds[0] = chr_select_serial_seeds[1] = get_field_118__22TAdEnterSerialAccessGCFv();
            encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(lbl_805D5F58);
            save_character_file__23TAdSinglePlyChrSelectGCFi(1);
            while (TAdSinglePlyChrSelectGC__sub_801FDA4C() != 0) {
                run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    disconnect_protocol__6TLobbyFv();
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            lbl_805D5F78 = 6;
            while (get_instance__15TAdPlayerLoadGCFv() != 0) {
                run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    disconnect_protocol__6TLobbyFv();
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            return 7;
        }
    }
    return ret;
}

s32 load_character_from_card__23TAdSinglePlyChrSelectGCFv(void) {
    s32 cw;
    s32 ret;
    u32 obj;
    u32 buf;
    if (get_main_phase() == 0xE || lbl_805D55C0 == 1 || is_technique_ready__8TTecCtrlFv() != 0 ||
        fn_80203284() == 1 || get_game_mode__23TAdSinglePlyChrSelectGCFv() == 0) {
        return 0xFFFF0000;
    }
    init_slots__23TAdSinglePlyChrSelectGCFv();
    ret = 0xFFFF0000;
    if (lbl_805D5F60 != NULL && lbl_805D5F64 != 0 && lbl_805D5F58 != NULL) {
        lbl_805D5F7C = ((s8 (*)(void))get_chr_select_state__23TAdSinglePlyChrSelectGCFv)();
        if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return 0xFFFF0000;
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return 0xFFFF0000;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        if ((obj = find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F7C, (M2C_UNK *)&lbl_804C88C0)) != 0) {
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return obj;
        }
        obj = lbl_805D5F84 << 13;
        buf = alloc__22TQuestVmDownLoadServerFPv(obj);
        memset(buf, 0, obj);
        while (TAdPlayerLoadGC__sub_801E1944(lbl_805D5F7C, &lbl_804C88C0, buf, lbl_805D5F84) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return 0xFFFF0000;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return 0xFFFF0000;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        chr_select_serial_seeds[0] = chr_select_serial_seeds[1] = get_field_118__22TAdEnterSerialAccessGCFv();
        obj = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x1156C);
        if (obj != 0) {
            obj = init_char_slots__23TAdSinglePlyChrSelectGCFi(obj);
        }
        memset(obj, 0, 0x1156C);
        memcpy((void *)obj, (void *)(buf + 0x2048), 0x1156C);
        decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(obj);
        ret = compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(
            (A_801FD8B8 *)TAdSinglePlyChrSelectGC__sub_801FCD3C((Obj_801FCD3C *)obj),
            (A_801FD8B8 *)get_card_window__17TWindowSubComCardFUi(0xFFFF),
            (C_801FD8B8 *)obj,
            (C_801FD8B8 *)get_instance__23TAdSinglePlyChrSelectGCFv());
        if (ret != 7) {
            if (buf != 0) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
            }
            if (obj != 0) {
                register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
            }
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return ret;
        }
        if (((A_801FD8B8 *)lbl_805D5F64)->f14 != ((A_801FD8B8 *)TAdSinglePlyChrSelectGC__sub_801FCD3C((Obj_801FCD3C *)obj))->f14) {
            if (buf != 0) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
            }
            if (obj != 0) {
                register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
            }
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return 2;
        }
        if (buf != 0) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        }
        if (obj != 0) {
            register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
        }
        if (get_instance__15TAdPlayerLoadGCFv() == 0 && (ret = TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C)) == 0) {
            TAdSinglePlyChrSelectGC__sub_8028DC14();
            update_play_time__23TAdSinglePlyChrSelectGCFv();
            set_global_flags__23TAdSinglePlyChrSelectGCFi(1);
            memcpy(TAdSinglePlyChrSelectGC__sub_801FCD04((Obj_801FCD04 *)lbl_805D5F58), lbl_805D5F60, 0x41C);
            memcpy(TAdSinglePlyChrSelectGC__sub_801FCD3C((Obj_801FCD3C *)lbl_805D5F58), (void *)lbl_805D5F64, 0x2370);
            M2C_FIELD(TAdSinglePlyChrSelectGC__sub_801FCD04((Obj_801FCD04 *)lbl_805D5F58), s32 *, 0x36C) = 0;
            chr_select_serial_seeds[0] = chr_select_serial_seeds[1] = get_field_118__22TAdEnterSerialAccessGCFv();
            encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(lbl_805D5F58);
            save_character_file__23TAdSinglePlyChrSelectGCFi(1);
            ret = TAdSinglePlyChrSelectGC__sub_801FDA4C();
            if (ret == 0) {
                lbl_805D5F78 = 6;
            }
            for (;;) {
                run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                        disconnect_protocol__6TLobbyFv();
                    }
                    return 0xFFFF0000;
                }
                run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
                if (get_instance__15TAdPlayerLoadGCFv() == 0) {
                    break;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
        }
    }
    return ret;
}

s32 all_players_loaded__23TAdSinglePlyChrSelectGCFv(void) {
    s32 i;
    u32 v;
    if (lbl_805D5F58 != 0) {
        for (i = 0; i < 7; i++) {
            v = lbl_805D5F58[i].f428;
            if (v != 0 && v + 0x5DFB0000 != 0xB064) return 0;
        }
    }
    return 1;
}

void refresh_char_slots__23TAdSinglePlyChrSelectGCFv(void) {
    s32 i;
    for (i = 0; i < 7; i++) {
        if (((Ent_801FD6B4 *)lbl_805D5F58)[i].f428 == 0xA205B064) {
            if (((Ent_801FD6B4 *)lbl_805D5F58)[i].f2790 == 0) {
                init_fresh_character_slot(i);
            } else {
                init_char_slot_record__23TAdSinglePlyChrSelectGCFPv(((Ent_801FD6B4 *)lbl_805D5F58)[i].sub);
            }
        }
    }
}

void init_fresh_character_slot(s32 arg0) {
    init_new_character_data((*(Ent_801FD728 * *)&lbl_805D5F58)[arg0].a);
    init_char_slot_record__23TAdSinglePlyChrSelectGCFPv((*(Ent_801FD728 * *)&lbl_805D5F58)[arg0].b);
}

s32 TAdPlayerLoadGC__sub_801FD770(void) {
    u8 buf[8];
    s32 i;
    if (lbl_805D5F58 == 0) return 0;
    if (((s32 (*)(Ent_801FD668 *))init_and_register__23TAdSinglePlyChrSelectGCFi)(lbl_805D5F58) == 0) return 1;
    reset_load_state__15TAdPlayerLoadGCFPvPv(0, buf);
    for (i = 0; i < 8; i++) {
        u8 b = buf[i];
        u8 a = ((u8 *)lbl_805D5F6C)[i + 0x110];
        if (a != b) return 1;
    }
    if (has_valid_slot__23TAdSinglePlyChrSelectGCFPv(lbl_805D5F58) != 0) return 5;
    return 7;
}

s32 TAdPlayerLoadGC__sub_801FD814(void) {
    u8 buf[8];
    s32 i;
    u32 p = lbl_805D5F5C;
    if (p == 0) return 0;
    if (((s32 (*)(u32))init_and_register__23TAdSinglePlyChrSelectGCFi)(p) == 0) return 1;
    reset_load_state__15TAdPlayerLoadGCFPvPv(1, buf);
    for (i = 0; i < 8; i++) {
        u8 b = buf[i];
        u8 a = lbl_805D5F70[i + 0x110];
        if (a != b) return 1;
    }
    if (has_valid_slot__23TAdSinglePlyChrSelectGCFPv((Ent_801FD668 *)lbl_805D5F5C) != 0) return 5;
    return 7;
}

s32 compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(A_801FD8B8 *a, A_801FD8B8 *b, C_801FD8B8 *c, C_801FD8B8 *d) {
    if (a == NULL || b == NULL) return 0;
    if (a->f14 > b->f14) return 2;
    if (a->f4 != b->f4) return 4;
    if (a->f8 != 0xA205B064 || b->f8 != 0xA205B064) return 5;
    return c->f11564 != d->f11564 ? 6 : 7;
}

void setup__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5F80 = a0; set_quest_download_server__23TAdSinglePlyChrSelectGCFi((int)(a0)); lbl_805D49B4 = 1; draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)(lbl_805D5F80), lbl_804C89BC, (void*)(lbl_805D5F98), (void*)(lbl_805D5F88)); }

extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F6C;
extern s32 lbl_805D5F8C;

int TAdSinglePlyChrSelectGC__sub_801FD990(s32 a0) {
    lbl_805D5F8C = a0;
    lbl_805D49B4 = 1;
    return draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void *)a0, ((s32 *)&lbl_804C8914), (void *)lbl_805D5F9C, (void *)lbl_805D5F90);
}

s32 pso_system_load_gc(void) {
    s32 var_r31;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F6C != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        var_r31 = find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F8C, lbl_804C8914);
        if (var_r31 == 0) {
            if (try_confirm_selection__23TAdSinglePlyChrSelectGCFv() != 0) {
                var_r31 = TAdSinglePlyChrSelectGC__sub_801FD990((s32)(lbl_805D5F8C));
                if (var_r31 == 0) {
                    set_player_index__23TAdSinglePlyChrSelectGCFi(0xF);
                }
            }
        }
    }
    return var_r31;
}
typedef char RecoveredGlobal_801FDA4C_lbl_804C88C0_size[sizeof(RecoveredGlobal_801FDA4C_lbl_804C88C0) == 0x54 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C(void) {
    s32 var_r0;
    s8 temp_r3;
    temp_r3 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r0 = -1;
    lbl_805D5F7C = (s32) temp_r3;
    if (temp_r3 < 2) {
        set_quest_download_server__23TAdSinglePlyChrSelectGCFi((int)((int) ((s32) temp_r3)));
        (*(s32 *)&lbl_805D49B4) = 1;
        var_r0 = ((s32)draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)((void *) (lbl_805D5F7C)), (void*)((void *) (&lbl_804C88C0.value)), (void*)((void *) (lbl_805D5F94)), (void*)((void *) (lbl_805D5F84))));
    }
    return var_r0;
}
typedef char RecoveredGlobal_801FDAAC_lbl_804C88C0_size[sizeof(RecoveredGlobal_801FDAAC_lbl_804C88C0) == 0x54 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_801FDAAC(void) {
    s32 var_r4;
    s8 temp_r3;
    temp_r3 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r4 = -1;
    lbl_805D5F7C = (s32) temp_r3;
    if (temp_r3 < 2) {
        set_quest_download_server__23TAdSinglePlyChrSelectGCFi((int) ((s32) temp_r3));
        (*(s32 *)&lbl_805D49B4) = 1;
        var_r4 = ((s32)draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)((void *) (lbl_805D5F7C)), (void*)((void *) (&(*(RecoveredGlobal_801FDAAC_lbl_804C88C0 *)&lbl_804C88C0).value)), (void*)((void *) (lbl_805D5F94)), (void*)((void *) (lbl_805D5F84))));
    }
    lbl_805D5F78 = 0x13;
    return var_r4;
}

}

}

namespace P801FDB14 {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FDC14_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_801FE3E4_lbl_805137C8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Ent_801FE2D0 { u8 pad[0x2790]; s32 a; s32 b; };

struct Ent_801FE304 { u8 pad[0x2790]; s32 a; s32 b; };

struct P_801FE380 { u8 pad[4]; u8 a[0x278C - 4]; s32 f278C; s32 f2790; s32 f2794; };

struct Item_801FDEE4 { u8 pad[0x18]; };

struct Slot_801FDEE4 {
    u8 pad0[4];
    u8 chr[0x370 - 4];
    s32 f370;
    u8 pad374[0x668 - 0x374];
    s32 f668;
    s32 f66C;
    Item_801FDEE4 items[200];
    u8 pad1930[0x2790 - 0x1930];
    s32 f2790;
    s32 f2794;
};

struct DateStamp_801FDEE4 { u8 pad[0xC]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct B1C_801FE010 { u32 w[7]; };

struct B10_801FE010 { u32 w[4]; };

struct B200_801FE010 { u32 w[0x80]; };

struct I18_801FE010 { u8 b[0x18]; };

struct B90_801FE010 { u32 w[0x24]; };

struct B420_801FE010 { u32 w[0x108]; };

struct I54_801FE010 { u8 b[0x54]; };

struct BAC_801FE010 { u32 w[0x2B]; };

struct B100_801FE010 { u32 w[0x40]; };

struct B28_801FE010 { u32 w[0xA]; };

struct B40_801FE010 { u32 w[0x10]; };

struct S_801FE010 {
    u32 a0, a4, a8, aC, a10, a14;
    B1C_801FE010 b18;
    B10_801FE010 b34;
    B200_801FE010 b44;
    u32 c244, c248, c24C;
    I18_801FE010 items[200];
    B90_801FE010 d1510;
    B420_801FE010 d15A0;
    I54_801FE010 slots[20];
    BAC_801FE010 e2050;
    BAC_801FE010 e20FC;
    B1C_801FE010 e21A8;
    B100_801FE010 e21C4;
    B28_801FE010 e22C4;
    B28_801FE010 e22EC;
    B40_801FE010 e2314;
    B1C_801FE010 e2354;
};

struct E_801FDDAC { u8 pad[0x424]; u32 f424; u8 pad2[0x2790 - 0x428]; s32 f2790; s32 f2794; };

struct E_801FDE14 { u8 pad[0x424]; u32 f424; u8 pad2[0x2794 - 0x428]; u32 f2794; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct S_801FE010;
struct B8_801FDFB8 { u32 w[2]; };

struct P_801FDFB8 { u8 pad[0x41C]; u8 a[0x278C - 0x41C]; B8_801FDFB8 f278C; s32 f2794; };

typedef struct Ent_801FE338 {
    u32 f0;
    u8 body[0x2794];
} Ent_801FE338;

extern "C" {
s32 find_card_file__15TAdPlayerLoadGCFiPv(int, void *);
M2C_UNK load_player_slot__23TAdSinglePlyChrSelectGCFPvii(int, void *, void *);
extern unsigned char lbl_804C88C0[];
extern int lbl_805D49B4;
extern int lbl_805D5F94;
void TAdSinglePlyChrSelectGC__sub_801FDC14(void);
s32 is_entry_valid__23TAdSinglePlyChrSelectGCFPvi(void *, void *);
extern RecoveredGlobal_801FE3E4_lbl_805137C8 lbl_805137C8;
extern u32 lbl_805D5F5C;
M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE3E4(u32 arg0);
s32 find_card_file__15TAdPlayerLoadGCFiPv(int, void *);
M2C_UNK load_player_slot__23TAdSinglePlyChrSelectGCFPvii(int, void *, void *);
extern unsigned char lbl_804C8914[];
extern int lbl_805D49B4;
extern int lbl_805D5F9C;
void load_pso_system_slot__23TAdSinglePlyChrSelectGCFv(void);
extern u32 lbl_805D5F58;
void clear_entry__23TAdSinglePlyChrSelectGCFi(s32 i);
extern u32 lbl_805D5F5C;
void clear_slot_entry__23TAdSinglePlyChrSelectGCFi(s32 i);
s32 find_card_file__15TAdPlayerLoadGCFiPv(int, void *);
M2C_UNK load_player_slot__23TAdSinglePlyChrSelectGCFPvii(int, void *, void *);
extern unsigned char lbl_804C8914[];
extern int lbl_805D49B4;
extern s32 lbl_805D5F8C;
extern int lbl_805D5F9C;
s32 load_pso_system__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FE380(P_801FE380 *arg0, s32 arg1, P_801FE380 *arg2, s32 arg3);
void DateToSeconds__FP9DateStampPi(DateStamp_801FDEE4 *, s32 *);
void getDateStamp__FP9DateStamp(DateStamp_801FDEE4 *);
void *TAdSinglePlyChrSelectGC__sub_80202B1C(void *, s32);
void clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(void *);
void init_item_entry__23TAdSinglePlyChrSelectGCFPv(void *);
s32 copy_character_to_slot__23TAdSinglePlyChrSelectGCFUiiUii(u32 arg0, s32 arg1, u32 arg2, s32 arg3);
void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
void *TAdSinglePlyChrSelectGC__sub_80076D9C(void *, void *);
S_801FE010 *assign_char_data__23TAdSinglePlyChrSelectGCFPvPv(S_801FE010 *arg0, S_801FE010 *arg1);
s32 check_slot_swap_allowed__23TAdSinglePlyChrSelectGCFPviPvi(E_801FDDAC *arg0, s32 arg1, E_801FDDAC *arg2, s32 arg3);
s32 is_same_slot_entry__23TAdSinglePlyChrSelectGCFPviPvi(E_801FDE14 *arg0, s32 arg1, E_801FDE14 *arg2, s32 arg3);
void copy_player_data__9TProtocolFPvPv();
S_801FE010 *assign_char_data__23TAdSinglePlyChrSelectGCFPvPv(S_801FE010 *arg0, S_801FE010 *arg1);
void *copy_char_slot_data__23TAdSinglePlyChrSelectGCFPvPv(void *a0, void *a1);
void *memset(void *, int, unsigned long);
extern u32 lbl_805D5F58;
void clear_slot_body__23TAdSinglePlyChrSelectGCFi(s32 i);
}

extern "C" {

s32 check_page_cross__23TAdSinglePlyChrSelectGCFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void open_confirm_window__23TAdSinglePlyChrSelectGCFv(void);
s32 swap_characters__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
M2C_UNK increment_counters__23TAdSinglePlyChrSelectGCFv();

    extern unsigned char lbl_804C88C0[];
    extern int lbl_805D49B4;
    extern int lbl_805D5F78;
    extern int lbl_805D5F84;
    extern int lbl_805D5F94;
void open_confirm_window__23TAdSinglePlyChrSelectGCFv(void) { lbl_805D49B4 = 1; draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)1, lbl_804C88C0, (void*)(lbl_805D5F94), (void*)(lbl_805D5F84)); lbl_805D5F78 = 18; }

extern u32 lbl_805D5F58;
extern u32 lbl_805D5F5C;

typedef char RecoveredGlobal_801FDC14_lbl_804C88C0_size[sizeof(RecoveredGlobal_801FDC14_lbl_804C88C0) == 0x54 ? 1 : -1];

s32 load_pso_system__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 r = -1;
    lbl_805D5F8C = arg0;
    if (arg0 >= 0 && arg0 <= 7) {
        r = find_card_file__15TAdPlayerLoadGCFiPv((int)(arg0), (void *)(((u8 *)&lbl_804C8914)));
        if (r == 0) {
            (*(s32 *)&lbl_805D49B4) = 1;
            r = ((s32)load_player_slot__23TAdSinglePlyChrSelectGCFPvii(lbl_805D5F8C, ((u8 *)&lbl_804C8914), (void *)(*(s32 *)&lbl_805D5F9C)));
        }
    }
    return r;
}

void load_pso_system_slot__23TAdSinglePlyChrSelectGCFv(void) {
    if (find_card_file__15TAdPlayerLoadGCFiPv((int) (1), (void *) (&(*(RecoveredGlobal_801FDC14_lbl_804C88C0 *)&lbl_804C8914).value)) == 0) {
        (*(s32 *)&lbl_805D49B4) = 1;
        load_player_slot__23TAdSinglePlyChrSelectGCFPvii((int) (1), (void *) (&(*(RecoveredGlobal_801FDC14_lbl_804C88C0 *)&lbl_804C8914).value), (void *) ((*(s32 *)&lbl_805D5F9C)));
    }
}

void TAdSinglePlyChrSelectGC__sub_801FDC14(void) {
    if (find_card_file__15TAdPlayerLoadGCFiPv((int) (1), (void *) (&(*(RecoveredGlobal_801FDC14_lbl_804C88C0 *)&lbl_804C88C0).value)) == 0) {
        (*(s32 *)&lbl_805D49B4) = 1;
        load_player_slot__23TAdSinglePlyChrSelectGCFPvii((int) (1), (void *) (&(*(RecoveredGlobal_801FDC14_lbl_804C88C0 *)&lbl_804C88C0).value), (void *) ((*(s32 *)&lbl_805D5F94)));
    }
}

s32 swap_characters__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    s32 result;
    if ((arg0 >= 7) || (arg1 >= 7)) {
        return 0;
    }
    if ((u32) lbl_805D5F58 == 0U) {
        goto return_zero;
    }
    if ((u32) lbl_805D5F5C == 0U) {
        goto return_zero;
    }
    if (check_page_cross__23TAdSinglePlyChrSelectGCFiiii((s32)(lbl_805D5F5C), (s32)(arg0), (s32)(lbl_805D5F58), (s32)(arg1)) == 0) {
        goto return_zero;
    }
    increment_counters__23TAdSinglePlyChrSelectGCFv();
    TAdSinglePlyChrSelectGC__sub_801FE380((P_801FE380 *)(lbl_805D5F5C), (s32)(arg0), (P_801FE380 *)(lbl_805D5F58), (s32)(arg1));
    return 1;
return_zero:
    return 0;
}

extern u32 lbl_805D5F58;
extern u32 lbl_805D5F5C;

s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    if ((arg0 >= 7) || (arg1 >= 7)) {
        return 0;
    }
    if (arg1 > 3) {
        return 0;
    }
    if (arg0 <= 3) {
        return 0;
    }
    if ((lbl_805D5F58 != 0U) && (lbl_805D5F5C != 0U) && (check_page_cross__23TAdSinglePlyChrSelectGCFiiii((s32)(lbl_805D5F58), (s32)(arg0), (s32)(lbl_805D5F5C), (s32)(arg1)) != 0)) {
        increment_counters__23TAdSinglePlyChrSelectGCFv();
        copy_character_to_slot__23TAdSinglePlyChrSelectGCFUiiUii((u32)(lbl_805D5F58), (s32)(arg0), (u32)(lbl_805D5F5C), (s32)(arg1));
        return 1;
    }
    return 0;
}

s32 check_slot_swap_allowed__23TAdSinglePlyChrSelectGCFPviPvi(E_801FDDAC *arg0, s32 arg1, E_801FDDAC *arg2, s32 arg3) {
    E_801FDDAC *e;
    if (arg1 < 4) {
        return 0;
    }
    if (arg0[arg1].f424 != 0U) {
        return 0;
    }
    if (arg3 >= 4) {
        return 0;
    }
    e = &arg2[arg3];
    if (e->f424 == 0U) {
        return 0;
    }
    return (u32)__cntlzw(e->f2790) >> 5;
}

s32 is_same_slot_entry__23TAdSinglePlyChrSelectGCFPviPvi(E_801FDE14 *arg0, s32 arg1, E_801FDE14 *arg2, s32 arg3) {
    E_801FDE14 *b;
    E_801FDE14 *a;
    u32 vb;
    u32 va;
    u32 kb;
    if (arg3 <= 3) {
        return 0;
    }
    b = &arg2[arg3];
    vb = b->f424;
    if (vb == 0) {
        return 0;
    }
    kb = b->f2794;
    if (arg1 > 3) {
        return 0;
    }
    a = &arg0[arg1];
    va = a->f424;
    if (va == 0) {
        return 0;
    }
    if (a->f2794 != kb) {
        return 0;
    }
    return (u32)__cntlzw(vb - va) >> 5;
}

s32 check_page_cross__23TAdSinglePlyChrSelectGCFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((arg2 >= 4) && (arg4 <= 3)) {
        return check_slot_swap_allowed__23TAdSinglePlyChrSelectGCFPviPvi((E_801FDDAC *)(arg1), (s32)(arg2), (E_801FDDAC *)(arg3), (s32)(arg4));
    }
    if ((arg2 <= 3) && (arg4 >= 4)) {
        return is_same_slot_entry__23TAdSinglePlyChrSelectGCFPviPvi((E_801FDE14 *)(arg1), (s32)(arg2), (E_801FDE14 *)(arg3), (s32)(arg4));
    }
    return 0;
}
typedef char RecoveredGlobal_801FE3E4_lbl_805137C8_size[sizeof(RecoveredGlobal_801FE3E4_lbl_805137C8) == 0x10 ? 1 : -1];

s32 copy_character_to_slot__23TAdSinglePlyChrSelectGCFUiiUii(u32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    s32 secs;
    DateStamp_801FDEE4 ds;
    Slot_801FDEE4 *src = (Slot_801FDEE4 *)arg0;
    Slot_801FDEE4 *dst = (Slot_801FDEE4 *)arg2;
    void *chr;
    s32 i;
    s32 j;
    getDateStamp__FP9DateStamp(&ds);
    DateToSeconds__FP9DateStampPi(&ds, &secs);
    dst[arg3].f2794 = secs;
    chr = dst[arg3].chr;
    copy_char_slot_data__23TAdSinglePlyChrSelectGCFPvPv((void *)(src[arg1].chr), (void *)(chr));
    for (i = 0; i < 30; i++) {
        clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(TAdSinglePlyChrSelectGC__sub_80202B1C(chr, i));
    }
    dst[arg3].f370 = 0;
    dst[arg3].f668 = 0;
    dst[arg3].f66C = 0;
    for (j = 0; j < 200; j++) {
        init_item_entry__23TAdSinglePlyChrSelectGCFPv(&dst[arg3].items[j]);
    }
    dst[arg3].f2790 = 1;
    return 1;
}

#define arg0 ((P_801FDFB8 *)a0)
#define arg1 ((P_801FDFB8 *)a1)
void *copy_char_slot_data__23TAdSinglePlyChrSelectGCFPvPv(void *a0, void *a1) {
    copy_player_data__9TProtocolFPvPv();
    assign_char_data__23TAdSinglePlyChrSelectGCFPvPv((S_801FE010 *)arg0->a, (S_801FE010 *)arg1->a);
    arg0->f278C = arg1->f278C;
    arg0->f2794 = arg1->f2794;
    return a0;
}
#undef arg0
#undef arg1

S_801FE010 *assign_char_data__23TAdSinglePlyChrSelectGCFPvPv(S_801FE010 *arg0, S_801FE010 *arg1) {
    I18_801FE010 *p;
    I18_801FE010 *q;
    I54_801FE010 *s;
    I54_801FE010 *t;
    arg0->a0 = arg1->a0;
    arg0->a4 = arg1->a4;
    arg0->a8 = arg1->a8;
    arg0->aC = arg1->aC;
    arg0->a10 = arg1->a10;
    arg0->a14 = arg1->a14;
    arg0->b18 = arg1->b18;
    arg0->b34 = arg1->b34;
    arg0->b44 = arg1->b44;
    arg0->c244 = arg1->c244;
    arg0->c248 = arg1->c248;
    arg0->c24C = arg1->c24C;
    p = arg0->items;
    q = arg1->items;
    do {
        copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(p, q);
        p++;
        q++;
    } while (p < arg0->items + 200);
    arg0->d1510 = arg1->d1510;
    arg0->d15A0 = arg1->d15A0;
    s = arg0->slots;
    t = arg1->slots;
    do {
        TAdSinglePlyChrSelectGC__sub_80076D9C(s, t);
        s++;
        t++;
    } while (s < arg0->slots + 20);
    arg0->e2050 = arg1->e2050;
    arg0->e20FC = arg1->e20FC;
    arg0->e21A8 = arg1->e21A8;
    arg0->e21C4 = arg1->e21C4;
    arg0->e22C4 = arg1->e22C4;
    arg0->e22EC = arg1->e22EC;
    arg0->e2314 = arg1->e2314;
    arg0->e2354 = arg1->e2354;
    return arg0;
}

void clear_entry__23TAdSinglePlyChrSelectGCFi(s32 i) {
    if ((*(Ent_801FE2D0 * *)&lbl_805D5F58) == 0) return;
    if (i >= 4) return;
    (*(Ent_801FE2D0 * *)&lbl_805D5F58)[i].a = 0;
    (*(Ent_801FE2D0 * *)&lbl_805D5F58)[i].b = 0;
}

void clear_slot_entry__23TAdSinglePlyChrSelectGCFi(s32 i) {
    if ((*(Ent_801FE304 * *)&lbl_805D5F5C) == 0) return;
    if (i >= 4) return;
    (*(Ent_801FE304 * *)&lbl_805D5F5C)[i].a = 0;
    (*(Ent_801FE304 * *)&lbl_805D5F5C)[i].b = 0;
}

void clear_slot_body__23TAdSinglePlyChrSelectGCFi(s32 i) {
    if ((*(Ent_801FE338 **)&lbl_805D5F58) == 0) return;
    if (i < 4) return;
    memset((*(Ent_801FE338 **)&lbl_805D5F58)[i].body, 0, 0x2798);
}

s32 TAdSinglePlyChrSelectGC__sub_801FE380(P_801FE380 *arg0, s32 arg1, P_801FE380 *arg2, s32 arg3) {
    arg2[arg3].f2790 = 0;
    arg2[arg3].f2794 = 0;
    copy_char_slot_data__23TAdSinglePlyChrSelectGCFPvPv((void *)(arg0[arg1].a), (void *)(arg2[arg3].a));
    clear_slot_body__23TAdSinglePlyChrSelectGCFi((s32)(arg3));
    return 1;
}

M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE3E4(u32 arg0) {
    u8 *temp_r4;
    if (arg0 >= 7U) {
        return NULL;
    }
    if (is_entry_valid__23TAdSinglePlyChrSelectGCFPvi((void *) ((*(s32 *)&lbl_805D5F5C)), (void *) (arg0)) == 0) {
        return NULL;
    }
    temp_r4 = (u8 *)((*(s32 *)&lbl_805D5F5C) + (arg0 * 0x2798));
    M2C_FIELD(&lbl_805137C8.value, s32 *, 0) = (s32) (temp_r4 + 0x374);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 4) = (s32) M2C_FIELD(temp_r4, s32 *, 0x368);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 8) = (s32) M2C_FIELD(temp_r4, s32 *, 0x2790);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 0xC) = (s32) M2C_FIELD(temp_r4, s32 *, 0x42C);
    return &lbl_805137C8.value;
}

}

}

namespace P801FE468 {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FE4BC_lbl_805137C8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Req_801FE5F8 {
    s32 slot[4];
    s32 dest[4];
    u32 count;
};

struct Slot_801FE5F8 {
    u8 pad0[4];
    u8 chr[0x41C];
    u8 inv[0x2370];
    u8 tail[8];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
extern "C" {
s32 is_entry_valid__23TAdSinglePlyChrSelectGCFPvi(s32, s32);
extern s32 lbl_805D5F5C;
s32 TAdSinglePlyChrSelectGC__sub_801FE800(u32 arg0);
s32 is_entry_valid__23TAdSinglePlyChrSelectGCFPvi(s32, s32);
extern RecoveredGlobal_801FE4BC_lbl_805137C8 lbl_805137C8;
extern u32 lbl_805D5F58;
M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE4BC(u32 arg0);
void *memcpy(void *, const void *, u32);
void *memset(void *, int, u32);
extern int chr_select_buffer_ptr_table[];
extern u8 chr_select_request_buffer[];
extern u32 lbl_805D5F58;
void copy_selected_characters__23TAdSinglePlyChrSelectGCFPv(Req_801FE5F8 *arg0);
void *memcpy(void *, const void *, u32);
extern int chr_select_buffer_ptr_table[];
extern u8 chr_select_request_buffer[];
extern u32 lbl_805D5F58;
void copy_chr_slots_from_request__23TAdSinglePlyChrSelectGCFv(void);
void copy_request__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);
}

extern "C" {

struct Ent_801FE468_801FBF54 { char pad4[4]; char body[0x2798 - 4]; };

int TAdSinglePlyChrSelectGC__sub_801FE7D4(int a0);
int get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int a0);
s32 get_entry__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
s32 load_player__23TAdSinglePlyChrSelectGCFv(void);
s32 load_player_data__23TAdSinglePlyChrSelectGCFv(void);
s32 probe_and_check_card__15TAdPlayerLoadGCFi(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, M2C_UNK *);
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void *, int, int);
void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int);
struct RecoveredGlobal_801FE75C_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};
typedef char RecoveredGlobal_801FE75C_lbl_804C88C0_size[sizeof(RecoveredGlobal_801FE75C_lbl_804C88C0) == 0x54 ? 1 : -1];
extern RecoveredGlobal_801FE75C_lbl_804C88C0 lbl_804C88C0;
extern s32 lbl_805D49B4;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F94;
s32 load_chr_select_slot__23TAdSinglePlyChrSelectGCFv(void);
s32 load_player_by_slot__23TAdSinglePlyChrSelectGCFi(s32);
s32 is_entry_valid__23TAdSinglePlyChrSelectGCFPvi(s32, s32);
s32 check_ready__23TAdSinglePlyChrSelectGCFv();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);

extern s32 lbl_805D5F5C;

s32 get_entry__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (is_entry_valid__23TAdSinglePlyChrSelectGCFPvi((s32)(lbl_805D5F5C), (s32)(arg0)) != 0) {
        return (s32) &((struct Ent_801FE468_801FBF54 *) lbl_805D5F5C)[arg0].body[0];
    }
    return 0;
}

    extern int chr_select_buffer_ptr_table[];

typedef char RecoveredGlobal_801FE4BC_lbl_805137C8_size[sizeof(RecoveredGlobal_801FE4BC_lbl_805137C8) == 0x10 ? 1 : -1];
M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE4BC(u32 arg0) {
    u8 *temp_r4;
    if (arg0 >= 7U) {
        return NULL;
    }
    if (is_entry_valid__23TAdSinglePlyChrSelectGCFPvi((s32)((void *) ((*(s32 *)&lbl_805D5F58))), (s32)((void *) (arg0))) == 0) {
        return NULL;
    }
    temp_r4 = (u8 *)((*(s32 *)&lbl_805D5F58) + (arg0 * 0x2798));
    M2C_FIELD(&lbl_805137C8.value, s32 *, 0) = (s32) (temp_r4 + 0x374);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 4) = (s32) M2C_FIELD(temp_r4, s32 *, 0x368);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 8) = (s32) M2C_FIELD(temp_r4, s32 *, 0x2790);
    return &lbl_805137C8.value;
}

void copy_chr_slots_from_request__23TAdSinglePlyChrSelectGCFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        Req_801FE5F8 *r = (Req_801FE5F8 *)chr_select_request_buffer;
        if (r->slot[i] < 7 && r->slot[i] >= 0) {
            memcpy(((Slot_801FE5F8 *)lbl_805D5F58)[r->slot[i]].chr, (void *)chr_select_buffer_ptr_table[r->dest[i]], 0x41C);
            memcpy(((Slot_801FE5F8 *)lbl_805D5F58)[r->slot[i]].inv, (void *)chr_select_buffer_ptr_table[r->dest[i] + 4], 0x2370);
        }
    }
}

void copy_selected_characters__23TAdSinglePlyChrSelectGCFPv(Req_801FE5F8 *arg0) {
    s32 i;
    if (arg0->count <= 4) {
        copy_request__23TAdSinglePlyChrSelectGCFPvPv((void *)(chr_select_request_buffer), (void *)(arg0));
        for (i = 0; i < 4; i++) {
            memset((void *)chr_select_buffer_ptr_table[i], 0, 0x41C);
            memset((void *)chr_select_buffer_ptr_table[i + 4], 0, 0x2370);
        }
        for (i = 0; i < 4; i++) {
            if (arg0->slot[i] < 7 && arg0->dest[i] != -1) {
                memcpy((void *)chr_select_buffer_ptr_table[arg0->dest[i]], ((Slot_801FE5F8 *)lbl_805D5F58)[arg0->slot[i]].chr, 0x41C);
                memcpy((void *)chr_select_buffer_ptr_table[arg0->dest[i] + 4], ((Slot_801FE5F8 *)lbl_805D5F58)[arg0->slot[i]].inv, 0x2370);
            }
        }
    }
}

void copy_request__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1) {
    *(Req_801FE5F8 *)arg0 = *(Req_801FE5F8 *)arg1;
}

s32 load_chr_select_slot__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r0;
    s8 temp_r3;
    temp_r3 = ((u8 (*)(void))get_chr_select_state__23TAdSinglePlyChrSelectGCFv)();
    var_r0 = -1;
    lbl_805D5F7C = (s32) temp_r3;
    if ((temp_r3 >= 0) && (temp_r3 <= 7)) {
        var_r0 = find_card_file__15TAdPlayerLoadGCFiPv((s32) temp_r3, (M2C_UNK *) &lbl_804C88C0.value);
        if (var_r0 == 0) {
            set_quest_download_server__23TAdSinglePlyChrSelectGCFi(lbl_805D5F7C);
            lbl_805D49B4 = 1;
            var_r0 = load_player_slot__23TAdSinglePlyChrSelectGCFPvii((void *) lbl_805D5F7C, (s32) &lbl_804C88C0.value, lbl_805D5F94);
        }
    }
    return var_r0;
}

int TAdSinglePlyChrSelectGC__sub_801FE7D4(int a0) {  return chr_select_buffer_ptr_table[a0 + 4]; }

    extern int chr_select_buffer_ptr_table[];
int get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int a0) {  return chr_select_buffer_ptr_table[a0]; }

extern u32 lbl_805D5F58;

s32 TAdSinglePlyChrSelectGC__sub_801FE800(u32 arg0) {
    if (arg0 >= 7U) {
        return 0;
    }
    if (((u32) (*(u32 *)&lbl_805D5F5C) != 0U) && (is_entry_valid__23TAdSinglePlyChrSelectGCFPvi((s32) (*(u32 *)&lbl_805D5F5C), (s32) arg0) != 0)) {
        return 1;
    }
    return 0;
}

s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    u32 var_r4 = arg0;
    u32 var_r3;
    if (var_r4 >= 7U) {
        return 0;
    }
    var_r3 = lbl_805D5F58;
    if ((var_r3 != 0U) && (is_entry_valid__23TAdSinglePlyChrSelectGCFPvi((s32)(var_r3), (s32)(var_r4)) != 0)) {
        return 1;
    }
    return 0;
}

extern M2C_UNK lbl_804C89BC[];
extern u32 lbl_805D5F68;
extern s32 lbl_805D5F80;

s32 load_player_data__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F68 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && (probe_and_check_card__15TAdPlayerLoadGCFi(lbl_805D5F80) != 0)) {
        var_r31 = find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F80, lbl_804C89BC);
        if ((var_r31 == 0) && (check_ready__23TAdSinglePlyChrSelectGCFv() != 0)) {
            var_r31 = setup__23TAdSinglePlyChrSelectGCFi(lbl_805D5F80);
            if (var_r31 == 0) {
                set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
            }
        }
    }
    return var_r31;
}

extern M2C_UNK lbl_804C89BC[];
extern u32 lbl_805D5F68;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F80;

s32 load_player__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;
    s32 var_r3;
    s8 temp_r3;

    set_save_slot__23TAdSinglePlyChrSelectGCFi(0);
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F68 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        temp_r3 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
        lbl_805D5F80 = temp_r3;
        var_r31 = TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F80);
        if (var_r31 == 0) {
            var_r31 = find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F80, lbl_804C89BC);
            if (var_r31 == 0) {
                var_r3 = load_player_by_slot__23TAdSinglePlyChrSelectGCFi(lbl_805D5F80);
                if (var_r3 == 0) {
                    lbl_805D5F78 = 0xD;
                }
                return var_r3;
            }
        }
    }
    return var_r31;
}

}

}

namespace P801FE9D0 {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 load_pso_system(void);
s32 load_system_file(s32 arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, M2C_UNK *);
s32 load_pso_system__23TAdSinglePlyChrSelectGCFi(s32);
s32 load_pso_system_slot__23TAdSinglePlyChrSelectGCFv();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();

extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F6C;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F8C;

s32 load_system_file(s32 arg0) {
    s32 var_r31;
    s32 var_r3;
    s32 temp_r3;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F6C != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        temp_r3 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
        lbl_805D5F8C = temp_r3;
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((s32)(temp_r3));
        if (var_r31 == 0) {
            var_r31 = find_card_file__15TAdPlayerLoadGCFiPv((s32)(lbl_805D5F8C), (M2C_UNK *)(lbl_804C8914));
            if (var_r31 == 0) {
                var_r3 = load_pso_system__23TAdSinglePlyChrSelectGCFi(lbl_805D5F8C);
                if (var_r3 == 0) {
                    if (arg0 != 0) {
                        lbl_805D5F78 = 0x11;
                    } else {
                        lbl_805D5F78 = 0x10;
                    }
                }
                return var_r3;
            }
        }
    }
    var_r3 = var_r31;
    return var_r3;
}

extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F70;
extern s32 lbl_805D5F78;

s32 load_pso_system(void) {
    s32 var_r31;
    s32 var_r3;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F70 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((s32)(1));
        if (var_r31 == 0) {
            var_r31 = find_card_file__15TAdPlayerLoadGCFiPv((s32)(1), (M2C_UNK *)(lbl_804C8914));
            if (var_r31 == 0) {
                var_r3 = load_pso_system_slot__23TAdSinglePlyChrSelectGCFv();
                if (var_r3 == 0) {
                    lbl_805D5F78 = 0x16;
                }
                return var_r3;
            }
        }
    }
    var_r3 = var_r31;
    return var_r3;
}

}

}

namespace P801FEAFC {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FEBBC_lbl_80513904 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
M2C_UNK getDateStamp__FP9DateStamp(void *);
s32 TAdSinglePlyChrSelectGC__sub_801FDC14(int);
extern RecoveredGlobal_801FEBBC_lbl_80513904 char_select_date_stamp;
extern u32 lbl_805D5F5C;
extern s32 lbl_805D5F78;
s32 TAdSinglePlyChrSelectGC__sub_801FEBBC(void);
s32 load_pso_system(void);
extern s32 lbl_805D5FA8;
void check_system_load_result__23TAdSinglePlyChrSelectGCFv(void);
}

extern "C" {

s32 check_ready__23TAdSinglePlyChrSelectGCFv(void);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FFF14();
M2C_UNK create_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();

extern u32 lbl_805D5F68;
extern u32 lbl_805D5F98;

s32 check_ready__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r3;

    init_slots__23TAdSinglePlyChrSelectGCFv();
    var_r3 = 0;
    if (((u32) lbl_805D5F68 != 0U) && ((u32) lbl_805D5F98 != 0U)) {
        TAdSinglePlyChrSelectGC__sub_801FFF14();
        var_r3 = 1;
    }
    return var_r3;
}

extern u32 lbl_805D5F6C;
extern u32 lbl_805D5F9C;

s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r3;

    init_slots__23TAdSinglePlyChrSelectGCFv();
    var_r3 = 0;
    if (((u32) lbl_805D5F6C != 0U) && ((u32) lbl_805D5F9C != 0U)) {
        create_instance__23TAdSinglePlyChrSelectGCFv();
        var_r3 = 1;
    }
    return var_r3;
}
typedef char RecoveredGlobal_801FEBBC_lbl_80513904_size[sizeof(RecoveredGlobal_801FEBBC_lbl_80513904) == 0xC ? 1 : -1];

void check_system_load_result__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = load_pso_system();
    lbl_805D5FA8 = 0;
    if (r == 0) lbl_805D5FA8 = 1;
}

s32 TAdSinglePlyChrSelectGC__sub_801FEBBC(void) {
    s32 var_r31;
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F5C != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0x16)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((int) (1));
        if (var_r31 == 0) {
            var_r31 = TAdSinglePlyChrSelectGC__sub_801FDC14((int) (1));
            if (var_r31 == 0) {
                lbl_805D5F78 = 0x14;
                getDateStamp__FP9DateStamp((void *) (&char_select_date_stamp.value));
            }
        }
    }
    return var_r31;
}

}

}

namespace P801FEC34 {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FF200_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef s32 M2C_UNK;
struct VBase_801FEE14 { u8 pad[0x18]; };

struct Win_801FEE14 : VBase_801FEE14 {
    virtual ~Win_801FEE14();
    virtual void v1();
};

struct V2_801FEE14 { f32 x, y; };

extern "C" {
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDA4C();
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
M2C_UNK save_character_file__23TAdSinglePlyChrSelectGCFi(int);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
extern RecoveredGlobal_801FF200_lbl_80513910 chr_select_serial_seeds;
extern u32 lbl_805D5F58;
extern s32 lbl_805D5F78;
s32 encrypt_save_and_write__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
void wait_ready_loop__6TLobbyFv(void);
s32 get_localized_text_entry(s32, s32);
s8 func_801A5E54__Fv(void);
void controller_stuff__Fv(void);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 get_load_result__15TAdPlayerLoadGCFv(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
void render_tick__Fv(void);
s32 load_save_from_card__23TAdSinglePlyChrSelectGCFv(void);
void render_frame__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDA4C();
void increment_counter__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
M2C_UNK save_character_file__23TAdSinglePlyChrSelectGCFi(int);
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv(void);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
void reparent_to_main_ctrl__17TWindowSubComCardFi(Win_801FEE14 *);
void complete_reveal__14TWindowMessageFPv(Win_801FEE14 *);
void send_and_handle__6TLobbyFPvii(Win_801FEE14 *, s32, s32);
void TLobby__sub_80269C90(void);
void TLobby__sub_80269CA4(s32);
Win_801FEE14 *create_message_window__6TLobbyFiiUis(V2_801FEE14 *, V2_801FEE14 *, s32, s32);
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void);
s32 TAdSinglePlyChrSelectGC__sub_8033B9F8(Win_801FEE14 *);
Win_801FEE14 *create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *, s32, s32);
void func_803DCDFC__Fv(void);
extern V2_801FEE14 lbl_8044A7D0[];
extern V2_801FEE14 lbl_8044A7D8[];
extern V2_801FEE14 lbl_804C8A44[];
extern u8 lbl_8050E208[];
extern RecoveredGlobal_801FF200_lbl_80513910 chr_select_serial_seeds;
extern u32 lbl_805D5F58;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s8 lbl_805D5FB4;
extern f32 lbl_805D5FB8;
extern s8 lbl_805D5FBC;
extern void *tl_01;
extern const f32 lbl_805DC5C0;
extern const f32 lbl_805DC5C4;
extern const f32 lbl_805DC5C8;
s32 save_character_to_card__23TAdSinglePlyChrSelectGCFv(void);
}

extern "C" {

s32 load_selected_char__23TAdSinglePlyChrSelectGCFv(void);
s32 load_selected_character__23TAdSinglePlyChrSelectGCFv(void);
s32 start_load__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdPlayerLoadGC__sub_801E1B50(void*);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDA4C();
s32 load_chr_select_slot__23TAdSinglePlyChrSelectGCFv();
M2C_UNK clear_load_buffers__23TAdSinglePlyChrSelectGCFv();
M2C_UNK prepare_save_data__23TAdSinglePlyChrSelectGCFv();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);

extern M2C_UNK char_select_date_stamp[];
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 load_selected_char__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0x10) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((void*)lbl_805D5F7C);
        if (var_r31 == 0) {
            var_r31 = load_chr_select_slot__23TAdSinglePlyChrSelectGCFv();
            if (var_r31 == 0) {
                lbl_805D5F78 = 8;
                getDateStamp__FP9DateStamp(char_select_date_stamp);
            }
        }
    }
    return var_r31;
}

extern M2C_UNK char_select_date_stamp[];
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 load_selected_character__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((void*)lbl_805D5F7C);
        if (var_r31 == 0) {
            var_r31 = load_chr_select_slot__23TAdSinglePlyChrSelectGCFv();
            if (var_r31 == 0) {
                lbl_805D5F78 = 8;
                getDateStamp__FP9DateStamp(char_select_date_stamp);
            }
        }
    }
    return var_r31;
}

M2C_UNK init_buffer();
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 start_load__23TAdSinglePlyChrSelectGCFv(void) {
    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        clear_load_buffers__23TAdSinglePlyChrSelectGCFv();
        init_buffer();
        prepare_save_data__23TAdSinglePlyChrSelectGCFv();
        TAdSinglePlyChrSelectGC__sub_801FDA4C();
        lbl_805D5F78 = 6;
        return 7;
    }
    return 0xFFFF0000;
}
typedef char RecoveredGlobal_801FF200_lbl_80513910_size[sizeof(RecoveredGlobal_801FF200_lbl_80513910) == 0x10 ? 1 : -1];

s32 save_character_to_card__23TAdSinglePlyChrSelectGCFv(void) {
    Win_801FEE14 *w;
    s32 result;
    s32 v;
    w = create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(tl_01, 0, 1);
    if (w == NULL) {
        return 0;
    }
    if (w != NULL) {
        TAdSinglePlyChrSelectGC__sub_8033B9EC();
        while (1) {
            func_803DCDFC__Fv();
            w->v1();
            if (TAdSinglePlyChrSelectGC__sub_8033B9F8(w) != 0) {
                break;
            }
            controller_stuff__Fv();
            wait_ready_loop__6TLobbyFv();
            render_frame__23TAdSinglePlyChrSelectGCFv();
            if (func_801A5E54__Fv() != 0 || TWindowShortListCtrl__check_controller_button(&lbl_8050E208[0x20], 8) != 0) {
                if (w != NULL) {
            delete w;
        }
                return 0;
            }
            render_tick__Fv();
        }
        if (w != NULL) {
            delete w;
        }
    }
    if (lbl_805D5FB4 == 0) {
        lbl_805D5FB4 = 1;
        lbl_804C8A44[0].x = lbl_805DC5C0 + lbl_8044A7D0[0].x;
        lbl_804C8A44[0].y = lbl_805DC5C4 + (lbl_8044A7D0[0].y + lbl_8044A7D8[0].y);
    }
    if (lbl_805D5FBC == 0) {
        lbl_805D5FBC = 1;
        lbl_805D5FB8 = lbl_8044A7D8[0].x - lbl_805DC5C8;
    }
    if (load_save_from_card__23TAdSinglePlyChrSelectGCFv() == 0) {
        w = create_message_window__6TLobbyFiiUis(lbl_8044A7D0, lbl_8044A7D8, 1, 4);
        if (w != NULL) {
            send_and_handle__6TLobbyFPvii(w, get_localized_text_entry(0x20, 4), 3);
            reparent_to_main_ctrl__17TWindowSubComCardFi(w);
        }
        complete_reveal__14TWindowMessageFPv(w);
        while (1) {
            func_803DCDFC__Fv();
            controller_stuff__Fv();
            wait_ready_loop__6TLobbyFv();
            render_frame__23TAdSinglePlyChrSelectGCFv();
            if (func_801A5E54__Fv() != 0) {
                break;
            }
            render_tick__Fv();
        }
        if (w != NULL) {
            delete w;
        }
        return 0;
    }
    increment_counter__23TAdSinglePlyChrSelectGCFv();
    v = get_field_118__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&chr_select_serial_seeds.value, s32 *, 4) = v;
    M2C_FIELD(&chr_select_serial_seeds.value, s32 *, 0) = v;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)lbl_805D5F58, &chr_select_serial_seeds.value);
    save_character_file__23TAdSinglePlyChrSelectGCFi(1);
    TAdSinglePlyChrSelectGC__sub_801FDA4C();
    lbl_805D5F78 = 6;
    while (1) {
        func_803DCDFC__Fv();
        controller_stuff__Fv();
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
        render_frame__23TAdSinglePlyChrSelectGCFv();
        if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
            result = 0;
            break;
        }
        if (get_instance__15TAdPlayerLoadGCFv() == 0) {
            result = 1;
            if (get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF81 || get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF83) {
                result = 0;
            }
            break;
        }
        render_tick__Fv();
    }
    TLobby__sub_80269CA4(0x23);
    w = create_message_window__6TLobbyFiiUis(lbl_8044A7D0, lbl_8044A7D8, 1, 4);
    TLobby__sub_80269C90();
    if (w != NULL) {
        if (get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF81 || get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF83) {
            send_and_handle__6TLobbyFPvii(w, get_localized_text_entry(0x1C, 1), 3);
        } else {
            send_and_handle__6TLobbyFPvii(w, get_localized_text_entry(0x20, 5), 3);
        }
        reparent_to_main_ctrl__17TWindowSubComCardFi(w);
    }
    complete_reveal__14TWindowMessageFPv(w);
    if (result == 0) {
        while (1) {
            func_803DCDFC__Fv();
            controller_stuff__Fv();
            wait_ready_loop__6TLobbyFv();
            render_frame__23TAdSinglePlyChrSelectGCFv();
            if (func_801A5E54__Fv() != 0 || TWindowShortListCtrl__check_controller_button(&lbl_8050E208[0x20], 0x60E) != 0) {
                break;
            }
            render_tick__Fv();
        }
    }
    if (w != NULL) {
            delete w;
        }
    return result;
}

s32 encrypt_save_and_write__23TAdSinglePlyChrSelectGCFv(void) {
    s32 temp_r3;
    temp_r3 = get_field_118__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&chr_select_serial_seeds.value, s32 *, 4) = temp_r3;
    M2C_FIELD(&chr_select_serial_seeds.value, s32 *, 0) = temp_r3;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *) ((*(s32 *)&lbl_805D5F58)), (void *) (&chr_select_serial_seeds.value));
    save_character_file__23TAdSinglePlyChrSelectGCFi((int) (1));
    if (((s32)TAdSinglePlyChrSelectGC__sub_801FDA4C()) != 0) {
        return 0;
    }
    lbl_805D5F78 = 6;
    return 1;
}

}

}

namespace P801FF260 {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 load_system_file(s32);
extern s32 lbl_805D5FA8;
void load_system_file_flag__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 load_system_file(s32);
s32 verify_save_checksum__23TAdSinglePlyChrSelectGCFi(s32);
extern s32 lbl_805D5FA8;
u8 load_system_file_blocking__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 load_selected_character__23TAdSinglePlyChrSelectGCFv();
s32 apply_loaded_character__23TAdSinglePlyChrSelectGCFi(s32);
extern s32 lbl_805D5FA8;
u8 load_character_and_wait__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 load_and_verify_data(s32);
extern s32 lbl_805D5FA8;
u8 load_player_and_wait__23TAdSinglePlyChrSelectGCFv(void);
}

extern "C" {

void *get_instance__23TAdSinglePlyChrSelectGCFv();

void increment_counter__23TAdSinglePlyChrSelectGCFv(void) {
    void *temp_r3;

    temp_r3 = get_instance__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x11564) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x11564) + 1);
    }
}

extern void *lbl_805D5F58;
extern void *lbl_805D5F5C;

void increment_counters__23TAdSinglePlyChrSelectGCFv(void) {
    if ((void *) lbl_805D5F58 != NULL) {
        M2C_FIELD(lbl_805D5F58, s32 *, 0x11564) = (s32) (M2C_FIELD(lbl_805D5F58, s32 *, 0x11564) + 1);
    }
    if ((void *) lbl_805D5F5C != NULL) {
        M2C_FIELD(lbl_805D5F5C, s32 *, 0x11564) = (s32) (M2C_FIELD(lbl_805D5F5C, s32 *, 0x11564) + 1);
    }
}
void load_system_file_flag__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = load_system_file(0);
    lbl_805D5FA8 = 0;
    if (r == 0) lbl_805D5FA8 = 1;
}
u8 load_system_file_blocking__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = load_system_file(1);
    lbl_805D5FA8 = 0;
    if (r == 0) {
        lbl_805D5FA8 = 1;
    } else {
        return 0;
    }
    for (;;) {
        if (get_instance__15TAdPlayerLoadGCFv() == 0) break;
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    }
    lbl_805D5FA8 = 0;
    return verify_save_checksum__23TAdSinglePlyChrSelectGCFi(1) == 0;
}
u8 load_character_and_wait__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = load_selected_character__23TAdSinglePlyChrSelectGCFv();
    lbl_805D5FA8 = 0;
    if (r == 0) {
        lbl_805D5FA8 = 1;
    } else {
        return 0;
    }
    for (;;) {
        if (get_instance__15TAdPlayerLoadGCFv() == 0) break;
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    }
    lbl_805D5FA8 = 0;
    return apply_loaded_character__23TAdSinglePlyChrSelectGCFi(1) == 0;
}
u8 load_player_and_wait__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = load_player__23TAdSinglePlyChrSelectGCFv();
    lbl_805D5FA8 = 0;
    if (r == 0) {
        lbl_805D5FA8 = 1;
    } else {
        return 0;
    }
    for (;;) {
        if (get_instance__15TAdPlayerLoadGCFv() == 0) break;
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    }
    lbl_805D5FA8 = 0;
    return load_and_verify_data(1) == 0;
}

}

}

namespace P801FF464 {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct M2CCopy_FC0 { u8 bytes[0xfc0]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off

struct M2CCopy_C0
{
  u8 bytes[0xc0];
};

extern "C" {
u8 *TAdSinglePlyChrSelectGC__sub_801FFC74(u8 *arg0, u8 *arg1);
s32 is_technique_ready__8TTecCtrlFv();
s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_card_window__17TWindowSubComCardFUi(u32);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK clear_flags__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
s32 try_assign_battle_ctrl__10TObjPlayerFiUs(s32, u16);
s32 TLobby__sub_8030A770(void);
M2C_UNK TCameraCtrl__sub_8006B324();
u32 get_player_by_client_id(s32);
s32 setup_player_battle_ctrls__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK copy_card__17TWindowSubComCardFiPv(int, int);
s32 TAdSinglePlyChrSelectGC__sub_801FFCFC(s32 arg0, s32 arg1);
void *memset(void *, int, unsigned long);
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
void clear_load_buffers__23TAdSinglePlyChrSelectGCFv(void);
s32 get_main_phase();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();
u32 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
u32 alloc__22TQuestVmDownLoadServerFPv(u32);
M2C_UNK disconnect_protocol__6TLobbyFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 get_ptr_4__10TObjPlayerFPv(void *);
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
u32 get_load_result__15TAdPlayerLoadGCFv(int);
s32 TAdPlayerLoadGC__sub_801E1944(s32, void *, u32, s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, void *);
M2C_UNK render_tick__Fv();
M2C_UNK copy_card_window_data();
M2C_UNK register_callback__23TAdSinglePlyChrSelectGCFis(u8 *, s16);
u8 *init_char_slots__23TAdSinglePlyChrSelectGCFi();
u8 *TAdSinglePlyChrSelectGC__sub_801FCD04(u32);
u8 *TAdSinglePlyChrSelectGC__sub_801FCD3C(u32);
M2C_UNK render_frame__23TAdSinglePlyChrSelectGCFv();
s32 compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(u8 *, s32, u8 *, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C();
M2C_UNK increment_counter__23TAdSinglePlyChrSelectGCFv();
M2C_UNK decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(u8 *);
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
M2C_UNK save_character_file__23TAdSinglePlyChrSelectGCFi(int);
M2C_UNK update_play_time__23TAdSinglePlyChrSelectGCFv();
M2C_UNK run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 get_card_window__17TWindowSubComCardFUi(u32);
M2C_UNK set_global_flags__23TAdSinglePlyChrSelectGCFi(int);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
int clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(void *);
s32 fn_80203284();
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028DC14();
M2C_UNK sync_char_select_state__10TObjPlayerFv();
M2C_UNK memcpy(s32, s32, u32);
void *memset(void *, int, unsigned long);
extern u8 lbl_804C88C0[];
extern s32 chr_select_serial_seeds[];
extern s32 lbl_805D55C0;
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
s32 load_character_from_card__23TAdSinglePlyChrSelectGCFi(s32 arg0);
}

extern "C" {

s32 init__23TAdSinglePlyChrSelectGCFv(void);
s32 load_and_verify_data(s32 arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FFF98(s32);
M2C_UNK prepare_save_data__23TAdSinglePlyChrSelectGCFv();
M2C_UNK update_play_time__23TAdSinglePlyChrSelectGCFv();
u32 TAdSinglePlyChrSelectGC__sub_80201204(u32 *, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028DC14();
u32 get_player_by_client_id(s32);
M2C_UNK __dl__FPv(u32 *);
u32 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK clear_flags__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK copy_card_window_data();
s32 fn_80203284();
s32 get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
M2C_UNK init_battle_selection__10TObjPlayerFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_timestamped_data();
u32 *init_windows__23TAdSinglePlyChrSelectGCFi();
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK memcpy(s32, s32, u32);
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);

extern s32 lbl_805D53A0;
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;

s32 init__23TAdSinglePlyChrSelectGCFv(void) {
    init_slots__23TAdSinglePlyChrSelectGCFv();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U)) {
        if ((get_player_by_client_id(lbl_805D53A0) != 0U) && (is_technique_ready__8TTecCtrlFv() == 0) && (fn_80203284() != 1)) {
            init_battle_selection__10TObjPlayerFv();
            TAdSinglePlyChrSelectGC__sub_8028DC14();
        }
        clear_flags__23TAdSinglePlyChrSelectGCFi(3);
        update_play_time__23TAdSinglePlyChrSelectGCFv();
        copy_card_window_data();
        prepare_save_data__23TAdSinglePlyChrSelectGCFv();
    }
    return 0xFFFF0000;
}

extern s32 chr_select_serial_seeds[];
extern s32 lbl_805D5F68;
extern s32 lbl_805D5F98;

s32 setup_player_battle_ctrls__23TAdSinglePlyChrSelectGCFv(void) {
  u32 temp_r3;
  u32 var_r31;
  u8 *temp_r3_2;
  init_slots__23TAdSinglePlyChrSelectGCFv();
  TCameraCtrl__sub_8006B324();
  var_r31 = 0;
  do
  {
    if (((get_player_by_client_id((s32)((int) var_r31)) != 0U) && (((volatile long)is_technique_ready__8TTecCtrlFv()) == 0)) && (TLobby__sub_8030A770() == 0))
    {
      temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
      if (temp_r3 != 0U)
      {
        try_assign_battle_ctrl__10TObjPlayerFiUs((s32) temp_r3, (u16) var_r31);
      }
      temp_r3_2 = (u8 *) get_card_window__17TWindowSubComCardFUi(var_r31);
      if (temp_r3_2 != 0)
      {
        update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(temp_r3_2);
      }
    }
    clear_flags__23TAdSinglePlyChrSelectGCFi((M2C_UNK)(3));
    var_r31 += 1;
  }
  while (((s32) var_r31) < 4);
  return 0xFFFF0000;
}

void clear_load_buffers__23TAdSinglePlyChrSelectGCFv(void) {
    if (lbl_805D5F58 != 0) {
        memset((void *)lbl_805D5F58, 0, 0x1156C);
        memset((void *)lbl_805D5F60, 0, 0x41C);
        memset((void *)lbl_805D5F64, 0, 0x2370);
    }
}

s32 load_character_from_card__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 ret;
    u8 *obj;
    u32 buf;
    s32 t;
    s32 i;
    s32 p;
    u32 size;
    if (get_main_phase() == 0xE || (get_global_state__14TOKeyMachine01Fv() == 0xF && arg0 != 1) ||
        lbl_805D55C0 == 1 || is_technique_ready__8TTecCtrlFv() != 0 || fn_80203284() == 1) {
        return 0xFFFF0000;
    }
    init_slots__23TAdSinglePlyChrSelectGCFv();
    ret = 0xFFFF0000;
    if (lbl_805D5F60 != 0 && lbl_805D5F64 != 0 && lbl_805D5F58 != 0) {
        lbl_805D5F7C = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
        if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return 0xFFFF0000;
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return 0xFFFF0000;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        if (arg0 != 1) {
            arg0 = find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F7C, lbl_804C88C0);
            if (arg0 != 0) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return arg0;
            }
            size = lbl_805D5F84 << 13;
            buf = alloc__22TQuestVmDownLoadServerFPv(size);
            memset((void *)buf, 0, size);
            while (TAdPlayerLoadGC__sub_801E1944(lbl_805D5F7C, lbl_804C88C0, buf, lbl_805D5F84) != 0) {
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    if (buf != 0) {
                        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                    }
                    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                        disconnect_protocol__6TLobbyFv();
                    }
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    if (buf != 0) {
                        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                    }
                    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                        disconnect_protocol__6TLobbyFv();
                    }
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            t = get_field_118__22TAdEnterSerialAccessGCFv();
            chr_select_serial_seeds[1] = t;
            chr_select_serial_seeds[0] = t;
            obj = (u8 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
            if (obj != NULL) {
                obj = init_char_slots__23TAdSinglePlyChrSelectGCFi();
            }
            memset(obj, 0, 0x1156C);
            memcpy((s32)obj, buf + 0x2048, 0x1156C);
            decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(obj);
            ret = compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(TAdSinglePlyChrSelectGC__sub_801FCD3C((u32)obj), get_card_window__17TWindowSubComCardFUi(0xFFFF), obj, get_instance__23TAdSinglePlyChrSelectGCFv());
            if (ret != 7) {
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                if (obj != NULL) {
                    register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
                }
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return ret;
            }
            if (*(u32 *)(lbl_805D5F64 + 0x14) != *(u32 *)(TAdSinglePlyChrSelectGC__sub_801FCD3C((u32)obj) + 0x14)) {
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                if (obj != NULL) {
                    register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
                }
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return 2;
            }
            if (buf != 0) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
            }
            if (obj != NULL) {
                register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
            }
        }
        if (get_instance__15TAdPlayerLoadGCFv() == 0 && (ret = TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C)) == 0) {
            sync_char_select_state__10TObjPlayerFv();
            TAdSinglePlyChrSelectGC__sub_8028DC14();
            update_play_time__23TAdSinglePlyChrSelectGCFv();
            increment_counter__23TAdSinglePlyChrSelectGCFv();
            switch (get_main_phase()) {
            case 0xF:
                set_global_flags__23TAdSinglePlyChrSelectGCFi(1);
                memcpy((s32)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), lbl_805D5F60, 0x41C);
                memcpy((s32)TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), lbl_805D5F64, 0x2370);
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 0) {
                    p = get_ptr_4__10TObjPlayerFPv(TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58));
                    for (i = 0; i < 30; i++) {
                        clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv((void *)p);
                        p += 0x1C;
                    }
                    *TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58) = 0;
                    memset(TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58) + 0x250, 0, 0x12C0);
                    *(s32 *)(TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58) + 0x248) = 0;
                    *(s32 *)(TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58) + 0x24C) = 0;
                }
                *(s32 *)(TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58) + 0x36C) = 0;
                break;
            default:
                copy_card_window_data();
                memcpy((s32)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), lbl_805D5F60, 0x41C);
                memcpy((s32)TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), lbl_805D5F64, 0x2370);
                break;
            }
            t = get_field_118__22TAdEnterSerialAccessGCFv();
            chr_select_serial_seeds[1] = t;
            chr_select_serial_seeds[0] = t;
            encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)lbl_805D5F58, chr_select_serial_seeds);
            save_character_file__23TAdSinglePlyChrSelectGCFi(1);
            while (TAdSinglePlyChrSelectGC__sub_801FDA4C() != 0) {
                run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                        disconnect_protocol__6TLobbyFv();
                    }
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            lbl_805D5F78 = 6;
            while (get_instance__15TAdPlayerLoadGCFv() != 0) {
                run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
                if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                        disconnect_protocol__6TLobbyFv();
                    }
                    return 0xFFFF0000;
                }
                render_frame__23TAdSinglePlyChrSelectGCFv();
                render_tick__Fv();
            }
            if (get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF81 || get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF83) {
                ret = 1;
            } else {
                ret = 7;
            }
        }
    }
    return ret;
}

s32 load_and_verify_data(s32 arg0) {
    s32 temp_r3;
    u32 *var_r31;
    u32 temp_r30;

    set_save_slot__23TAdSinglePlyChrSelectGCFi(0);
    temp_r3 = get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
    chr_select_serial_seeds[1] = temp_r3;
    chr_select_serial_seeds[0] = temp_r3;
    memcpy(lbl_805D5F68, lbl_805D5F98 + 0x2048, 0xE28C);
    TAdSinglePlyChrSelectGC__sub_801FFF98(lbl_805D5F68);
    var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv(0xE28C);
    if (var_r31 != NULL) {
        var_r31 = init_windows__23TAdSinglePlyChrSelectGCFi();
    }
    TAdSinglePlyChrSelectGC__sub_801FFC74((u8 *)(var_r31), (u8 *)(lbl_805D5F68));
    temp_r30 = *var_r31;
    *var_r31 = 0U;
    if (temp_r30 != TAdSinglePlyChrSelectGC__sub_80201204(var_r31, 0xE28C)) {
        if (arg0 != 0) {
            __dl__FPv(var_r31);
            return 0;
        }
        init_timestamped_data();
        goto block_9;
    }
    if (arg0 != 0) {
        __dl__FPv(var_r31);
        return 1;
    }
    set_save_slot__23TAdSinglePlyChrSelectGCFi(1);
block_9:
    __dl__FPv(var_r31);
    return 1;
}
u8 *TAdSinglePlyChrSelectGC__sub_801FFC74(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    TAdSinglePlyChrSelectGC__sub_801FFCFC((s32)((void *) (arg0 + 4)), (s32)((void *) (arg1 + 4)));
    *(M2CCopy_FC0 *)((s32) (arg0 + 0xD2C0) + 4) = *(const M2CCopy_FC0 *)((s32) (arg1 + 0xD2C0) + 4);
    M2C_FIELD(arg0, s32 *, 0xE284) = (s32) M2C_FIELD(arg1, s32 *, 0xE284);
    M2C_FIELD(arg0, s32 *, 0xE288) = (s32) M2C_FIELD(arg1, s32 *, 0xE288);
    return arg0;
}
typedef struct M2CCopy_C0 M2CCopy_C0;
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
s32 TAdSinglePlyChrSelectGC__sub_801FFCFC(s32 arg0, s32 arg1) {
  u32 end;
  u32 var_r30;
  s32 var_r29;
  *((M2CCopy_C0 *) arg0) = *((const M2CCopy_C0 *) arg1);
  var_r30 = arg0 + 0xC0;
  end = arg0;
  end = end + 0xD2C0;
  var_r29 = arg1 + 0xC0;
  do
  {
    copy_card__17TWindowSubComCardFiPv((int) var_r30, (int) var_r29);
    var_r30 += 0x100;
    var_r29 += 0x100;
  }
  while (var_r30 < end);
  return arg0;
}

}

}

namespace P801FFD78 {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FFF14_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802004D8_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8020051C_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Ser_80200418 { s32 a; s32 b; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Slot_80200690 { u8 data[0x2798]; };

struct Pair_80200690 { u32 a; u32 b; };

struct Tail_80200690 { Pair_80200690 p0, p1, p2, p3, p4, p5, p6; };

struct Save_80200690 {
    s32 hdr;
    Slot_80200690 slots[7];
    Tail_80200690 tail;
    u32 x;
    u32 y;
};

struct Ser_801FFF98 { s32 a; s32 b; };

struct Ser_802002E8 { s32 a; s32 b; };

struct Ser_80200560 { s32 a; s32 b; };

typedef s32 M2C_UNK;
struct Ser_802000C8 { s32 a; s32 b; };

struct Ser_80200778 { s32 a; s32 b; };

struct Ser_80200470 { s32 a; s32 b; };

struct Str_80200A44 {
    u8 pad0[0x20];
    char title[0x24];
    u8 icon[0x70];
    char name[0x10];
};

struct File_80200A44 {
    char name[0x12];
    char title[0x22];
    u8 icon[0x18];
    s16 f4C;
    s16 f4E;
    s32 f50;
    s16 f54;
    s32 buf;
    s32 size;
};

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);
M2C_UNK reset_save_header__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memcpy(void *, s32, M2C_UNK);
extern s32 *lbl_805D5F6C;
extern s32 lbl_805D5F9C;
s32 verify_save_checksum__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
extern s32 lbl_805D5F68;
void TAdSinglePlyChrSelectGC__sub_801FFF14(void);
s32 get_serial_result__22TAdEnterSerialAccessGCFv();
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
extern s32 lbl_805D5F5C;
s32 encrypt_and_save__23TAdSinglePlyChrSelectGCFv(void);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
extern s32 lbl_805D5F58;
s32 write_encrypted_save__23TAdSinglePlyChrSelectGCFv(void);
void __construct_array(void *, void *, void *, int, int);
void reinit__17TWindowSubComCardFi();
u8 *construct_card_window_array__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
s32 get_serial_result__22TAdEnterSerialAccessGCFv();
M2C_UNK memcpy(void *, s32, M2C_UNK);
s32 TAdPlayerLoadGC__sub_801FD814();
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
extern s32 lbl_805D5F5C;
extern s32 lbl_805D5F94;
void TAdSinglePlyChrSelectGC__sub_80200418(void);
void *copy_char_slot_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
s32 copy_save_data__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 get_ptr_4__10TObjPlayerFPv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
M2C_UNK clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(s32);
M2C_UNK reset_action_palette__10TObjPlayerFPv(void *);
M2C_UNK init_character_stats_for_level(u8, void *, s32);
M2C_UNK init_class_starting_inventory(void *);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern s32 lbl_805D5F58;
extern void *lbl_805D5F60;
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(void *, void *, s32);
void subtractive_rng_unshuffle(void *, s32, s32, s32);
void subtractive_rng_make_shuffle(void *);
s32 subtractive_rng_xor_buffer(void *, void *, s32);
void subtractive_rng_seed(void *, s32);
void __dl__FPv(s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void TAdSinglePlyChrSelectGC__sub_801FFC74(s32, void *);
s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0);
extern u8 chr_select_rng_state[];
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
s32 TAdSinglePlyChrSelectGC__sub_801FFF98(void *arg0);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
M2C_UNK memcpy(void *, s32, M2C_UNK);
s32 TAdPlayerLoadGC__sub_801FD770();
s32 TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCD3C(s32);
M2C_UNK TLobby__sub_801F494C(M2C_UNK);
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
u32 check_flag__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
void reset_character_data__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK init_class_starting_inventory(void *);
void set_state__23TAdSinglePlyChrSelectGCFi(int a0);
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
extern s32 current_language;
extern s32 lbl_805D5F58;
extern void *lbl_805D5F60;
extern void *lbl_805D5F64;
extern s32 lbl_805D5F94;
s32 apply_loaded_character__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(void *, void *, s32);
void subtractive_rng_unshuffle(void *, s32, s32, s32);
void subtractive_rng_make_shuffle(void *);
s32 subtractive_rng_xor_buffer(void *, void *, s32);
void subtractive_rng_seed(void *, s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0);
s32 copy_save_data__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
extern u8 chr_select_rng_state[];
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
void decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(void *, void *, s32);
void permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(void *, s32, s32, s32);
void subtractive_rng_make_shuffle(void *);
s32 subtractive_rng_xor_buffer(void *, void *, s32);
s32 subtractive_rng_next(void *);
void subtractive_rng_seed(void *, s32);
void __dl__FPv(s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void TAdSinglePlyChrSelectGC__sub_801FFC74(s32, void *);
s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);
extern u8 chr_select_rng_state[];
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
M2C_UNK TAdSinglePlyChrSelectGC__sub_802000C8(void *arg0_, void *arg1);
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(void *, void *, s32);
void permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(void *, s32, s32, s32);
void subtractive_rng_make_shuffle(void *);
s32 subtractive_rng_xor_buffer(void *, void *, s32);
s32 subtractive_rng_next(void *);
void subtractive_rng_seed(void *, s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void TAdSinglePlyChrSelectGC__sub_801FCCB4(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0);
void set_id__23TAdSinglePlyChrSelectGCFPvi(void *, s32);
s32 copy_save_data__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);
extern u8 chr_select_rng_state[];
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);
s32 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();
s32 alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
void disconnect_protocol__6TLobbyFv();
s32 get_ptr_4__10TObjPlayerFPv();
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
s32 TAdPlayerLoadGC__sub_801E1944(s32, void *, u32, s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, void *);
void render_tick__Fv();
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCD3C(s32);
void render_frame__23TAdSinglePlyChrSelectGCFv(void);
s32 compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(s32, s32, s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C(void);
void increment_counter__23TAdSinglePlyChrSelectGCFv();
void decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);
void update_play_time__23TAdSinglePlyChrSelectGCFv();
s32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 get_card_window__17TWindowSubComCardFUi(u32);
void set_global_flags__23TAdSinglePlyChrSelectGCFi(s32);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(s32);
void init_slots__23TAdSinglePlyChrSelectGCFv();
void TAdSinglePlyChrSelectGC__sub_8028DC14();
void sync_char_select_state__10TObjPlayerFv();
M2C_UNK memcpy(void *, s32, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern u8 lbl_804C88C0[];
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
extern s32 lbl_805D55C0;
extern s32 lbl_805D5F58;
extern void *lbl_805D5F60;
extern void *lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
s32 save_online_character__23TAdSinglePlyChrSelectGCFv(void);
s32 TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCD3C(s32);
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
M2C_UNK memcpy(void *, s32, M2C_UNK);
extern RecoveredGlobal_801FFF14_lbl_80513910 chr_select_serial_seeds;
extern s32 lbl_805D5F58;
extern void *lbl_805D5F60;
extern void *lbl_805D5F64;
void prepare_save_data__23TAdSinglePlyChrSelectGCFv(void);
void TAdPlayerLoadGC__sub_801E14E4(File_80200A44 *);
void TAdPlayerLoadGC__sub_801E14E8(File_80200A44 *, s32);
void build_save_file_image__15TAdPlayerLoadGCFPvPv(s32, File_80200A44 *);
void decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(void *arg0);
char *strcpy(char *, const char *);
M2C_UNK memcpy(void *, s32, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern u8 lbl_804C88C0[];
extern s32 lbl_805D5F58;
extern s32 lbl_805D5F5C;
extern s32 lbl_805D5F94;
s32 save_character_file__23TAdSinglePlyChrSelectGCFi(int arg0);
void __construct_array(void *, void *, void *, int, int);
void init_guild_card_tag__17TWindowSubComCardFi();
int construct_card_window_array__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);
M2C_UNK memcpy(void *, s32, M2C_UNK);
extern s32 *lbl_805D5F70;
extern s32 lbl_805D5F9C;
void verify_save_checksum__23TAdSinglePlyChrSelectGCFv(void);
void TAdPlayerLoadGC__sub_801E14E4(File_80200A44 *);
void TAdPlayerLoadGC__sub_801E14E8(File_80200A44 *, s32);
void build_save_file_image__15TAdPlayerLoadGCFPvPv(s32, File_80200A44 *);
char *strcpy(char *, const char *);
M2C_UNK memcpy(void *, s32, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern u8 lbl_804C88C0[];
extern s32 lbl_805D5F68;
extern s32 lbl_805D5F98;
M2C_UNK build_save_file__23TAdSinglePlyChrSelectGCFv();
void TAdPlayerLoadGC__sub_801E14E4(File_80200A44 *);
void TAdPlayerLoadGC__sub_801E14E8(File_80200A44 *, s32);
void build_save_file_image__15TAdPlayerLoadGCFPvPv(s32, File_80200A44 *);
char *strcpy(char *, const char *);
M2C_UNK memcpy(void *, s32, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern u8 lbl_804C88C0[];
extern s32 *lbl_805D5F6C;
extern s32 lbl_805D5F9C;
M2C_UNK build_default_save_file__23TAdSinglePlyChrSelectGCFv();
}

extern "C" {

void create_instance__23TAdSinglePlyChrSelectGCFv(void);
void game_state_load(void);
s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCD3C(s32);
void reset_character_data__23TAdSinglePlyChrSelectGCFv(void);
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);
M2C_UNK init_class_starting_inventory(void *);
M2C_UNK TLobby__sub_801F494C(M2C_UNK);
u32 check_flag__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memcpy(void *, s32, M2C_UNK);

s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    construct_card_window_array__23TAdSinglePlyChrSelectGCFPv((u8 *)(arg0 + 4));
    construct_card_window_array__23TAdSinglePlyChrSelectGCFi((s32)(arg0 + 0xD2C4));
    return arg0;
}

extern s32 *lbl_805D5F6C;

int construct_card_window_array__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    __construct_array((void *)arg0, (void *)init_guild_card_tag__17TWindowSubComCardFi, 0, 0x90, 0x1C);
    return arg0;
}

u8 *construct_card_window_array__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    __construct_array(arg0 + 0xC0, (void *)reinit__17TWindowSubComCardFi, 0, 0x100, 0xD2);
    return arg0;
}

#pragma push
#pragma fp_contract on
s32 verify_save_checksum__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    u32 temp_r31;
    u32 temp_r3;
    memcpy((void *)((*(u32 * *)&lbl_805D5F6C)), (s32)(lbl_805D5F9C + 0x2048), (M2C_UNK)(0x11C));
    temp_r31 = *(*(u32 * *)&lbl_805D5F6C);
    *(*(u32 * *)&lbl_805D5F6C) = 0U;
    temp_r3 = ((u32)TAdSinglePlyChrSelectGC__sub_80201204((s32 *)((*(u32 * *)&lbl_805D5F6C)), (M2C_UNK)(0x11C)));
    if (temp_r3 != temp_r31) {
        if (arg0 == 0) {
            reset_save_header__23TAdSinglePlyChrSelectGCFv();
        }
        return 0;
    }
    return 1;
}
#pragma pop

typedef char RecoveredGlobal_801FFF14_lbl_80513910_size[sizeof(RecoveredGlobal_801FFF14_lbl_80513910) == 0x10 ? 1 : -1];

void verify_save_checksum__23TAdSinglePlyChrSelectGCFv(void) {
    u32 sum;
    u32 r;
    memcpy((void *)((void *)lbl_805D5F70), (s32)(lbl_805D5F9C + 0x2048), (M2C_UNK)(0x11C));
    sum = *lbl_805D5F70;
    *lbl_805D5F70 = 0;
    r = (u32)TAdSinglePlyChrSelectGC__sub_80201204((s32 *)(lbl_805D5F70), (M2C_UNK)(0x11C));
    if (r != sum) {
        return;
    }
}

void TAdSinglePlyChrSelectGC__sub_801FFF14(void) {
    s32 temp_r3;
    temp_r3 = get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
    M2C_FIELD(&chr_select_serial_seeds.value, s32 *, 4) = temp_r3;
    M2C_FIELD(&chr_select_serial_seeds.value, s32 *, 0) = temp_r3;
    TAdSinglePlyChrSelectGC__sub_802000C8((void *)((void *) (lbl_805D5F68)), (void *)((void *) (&chr_select_serial_seeds.value)));
    build_save_file__23TAdSinglePlyChrSelectGCFv();
    TAdSinglePlyChrSelectGC__sub_801FFF98((void *)((void *) (lbl_805D5F68)));
}

void create_instance__23TAdSinglePlyChrSelectGCFv(void) {
    *lbl_805D5F6C = 0;
    *lbl_805D5F6C = TAdSinglePlyChrSelectGC__sub_80201204(lbl_805D5F6C, 0x11C);
    build_default_save_file__23TAdSinglePlyChrSelectGCFv();
}

extern s32 current_language;
extern s32 lbl_805D5F58;
extern void *lbl_805D5F60;
extern void *lbl_805D5F64;

s32 TAdSinglePlyChrSelectGC__sub_801FFF98(void *arg0) {
    s32 a;
    s32 b;
    a = alloc__23TAdSinglePlyChrSelectGCFPv(0xE28C);
    if (a != 0) {
        a = init_windows__23TAdSinglePlyChrSelectGCFi(a);
    }
    b = alloc__23TAdSinglePlyChrSelectGCFPv(0xE28C);
    if (b != 0) {
        b = init_windows__23TAdSinglePlyChrSelectGCFi(b);
    }
    TAdSinglePlyChrSelectGC__sub_801FFC74(a, arg0);
    TAdSinglePlyChrSelectGC__sub_801FFC74(b, arg0);
    subtractive_rng_seed(chr_select_rng_state, ((Ser_801FFF98 *)&chr_select_serial_seeds)[0].b);
    subtractive_rng_make_shuffle(chr_select_rng_state);
    subtractive_rng_unshuffle(chr_select_rng_state, a, b, 0xE28C);
    TAdSinglePlyChrSelectGC__sub_801FFC74((s32)arg0, (void *)b);
    __dl__FPv(b);
    __dl__FPv(a);
    subtractive_rng_seed(chr_select_rng_state, ((Ser_801FFF98 *)&chr_select_serial_seeds)[0].a);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(chr_select_rng_state, arg0, 0xE28C);
    subtractive_rng_seed(chr_select_rng_state, *(s32 *)((u8 *)arg0 + 0xE288));
    return subtractive_rng_xor_buffer(chr_select_rng_state, arg0, 0xE288);
}

#pragma push
#pragma opt_common_subs off
#define self ((s32 *)arg0_)
M2C_UNK TAdSinglePlyChrSelectGC__sub_802000C8(void *arg0_, void *arg1) {
    s32 a;
    s32 b;
    *(s32 *)((u8 *)self + 0xE288) = subtractive_rng_next(chr_select_rng_state);
    self[0] = 0;
    self[0] = TAdSinglePlyChrSelectGC__sub_80201204(self, 0xE28C);
    subtractive_rng_seed(chr_select_rng_state, *(s32 *)((u8 *)self + 0xE288));
    subtractive_rng_xor_buffer(chr_select_rng_state, self, 0xE288);
    subtractive_rng_seed(chr_select_rng_state, ((Ser_802000C8 *)&chr_select_serial_seeds)[0].a);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(chr_select_rng_state, self, 0xE28C);
    a = alloc__23TAdSinglePlyChrSelectGCFPv(0xE28C);
    if (a != 0) {
        a = init_windows__23TAdSinglePlyChrSelectGCFi(a);
    }
    b = alloc__23TAdSinglePlyChrSelectGCFPv(0xE28C);
    if (b != 0) {
        b = init_windows__23TAdSinglePlyChrSelectGCFi(b);
    }
    TAdSinglePlyChrSelectGC__sub_801FFC74(a, self);
    TAdSinglePlyChrSelectGC__sub_801FFC74(b, self);
    subtractive_rng_seed(chr_select_rng_state, ((Ser_802000C8 *)&chr_select_serial_seeds)[0].b);
    subtractive_rng_make_shuffle(chr_select_rng_state);
    permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(chr_select_rng_state, a, b, 0xE28C);
    TAdSinglePlyChrSelectGC__sub_801FFC74((s32)self, (void *)b);
    __dl__FPv(b);
    __dl__FPv(a);
}
#undef self
#pragma pop

void game_state_load(void) {
    memcpy(lbl_805D5F60, TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), 0x41C);
    memcpy(lbl_805D5F64, TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), 0x2370);
    TLobby__sub_801F494C(0);
    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 0) {
        if (check_flag__23TAdSinglePlyChrSelectGCFi(1) != 0U) {
            reset_character_data__23TAdSinglePlyChrSelectGCFv();
        } else {
            void *a = lbl_805D5F60;
            void *b;
            if (((u8) M2C_FIELD(a, u8 *, 0) == 0) && ((s32) M2C_FIELD(a, s32 *, 0x36C) == 0) && ((b = lbl_805D5F64, (s32) M2C_FIELD(b, s32 *, 0x248)) == 0) && ((s32) M2C_FIELD(b, s32 *, 0x24C) == 0)) {
                init_class_starting_inventory(a);
            }
        }
    }
    M2C_FIELD(lbl_805D5F60, s8 *, 3) = (s8) current_language;
}
typedef char RecoveredGlobal_802004D8_lbl_80513910_size[sizeof(RecoveredGlobal_802004D8_lbl_80513910) == 0x10 ? 1 : -1];

s32 apply_loaded_character__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 r = get_field_118__22TAdEnterSerialAccessGCFv();
    ((Ser_802002E8 *)&chr_select_serial_seeds)[0].b = r;
    ((Ser_802002E8 *)&chr_select_serial_seeds)[0].a = r;
    memcpy((void *)((void *)lbl_805D5F58), (s32)(lbl_805D5F94 + 0x2048), (M2C_UNK)(0x1156C));
    decrypt_char_data__23TAdSinglePlyChrSelectGCFPv((void *)((void *)lbl_805D5F58));
    if (TAdPlayerLoadGC__sub_801FD770() != 7) {
        return 0;
    }
    if (arg0 != 0) {
        return 1;
    }
    memcpy((void *)(lbl_805D5F60), (s32)(TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58)), (M2C_UNK)(0x41C));
    memcpy((void *)((*(void *const *)&lbl_805D5F64)), (s32)(TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58)), (M2C_UNK)(0x2370));
    TLobby__sub_801F494C((M2C_UNK)(0));
    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 0) {
        if (check_flag__23TAdSinglePlyChrSelectGCFi((M2C_UNK)(1)) != 0U) {
            reset_character_data__23TAdSinglePlyChrSelectGCFv();
        } else {
            void *a = lbl_805D5F60;
            void *b;
            if (*(u8 *)a == 0 && *(s32 *)((u8 *)a + 0x36C) == 0 &&
                (b = (*(void *const *)&lbl_805D5F64), *(s32 *)((u8 *)b + 0x248) == 0) && *(s32 *)((u8 *)b + 0x24C) == 0) {
                init_class_starting_inventory(a);
            }
        }
    }
    *((s8 *)lbl_805D5F60 + 3) = (s8)current_language;
    set_state__23TAdSinglePlyChrSelectGCFi(0);
    return 1;
}

void TAdSinglePlyChrSelectGC__sub_80200418(void) {
    s32 r = get_serial_result__22TAdEnterSerialAccessGCFv();
    ((Ser_80200418 *)&chr_select_serial_seeds)[0].b = r;
    ((Ser_80200418 *)&chr_select_serial_seeds)[0].a = r;
    memcpy((void *)((void *)lbl_805D5F5C), (s32)(lbl_805D5F94 + 0x2048), (M2C_UNK)(0x1156C));
    decrypt_char_data__23TAdSinglePlyChrSelectGCFPv((void *)((void *)lbl_805D5F5C));
    if (TAdPlayerLoadGC__sub_801FD814() == 7) {
        return;
    }
}

void prepare_save_data__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = get_field_118__22TAdEnterSerialAccessGCFv();
    ((Ser_80200470 *)&chr_select_serial_seeds)[0].b = r;
    ((Ser_80200470 *)&chr_select_serial_seeds)[0].a = r;
    memcpy((void *)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), (s32)lbl_805D5F60, 0x41C);
    memcpy((void *)TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), (s32)lbl_805D5F64, 0x2370);
    ((M2C_UNK (*)(s32))encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv)(lbl_805D5F58);
    save_character_file__23TAdSinglePlyChrSelectGCFi((int)(1));
}

s32 encrypt_and_save__23TAdSinglePlyChrSelectGCFv(void) {
    s32 temp_r3;
    temp_r3 = get_serial_result__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&(*(RecoveredGlobal_802004D8_lbl_80513910 *)&chr_select_serial_seeds).value, s32 *, 4) = temp_r3;
    M2C_FIELD(&(*(RecoveredGlobal_802004D8_lbl_80513910 *)&chr_select_serial_seeds).value, s32 *, 0) = temp_r3;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)((void *) (lbl_805D5F5C)), (void *)((void *) (&(*(RecoveredGlobal_802004D8_lbl_80513910 *)&chr_select_serial_seeds).value)));
    save_character_file__23TAdSinglePlyChrSelectGCFi((int)((int) (0)));
    return 1;
}
typedef char RecoveredGlobal_8020051C_lbl_80513910_size[sizeof(RecoveredGlobal_8020051C_lbl_80513910) == 0x10 ? 1 : -1];
s32 write_encrypted_save__23TAdSinglePlyChrSelectGCFv(void) {
    s32 temp_r3;
    temp_r3 = get_field_118__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&(*(RecoveredGlobal_8020051C_lbl_80513910 *)&chr_select_serial_seeds).value, s32 *, 4) = temp_r3;
    M2C_FIELD(&(*(RecoveredGlobal_8020051C_lbl_80513910 *)&chr_select_serial_seeds).value, s32 *, 0) = temp_r3;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)((void *) (lbl_805D5F58)), (void *)((void *) (&(*(RecoveredGlobal_8020051C_lbl_80513910 *)&chr_select_serial_seeds).value)));
    save_character_file__23TAdSinglePlyChrSelectGCFi((int)((int) (1)));
    return 1;
}

void decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 a;
    s32 b;
    a = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (a != 0) {
        a = init_char_slots__23TAdSinglePlyChrSelectGCFi(a);
    }
    b = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (b != 0) {
        b = init_char_slots__23TAdSinglePlyChrSelectGCFi(b);
    }
    copy_save_data__23TAdSinglePlyChrSelectGCFii(a, (s32)arg0);
    subtractive_rng_seed(chr_select_rng_state, ((Ser_80200560 *)&chr_select_serial_seeds)[0].b);
    subtractive_rng_make_shuffle(chr_select_rng_state);
    subtractive_rng_unshuffle(chr_select_rng_state, a, b, 0x1156C);
    copy_save_data__23TAdSinglePlyChrSelectGCFii((s32)arg0, b);
    register_callback__23TAdSinglePlyChrSelectGCFis(b, 1);
    register_callback__23TAdSinglePlyChrSelectGCFis(a, 1);
    subtractive_rng_seed(chr_select_rng_state, ((Ser_80200560 *)&chr_select_serial_seeds)[0].a);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(chr_select_rng_state, arg0, 0x1156C);
    subtractive_rng_seed(chr_select_rng_state, TAdSinglePlyChrSelectGC__sub_801FCCC0((u8 *)arg0));
    subtractive_rng_xor_buffer(chr_select_rng_state, arg0, 0x11568);
}

s32 copy_save_data__23TAdSinglePlyChrSelectGCFii(s32 arg0, s32 arg1) {
    Save_80200690 *dst = (Save_80200690 *)arg0;
    Save_80200690 *src = (Save_80200690 *)arg1;
    Slot_80200690 *d;
    Slot_80200690 *s;
    dst->hdr = src->hdr;
    d = dst->slots;
    s = src->slots;
    do {
        copy_char_slot_data__23TAdSinglePlyChrSelectGCFPvPv(d, s);
        d++;
        s++;
    } while (d < &dst->slots[7]);
    dst->tail = src->tail;
    dst->x = src->x;
    dst->y = src->y;
    return arg0;
}

#define self ((s32 *)arg0)
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1) {
    s32 a;
    s32 b;
    TAdSinglePlyChrSelectGC__sub_801FCCB4(self, subtractive_rng_next(chr_select_rng_state));
    set_id__23TAdSinglePlyChrSelectGCFPvi(self, 0);
    set_id__23TAdSinglePlyChrSelectGCFPvi(self, TAdSinglePlyChrSelectGC__sub_80201204(self, 0x1156C));
    subtractive_rng_seed(chr_select_rng_state, TAdSinglePlyChrSelectGC__sub_801FCCC0((u8 *)self));
    subtractive_rng_xor_buffer(chr_select_rng_state, self, 0x11568);
    subtractive_rng_seed(chr_select_rng_state, ((Ser_80200778 *)&chr_select_serial_seeds)[0].a);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(chr_select_rng_state, self, 0x1156C);
    a = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (a != 0) {
        a = init_char_slots__23TAdSinglePlyChrSelectGCFi(a);
    }
    b = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (b != 0) {
        b = init_char_slots__23TAdSinglePlyChrSelectGCFi(b);
    }
    copy_save_data__23TAdSinglePlyChrSelectGCFii(a, (s32)self);
    subtractive_rng_seed(chr_select_rng_state, ((Ser_80200778 *)&chr_select_serial_seeds)[0].b);
    subtractive_rng_make_shuffle(chr_select_rng_state);
    permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(chr_select_rng_state, a, b, 0x1156C);
    copy_save_data__23TAdSinglePlyChrSelectGCFii((s32)self, b);
    register_callback__23TAdSinglePlyChrSelectGCFis(b, 1);
    register_callback__23TAdSinglePlyChrSelectGCFis(a, 1);
}
#undef self

M2C_UNK build_save_file__23TAdSinglePlyChrSelectGCFv() {
    s32 base = (s32)lbl_804C88C0;
    File_80200A44 f;
    memset((void *)(&f), 0, sizeof(f));
    strcpy(f.name, (char *)(base + 0xB4));
    strcpy(f.title, (char *)(base + 0x11C));
    memcpy((void *)(f.icon), base + 0xEC, 0x10);
    TAdPlayerLoadGC__sub_801E14E8(&f, 1);
    f.f4C = 1;
    f.f4E = 1;
    f.f50 = 0;
    f.f54 = 0;
    f.buf = lbl_805D5F68;
    f.size = 0xE28C;
    build_save_file_image__15TAdPlayerLoadGCFPvPv(lbl_805D5F98, &f);
    TAdPlayerLoadGC__sub_801E14E4(&f);
}

M2C_UNK build_default_save_file__23TAdSinglePlyChrSelectGCFv() {
    s32 base = (s32)lbl_804C88C0;
    File_80200A44 f;
    memset((void *)(&f), 0, sizeof(f));
    strcpy(f.name, (char *)(base + 0xB4));
    strcpy(f.title, (char *)(base + 0xC8));
    memcpy((void *)(f.icon), base + 0xEC, 0x10);
    TAdPlayerLoadGC__sub_801E14E8(&f, 0);
    f.f4C = 1;
    f.f4E = 1;
    f.f50 = 0;
    f.f54 = 0;
    f.buf = (s32)lbl_805D5F6C;
    f.size = 0x11C;
    build_save_file_image__15TAdPlayerLoadGCFPvPv(lbl_805D5F9C, &f);
    TAdPlayerLoadGC__sub_801E14E4(&f);
}

s32 save_character_file__23TAdSinglePlyChrSelectGCFi(int arg0) {
    s32 base = (s32)lbl_804C88C0;
    File_80200A44 f;
    memset((void *)(&f), (M2C_UNK)(0), (M2C_UNK)(sizeof(f)));
    strcpy(f.name, ((Str_80200A44 *)base)->name);
    strcpy(f.title, ((Str_80200A44 *)base)->title);
    memcpy((void *)(f.icon), (s32)((s32)((Str_80200A44 *)base)->icon), (M2C_UNK)(0x10));
    TAdPlayerLoadGC__sub_801E14E8(&f, 2);
    f.f4C = 1;
    f.f4E = 1;
    f.f50 = 0;
    f.f54 = 0;
    if (arg0 != 0) {
        f.buf = lbl_805D5F58;
    } else {
        f.buf = lbl_805D5F5C;
    }
    f.size = 0x1156C;
    build_save_file_image__15TAdPlayerLoadGCFPvPv(lbl_805D5F94, &f);
    TAdPlayerLoadGC__sub_801E14E4(&f);
    if (arg0 != 0) {
        decrypt_char_data__23TAdSinglePlyChrSelectGCFPv((void *)lbl_805D5F58);
    } else {
        decrypt_char_data__23TAdSinglePlyChrSelectGCFPv((void *)lbl_805D5F5C);
    }
}

void reset_character_data__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;
    s32 var_r30;

    if ((void *) lbl_805D5F60 != NULL) {
        TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58);
        var_r30 = get_ptr_4__10TObjPlayerFPv();
        var_r31 = 0;
        do {
            clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(var_r30);
            var_r31 += 1;
            var_r30 += 0x1C;
        } while (var_r31 < 0x1E);
        M2C_FIELD(lbl_805D5F60, s8 *, 0) = 0;
        init_class_starting_inventory(lbl_805D5F60);
        init_character_stats_for_level(M2C_FIELD(lbl_805D5F60, u8 *, 0x3A1), lbl_805D5F60, M2C_FIELD(lbl_805D5F60, s32 *, 0x364));
        reset_action_palette__10TObjPlayerFPv(lbl_805D5F60);
        M2C_FIELD(lbl_805D5F60, s32 *, 0x36C) = 0;
    }
    if ((void *) lbl_805D5F64 != NULL) {
        memset((u8 *)lbl_805D5F64 + 0x250, 0, 0x12C0);
        M2C_FIELD(lbl_805D5F64, s32 *, 0x248) = 0;
        M2C_FIELD(lbl_805D5F64, s32 *, 0x24C) = 0;
        memset((u8 *)lbl_805D5F64 + 0x21C4, 0, 0x100);
    }
}
s32 save_online_character__23TAdSinglePlyChrSelectGCFv(void) {
    s32 cw;
    s32 inst;
    s32 obj;
    u32 buf;
    if (lbl_805D55C0 == 1) {
        if (lbl_805D5F64 != NULL) {
            M2C_FIELD(lbl_805D5F64, s32 *, 0x14)++;
            return M2C_FIELD(lbl_805D5F64, s32 *, 0x14);
        }
        return 0;
    }
    if (lbl_805D5F60 != NULL && lbl_805D5F64 != NULL && (u32)lbl_805D5F58 != 0) {
        init_slots__23TAdSinglePlyChrSelectGCFv();
        lbl_805D5F7C = ((s8 (*)(void))get_chr_select_state__23TAdSinglePlyChrSelectGCFv)();
        if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return 0;
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return 0;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        if (find_card_file__15TAdPlayerLoadGCFiPv(lbl_805D5F7C, lbl_804C88C0) != 0) {
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return 0;
        }
        obj = lbl_805D5F84 << 13;
        buf = alloc__22TQuestVmDownLoadServerFPv(obj);
        memset((void *)buf, 0, obj);
        while (TAdPlayerLoadGC__sub_801E1944(lbl_805D5F7C, lbl_804C88C0, buf, lbl_805D5F84) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                return 0;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                return 0;
            }
            render_frame__23TAdSinglePlyChrSelectGCFv();
            render_tick__Fv();
        }
        ((s32 *)&chr_select_serial_seeds)[0] = ((s32 *)&chr_select_serial_seeds)[1] = get_field_118__22TAdEnterSerialAccessGCFv();
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
        if (obj != 0) {
            obj = init_char_slots__23TAdSinglePlyChrSelectGCFi(obj);
        }
        memset((void *)obj, 0, 0x1156C);
        memcpy((void *)obj, buf + 0x2048, 0x1156C);
        decrypt_char_data__23TAdSinglePlyChrSelectGCFPv((void *)obj);
        if (compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(TAdSinglePlyChrSelectGC__sub_801FCD3C(obj),
                get_card_window__17TWindowSubComCardFUi(0xFFFF), obj, get_instance__23TAdSinglePlyChrSelectGCFv()) != 7) {
            if (buf != 0) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
            }
            if ((u32)obj != 0) {
                register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
            }
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return 0;
        }
        if (buf != 0) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        }
        if ((u32)obj != 0) {
            register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
        }
        if (get_instance__15TAdPlayerLoadGCFv() == 0 && TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) == 0) {
            sync_char_select_state__10TObjPlayerFv();
            TAdSinglePlyChrSelectGC__sub_8028DC14();
            update_play_time__23TAdSinglePlyChrSelectGCFv();
            set_global_flags__23TAdSinglePlyChrSelectGCFi(1);
            M2C_FIELD(lbl_805D5F64, s32 *, 0x14)++;
            increment_counter__23TAdSinglePlyChrSelectGCFv();
            memcpy((void *)((M2C_UNK)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58)), (s32)lbl_805D5F60, 0x41C);
            memcpy((void *)TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), (s32)lbl_805D5F64, 0x2370);
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 0) {
                s32 i;
                s32 p;
                TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58);
                p = get_ptr_4__10TObjPlayerFPv();
                for (i = 0; i < 30; i++) {
                    clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(p);
                    p += 0x1C;
                }
                {
                    u8 *s = (u8 *)((M2C_UNK)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58));
                    *s = 0;
                }
                {
                    u8 *q = (u8 *)TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58);
                    memset(q + 0x250, 0, 0x12C0);
                    M2C_FIELD(q, s32 *, 0x248) = 0;
                    M2C_FIELD(q, s32 *, 0x24C) = 0;
                }
            }
            M2C_FIELD(((M2C_UNK)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58)), s32 *, 0x36C) = 0;
            ((s32 *)&chr_select_serial_seeds)[0] = ((s32 *)&chr_select_serial_seeds)[1] = get_field_118__22TAdEnterSerialAccessGCFv();
            ((M2C_UNK (*)(void *))encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv)((void *)lbl_805D5F58);
            save_character_file__23TAdSinglePlyChrSelectGCFi((int)(1));
            if (TAdSinglePlyChrSelectGC__sub_801FDA4C() == 0) {
                lbl_805D5F78 = 6;
            }
        }
        return M2C_FIELD(lbl_805D5F64, s32 *, 0x14);
    }
    return 0;
}

}

}

namespace P801FBF54 {

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802010E8_lbl_80513904 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80201970_lbl_805137D8 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80201970_lbl_805137F8 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct Item_80201354 { u8 pad[0x18]; };

struct Card_80201354 {
    s32 f0;
    s32 secs;
    u32 magic;
    s32 fC;
    s32 f10;
    s32 f14;
    u8 f18[0x1C];
    u8 f34[0x10];
    u8 pad44[0x248 - 0x44];
    s32 f248;
    s32 f24C;
    Item_80201354 items[200];
    u8 pad1510[0x22C4 - 0x1510];
    u8 f22C4[0x2370 - 0x22C4];
};

extern "C" {
s32 TLobby__sub_8001E8B8(void);
int TLobby__sub_80132EC8(void);
void reset_load_state__15TAdPlayerLoadGCFPvPv(void *, void *);
M2C_UNK DateToSeconds__FP9DateStampPi(M2C_UNK *, s32 *);
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);
M2C_UNK memmove(void *, void *, int);
M2C_UNK memset(M2C_UNK, s32, s32);
extern u8 *lbl_805D5F6C;
void reset_save_header__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK memset(M2C_UNK, s32, s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32 allocation);
extern u32 lbl_805D5F5C;
extern u32 lbl_805D5F70;
void alloc_char_buffers__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK DateToSeconds__FP9DateStampPi(M2C_UNK *, s32 *);
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);
extern M2C_UNK char_select_date_stamp[];
extern void *lbl_805D5F64;
s32 update_play_time__23TAdSinglePlyChrSelectGCFv(void);
u8 * __dt__12TPlyCharDataFv(void *, short);
void __dl__FPv(void*);
void register_callback__23TAdSinglePlyChrSelectGCFis(void*, int);
s32 free_char_data_slots__23TAdSinglePlyChrSelectGCFPv(void *);
s32 free_buffer__23TAdSinglePlyChrSelectGCFv(void);
s32 free_data__23TAdSinglePlyChrSelectGCFv(void);
s32 free__23TAdSinglePlyChrSelectGCFv(void);
s32 clear_slot_lists__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80201970_lbl_805137D8 chr_select_buffer_ptr_table;
extern RecoveredGlobal_80201970_lbl_805137F8 chr_select_request_buffer;
extern u32 lbl_805D5F58;
extern u8 *lbl_805D5F60;
extern void *lbl_805D5F64;
extern s32 lbl_805D5F68;
void release_all__23TAdSinglePlyChrSelectGCFv(void);
s32 TAdPlayerLoadGC__sub_801E1B50(void *);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C();
s32 load_chr_select_slot__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FEBBC();
M2C_UNK load_selected_char__23TAdSinglePlyChrSelectGCFv();
M2C_UNK load_and_verify_data(int);
M2C_UNK verify_save_checksum__23TAdSinglePlyChrSelectGCFi(int);
M2C_UNK verify_save_checksum__23TAdSinglePlyChrSelectGCFv();
M2C_UNK apply_loaded_character__23TAdSinglePlyChrSelectGCFi(int);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200418();
M2C_UNK prepare_save_data__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028DC14();
M2C_UNK init_battle_selection__10TObjPlayerFv();
M2C_UNK reset_quest_id__23TAdSinglePlyChrSelectGCFv();
extern s32 lbl_805D49B4;
extern u32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F80;
extern s32 lbl_805D5F8C;
extern s32 lbl_805D5FA8;
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv(void);
void load_symbol_chat_data__20TWindowSubSymbolChatFPv(Card_80201354 *);
s32 TLobby__sub_80146D50(s32);
s32 TLobby__sub_80146D68(s32);
void set_fresh_card_flag(Card_80201354 *);
M2C_UNK DateToSeconds__FP9DateStampPi(M2C_UNK *, s32 *);
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);
void clear_all_story_flags();
Card_80201354 *get_card_window__17TWindowSubComCardFUi(u32);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
void init_item_entry__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
void TWindowShortListCtrl__sub_8026E884(void *);
void TAdSinglePlyChrSelectGC__sub_8028DC1C();
void begin_action_from_char_select__10TObjPlayerFv();
void *memcpy(void *, s32, s32);
M2C_UNK memset(M2C_UNK, s32, s32);
extern M2C_UNK char_select_date_stamp[];
s32 init_fresh_character_card(void);
}

extern "C" {

s32 alloc_global_buffer(void);
s32 buffer_init(void);
s32 free__23TAdSinglePlyChrSelectGCFv(void);
s32 free_buffer__23TAdSinglePlyChrSelectGCFv(void);
void free_callbacks__23TAdSinglePlyChrSelectGCFv(void);
s32 free_data__23TAdSinglePlyChrSelectGCFv(void);
s32 get_player_count__23TAdSinglePlyChrSelectGCFv(void);
int get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 increment_frame__23TAdSinglePlyChrSelectGCFv(void);
s32 init_and_register__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 init_buffer(void);
void init_timestamped_data(void);
s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK DateToSeconds__FP9DateStampPi(M2C_UNK *, s32 *);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32 allocation);
M2C_UNK copy_save_data__23TAdSinglePlyChrSelectGCFii(s32, s32);
u32 TAdSinglePlyChrSelectGC__sub_80201204(s32, M2C_UNK);
void __dl__FPv(void*);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);
int get_field_118__22TAdEnterSerialAccessGCFv(void*);
u32 get_type__23TAdSinglePlyChrSelectGCFPv(s32);
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memset(M2C_UNK, s32, s32);
void register_callback__23TAdSinglePlyChrSelectGCFis(void*, int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
M2C_UNK set_id__23TAdSinglePlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);

extern void *lbl_805D5F64;

s32 increment_frame__23TAdSinglePlyChrSelectGCFv(void) {
    if ((void *) lbl_805D5F64 != NULL) {
        M2C_FIELD(lbl_805D5F64, s32 *, 0x14) = (s32) (M2C_FIELD(lbl_805D5F64, s32 *, 0x14) + 1);
        return M2C_FIELD(lbl_805D5F64, s32 *, 0x14);
    }
    return 0;
}

extern void *lbl_805D5F64;

s32 get_player_count__23TAdSinglePlyChrSelectGCFv(void) {
    if ((void *) lbl_805D5F64 != NULL) {
        return M2C_FIELD(lbl_805D5F64, s32 *, 4);
    }
    return 0;
}

extern M2C_UNK char_select_date_stamp[];

s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_UNK sp10[4];
    s32 spC;
    s32 sp8;

    if (arg0 != NULL) {
        DateToSeconds__FP9DateStampPi((M2C_UNK *)(char_select_date_stamp), (s32 *)(&spC));
        getDateStamp__FP9DateStamp(sp10);
        DateToSeconds__FP9DateStampPi((M2C_UNK *)(sp10), (s32 *)(&sp8));
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + (sp8 - spC));
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    return 0;
}

typedef char RecoveredGlobal_802010E8_lbl_80513904_size[sizeof(RecoveredGlobal_802010E8_lbl_80513904) == 0xC ? 1 : -1];
s32 update_play_time__23TAdSinglePlyChrSelectGCFv(void) {
    s32 spC;
    s32 sp8;
    if ((void *) (*(u8 * *)&lbl_805D5F64) != NULL) {
        DateToSeconds__FP9DateStampPi((M2C_UNK *)(&(*(RecoveredGlobal_802010E8_lbl_80513904 *)&char_select_date_stamp).value), (s32 *)(&spC));
        getDateStamp__FP9DateStamp((M2C_UNK *)(&(*(RecoveredGlobal_802010E8_lbl_80513904 *)&char_select_date_stamp).value));
        DateToSeconds__FP9DateStampPi((M2C_UNK *)(&(*(RecoveredGlobal_802010E8_lbl_80513904 *)&char_select_date_stamp).value), (s32 *)(&sp8));
        M2C_FIELD((*(u8 * *)&lbl_805D5F64), s32 *, 0xC) = (s32) (M2C_FIELD((*(u8 * *)&lbl_805D5F64), s32 *, 0xC) + (sp8 - spC));
        return M2C_FIELD((*(u8 * *)&lbl_805D5F64), s32 *, 0xC);
    }
    return 0;
}

s32 init_and_register__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 var_r29;
    u32 temp_r30;
    u32 temp_r31;

    var_r29 = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (var_r29 != 0) {
        var_r29 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r29);
    }
    copy_save_data__23TAdSinglePlyChrSelectGCFii(var_r29, arg0);
    temp_r30 = get_type__23TAdSinglePlyChrSelectGCFPv(var_r29);
    set_id__23TAdSinglePlyChrSelectGCFPvi(var_r29, 0);
    temp_r31 = TAdSinglePlyChrSelectGC__sub_80201204(var_r29, 0x1156C);
    register_callback__23TAdSinglePlyChrSelectGCFis((void*)(var_r29), (int)(1));
    if (temp_r30 == temp_r31) {
        return 1;
    }
    return 0;
}

extern s32 lbl_805D5F68;

void init_timestamped_data(void) {
    char sp8[0x18];

    init_slots__23TAdSinglePlyChrSelectGCFv();
    memset((M2C_UNK)(lbl_805D5F68), (s32)(0), (s32)(0xE28C));
    getDateStamp__FP9DateStamp((M2C_UNK *) sp8);
    DateToSeconds__FP9DateStampPi((M2C_UNK *)((M2C_UNK *) sp8), (s32 *)(lbl_805D5F68 + 0xE284));
    set_save_slot__23TAdSinglePlyChrSelectGCFi(0);
}

extern u32 lbl_805D5F98;

void reset_save_header__23TAdSinglePlyChrSelectGCFv(void) {
  volatile unsigned long long sp10;
  M2C_UNK sp8;
  memset((M2C_UNK)((void *) lbl_805D5F6C), (s32)((int) 0), (s32)((int) 0x11C));
  *((s16 *) (((s8 *) lbl_805D5F6C) + 4)) = -0x32;
  *((s8 *) (((s8 *) lbl_805D5F6C) + 6)) = 0;
  *((s8 *) (((s8 *) lbl_805D5F6C) + 7)) = TLobby__sub_80132EC8();
  *((s32 *) (((s8 *) lbl_805D5F6C) + 8)) = TLobby__sub_8001E8B8();
  *((s16 *) (((s8 *) lbl_805D5F6C) + 0xC)) = 0;
  *((s16 *) (((s8 *) lbl_805D5F6C) + 0xE)) = 0;
  reset_load_state__15TAdPlayerLoadGCFPvPv(0, &sp8);
  memmove((void *) (lbl_805D5F6C + 0x110), (void *) (&sp8), (int) 8);
  getDateStamp__FP9DateStamp((M2C_UNK *)((void *) (&sp10)));
  DateToSeconds__FP9DateStampPi((M2C_UNK *)((void *) (&sp10)), (s32 *)((void *) (lbl_805D5F6C + 0x118)));
}

s32 init_fresh_character_card(void) {
    void *chr;
    Card_80201354 *card;
    s32 i;
    init_slots__23TAdSinglePlyChrSelectGCFv();
    chr = get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF);
    card = get_card_window__17TWindowSubComCardFUi(0xFFFF);
    memset((M2C_UNK)((s32)chr), (s32)(0), (s32)(0x41C));
    TAdSinglePlyChrSelectGC__sub_8028DC1C();
    begin_action_from_char_select__10TObjPlayerFv();
    memset((M2C_UNK)((s32)card), (s32)(0), (s32)(0x2370));
    getDateStamp__FP9DateStamp((M2C_UNK *)(((s32 *)&char_select_date_stamp)));
    DateToSeconds__FP9DateStampPi((M2C_UNK *)(((s32 *)&char_select_date_stamp)), (s32 *)(&card->secs));
    card->magic = 0xA205B064;
    card->fC = 0;
    card->f0 = 0;
    card->f14 = 1;
    memcpy(card->f18, TLobby__sub_80146D68(0), 0x1C);
    memcpy(card->f34, TLobby__sub_80146D50(0), 0x10);
    clear_all_story_flags();
    card->f248 = 0;
    card->f24C = 0;
    for (i = 0; i < 200; i++) {
        init_item_entry__23TAdSinglePlyChrSelectGCFPv(&card->items[i]);
    }
    load_symbol_chat_data__20TWindowSubSymbolChatFPv(card);
    set_fresh_card_flag(card);
    TWindowShortListCtrl__sub_8026E884(card->f22C4);
}

s32 free_buffer__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F98 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D5F98);
        lbl_805D5F98 = 0U;
        return 1;
    }
    return 0;
}

extern u32 lbl_805D5F9C;

s32 free_data__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F9C != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D5F9C);
        lbl_805D5F9C = 0U;
        return 1;
    }
    return 0;
}

extern s32 lbl_805D5F88;
extern u32 lbl_805D5F98;

s32 buffer_init(void) {
    s32 temp_r31;

    if ((u32) lbl_805D5F98 == 0U) {
        temp_r31 = lbl_805D5F88 << 0xD;
        lbl_805D5F98 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        memset((M2C_UNK)(lbl_805D5F98), (s32)(0), (s32)(temp_r31));
        return 1;
    }
    return 0;
}

extern s32 lbl_805D5F90;
extern u32 lbl_805D5F9C;

s32 alloc_global_buffer(void) {
    s32 temp_r31;

    if ((u32) lbl_805D5F9C == 0U) {
        temp_r31 = lbl_805D5F90 << 0xD;
        lbl_805D5F9C = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        memset((M2C_UNK)(lbl_805D5F9C), (s32)(0), (s32)(temp_r31));
        return 1;
    }
    return 0;
}

extern u32 lbl_805D5F94;

s32 free__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F94 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D5F94);
        lbl_805D5F94 = 0U;
        return 1;
    }
    return 0;
}

extern s32 lbl_805D5F84;
extern u32 lbl_805D5F94;

s32 init_buffer(void) {
    s32 temp_r31;

    if ((u32) lbl_805D5F94 == 0U) {
        temp_r31 = lbl_805D5F84 << 0xD;
        lbl_805D5F94 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        memset((M2C_UNK)(lbl_805D5F94), (s32)(0), (s32)(temp_r31));
        return 1;
    }
    return 0;
}

extern u32 lbl_805D5F5C;
extern u32 lbl_805D5F70;

typedef char RecoveredGlobal_80201970_lbl_805137D8_size[sizeof(RecoveredGlobal_80201970_lbl_805137D8) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80201970_lbl_805137F8_size[sizeof(RecoveredGlobal_80201970_lbl_805137F8) == 0x24 ? 1 : -1];

void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv(void) {
    switch (lbl_805D5F78) {
    case 2:
        init_fresh_character_card();
        lbl_805D5F78 = 4;
        break;
    case 3:
        init_battle_selection__10TObjPlayerFv();
        TAdSinglePlyChrSelectGC__sub_8028DC14();
        lbl_805D5F78 = 4;
        break;
    case 4:
        prepare_save_data__23TAdSinglePlyChrSelectGCFv();
        lbl_805D5F78 = 5;
        break;
    case 5:
        if (TAdSinglePlyChrSelectGC__sub_801FDA4C() == 0) {
            lbl_805D5F78 = 6;
            break;
        }
    default:
        break;
    case 6:
        init_slots__23TAdSinglePlyChrSelectGCFv();
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F7C)) == 0) {
            lbl_805D5F78 = 0;
            reset_quest_id__23TAdSinglePlyChrSelectGCFv();
            lbl_805D49B4 = 0;
            break;
        }
        break;
    case 7:
        if (load_chr_select_slot__23TAdSinglePlyChrSelectGCFv() == 0) {
            lbl_805D5F78 = 8;
            break;
        }
        break;
    case 8:
        init_slots__23TAdSinglePlyChrSelectGCFv();
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F7C)) == 0) {
            lbl_805D5F78 = 9;
            break;
        }
        break;
    case 9:
        apply_loaded_character__23TAdSinglePlyChrSelectGCFi((int) (0));
        lbl_805D5F78 = 0;
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        lbl_805D49B4 = 0;
        break;
    case 10:
        if (TAdSinglePlyChrSelectGC__sub_801FDA4C() == 0) {
            lbl_805D5F78 = 6;
            break;
        }
        break;
    case 11:
        init_slots__23TAdSinglePlyChrSelectGCFv();
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F7C)) == 0) {
            lbl_805D5F78 = 0;
            reset_quest_id__23TAdSinglePlyChrSelectGCFv();
            lbl_805D49B4 = 0;
            break;
        }
        break;
    case 13:
        init_slots__23TAdSinglePlyChrSelectGCFv();
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F80)) == 0) {
            lbl_805D5F78 = 0xE;
            break;
        }
        break;
    case 14:
        load_and_verify_data((int) (0));
        lbl_805D5F78 = 0;
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        lbl_805D49B4 = 0;
        break;
    case 12:
        init_slots__23TAdSinglePlyChrSelectGCFv();
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F80)) == 0) {
            lbl_805D5F78 = 0;
            reset_quest_id__23TAdSinglePlyChrSelectGCFv();
            lbl_805D49B4 = 0;
            break;
        }
        break;
    case 15:
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F8C)) == 0) {
            lbl_805D5F78 = 0;
            lbl_805D49B4 = 0;
            break;
        }
        break;
    case 17:
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F8C)) == 0) {
            verify_save_checksum__23TAdSinglePlyChrSelectGCFi((int) (1));
            if ((s32) lbl_805D5FA8 != 0) {
                lbl_805D5FA8 = 0;
                load_selected_char__23TAdSinglePlyChrSelectGCFv();
                break;
            }
            lbl_805D5F78 = 0;
            lbl_805D49B4 = 0;
            break;
        }
        break;
    case 16:
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (lbl_805D5F8C)) == 0) {
            verify_save_checksum__23TAdSinglePlyChrSelectGCFi((int) (0));
            if ((s32) lbl_805D5FA8 != 0) {
                lbl_805D5FA8 = 0;
                load_selected_char__23TAdSinglePlyChrSelectGCFv();
                break;
            }
            lbl_805D5F78 = 0;
            lbl_805D49B4 = 0;
            break;
        }
        break;
    case 18:
        init_slots__23TAdSinglePlyChrSelectGCFv();
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (1)) == 0) {
            lbl_805D5F78 = 0;
            lbl_805D49B4 = 0;
            break;
        }
        break;
    case 19:
        init_slots__23TAdSinglePlyChrSelectGCFv();
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (0)) == 0) {
            lbl_805D5F78 = 0;
            lbl_805D49B4 = 0;
            break;
        }
        break;
    case 20:
        init_slots__23TAdSinglePlyChrSelectGCFv();
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (1)) == 0) {
            lbl_805D5F78 = 0x15;
            break;
        }
        break;
    case 21:
        TAdSinglePlyChrSelectGC__sub_80200418();
        lbl_805D5F78 = 0;
        lbl_805D49B4 = 0;
        break;
    case 22:
        if (TAdPlayerLoadGC__sub_801E1B50((void *) (1)) == 0) {
            verify_save_checksum__23TAdSinglePlyChrSelectGCFv();
            if ((s32) lbl_805D5FA8 != 0) {
                lbl_805D5FA8 = 0;
                TAdSinglePlyChrSelectGC__sub_801FEBBC();
                break;
            }
            lbl_805D5F78 = 0;
            lbl_805D49B4 = 0;
        }
        break;
    }
}

void release_all__23TAdSinglePlyChrSelectGCFv(void) {
    free_char_data_slots__23TAdSinglePlyChrSelectGCFPv((void *) (&chr_select_buffer_ptr_table.value));
    clear_slot_lists__23TAdSinglePlyChrSelectGCFPv((void *) (&chr_select_request_buffer.value));
    if ((void *) lbl_805D5F60 != NULL) {
        __dt__12TPlyCharDataFv(lbl_805D5F60, 1);
    }
    if ((void *) (*(u8 * *)&lbl_805D5F64) != NULL) {
        __dl__FPv((void*)((void *) ((*(u8 * *)&lbl_805D5F64))));
    }
    if ((void *) (*(u8 * *)&lbl_805D5F68) != NULL) {
        __dl__FPv((void*)((void *) ((*(u8 * *)&lbl_805D5F68))));
    }
    if ((u32) lbl_805D5F58 != 0U) {
        register_callback__23TAdSinglePlyChrSelectGCFis((void*)((void *) ((s32) lbl_805D5F58)), (int)((int) (1)));
    }
    free__23TAdSinglePlyChrSelectGCFv();
    free_buffer__23TAdSinglePlyChrSelectGCFv();
    free_data__23TAdSinglePlyChrSelectGCFv();
}

}

}

namespace P802019F8 {
extern "C" {

s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 __ct__12TPlyCharDataFv(s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
M2C_UNK DateToSeconds__FP9DateStampPi(void *, u32 *);
M2C_UNK getDateStamp__FP9DateStamp(void *);
s32 init_char_slots__23TAdSinglePlyChrSelectGCFi(s32);
s32 init_char_record__23TAdSinglePlyChrSelectGCFPv(s32);
void alloc_char_records__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32);
void init_timestamped_data(void);
void reset_save_header__23TAdSinglePlyChrSelectGCFv(void);
s32 buffer_init(void);
s32 alloc_global_buffer(void);
M2C_UNK init_buffer();
s32 get_field_118__22TAdEnterSerialAccessGCFv();
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(int);
void set_state__23TAdSinglePlyChrSelectGCFi(int a0);
M2C_UNK set_chr_select_state__23TAdSinglePlyChrSelectGCFi(int);
M2C_UNK reset_slot_lists__23TAdSinglePlyChrSelectGCFPv(void *);
typedef struct DVDDiskID_802019F8 { char gameName[4]; char company[2]; u8 diskNumber; u8 gameVersion; } DVDDiskID_802019F8;
DVDDiskID_802019F8 *DVDGetCurrentDiskID(void);
M2C_UNK strncpy(void *, char *, int);
M2C_UNK memset(void *, int, int);
extern s32 lbl_805D5F58;
extern s32 lbl_805D5F60;
extern s32 lbl_805D5F64;
extern s32 lbl_805D5F68;
extern s32 lbl_805D5F6C;
extern s32 lbl_805D5F74;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F80;
extern s32 lbl_805D5F84;
extern s32 lbl_805D5F88;
extern s32 lbl_805D5F90;
extern s32 lbl_805D5FA8;
extern M2C_UNK lbl_805D5FB0;

void TAdSinglePlyChrSelectGC__sub_802019F8(void) {
    M2C_UNK sp10;
    M2C_UNK sp11;
    M2C_UNK spD;
    M2C_UNK spE;
    M2C_UNK spF;
    u8 spC;
    u32 sp8;
    s32 temp_r10;
    s32 temp_r3;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_r0;
    s32 var_r0_10;
    s32 var_r0_11;
    s32 var_r0_12;
    s32 var_r0_13;
    s32 var_r0_14;
    s32 var_r0_15;
    s32 var_r0_16;
    s32 var_r0_17;
    s32 var_r0_18;
    s32 var_r0_19;
    s32 var_r0_20;
    s32 var_r0_21;
    s32 var_r0_22;
    s32 var_r0_23;
    s32 var_r0_24;
    s32 var_r0_25;
    s32 var_r0_26;
    s32 var_r0_27;
    s32 var_r0_28;
    s32 var_r0_29;
    s32 var_r0_2;
    s32 var_r0_30;
    s32 var_r0_31;
    s32 var_r0_32;
    s32 var_r0_33;
    s32 var_r0_34;
    s32 var_r0_35;
    s32 var_r0_36;
    s32 var_r0_37;
    s32 var_r0_38;
    s32 var_r0_39;
    s32 var_r0_3;
    s32 var_r0_40;
    s32 var_r0_41;
    s32 var_r0_42;
    s32 var_r0_43;
    s32 var_r0_44;
    s32 var_r0_45;
    s32 var_r0_46;
    s32 var_r0_47;
    s32 var_r0_48;
    s32 var_r0_49;
    s32 var_r0_4;
    s32 var_r0_50;
    s32 var_r0_51;
    s32 var_r0_52;
    s32 var_r0_53;
    s32 var_r0_54;
    s32 var_r0_55;
    s32 var_r0_56;
    s32 var_r0_57;
    s32 var_r0_58;
    s32 var_r0_59;
    s32 var_r0_5;
    s32 var_r0_60;
    s32 var_r0_61;
    s32 var_r0_62;
    s32 var_r0_63;
    s32 var_r0_64;
    s32 var_r0_65;
    s32 var_r0_66;
    s32 var_r0_67;
    s32 var_r0_68;
    s32 var_r0_69;
    s32 var_r0_6;
    s32 var_r0_70;
    s32 var_r0_71;
    s32 var_r0_72;
    s32 var_r0_73;
    s32 var_r0_74;
    s32 var_r0_75;
    s32 var_r0_76;
    s32 var_r0_77;
    s32 var_r0_78;
    s32 var_r0_79;
    s32 var_r0_7;
    s32 var_r0_80;
    s32 var_r0_81;
    s32 var_r0_82;
    s32 var_r0_83;
    s32 var_r0_84;
    s32 var_r0_85;
    s32 var_r0_86;
    s32 var_r0_87;
    s32 var_r0_88;
    s32 var_r0_89;
    s32 var_r0_8;
    s32 var_r0_90;
    s32 var_r0_91;
    s32 var_r0_92;
    s32 var_r0_93;
    s32 var_r0_94;
    s32 var_r0_95;
    s32 var_r0_96;
    s32 var_r0_9;
    u32 temp_r0;
    u8 *var_r4;
    u8 *temp_r4;

    lbl_805D5F74 = 0;
    lbl_805D5FA8 = 0;
    alloc_char_records__23TAdSinglePlyChrSelectGCFi((s32)chr_select_buffer_ptr_table);
    reset_slot_lists__23TAdSinglePlyChrSelectGCFPv(chr_select_request_buffer);
    {
        DVDDiskID_802019F8 *id = DVDGetCurrentDiskID();
        strncpy((void *)&lbl_805D5FB0, id->gameName, 4);
    }
    getDateStamp__FP9DateStamp(char_select_date_stamp);
    DateToSeconds__FP9DateStampPi(char_select_date_stamp, &sp8);
    temp_r0 = sp8 % 24;
    switch (temp_r0) {
    default:
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0 != 0) {
            var_r0 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0);
        }
        lbl_805D5F58 = var_r0;
        var_r0_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_2 != 0) {
            var_r0_2 = __ct__12TPlyCharDataFv(var_r0_2);
        }
        lbl_805D5F60 = var_r0_2;
        var_r0_3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_3 != 0) {
            var_r0_3 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_3);
        }
        lbl_805D5F64 = var_r0_3;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_4 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_4 != 0) {
            var_r0_4 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_4);
        }
        lbl_805D5F68 = var_r0_4;
        break;
    case 1:
        var_r0_5 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_5 != 0) {
            var_r0_5 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_5);
        }
        lbl_805D5F58 = var_r0_5;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_6 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_6 != 0) {
            var_r0_6 = __ct__12TPlyCharDataFv(var_r0_6);
        }
        lbl_805D5F60 = var_r0_6;
        var_r0_7 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_7 != 0) {
            var_r0_7 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_7);
        }
        lbl_805D5F64 = var_r0_7;
        var_r0_8 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_8 != 0) {
            var_r0_8 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_8);
        }
        lbl_805D5F68 = var_r0_8;
        break;
    case 2:
        var_r0_9 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_9 != 0) {
            var_r0_9 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_9);
        }
        lbl_805D5F58 = var_r0_9;
        var_r0_10 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_10 != 0) {
            var_r0_10 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_10);
        }
        lbl_805D5F68 = var_r0_10;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_11 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_11 != 0) {
            var_r0_11 = __ct__12TPlyCharDataFv(var_r0_11);
        }
        lbl_805D5F60 = var_r0_11;
        var_r0_12 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_12 != 0) {
            var_r0_12 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_12);
        }
        lbl_805D5F64 = var_r0_12;
        break;
    case 3:
        var_r0_13 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_13 != 0) {
            var_r0_13 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_13);
        }
        lbl_805D5F58 = var_r0_13;
        var_r0_14 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_14 != 0) {
            var_r0_14 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_14);
        }
        lbl_805D5F68 = var_r0_14;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_15 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_15 != 0) {
            var_r0_15 = __ct__12TPlyCharDataFv(var_r0_15);
        }
        lbl_805D5F60 = var_r0_15;
        var_r0_16 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_16 != 0) {
            var_r0_16 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_16);
        }
        lbl_805D5F64 = var_r0_16;
        break;
    case 4:
        var_r0_17 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_17 != 0) {
            var_r0_17 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_17);
        }
        lbl_805D5F58 = var_r0_17;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_18 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_18 != 0) {
            var_r0_18 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_18);
        }
        lbl_805D5F68 = var_r0_18;
        var_r0_19 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_19 != 0) {
            var_r0_19 = __ct__12TPlyCharDataFv(var_r0_19);
        }
        lbl_805D5F60 = var_r0_19;
        var_r0_20 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_20 != 0) {
            var_r0_20 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_20);
        }
        lbl_805D5F64 = var_r0_20;
        break;
    case 5:
        var_r0_21 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_21 != 0) {
            var_r0_21 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_21);
        }
        lbl_805D5F58 = var_r0_21;
        var_r0_22 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_22 != 0) {
            var_r0_22 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_22);
        }
        lbl_805D5F68 = var_r0_22;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_23 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_23 != 0) {
            var_r0_23 = __ct__12TPlyCharDataFv(var_r0_23);
        }
        lbl_805D5F60 = var_r0_23;
        var_r0_24 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_24 != 0) {
            var_r0_24 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_24);
        }
        lbl_805D5F64 = var_r0_24;
        break;
    case 6:
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_25 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_25 != 0) {
            var_r0_25 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_25);
        }
        lbl_805D5F68 = var_r0_25;
        var_r0_26 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_26 != 0) {
            var_r0_26 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_26);
        }
        lbl_805D5F58 = var_r0_26;
        var_r0_27 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_27 != 0) {
            var_r0_27 = __ct__12TPlyCharDataFv(var_r0_27);
        }
        lbl_805D5F60 = var_r0_27;
        var_r0_28 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_28 != 0) {
            var_r0_28 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_28);
        }
        lbl_805D5F64 = var_r0_28;
        break;
    case 7:
        var_r0_29 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_29 != 0) {
            var_r0_29 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_29);
        }
        lbl_805D5F68 = var_r0_29;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_30 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_30 != 0) {
            var_r0_30 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_30);
        }
        lbl_805D5F58 = var_r0_30;
        var_r0_31 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_31 != 0) {
            var_r0_31 = __ct__12TPlyCharDataFv(var_r0_31);
        }
        lbl_805D5F60 = var_r0_31;
        var_r0_32 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_32 != 0) {
            var_r0_32 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_32);
        }
        lbl_805D5F64 = var_r0_32;
        break;
    case 8:
        var_r0_33 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_33 != 0) {
            var_r0_33 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_33);
        }
        lbl_805D5F58 = var_r0_33;
        var_r0_34 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_34 != 0) {
            var_r0_34 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_34);
        }
        lbl_805D5F68 = var_r0_34;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_35 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_35 != 0) {
            var_r0_35 = __ct__12TPlyCharDataFv(var_r0_35);
        }
        lbl_805D5F60 = var_r0_35;
        var_r0_36 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_36 != 0) {
            var_r0_36 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_36);
        }
        lbl_805D5F64 = var_r0_36;
        break;
    case 9:
        var_r0_37 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_37 != 0) {
            var_r0_37 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_37);
        }
        lbl_805D5F58 = var_r0_37;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_38 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_38 != 0) {
            var_r0_38 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_38);
        }
        lbl_805D5F68 = var_r0_38;
        var_r0_39 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_39 != 0) {
            var_r0_39 = __ct__12TPlyCharDataFv(var_r0_39);
        }
        lbl_805D5F60 = var_r0_39;
        var_r0_40 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_40 != 0) {
            var_r0_40 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_40);
        }
        lbl_805D5F64 = var_r0_40;
        break;
    case 10:
        var_r0_41 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_41 != 0) {
            var_r0_41 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_41);
        }
        lbl_805D5F58 = var_r0_41;
        var_r0_42 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_42 != 0) {
            var_r0_42 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_42);
        }
        lbl_805D5F68 = var_r0_42;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_43 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_43 != 0) {
            var_r0_43 = __ct__12TPlyCharDataFv(var_r0_43);
        }
        lbl_805D5F60 = var_r0_43;
        var_r0_44 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_44 != 0) {
            var_r0_44 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_44);
        }
        lbl_805D5F64 = var_r0_44;
        break;
    case 11:
        var_r0_45 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_45 != 0) {
            var_r0_45 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_45);
        }
        lbl_805D5F58 = var_r0_45;
        var_r0_46 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_46 != 0) {
            var_r0_46 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_46);
        }
        lbl_805D5F68 = var_r0_46;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_47 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_47 != 0) {
            var_r0_47 = __ct__12TPlyCharDataFv(var_r0_47);
        }
        lbl_805D5F60 = var_r0_47;
        var_r0_48 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_48 != 0) {
            var_r0_48 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_48);
        }
        lbl_805D5F64 = var_r0_48;
        break;
    case 12:
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_49 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_49 != 0) {
            var_r0_49 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_49);
        }
        lbl_805D5F68 = var_r0_49;
        var_r0_50 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_50 != 0) {
            var_r0_50 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_50);
        }
        lbl_805D5F58 = var_r0_50;
        var_r0_51 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_51 != 0) {
            var_r0_51 = __ct__12TPlyCharDataFv(var_r0_51);
        }
        lbl_805D5F60 = var_r0_51;
        var_r0_52 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_52 != 0) {
            var_r0_52 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_52);
        }
        lbl_805D5F64 = var_r0_52;
        break;
    case 13:
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_53 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_53 != 0) {
            var_r0_53 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_53);
        }
        lbl_805D5F58 = var_r0_53;
        var_r0_54 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_54 != 0) {
            var_r0_54 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_54);
        }
        lbl_805D5F68 = var_r0_54;
        var_r0_55 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_55 != 0) {
            var_r0_55 = __ct__12TPlyCharDataFv(var_r0_55);
        }
        lbl_805D5F60 = var_r0_55;
        var_r0_56 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_56 != 0) {
            var_r0_56 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_56);
        }
        lbl_805D5F64 = var_r0_56;
        break;
    case 14:
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_57 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_57 != 0) {
            var_r0_57 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_57);
        }
        lbl_805D5F58 = var_r0_57;
        var_r0_58 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_58 != 0) {
            var_r0_58 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_58);
        }
        lbl_805D5F68 = var_r0_58;
        var_r0_59 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_59 != 0) {
            var_r0_59 = __ct__12TPlyCharDataFv(var_r0_59);
        }
        lbl_805D5F60 = var_r0_59;
        var_r0_60 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_60 != 0) {
            var_r0_60 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_60);
        }
        lbl_805D5F64 = var_r0_60;
        break;
    case 15:
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_61 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_61 != 0) {
            var_r0_61 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_61);
        }
        lbl_805D5F68 = var_r0_61;
        var_r0_62 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_62 != 0) {
            var_r0_62 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_62);
        }
        lbl_805D5F58 = var_r0_62;
        var_r0_63 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_63 != 0) {
            var_r0_63 = __ct__12TPlyCharDataFv(var_r0_63);
        }
        lbl_805D5F60 = var_r0_63;
        var_r0_64 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_64 != 0) {
            var_r0_64 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_64);
        }
        lbl_805D5F64 = var_r0_64;
        break;
    case 16:
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_65 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_65 != 0) {
            var_r0_65 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_65);
        }
        lbl_805D5F58 = var_r0_65;
        var_r0_66 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_66 != 0) {
            var_r0_66 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_66);
        }
        lbl_805D5F68 = var_r0_66;
        var_r0_67 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_67 != 0) {
            var_r0_67 = __ct__12TPlyCharDataFv(var_r0_67);
        }
        lbl_805D5F60 = var_r0_67;
        var_r0_68 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_68 != 0) {
            var_r0_68 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_68);
        }
        lbl_805D5F64 = var_r0_68;
        break;
    case 17:
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_69 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_69 != 0) {
            var_r0_69 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_69);
        }
        lbl_805D5F68 = var_r0_69;
        var_r0_70 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_70 != 0) {
            var_r0_70 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_70);
        }
        lbl_805D5F58 = var_r0_70;
        var_r0_71 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_71 != 0) {
            var_r0_71 = __ct__12TPlyCharDataFv(var_r0_71);
        }
        lbl_805D5F60 = var_r0_71;
        var_r0_72 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_72 != 0) {
            var_r0_72 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_72);
        }
        lbl_805D5F64 = var_r0_72;
        break;
    case 18:
        var_r0_73 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_73 != 0) {
            var_r0_73 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_73);
        }
        lbl_805D5F68 = var_r0_73;
        var_r0_74 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_74 != 0) {
            var_r0_74 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_74);
        }
        lbl_805D5F58 = var_r0_74;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_75 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_75 != 0) {
            var_r0_75 = __ct__12TPlyCharDataFv(var_r0_75);
        }
        lbl_805D5F60 = var_r0_75;
        var_r0_76 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_76 != 0) {
            var_r0_76 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_76);
        }
        lbl_805D5F64 = var_r0_76;
        break;
    case 19:
        var_r0_77 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_77 != 0) {
            var_r0_77 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_77);
        }
        lbl_805D5F68 = var_r0_77;
        var_r0_78 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_78 != 0) {
            var_r0_78 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_78);
        }
        lbl_805D5F58 = var_r0_78;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_79 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_79 != 0) {
            var_r0_79 = __ct__12TPlyCharDataFv(var_r0_79);
        }
        lbl_805D5F60 = var_r0_79;
        var_r0_80 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_80 != 0) {
            var_r0_80 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_80);
        }
        lbl_805D5F64 = var_r0_80;
        break;
    case 20:
        var_r0_81 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_81 != 0) {
            var_r0_81 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_81);
        }
        lbl_805D5F68 = var_r0_81;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_82 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_82 != 0) {
            var_r0_82 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_82);
        }
        lbl_805D5F58 = var_r0_82;
        var_r0_83 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_83 != 0) {
            var_r0_83 = __ct__12TPlyCharDataFv(var_r0_83);
        }
        lbl_805D5F60 = var_r0_83;
        var_r0_84 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_84 != 0) {
            var_r0_84 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_84);
        }
        lbl_805D5F64 = var_r0_84;
        break;
    case 21:
        var_r0_85 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_85 != 0) {
            var_r0_85 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_85);
        }
        lbl_805D5F68 = var_r0_85;
        var_r0_86 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_86 != 0) {
            var_r0_86 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_86);
        }
        lbl_805D5F58 = var_r0_86;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_87 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_87 != 0) {
            var_r0_87 = __ct__12TPlyCharDataFv(var_r0_87);
        }
        lbl_805D5F60 = var_r0_87;
        var_r0_88 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_88 != 0) {
            var_r0_88 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_88);
        }
        lbl_805D5F64 = var_r0_88;
        break;
    case 22:
        var_r0_89 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_89 != 0) {
            var_r0_89 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_89);
        }
        lbl_805D5F68 = var_r0_89;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        var_r0_90 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_90 != 0) {
            var_r0_90 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_90);
        }
        lbl_805D5F58 = var_r0_90;
        var_r0_91 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_91 != 0) {
            var_r0_91 = __ct__12TPlyCharDataFv(var_r0_91);
        }
        lbl_805D5F60 = var_r0_91;
        var_r0_92 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_92 != 0) {
            var_r0_92 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_92);
        }
        lbl_805D5F64 = var_r0_92;
        break;
    case 23:
        var_r0_93 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xE28C));
        if (var_r0_93 != 0) {
            var_r0_93 = init_windows__23TAdSinglePlyChrSelectGCFi(var_r0_93);
        }
        lbl_805D5F68 = var_r0_93;
        var_r0_94 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2370));
        if (var_r0_94 != 0) {
            var_r0_94 = init_char_record__23TAdSinglePlyChrSelectGCFPv(var_r0_94);
        }
        lbl_805D5F64 = var_r0_94;
        var_r0_95 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x41C));
        if (var_r0_95 != 0) {
            var_r0_95 = __ct__12TPlyCharDataFv(var_r0_95);
        }
        lbl_805D5F60 = var_r0_95;
        var_r0_96 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x1156C));
        if (var_r0_96 != 0) {
            var_r0_96 = init_char_slots__23TAdSinglePlyChrSelectGCFi(var_r0_96);
        }
        lbl_805D5F58 = var_r0_96;
        lbl_805D5F6C = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x11C));
        break;
    }
    memset((void *) (lbl_805D5F60), (int) (0), (int) (0x41C));
    memset((void *) (lbl_805D5F64), (int) (0), (int) (0x2370));
    memset((void *) (lbl_805D5F58), (int) (0), (int) (0x1156C));
    memset((void *) (lbl_805D5F6C), (int) (0), (int) (0x11C));
    reset_save_header__23TAdSinglePlyChrSelectGCFv();
    init_timestamped_data();
    lbl_805D5F84 = 0xB;
    lbl_805D5F88 = 0xA;
    lbl_805D5F90 = 3;
    init_buffer();
    buffer_init();
    alloc_global_buffer();
    lbl_805D5F78 = 0;
    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    lbl_805D5F80 = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    {
        s32 g = get_field_118__22TAdEnterSerialAccessGCFv();
        chr_select_serial_seeds[0] = chr_select_serial_seeds[1] = g;
    }
    {
        s8 buf[6];
        s32 i;
        for (i = 0; i < 6; i++) {
            buf[i] = 0;
        }
        lbl_80513918[0] = buf[3] | ((buf[2] << 8) | ((buf[0] << 24) | (buf[1] << 16)));
        lbl_80513918[1] = buf[5] | ((buf[4] << 8) | ((buf[2] << 24) | (buf[3] << 16)));
    }
    set_state__23TAdSinglePlyChrSelectGCFi(0);
    set_chr_select_state__23TAdSinglePlyChrSelectGCFi((int) (1));
    set_save_slot__23TAdSinglePlyChrSelectGCFi((int) (0));
}

}
}

namespace P801FBF54 {
extern "C" {

void free_callbacks__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F5C != 0U) {
        register_callback__23TAdSinglePlyChrSelectGCFis((void*)((void*)lbl_805D5F5C), (int)(1));
        lbl_805D5F5C = 0U;
    }
    if ((u32) lbl_805D5F70 != 0U) {
        __dl__FPv((void*)lbl_805D5F70);
        lbl_805D5F70 = 0U;
    }
}

void alloc_char_buffers__23TAdSinglePlyChrSelectGCFv(void) {
    s32 temp_r3;
    s32 var_r0;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    var_r3 = 0x10000;
    var_r3 = 0x1156C;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((M2C_UNK)((int) (0x1156C)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = init_char_slots__23TAdSinglePlyChrSelectGCFi((s32)((int) (temp_r3)));
    }
    (*(s32 *)&lbl_805D5F5C) = var_r0;
    var_r3 = 0x11C;
    (*(s32 *)&lbl_805D5F70) = alloc__23TAdSinglePlyChrSelectGCFPv((M2C_UNK)((int) (0x11C)));
    var_r4 = 0x10000;
    var_r3 = (*(s32 *)&lbl_805D5F5C);
    var_r5 = 0x1156C;
    var_r4 = 0;
    memset((M2C_UNK)((int) (var_r3)), (s32)((int) (0)), (s32)((int) (0x1156C)));
    var_r3 = (*(s32 *)&lbl_805D5F70);
    var_r4 = 0;
    var_r5 = 0x11C;
    memset((M2C_UNK)((int) (var_r3)), (s32)((int) (0)), (s32)((int) (0x11C)));
}

int get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv(void* p) { return get_field_118__22TAdEnterSerialAccessGCFv(p); }

}

}
