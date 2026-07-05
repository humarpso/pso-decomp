#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct GameListEntry_80139538 { char pad[0x1C]; };
struct Root_80139538 { char pad[0x1DA8]; struct GameListEntry_80139538 entries[1]; };

extern "C" {

M2C_UNK TLobby__sub_80137EA8();
M2C_UNK TLobby__sub_80138858();
s32 fn_8013AD38(u32);
s32 fn_8013AD44(u32);
M2C_UNK send_action__9TProtocolFR13GameListEntryPcPc(void *, void *, M2C_UNK *, M2C_UNK *);
M2C_UNK TWindow__close(u32);
s32 fn_80266E0C(u32);
extern struct Root_80139538 *lbl_805D5580;
extern u32 lbl_805D55D0;
extern M2C_UNK lbl_805DB0B0;

void TLobby__sub_80139538(void) {
    s32 temp_r31;

    if (lbl_805D55D0 != 0U) {
        if (fn_8013AD38(lbl_805D55D0) != 0) {
            temp_r31 = fn_80266E0C(lbl_805D55D0);
            TWindow__close(lbl_805D55D0);
            lbl_805D55D0 = 0U;
            send_action__9TProtocolFR13GameListEntryPcPc(lbl_805D5580, &lbl_805D5580->entries[temp_r31], &lbl_805DB0B0, &lbl_805DB0B0);
            TLobby__sub_80137EA8();
            return;
        }
        if (fn_8013AD44(lbl_805D55D0) != 0) {
            TWindow__close(lbl_805D55D0);
            lbl_805D55D0 = 0U;
            TLobby__sub_80138858();
        }
    }
}

}
