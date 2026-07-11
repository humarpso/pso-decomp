#include "types.h"

extern "C" {

void TLobby__sub_801A3C48(void);
void TLobby__sub_801A3C7C(void);
void TLobby__sub_801A3CB4(void);
void TLobby__sub_801A3CF8(void);
int TLobby__sub_8013998C(void);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F95C(void);
int TKeyBoardControl__sub_8000F9CC(int);
int fn_801A3B84(void);
int fn_801A4C6C(void*);
int TKeyBoardControl__sub_801A57C4(void);
int TKeyBoardControl__sub_801A66B8(void);
int TAdSinglePlyChrSelectGC__sub_801FF464(void);
int free_objects__6TLobbyFv(void);

    extern unsigned char lbl_80515BA0[];
    extern int TLobby__data_805D5CEC;
void TLobby__sub_801A3C48(void) { TLobby__data_805D5CEC = (TLobby__data_805D5CEC | 0x1); fn_801A4C6C(lbl_80515BA0); }

void TLobby__sub_801A3C7C(void) { TKeyBoardControl__sub_801A57C4(); TLobby__sub_8013998C(); TAdSinglePlyChrSelectGC__sub_801FF464(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void TLobby__sub_801A3CB4(void) { TKeyBoardControl__sub_801A66B8(); TLobby__sub_8013998C(); free_objects__6TLobbyFv(); TKeyBoardControl__sub_8000F95C(); fn_801A3B84(); TAdSinglePlyChrSelectGC__sub_801FF464(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void TLobby__sub_801A3CF8(void) {  }

}
