#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_main_phase__6TLobbyFi(s32 arg0);
s32 create_lobby_object_05(s32);
s32 fn_80211FA0(s32);
s32 create__22THunterGuildSeqOfflineFPv(s32);

s32 get_main_phase();
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

s32 handle_main_phase__6TLobbyFi(s32 arg0) {
    if (get_main_phase() == 0xE) {
        return create__22THunterGuildSeqOfflineFPv(arg0);
    }
    if (get_main_phase() == 0xF) {
        if ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC) {
            return fn_80211FA0(arg0);
        }
        return create_lobby_object_05(arg0);
    }
    return 0;
}

}
