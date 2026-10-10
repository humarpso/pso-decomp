#include "types.h"
#include "pso/packet_classes.h"
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
extern "C" { void *TPlyGuildCardTag__sub_801E0314(void *arg0, void *arg1); }
template <typename T, int num_entries, int num_pad_entries> class TMenuList;
class LobbyListEntry;
template <> class TMenuList<LobbyListEntry, 16, 0> {
public:
    TMenuList(const TMenuList &o);
    packet_header header;
    u8 entries[16 * sizeof(LobbyListEntry)];
};

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TPlyGuildCardTag__sub_801E0314(void *arg0, void *arg1);
void bswap_lobby_entry__16TPlyGuildCardTagFPv(void* p);
M2C_UNK __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();
int bswap_32__FPUl(void*);
int bswap__16TPlyGuildCardTagFv(void*);

void bswap_lobby_entry__16TPlyGuildCardTagFPv(void* p) { bswap__16TPlyGuildCardTagFv(p); bswap_32__FPUl((char*)p + 0x8); }

}

TMenuList<LobbyListEntry, 16, 0>::TMenuList(const TMenuList &o) {
    u8 *end;
    u8 *d = entries;
    const u8 *s = o.entries;
    end = entries + 16 * 0xC;
    *(u32 *)&header = *(const u32 *)&o.header;
    do {
        TPlyGuildCardTag__sub_801E0314(d, (void *)s);
        d += 0xC;
        s += 0xC;
    } while (d < end);
}

extern "C" {

void *TPlyGuildCardTag__sub_801E0314(void *arg0, void *arg1) {
    __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

}
