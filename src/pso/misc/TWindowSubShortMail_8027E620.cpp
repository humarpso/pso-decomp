#include "types.h"

extern "C" {

void TWindowSubShortMail__sub_8027E620(void* p);
int TLobby__sub_802421C4(void*);
int fn_8007A8F8(void);
int fn_80266E0C(void*);

void TWindowSubShortMail__sub_8027E620(void* p) { fn_80266E0C(*(void**)((char*)p + 0x38)); fn_8007A8F8(); TLobby__sub_802421C4(*(void**)((char*)p + 0x2c)); }

}
