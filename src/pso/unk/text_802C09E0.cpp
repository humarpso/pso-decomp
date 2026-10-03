#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802C09E0_lbl_804E0878 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802C09E0_lbl_804E0878_size[sizeof(RecoveredGlobal_802C09E0_lbl_804E0878) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_802C09E0_lbl_804E0878 lbl_804E0878;
extern s32 lbl_805D67B8;
extern s32 lbl_805D67BC;
void TObjPlayer__sub_802C09E0(void);
}

extern "C" {

void TObjPlayer__sub_802C09E0(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804E0878.value, 0, 0, 0));
    }
    lbl_805D67B8 = var_r0;
    lbl_805D67BC = get_lobby_type__6TLobbyFv();
}

}
