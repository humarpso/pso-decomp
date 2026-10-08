#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK export_character_data__10TObjPlayerFPvPv(void *, void *);
int clear_id__10TObjPlayerFPv(void*);
M2C_UNK copy_header_struct__6TLobbyFPvPv(void *, void *);
int fn_802A15BC(void*);
int init_inventory_items__12TPlyCharDataFPv(void*);
int reset_state__14TAdSelectTxtGCFPv(void*);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);

void init_select_txt__10TObjPlayerFPv(void* p) { *(int*)(p) = 0; TAdSelectTxtGC__sub_802A16A8((char*)p + 0x4); clear_id__10TObjPlayerFPv((char*)p + 0x428); initialize_player_data__10TObjPlayerFPv((void*)((char*)p + 0xc)); }

void copy_lobby_header__10TObjPlayerFPvi(s32 *arg0, s32 arg1) {
    set_flags__10TObjPlayerFPvUi((void *) ((s8 *)arg0 + 0x428), (int) (1));
    *arg0 = TAdSelectTxtGC__sub_802A16C0((void *) (arg1));
    copy_header_struct__6TLobbyFPvPv((void *) ((s8 *)arg0 + 4), (void *) ((s8 *)arg1 + 0xDAC));
    export_character_data__10TObjPlayerFPvPv((void *) (arg1), (void *) ((s8 *)arg0 + 0xC));
}

void initialize_player_data__10TObjPlayerFPv(void* p) { *(unsigned char*)((char*)p + 0x3) = 0; *(unsigned char*)((char*)p + 0x2) = 0; *(unsigned char*)((char*)p + 0x1) = 0; *(unsigned char*)(p) = 0; init_inventory_items__12TPlyCharDataFPv(p); reset_state__14TAdSelectTxtGCFPv((char*)p + 0x34c); fn_802A15BC((char*)p + 0x370); TObjPlayer__sub_802A1588((void*)((char*)p + 0x3c0)); init_item_counts_max__10TObjPlayerFPv((P_802A1544 *)(p)); }

void init_item_counts_max__10TObjPlayerFPv(P_802A1544 *arg0) {
    s32 i;
    for (i = 0; i < 0x14; i++) {
        arg0->v[i] = get_item_count_max__10TObjPlayerFv();
    }
}

void TObjPlayer__sub_802A1588(void* p) { init_action_config__10TObjPlayerFPv(p); init_action_config__10TObjPlayerFPv((char*)p + 0x24); }

}
