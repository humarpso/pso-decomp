#include "types.h"

extern "C" {

int TLobby__sub_80207F30(void);
void update_current_floor__6TLobbyFv(void);
void update_key_machine__6TLobbyFv(void);
int TLobby__sub_80207F10(void* p);
int TLobby__sub_80207F80(void);
int TLobby__sub_80208020(void);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
int get_global_state__14TOKeyMachine01Fv(void);
int reset_story_select__6TLobbyFPv(void* p);
int reset_story_select__6TLobbyFv(void*);

int TLobby__sub_80207F30(void) { return 0; }

void update_current_floor__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_80207F80(); }

void update_key_machine__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_80208020(); }

}
