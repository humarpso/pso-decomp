#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Buf12_80207718_80207644 { s32 a, b, c; };

void TLobby__sub_80207644(void);
s32 get_player_floor__6TLobbyFi(s32 idx);
void reset_story_select_state__6TLobbyFv(void);
void sync_story_select__6TLobbyFv(void);
s32 TLobby__sub_802077CC(s32, struct Buf12_80207718_80207644 *);
M2C_UNK set_state__16TAdStorySelectGCFi(void*);

    extern int lbl_805D362C;
    extern int lbl_805D6060;
void TLobby__sub_80207644(void) { lbl_805D6060 = lbl_805D362C; }

    extern int lbl_805D362C;
    extern int lbl_805D6060;
void sync_story_select__6TLobbyFv(void) { lbl_805D362C = lbl_805D6060; }

s32 get_player_floor__6TLobbyFi(s32 idx) {
    struct Buf12_80207718_80207644 buf;

    if (TLobby__sub_802077CC(idx, &buf) == 1) {
        return buf.a;
    }
    return -1;
}

extern s32 lbl_805D3628;

void reset_story_select_state__6TLobbyFv(void) {
    if ((s32) lbl_805D3628 != -1) {
        set_state__16TAdStorySelectGCFi((void*)lbl_805D3628);
        lbl_805D3628 = -1;
    }
}

}
