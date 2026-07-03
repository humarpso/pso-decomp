#include "types.h"

extern "C" {

int TLobby__send_and_handle_60(void*);
int TWindowDD__sub_80348C54(void*);
void TWindowDD__sub_80348CF8(void* p);
void TWindowDD__sub_80348D74(void* p);
void TWindowDD__sub_80348D80(void* p, s32 v);
s32 TWindowDD__sub_80348D88(void* p);

void TWindowDD__sub_80348D74(void* p) { *(s32*)((char*)p + 0x14) = 0; }
void TWindowDD__sub_80348D80(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }
s32 TWindowDD__sub_80348D88(void* p) { return *(s32*)((char*)p + 0x14); }

}
