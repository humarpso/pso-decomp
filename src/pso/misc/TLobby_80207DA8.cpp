#include "types.h"

extern "C" {

void TLobby__sub_80207DA8(void);
s32 TLobby__sub_80207DD4(void);
int TLobby__sub_80207E24(void* p);
void TLobby__sub_80207E44(void);
int TLobby__sub_80207E48(void* p);
int TLobby__sub_80207E68(void* p);
int TAdStorySelectGC__sub_80207D64(void*);
int TLobby__sub_802077CC(void*);
int TLobby__sub_8020780C(void*);
int TOBoss4Rock__sub_802078A4(void*);
s32 TOKeyMachine01__sub_802034A8();
s32 TScene__sub_801FBA20();

    extern int lbl_805D3628;
void TLobby__sub_80207DA8(void) { TAdStorySelectGC__sub_80207D64((void*)0); lbl_805D3628 = -1; }

s32 TLobby__sub_80207DD4(void) {
    s32 temp_r3;

    if (TOKeyMachine01__sub_802034A8() != 0xF) {
        return 0;
    }
    temp_r3 = TScene__sub_801FBA20();
    if ((temp_r3 >= 0xD) && (temp_r3 < 0xF)) {
        return 1;
    }
    return 0;
}
int TLobby__sub_80207E24(void* p) { return TLobby__sub_8020780C(p); }
void TLobby__sub_80207E44(void) {  }
int TLobby__sub_80207E48(void* p) { return TOBoss4Rock__sub_802078A4(p); }
int TLobby__sub_80207E68(void* p) { return TLobby__sub_802077CC(p); }

}
