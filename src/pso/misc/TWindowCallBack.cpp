#include "types.h"

extern "C" {

void TWindowCallBack__sub_802ACDA8(void* p, s32 v);
s32 fn_802ACCC8(void* p);
s32 fn_802ACCD0(void* p);
void fn_802ACCD8(void* p);
int fn_802ACD0C(void* p);
void fn_802ACD2C(void* p);
int fn_802ACD40(void* p);
void fn_802ACD60(void* p);
void build_6xA3_olga_flow_boss_actions(void* p);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void*);

s32 fn_802ACCC8(void* p) { return *(s32*)((char*)p + 0x374); }
s32 fn_802ACCD0(void* p) { return *(s32*)((char*)p + 0x374); }
void fn_802ACCD8(void* p) { fn_802ACD0C(p); TLobby__send_and_handle_60(p); }
int fn_802ACD0C(void* p) { return TObjPlayer__sub_8001960C(p); }
void fn_802ACD2C(void* p) { *(u8*)((char*)p + 0x0) = 165; *(u8*)((char*)p + 0x1) = 5; }
int fn_802ACD40(void* p) { return TObjPlayer__sub_8001960C(p); }
void fn_802ACD60(void* p) { fn_802ACD40(p); TLobby__send_and_handle_60(p); }
void build_6xA3_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 163; *(u8*)((char*)p + 0x1) = 5; }
void TWindowCallBack__sub_802ACDA8(void* p, s32 v) { *(s32*)((char*)p + 0x60) = v; }

}
