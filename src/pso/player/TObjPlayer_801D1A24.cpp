#include "types.h"

extern "C" {

void TObjPlayer__sub_801D1A24(void* a0);
void TObjPlayer__sub_801D1A50(void* p);
void TObjPlayer__sub_801D1A84(void* p);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void*);
int TObjPlayer__sub_801D19E0(void*);
int TObjPlayer__sub_801D28DC(void*);
int bswap_16__FPUs(void*);

    extern const float lbl_805DC36C;
void TObjPlayer__sub_801D1A24(void* a0) { *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0xc) = lbl_805DC36C; *(float*)((char*)a0 + 0x8) = lbl_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 76; *(unsigned char*)((char*)a0 + 0x1) = 4; }

void TObjPlayer__sub_801D1A50(void* p) { TObjPlayer__sub_801D19E0(p); TLobby__send_and_handle_60(p); }

void TObjPlayer__sub_801D1A84(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_801D28DC((char*)p + 0x8); }

}
