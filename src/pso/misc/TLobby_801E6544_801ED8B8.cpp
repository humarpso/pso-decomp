#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_801EDDDC(void);
int TLobby__sub_801EDE00(void);
void apply_player_count__6TLobbyFv(void);
void store_status__6TLobbyFi(int a0);
int TLobby__sub_801B0974(void);
M2C_UNK clamp_and_store_layout_index__6TLobbyFi(u32);
u32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);
s32 is_split_screen();
int set_mode__13TRaderMapCoreFi(void*);
M2C_UNK set_selected_layout__6TLobbyFi(u32);

extern u32 TLobby__data_80512220[];

void apply_player_count__6TLobbyFv(void) {
    u32 temp_r30;
    u32 temp_r31;

    temp_r30 = TLobby__data_80512220[0];
    temp_r31 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if (is_split_screen() == 1) {
        if (temp_r30 < temp_r31) {
            clamp_and_store_layout_index__6TLobbyFi(temp_r30);
            return;
        }
        clamp_and_store_layout_index__6TLobbyFi(0U);
        return;
    }
    if (temp_r30 < temp_r31) {
        set_selected_layout__6TLobbyFi(temp_r30);
        return;
    }
    set_selected_layout__6TLobbyFi(0U);
}

int TLobby__sub_801EDDDC(void) { return set_mode__13TRaderMapCoreFi((void*)(0)); }
int TLobby__sub_801EDE00(void) { return set_mode__13TRaderMapCoreFi((void*)(1)); }

    extern int* TLobby__data_805D5E78;
void store_status__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_801B0974(); }

}
