#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TCheckRoomSequence__vt10(void* p);

int set_field_20__12TQuestListVMFPvi(void*, void*);
int TCheckRoomSequence__sub_80211210(void);
int restore_player_state__13TShopSequenceFPv(void*);
int TShopWindowBase__sub_8022397C(void*);

void TCheckRoomSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); TShopWindowBase__sub_8022397C(p); TCheckRoomSequence__sub_80211210(); set_field_20__12TQuestListVMFPvi(p, (void*)1); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8013AD28
#include "types.h"

extern "C" {

void set_ready_flag__18TCheckRoomSequenceFPv(void* p);
int get_status_flag__6TLobbyFPv(void* p);
int get_flag_bit2__6TLobbyFPv(void* p);
int TLobby__sub_8013AD50(void* p);
s32 TLobby__sub_8013AD5C(void* p);
u8 get_mode__6TLobbyFPv(void* p);
u8 TLobby__sub_8013AD6C(void* p);
int TLobby__sub_8013AD74(void* p);

void set_ready_flag__18TCheckRoomSequenceFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020F034
#include "types.h"

extern "C" {

s32 TLobby__sub_8030A7B0();
s32 is_not_split_screen__13TRaderMapCoreFv();
void reset_counter_64__6TLobbyFPv(void* p);

s32 check_room_ready__18TCheckRoomSequenceFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
        return 1;
    }
    return (u32)__cntlzw(TLobby__sub_8030A7B0()) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020F0B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_check_params__18TCheckRoomSequenceFUi(u32 arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(M2C_UNK, M2C_UNK);

extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;

void init_check_params__18TCheckRoomSequenceFUi(u32 arg0) {
    TCheckRoomSequence__data_805D6164 = 0x46;
    TCheckRoomSequence__data_805D6168 = 2;
    if (arg0 != 0U) {
        set_field_20__12TQuestListVMFPvi(arg0, 0x10);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020F14C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_check__18TCheckRoomSequenceFUi(u32 arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(M2C_UNK, M2C_UNK);

extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;

void init_check__18TCheckRoomSequenceFUi(u32 arg0) {
    if (arg0 != 0U) {
        TCheckRoomSequence__data_805D6164 = 0x46;
        TCheckRoomSequence__data_805D6168 = 2;
        set_field_20__12TQuestListVMFPvi(arg0, 0x10);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020F1DC
#include "types.h"

extern "C" {

void TCheckRoomSequence__sub_8020F1DC(void);

void TCheckRoomSequence__sub_8020F1DC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020F998
#include "types.h"

extern "C" {

int set_quest_list_mode_19__18TCheckRoomSequenceFPv(void* p);
int set_field_20__12TQuestListVMFPvi(void*, int);

int set_quest_list_mode_19__18TCheckRoomSequenceFPv(void* p) { return set_field_20__12TQuestListVMFPvi(p, 19); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802100F8
#include "types.h"

extern "C" {

void TCheckRoomSequence__sub_802100F8(void);
void TCheckRoomSequence__sub_802100FC(void);

void TCheckRoomSequence__sub_802100F8(void) {  }
void TCheckRoomSequence__sub_802100FC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211444
#include "types.h"

extern "C" {

int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int TAdSinglePlyChrSelectGC__sub_80211584(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TShopWindowBase__sub_802115F0(void);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);

void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1) { *(unsigned char*)(a1) = *(unsigned char*)(p); *(unsigned char*)((char*)a1 + 0x1) = *(unsigned char*)((char*)p + 0x1); *(unsigned char*)((char*)a1 + 0x2) = *(unsigned char*)((char*)p + 0x2); *(unsigned char*)((char*)a1 + 0x3) = *(unsigned char*)((char*)p + 0x3); *(unsigned char*)((char*)a1 + 0x4) = *(unsigned char*)((char*)p + 0x4); *(unsigned char*)((char*)a1 + 0x5) = *(unsigned char*)((char*)p + 0x5); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0x6, (char*)p + 0x6); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0x8, (char*)p + 0x8); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0xa, (char*)p + 0xa); *(void**)((char*)a1 + 0xc) = *(void**)((char*)p + 0xc); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x10); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211614
#include "types.h"

extern "C" {

void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);
int TAdSinglePlyChrSelectGC__sub_80211584(void* a0 = 0);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void TShopWindowBase__sub_802115F0(void);
int is_confirmed__18TWindowInputNumberFPv(void* p);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);

void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x74) = a; *(f32*)((char*)p + 0x78) = b; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211620
#include "types.h"

extern "C" {

int get_room_data__18TCheckRoomSequenceFi(int a0);
int get_room_table_entry__18TCheckRoomSequenceFi(int a0);

    extern int lbl_80513DA8[];
int get_room_data__18TCheckRoomSequenceFi(int a0) {  return lbl_80513DA8[a0]; }

    extern int lbl_80513D98[];
int get_room_table_entry__18TCheckRoomSequenceFi(int a0) {  return lbl_80513D98[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021E464
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__18TCheckRoomSequenceFPv(void *arg0);
void *TCheckRoomSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__18TCheckRoomSequenceFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = TCheckRoomSequence__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021E4B0
#include "types.h"

extern "C" {

int TCheckRoomSequence__sub_8021E4B0(int a0);

    extern int TCheckRoomSequence__data_80513DB8[];
int TCheckRoomSequence__sub_8021E4B0(int a0) {  return TCheckRoomSequence__data_80513DB8[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80222FC0
#include "types.h"

extern "C" {

s32 get_item_def__18TCheckRoomSequenceFUi(u32 arg0);
s32 lookup_item_def__9TItemDataFPv();

s32 get_item_def__18TCheckRoomSequenceFUi(u32 arg0) {
    if (arg0 != 0U) {
        return lookup_item_def__9TItemDataFPv();
    }
    return 0;
}

}
#endif
#endif
