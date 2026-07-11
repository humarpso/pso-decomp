#include "types.h"

extern "C" {

int TLobby__sub_8007B458(void*, void*);
int clear(void* p);
int memset(void*, int, int);

int fn_8007AF10(void) { return 0; }
int fn_8007AF60(void) { return 0; }
int fn_8007AFB8(void) { return 0; }
int fn_8007B010(void) { return 0; }
int fn_8007B070(void) { return 0; }
int fn_8007B0D0(void) { return 0; }
int fn_8007B1AC(void) { return 0; }
int fn_8007B230(void) { return 0; }
int fn_8007B26C(void) { return 0; }
int clear(void* p) { return memset(p, 0, 144); }
void fn_8007B2A4(void* p, void* a1) { clear(p); TLobby__sub_8007B458(p, a1); }
int fn_8007B2E0(void) { return 0; }

}
