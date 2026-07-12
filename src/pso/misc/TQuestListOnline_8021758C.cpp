#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 get_unlocked_tier__16TQuestListOnlineFv(void);
s32 TODoorVoShip__sub_801F44BC(M2C_UNK);
s32 TLobby__sub_80070AB0();
s32 fn_80071698(M2C_UNK);

extern s32 lbl_805D61F8;

u8 get_unlocked_tier__16TQuestListOnlineFv(void) {
    if (TLobby__sub_80070AB0() != 0) {
        switch ((s32) lbl_805D61F8) {
        case 0:
            return (u8) fn_80071698(0);
        case 1:
            return (u8) fn_80071698(1);
        default:
            return 0U;
        }
    } else {
        if (TODoorVoShip__sub_801F44BC(0x33) != 0) {
            return 4U;
        }
        if (TODoorVoShip__sub_801F44BC(0x2A) != 0) {
            return 3U;
        }
        if (TODoorVoShip__sub_801F44BC(0x20) != 0) {
            return 2U;
        }
        return (u8) (TODoorVoShip__sub_801F44BC(0x17) != 0);
    }
}

}
