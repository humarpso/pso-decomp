#include "types.h"

extern "C" {

void set_vec4_const__10TObjPlayerFPv(void* a0);
void reset_ring__10TObjPlayerFPv(void* p);
void clear_target_lock__10TObjPlayerFPv(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, void*);
int set_flags__10TObjPlayerFPvUi(void*, void*);
int TObjPlayer__sub_801C6F40(void*, void*);
int TLobby__sub_80227234(void*);

    extern const float lbl_805DC320;
void set_vec4_const__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x1c) = lbl_805DC320; *(float*)((char*)a0 + 0x20) = lbl_805DC320; *(float*)((char*)a0 + 0x24) = lbl_805DC320; *(float*)((char*)a0 + 0x28) = lbl_805DC320; }

void reset_ring__10TObjPlayerFPv(void* p) { clear_flags__11TAdRicoRingFPvUi(p, (void*)1); TObjPlayer__sub_801C6F40(p, (void*)-1); TLobby__sub_80227234((void*)0); }

void clear_target_lock__10TObjPlayerFPv(void* p) { set_flags__10TObjPlayerFPvUi(p, (void*)1); TLobby__sub_80227234((void*)1); }

}
