#include "types.h"

extern "C" {

void TWindowSnapShot__sub_802A7DA0(void);
void alloc_buffer__15TWindowSnapShotFv(void);
void init_default__15TWindowSnapShotFv(void);
int aram_transfer_sync__6TLobbyFiUiii(void*, void*, void*, void*);
int get_resource_file_size__6TLobbyFPv(void);
int Dolphin_ARAlloc(void);
int TWindowSnapShot__sub_802A7EAC(void);
int get_field_8__15TWindowSnapShotFPv(void*);

    extern int shared_snapshot_capture;
    extern int lbl_805D669C;
    extern int lbl_805D66A0;
void init_default__15TWindowSnapShotFv(void) { aram_transfer_sync__6TLobbyFiUiii((void*)1, (void*)get_field_8__15TWindowSnapShotFPv((void*)(shared_snapshot_capture)), (void*)(lbl_805D669C), (void*)(lbl_805D66A0)); }

void TWindowSnapShot__sub_802A7DA0(void) {  }

    extern int lbl_805D669C;
    extern int lbl_805D66A0;
void alloc_buffer__15TWindowSnapShotFv(void) { TWindowSnapShot__sub_802A7EAC(); lbl_805D66A0 = ((get_resource_file_size__6TLobbyFPv() + 0x1f) & 0xffffffe0); lbl_805D669C = Dolphin_ARAlloc(); }

}
