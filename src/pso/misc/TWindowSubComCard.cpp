#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag_and_release__17TWindowSubComCardFPv(void *arg0);
s32 fn_802183B4(void* p);
void set_selected_entry__12TQuestListVMFPvPv(void* p, void* a1);
void poll_download__12TQuestListVMFv(void);
int set_field_20__12TQuestListVMFPvi(void*, void*);
u32 get_serial_access__22TQuestVmDownLoadServerFPv();
s32 poll_serial_access__22TQuestVmDownLoadServerFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);

s32 fn_802183B4(void* p) { return *(s32*)((char*)p + 0x68); }
void clear_flag_and_release__17TWindowSubComCardFPv(void *arg0) {
    u32 temp;
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    temp = (u32) M2C_FIELD(arg0, u32 *, 0x88);
    if (temp != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(temp, 1);
    }
}
void set_selected_entry__12TQuestListVMFPvPv(void* p, void* a1) { set_field_20__12TQuestListVMFPvi(p, (void*)20); *(void**)((char*)p + 0x23b4) = a1; }
void poll_download__12TQuestListVMFv(void) {
    if (get_serial_access__22TQuestVmDownLoadServerFPv() == 0U) {
        poll_serial_access__22TQuestVmDownLoadServerFPv();
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8007341C
#include "types.h"

extern "C" {

void set_loss_flag__6TLobbyFPv(void* p);
int is_visible__17TWindowSubComCardFPv(void* p);

int is_visible__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80073DB8
#include "types.h"

extern "C" {

int get_status_flag__17TWindowSubComCardFPv(void* p);
void set_field_20__12TQuestListVMFPvi(void* p, s32 v);

int get_status_flag__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077870
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_com_count__17TWindowSubComCardFv(void);

extern s32 lbl_805D4E5C;

s32 get_com_count__17TWindowSubComCardFv(void) {
    return lbl_805D4E5C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80077878
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release__17TWindowSubComCardFv(void);
void __dl__FPv(void*);

extern u32 lbl_805D4E5C;

void release__17TWindowSubComCardFv(void) {
    if ((u32) lbl_805D4E5C != 0U) {
        __dl__FPv((void*)lbl_805D4E5C);
        lbl_805D4E5C = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800778AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_chr_select__17TWindowSubComCardFv(void);

extern s32 lbl_805D4E58;

s32 get_chr_select__17TWindowSubComCardFv(void) {
    return lbl_805D4E58;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007A810
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_card_text__17TWindowSubComCardFii(s32 arg0, s32 arg1);
u8 *TWindowSubComCard__sub_8007A8F8();
M2C_UNK strncpy(void *, s32, M2C_UNK);

void set_card_text__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    u8 *temp_r3;

    if (arg1 != 0) {
        temp_r3 = TWindowSubComCard__sub_8007A8F8();
        if (temp_r3 != NULL) {
            strncpy(temp_r3 + 0x94, arg1, 0x6B);
            M2C_FIELD(temp_r3, s8 *, 0xFF) = 0;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007A894
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 find_card_by_id__17TWindowSubComCardFUi(u32 arg0);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
u32 get_card_id__17TWindowSubComCardFPv(s32);

s32 find_card_by_id__17TWindowSubComCardFUi(u32 arg0) {
    s32 i;
    s32 acc;

    acc = TWindowSubComCard__sub_8007A8F8(0);
    for (i = 0; i < 0xD2; i++) {
        if (arg0 == get_card_id__17TWindowSubComCardFPv(acc)) {
            return acc;
        }
        acc += 0x100;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007A94C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void swap_cards__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK reinit__17TWindowSubComCardFi(M2C_UNK *);
M2C_UNK *TWindowSubComCard__sub_8007A8F8(s32);
M2C_UNK TWindowSubComCard__sub_8007A9C0(M2C_UNK *, M2C_UNK *);

void swap_cards__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    M2C_UNK sp8[64];
    M2C_UNK *first_ptr;
    M2C_UNK *second_ptr;

    reinit__17TWindowSubComCardFi(sp8);
    first_ptr = TWindowSubComCard__sub_8007A8F8(arg0);
    second_ptr = TWindowSubComCard__sub_8007A8F8(arg1);
    TWindowSubComCard__sub_8007A9C0(sp8, first_ptr);
    TWindowSubComCard__sub_8007A9C0(first_ptr, second_ptr);
    TWindowSubComCard__sub_8007A9C0(second_ptr, sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007AA40
#include "types.h"

extern "C" {

s32 forward_return_arg__17TWindowSubComCardFi(s32 arg0);
int TWindowSubComCard__sub_8007AA70();

s32 forward_return_arg__17TWindowSubComCardFi(s32 arg0) {
    TWindowSubComCard__sub_8007AA70();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007AAF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 reinit__17TWindowSubComCardFi(s32 arg0);
M2C_UNK init__17TWindowSubComCardFi();

s32 reinit__17TWindowSubComCardFi(s32 arg0) {
    init__17TWindowSubComCardFi();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007AB24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init__17TWindowSubComCardFi(s32 arg0);
M2C_UNK init_guild_card_tag__17TWindowSubComCardFi();

s32 init__17TWindowSubComCardFi(s32 arg0) {
    init_guild_card_tag__17TWindowSubComCardFi();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007AB54
#include "types.h"

extern "C" {

s32 init_guild_card_tag__17TWindowSubComCardFi(s32 arg0);
int __ct__16TPlyGuildCardTagFv();

s32 init_guild_card_tag__17TWindowSubComCardFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007ABE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_com_card__17TWindowSubComCardFv(void);
M2C_UNK TWindowSubComCard__sub_8007A8F8(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8007AB84(M2C_UNK, M2C_UNK);

void init_com_card__17TWindowSubComCardFv(void) {
    TWindowSubComCard__sub_8007AB84(TWindowSubComCard__sub_8007A8F8(0), 0xD2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007AD5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 send_guild_card__17TWindowSubComCardFi(s32 arg0);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
s32 TWindowSubComCard__sub_8007AC7C(s32, s32, M2C_UNK);
s32 TWindowSubComCard__sub_8007B070();

s32 send_guild_card__17TWindowSubComCardFi(s32 arg0) {
    s32 temp;
    if (TWindowSubComCard__sub_8007B070() != 0) {
        return 0;
    }
    temp = TWindowSubComCard__sub_8007A8F8(0);
    return TWindowSubComCard__sub_8007AC7C(arg0, temp, 0xD2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007AE38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_player_data_load__17TWindowSubComCardFi(s32 arg0);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8007ADB4(s32, s32, M2C_UNK);
s32 TWindowSubComCard__sub_8007B070();
M2C_UNK load_player_data__23TAdSinglePlyChrSelectGCFv();

void start_player_data_load__17TWindowSubComCardFi(s32 arg0) {
    u32 temp;
    if (TWindowSubComCard__sub_8007B070() == 0) {
        temp = (u32) TWindowSubComCard__sub_8007A8F8(0);
        TWindowSubComCard__sub_8007ADB4(arg0, (s32) temp, 0xD2);
        load_player_data__23TAdSinglePlyChrSelectGCFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B2A4
#include "types.h"

extern "C" {

int TLobby__sub_8007B458(void*, void*);
int clear(void* p);
int memset(void*, int, int);

void clear_and_init__17TWindowSubComCardFPvPv(void* p, void* a1) { clear(p); TLobby__sub_8007B458(p, a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B6D8
#include "types.h"

extern "C" {

int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__sub_801E44D8(void*, void*);
s32 get_card_id__17TWindowSubComCardFPv(void* p);
int is_active__17TWindowSubComCardFPv(void* p);
u8 TWindowSubComCard__sub_8007B6EC(void* p);
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p);
int bswap__16TPlyGuildCardTagFv(void*);

s32 get_card_id__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x4); }
int is_active__17TWindowSubComCardFPv(void* p) { return *(u8*)((char*)p + 0x8c) & 0x1; }
u8 TWindowSubComCard__sub_8007B6EC(void* p) { return *(u8*)((char*)p + 0x8f); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B708
#include "types.h"

extern "C" {

int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__sub_801E44D8(void*, void*);
s32 get_card_id__17TWindowSubComCardFPv(void* p);
int is_active__17TWindowSubComCardFPv(void* p);
u8 TWindowSubComCard__sub_8007B6EC(void* p);
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p);
int bswap__16TPlyGuildCardTagFv(void*);

void bswap_guild_card__17TWindowSubComCardFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_guild_card_tag__17TWindowSubComCardFPv((char*)p + 0x4); }
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p) { return bswap__16TPlyGuildCardTagFv(p); }
void init_card__17TWindowSubComCardFPvPv(void* p, void* a1) { bswap_guild_card__17TWindowSubComCardFPv(p); TLobby__sub_801E44D8(p, a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B798
#include "types.h"

extern "C" {

int get_keyboard_mode__17TWindowSubComCardFv(void);

    extern int lbl_805D4E80;
int get_keyboard_mode__17TWindowSubComCardFv(void) {  return lbl_805D4E80; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B7A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_guild_card__17TWindowSubComCardFPv(void *arg0);
void init_guild_card_tag__17TWindowSubComCardFi(void *);

void *init_guild_card__17TWindowSubComCardFPv(void *arg0) {
    init_guild_card_tag__17TWindowSubComCardFi((void *)((char *)arg0 + 4));
    M2C_FIELD(arg0, u8 *, 0x0) = 6;
    M2C_FIELD(arg0, u8 *, 0x1) = 37;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BD24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_card__17TWindowSubComCardFv(void);
void remove_entry__17TWindowSubComCardFi(s32 arg0);
M2C_UNK TWindowSubComCard__sub_8007B010(M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8007BC04(M2C_UNK);
M2C_UNK remove_entry__17TWindowGetComCardFiii(s32, s32, M2C_UNK);

void init_card__17TWindowSubComCardFv(void) {
    TWindowSubComCard__sub_8007B010(TWindowSubComCard__sub_8007BC04((M2C_UNK)(0)), 0x1C);
}

void remove_entry__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = TWindowSubComCard__sub_8007BC04((M2C_UNK)(0));
    remove_entry__17TWindowGetComCardFiii(arg0, tmp, 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BD94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void scroll_list__17TWindowSubComCardFi(s32 arg0);
M2C_UNK TWindowSubComCard__sub_8007B0D0(s32, s32, M2C_UNK);
s32 TWindowSubComCard__sub_8007BC04(M2C_UNK);

void scroll_list__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = TWindowSubComCard__sub_8007BC04(0);
    TWindowSubComCard__sub_8007B0D0(arg0, tmp, 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BDD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_press_a__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK clear();
s32 fn_8007B2E0(s32, s32);
s32 scroll_list__17TWindowSubComCardFi(s32);
M2C_UNK select_card_entry__17TWindowSubComCardFi(s32);

void handle_press_a__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    clear();
    if ((fn_8007B2E0(arg0, arg1) != 0) && (scroll_list__17TWindowSubComCardFi(arg0) == 0)) {
        select_card_entry__17TWindowSubComCardFi(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BE34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_and_press_a__17TWindowSubComCardFi(s32 arg0);
M2C_UNK handle_press_a__17TWindowSubComCardFii(M2C_UNK *, s32);
M2C_UNK init_guild_card_tag__17TWindowSubComCardFi(M2C_UNK *);

void init_and_press_a__17TWindowSubComCardFi(s32 arg0) {
    u8 sp8[0x84];

    init_guild_card_tag__17TWindowSubComCardFi((M2C_UNK *) sp8);
    handle_press_a__17TWindowSubComCardFii((M2C_UNK *) sp8, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BE70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_press_b__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK clear();
s32 fn_8007B370(s32, s32);
s32 scroll_list__17TWindowSubComCardFi(s32);
M2C_UNK select_card_entry__17TWindowSubComCardFi(s32);

void handle_press_b__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    clear();
    if ((fn_8007B370(arg0, arg1) != 0) && (scroll_list__17TWindowSubComCardFi(arg0) == 0)) {
        select_card_entry__17TWindowSubComCardFi(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BECC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_and_press_b__17TWindowSubComCardFi(s32 arg0);
M2C_UNK handle_press_b__17TWindowSubComCardFii(M2C_UNK *, s32);
M2C_UNK init_guild_card_tag__17TWindowSubComCardFi(M2C_UNK *);

void init_and_press_b__17TWindowSubComCardFi(s32 arg0) {
    u8 sp8[0x84];

    init_guild_card_tag__17TWindowSubComCardFi((M2C_UNK *) sp8);
    handle_press_b__17TWindowSubComCardFii((M2C_UNK *) sp8, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BF08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_press__17TWindowSubComCardFv(void);
s32 TWindowSubComCard__sub_8007A8F8();
s32 scroll_list__17TWindowSubComCardFi();
M2C_UNK select_card_entry__17TWindowSubComCardFi(s32);

void update_press__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8007A8F8();
    if (scroll_list__17TWindowSubComCardFi() == 0) {
        select_card_entry__17TWindowSubComCardFi(temp_r31);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BF48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_card_entry__17TWindowSubComCardFi(s32 arg0);
M2C_UNK TWindowSubComCard__sub_8007B1AC(s32, s32, M2C_UNK);
s32 TWindowSubComCard__sub_8007BC04(M2C_UNK);

void select_card_entry__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = TWindowSubComCard__sub_8007BC04(0);
    TWindowSubComCard__sub_8007B1AC(arg0, tmp, 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131BC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 realloc_buffer__17TWindowSubComCardFPv(void *arg0);
int is_active__16TKeyBoardControlFPv(void*);
int is_key_active__16TKeyBoardControlFPv(void*);
int get_field_6c__19TWindowKeyBoardSoftFPv(void*);
int get_keyboard_field_6c__15TWindowMakeTeamFPv(void* p);
s32 alloc_buffer__11TOBoss4RockFPv();
s32 TWindowKeyBoardSoft__sub_8025C974(s32, s32);
s32 TWindowKeyBoardSoft__sub_8025CA70(s32);
int is_keyboard_active__17TWindowSubComCardFPv(void* p);
int update_keyboard__17TWindowSubComCardFPv(void* p);

s32 realloc_buffer__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r3;

    TWindowKeyBoardSoft__sub_8025CA70(M2C_FIELD(arg0, s32 *, 0x20));
    temp_r3 = alloc_buffer__11TOBoss4RockFPv();
    TWindowKeyBoardSoft__sub_8025C974(M2C_FIELD(arg0, s32 *, 0x20), temp_r3);
    return temp_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131C10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 alloc_buffer__11TOBoss4RockFPv();
s32 TWindowKeyBoardSoft__sub_8025C974(s32, s32);
s32 TWindowKeyBoardSoft__sub_8025CA70(s32);
int get_keyboard_field_6c__15TWindowMakeTeamFPv(void* p);
int is_keyboard_active__17TWindowSubComCardFPv(void* p);
int update_keyboard__17TWindowSubComCardFPv(void* p);
int is_active__16TKeyBoardControlFPv(void*);
int is_key_active__16TKeyBoardControlFPv(void*);
int get_field_6c__19TWindowKeyBoardSoftFPv(void*);

int is_keyboard_active__17TWindowSubComCardFPv(void* p) { return is_active__16TKeyBoardControlFPv(*(void**)((char*)p + 0x20)); }
int update_keyboard__17TWindowSubComCardFPv(void* p) { return is_key_active__16TKeyBoardControlFPv(*(void**)((char*)p + 0x20)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F4F60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 process_keyboard_input__17TWindowSubComCardFPv(void *arg0);
s32 TLobby__sub_8039DAFC(s32, M2C_UNK *);
M2C_UNK fn_801F4F20(s32);
M2C_UNK free_menu_object(u32);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 realloc_buffer__17TWindowSubComCardFPv(u32);
s32 submit_card_password__17TWindowSubComCardFi(s32);
s32 update_keyboard__17TWindowSubComCardFPv(u32);

extern M2C_UNK lbl_805DC4FC;

s32 process_keyboard_input__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r31;
    u32 temp_field;

    temp_field = M2C_FIELD(arg0, u32 *, 0x1C);
    if ((temp_field != 0U) && (update_keyboard__17TWindowSubComCardFPv(temp_field) != 0)) {
        temp_r31 = realloc_buffer__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x1C));
        if (TLobby__sub_8039DAFC(temp_r31, &lbl_805DC4FC) == 0) {
            free__11TOBoss4RockFUi(temp_r31);
            free_menu_object(M2C_FIELD(arg0, u32 *, 0x1C));
            return 0;
        }
        if (submit_card_password__17TWindowSubComCardFi(temp_r31) != 0) {
            free_menu_object(M2C_FIELD(arg0, u32 *, 0x1C));
            free__11TOBoss4RockFUi(temp_r31);
            return 0;
        }
        fn_801F4F20(temp_r31);
        free__11TOBoss4RockFUi(temp_r31);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80202990
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_card_window__17TWindowSubComCardFUi(u32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FE7D4(u32);

s32 is_split_screen();
extern s32 lbl_805D5F64;

s32 get_card_window__17TWindowSubComCardFUi(u32 arg0) {
    if (is_split_screen() != 0) {
        if (arg0 == 0xFFFF) {
            return TAdSinglePlyChrSelectGC__sub_801FE7D4(0U);
        }
        return TAdSinglePlyChrSelectGC__sub_801FE7D4(arg0);
    }
    return lbl_805D5F64;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80225E0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void submit_card_password__17TWindowSubComCardFi(s32 arg0);
M2C_UNK TQuestVmDownLoadServer__sub_8039DABC(void *, void *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80225E80(void *, void *);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
M2C_UNK strncpy(void *, s32, M2C_UNK);

void submit_card_password__17TWindowSubComCardFi(s32 arg0) {
    char sp1C[0x11];
    char sp8[0x11];

    memset(sp1C, 0, 0x11);
    memset(sp8, 0, 0x11);
    strncpy(sp1C, arg0, 0x10);
    TWindowSubComCard__sub_80225E80(sp1C, sp8);
    TQuestVmDownLoadServer__sub_8039DABC(sp1C, sp8, 0x10);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80244774
#include "types.h"

extern "C" {

int TWindowSubComCard__sub_80244774(void);

    extern int lbl_805D3614;
int TWindowSubComCard__sub_80244774(void) {  return lbl_805D3614; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024477C
#include "types.h"

extern "C" {

s32 get_field_20__17TWindowSubComCardFPv(void* p);

s32 get_field_20__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x20); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802447C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_offset__17TWindowSubComCardFPv(void *arg0);

extern M2C_UNK lbl_8044E678;
extern f32 lbl_805DCAC8;
extern f32 lbl_805DCACC;

f32 calc_offset__17TWindowSubComCardFPv(void *arg0) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s16 *, 0x22);
    if (temp_r3 != 0) {
        return lbl_805DCAC8 - ((f32) temp_r3 / lbl_805DCACC);
    }
    return lbl_805DCAC8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802448C0
#include "types.h"

extern "C" {

void save_position__17TWindowSubComCardFPv(void* p);
s32 TWindowCtrlMain__sub_8024CE24();
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TWindowSubAreaMapDisp__sub_80246948();
s32 set_parent__7TObjectFP7TObject(s32, s32);

void save_position__17TWindowSubComCardFPv(void* p) { *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x30); *(f32*)((char*)p + 0x44) = *(f32*)((char*)p + 0x34); *(f32*)((char*)p + 0x48) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x4c) = *(f32*)((char*)p + 0x3c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80246258
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_fade__17TWindowSubComCardFPv(void *arg0);
M2C_UNK save_position__17TWindowSubComCardFPv();

extern M2C_UNK lbl_8044E680;

void update_fade__17TWindowSubComCardFPv(void *arg0) {
    u32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u32 *, 0x50);
    if (temp_r5 == 0) {
        save_position__17TWindowSubComCardFPv();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x40) += (M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x40)) / (f32) temp_r5;
    M2C_FIELD(arg0, f32 *, 0x44) += (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x44)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x48) += (M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x48)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x4C) += (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x4C)) / (f32) M2C_FIELD(arg0, u32 *, 0x50);
    M2C_FIELD(arg0, u32 *, 0x50) = (u32) (M2C_FIELD(arg0, u32 *, 0x50) - 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249120
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void begin_scroll__17TWindowSubComCardFPvf(void *arg0, f32 farg0);

void begin_scroll__17TWindowSubComCardFPvf(void *arg0, f32 farg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x80);
    if (temp_r4 & 1) {
        M2C_FIELD(arg0, u16 *, 0x80) = (u16) (temp_r4 & 0xFFFE);
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249220
#include "types.h"

extern "C" {

int TWindowSubComCard__sub_80249220(void* p);
int fn_80268C5C(void*);

int TWindowSubComCard__sub_80249220(void* p) { return fn_80268C5C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802495FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_field_74__17TWindowSubComCardFPv(void* p);
int is_selected__20TWindowChoiceSettingFPv(void* p);
void *TWindowCtrlMain__sub_8024CDD0(s32);
s32 TWindowFukidasi__sub_80244DFC(s32, s32, s32, s32);
int is_open__17TWindowSubComCardFPv(void* p);

s16 get_field_74__17TWindowSubComCardFPv(void* p) { return *(s16*)((char*)p + 0x74); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249604
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowFukidasi__sub_80244DFC(s32, s32, s32, s32);
void *TWindowCtrlMain__sub_8024CDD0(s32);
s16 get_field_74__17TWindowSubComCardFPv(void* p);
int is_open__17TWindowSubComCardFPv(void* p);
int is_selected__20TWindowChoiceSettingFPv(void* p);

int is_open__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B7F0
#include "types.h"

extern "C" {

void* init_fields__17TWindowSubComCardFPvii(void* a0, int a1, int a2);
void reset_entry__20TWindowSubStatusDispFPv(void*, int);

    extern unsigned char lbl_804CFA58[];
    extern const float lbl_805DD02C;
void* init_fields__17TWindowSubComCardFPvii(void* a0, int a1, int a2) { reset_entry__20TWindowSubStatusDispFPv(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CFA58; *(float*)((char*)a0 + 0x14) = lbl_805DD02C; *(int*)((char*)a0 + 0x24) = -1; *(int*)((char*)a0 + 0x1c) = 0; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x18) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B850
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 select_next__19TWindowKeyBoardSoftFPv();
s32 update__19TWindowKeyBoardSoftFPv();
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
int is_flag_4_set__17TWindowSubComCardFPv(void* p);
s32 get_state__19TWindowKeyBoardSoftFPv(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);

int is_flag_4_set__17TWindowSubComCardFPv(void* p) { return *(u16*)((char*)p + 0x0) & 0x4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026572C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_selected_entry__17TWindowSubComCardFPv(void *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi();

s32 get_selected_entry__17TWindowSubComCardFPv(void *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x78);
    if (temp_r4 < 0) {
        return 0;
    }
    if (temp_r4 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        return 0;
    }
    return get_array_entry__20TWindowSubStatusDispFPvi();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80265C10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_selected_index__17TWindowSubComCardFPvs(void *arg0, s16 arg1);

void set_selected_index__17TWindowSubComCardFPvs(void *arg0, s16 arg1) {
    if ((arg1 >= 0) && (arg1 < (s16) M2C_FIELD(arg0, s16 *, 0x76))) {
        M2C_FIELD(arg0, s16 *, 0x78) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80265DEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_scroll_target__17TWindowSubComCardFPvff(void *arg0, f32 farg0, f32 farg1);
M2C_UNK save_position__17TWindowSubComCardFPv(void *);
M2C_UNK TWindowSubComCard__sub_80265484(void *);
M2C_UNK TWindowSubComCard__sub_8026556C(void *);
M2C_UNK TWindowSubComCard__sub_80265E60();

extern const f32 lbl_805DD154;

void set_scroll_target__17TWindowSubComCardFPvff(void *arg0, f32 farg0, f32 farg1) {
    TWindowSubComCard__sub_80265E60();
    if (M2C_FIELD(arg0, f32 *, 0x3C) > farg1) {
        TWindowSubComCard__sub_8026556C(arg0);
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (farg1 - lbl_805DD154);
    save_position__17TWindowSubComCardFPv(arg0);
    TWindowSubComCard__sub_80265484(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266130
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_transition_flag__17TWindowSubComCardFPv(void *arg0);

extern const f32 lbl_805DD154;

void clear_transition_flag__17TWindowSubComCardFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (temp_r4 & 0x20) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 & 0xFFFFFFDF);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DD154 + M2C_FIELD(arg0, f32 *, 0x7C));
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802661D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_text_gray__17TWindowSubComCardFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TWindowSubTradeMain__sub_80266200(s32, s32, s32, s32, s32);

void draw_text_gray__17TWindowSubComCardFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    TWindowSubTradeMain__sub_80266200(arg0, arg1, arg2 | 0x10, arg3, 0xFF909090);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026659C
#include "types.h"

extern "C" {
int fn_8026652C(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);

int init_shop_judgment_window(void* p);
int TShopJudgmentItemWindow__sub_80266388(void*, int, int, int);

void draw_card_icon__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    fn_8026652C((void*)(arg0), (void*)(arg1), (void*)(arg2), (void*)(4));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266620
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_selected_entry__17TWindowSubComCardFPvi(void *arg0, s32 arg1);
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK TWindowSubComCard__sub_8024503C(s32, u16 *, s32);
u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void render_selected_entry__17TWindowSubComCardFPvi(void *arg0, s32 arg1) {
    u16 *temp_r3;

    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x78));
    if (*temp_r3 & 1) {
        TWindowSubComCard__sub_8024503C(arg1, temp_r3, is_visible__17TWindowSubComCardFPv(arg0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266BC4
#include "types.h"

extern "C" {

void reset_selection__17TWindowSubComCardFPv(void* p);
int TWindowMenu__sub_80266BB8(void* p);

void reset_selection__17TWindowSubComCardFPv(void* p) { *(s16*)((char*)p + 0x7a) = -1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80268494
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 TWindowSubComCard__sub_8026906C(void);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 is_open__17TWindowSubComCardFPv();
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
M2C_UNK get_entry_id__17TWindowSubComCardFPv();
void clear_flag__19TWindowSubTradeMainFPv(void* p);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
int is_flag80_set__20TWindowSubStatusDispFPv(void* p);

void update_selected_entry__17TWindowSubComCardFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    get_entry_id__17TWindowSubComCardFPv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802686D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 TWindowSubComCard__sub_8026906C(void);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 is_open__17TWindowSubComCardFPv();
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
M2C_UNK get_entry_id__17TWindowSubComCardFPv();
void clear_flag__19TWindowSubTradeMainFPv(void* p);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
int is_flag80_set__20TWindowSubStatusDispFPv(void* p);

void update_next_entry__17TWindowSubComCardFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x72);
    if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        set_text__20TWindowSubStatusDispFPvUiii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2, arg3);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80269064
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244C0C(s32, s32);
s32 TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);
void *get_quest_id__12TQuestListVMFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
s32 get_entry_id__17TWindowSubComCardFPv(void* p);
int TWindowSubComCard__sub_8026906C(void* p);

s32 get_entry_id__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x18); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026906C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244C0C(s32, s32);
s32 TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);
void *get_quest_id__12TQuestListVMFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
s32 get_entry_id__17TWindowSubComCardFPv(void* p);
int TWindowSubComCard__sub_8026906C(void* p);

int TWindowSubComCard__sub_8026906C(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80271E7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_close_flag__17TWindowSubComCardFPv(void *arg0);
M2C_UNK send_status_packet__6TLobbyFv();

void handle_close_flag__17TWindowSubComCardFPv(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D) & 2) {
        send_status_packet__6TLobbyFv();
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) & 0xFFFFFFFD);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80271EC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_state_if_dirty__17TWindowSubComCardFPv(u8 *arg0);
M2C_UNK send_card_window_state__6TLobbyFv();

void send_state_if_dirty__17TWindowSubComCardFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D) & 1) {
        send_card_window_state__6TLobbyFv();
        M2C_FIELD(arg0, s8 *, 0x1D) = (s8) (M2C_FIELD(arg0, s8 *, 0x1D) & ~1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027208C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_card_list__17TWindowSubComCardFiiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 create__14TWindowComCardFPvPv(s32 a0 = 0, s32 a1 = 0);
s32 TWindowComCard__sub_80249980(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TWindowSubComCard__sub_8007BC04(s32 a0 = 0);
s32 TWindowSubComCard__sub_8007A860(s32);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
int get_message_10__20TWindowSubStatusDispFPv(void*);
int TWindowSubComCard__sub_8007A8F8(void);
int get_card_id__17TWindowSubComCardFPv(void);
int TLobby__sub_802421C4(void);
int TWindowSubComCard__sub_80265BF8(void*);
void send_cmd_133__17TWindowSubComCardFv(void);
s32 TWindowSubComCard__sub_8026CBB8(s32 a0 = 0);
int fn_802754EC(void);

void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1) { get_message_10__20TWindowSubStatusDispFPv((char*)a1 + 0xa6); }
void apply_selection__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8007BC04(0);
    TWindowComCard__sub_80249980(TWindowSubComCard__sub_8026CBB8(0x92), arg0, temp_r31);
}
void send_command__17TWindowSubComCardFi(s32 arg0) {
    create__14TWindowComCardFPvPv(TWindowSubComCard__sub_8026CBB8(0x86), arg0);
}
void init_layout__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8007BC04(0);
    create_card_list__17TWindowSubComCardFiiii(TWindowSubComCard__sub_8026CBB8(0x91), temp_r31, 0x1C, 1);
}
void send_cmd_133__17TWindowSubComCardFv(void) { TWindowSubComCard__sub_8026CBB8(133); fn_802754EC(); }
void cleanup__17TWindowSubComCardFPv(void* p) { TWindowSubComCard__sub_80265BF8(*(void**)((char*)p + 0x84)); TWindowSubComCard__sub_8007A8F8(); get_card_id__17TWindowSubComCardFPv(); TLobby__sub_802421C4(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80272240
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_card_list__17TWindowSubComCardFiiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 create__14TWindowComCardFPvPv(s32 a0 = 0, s32 a1 = 0);
s32 TWindowComCard__sub_80249980(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TWindowSubComCard__sub_8007BC04(s32 a0 = 0);
s32 TWindowSubComCard__sub_8007A860(s32);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
int get_message_10__20TWindowSubStatusDispFPv(void*);
int TWindowSubComCard__sub_8007A8F8(void);
int get_card_id__17TWindowSubComCardFPv(void);
int TLobby__sub_802421C4(void);
int TWindowSubComCard__sub_80265BF8(void*);
void send_cmd_133__17TWindowSubComCardFv(void);
s32 TWindowSubComCard__sub_8026CBB8(s32 a0 = 0);
int fn_802754EC(void);

void set_card_index__17TWindowSubComCardFPvi(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x6C), TWindowSubComCard__sub_8007A860(arg1), 0x82);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027239C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_selection__17TWindowSubComCardFUiUiPvi(u32 arg0, u32 arg1, s32 *arg2, s32 arg3);
s32 TWindowSubComCard__sub_80265BF8();
M2C_UNK TWindowComCard__sub_80249920(u32, s32, s32);

void update_selection__17TWindowSubComCardFUiUiPvi(u32 arg0, u32 arg1, s32 *arg2, s32 arg3) {
    s32 temp_r3;

    if ((arg0 != 0U) && (arg1 != 0U)) {
        temp_r3 = TWindowSubComCard__sub_80265BF8();
        if (temp_r3 != (s32) *arg2) {
            *arg2 = temp_r3;
            TWindowComCard__sub_80249920(arg1, temp_r3, arg3);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80272400
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_selection__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK update_selection__17TWindowSubComCardFUiUiPvi(s32, s32, s32, s32);
s32 TWindowSubComCard__sub_8007BC04(M2C_UNK);

void update_selection__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 tmp = TWindowSubComCard__sub_8007BC04(0);
    update_selection__17TWindowSubComCardFUiUiPvi(arg0, arg1, arg2, tmp);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80272450
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_display_value__17TWindowSubComCardFUiUiPv(u32 arg0, u32 arg1, s32 *arg2);
s32 TWindowSubComCard__sub_80265BF8(u32);
s32 TWindowSubComCard__sub_8007A8F8(M2C_UNK);
M2C_UNK set_display_value__14TWindowComCardFiii(u32, s32, s32);

void update_display_value__17TWindowSubComCardFUiUiPv(u32 arg0, u32 arg1, s32 *arg2) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = TWindowSubComCard__sub_8007A8F8(0);
    if ((arg0 != 0U) && (arg1 != 0U)) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(arg0);
        if (temp_r3 != (s32) *arg2) {
            *arg2 = temp_r3;
            set_display_value__14TWindowComCardFiii(arg1, temp_r3, temp_r31);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802724C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_keyboard__17TWindowSubComCardFii(s32 arg0, s32 arg1);
s32 create_keyboard__17TWindowSubComCardFi(s32 arg0);
s32 create__17TWindowSubComCardFv(void);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 TWindowSubComCard__sub_8007A860(s32);
s32 get_keyboard_mode__17TWindowSubComCardFv();
M2C_UNK set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
M2C_UNK get_keyboard_field_6c__15TWindowMakeTeamFPv(s32, s32);
M2C_UNK set_field_1c__6TLobbyFPvf(f32);
s32 get_kbd_ptr__14TWindowComCardFPv(s32);
s32 set_window_mode_4__6TLobbyFPvii(M2C_UNK, M2C_UNK *, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);

extern s32 lbl_805D53A0;

s32 create_keyboard__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, arg0, 0xC6, 3, 4, lbl_805D53A0);
    }
    get_keyboard_field_6c__15TWindowMakeTeamFPv(var_r31, TWindowSubComCard__sub_8007A860(arg1));
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

extern s32 lbl_805D53A0;

s32 create_keyboard__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = get_keyboard_mode__17TWindowSubComCardFv();
    temp_r31 = __nw__7TObjectFUl(0x2C);
    if (temp_r31 != 0) {
        temp_r31 = TKeyBoardControl__ct(temp_r31, arg0, 0xC6, 3, 4, lbl_805D53A0);
    }
    get_keyboard_field_6c__15TWindowMakeTeamFPv(temp_r31, get_kbd_ptr__14TWindowComCardFPv(var_r30));
    set_sub_position__15TWindowMakeTeamFPvPv(temp_r31, TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0xBB)));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(temp_r31);
    destroy_keyboard__17TWindowSubComCardFPv(temp_r31);
    return temp_r31;
}

extern M2C_UNK lbl_8044F6CC[];
extern f32 lbl_805DD4FC;

s32 create__17TWindowSubComCardFv(void) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = TWindowSubComCard__sub_8026CBB8((M2C_UNK)(0x98));
    temp_r31 = set_window_mode_4__6TLobbyFPvii(temp_r3, lbl_8044F6CC, 1);
    set_field_1c__6TLobbyFPvf(lbl_805DD4FC);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80273054
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_yesno_dialog__17TWindowSubComCardFPv(void *arg0);
s32 TWindowMessageYesNo__sub_802A59D8(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);
M2C_UNK TWindowSubShortMail__sub_802A58AC(s32, s32, s32, s32, f32);

extern const f32 TWindowSubComCard__data_805DD520;

s32 open_yesno_dialog__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    TWindowSubShortMail__sub_802A58AC(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x100), TWindowSubComCard__sub_8026CBB8(0x97), TWindowSubComCard__data_805DD520);
    free_member__17TWindowSubComCardFPv(temp_r29, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027315C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0);
s32 TWindowMessageYesNo__sub_802A59D8(void *, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubShortMail__sub_802A58AC(s32, s32, s32, s32, f32);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);

extern const f32 lbl_805DD524;

s32 confirm_and_free__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    TWindowSubShortMail__sub_802A58AC(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x39), TWindowSubComCard__sub_8026CBB8(0x88), lbl_805DD524);
    free_member__17TWindowSubComCardFPv(temp_r29, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802731E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_menu__17TWindowSubComCardFv(void);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

s32 get_main_phase();
extern const f32 lbl_805DD510;

s32 open_menu__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(TWindowSubComCard__sub_8026CBB8(0x87), 5, get_message_10__20TWindowSubStatusDispFPv(0x1D));
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x59), 6, 0xF);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x59), 6, 0xF);
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x101), 6, 0x11);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x102), 6, 0x13);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x63), 6, 0x1B);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x5A), 6, 0x15);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD510);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802735E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_menu__17TWindowSubComCardFv(void);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
s32 draw_card_icon__17TWindowSubComCardFiii(s32, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

s32 get_main_phase();
extern const f32 lbl_805DD530;

s32 create_menu__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(TWindowSubComCard__sub_8026CBB8(0x7F), 6, get_message_10__20TWindowSubStatusDispFPv(0x1D));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x52), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x53), 6, 0xB);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x54), 6, 0x1D);
    if (get_main_phase() == 0xF) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, TQuestVmDownLoadServer__sub_8006EF6C(0x49), 6, 0x27);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x6D), 6, 0x33);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xF8), 6, 0x39);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, TQuestVmDownLoadServer__sub_8006EF6C(0x49), 6, 0x27);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x6D), 6, 0x33);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xF8), 6, 0x39);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD530);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80273758
#include "types.h"

extern "C" {

void render__17TWindowSubComCardFv(void);

void render__17TWindowSubComCardFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80274FF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TWindowSubComCardFv(void *arg0, s16 arg1);
M2C_UNK TWindowSubComCard__sub_8024AB98(s32);
M2C_UNK send_state_if_dirty__17TWindowSubComCardFPv(void *);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK handle_close_flag__17TWindowSubComCardFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern void* __vt__17TWindowSubComCard[];

void *__dt__17TWindowSubComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__17TWindowSubComCard;
        handle_close_flag__17TWindowSubComCardFPv(arg0);
        send_state_if_dirty__17TWindowSubComCardFPv(arg0);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0x26) {
            TWindowSubComCard__sub_8024AB98(M2C_FIELD(arg0, s32 *, 0x20));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x84));
            M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x78));
            M2C_FIELD(arg0, u32 *, 0x78) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x74));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
            M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x60));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027515C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubComCard__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void TWindowSubComCard__sub_80077980(void *);

extern M2C_UNK __vt__17TWindowSubComCard[];
extern void *lbl_805D3A10;

void *TWindowSubComCard__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSubComCard;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A10;
    M2C_FIELD(arg0, void **, 0x5C) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x60) = 0;
    M2C_FIELD(arg0, u32 *, 0x64) = 0;
    M2C_FIELD(arg0, u32 *, 0x74) = 0;
    M2C_FIELD(arg0, u32 *, 0x78) = 0;
    M2C_FIELD(arg0, u32 *, 0x68) = 0;
    M2C_FIELD(arg0, u32 *, 0x6C) = 0;
    M2C_FIELD(arg0, u32 *, 0x70) = 0;
    M2C_FIELD(arg0, u32 *, 0x80) = 0;
    M2C_FIELD(arg0, u32 *, 0x84) = 0;
    M2C_FIELD(arg0, u32 *, 0x7C) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u8 *, 0x1D) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    TWindowSubComCard__sub_80077980((void *)((char *)arg0 + 48));
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802751FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_com_param__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);

void set_com_param__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0x12, 0xFFFBFFFF);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80275234
#include "types.h"

extern "C" {

void* get_card_data_ptr__17TWindowSubComCardFPv(void* p);
void* TWindowSubComCard__sub_8027523C(void* p);
void* get_name__17TWindowSubComCardFPv(void* p);
void* get_sub_obj__17TWindowSubComCardFPv(void* p);
void destroy_keyboard__17TWindowSubComCardFPv(void* p);
s16 get_field_72__17TWindowSubComCardFPv(void* p);
void set_page__17TWindowSubComCardFPvs(void* p, s16 v);
void set_flag_10__17TWindowSubComCardFPv(void* p);
int fn_80247ED8(void*);

void* get_card_data_ptr__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x3b; }
void* TWindowSubComCard__sub_8027523C(void* p) { return (char*)p + 0x2a; }
void* get_name__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x19; }
void* get_sub_obj__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x8; }
void destroy_keyboard__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80247ED8(m); }
s16 get_field_72__17TWindowSubComCardFPv(void* p) { return *(s16*)((char*)p + 0x72); }
void set_page__17TWindowSubComCardFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x7a) = v; }
void set_flag_10__17TWindowSubComCardFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802752A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_display_page__17TWindowSubComCardFi(s32 arg0);
s16 TWindowSubComCard__sub_80265BF8();
void* get_card_data_ptr__17TWindowSubComCardFPv(void* p);
void* TWindowSubComCard__sub_8027523C(void* p);
void* get_name__17TWindowSubComCardFPv(void* p);
void* get_sub_obj__17TWindowSubComCardFPv(void* p);
s16 get_field_72__17TWindowSubComCardFPv(void* p);
void set_page__17TWindowSubComCardFPvs(void* p, s16 v);
void set_flag_10__17TWindowSubComCardFPv(void* p);
void destroy_keyboard__17TWindowSubComCardFPv(void* p);
int fn_80247ED8(void*);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void set_display_page__17TWindowSubComCardFi(s32 arg0) {
    set_page__17TWindowSubComCardFPvs((void *) (arg0), (int) (TWindowSubComCard__sub_80265BF8()));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80275484
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_card_list__17TWindowSubComCardFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TWindowSubComCardList__sub_802757AC(s32, s32, s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80266378(M2C_UNK);

s32 create_card_list__17TWindowSubComCardFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r3;

    fn_80266378(7);
    var_r3 = __nw__7TObjectFUl(0xA0);
    if (var_r3 != 0) {
        var_r3 = TWindowSubComCardList__sub_802757AC(var_r3, arg0, arg1, arg2, arg3);
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A55E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 TWindowSubComCard__sub_80265CFC(s32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 TCheckRoomSequence__sub_802664A8(s32, s32, s32);
int TWindowMenu__sub_802657E4(void*);
int TWindowSubComCard__sub_802A57FC(void* a0 = 0);
void run_task__19TWindowMessageYesNoFv(void* p);
int TWindowSubShortMail__sub_802A58AC(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(void* p, void* a1, void* a2);
void update_card_slot__17TWindowSubComCardFPv(void* p);
void notify_trade_main__17TWindowSubComCardFPv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFPv(void* p);
int close__17TWindowSubComCardFPv(void* p);
void free_member__17TWindowSubComCardFPv(void* p);
int set_flag_40__16TAdChrSelASlotGCFPv(void*);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int set_selected_index__17TWindowSubComCardFPvs(void*);
int clear_trade_flag__19TWindowSubTradeMainFPv(void*);
int queue_destruction__7TObjectFv(void*);

void free_windows__17TWindowSubComCardFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        TWindowSubComCard__sub_80244888(M2C_FIELD(arg0, void **, 0x28));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindowSubComCard__sub_80244888(M2C_FIELD(arg0, void **, 0x2C));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A56C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 TWindowSubComCard__sub_80265CFC(s32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 TCheckRoomSequence__sub_802664A8(s32, s32, s32);
int TWindowMenu__sub_802657E4(void*);
int TWindowSubComCard__sub_802A57FC(void* a0 = 0);
void run_task__19TWindowMessageYesNoFv(void* p);
int TWindowSubShortMail__sub_802A58AC(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(void* p, void* a1, void* a2);
void update_card_slot__17TWindowSubComCardFPv(void* p);
void notify_trade_main__17TWindowSubComCardFPv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFPv(void* p);
int close__17TWindowSubComCardFPv(void* p);
void free_member__17TWindowSubComCardFPv(void* p);
int set_flag_40__16TAdChrSelASlotGCFPv(void*);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int set_selected_index__17TWindowSubComCardFPvs(void*);
int clear_trade_flag__19TWindowSubTradeMainFPv(void*);
int queue_destruction__7TObjectFv(void*);

void update_card_slot__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) set_flag_40__16TAdChrSelASlotGCFPv(m); }
void notify_trade_main__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) clear_trade_flag__19TWindowSubTradeMainFPv(m); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A5748
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 TWindowSubComCard__sub_80265CFC(s32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 TCheckRoomSequence__sub_802664A8(s32, s32, s32);
int TWindowMenu__sub_802657E4(void*);
int TWindowSubComCard__sub_802A57FC(void* a0 = 0);
void run_task__19TWindowMessageYesNoFv(void* p);
int TWindowSubShortMail__sub_802A58AC(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(void* p, void* a1, void* a2);
void update_card_slot__17TWindowSubComCardFPv(void* p);
void notify_trade_main__17TWindowSubComCardFPv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFPv(void* p);
int close__17TWindowSubComCardFPv(void* p);
void free_member__17TWindowSubComCardFPv(void* p);
int set_flag_40__16TAdChrSelASlotGCFPv(void*);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int set_selected_index__17TWindowSubComCardFPvs(void*);
int clear_trade_flag__19TWindowSubTradeMainFPv(void*);
int queue_destruction__7TObjectFv(void*);

int close__17TWindowSubComCardFPv(void* p) { return queue_destruction__7TObjectFv(p); }
void free_member__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) set_selected_index__17TWindowSubComCardFPvs(m); }
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *arg0) {
    s32 v = M2C_FIELD(arg0, u32 *, 0x2C);
    if ((u32) v == 0U) {
        return -1;
    }
    return TWindowSubComCard__sub_80265BF8(v);
}
s32 get_card_data__17TWindowSubComCardFPv(void *arg0) {
    s32 v = M2C_FIELD(arg0, u32 *, 0x2C);
    if ((u32) v == 0U) {
        return 0;
    }
    return get_status_flag__17TWindowSubComCardFPv(v);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033BC34
#include "types.h"

extern "C" {

void update_card_display__17TWindowSubComCardFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4);
int TWindowSubComCard__sub_8033BF90(void*);
int fn_8033BCDC(void*, void*, void*, void*, void*);

void update_card_display__17TWindowSubComCardFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4) { TWindowSubComCard__sub_8033BF90(p); fn_8033BCDC(p, a1, a2, a3, a4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033C0A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
s32 poll_memcard_status__15TAdPlayerLoadGCFPv();
s32 TWindowSubComCard__sub_8033C024(void *, s32);
int TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
void render__16TCheckMemoryCardFv(void);
int update_card_display__17TWindowSubComCardFPvPvPvPvPv(void*, int, int, int, int);
int TWindowSubComCard__sub_8033BF90(void*);

void reset__17TWindowSubComCardFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = poll_memcard_status__15TAdPlayerLoadGCFPv();
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    TWindowSubComCard__sub_8033C024(arg0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033C178
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
s32 poll_memcard_status__15TAdPlayerLoadGCFPv();
s32 TWindowSubComCard__sub_8033C024(void *, s32);
int TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
void render__16TCheckMemoryCardFv(void);
int update_card_display__17TWindowSubComCardFPvPvPvPvPv(void*, int, int, int, int);
int TWindowSubComCard__sub_8033BF90(void*);

int TWindowSubComCard__sub_8033C178(void* p) { return TWindowSubComCard__sub_8033BF90(p); }
void TWindowSubComCard__sub_8033C198(void) {  }
int TWindowSubComCard__sub_8033C19C(void* p) { return update_card_display__17TWindowSubComCardFPvPvPvPvPv(p, 0, -1, -1, -1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033C2E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
s32 poll_memcard_status__15TAdPlayerLoadGCFPv();
s32 TWindowSubComCard__sub_8033C024(void *, s32);
int TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
void render__16TCheckMemoryCardFv(void);
int update_card_display__17TWindowSubComCardFPvPvPvPvPv(void*, int, int, int, int);
int TWindowSubComCard__sub_8033BF90(void*);

void update_display_state__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x28);
    if (!(temp_r4 & 2)) {
        if (temp_r4 & 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
                update_card_display__17TWindowSubComCardFPvPvPvPvPv((void*)(arg0), 0, -1, -1, -1);
            }
        } else {
            if (temp_r4 & 4) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
                    TWindowSubComCard__sub_8033C024((void *)(arg0), 3);
                    return;
                }
                TWindowSubComCard__sub_8033C024((void *)(arg0), 1);
                return;
            }
            if (temp_r4 & 8) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
                    TWindowSubComCard__sub_8033C024((void *)(arg0), 3);
                    return;
                }
                TWindowSubComCard__sub_8033C024((void *)(arg0), 1);
                return;
            }
            if (temp_r4 & 0x10) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
                    TWindowSubComCard__sub_8033C024((void *)(arg0), 3);
                    return;
                }
                TWindowSubComCard__sub_8033C024((void *)(arg0), 1);
                return;
            }
            if (temp_r4 == 0) {
                TWindowSubComCard__sub_8033C024((void *)(arg0), 2);
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034CD98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_card_info_window__17TWindowSubComCardFPv(void *arg0);
M2C_UNK set_window_mode_4__6TLobbyFPvii(M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_80478C2C[];

void open_card_info_window__17TWindowSubComCardFPv(void *arg0) {
    M2C_UNK temp_r3;
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xA5);
    set_window_mode_4__6TLobbyFPvii(temp_r3, lbl_80478C2C, 1);
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
}

}
#endif
#endif
