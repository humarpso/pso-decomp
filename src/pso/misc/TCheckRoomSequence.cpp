#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdSinglePlyChrSelectGC__sub_80211584(void*);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
int TCheckRoomSequence__sub_8020F070(void);
void TCheckRoomSequence__sub_8020F1DC(void);
void TCheckRoomSequence__sub_802100F8(void);
void TCheckRoomSequence__sub_802100FC(void);
int TCheckRoomSequence__sub_80211408(void);
int TCheckRoomSequence__sub_802114D4(void);
int TCheckRoomSequence__sub_80211574(void);
void TCheckRoomSequence__vt10(void* p);
void TShopWindowBase__sub_802115F0(void);
s32 check_room_ready__18TCheckRoomSequenceFv(void);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
void init_check__18TCheckRoomSequenceFUi(u32 arg0);
void init_check_params__18TCheckRoomSequenceFUi(u32 arg0);
int set_quest_list_mode_19__18TCheckRoomSequenceFPv(void* p);
int TCheckRoomSequence__sub_80211210(void);
s32 TLobby__sub_8030A7B0();
int TShopWindowBase__sub_8022397C(void*);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 is_not_split_screen__13TRaderMapCoreFv();
void reset_counter_64__6TLobbyFPv(void* p);
int restore_player_state__13TShopSequenceFPv(void*);
int set_field_20__12TQuestListVMFPvi(void*, void*);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);

s32 check_room_ready__18TCheckRoomSequenceFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
        return 1;
    }
    return (u32)__cntlzw(TLobby__sub_8030A7B0()) >> 5;
}

int TCheckRoomSequence__sub_8020F070(void) { return 0; }

extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;

void init_check_params__18TCheckRoomSequenceFUi(u32 arg0) {
    TCheckRoomSequence__data_805D6164 = 0x46;
    TCheckRoomSequence__data_805D6168 = 2;
    if (arg0 != 0U) {
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0x10));
    }
}

extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;

void init_check__18TCheckRoomSequenceFUi(u32 arg0) {
    if (arg0 != 0U) {
        TCheckRoomSequence__data_805D6164 = 0x46;
        TCheckRoomSequence__data_805D6168 = 2;
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0x10));
    }
}

void TCheckRoomSequence__sub_8020F1DC(void) {  }

int set_quest_list_mode_19__18TCheckRoomSequenceFPv(void* p) { return set_field_20__12TQuestListVMFPvi((void*)(p), (void*)(19)); }

void TCheckRoomSequence__sub_802100F8(void) {  }
void TCheckRoomSequence__sub_802100FC(void) {  }

void TCheckRoomSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); TShopWindowBase__sub_8022397C(p); TCheckRoomSequence__sub_80211210(); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

int TCheckRoomSequence__sub_80211408(void) { return 0; }

void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1) { *(unsigned char*)(a1) = *(unsigned char*)(p); *(unsigned char*)((char*)a1 + 0x1) = *(unsigned char*)((char*)p + 0x1); *(unsigned char*)((char*)a1 + 0x2) = *(unsigned char*)((char*)p + 0x2); *(unsigned char*)((char*)a1 + 0x3) = *(unsigned char*)((char*)p + 0x3); *(unsigned char*)((char*)a1 + 0x4) = *(unsigned char*)((char*)p + 0x4); *(unsigned char*)((char*)a1 + 0x5) = *(unsigned char*)((char*)p + 0x5); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0x6, (char*)p + 0x6); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0x8, (char*)p + 0x8); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0xa, (char*)p + 0xa); *(void**)((char*)a1 + 0xc) = *(void**)((char*)p + 0xc); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x10); }

int TCheckRoomSequence__sub_802114D4(void) { return 0; }
int TCheckRoomSequence__sub_80211574(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_80211584(void*) { return 0; }

void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p) { TAdSinglePlyChrSelectGC__sub_80211584((void*)(p)); return p; }

void TShopWindowBase__sub_802115F0(void) {  }

}
