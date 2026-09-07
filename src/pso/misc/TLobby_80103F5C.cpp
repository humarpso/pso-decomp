#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK clear_id__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK free__11TOBoss4RockFUi(s32);
extern u32 lbl_805D5418;
extern s32 lbl_805D541C;
extern s32 lbl_805D5420;
extern s32 lbl_805D5424;
extern int lbl_805D5428;
extern s32 lbl_805D542C;
extern M2C_UNK lbl_805D5430;
void free_boss_rocks__6TLobbyFv(void);
s32 TCheckRoomSequence__sub_80396920(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TLobby__sub_80103F68();
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
M2C_UNK clear_id__10TObjPlayerFPv(M2C_UNK *);
extern M2C_UNK drop_stacked_item_passthrough__6TLobbyFi[];
extern u32 lbl_805D5418;
extern s32 lbl_805D541C;
extern s32 lbl_805D5420;
extern s32 lbl_805D5424;
extern int lbl_805D5428;
extern s32 lbl_805D542C;
extern M2C_UNK lbl_805D5430;
void alloc_objects__6TLobbyFv(void);
    extern int lbl_805D5868;
int get_lobby_flag__6TLobbyFv(void);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_player_packet__6TLobbyFPv(void* p);
void bswap_player_packet__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
void update_and_send__6TLobbyFPv(void* p);
void TLobby__sub_801041BC(void *arg0);
M2C_UNK set_flags__10TObjPlayerFPvUi(M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_805D5430;
void TLobby__sub_801041D8(void);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__9TItemDataFv(void*);
void bswap_item__6TLobbyFPv(void* p);
M2C_UNK init_forward__10TObjPlayerFPv(M2C_UNK *);
extern M2C_UNK lbl_805D5430;
void TLobby__sub_80104350(void);
    extern int* lbl_805D54E8;
void set_boss_buf_entry__6TLobbyFii(int a0, int a1);
extern int* lbl_805D54E8;
int TLobby__sub_80104384(int a0);
s32 TItemData__sub_8010C8B4();
s32 get_item_data__6TLobbyFUi(u32 arg0);
M2C_UNK TItemData__sub_8010E59C(u32, s32);
void forward_message__6TLobbyFiUi(s32 arg0, u32 arg1);
    extern int lbl_805D5448;
void mark_selected__6TLobbyFv(void);
extern int lbl_805D5448;
int get_drop_flag__6TLobbyFv(void);
void TLobby__sub_80104464(void);
s32 fn_80077788();
s32 fn_80077790();
s32 fn_801058E8();
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
void mark_selected__6TLobbyFv(void);
void handle_select_confirm__6TLobbyFv(void);
s32 TObjPlayer__sub_80019248();
M2C_UNK TObjPlayer__sub_801BA0F0(s32, s32, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TWindowSubComCard__sub_801058F8(s32);
M2C_UNK fn_801B849C(s32, void *);
s32 obj_isState3_324(s32);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
void forward_to_player__6TLobbyFiPv(int arg0, void *arg1);
s32 TObjPlayer__sub_80019248();
M2C_UNK TObjPlayer__sub_801B9EDC(s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TWindowSubComCard__sub_801058F8(s32);
u32 activate_d04_slot__10TObjPlayerFPv(s32);
u32 get_equip_field_d04__10TObjPlayerFPv(s32, s32);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_item_field_2__9TItemDataFPv(s32);
u32 get_item_field_6__10TObjPlayerFPv(s32);
s32 obj_isState3_324(s32);
u32 test_flag3__9TItemDataFPv(s32);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
void handle_player_event__6TLobbyFii(s32 arg0, s32 arg1);
}

extern "C" {

void clear_object_count__6TLobbyFv(void);

    extern int lbl_805D5428;
void clear_object_count__6TLobbyFv(void) { lbl_805D5428 = 0; }
void free_boss_rocks__6TLobbyFv(void) {
    free__11TOBoss4RockFUi(lbl_805D542C);
    lbl_805D542C = 0;
    free__11TOBoss4RockFUi(lbl_805D5424);
    lbl_805D5424 = 0;
    (*(s32 *)&lbl_805D5428) = 0;
    free__11TOBoss4RockFUi(lbl_805D5420);
    lbl_805D5420 = 0;
    free__11TOBoss4RockFUi(lbl_805D541C);
    lbl_805D541C = 0;
    if ((u32) lbl_805D5418 != 0U) {
        free__11TOBoss4RockFUi(lbl_805D5418 - 0x10);
    }
    lbl_805D5418 = 0U;
    clear_id__10TObjPlayerFPv(&lbl_805D5430);
}
void alloc_objects__6TLobbyFv(void) {
    (*(s32 *)&lbl_805D5418) = TCheckRoomSequence__sub_80396920(alloc_buffer__11TOBoss4RockFPv(0x1E610), drop_stacked_item_passthrough__6TLobbyFi, 0, 0x24, 0xD80);
    lbl_805D541C = alloc_buffer__11TOBoss4RockFPv(0x48);
    lbl_805D5420 = alloc_buffer__11TOBoss4RockFPv(0x48);
    lbl_805D5424 = alloc_buffer__11TOBoss4RockFPv(0x40);
    (*(s32 *)&lbl_805D5428) = 0;
    lbl_805D542C = alloc_buffer__11TOBoss4RockFPv(0x24);
    clear_id__10TObjPlayerFPv(&lbl_805D5430);
    TLobby__sub_80103F68();
}
int get_lobby_flag__6TLobbyFv(void) {  return lbl_805D5868; }
void bswap_player_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }
void update_and_send__6TLobbyFPv(void* p) { bswap_player_packet__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TLobby__sub_801041BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s8 *, 0) = 0x63;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}
void TLobby__sub_801041D8(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D5430, 1);
}
void bswap_item__6TLobbyFPv(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap__9TItemDataFv((char*)p + 0x10); }
void TLobby__sub_80104350(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D5430);
}
void set_boss_buf_entry__6TLobbyFii(int a0, int a1) { lbl_805D54E8[(unsigned short)(a1)] = a0; }
int TLobby__sub_80104384(int a0) {  return lbl_805D54E8[(unsigned short)(a0)]; }
s32 get_item_data__6TLobbyFUi(u32 arg0) {
    if (arg0 != 0U) {
        return TItemData__sub_8010C8B4();
    }
    return 0;
}
void forward_message__6TLobbyFiUi(s32 arg0, u32 arg1) {
    if (arg1 != 0U) {
        TItemData__sub_8010E59C(arg1, arg0);
    }
}
void mark_selected__6TLobbyFv(void) { lbl_805D5448 = 1; }
int get_drop_flag__6TLobbyFv(void) {  return lbl_805D5448; }
void TLobby__sub_80104464(void) {  }
void handle_select_confirm__6TLobbyFv(void) {
    if ((fn_80077790() == 1) || (fn_80077788() == 1)) {
        mark_selected__6TLobbyFv();
        if (get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) != 0U) {
            fn_801058E8();
        }
    }
}
void forward_to_player__6TLobbyFiPv(int arg0, void *arg1) {
    s32 temp_r3;
    if (arg1 != NULL) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
        if ((temp_r3 != 0) && ((TObjPlayer__sub_80019248() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)) || ((TWindowSubComCard__sub_801058F8(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)))) {
            fn_801B849C(temp_r3, arg1);
            TObjPlayer__sub_801BA0F0(temp_r3, M2C_FIELD(arg1, s32 *, 0xC), 0);
        }
    }
}
void handle_player_event__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    u32 var_r3;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg0);
    if ((temp_r3 != 0) && ((TObjPlayer__sub_80019248() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)) || ((TWindowSubComCard__sub_801058F8(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)))) {
        var_r3 = 0U;
        switch (arg1) {
        case 0:
            var_r3 = get_item_field_6__10TObjPlayerFPv(temp_r3);
            break;
        case 1:
            var_r3 = get_item_field_2__9TItemDataFPv(temp_r3);
            break;
        case 2:
            var_r3 = test_flag3__9TItemDataFPv(temp_r3);
            break;
        case 3:
            var_r3 = activate_d04_slot__10TObjPlayerFPv(temp_r3);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            var_r3 = get_equip_field_d04__10TObjPlayerFPv(temp_r3, arg1 + 5);
            break;
        default:
            break;
        }
        if (var_r3 != 0U) {
            TObjPlayer__sub_801B9EDC(temp_r3, get_field_d8__10TObjPlayerFPv());
        }
    }
}

}
