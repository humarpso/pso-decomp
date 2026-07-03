#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int fn_80156B38(void*);
int fn_80156BA8(void*);
int TLobby__send_and_handle_60(void*);
void TOAttackableCol__vt23(void);
void fn_80157C20(void* p, s32 v);
s32 fn_80157C28(void* p);
void TOBarrierEnergy01__vt18(void);

void fn_80157C20(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 fn_80157C28(void* p) { return *(s32*)((char*)p + 0x33c); }
void fn_80157C30(void* p) { fn_80156B38(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap_16__FPUs((char*)p + 0x10); }
void fn_80157C74(void* p) { fn_80157C30(p); TLobby__send_and_handle_60(p); }
int fn_80157CA8(void) { return 0; }
void* fn_80157CF4(void* p) { fn_80156BA8(p); return p; }

}
