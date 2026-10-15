#include "types.h"

extern "C" {

void TLobby__sub_8020E3BC(void);
void TLobby__sub_8020E3C0(void);
int get_matching_object__6TLobbyFv(void);
int get_object_count__6TLobbyFv(void);
s32 Dolphin_ARAlloc(s32);

void TLobby__sub_8020E3BC(void) {  }

extern s32 lbl_805D612C;
extern s32 lbl_805D6130;

void TLobby__sub_8020E3C0(void) {
    lbl_805D6130 = 0x100000;
    lbl_805D612C = Dolphin_ARAlloc(0x100000);
}

    extern int TLobby__data_805D6114;
int get_matching_object__6TLobbyFv(void) {  return TLobby__data_805D6114; }

    extern int TLobby__data_805D610C;
int get_object_count__6TLobbyFv(void) {  return TLobby__data_805D610C; }

}
