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
M2C_UNK TAdSinglePlyChrSelectGC__sub_802012AC();
M2C_UNK memcpy(void *, s32, M2C_UNK);
extern s32 *lbl_805D5F6C;
extern s32 lbl_805D5F9C;
s32 TAdSinglePlyChrSelectGC__sub_801FFE44(s32 arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802008E8();
s32 get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
extern s32 lbl_805D5F68;
void TAdSinglePlyChrSelectGC__sub_801FFF14(void);
s32 get_serial_result__22TAdEnterSerialAccessGCFv();
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
extern s32 lbl_805D5F5C;
s32 TAdSinglePlyChrSelectGC__sub_802004D8(void);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
extern s32 lbl_805D5F58;
s32 TAdSinglePlyChrSelectGC__sub_8020051C(void);
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
void *TAdSinglePlyChrSelectGC__sub_801FDFB8(void *, void *);
s32 TAdSinglePlyChrSelectGC__sub_80200690(s32 arg0, s32 arg1);
s32 get_ptr_4__10TObjPlayerFPv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
M2C_UNK clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(s32);
M2C_UNK TObjPlayer__sub_802C3720(void *);
M2C_UNK init_character_stats_for_level(u8, void *, s32);
M2C_UNK init_class_starting_inventory(void *);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern s32 lbl_805D5F58;
extern void *lbl_805D5F60;
void TAdSinglePlyChrSelectGC__sub_8007C0CC(void *, void *, s32);
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
s32 TAdSinglePlyChrSelectGC__sub_802002E8(s32 arg0);
void TAdSinglePlyChrSelectGC__sub_8007C0CC(void *, void *, s32);
void subtractive_rng_unshuffle(void *, s32, s32, s32);
void subtractive_rng_make_shuffle(void *);
s32 subtractive_rng_xor_buffer(void *, void *, s32);
void subtractive_rng_seed(void *, s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 TAdSinglePlyChrSelectGC__sub_801FC900(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0);
s32 TAdSinglePlyChrSelectGC__sub_80200690(s32 arg0, s32 arg1);
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
extern u8 lbl_8051381C[];
extern RecoveredGlobal_801FFF14_lbl_80513910 lbl_80513910;
void TAdSinglePlyChrSelectGC__sub_80200560(void *arg0);
void TAdSinglePlyChrSelectGC__sub_8007C0CC(void *, void *, s32);
void TAdSinglePlyChrSelectGC__sub_8007C1CC(void *, s32, s32, s32);
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
void TAdSinglePlyChrSelectGC__sub_8007C0CC(void *, void *, s32);
void TAdSinglePlyChrSelectGC__sub_8007C1CC(void *, s32, s32, s32);
void subtractive_rng_make_shuffle(void *);
s32 subtractive_rng_xor_buffer(void *, void *, s32);
s32 subtractive_rng_next(void *);
void subtractive_rng_seed(void *, s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
s32 TAdSinglePlyChrSelectGC__sub_801FC900(s32 arg0);
void TAdSinglePlyChrSelectGC__sub_801FCCB4(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0);
void set_id__23TAdSinglePlyChrSelectGCFPvi(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_80200690(s32 arg0, s32 arg1);
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
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
s32 TAdPlayerLoadGC__sub_801E2048(s32, void *);
void render_tick__Fv();
s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
s32 TAdSinglePlyChrSelectGC__sub_801FC900(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCD3C(s32);
void TAdSinglePlyChrSelectGC__sub_801FCD74(void);
s32 TAdSinglePlyChrSelectGC__sub_801FD8B8(s32, s32, s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C(void);
void increment_counter__23TAdSinglePlyChrSelectGCFv();
void TAdSinglePlyChrSelectGC__sub_80200560(void *arg0);
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *arg0, void *arg1);
void TAdSinglePlyChrSelectGC__sub_802010E8();
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
void TAdSinglePlyChrSelectGC__sub_80200470(void);
void TAdPlayerLoadGC__sub_801E14E4(File_80200A44 *);
void TAdPlayerLoadGC__sub_801E14E8(File_80200A44 *, s32);
void TAdPlayerLoadGC__sub_801E17F4(s32, File_80200A44 *);
void TAdSinglePlyChrSelectGC__sub_80200560(void *arg0);
char *strcpy(char *, const char *);
M2C_UNK memcpy(void *, s32, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern u8 lbl_804C88C0[];
extern s32 lbl_805D5F58;
extern s32 lbl_805D5F5C;
extern s32 lbl_805D5F94;
s32 TAdSinglePlyChrSelectGC__sub_80200A44(int arg0);
}

extern "C" {

void create_instance__23TAdSinglePlyChrSelectGCFv(void);
void game_state_load(void);
s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCD3C(s32);
int TAdSinglePlyChrSelectGC__sub_801FFDB8(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200998();
void reset_character_data__23TAdSinglePlyChrSelectGCFv(void);
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);
M2C_UNK init_class_starting_inventory(void *);
M2C_UNK TLobby__sub_801F494C(M2C_UNK);
u32 check_flag__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memcpy(void *, s32, M2C_UNK);

s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    TAdSinglePlyChrSelectGC__sub_801FFDFC((u8 *)(arg0 + 4));
    TAdSinglePlyChrSelectGC__sub_801FFDB8(arg0 + 0xD2C4);
    return arg0;
}

extern s32 *lbl_805D5F6C;

u8 *TAdSinglePlyChrSelectGC__sub_801FFDFC(u8 *arg0) {
    __construct_array(arg0 + 0xC0, (void *)reinit__17TWindowSubComCardFi, 0, 0x100, 0xD2);
    return arg0;
}

#pragma push
#pragma fp_contract on
s32 TAdSinglePlyChrSelectGC__sub_801FFE44(s32 arg0) {
    u32 temp_r31;
    u32 temp_r3;
    memcpy((void *)((*(u32 * *)&lbl_805D5F6C)), (s32)(lbl_805D5F9C + 0x2048), (M2C_UNK)(0x11C));
    temp_r31 = *(*(u32 * *)&lbl_805D5F6C);
    *(*(u32 * *)&lbl_805D5F6C) = 0U;
    temp_r3 = ((u32)TAdSinglePlyChrSelectGC__sub_80201204((s32 *)((*(u32 * *)&lbl_805D5F6C)), (M2C_UNK)(0x11C)));
    if (temp_r3 != temp_r31) {
        if (arg0 == 0) {
            TAdSinglePlyChrSelectGC__sub_802012AC();
        }
        return 0;
    }
    return 1;
}
#pragma pop

typedef char RecoveredGlobal_801FFF14_lbl_80513910_size[sizeof(RecoveredGlobal_801FFF14_lbl_80513910) == 0x10 ? 1 : -1];
void TAdSinglePlyChrSelectGC__sub_801FFF14(void) {
    s32 temp_r3;
    temp_r3 = get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
    M2C_FIELD(&lbl_80513910.value, s32 *, 4) = temp_r3;
    M2C_FIELD(&lbl_80513910.value, s32 *, 0) = temp_r3;
    TAdSinglePlyChrSelectGC__sub_802000C8((void *)((void *) (lbl_805D5F68)), (void *)((void *) (&lbl_80513910.value)));
    TAdSinglePlyChrSelectGC__sub_802008E8();
    TAdSinglePlyChrSelectGC__sub_801FFF98((void *)((void *) (lbl_805D5F68)));
}

void create_instance__23TAdSinglePlyChrSelectGCFv(void) {
    *lbl_805D5F6C = 0;
    *lbl_805D5F6C = TAdSinglePlyChrSelectGC__sub_80201204(lbl_805D5F6C, 0x11C);
    TAdSinglePlyChrSelectGC__sub_80200998();
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
    TAdSinglePlyChrSelectGC__sub_8007C0CC(lbl_8051381C, arg0, 0xE28C);
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
    TAdSinglePlyChrSelectGC__sub_8007C0CC(lbl_8051381C, self, 0xE28C);
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
    TAdSinglePlyChrSelectGC__sub_8007C1CC(lbl_8051381C, a, b, 0xE28C);
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

s32 TAdSinglePlyChrSelectGC__sub_802002E8(s32 arg0) {
    s32 r = get_field_118__22TAdEnterSerialAccessGCFv();
    ((Ser_802002E8 *)&lbl_80513910)[0].b = r;
    ((Ser_802002E8 *)&lbl_80513910)[0].a = r;
    memcpy((void *)((void *)lbl_805D5F58), (s32)(lbl_805D5F94 + 0x2048), (M2C_UNK)(0x1156C));
    TAdSinglePlyChrSelectGC__sub_80200560((void *)((void *)lbl_805D5F58));
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
    TAdSinglePlyChrSelectGC__sub_80200560((void *)((void *)lbl_805D5F5C));
    if (TAdPlayerLoadGC__sub_801FD814() == 7) {
        return;
    }
}

void TAdSinglePlyChrSelectGC__sub_80200470(void) {
    s32 r = get_field_118__22TAdEnterSerialAccessGCFv();
    ((Ser_80200470 *)&lbl_80513910)[0].b = r;
    ((Ser_80200470 *)&lbl_80513910)[0].a = r;
    memcpy((void *)TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), (s32)lbl_805D5F60, 0x41C);
    memcpy((void *)TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), (s32)lbl_805D5F64, 0x2370);
    ((M2C_UNK (*)(s32))encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv)(lbl_805D5F58);
    TAdSinglePlyChrSelectGC__sub_80200A44((int)(1));
}

s32 TAdSinglePlyChrSelectGC__sub_802004D8(void) {
    s32 temp_r3;
    temp_r3 = get_serial_result__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&(*(RecoveredGlobal_802004D8_lbl_80513910 *)&lbl_80513910).value, s32 *, 4) = temp_r3;
    M2C_FIELD(&(*(RecoveredGlobal_802004D8_lbl_80513910 *)&lbl_80513910).value, s32 *, 0) = temp_r3;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)((void *) (lbl_805D5F5C)), (void *)((void *) (&(*(RecoveredGlobal_802004D8_lbl_80513910 *)&lbl_80513910).value)));
    TAdSinglePlyChrSelectGC__sub_80200A44((int)((int) (0)));
    return 1;
}
typedef char RecoveredGlobal_8020051C_lbl_80513910_size[sizeof(RecoveredGlobal_8020051C_lbl_80513910) == 0x10 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_8020051C(void) {
    s32 temp_r3;
    temp_r3 = get_field_118__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&(*(RecoveredGlobal_8020051C_lbl_80513910 *)&lbl_80513910).value, s32 *, 4) = temp_r3;
    M2C_FIELD(&(*(RecoveredGlobal_8020051C_lbl_80513910 *)&lbl_80513910).value, s32 *, 0) = temp_r3;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)((void *) (lbl_805D5F58)), (void *)((void *) (&(*(RecoveredGlobal_8020051C_lbl_80513910 *)&lbl_80513910).value)));
    TAdSinglePlyChrSelectGC__sub_80200A44((int)((int) (1)));
    return 1;
}

