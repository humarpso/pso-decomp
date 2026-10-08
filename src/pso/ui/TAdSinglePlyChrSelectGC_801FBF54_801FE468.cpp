#include "types.h"
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
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(s32, s32);
extern s32 lbl_805D5F5C;
s32 TAdSinglePlyChrSelectGC__sub_801FE800(u32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(s32, s32);
extern RecoveredGlobal_801FE4BC_lbl_805137C8 lbl_805137C8;
extern u32 lbl_805D5F58;
M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE4BC(u32 arg0);
void *memcpy(void *, const void *, u32);
void *memset(void *, int, u32);
extern int lbl_805137D8[];
extern u8 lbl_805137F8[];
extern u32 lbl_805D5F58;
void TAdSinglePlyChrSelectGC__sub_801FE5F8(Req_801FE5F8 *arg0);
void *memcpy(void *, const void *, u32);
extern int lbl_805137D8[];
extern u8 lbl_805137F8[];
extern u32 lbl_805D5F58;
void TAdSinglePlyChrSelectGC__sub_801FE538(void);
void TAdSinglePlyChrSelectGC__sub_801FE710(void *arg0, void *arg1);
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
s32 TAdSinglePlyChrSelectGC__sub_801FC564(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(s32, s32);
s32 check_ready__23TAdSinglePlyChrSelectGCFv();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);

extern s32 lbl_805D5F5C;

s32 get_entry__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FCCDC((s32)(lbl_805D5F5C), (s32)(arg0)) != 0) {
        return (s32) &((struct Ent_801FE468_801FBF54 *) lbl_805D5F5C)[arg0].body[0];
    }
    return 0;
}

    extern int lbl_805137D8[];

typedef char RecoveredGlobal_801FE4BC_lbl_805137C8_size[sizeof(RecoveredGlobal_801FE4BC_lbl_805137C8) == 0x10 ? 1 : -1];
M2C_UNK *TAdSinglePlyChrSelectGC__sub_801FE4BC(u32 arg0) {
    u8 *temp_r4;
    if (arg0 >= 7U) {
        return NULL;
    }
    if (TAdSinglePlyChrSelectGC__sub_801FCCDC((s32)((void *) ((*(s32 *)&lbl_805D5F58))), (s32)((void *) (arg0))) == 0) {
        return NULL;
    }
    temp_r4 = (u8 *)((*(s32 *)&lbl_805D5F58) + (arg0 * 0x2798));
    M2C_FIELD(&lbl_805137C8.value, s32 *, 0) = (s32) (temp_r4 + 0x374);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 4) = (s32) M2C_FIELD(temp_r4, s32 *, 0x368);
    M2C_FIELD(&lbl_805137C8.value, s32 *, 8) = (s32) M2C_FIELD(temp_r4, s32 *, 0x2790);
    return &lbl_805137C8.value;
}

void TAdSinglePlyChrSelectGC__sub_801FE538(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        Req_801FE5F8 *r = (Req_801FE5F8 *)lbl_805137F8;
        if (r->slot[i] < 7 && r->slot[i] >= 0) {
            memcpy(((Slot_801FE5F8 *)lbl_805D5F58)[r->slot[i]].chr, (void *)lbl_805137D8[r->dest[i]], 0x41C);
            memcpy(((Slot_801FE5F8 *)lbl_805D5F58)[r->slot[i]].inv, (void *)lbl_805137D8[r->dest[i] + 4], 0x2370);
        }
    }
}

void TAdSinglePlyChrSelectGC__sub_801FE5F8(Req_801FE5F8 *arg0) {
    s32 i;
    if (arg0->count <= 4) {
        TAdSinglePlyChrSelectGC__sub_801FE710((void *)(lbl_805137F8), (void *)(arg0));
        for (i = 0; i < 4; i++) {
            memset((void *)lbl_805137D8[i], 0, 0x41C);
            memset((void *)lbl_805137D8[i + 4], 0, 0x2370);
        }
        for (i = 0; i < 4; i++) {
            if (arg0->slot[i] < 7 && arg0->dest[i] != -1) {
                memcpy((void *)lbl_805137D8[arg0->dest[i]], ((Slot_801FE5F8 *)lbl_805D5F58)[arg0->slot[i]].chr, 0x41C);
                memcpy((void *)lbl_805137D8[arg0->dest[i] + 4], ((Slot_801FE5F8 *)lbl_805D5F58)[arg0->slot[i]].inv, 0x2370);
            }
        }
    }
}

void TAdSinglePlyChrSelectGC__sub_801FE710(void *arg0, void *arg1) {
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

int TAdSinglePlyChrSelectGC__sub_801FE7D4(int a0) {  return lbl_805137D8[a0 + 4]; }

    extern int lbl_805137D8[];
int get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int a0) {  return lbl_805137D8[a0]; }

extern u32 lbl_805D5F58;

s32 TAdSinglePlyChrSelectGC__sub_801FE800(u32 arg0) {
    if (arg0 >= 7U) {
        return 0;
    }
    if (((u32) (*(u32 *)&lbl_805D5F5C) != 0U) && (TAdSinglePlyChrSelectGC__sub_801FCCDC((s32) (*(u32 *)&lbl_805D5F5C), (s32) arg0) != 0)) {
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
    if ((var_r3 != 0U) && (TAdSinglePlyChrSelectGC__sub_801FCCDC((s32)(var_r3), (s32)(var_r4)) != 0)) {
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
                var_r3 = TAdSinglePlyChrSelectGC__sub_801FC564(lbl_805D5F80);
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
