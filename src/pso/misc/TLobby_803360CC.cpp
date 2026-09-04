#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiPlyChrSelectGC__sub_803367E8(void);
void TLobby__sub_8033633C(void);
void TLobby__sub_8033645C(void* p);
void *destroy__6TLobbyFPvs(void *arg0, s16 arg1);
void enter_chg_game_mode__6TLobbyFv(void);
void enter_game_mode_change__6TLobbyFv(void);
void open_keyboard__6TLobbyFv(void);
void request_change_game_mode__6TLobbyFv(void);
M2C_UNK TCameraCtrl__sub_800694A8();
int TKeyBoardControl__sub_8000F9CC(void*);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
int queue_destruction__7TObjectFv(void*);
int set_game_mode_state__21TAdMultiChgGameModeGCFv(void);
int set_mode_0x15__21TAdMultiChgGameModeGCFv(void);
int set_mode_change_state__21TAdMultiChgGameModeGCFv(void);

    extern int lbl_805D6D44;
void open_keyboard__6TLobbyFv(void) { lbl_805D6D44 = 3; TKeyBoardControl__sub_8000F9CC((void*)19); }

    extern int lbl_805D6D44;
void request_change_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 2; set_mode_change_state__21TAdMultiChgGameModeGCFv(); }

    extern int lbl_805D6D44;
void enter_game_mode_change__6TLobbyFv(void) { lbl_805D6D44 = 1; set_game_mode_state__21TAdMultiChgGameModeGCFv(); }

    extern int lbl_805D6D44;
void enter_chg_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 0; set_mode_0x15__21TAdMultiChgGameModeGCFv(); }

void TLobby__sub_8033633C(void) {  }

void TLobby__sub_8033645C(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { queue_destruction__7TObjectFv((void*)(*(void**)((char*)p + 0x2c))); *(int*)((char*)p + 0x2c) = 0; } }

extern M2C_UNK lbl_804EEF64[];
extern s32 lbl_805D6D40;

void *destroy__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EEF64;
        lbl_805D6D40 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0x20)));
        }
        TLobby__sub_8033645C((void*)(arg0));
        TCameraCtrl__sub_800694A8();
        TLobby__sub_8022743C();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D68C8;
void TAdMultiPlyChrSelectGC__sub_803367E8(void) { lbl_805D68C8 = 0; }

}
