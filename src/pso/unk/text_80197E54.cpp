#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stat_80197E64 { u8 pad0[4]; u16 blocks; u8 pad6[0xE]; };

struct Hdr_80197E64 { u8 pad0[0x58]; s32 f58; s32 f5C; u8 pad60[0xC]; };

extern "C" {
extern s32 TObjSinBoard__texture_buffer;
bool is_signboard_texture_buffer_missing(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
void run_frame__6TLobbyFv(void);
bool is_signboard_texture_buffer_missing(void);
void fn_80197FD0(s32, s32);
s32 TAdPlayerLoadGC__sub_801E1538(Hdr_80197E64 *, void *);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 get_card_file_info__15TAdPlayerLoadGCFiPvPv(s32, s32, Stat_80197E64 *);
s32 get_global_state__14TOKeyMachine01Fv(void);
void load_player_slot__23TAdSinglePlyChrSelectGCFPvii(s32, s32, void *);
s32 fn_802432F0(s32);
void memset(void *, int, int);
extern s32 memcard_file_099_name;
void load_memcard_file(void);
}

extern "C" {

bool is_signboard_texture_buffer_missing(void) {
    return TObjSinBoard__texture_buffer == 0;
}
void load_memcard_file(void) {
    Stat_80197E64 stat;
    Hdr_80197E64 hdr;
    s32 slot;
    void *buf;
    s32 r;
    if (get_global_state__14TOKeyMachine01Fv() != 0 && get_global_state__14TOKeyMachine01Fv() != 0x12) {
        return;
    }
    if (((s32 (*)(void))is_signboard_texture_buffer_missing)() == 0) {
        return;
    }
    while (1) {
        slot = fn_802432F0(memcard_file_099_name);
        if (slot != -2) {
            break;
        }
        run_frame__6TLobbyFv();
    }
    if (slot == -1) {
        return;
    }
    do {
        r = get_card_file_info__15TAdPlayerLoadGCFiPvPv(slot, memcard_file_099_name, &stat);
    } while ((u32)r == 0xFFFFFFFF);
    if (r != 0) {
        return;
    }
    buf = alloc__22TQuestVmDownLoadServerFPv(stat.blocks << 13);
    if (buf == 0) {
        return;
    }
    memset(buf, 0, stat.blocks << 13);
    load_player_slot__23TAdSinglePlyChrSelectGCFPvii(slot, memcard_file_099_name, buf);
    while (TAdPlayerLoadGC__sub_801E1B50(slot) != 0) {
        run_frame__6TLobbyFv();
    }
    if (TAdPlayerLoadGC__sub_801E1538(&hdr, buf) != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        return;
    }
    fn_80197FD0(hdr.f58, hdr.f5C);
    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
}

}
