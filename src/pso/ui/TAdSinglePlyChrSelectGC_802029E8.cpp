#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdSinglePlyChrSelectGC__sub_80202A68(void);
int TAdSinglePlyChrSelectGC__sub_80202A74(void);
int TAdSinglePlyChrSelectGC__sub_80202B1C(void);
u8 TAdSinglePlyChrSelectGC__sub_80202B30(void* p);
int TAdSinglePlyChrSelectGC__sub_80202B38(void);
int TAdSinglePlyChrSelectGC__sub_80202B4C(void);
int TAdSinglePlyChrSelectGC__sub_8020310C(void);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
int TAdSinglePlyChrSelectGC__sub_80203190(void*);
void TAdSinglePlyChrSelectGC__sub_80203210(void* p);
int TAdSinglePlyChrSelectGC__sub_80203220(void);
u8 check_flag__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void clear_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
int fn_8020325C(void);
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

int TAdSinglePlyChrSelectGC__sub_80202A68(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_80202A74(void) { return 0; }

s32 free_chardata__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

int TAdSinglePlyChrSelectGC__sub_80202B1C(void) { return 0; }

u8 TAdSinglePlyChrSelectGC__sub_80202B30(void* p) { return *(u8*)((char*)p + 0x0); }

int TAdSinglePlyChrSelectGC__sub_80202B38(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_80202B4C(void) { return 0; }

    extern int lbl_805D5F74;
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
void set_chr_select_state__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5FA4 = a0; }

void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1) { copy_item_data__6TLobbyFPvPv(p); *(short*)((char*)p + 0x14) = *(short*)((char*)a1 + 0x14); *(short*)((char*)p + 0x16) = *(short*)((char*)a1 + 0x16); return p; }

int TAdSinglePlyChrSelectGC__sub_8020310C(void) { return 0; }

void* TAdSinglePlyChrSelectGC__sub_80203158(void* p) { __ct__12TPlyCharDataFv(p); TAdSinglePlyChrSelectGC__sub_80203190((void*)((char*)p + 0x41c)); return p; }

int TAdSinglePlyChrSelectGC__sub_80203190(void*) { return 0; }

void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p) { init_guild_card_tag__17TWindowSubComCardFi(p); return p; }
void TAdSinglePlyChrSelectGC__sub_80203210(void* p) { *(u32*)((char*)p + 0x4) &= 0xfffffff7; }

int TAdSinglePlyChrSelectGC__sub_80203220(void) { return 0; }
int fn_8020325C(void) { return 0; }

}
