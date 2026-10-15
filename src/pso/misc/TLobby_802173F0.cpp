#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u32 story_quest_list_resource;
}

extern "C" {

void free_nodes_with_id__6TLobbyFUl(void*);

extern u32 story_quest_list_resource;

void TLobby::free_global() {
    if ((u32) story_quest_list_resource != 0U) {
        free_nodes_with_id__6TLobbyFUl((void*)story_quest_list_resource);
        story_quest_list_resource = 0U;
    }
}
void TLobby::clear_flag_if_not_split_screen() {
    if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
        (*(s32 *)&story_quest_list_resource) = 0;
    }
}

}
