#include "types.h"
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
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
extern s32 lbl_805D5F68;
void TAdSinglePlyChrSelectGC__sub_801FFF14(void);
s32 get_serial_result__22TAdEnterSerialAccessGCFv();
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
extern s32 lbl_805D5F5C;
s32 encrypt_and_save__23TAdSinglePlyChrSelectGCFv(void);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
extern s32 lbl_805D5F58;
s32 write_encrypted_save__23TAdSinglePlyChrSelectGCFv(void);
void __construct_array(void *, void *, void *, int, int);
void reinit__17TWindowSubComCardFi();
u8 *TAdSinglePlyChrSelectGC__sub_801FFDFC(u8 *arg0);
s32 get_serial_result__22TAdEnterSerialAccessGCFv();
M2C_UNK memcpy(void *, s32, M2C_UNK);
s32 TAdPlayerLoadGC__sub_801FD814();
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
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
extern u8 lbl_8051381C[];
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
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
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
extern s32 lbl_805D5544;
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
extern u8 lbl_8051381C[];
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
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
extern u8 lbl_8051381C[];
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
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
extern u8 lbl_8051381C[];
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
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
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
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
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
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
int TAdSinglePlyChrSelectGC__sub_801FFDB8(s32 arg0);
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
    TAdSinglePlyChrSelectGC__sub_801FFDFC((u8 *)(arg0 + 4));
    TAdSinglePlyChrSelectGC__sub_801FFDB8((s32)(arg0 + 0xD2C4));
    return arg0;
}

extern s32 *lbl_805D5F6C;

int TAdSinglePlyChrSelectGC__sub_801FFDB8(s32 arg0) {
    __construct_array((void *)arg0, (void *)init_guild_card_tag__17TWindowSubComCardFi, 0, 0x90, 0x1C);
    return arg0;
}

u8 *TAdSinglePlyChrSelectGC__sub_801FFDFC(u8 *arg0) {
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
    M2C_FIELD(&lbl_80513910.value, s32 *, 4) = temp_r3;
    M2C_FIELD(&lbl_80513910.value, s32 *, 0) = temp_r3;
    TAdSinglePlyChrSelectGC__sub_802000C8((void *)((void *) (lbl_805D5F68)), (void *)((void *) (&lbl_80513910.value)));
    build_save_file__23TAdSinglePlyChrSelectGCFv();
    TAdSinglePlyChrSelectGC__sub_801FFF98((void *)((void *) (lbl_805D5F68)));
}

void create_instance__23TAdSinglePlyChrSelectGCFv(void) {
    *lbl_805D5F6C = 0;
    *lbl_805D5F6C = TAdSinglePlyChrSelectGC__sub_80201204(lbl_805D5F6C, 0x11C);
    build_default_save_file__23TAdSinglePlyChrSelectGCFv();
}

extern s32 lbl_805D5544;
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
    subtractive_rng_seed(lbl_8051381C, ((Ser_801FFF98 *)&lbl_80513910)[0].b);
    subtractive_rng_make_shuffle(lbl_8051381C);
    subtractive_rng_unshuffle(lbl_8051381C, a, b, 0xE28C);
    TAdSinglePlyChrSelectGC__sub_801FFC74((s32)arg0, (void *)b);
    __dl__FPv(b);
    __dl__FPv(a);
    subtractive_rng_seed(lbl_8051381C, ((Ser_801FFF98 *)&lbl_80513910)[0].a);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(lbl_8051381C, arg0, 0xE28C);
    subtractive_rng_seed(lbl_8051381C, *(s32 *)((u8 *)arg0 + 0xE288));
    return subtractive_rng_xor_buffer(lbl_8051381C, arg0, 0xE288);
}

#pragma push
#pragma opt_common_subs off
#define self ((s32 *)arg0_)
M2C_UNK TAdSinglePlyChrSelectGC__sub_802000C8(void *arg0_, void *arg1) {
    s32 a;
    s32 b;
    *(s32 *)((u8 *)self + 0xE288) = subtractive_rng_next(lbl_8051381C);
    self[0] = 0;
    self[0] = TAdSinglePlyChrSelectGC__sub_80201204(self, 0xE28C);
    subtractive_rng_seed(lbl_8051381C, *(s32 *)((u8 *)self + 0xE288));
    subtractive_rng_xor_buffer(lbl_8051381C, self, 0xE288);
    subtractive_rng_seed(lbl_8051381C, ((Ser_802000C8 *)&lbl_80513910)[0].a);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(lbl_8051381C, self, 0xE28C);
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
    subtractive_rng_seed(lbl_8051381C, ((Ser_802000C8 *)&lbl_80513910)[0].b);
    subtractive_rng_make_shuffle(lbl_8051381C);
    permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(lbl_8051381C, a, b, 0xE28C);
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
    M2C_FIELD(lbl_805D5F60, s8 *, 3) = (s8) lbl_805D5544;
}
typedef char RecoveredGlobal_802004D8_lbl_80513910_size[sizeof(RecoveredGlobal_802004D8_lbl_80513910) == 0x10 ? 1 : -1];

s32 apply_loaded_character__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 r = get_field_118__22TAdEnterSerialAccessGCFv();
    ((Ser_802002E8 *)&lbl_80513910)[0].b = r;
    ((Ser_802002E8 *)&lbl_80513910)[0].a = r;
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
    *((s8 *)lbl_805D5F60 + 3) = (s8)lbl_805D5544;
    set_state__23TAdSinglePlyChrSelectGCFi(0);
    return 1;
}

