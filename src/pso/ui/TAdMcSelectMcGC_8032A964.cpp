#include "pso/TAdMcSelectMcGC.h"

TAdMcSelectMcGC::~TAdMcSelectMcGC() {}

#include "types.h"

extern "C" {

s32 TAdMcSelectMcGC__sub_8032AAC4(void* p);
void init_memorycard__15TAdMcSelectMcGCFv(void);
int TLobby__sub_8023E4B4(void*, void*);

    extern unsigned char lbl_80477150[];
    extern unsigned char lbl_804ED9CC[];
    extern int TAdMcSelectMcGC__data_805D6C98;
void init_memorycard__15TAdMcSelectMcGCFv(void) { TAdMcSelectMcGC__data_805D6C98 = (int)lbl_804ED9CC; TLobby__sub_8023E4B4(lbl_80477150, lbl_804ED9CC); }

s32 TAdMcSelectMcGC__sub_8032AAC4(void* p) { return *(s32*)((char*)p + 0x20); }

}
