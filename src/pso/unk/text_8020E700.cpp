#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_14 { u8 bytes[0x14]; };

struct RecoveredGlobal_8020ECD8_lbl_80513D78 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8020ECA8_lbl_80513D58 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Ent_8020EC68 { u8 pad[0x10]; s32 v; };

typedef s32 M2C_UNK;
struct Item_8020E934 { u8 b[0x14]; };

struct Ctr_8020E934 { u8 b[0x74]; };

struct Tbl_8020E934 { u8 pad[8]; u8 *pairs; u8 count; };

extern "C" {
extern RecoveredGlobal_8020ECD8_lbl_80513D78 lbl_80513D78;
void TLobby__sub_8020ECD8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_8020ECA8_lbl_80513D58 lbl_80513D58;
void TLobby__sub_8020ECA8(void);
extern RecoveredGlobal_8020ECD8_lbl_80513D78 lbl_80513D78;
void TLobby__sub_8020EC68(s32 i, s32 j);
extern RecoveredGlobal_8020ECD8_lbl_80513D78 lbl_80513D78;
extern s32 lbl_80513D68[];
extern Tbl_8020E934 **lbl_805D6158;
extern s32 lbl_805D615C;
extern s32 lbl_805D6240;
void reset_counter_64__6TLobbyFPv(Ctr_8020E934 *);
s32 TLobby__sub_8020E5E0(s32);
s32 get_lobby_group__6TLobbyFi(s32);
void TLobby__sub_8020F00C(Ctr_8020E934 *, u8);
void TLobby__sub_8020EEFC(Ctr_8020E934 *, s32);
s32 pop_byte__6TLobbyFPv(Ctr_8020E934 *);
void init__9TItemDataFv(Item_8020E934 *);
s32 TLobby__sub_8020E788(Item_8020E934 *, s32);
void copy_item_data__6TLobbyFPvPv(Item_8020E934 *, Item_8020E934 *);
void TLobby__sub_8020E934(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8020ECD8_lbl_80513D78_size[sizeof(RecoveredGlobal_8020ECD8_lbl_80513D78) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_8020ECA8_lbl_80513D58_size[sizeof(RecoveredGlobal_8020ECA8_lbl_80513D58) == 0x10 ? 1 : -1];

void TLobby__sub_8020E934(s32 arg0) {
    Item_8020E934 item;
    Ctr_8020E934 ctr;
    Item_8020E934 *dst;
    s32 n;
    Tbl_8020E934 *tbl;
    u8 *p;
    s32 i;
    s32 b;
    s32 *counts;
    s32 cnt;
    s32 j;
    s32 k;
    s32 grp;
    reset_counter_64__6TLobbyFPv(&ctr);
    dst = ((Item_8020E934 **)&lbl_80513D78)[arg0];
    n = TLobby__sub_8020E5E0(lbl_805D615C);
    tbl = *lbl_805D6158;
    grp = get_lobby_group__6TLobbyFi(lbl_805D615C);
    cnt = tbl->count;
    p = tbl->pairs + grp * cnt * 2;
    i = 0;
    while (i++ < cnt) {
        for (k = p[1]; k != 0; k--) {
            TLobby__sub_8020F00C(&ctr, p[0]);
        }
        p += 2;
    }
    TLobby__sub_8020EEFC(&ctr, 8);
    j = 0;
    counts = lbl_80513D68;
    while (j < n) {
        b = pop_byte__6TLobbyFPv(&ctr);
        if (b == -1) {
            continue;
        }
        init__9TItemDataFv(&item);
        item.b[0] = 1;
        item.b[1] = 2;
        if (lbl_805D6240 != 3) {
            item.b[2] = b;
        } else if (lbl_805D615C >= 1 && lbl_805D615C <= 99) {
            item.b[2] = b;
        } else if (lbl_805D615C >= 100 && lbl_805D615C <= 150) {
            item.b[2] = b + 2;
        } else if (lbl_805D615C >= 151 && lbl_805D615C <= 200) {
            item.b[2] = b + 3;
        } else {
            item.b[2] = b;
        }
        if (TLobby__sub_8020E788(&item, arg0) == 1) {
            copy_item_data__6TLobbyFPvPv(&dst[counts[arg0]++], &item);
            j++;
        }
    }
}

void TLobby__sub_8020EC68(s32 i, s32 j) {
    Ent_8020EC68 *e = ((Ent_8020EC68 * *)&lbl_80513D78)[j];
    if (i >= 0 && i <= 0x14) {
        if (e[i].v != -1) e[i].v = -1;
    }
}

void TLobby__sub_8020ECA8(void) {
    memset((void *) (&lbl_80513D58.value), (int) (0), (int) (0x10));
}

void TLobby__sub_8020ECD8(s32 arg0, s32 arg1, s32 arg2) {
    *(M2CCopy_14 *)(arg0) = *(const M2CCopy_14 *)(M2C_FIELD(&lbl_80513D78.value, M2C_UNK *, (arg2 * 4)) + (arg1 * 0x14));
}

}
