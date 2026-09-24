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
s32 TAdSinglePlyChrSelectGC__sub_80202A74(s32 arg0, s16 arg1);
void init__9TItemDataFv(void *);
void TAdSinglePlyChrSelectGC__sub_80203220(u8 *arg0);
s32 init_single_player_chr_select__6TLobbyFPv(s32);
extern RecoveredGlobal_80202A40_lbl_8051381C lbl_8051381C;
void TAdSinglePlyChrSelectGC__sub_80202A40(void);
s32 *TAdSinglePlyChrSelectGC__sub_80202B38(Obj_80202B38 *self, s32 i);
Ent_80202B1C *TAdSinglePlyChrSelectGC__sub_80202B1C(Obj_80202B1C *self, s32 i);
void TAdSinglePlyChrSelectGC__sub_80203220(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_80202B4C(Obj_80202B4C *self, s32 i);
void TAdSinglePlyChrSelectGC__sub_80202C08(Obj_80202C08 *self);
void TAdSinglePlyChrSelectGC__sub_80202C3C(Obj_80202C3C *self);
}

extern "C" {

u8 TAdSinglePlyChrSelectGC__sub_80202B30(void* p);
int TAdSinglePlyChrSelectGC__sub_8020310C(void);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
int TAdSinglePlyChrSelectGC__sub_80203190(void*);
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

s32 TAdSinglePlyChrSelectGC__sub_80202A74(s32 arg0, s16 arg1) {
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

void TAdSinglePlyChrSelectGC__sub_80202B4C(Obj_80202B4C *self, s32 i) {
    TAdSinglePlyChrSelectGC__sub_80203220((u8 *)(&self->e[i]));
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

void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1) { copy_item_data__6TLobbyFPvPv(p); *(short*)((char*)p + 0x14) = *(short*)((char*)a1 + 0x14); *(short*)((char*)p + 0x16) = *(short*)((char*)a1 + 0x16); return p; }

int TAdSinglePlyChrSelectGC__sub_8020310C(void) { return 0; }

void* TAdSinglePlyChrSelectGC__sub_80203158(void* p) { __ct__12TPlyCharDataFv(p); TAdSinglePlyChrSelectGC__sub_80203190((void*)((char*)p + 0x41c)); return p; }

int TAdSinglePlyChrSelectGC__sub_80203190(void*) { return 0; }

void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p) { init_guild_card_tag__17TWindowSubComCardFi(p); return p; }
void TAdSinglePlyChrSelectGC__sub_80203210(void* p) { *(u32*)((char*)p + 0x4) &= 0xfffffff7; }

void TAdSinglePlyChrSelectGC__sub_80203220(u8 *arg0) {
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
