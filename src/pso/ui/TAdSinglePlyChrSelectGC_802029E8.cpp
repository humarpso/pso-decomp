#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Slot_80202C68 { u8 data[0x39B4]; };

struct Words_80202C68 { u32 w[32]; };

struct Blk_80202C68 { u32 a; Words_80202C68 b; };

struct Pair_80202C68 { u32 a; u32 b; };

struct Tail_80202C68 { Pair_80202C68 p0, p1, p2, p3, p4, p5, p6; };

struct Save_80202C68 {
    s32 hdr;
    Slot_80202C68 slots[7];
    Tail_80202C68 tail;
    Blk_80202C68 blk;
    s32 f194AC;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct B1C_80202DD4 { u32 w[7]; };

struct B10_80202DD4 { u32 w[4]; };

struct B400_80202DD4 { u32 w[0x100]; };

struct B90_80202DD4 { u32 w[0x24]; };

struct B420_80202DD4 { u32 w[0x108]; };

struct BAC_80202DD4 { u32 w[0x2B]; };

struct B100_80202DD4 { u32 w[0x40]; };

struct B28_80202DD4 { u32 w[0xA]; };

struct BC0_80202DD4 { u32 w[0x30]; };

struct B21FC_80202DD4 { u32 w[0x87F]; };

struct Item_80202DD4 { u8 data[0x18]; };

struct Elem_80202DD4 { u8 data[0x54]; };

struct S_80202DD4 {
    s32 f0, f4, f8, fC, f10, f14;
    B1C_80202DD4 b18;
    B10_80202DD4 b34;
    B400_80202DD4 b44;
    s32 f444, f448, f44C;
    Item_80202DD4 items[4];
    B90_80202DD4 b4B0;
    B420_80202DD4 b540;
    Elem_80202DD4 elems[20];
    BAC_80202DD4 bFF0;
    BAC_80202DD4 b109C;
    B1C_80202DD4 b1148;
    B100_80202DD4 b1164;
    B28_80202DD4 b1264;
    B28_80202DD4 b128C;
    BC0_80202DD4 b12B4;
    B1C_80202DD4 b1374;
    B21FC_80202DD4 b1390;
};

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80202A68(u8 *arg0);
int fn_8020325C(void *arg0);
s32 free_chardata__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
M2C_UNK __destroy_arr(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 __dl__FPv(s32);
extern M2C_UNK lbl_805D5FB0;
extern int lbl_805D5F58;
extern s32 lbl_805D5F60;
extern s32 *lbl_805D5F64;
extern int lbl_805D5F74;
s32 destroy_chardata_array__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
void init__9TItemDataFv(void *);
void clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
s32 init_single_player_chr_select__6TLobbyFPv(s32);
extern RecoveredGlobal_80202A40_lbl_8051381C lbl_8051381C;
void TAdSinglePlyChrSelectGC__sub_80202A40(void);
s32 *TAdSinglePlyChrSelectGC__sub_80202B38(Obj_80202B38 *self, s32 i);
Ent_80202B1C *TAdSinglePlyChrSelectGC__sub_80202B1C(Obj_80202B1C *self, s32 i);
void clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void clear_inventory_slot_by_index__23TAdSinglePlyChrSelectGCFPvi(Obj_80202B4C *self, s32 i);
void TAdSinglePlyChrSelectGC__sub_80202C08(Obj_80202C08 *self);
void TAdSinglePlyChrSelectGC__sub_80202C3C(Obj_80202C3C *self);
void __construct_array(void *, void *, void *, int, int);
s32 free_chardata__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
u8 *construct_chardata_array__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void __construct_array(void *, void *, void *, int, int);
void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p);
void TAdSinglePlyChrSelectGC__sub_802115C0();
u8 *TAdSinglePlyChrSelectGC__sub_80203190(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_80202D7C(void *, void *);
Save_80202C68 *copy_save_data__23TAdSinglePlyChrSelectGCFPvPv(Save_80202C68 *arg0, Save_80202C68 *arg1);
void TAdSinglePlyChrSelectGC__sub_80076D9C(void *, void *);
void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
u8 *copy_character_data__23TAdSinglePlyChrSelectGCFPvPv(u8 *arg0, u8 *arg1);
}

extern "C" {

u8 TAdSinglePlyChrSelectGC__sub_80202B30(void* p);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
void TAdSinglePlyChrSelectGC__sub_80203210(void* p);
u8 check_flag__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void clear_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
s32 free_chardata__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
int get_instance__23TAdSinglePlyChrSelectGCFv(void);
int get_selection__23TAdSinglePlyChrSelectGCFv(void);
void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p);
void set_chr_select_state__23TAdSinglePlyChrSelectGCFi(int a0);
void set_global_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void set_player_index__23TAdSinglePlyChrSelectGCFi(int a0);
void set_save_slot__23TAdSinglePlyChrSelectGCFi(int a0);
void set_state__23TAdSinglePlyChrSelectGCFi(int a0);
int __ct__12TPlyCharDataFv(void*);
s32 __dl__FPv(s32);
s32 __dt__12TPlyCharDataFv(s32, s32);
int copy_item_data__6TLobbyFPvPv(void*);
s32 get_char_table_entry__23TAdSinglePlyChrSelectGCFi(u32);
int init_guild_card_tag__17TWindowSubComCardFi(void*);
s32 is_split_screen();

extern s32 lbl_805D5F60;

s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    if (is_split_screen() != 0) {
        if (arg0 == 0xFFFF) {
            return get_char_table_entry__23TAdSinglePlyChrSelectGCFi(0U);
        }
        return get_char_table_entry__23TAdSinglePlyChrSelectGCFi(arg0);
    }
    return lbl_805D5F60;
}

