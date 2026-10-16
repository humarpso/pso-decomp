#include "types.h"
#include "pso/misc/TWindowSnapShot.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TWindowSnapShot__sub_802A7DA0(void);
int get_resource_file_size__6TLobbyFv(void);
int Dolphin_ARAlloc(void);
int TWindowSnapShot__sub_802A7EAC(void);

    extern int shared_snapshot_capture;
    extern int lbl_805D669C;
    extern int snapshot_aligned_buffer_size;
void TWindowSnapShot::init_default() { TLobby::aram_transfer_sync((s32)((void*)1), (u32)((void*)((TWindowSnapShot *)shared_snapshot_capture)->get_field_8()), (s32)((void*)(lbl_805D669C)), (s32)((void*)(snapshot_aligned_buffer_size))); }

void TWindowSnapShot__sub_802A7DA0(void) {  }

    extern int lbl_805D669C;
    extern int snapshot_aligned_buffer_size;
void TWindowSnapShot::alloc_buffer() { TWindowSnapShot__sub_802A7EAC(); snapshot_aligned_buffer_size = ((get_resource_file_size__6TLobbyFv() + 0x1f) & 0xffffffe0); lbl_805D669C = Dolphin_ARAlloc(); }

}
