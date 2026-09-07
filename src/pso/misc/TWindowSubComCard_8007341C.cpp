#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800739BC_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

extern "C" {
extern RecoveredGlobal_800739BC_lbl_8048C9D8 lbl_8048C9D8;
void TLobby__sub_800739BC(void);
}

extern "C" {

void set_loss_flag__6TLobbyFPv(void* p);
int is_visible__17TWindowSubComCardFPv(void* p);

int is_visible__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }
typedef char RecoveredGlobal_800739BC_lbl_8048C9D8_size[sizeof(RecoveredGlobal_800739BC_lbl_8048C9D8) == 0x748 ? 1 : -1];
void TLobby__sub_800739BC(void) {
    M2C_FIELD(&lbl_8048C9D8.value, s32 *, 0x48) = 0;
    M2C_FIELD(&lbl_8048C9D8.value, s32 *, 0x4C) = 0;
}

}
