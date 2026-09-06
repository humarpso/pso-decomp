#include "pso/TPlyGuildCardTag.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void* TObjPlayer__vt10(void* p);
}

extern "C" {

int TLobby__sub_8007B844(void);
void TWindowSubShortMail__sub_8007B824(void);
s32 TWindowSubShortMail__sub_8007B834(void* p);
void* fn_8007B83C(void* p);
M2C_UNK bswap_16__FPUs(s32);
M2C_UNK bswap_32__FPUl(s32);

}

void TPlyGuildCardTag::bswap() {
    bswap_32(&m_guildcard_number);
    bswap_16(&m_tag2);
}

extern "C" {

extern u16 lbl_805D63FC;

void TWindowSubShortMail__sub_8007B824(void) {
    lbl_805D63FC |= 2;
}

s32 TWindowSubShortMail__sub_8007B834(void* p) { return *(s32*)((char*)p + 0x0); }

void* fn_8007B83C(void* p) { return (char*)p + 0x8; }
int TLobby__sub_8007B844(void) { return 0; }

void* TObjPlayer__vt10(void* p) { return (char*)p + 0x85c; }

}
