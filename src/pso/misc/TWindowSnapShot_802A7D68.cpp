#include "types.h"

extern "C" {

void TWindowSnapShot__sub_802A7DA0(void);
void alloc_buffer__15TWindowSnapShotFv(void);
void init_default__15TWindowSnapShotFv(void);
int TLobby__sub_8001D600(void*, void*, void*, void*);
int TLobby__sub_800FD944(void);
int Dolphin_ARAlloc(void);
int TWindowSnapShot__sub_802A7EAC(void);
int get_field_8__15TWindowSnapShotFPv(void*);

    extern int lbl_805D6690;
    extern int lbl_805D669C;
    extern int lbl_805D66A0;
void init_default__15TWindowSnapShotFv(void) { TLobby__sub_8001D600((void*)1, (void*)get_field_8__15TWindowSnapShotFPv((void*)(lbl_805D6690)), (void*)(lbl_805D669C), (void*)(lbl_805D66A0)); }

void TWindowSnapShot__sub_802A7DA0(void) {  }

    extern int lbl_805D669C;
    extern int lbl_805D66A0;
void alloc_buffer__15TWindowSnapShotFv(void) { TWindowSnapShot__sub_802A7EAC(); lbl_805D66A0 = ((TLobby__sub_800FD944() + 0x1f) & 0xffffffe0); lbl_805D669C = Dolphin_ARAlloc(); }

}
