#include "types.h"

extern "C" {

int TObjEneEpsilonGuard__sub_8035F950(void* p);
int TObjEneEpsilonGuard__sub_8035F95C(void* p);
int TObjEneEpsilonGuard__sub_8035F968(void);

int TObjEneEpsilonGuard__sub_8035F950(void* p) { return (*(u32*)((char*)p + 0x438) >> 11) & 0x1; }
int TObjEneEpsilonGuard__sub_8035F95C(void* p) { return (*(u32*)((char*)p + 0x438) >> 5) & 0x1; }
int TObjEneEpsilonGuard__sub_8035F968(void) { return 0; }

}