typedef char RecoveredGlobal_80202A40_lbl_8051381C_size[sizeof(RecoveredGlobal_80202A40_lbl_8051381C) == 0xE8 ? 1 : -1];
void TAdSinglePlyChrSelectGC__sub_80202A40(void) {
    init_single_player_chr_select__6TLobbyFPv((s32) &lbl_8051381C.value);
}

s32 TAdSinglePlyChrSelectGC__sub_80202A68(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x194AC);
}

s32 destroy_chardata_array__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __destroy_arr(arg0 + 4, (M2C_UNK *)free_chardata__23TAdSinglePlyChrSelectGCFis, 0x39b4, 7);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

s32 free_chardata__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

Ent_80202B1C *TAdSinglePlyChrSelectGC__sub_80202B1C(Obj_80202B1C *self, s32 i) {
    return &self->e[i];
}

u8 TAdSinglePlyChrSelectGC__sub_80202B30(void* p) { return *(u8*)((char*)p + 0x0); }

s32 *TAdSinglePlyChrSelectGC__sub_80202B38(Obj_80202B38 *self, s32 i) {
    return self->e[i].c;
}

    extern int lbl_805D5F74;

void clear_inventory_slot_by_index__23TAdSinglePlyChrSelectGCFPvi(Obj_80202B4C *self, s32 i) {
    clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv((u8 *)(&self->e[i]));
}

int get_selection__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D5F74; }

extern s32 *lbl_805D5F64;

void set_global_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((s32 *) lbl_805D5F64 != NULL) {
        *lbl_805D5F64 |= arg0;
    }
}

    extern int lbl_805D5F58;
int get_instance__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D5F58; }

    extern int lbl_805D5F78;
void set_player_index__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5F78 = a0; }

    extern int lbl_805D5FAC;
void set_save_slot__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5FAC = a0; }

extern s32 *lbl_805D5F64;

void clear_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((s32 *) lbl_805D5F64 != NULL) {
        *lbl_805D5F64 &= ~arg0;
    }
}

extern s32 *lbl_805D5F64;

u8 check_flag__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((s32 *) lbl_805D5F64 != NULL) {
        return (u8) ((*lbl_805D5F64 & arg0) != 0);
    }
    return 0U;
}

    extern int lbl_805D5FA0;
void set_state__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5FA0 = a0; }

    extern int lbl_805D5FA4;

void TAdSinglePlyChrSelectGC__sub_80202C08(Obj_80202C08 *self) {
    s32 i;
    self->n = 0;
    for (i = 0; i < 4; i++) {
        self->a[i] = -1;
        self->b[i] = -1;
    }
}

