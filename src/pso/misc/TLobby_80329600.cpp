#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_state_6c84__6TLobbyFv(void);
void TLobby__sub_80329628(void);
void init_object_flag__6TLobbyFv(void);
void set_flag_1_at_6c84__6TLobbyFv(void);
void clear_flag_at_6c84__6TLobbyFv(void);
M2C_UNK TObjPlayer__sub_8001BED8(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8001BF40(M2C_UNK *);

extern M2C_UNK lbl_805D6C84;

void apply_state_6c84__6TLobbyFv(void) {
    TObjPlayer__sub_8001BED8(&lbl_805D6C84, 2);
}

extern M2C_UNK lbl_805D6C84;

void TLobby__sub_80329628(void) {
    TObjPlayer__sub_8001BEF8(&lbl_805D6C84, 2);
}

extern M2C_UNK lbl_805D6C84;

void init_object_flag__6TLobbyFv(void) {
    TObjPlayer__sub_8001BED8(&lbl_805D6C84, 1);
}

extern M2C_UNK lbl_805D6C84;

void set_flag_1_at_6c84__6TLobbyFv(void) {
    TObjPlayer__sub_8001BEF8(&lbl_805D6C84, 1);
}

extern M2C_UNK lbl_805D6C84;

void clear_flag_at_6c84__6TLobbyFv(void) {
    TObjPlayer__sub_8001BF40(&lbl_805D6C84);
}

}
