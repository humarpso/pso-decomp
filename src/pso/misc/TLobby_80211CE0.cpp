#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_main_phase__6TLobbyFi(s32 arg0);
s32 create_lobby_object_05(s32);
s32 create_tl05_object__6TLobbyFPv(s32);
s32 create__22THunterGuildSeqOfflineFPv(s32);

s32 get_main_phase();
extern s32 local_client_id;
extern s32 TLobby__designated_client_id;

s32 handle_main_phase__6TLobbyFi(s32 arg0) {
    if (get_main_phase() == 0xE) {
        return create__22THunterGuildSeqOfflineFPv(arg0);
    }
    if (get_main_phase() == 0xF) {
        if ((s32) local_client_id == (s32) TLobby__designated_client_id) {
            return create_tl05_object__6TLobbyFPv(arg0);
        }
        return create_lobby_object_05(arg0);
    }
    return 0;
}

}
