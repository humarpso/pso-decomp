#include "types.h"

extern "C" {

void TObjPlayer__sub_801D1568(void* a0);
void TObjPlayer__sub_801D158C(void* p);
void TObjPlayer__sub_801D15C0(void* p);
void TObjPlayer__sub_801D15F4(void* p);
void TObjPlayer__sub_801D1658(void* a0);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_8001960C(void*);
int TObjPlayer__sub_801D14C8(void*);
int bswap_32__FPUl(void*);

    extern const float lbl_805DC36C;
void TObjPlayer__sub_801D1568(void* a0) { *(float*)((char*)a0 + 0x10) = lbl_805DC36C; *(float*)((char*)a0 + 0xc) = lbl_805DC36C; *(float*)((char*)a0 + 0x8) = lbl_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 86; *(unsigned char*)((char*)a0 + 0x1) = 5; }

void TObjPlayer__sub_801D158C(void* p) { TObjPlayer__sub_801D14C8(p); TLobby__send_and_handle_60(p); }

void TObjPlayer__sub_801D15C0(void* p) { TObjPlayer__sub_801D15F4((void*)(p)); TLobby__send_and_handle_60(p); }

void TObjPlayer__sub_801D15F4(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); }

    extern const float lbl_805DC36C;
void TObjPlayer__sub_801D1658(void* a0) { *(int*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0x10) = lbl_805DC36C; *(float*)((char*)a0 + 0xc) = lbl_805DC36C; *(float*)((char*)a0 + 0x8) = lbl_805DC36C; *(float*)((char*)a0 + 0x1c) = lbl_805DC36C; *(float*)((char*)a0 + 0x18) = lbl_805DC36C; *(float*)((char*)a0 + 0x14) = lbl_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 85; *(unsigned char*)((char*)a0 + 0x1) = 8; }

}
