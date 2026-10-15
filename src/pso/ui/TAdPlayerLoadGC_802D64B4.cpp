#include "types.h"

extern "C" {
void* init_object__15TAdPlayerLoadGCFPv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_instance__15TAdPlayerLoadGCFPv(u8 *arg0);
}

extern "C" {

int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char lbl_804E24F0[];
    extern const float lbl_805DE7A8;
void* init_object__15TAdPlayerLoadGCFPv(void* a0, s32 _w1, void * _w2) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E24F0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(float*)((char*)a0 + 0x1f8) = lbl_805DE7A8; return a0; }
u8 *create_instance__15TAdPlayerLoadGCFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_object__15TAdPlayerLoadGCFPv((void *)(temp_r3), (s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

}
