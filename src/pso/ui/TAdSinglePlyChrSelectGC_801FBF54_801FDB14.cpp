#include "types.h"
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
void TAdSinglePlyChrSelectGC__sub_801FE2D0(s32 i);
extern u32 lbl_805D5F5C;
void TAdSinglePlyChrSelectGC__sub_801FE304(s32 i);
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
s32 TAdSinglePlyChrSelectGC__sub_801FDDAC(E_801FDDAC *arg0, s32 arg1, E_801FDDAC *arg2, s32 arg3);
s32 TAdSinglePlyChrSelectGC__sub_801FDE14(E_801FDE14 *arg0, s32 arg1, E_801FDE14 *arg2, s32 arg3);
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

s32 TAdSinglePlyChrSelectGC__sub_801FDDAC(E_801FDDAC *arg0, s32 arg1, E_801FDDAC *arg2, s32 arg3) {
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

s32 TAdSinglePlyChrSelectGC__sub_801FDE14(E_801FDE14 *arg0, s32 arg1, E_801FDE14 *arg2, s32 arg3) {
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
        return TAdSinglePlyChrSelectGC__sub_801FDDAC((E_801FDDAC *)(arg1), (s32)(arg2), (E_801FDDAC *)(arg3), (s32)(arg4));
    }
    if ((arg2 <= 3) && (arg4 >= 4)) {
        return TAdSinglePlyChrSelectGC__sub_801FDE14((E_801FDE14 *)(arg1), (s32)(arg2), (E_801FDE14 *)(arg3), (s32)(arg4));
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

void TAdSinglePlyChrSelectGC__sub_801FE2D0(s32 i) {
    if ((*(Ent_801FE2D0 * *)&lbl_805D5F58) == 0) return;
    if (i >= 4) return;
    (*(Ent_801FE2D0 * *)&lbl_805D5F58)[i].a = 0;
    (*(Ent_801FE2D0 * *)&lbl_805D5F58)[i].b = 0;
}

void TAdSinglePlyChrSelectGC__sub_801FE304(s32 i) {
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
