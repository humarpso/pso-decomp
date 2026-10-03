#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_state_6c84__6TLobbyFv(void);
void apply_player_flag_2__6TLobbyFv(void);
void init_object_flag__6TLobbyFv(void);
void set_flag_1_at_6c84__6TLobbyFv(void);
void clear_flag_at_6c84__6TLobbyFv(void);
M2C_UNK set_flags__10TObjPlayerFPvUi(M2C_UNK *, M2C_UNK);
M2C_UNK test_flags_any(M2C_UNK *, M2C_UNK);
M2C_UNK clear_id__10TObjPlayerFPv(M2C_UNK *);

extern M2C_UNK lbl_805D6C84;

void apply_state_6c84__6TLobbyFv(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D6C84, 2);
}

extern M2C_UNK lbl_805D6C84;

void apply_player_flag_2__6TLobbyFv(void) {
    test_flags_any(&lbl_805D6C84, 2);
}

extern M2C_UNK lbl_805D6C84;

void init_object_flag__6TLobbyFv(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D6C84, 1);
}

extern M2C_UNK lbl_805D6C84;

void set_flag_1_at_6c84__6TLobbyFv(void) {
    test_flags_any(&lbl_805D6C84, 1);
}

extern M2C_UNK lbl_805D6C84;

void clear_flag_at_6c84__6TLobbyFv(void) {
    clear_id__10TObjPlayerFPv(&lbl_805D6C84);
}

}
