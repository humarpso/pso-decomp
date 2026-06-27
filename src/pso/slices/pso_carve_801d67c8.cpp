#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int fn_8001960C(void*);
int fn_801C01BC(void*);
int fn_801C0228(void*);
int fn_801D6644(void*);
int TLobby__sub_801E4570(void*);
void fn_801D67C8(void* p);
void fn_801D6834(void* p);
void fn_801D687C(void* p);
void fn_801D68C4(void* p);

void fn_801D67C8(void* p) { *(s16*)((char*)p + 0x2) = 6; }
void* fn_801D67D4(void* p) { fn_801D6644(p); return p; }
void* fn_801D6804(void* p) { fn_801C0228(p); return p; }
void fn_801D6834(void* p) { *(u8*)((char*)p + 0x0) = 59; *(u8*)((char*)p + 0x1) = 1; }
void fn_801D6848(void* p) { fn_801C01BC(p); TLobby__sub_801E4570(p); }
void fn_801D687C(void* p) { *(u8*)((char*)p + 0x0) = 58; *(u8*)((char*)p + 0x1) = 1; }
void fn_801D6890(void* p) { fn_801C01BC(p); TLobby__sub_801E4570(p); }
void fn_801D68C4(void* p) { *(u8*)((char*)p + 0x0) = 57; *(u8*)((char*)p + 0x1) = 1; }
void fn_801D68D8(void* p) { fn_801C01BC(p); TLobby__sub_801E4570(p); }
void fn_801D690C(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
int fn_801D6948(void) { return 0; }
int fn_801D698C(void) { return 0; }
void fn_801D69B4(void* p) { fn_801D690C(p); TLobby__sub_801E4570(p); }
void* fn_801D69E8(void* p) { fn_801C0228(p); return p; }
int fn_801D6A18(void) { return 0; }

}
