#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80197F78_lbl_8050DD24 {
    u8 * value;
    u8 remaining[0x28];
};

extern "C" {
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi();
void **TLobby__sub_803DA16C();
extern RecoveredGlobal_80197F78_lbl_8050DD24 lbl_8050DD24;
extern int lbl_805D5C58;
void **free_global_buffer__6TLobbyFv(void);
}

extern "C" {

void TLobby__sub_80197F74(void);
void TLobby__sub_80197FC4(void);

void TLobby__sub_80197F74(void) {  }

    extern int lbl_805D5C58;

typedef char RecoveredGlobal_80197F78_lbl_8050DD24_size[sizeof(RecoveredGlobal_80197F78_lbl_8050DD24) == 0x2C ? 1 : -1];
void **free_global_buffer__6TLobbyFv(void) {
    void **var_r3;
    var_r3 = (void **)((u8 *)((*(void ** *)&lbl_805D5C58)));
    if (var_r3 != NULL) {
        safe_free__23TAdSinglePlyChrSelectGCFUi();
        (*(void ** *)&lbl_805D5C58) = NULL;
        var_r3 = (void **)(&lbl_8050DD24.value);
        if ((u32) M2C_FIELD(lbl_8050DD24.value, u32 *, 8) != 0U) {
            var_r3 = (void **)(TLobby__sub_803DA16C());
        }
    }
    return var_r3;
}

void TLobby__sub_80197FC4(void) { lbl_805D5C58 = 0; }

}
