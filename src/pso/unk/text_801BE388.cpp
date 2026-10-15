#include "types.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_801BE388_lbl_8050EA40 {
    s32 value;
    u8 remaining[0x2C];
};

extern "C" {
u8 get_rule_field_0__6TLobbyFv(void *);
extern RecoveredGlobal_801BE388_lbl_8050EA40 lobby_rule_settings;
}

extern "C" {

typedef char RecoveredGlobal_801BE388_lbl_8050EA40_size[sizeof(RecoveredGlobal_801BE388_lbl_8050EA40) == 0x30 ? 1 : -1];
s8 TObjPlayer::get_rule_field_0() {
    return get_rule_field_0__6TLobbyFv(&lobby_rule_settings.value);
}

}
