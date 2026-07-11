#include "types.h"

extern "C" {

void fn_8002AEF4(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
void fn_8002AF4C(void* p);
void fn_8002AF90(void* p);
void fn_8002AEC0(void* p);
int TLobby__send_and_handle_60(void*);
f32 fn_8002ADE4(void);
f64 fn_803A24E4();
int TObjEneMe3ShinowaReal__sub_8002ADD8(void* p);
int fn_8002AE38(void* p);
void fn_8002AE5C(void* p, f32 v);
void fn_8002AE74(void* p, s16 v);
void fn_8002AE7C(void* p, s32 v);
void fn_8002AE84(void* p, s32 v);
void fn_8002AE8C(void* p);
void fn_8002AEAC(void* p);
void fn_8002AEB8(void* p, s32 v);
void fn_8002AF38(void* p);
int fn_801A529C(void*, int);

f32 fn_8002ADE4(void) {
    return (f32) fn_803A24E4();
}
int fn_8002AE08(void) { return 0; }
int fn_8002AE38(void* p) { return fn_801A529C(p, 2); }
void fn_8002AE5C(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }
int fn_8002AE64(void) { return 0; }
void fn_8002AE74(void* p, s16 v) { *(s16*)((char*)p + 0xb8) = v; }
void fn_8002AE7C(void* p, s32 v) { *(s32*)((char*)p + 0xdc) = v; }
void fn_8002AE84(void* p, s32 v) { *(s32*)((char*)p + 0xd8) = v; }
void fn_8002AE8C(void* p) { fn_8002AEAC(p); }
void fn_8002AEAC(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void fn_8002AEB8(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void fn_8002AEC0(void* p) { fn_8002AEF4(p); TLobby__send_and_handle_60(p); }
void fn_8002AEF4(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void fn_8002AF38(void* p) { *(u8*)((char*)p + 0x0) = 18; *(u8*)((char*)p + 0x1) = 5; }
void fn_8002AF4C(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void fn_8002AF90(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }

}
