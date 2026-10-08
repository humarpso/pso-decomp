#include "types.h"

extern "C" {

    extern int lbl_805D5ED8;
void clear_counter__6TLobbyFv(void) { lbl_805D5ED8 = 0; }

    extern int camera_split_screen_selector;
void TLobby__sub_801A3B90(int a0) { camera_split_screen_selector = a0; }

    extern int camera_split_screen_selector;
void TLobby__sub_801A3B98(void) { camera_split_screen_selector = 1; }

    extern int lbl_805D5FDC;
void clear_quest_state__6TLobbyFv(void) { lbl_805D5FDC = 0; }

    extern int lbl_805D5FC8;
void set_scene__6TSceneFi(int a0) { lbl_805D5FC8 = a0; }

}
