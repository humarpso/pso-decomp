#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801BFFA0(void* p);
s16 TObjPlayer__sub_801C0004(void* p);
int TObjPlayer__sub_801C000C(void);
int TObjPlayer__sub_801C0014(void);
int TObjPlayer__sub_801C001C(void);
int sub_802a7290_fwd__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801C0044(void* p);
int get_valid_child__6TLobbyFPv(void*);
int validate_handle__6TLobbyFPv(void*);

s16 TObjPlayer__sub_801C0004(void* p) { return *(s16*)((char*)p + 0xb8); }
int TObjPlayer__sub_801C000C(void) { return 0; }
int TObjPlayer__sub_801C0014(void) { return 0; }
int TObjPlayer__sub_801C001C(void) { return 0; }
int sub_802a7290_fwd__10TObjPlayerFPv(void* p) { return get_valid_child__6TLobbyFPv(p); }
int TObjPlayer__sub_801C0044(void* p) { return validate_handle__6TLobbyFPv(p); }

}
