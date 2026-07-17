#include "types.h"

extern "C" {

int TFontSmallLobby__sub_80152F28(void* a0 = 0);
void* fn_80152EF8(void* p);
int bswap_16__FPUs(void*);
void set_field2__10TNpcPlayerFPvs(void* p, s16 v);
void set_field_0__10TNpcPlayerFPvs(void* p, s16 v);
void set_state__10TNpcPlayerFPvi(void* p, s32 v);
void set_state__10TNpcPlayerFPvs(void* p, s16 v);
void set_type__10TNpcPlayerFPvs(void* p, s16 v);

void set_field2__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void set_field_0__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void set_state__10TNpcPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void byteswap_pos__10TNpcPlayerFPv(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); }
void set_state__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void set_type__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

}