void set_chr_select_state__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5FA4 = a0; }

void TAdSinglePlyChrSelectGC__sub_80202C3C(Obj_80202C3C *self) {
    s32 i;
    self->n = 0;
    for (i = 0; i < 4; i++) {
        self->a[i] = -1;
        self->b[i] = -1;
    }
}

Save_80202C68 *copy_save_data__23TAdSinglePlyChrSelectGCFPvPv(Save_80202C68 *arg0, Save_80202C68 *arg1) {
    Slot_80202C68 *d;
    Slot_80202C68 *s;
    arg0->hdr = arg1->hdr;
    d = arg0->slots;
    s = arg1->slots;
    do {
        TAdSinglePlyChrSelectGC__sub_80202D7C(d, s);
        d++;
        s++;
    } while (d < &arg0->slots[7]);
    arg0->tail = arg1->tail;
    arg0->blk = arg1->blk;
    arg0->f194AC = arg1->f194AC;
    return arg0;
}

u8 *copy_character_data__23TAdSinglePlyChrSelectGCFPvPv(u8 *arg0, u8 *arg1) {
    S_80202DD4 *d = (S_80202DD4 *)arg0;
    S_80202DD4 *s = (S_80202DD4 *)arg1;
    Elem_80202DD4 *p;
    Elem_80202DD4 *q;
    d->f0 = s->f0;
    d->f4 = s->f4;
    d->f8 = s->f8;
    d->fC = s->fC;
    d->f10 = s->f10;
    d->f14 = s->f14;
    d->b18 = s->b18;
    d->b34 = s->b34;
    d->b44 = s->b44;
    d->f444 = s->f444;
    d->f448 = s->f448;
    d->f44C = s->f44C;
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(&d->items[0], &s->items[0]);
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(&d->items[1], &s->items[1]);
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(&d->items[2], &s->items[2]);
    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(&d->items[3], &s->items[3]);
    d->b4B0 = s->b4B0;
    d->b540 = s->b540;
    p = d->elems;
    q = s->elems;
    do {
        TAdSinglePlyChrSelectGC__sub_80076D9C(p, q);
        p++;
        q++;
    } while (p < d->elems + 20);
    d->bFF0 = s->bFF0;
    d->b109C = s->b109C;
    d->b1148 = s->b1148;
    d->b1164 = s->b1164;
    d->b1264 = s->b1264;
    d->b128C = s->b128C;
    d->b12B4 = s->b12B4;
    d->b1374 = s->b1374;
    d->b1390 = s->b1390;
    return arg0;
}

void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1) { copy_item_data__6TLobbyFPvPv(p); *(short*)((char*)p + 0x14) = *(short*)((char*)a1 + 0x14); *(short*)((char*)p + 0x16) = *(short*)((char*)a1 + 0x16); return p; }

u8 *construct_chardata_array__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    __construct_array(arg0 + 4, (void *)TAdSinglePlyChrSelectGC__sub_80203158, (void *)free_chardata__23TAdSinglePlyChrSelectGCFis, 0x39B4, 7);
    return arg0;
}

void* TAdSinglePlyChrSelectGC__sub_80203158(void* p) { __ct__12TPlyCharDataFv(p); TAdSinglePlyChrSelectGC__sub_80203190((u8 *)((void*)((char*)p + 0x41c))); return p; }

u8 *TAdSinglePlyChrSelectGC__sub_80203190(u8 *arg0) {
    __construct_array(arg0 + 0x450, (void *)TAdSinglePlyChrSelectGC__sub_802115C0, 0, 0x18, 4);
    init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv((void*)(arg0 + 0x4B0));
    return arg0;
}

void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p) { init_guild_card_tag__17TWindowSubComCardFi(p); return p; }
void TAdSinglePlyChrSelectGC__sub_80203210(void* p) { *(u32*)((char*)p + 0x4) &= 0xfffffff7; }

void clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    init__9TItemDataFv(arg0 + 8);
}

int fn_8020325C(void *arg0) {
    int var_r4;
    var_r4 = 0;
    if (((u8) M2C_FIELD(arg0, u8 *, 0x0) == 1) && ((u8) M2C_FIELD(arg0, u8 *, 0x1) == 3)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

}
