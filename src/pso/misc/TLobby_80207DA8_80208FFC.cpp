#include "types.h"

extern "C" {

void free_heap__6TLobbyFv(void);
int get_destroy_event_obj__6TLobbyFv(void);
int get_team_state__6TLobbyFPv(void* p);
int TLobby__sub_80208E30(void*);
int __dt__5THeapFv(void*, void*);

int get_team_state__6TLobbyFPv(void* p) { return TLobby__sub_80208E30(p); }

    extern int lbl_805D6094;
void free_heap__6TLobbyFv(void) { __dt__5THeapFv((void*)(lbl_805D6094), (void*)1); lbl_805D6094 = 0; }

    extern int lbl_805D6090;
int get_destroy_event_obj__6TLobbyFv(void) {  return lbl_805D6090; }

}