void TAdSinglePlyChrSelectGC__sub_80200560(void *arg0) {
    s32 a;
    s32 b;
    a = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (a != 0) {
        a = TAdSinglePlyChrSelectGC__sub_801FC900(a);
    }
    b = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (b != 0) {
        b = TAdSinglePlyChrSelectGC__sub_801FC900(b);
    }
    TAdSinglePlyChrSelectGC__sub_80200690(a, (s32)arg0);
    subtractive_rng_seed(lbl_8051381C, ((Ser_80200560 *)&lbl_80513910)[0].b);
    subtractive_rng_make_shuffle(lbl_8051381C);
    subtractive_rng_unshuffle(lbl_8051381C, a, b, 0x1156C);
    TAdSinglePlyChrSelectGC__sub_80200690((s32)arg0, b);
    register_callback__23TAdSinglePlyChrSelectGCFis(b, 1);
    register_callback__23TAdSinglePlyChrSelectGCFis(a, 1);
    subtractive_rng_seed(lbl_8051381C, ((Ser_80200560 *)&lbl_80513910)[0].a);
    TAdSinglePlyChrSelectGC__sub_8007C0CC(lbl_8051381C, arg0, 0x1156C);
    subtractive_rng_seed(lbl_8051381C, TAdSinglePlyChrSelectGC__sub_801FCCC0((u8 *)arg0));
    subtractive_rng_xor_buffer(lbl_8051381C, arg0, 0x11568);
}

