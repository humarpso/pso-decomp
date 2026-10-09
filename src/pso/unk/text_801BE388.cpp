#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801BE388_lbl_8050EA40 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
u8 get_rule_field_0__6TLobbyFPv(void *);
extern RecoveredGlobal_801BE388_lbl_8050EA40 lobby_rule_settings;
s8 get_rule_field_0__10TObjPlayerFv(void);
}

extern "C" {

typedef char RecoveredGlobal_801BE388_lbl_8050EA40_size[sizeof(RecoveredGlobal_801BE388_lbl_8050EA40) == 0x30 ? 1 : -1];
s8 get_rule_field_0__10TObjPlayerFv(void) {
    return get_rule_field_0__6TLobbyFPv(&lobby_rule_settings.value);
}

}
