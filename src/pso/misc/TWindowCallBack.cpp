#include "types.h"

extern "C" {

void TWindowCallBack__sub_802ACDA8(void* p, s32 v);
s32 TBoss6Type2__sub_802ACCC8(void* p);
s32 TBoss6GravBall__sub_802ACCD0(void* p);
void update_and_send__11TBoss6Type2FPv(void* p);
int handle_olga_action__11TBoss6Type2FPv(void* p);
void TBoss6Type2__sub_802ACD2C(void* p);
int fn_802ACD40(void* p);
void fn_802ACD60(void* p);
void build_6xA3_olga_flow_boss_actions(void* p);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

s32 TBoss6Type2__sub_802ACCC8(void* p) { return *(s32*)((char*)p + 0x374); }
s32 TBoss6GravBall__sub_802ACCD0(void* p) { return *(s32*)((char*)p + 0x374); }
void update_and_send__11TBoss6Type2FPv(void* p) { handle_olga_action__11TBoss6Type2FPv(p); TLobby__send_and_handle_60(p); }
int handle_olga_action__11TBoss6Type2FPv(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void TBoss6Type2__sub_802ACD2C(void* p) { *(u8*)((char*)p + 0x0) = 165; *(u8*)((char*)p + 0x1) = 5; }
int fn_802ACD40(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void fn_802ACD60(void* p) { fn_802ACD40(p); TLobby__send_and_handle_60(p); }
void build_6xA3_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 163; *(u8*)((char*)p + 0x1) = 5; }
void TWindowCallBack__sub_802ACDA8(void* p, s32 v) { *(s32*)((char*)p + 0x60) = v; }

}
