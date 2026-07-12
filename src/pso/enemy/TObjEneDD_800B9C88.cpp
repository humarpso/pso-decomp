#include "types.h"

extern "C" {

s32 get_main_phase();
int query_teammate_state__9TObjEneDDFPv(void* p);
int update_lobby_state__9TObjEneDDFPv(void* p);
int TLobby__sub_800C6C10(void*);
int is_any_teammate_in_state__10TObjPlayerFv(void*);

int query_teammate_state__9TObjEneDDFPv(void* p) { return is_any_teammate_in_state__10TObjPlayerFv(p); }
int update_lobby_state__9TObjEneDDFPv(void* p) { return TLobby__sub_800C6C10(p); }
u8 is_phase_e__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xE);
}
u8 is_main_phase_15__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xF);
}

}
