#include "types.h"

extern "C" {

void TLobby__sub_8032CDD0(void* p);
void TLobby__sub_8032CDEC(void);

void TLobby__sub_8032CDD0(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s16*)((char*)p + 0x4) = 0; *(u8*)((char*)p + 0x6) = 0; *(u8*)((char*)p + 0x7) = 0; }

    extern int lbl_805D6CE8;
    extern int lbl_805D6CEC;
void TLobby__sub_8032CDEC(void) { lbl_805D6CEC = 0; lbl_805D6CE8 = 0; }

}
