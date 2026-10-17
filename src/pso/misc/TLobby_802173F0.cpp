#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TRaderMapCore.h"

extern u32 story_quest_list_resource;

extern "C" {

void TLobby::free_global() {
    if ((u32) story_quest_list_resource != 0U) {
        TLobby::free_nodes_with_id((u32)((void*)story_quest_list_resource));
        story_quest_list_resource = 0U;
    }
}
void TLobby::clear_flag_if_not_split_screen() {
    if (TRaderMapCore::is_not_split_screen() != 1) {
        (*(s32 *)&story_quest_list_resource) = 0;
    }
}

}
