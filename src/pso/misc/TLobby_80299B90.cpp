#include "types.h"

extern "C" {

void update_subsystems__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
int TLobby__sub_80227F7C(void);
int TLobby__sub_800F7B84(void);
int fn_802F105C(void);

void update_subsystems__6TLobbyFv(void) { TLobby__sub_80227F7C(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_802F105C(); TLobby__sub_800F7B84(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
