#include "types.h"
#include "pso/misc/TWindowSnapShot.h"

extern "C" {

void TWindowSnapShot__sub_802A7DA0(void);
int aram_transfer_sync__6TLobbyFlUlll(void*, void*, void*, void*);
int get_resource_file_size__6TLobbyFv(void);
int Dolphin_ARAlloc(void);
int TWindowSnapShot__sub_802A7EAC(void);
int get_field_8__15TWindowSnapShotFv(void*);

    extern int shared_snapshot_capture;
    extern int lbl_805D669C;
    extern int snapshot_aligned_buffer_size;
void TWindowSnapShot::init_default() { aram_transfer_sync__6TLobbyFlUlll((void*)1, (void*)get_field_8__15TWindowSnapShotFv((void*)(shared_snapshot_capture)), (void*)(lbl_805D669C), (void*)(snapshot_aligned_buffer_size)); }

void TWindowSnapShot__sub_802A7DA0(void) {  }

    extern int lbl_805D669C;
    extern int snapshot_aligned_buffer_size;
void TWindowSnapShot::alloc_buffer() { TWindowSnapShot__sub_802A7EAC(); snapshot_aligned_buffer_size = ((get_resource_file_size__6TLobbyFv() + 0x1f) & 0xffffffe0); lbl_805D669C = Dolphin_ARAlloc(); }

}
