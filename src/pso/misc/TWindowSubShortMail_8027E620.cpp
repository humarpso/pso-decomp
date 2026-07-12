#include "types.h"

extern "C" {

void TWindowSubShortMail__sub_8027E620(void* p);
int TLobby__sub_802421C4(void*);
int TWindowSubComCard__sub_8007A8F8(void);
int select_cursor_entry__6TLobbyFPv(void*);

void TWindowSubShortMail__sub_8027E620(void* p) { select_cursor_entry__6TLobbyFPv(*(void**)((char*)p + 0x38)); TWindowSubComCard__sub_8007A8F8(); TLobby__sub_802421C4(*(void**)((char*)p + 0x2c)); }

}
