#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
int TLobby__sub_801E44D8(void*, void*);
int fn_802D237C(void*);
void fn_802D3970(void);
int fn_802D399C(void* p);
int fn_802D39BC(void* p);
int fn_802D39DC(void* p);
int fn_802D39FC(void* p);
void build_6xA6_modify_trade_proposal(void* p);
int TLobby__sub_802D245C(void);
int fn_802D2518(void);
int fn_802D37C8(void);
int fn_802D3820(void);
int fn_802D388C(void*);
int fn_802D38B4(void*);

void fn_802D3970(void) { fn_802D3820(); fn_802D37C8(); fn_802D2518(); TLobby__sub_802D245C(); }
int fn_802D399C(void* p) { return fn_802D388C(p); }
int fn_802D39BC(void* p) { return fn_802D388C(p); }
int fn_802D39DC(void* p) { return fn_802D38B4(p); }
int fn_802D39FC(void* p) { return fn_802D38B4(p); }
void fn_802D3A1C(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void fn_802D3A58(void* p, void* a1) { fn_802D237C(p); TLobby__sub_801E44D8(p, a1); }
void build_6xA6_modify_trade_proposal(void* p) { *(u8*)((char*)p + 0x0) = 166; *(u8*)((char*)p + 0x1) = 4; }

}
