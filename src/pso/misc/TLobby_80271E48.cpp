#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_packet__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK TLobby__sub_80077798(s32, M2C_UNK *);
M2C_UNK send_choice_search__9TProtocolFR22ChoiceSearchParameters(s32, M2C_UNK *);

extern s32 TLobby__protocol_instance;

void send_packet__6TLobbyFii(s32 arg0, s32 arg1) {
    M2C_UNK sp8[4];

    TLobby__sub_80077798(arg1, sp8);
    send_choice_search__9TProtocolFR22ChoiceSearchParameters(TLobby__protocol_instance, sp8);
}

}
