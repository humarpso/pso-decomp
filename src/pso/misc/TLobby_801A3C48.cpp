#include "types.h"

extern "C" {

void set_flag_and_update__6TLobbyFv(void);
void init_chr_select__6TLobbyFv(void);
void reset_to_chr_select__6TLobbyFv(void);
void TLobby__sub_801A3CF8(void);
int TLobby__sub_8013998C(void);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F95C(void);
int TKeyBoardControl__sub_8000F9CC(int);
int clear_counter__6TLobbyFv(void);
int TLobby__sub_801A4C6C(void*);
int reset__16TKeyBoardControlFv(void);
int TKeyBoardControl__sub_801A66B8(void);
int init__23TAdSinglePlyChrSelectGCFv(void);
int free_objects__6TLobbyFv(void);

    extern unsigned char lbl_80515BA0[];
    extern int TLobby__data_805D5CEC;
void set_flag_and_update__6TLobbyFv(void) { TLobby__data_805D5CEC = (TLobby__data_805D5CEC | 0x1); TLobby__sub_801A4C6C(lbl_80515BA0); }

void init_chr_select__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); TLobby__sub_8013998C(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void reset_to_chr_select__6TLobbyFv(void) { TKeyBoardControl__sub_801A66B8(); TLobby__sub_8013998C(); free_objects__6TLobbyFv(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void TLobby__sub_801A3CF8(void) {  }

}
