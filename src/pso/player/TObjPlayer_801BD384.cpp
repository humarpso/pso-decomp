#include "types.h"

extern "C" {

void TObjPlayer__sub_801BD3A4(void);
void TObjPlayer__sub_801BD3A8(void* p);
void TObjPlayer__sub_801BD3DC(void* p);
void TObjPlayer__sub_801BD384(void* p);
int fn_8007206C(void*);
int TObjWaitEntryHairMoveSim__sub_800FE73C(void*);
int TCharaMaking__sub_8028DEA0(void*);
int TCharaMaking__sub_8028DF40(void*);
int fn_8036DC80(void*);

void TObjPlayer__sub_801BD384(void* p) { TObjPlayer__sub_801BD3DC(p); }
void TObjPlayer__sub_801BD3A4(void) {  }
void TObjPlayer__sub_801BD3A8(void* p) { fn_8036DC80(p); TCharaMaking__sub_8028DEA0(p); }
void TObjPlayer__sub_801BD3DC(void* p) { fn_8007206C((char*)p + 0x85c); *(int*)((char*)p + 0xcfc) = 255; TCharaMaking__sub_8028DF40(p); TObjWaitEntryHairMoveSim__sub_800FE73C(p); }

}
