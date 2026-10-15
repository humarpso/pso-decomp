#include "types.h"

extern "C" {

    extern int quest_active_flag;
void clear_counter__6TLobbyFv(void) { quest_active_flag = 0; }

    extern int camera_split_screen_selector;
void TLobby__sub_801A3B90(int a0) { camera_split_screen_selector = a0; }

    extern int camera_split_screen_selector;
void TLobby__sub_801A3B98(void) { camera_split_screen_selector = 1; }

    extern int lobby_online_ready_flag;
void clear_quest_state__6TLobbyFv(void) { lobby_online_ready_flag = 0; }

    extern int scene_resource_index;
void set_scene__6TSceneFi(int a0) { scene_resource_index = a0; }

}
