#include "types.h"
#include "pso/unk/text_80298F8C.h"

struct RecoveredGlobal_80298F8C_lbl_805409C8 {
    s32 value;
    u8 remaining[0x14];
};

extern RecoveredGlobal_80298F8C_lbl_805409C8 creation_input_state;
typedef char RecoveredGlobal_80298F8C_lbl_805409C8_size[sizeof(RecoveredGlobal_80298F8C_lbl_805409C8) == 0x18 ? 1 : -1];
u8 TChCrCharSelect__sub_80298F8C(s32 arg0) {
    return (u8) ((*(s32 *)((s8 *)&creation_input_state.value + 0x14) & arg0) != 0);
}
