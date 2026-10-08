#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028D738_lbl_80518850 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8028D738_lbl_80518860 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
extern RecoveredGlobal_8028D738_lbl_80518850 lbl_80518850;
extern RecoveredGlobal_8028D738_lbl_80518860 lbl_80518860;
extern u32 lbl_805D6518;
extern u32 lbl_805D651C;
s32 TLobby__sub_8028D738(s32 arg0);
extern u32 lbl_805D6518;
extern u32 lbl_805D651C;
void TLobby__sub_8028D7D0(s32 i);
}

extern "C" {

void alloc_download_server__6TLobbyFv(void);
void free_chr_select_singleton__6TLobbyFv(void);
void free_single_player_chr_select__6TLobbyFv(void);
int start_load_default__6TLobbyFPv(void* p);
int alloc_load_buffer__6TLobbyFii(void*, int);
u32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

int start_load_default__6TLobbyFPv(void* p) { return alloc_load_buffer__6TLobbyFii(p, 0); }

extern u32 lbl_805D6518;
extern u32 lbl_805D651C;

typedef char RecoveredGlobal_8028D738_lbl_80518850_size[sizeof(RecoveredGlobal_8028D738_lbl_80518850) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8028D738_lbl_80518860_size[sizeof(RecoveredGlobal_8028D738_lbl_80518860) == 0x20 ? 1 : -1];
s32 TLobby__sub_8028D738(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    if ((u32) lbl_805D6518 == 0U) {
        return 0;
    }
    TLobby__sub_8028D7D0((s32)(arg0));
    if (arg0 < 4) {
        temp_r3_2 = lbl_805D6518 + (arg0 * 0xA000);
        M2C_FIELD(&lbl_80518850.value, M2C_UNK *, (arg0 * 4)) = temp_r3_2;
        return temp_r3_2;
    }
    temp_r4 = arg0 - 4;
    temp_r3 = (*(s32 *)&lbl_805D651C) + (temp_r4 * 0xA000);
    M2C_FIELD(&lbl_80518860.value, M2C_UNK *, (temp_r4 * 4)) = temp_r3;
    return temp_r3;
}

void TLobby__sub_8028D7D0(s32 i) {
    s32 n = 4;
    if (lbl_805D6518 == 0) return;
    if (lbl_805D651C != 0) n = 12;
    if (i < 0) return;
    if (i >= n) return;
}

void free_single_player_chr_select__6TLobbyFv(void) {
    if (((u32) lbl_805D6518 != 0U) && ((u32) lbl_805D651C != 0U)) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)((void*)lbl_805D651C));
        lbl_805D651C = 0U;
    }
}

extern u32 lbl_805D6518;
extern u32 lbl_805D651C;

void alloc_download_server__6TLobbyFv(void) {
    if (((u32) lbl_805D6518 != 0U) && ((u32) lbl_805D651C == 0U)) {
        lbl_805D651C = alloc__22TQuestVmDownLoadServerFPv(0x50000);
        if ((u32) lbl_805D651C == 0U) {
            return;
        }
    }
}

extern u32 lbl_805D6518;

void free_chr_select_singleton__6TLobbyFv(void) {
    if ((u32) lbl_805D6518 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)((void*)lbl_805D6518));
        lbl_805D6518 = 0U;
    }
}

}
