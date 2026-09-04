#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801A4C6C(void* p);
void free_objects__6TLobbyFv(void);
void reset_counter__6TLobbyFv(void);
void set_value__6TLobbyFPvi(void* p, s32 v);
void update_camera_state__6TLobbyFv(void);
void update_periodic_tick__6TLobbyFv(void);
s32 TCameraCtrl__sub_8006B368();
M2C_UNK THunterGuildSeqOffline__sub_80213430();
M2C_UNK TLobby__sub_80103F68();
M2C_UNK TLobby__sub_801A46D8();
M2C_UNK TLobby__sub_801A4820();
M2C_UNK TObjCityMainWarp__sub_80186634();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022942C();
M2C_UNK apply_all_players__9TTecLukerFv();
M2C_UNK clear_counter__6TLobbyFv();
M2C_UNK clear_quest_state__6TLobbyFv();
void enable_all_battle_ctrl__10TNpcPlayerFv();
M2C_UNK fn_801D9E50(void*);
M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK reset_door_state__6TLobbyFv();
M2C_UNK reset_instance__8TObjDoorFv();
M2C_UNK reset_quest_counter__6TLobbyFv();
M2C_UNK set_cleanup_flag__6TLobbyFv();

extern u32 lbl_805D5EE8;

void free_objects__6TLobbyFv(void) {
    TRaderMapCore__sub_801F9540();
    TSwitch__sub_8022942C();
    apply_all_players__9TTecLukerFv();
    TLobby__sub_80103F68();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) lbl_805D5EE8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EE8);
    }
    TObjCityMainWarp__sub_80186634();
    THunterGuildSeqOffline__sub_80213430();
    clear_counter__6TLobbyFv();
    reset_door_state__6TLobbyFv();
    reset_instance__8TObjDoorFv();
    set_cleanup_flag__6TLobbyFv();
    reset_quest_counter__6TLobbyFv();
    clear_quest_state__6TLobbyFv();
}

void update_camera_state__6TLobbyFv(void) {
    if (TCameraCtrl__sub_8006B368() != 0) {
        TLobby__sub_801A46D8();
        return;
    }
    TLobby__sub_801A4820();
}

extern s32 lbl_805D53A4;
extern u32 TLobby__data_805D5580;
extern s32 TLobby__data_805D5E24;

void update_periodic_tick__6TLobbyFv(void) {
    if ((TLobby__data_805D5E24 & 1) && ((lbl_805D53A4 % 900) == 0) && ((u32) TLobby__data_805D5580 != 0U)) {
        fn_801D9E50((void*)TLobby__data_805D5580);
    }
}

void TLobby__sub_801A4C6C(void* p) { *(u32*)((char*)p + 0x20) |= 0x1; }
void set_value__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }

    extern int lbl_805D4E2C;
void reset_counter__6TLobbyFv(void) { lbl_805D4E2C = 0; }

}
