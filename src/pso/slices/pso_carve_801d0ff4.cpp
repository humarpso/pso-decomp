#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int fn_801C01BC(void*);
int fn_801C0228(void*);
int TLobby__sub_801E4570(void*);
int TLobby__sub_801E45D0(void*);
int fn_801D0FF4(void* p);
int fn_801D1018(void* p);
void fn_801D1024(void* p, s32 v);
void fn_801D102C(void* p, s32 v);
s32 fn_801D1034(void* p);
s16 fn_801D103C(void* p);
void fn_801D1044(void* p, s16 v);
void fn_801D104C(void* p);
void fn_801D1090(void* p);
int fn_801D11EC(void* p);
int fn_801D11F8(void* p);
void fn_801D12D8(void* p);
void fn_801D12E8(void* p);
int fn_801D1360(void* p);
void fn_801D1440(void* p);
void fn_801D1480(void* p);
int fn_801BF4B8(void*);

int fn_801D0FF4(void* p) { return fn_801BF4B8((char*)p + 0x340); }
int fn_801D1018(void* p) { return (*(u32*)((char*)p + 0x890) >> 4) & 0x1; }
void fn_801D1024(void* p, s32 v) { *(s32*)((char*)p + 0x10) = v; }
void fn_801D102C(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
s32 fn_801D1034(void* p) { return *(s32*)((char*)p + 0xc); }
s16 fn_801D103C(void* p) { return *(s16*)((char*)p + 0x0); }
void fn_801D1044(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void fn_801D104C(void* p) { *(s16*)((char*)p + 0x6) = 8; }
int fn_801D1058(void) { return 0; }
int fn_801D1078(void) { return 0; }
void fn_801D1090(void* p) { *(s16*)((char*)p + 0x8) = 8; }
int fn_801D109C(void) { return 0; }
int fn_801D10BC(void) { return 0; }
void fn_801D10D4(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); }
int fn_801D1108(void) { return 0; }
int fn_801D1144(void) { return 0; }
void fn_801D1160(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); }
int fn_801D1194(void) { return 0; }
int fn_801D11D0(void) { return 0; }
int fn_801D11EC(void* p) { return *(u16*)((char*)p + 0x6) & 0x1; }
int fn_801D11F8(void* p) { return (*(u16*)((char*)p + 0x6) >> 1) & 0x1; }
void fn_801D1204(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
int fn_801D1240(void) { return 0; }
int fn_801D1284(void) { return 0; }
void fn_801D12A4(void* p) { fn_801D1204(p); TLobby__sub_801E4570(p); }
void fn_801D12D8(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }
void fn_801D12E8(void* p) { *(u16*)((char*)p + 0x6) |= 0x2; }
void fn_801D12F8(void* p) { fn_801D1160(p); TLobby__sub_801E4570(p); }
void fn_801D132C(void* p) { fn_801D10D4(p); TLobby__sub_801E4570(p); }
int fn_801D1360(void* p) { return *(u16*)((char*)p + 0x6) & 0x1; }
void fn_801D136C(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
int fn_801D13A8(void) { return 0; }
int fn_801D13EC(void) { return 0; }
void fn_801D140C(void* p) { fn_801D136C(p); TLobby__sub_801E45D0(p); }
void fn_801D1440(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }
void* fn_801D1450(void* p) { fn_801C0228(p); return p; }
void fn_801D1480(void* p) { *(u8*)((char*)p + 0x0) = 87; *(u8*)((char*)p + 0x1) = 1; }
void fn_801D1494(void* p) { fn_801C01BC(p); TLobby__sub_801E4570(p); }
void fn_801D14C8(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); }
int fn_801D1514(void) { return 0; }

}
