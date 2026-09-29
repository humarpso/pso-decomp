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

struct S_802094AC { s32 a; s32 *arr; s32 f8; s32 count; };

extern "C" {
extern RecoveredGlobal_802093EC_lbl_805139F8 lbl_805139F8;
s32 TLobby__sub_802093EC(s32 arg0);
s32 TLobby__sub_80209410(Obj_80209410 *s);
void TLobby__sub_80209440(void *);
void TLobby__sub_802094AC(S_802094AC *arg0, s32 arg1);
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
void TLobby__sub_802094AC(S_802094AC *arg0, s32 arg1) {
    s32 off;
    s32 i = 0;
    arg0->f8 = off = 0;
    arg0->count = arg1;
    while (i < arg0->count) {
        *(s32 *)((u8 *)arg0->arr + off) = i;
        i++;
        off += 4;
    }
    TLobby__sub_80209440(arg0);
    TLobby__sub_80209440(arg0);
    TLobby__sub_80209440(arg0);
    TLobby__sub_80209440(arg0);
}

}
