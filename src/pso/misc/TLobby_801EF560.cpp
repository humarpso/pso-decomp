#include "types.h"

extern "C" {

int TLobby__sub_801EF560(void* p);
void TLobby__sub_801EF580(void);
void TLobby__sub_801EF5A8(void);
int fn_80197E64(void);
int fn_80197F74(void);
int clear_quest_vm_flag__6TLobbyFv(void);
int TLobby__sub_801F32A0(void);
int TNpcPlayer__sub_8034E02C(void*);

int TLobby__sub_801EF560(void* p) { return TNpcPlayer__sub_8034E02C(p); }
void TLobby__sub_801EF580(void) { TLobby__sub_801F32A0(); fn_80197F74(); clear_quest_vm_flag__6TLobbyFv(); }
void TLobby__sub_801EF5A8(void) { TLobby__sub_801F32A0(); fn_80197E64(); clear_quest_vm_flag__6TLobbyFv(); }

}
