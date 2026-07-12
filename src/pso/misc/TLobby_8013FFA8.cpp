#include "types.h"

extern "C" {

void TLobby__sub_8013FFBC(void);
int TLobby__sub_8007BA20(void);
int fn_800F7B84(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int TLobby__sub_80227F7C(void);

void TLobby__sub_8013FFA8(void* a0, int a1, int a2, int a3) { *(int*)((char*)a0 + 0x7220) = a1; *(int*)((char*)a0 + 0x7224) = a3; *(int*)((char*)a0 + 0x7228) = (a1 + a2); }
void TLobby__sub_8013FFBC(void) { TLobby__sub_80227F7C(); TLobby__sub_8022743C(); fn_800F7B84(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
