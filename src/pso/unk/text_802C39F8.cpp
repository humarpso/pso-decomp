#include "types.h"
struct Entry_802C3A50 {
    u8 a;
    u8 b;
    u8 pad[2];
    s32 c;
    u8 item[0x14];
};

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct E_802C39F8 { u8 b[0x1C]; };

extern "C" {
void copy_item_data__6TLobbyFPvPv(void *, void *);
void fn_802C3A50(s32 n, struct Entry_802C3A50 *src, struct Entry_802C3A50 *dst);
M2C_UNK fn_801C1BA8(void *, void *);
void fn_802C39F8(s32 arg0, E_802C39F8 *arg1, E_802C39F8 *arg2);
}

extern "C" {

void fn_802C39F8(s32 arg0, E_802C39F8 *arg1, E_802C39F8 *arg2) {
    s32 i;
    for (i = 0; i < arg0; i++) {
        fn_801C1BA8(arg2++, arg1++);
    }
}

void fn_802C3A50(s32 n, struct Entry_802C3A50 *src, struct Entry_802C3A50 *dst) {
    s32 i;
    for (i = 0; i < n; i++) {
        dst->a = src->a;
        dst->b = src->b;
        dst->c = src->c;
        copy_item_data__6TLobbyFPvPv(dst->item, src->item);
        dst++;
        src++;
    }
}

}
