#include "types.h"

extern "C" {

int forward_npc_player__6TLobbyFPv(void* p);
void TLobby__sub_801EF580(void);
void clear_quest_vm__6TLobbyFv(void);
int fn_80197E64(void);
int TLobby__sub_80197F74(void);
int clear_quest_vm_flag__6TLobbyFv(void);
int free_luker_object__6TLobbyFv(void);
int TNpcPlayer__sub_8034E02C(void*);

int forward_npc_player__6TLobbyFPv(void* p) { return TNpcPlayer__sub_8034E02C(p); }
void TLobby__sub_801EF580(void) { free_luker_object__6TLobbyFv(); TLobby__sub_80197F74(); clear_quest_vm_flag__6TLobbyFv(); }
void clear_quest_vm__6TLobbyFv(void) { free_luker_object__6TLobbyFv(); fn_80197E64(); clear_quest_vm_flag__6TLobbyFv(); }

}
