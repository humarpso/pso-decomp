#include "types.h"

extern "C" {
void *construct__9TItemDropFPv(void *p);
void *destroy__9TItemDropFPvs(void *p, s16 flag);
void __register_global_object(void *obj, void *dtor, void *link);
extern u8 resource_load_task_root[];
extern u8 resource_load_task_root_dtor_registration[];
extern s32 lbl_805D2B10;
extern s32 disc_read_filename;
void TLobby__sub_800F9F08(void);
}

extern "C" {

s32 TLoadCtrl__sub_800F9F00(void);
void set_state__15TAdPlayerLoadGCFi(int a0);

    extern int TAdPlayerLoadGC__load_state;
void set_state__15TAdPlayerLoadGCFi(int a0) { TAdPlayerLoadGC__load_state = a0; }

extern s32 TLoadCtrl__fade_task;

s32 TLoadCtrl__sub_800F9F00(void) {
    return TLoadCtrl__fade_task;
}
void TLobby__sub_800F9F08(void) {
    __register_global_object(construct__9TItemDropFPv(resource_load_task_root), (void *)destroy__9TItemDropFPvs, resource_load_task_root_dtor_registration);
    disc_read_filename = lbl_805D2B10;
}

}

__declspec(section ".ctors") static void *const __sinit_TAdPlayerLoadGC_800F9EF8_cpp_ref = (void *)TLobby__sub_800F9F08;
