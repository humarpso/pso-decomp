#include "types.h"
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
extern M2C_UNK lbl_80513904[];
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
extern RecoveredGlobal_80201970_lbl_805137D8 lbl_805137D8;
extern RecoveredGlobal_80201970_lbl_805137F8 lbl_805137F8;
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
extern M2C_UNK lbl_80513904[];
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

extern M2C_UNK lbl_80513904[];

s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_UNK sp10[4];
    s32 spC;
    s32 sp8;

    if (arg0 != NULL) {
        DateToSeconds__FP9DateStampPi((M2C_UNK *)(lbl_80513904), (s32 *)(&spC));
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
        DateToSeconds__FP9DateStampPi((M2C_UNK *)(&(*(RecoveredGlobal_802010E8_lbl_80513904 *)&lbl_80513904).value), (s32 *)(&spC));
        getDateStamp__FP9DateStamp((M2C_UNK *)(&(*(RecoveredGlobal_802010E8_lbl_80513904 *)&lbl_80513904).value));
        DateToSeconds__FP9DateStampPi((M2C_UNK *)(&(*(RecoveredGlobal_802010E8_lbl_80513904 *)&lbl_80513904).value), (s32 *)(&sp8));
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
    getDateStamp__FP9DateStamp((M2C_UNK *)(((s32 *)&lbl_80513904)));
    DateToSeconds__FP9DateStampPi((M2C_UNK *)(((s32 *)&lbl_80513904)), (s32 *)(&card->secs));
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
    free_char_data_slots__23TAdSinglePlyChrSelectGCFPv((void *) (&lbl_805137D8.value));
    clear_slot_lists__23TAdSinglePlyChrSelectGCFPv((void *) (&lbl_805137F8.value));
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