void TAdSinglePlyChrSelectGC__sub_80200418(void) {
    s32 r = get_serial_result__22TAdEnterSerialAccessGCFv();
    ((Ser_80200418 *)&lbl_80513910)[0].b = r;
    ((Ser_80200418 *)&lbl_80513910)[0].a = r;
    memcpy((void *)((void *)lbl_805D5F5C), (s32)(lbl_805D5F94 + 0x2048), (M2C_UNK)(0x1156C));
    decrypt_char_data__23TAdSinglePlyChrSelectGCFPv((void *)((void *)lbl_805D5F5C));
    if (TAdPlayerLoadGC__sub_801FD814() == 7) {
        return;
    }
}

void prepare_save_data__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = get_field_118__22TAdEnterSerialAccessGCFv();
    ((Ser_80200470 *)&lbl_80513910)[0].b = r;
    ((Ser_80200470 *)&lbl_80513910)[0].a = r;
    memcpy((void *)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), (s32)lbl_805D5F60, 0x41C);
    memcpy((void *)TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), (s32)lbl_805D5F64, 0x2370);
    ((M2C_UNK (*)(s32))encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv)(lbl_805D5F58);
    save_character_file__23TAdSinglePlyChrSelectGCFi((int)(1));
}

s32 encrypt_and_save__23TAdSinglePlyChrSelectGCFv(void) {
    s32 temp_r3;
    temp_r3 = get_serial_result__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&(*(RecoveredGlobal_802004D8_lbl_80513910 *)&lbl_80513910).value, s32 *, 4) = temp_r3;
    M2C_FIELD(&(*(RecoveredGlobal_802004D8_lbl_80513910 *)&lbl_80513910).value, s32 *, 0) = temp_r3;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)((void *) (lbl_805D5F5C)), (void *)((void *) (&(*(RecoveredGlobal_802004D8_lbl_80513910 *)&lbl_80513910).value)));
    save_character_file__23TAdSinglePlyChrSelectGCFi((int)((int) (0)));
    return 1;
}
typedef char RecoveredGlobal_8020051C_lbl_80513910_size[sizeof(RecoveredGlobal_8020051C_lbl_80513910) == 0x10 ? 1 : -1];
s32 write_encrypted_save__23TAdSinglePlyChrSelectGCFv(void) {
    s32 temp_r3;
    temp_r3 = get_field_118__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&(*(RecoveredGlobal_8020051C_lbl_80513910 *)&lbl_80513910).value, s32 *, 4) = temp_r3;
    M2C_FIELD(&(*(RecoveredGlobal_8020051C_lbl_80513910 *)&lbl_80513910).value, s32 *, 0) = temp_r3;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)((void *) (lbl_805D5F58)), (void *)((void *) (&(*(RecoveredGlobal_8020051C_lbl_80513910 *)&lbl_80513910).value)));
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
    subtractive_rng_seed(lbl_8051381C, ((Ser_80200560 *)&lbl_80513910)[0].b);
    subtractive_rng_make_shuffle(lbl_8051381C);
    subtractive_rng_unshuffle(lbl_8051381C, a, b, 0x1156C);
    copy_save_data__23TAdSinglePlyChrSelectGCFii((s32)arg0, b);
    register_callback__23TAdSinglePlyChrSelectGCFis(b, 1);
    register_callback__23TAdSinglePlyChrSelectGCFis(a, 1);
    subtractive_rng_seed(lbl_8051381C, ((Ser_80200560 *)&lbl_80513910)[0].a);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(lbl_8051381C, arg0, 0x1156C);
    subtractive_rng_seed(lbl_8051381C, TAdSinglePlyChrSelectGC__sub_801FCCC0((u8 *)arg0));
    subtractive_rng_xor_buffer(lbl_8051381C, arg0, 0x11568);
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
    TAdSinglePlyChrSelectGC__sub_801FCCB4(self, subtractive_rng_next(lbl_8051381C));
    set_id__23TAdSinglePlyChrSelectGCFPvi(self, 0);
    set_id__23TAdSinglePlyChrSelectGCFPvi(self, TAdSinglePlyChrSelectGC__sub_80201204(self, 0x1156C));
    subtractive_rng_seed(lbl_8051381C, TAdSinglePlyChrSelectGC__sub_801FCCC0((u8 *)self));
    subtractive_rng_xor_buffer(lbl_8051381C, self, 0x11568);
    subtractive_rng_seed(lbl_8051381C, ((Ser_80200778 *)&lbl_80513910)[0].a);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(lbl_8051381C, self, 0x1156C);
    a = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (a != 0) {
        a = init_char_slots__23TAdSinglePlyChrSelectGCFi(a);
    }
    b = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (b != 0) {
        b = init_char_slots__23TAdSinglePlyChrSelectGCFi(b);
    }
    copy_save_data__23TAdSinglePlyChrSelectGCFii(a, (s32)self);
    subtractive_rng_seed(lbl_8051381C, ((Ser_80200778 *)&lbl_80513910)[0].b);
    subtractive_rng_make_shuffle(lbl_8051381C);
    permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(lbl_8051381C, a, b, 0x1156C);
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
        ((s32 *)&lbl_80513910)[0] = ((s32 *)&lbl_80513910)[1] = get_field_118__22TAdEnterSerialAccessGCFv();
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
            ((s32 *)&lbl_80513910)[0] = ((s32 *)&lbl_80513910)[1] = get_field_118__22TAdEnterSerialAccessGCFv();
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
