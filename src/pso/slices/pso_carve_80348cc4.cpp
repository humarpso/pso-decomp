#include "types.h"

extern "C" {

int TLobby__sub_801E4570(void*);
int TWindowDD__sub_80348C54(void*);
void TWindowDD__sub_80348CF8(void* p);
void TWindowDD__sub_80348D74(void* p);
void TWindowDD__sub_80348D80(void* p, s32 v);
s32 TWindowDD__sub_80348D88(void* p);

void TWindowDD__sub_80348CC4(void* p) { TWindowDD__sub_80348C54(p); TLobby__sub_801E4570(p); }
void TWindowDD__sub_80348CF8(void* p) { *(u8*)((char*)p + 0x0) = 116; *(u8*)((char*)p + 0x1) = 8; }
int TWindowDD__sub_80348D0C(void) { return 0; }
void TWindowDD__sub_80348D74(void* p) { *(s32*)((char*)p + 0x14) = 0; }
void TWindowDD__sub_80348D80(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }
s32 TWindowDD__sub_80348D88(void* p) { return *(s32*)((char*)p + 0x14); }
int TWindowDD__sub_80348D90(void) { return 0; }
int TWindowDD__sub_80348DAC(void) { return 0; }
int TWindowDD__sub_80348DD8(void) { return 0; }
int TWindowDD__sub_80348DFC(void) { return 0; }

}
