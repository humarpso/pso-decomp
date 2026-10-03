#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_803291C8(void);
void free_singleton_805D6C80__6TLobbyFv(void);
s32 update_state_6c84__6TLobbyFi(s32 arg0);
s32 load_action_motion_pairs(s32, s32, s32, s32);
s32 apply_player_flag_2__6TLobbyFv();
s32 apply_state_6c84__6TLobbyFv();
void free__11TOBoss4RockFUi(void*);
s32 init_object_flag__6TLobbyFv();
s32 set_flag_1_at_6c84__6TLobbyFv();

int TLobby__sub_803291C8(void) { return 1; }
s32 update_state_6c84__6TLobbyFi(s32 arg0) {
    if (set_flag_1_at_6c84__6TLobbyFv() == 0) {
        init_object_flag__6TLobbyFv();
        load_action_motion_pairs(arg0, 0, 0, 0);
    }
    if (apply_player_flag_2__6TLobbyFv() == 0) {
        apply_state_6c84__6TLobbyFv();
        load_action_motion_pairs(arg0, 1, 1, 0);
    }
    return 1;
}

extern u32 lbl_805D6C80;

void free_singleton_805D6C80__6TLobbyFv(void) {
    if ((u32) lbl_805D6C80 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6C80);
        lbl_805D6C80 = 0U;
    }
}

}
