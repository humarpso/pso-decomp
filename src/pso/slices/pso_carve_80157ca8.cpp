#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int TLobby__sub_80156B38(void*);
int TLobby__sub_80156BA8(void*);
int TLobby__send_and_handle_60(void*);
void TOAttackableCol__vt23(void);
void TOAttackableCol__sub_80157C20(void* p, s32 v);
s32 TOAttackableCol__sub_80157C28(void* p);
void TOBarrierEnergy01__vt18(void);

int fn_80157CA8(void) { return 0; }
void* fn_80157CF4(void* p) { TLobby__sub_80156BA8(p); return p; }

}
