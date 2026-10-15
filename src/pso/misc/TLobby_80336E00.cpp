#include "types.h"

extern "C" {
    extern int lobby_global_flags;
void clear_lobby_global_flags(void);
extern int lobby_global_flags;
void set_global_flags__6TLobbyFi(s32 arg0);
void TLobby__sub_80336E64(void);
void TLobby__sub_80336E68(void);
}

extern "C" {

void TLobby__sub_80336E44(void);
void *construct__6TLobbyFPvPv(void *arg0, void *arg1);
void __ct__7TObjectFP7TObject(void *);

extern s32 lbl_804EEF80[];

void *construct__6TLobbyFPvPv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EEF80;
    *(void **)((s8 *)arg0 + 0x1C) = arg1;
    return arg0;
}

void TLobby__sub_80336E44(void) {  }
void clear_lobby_global_flags(void) { lobby_global_flags = 0; }
void set_global_flags__6TLobbyFi(s32 arg0) {
    (*(s32 *)&lobby_global_flags) |= arg0;
}
void TLobby__sub_80336E64(void) {  }
void TLobby__sub_80336E68(void) {  }

}
