#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802093EC_lbl_805139F8 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct Obj_80209410 { s32 x; s32 *items; s32 idx; s32 count; };

extern "C" {
extern RecoveredGlobal_802093EC_lbl_805139F8 lbl_805139F8;
s32 TLobby__sub_802093EC(s32 arg0);
s32 TLobby__sub_80209410(Obj_80209410 *s);
}

extern "C" {

typedef char RecoveredGlobal_802093EC_lbl_805139F8_size[sizeof(RecoveredGlobal_802093EC_lbl_805139F8) == 0x48 ? 1 : -1];
s32 TLobby__sub_802093EC(s32 arg0) {
    if (arg0 < 0x12) {
        return M2C_FIELD(&lbl_805139F8.value, M2C_UNK *, (arg0 * 4));
    }
    return 0;
}
s32 TLobby__sub_80209410(Obj_80209410 *s) {
    if (s->count < s->idx) return 0;
    return s->items[s->idx++];
}

}
