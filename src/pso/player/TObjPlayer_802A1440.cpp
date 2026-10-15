#include "types.h"

struct P_802A1544 { u8 pad0[0x408]; s8 v[0x14]; };

extern "C" {
s8 get_item_count_max__10TObjPlayerFv();
void init_item_counts_max__10TObjPlayerFPv(P_802A1544 *arg0);
}

extern "C" {

void TObjPlayer__sub_802A1588(void* p);
void copy_lobby_header__10TObjPlayerFPvi(s32 *arg0, s32 arg1);
void init_select_txt__10TObjPlayerFPv(void* p);
void initialize_player_data__10TObjPlayerFPv(void* p);
int TAdSelectTxtGC__sub_802A16A8(void*);
s32 TAdSelectTxtGC__sub_802A16C0(void *);
int init_action_config__10TObjPlayerFPv(void*);
s32 export_character_data__10TObjPlayerFPvPv(void *, void *);
int clear_id__10TObjPlayerFPv(void*);
s32 copy_header_struct__6TLobbyFPvPv(void *, void *);
int clear_player_data_block(void*);
int init_inventory_items__12TPlyCharDataFPv(void*);
int reset_state__14TAdSelectTxtGCFPv(void*);
s32 set_flags__10TObjPlayerFPvUi(void *, int);

void init_select_txt__10TObjPlayerFPv(void* p) { *(int*)(p) = 0; TAdSelectTxtGC__sub_802A16A8((char*)p + 0x4); clear_id__10TObjPlayerFPv((char*)p + 0x428); initialize_player_data__10TObjPlayerFPv((void*)((char*)p + 0xc)); }

void copy_lobby_header__10TObjPlayerFPvi(s32 *arg0, s32 arg1) {
    set_flags__10TObjPlayerFPvUi((void *) ((s8 *)arg0 + 0x428), (int) (1));
    *arg0 = TAdSelectTxtGC__sub_802A16C0((void *) (arg1));
    copy_header_struct__6TLobbyFPvPv((void *) ((s8 *)arg0 + 4), (void *) ((s8 *)arg1 + 0xDAC));
    export_character_data__10TObjPlayerFPvPv((void *) (arg1), (void *) ((s8 *)arg0 + 0xC));
}

void initialize_player_data__10TObjPlayerFPv(void* p) { *(unsigned char*)((char*)p + 0x3) = 0; *(unsigned char*)((char*)p + 0x2) = 0; *(unsigned char*)((char*)p + 0x1) = 0; *(unsigned char*)(p) = 0; init_inventory_items__12TPlyCharDataFPv(p); reset_state__14TAdSelectTxtGCFPv((char*)p + 0x34c); clear_player_data_block((char*)p + 0x370); TObjPlayer__sub_802A1588((void*)((char*)p + 0x3c0)); init_item_counts_max__10TObjPlayerFPv((P_802A1544 *)(p)); }

void init_item_counts_max__10TObjPlayerFPv(P_802A1544 *arg0) {
    s32 i;
    for (i = 0; i < 0x14; i++) {
        arg0->v[i] = get_item_count_max__10TObjPlayerFv();
    }
}

void TObjPlayer__sub_802A1588(void* p) { init_action_config__10TObjPlayerFPv(p); init_action_config__10TObjPlayerFPv((char*)p + 0x24); }

}