s32 TAdSinglePlyChrSelectGC__sub_80200690(s32 arg0, s32 arg1) {
    Save_80200690 *dst = (Save_80200690 *)arg0;
    Save_80200690 *src = (Save_80200690 *)arg1;
    Slot_80200690 *d;
    Slot_80200690 *s;
    dst->hdr = src->hdr;
    d = dst->slots;
    s = src->slots;
    do {
        TAdSinglePlyChrSelectGC__sub_801FDFB8(d, s);
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
    TAdSinglePlyChrSelectGC__sub_8007C0CC(lbl_8051381C, self, 0x1156C);
    a = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (a != 0) {
        a = TAdSinglePlyChrSelectGC__sub_801FC900(a);
    }
    b = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (b != 0) {
        b = TAdSinglePlyChrSelectGC__sub_801FC900(b);
    }
    TAdSinglePlyChrSelectGC__sub_80200690(a, (s32)self);
    subtractive_rng_seed(lbl_8051381C, ((Ser_80200778 *)&lbl_80513910)[0].b);
    subtractive_rng_make_shuffle(lbl_8051381C);
    TAdSinglePlyChrSelectGC__sub_8007C1CC(lbl_8051381C, a, b, 0x1156C);
    TAdSinglePlyChrSelectGC__sub_80200690((s32)self, b);
    register_callback__23TAdSinglePlyChrSelectGCFis(b, 1);
    register_callback__23TAdSinglePlyChrSelectGCFis(a, 1);
}
#undef self

s32 TAdSinglePlyChrSelectGC__sub_80200A44(int arg0) {
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
    TAdPlayerLoadGC__sub_801E17F4(lbl_805D5F94, &f);
    TAdPlayerLoadGC__sub_801E14E4(&f);
    if (arg0 != 0) {
        TAdSinglePlyChrSelectGC__sub_80200560((void *)lbl_805D5F58);
    } else {
        TAdSinglePlyChrSelectGC__sub_80200560((void *)lbl_805D5F5C);
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
        TObjPlayer__sub_802C3720(lbl_805D5F60);
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
        if (TAdPlayerLoadGC__sub_801E1E38(lbl_805D5F7C) != 1) {
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return 0;
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (TAdPlayerLoadGC__sub_801E1E38(lbl_805D5F7C) != 1) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                return 0;
            }
            TAdSinglePlyChrSelectGC__sub_801FCD74();
            render_tick__Fv();
        }
        if (TAdPlayerLoadGC__sub_801E2048(lbl_805D5F7C, lbl_804C88C0) != 0) {
            if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                disconnect_protocol__6TLobbyFv();
            }
            return 0;
        }
        obj = lbl_805D5F84 << 13;
        buf = alloc__22TQuestVmDownLoadServerFPv(obj);
        memset((void *)buf, 0, obj);
        while (TAdPlayerLoadGC__sub_801E1944(lbl_805D5F7C, lbl_804C88C0, buf, lbl_805D5F84) != 0) {
            if (TAdPlayerLoadGC__sub_801E1E38(lbl_805D5F7C) != 1) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                return 0;
            }
            TAdSinglePlyChrSelectGC__sub_801FCD74();
            render_tick__Fv();
        }
        while (TAdPlayerLoadGC__sub_801E1B50(lbl_805D5F7C) != 0) {
            if (TAdPlayerLoadGC__sub_801E1E38(lbl_805D5F7C) != 1) {
                if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 1) {
                    disconnect_protocol__6TLobbyFv();
                }
                if (buf != 0) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
                }
                return 0;
            }
            TAdSinglePlyChrSelectGC__sub_801FCD74();
            render_tick__Fv();
        }
        ((s32 *)&lbl_80513910)[0] = ((s32 *)&lbl_80513910)[1] = get_field_118__22TAdEnterSerialAccessGCFv();
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
        if (obj != 0) {
            obj = TAdSinglePlyChrSelectGC__sub_801FC900(obj);
        }
        memset((void *)obj, 0, 0x1156C);
        memcpy((void *)obj, buf + 0x2048, 0x1156C);
        TAdSinglePlyChrSelectGC__sub_80200560((void *)obj);
        if (TAdSinglePlyChrSelectGC__sub_801FD8B8(TAdSinglePlyChrSelectGC__sub_801FCD3C(obj),
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
            TAdSinglePlyChrSelectGC__sub_802010E8();
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
            TAdSinglePlyChrSelectGC__sub_80200A44((int)(1));
            if (TAdSinglePlyChrSelectGC__sub_801FDA4C() == 0) {
                lbl_805D5F78 = 6;
            }
        }
        return M2C_FIELD(lbl_805D5F64, s32 *, 0x14);
    }
    return 0;
}

}
