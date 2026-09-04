#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_download_server__6TLobbyFv(void);
void free_chr_select_singleton__6TLobbyFv(void);
void free_single_player_chr_select__6TLobbyFv(void);
int start_load_default__6TLobbyFPv(void* p);
int TLobby__sub_8028D628(void*, int);
u32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

int start_load_default__6TLobbyFPv(void* p) { return TLobby__sub_8028D628(p, 0); }

extern u32 lbl_805D6518;
extern u32 lbl_805D651C;

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
