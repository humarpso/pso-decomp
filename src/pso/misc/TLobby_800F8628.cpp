#include "types.h"

extern "C" {

void* init_entry_fields__6TLobbyFPviii(void* a0, int a1, int a2, int a3);
int init_object__12TBoss3VoloptFPvPv(void);

    extern unsigned char lbl_804999A0[];
    extern const float lbl_805DA8E8;
void* init_entry_fields__6TLobbyFPviii(void* a0, int a1, int a2, int a3) { init_object__12TBoss3VoloptFPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804999A0; *(int*)((char*)a0 + 0x28) = a2; *(float*)((char*)a0 + 0x1c) = lbl_805DA8E8; *(unsigned char*)((char*)a0 + 0x21) = 0; *(unsigned char*)((char*)a0 + 0x22) = 0; *(unsigned char*)((char*)a0 + 0x20) = 255; *(int*)((char*)a0 + 0x24) = a3; return a0; }

}
