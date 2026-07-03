#include "types.h"

extern "C" {

int fn_80157CF4(void*);
void* fn_8017CAC8(void* p);
int bswap_16__FPUs(void*);
int fn_80156B38(void*);
int TLobby__send_and_handle_60(void*);
void TOVS2Wall01__vt23(void);
void fn_8017CA48(void* p, s32 v);
s32 fn_8017CA50(void* p);

void fn_8017CA48(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 fn_8017CA50(void* p) { return *(s32*)((char*)p + 0x33c); }
void fn_8017CA58(void* p) { fn_80156B38(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); }
void fn_8017CA94(void* p) { fn_8017CA58(p); TLobby__send_and_handle_60(p); }
void* fn_8017CAC8(void* p) { fn_80157CF4(p); *(short*)((char*)p + 0xc) = 0; *(short*)((char*)p + 0xe) = 0; *(unsigned char*)(p) = 134; *(unsigned char*)((char*)p + 0x1) = 4; return p; }

}
