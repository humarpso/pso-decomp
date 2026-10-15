#include "types.h"

extern "C" {
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u32 story_quest_list_resource;
void clear_flag_if_not_split_screen__6TLobbyFv(void);
}

extern "C" {

void free_global__6TLobbyFv(void);
void free_nodes_with_id__6TLobbyFUi(void*);

extern u32 story_quest_list_resource;

void free_global__6TLobbyFv(void) {
    if ((u32) story_quest_list_resource != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)story_quest_list_resource);
        story_quest_list_resource = 0U;
    }
}
void clear_flag_if_not_split_screen__6TLobbyFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
        (*(s32 *)&story_quest_list_resource) = 0;
    }
}

}
