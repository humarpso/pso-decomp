#include "types.h"

extern "C" {
int TAdPlayerLoadGC__sub_801E263C(void*, void*, void*, void*);
extern int player_data_load_buffer;
void load_player_data__6TLobbyFv(void);
void xfree__FPv(void*);
extern int player_data_load_buffer;
void TLobby__sub_802433A8(void);
}

extern "C" {

int get_global_63e0__6TLobbyFv(void);

    extern int player_data_load_buffer;
int get_global_63e0__6TLobbyFv(void) {  return player_data_load_buffer; }
void load_player_data__6TLobbyFv(void) { TAdPlayerLoadGC__sub_801E263C((void*)0, (void*)0, (void*)(player_data_load_buffer), (void*)0); }
void TLobby__sub_802433A8(void) {
    if ((u32) (*(u32 *)&player_data_load_buffer) != 0U) {
        xfree__FPv((void*)(*(u32 *)&player_data_load_buffer));
        (*(u32 *)&player_data_load_buffer) = 0U;
    }
}

}
