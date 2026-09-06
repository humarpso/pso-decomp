#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TKeyBoardControl__sub_8000F9CC(void*);
    extern int lbl_805D6D44;
void open_keyboard__6TLobbyFv(void);
int set_mode_change_state__21TAdMultiChgGameModeGCFv(void);
extern int lbl_805D6D44;
void request_change_game_mode__6TLobbyFv(void);
int set_game_mode_state__21TAdMultiChgGameModeGCFv(void);
extern int lbl_805D6D44;
void enter_game_mode_change__6TLobbyFv(void);
int set_mode_0x15__21TAdMultiChgGameModeGCFv(void);
extern int lbl_805D6D44;
void enter_chg_game_mode__6TLobbyFv(void);
void TLobby__sub_8033633C(void);
M2C_UNK queue_destruction__7TObjectFv(void*);
void TLobby__sub_8033645C(void* p);
void TLobby__sub_8033645C(void* p);
M2C_UNK TCameraCtrl__sub_800694A8();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void*);
extern M2C_UNK lbl_804EEF64[];
extern u32 lbl_805D6D40;
void *destroy__6TLobbyFPvs(void *arg0, s16 arg1);
    extern int lbl_805D68C8;
void TAdMultiPlyChrSelectGC__sub_803367E8(void);
}

extern "C" {

int TLobby__sub_8033612C(void*);
void TLobby__sub_803361FC(void);
void destroy_download_server__6TLobbyFv(void* _w0);
void queue_destruction_and_cleanup__6TLobbyFv(void* _w0);
void set_flag_and_clear_download__6TLobbyFPv(void *arg0);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);

extern u32 lbl_805D6D40;

void queue_destruction_and_cleanup__6TLobbyFv(void* _w0) {
    queue_destruction__7TObjectFv((void*)(_w0));
    if ((u32) lbl_805D6D40 != 0U) {
        TLobby__sub_8033612C((void*)((void*)lbl_805D6D40));
    }
}

extern u32 lbl_805D6D40;

void destroy_download_server__6TLobbyFv(void* _w0) {
    queue_destruction__7TObjectFv((void*)(_w0));
    if ((u32) lbl_805D6D40 != 0U) {
        set_flag_and_clear_download__6TLobbyFPv((void *)((void*)lbl_805D6D40));
    }
}

int TLobby__sub_8033612C(void*) { return 0; }

void set_flag_and_clear_download__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x24));
    }
}

void TLobby__sub_803361FC(void) {  }
void open_keyboard__6TLobbyFv(void) { lbl_805D6D44 = 3; TKeyBoardControl__sub_8000F9CC((void*)19); }
void request_change_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 2; set_mode_change_state__21TAdMultiChgGameModeGCFv(); }
void enter_game_mode_change__6TLobbyFv(void) { lbl_805D6D44 = 1; set_game_mode_state__21TAdMultiChgGameModeGCFv(); }
void enter_chg_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 0; set_mode_0x15__21TAdMultiChgGameModeGCFv(); }
void TLobby__sub_8033633C(void) {  }
void TLobby__sub_8033645C(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { queue_destruction__7TObjectFv((void*)((void*)(*(void**)((char*)p + 0x2c)))); *(int*)((char*)p + 0x2c) = 0; } }
void *destroy__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EEF64;
        (*(s32 *)&lbl_805D6D40) = 0;
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
void TAdMultiPlyChrSelectGC__sub_803367E8(void) { lbl_805D68C8 = 0; }

}
