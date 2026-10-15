#include "types.h"

extern "C" {

void start_character_load_task__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
s32 TLobby__sub_8001EEF4();
u32 TLobby__sub_8002058C(u32, s32, void *, void *, s32, s32, s32);
s32 start_load_default__6TLobbyFPv(s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(void *);

void start_character_load_task__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    u32 var_r31;

    if ((TLobby__sub_8001EEF4() != 0) && (try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(arg0) != 0)) {
        var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (var_r31 != 0U) {
            var_r31 = TLobby__sub_8002058C(var_r31, 6, arg0 + 0x60, arg0 + 0x64, 0, 0, start_load_default__6TLobbyFPv(*(s32 *)((s8 *)arg0 + 0x24)));
        }
        *(u32 *)((s8 *)arg0 + 0x68) = var_r31;
        if (var_r31 != 0U) {
            *(s32 *)((s8 *)arg0 + 0x74) = 0x12C;
            *(s32 *)((s8 *)arg0 + 0x2C) = 1;
        }
    }
}

}
