#include "types.h"
struct Entry_802C3A50 {
    u8 a;
    u8 b;
    u8 pad[2];
    s32 c;
    u8 item[0x14];
};

extern "C" {
void copy_item_data__6TLobbyFPvPv(void *, void *);
void fn_802C3A50(s32 n, struct Entry_802C3A50 *src, struct Entry_802C3A50 *dst);
}

extern "C" {

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
