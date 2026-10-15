#include "types.h"

extern "C" {
void* init__17TItemEffectWeaponFPv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_instance__17TItemEffectWeaponFPv(u8 *arg0);
}

extern "C" {

int set_status_flags__10TObjPlayerFPvUi(void*, void*);
int construct_srank_weapon(void);

    extern unsigned char lbl_804F28E0[];
    extern const float lbl_805E0268;
void* init__17TItemEffectWeaponFPv(void* a0, s32 _w1, void * _w2) { construct_srank_weapon(); *(int*)((char*)a0 + 0x18) = (int)lbl_804F28E0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(float*)((char*)a0 + 0x1fc) = lbl_805E0268; return a0; }
u8 *create_instance__17TItemEffectWeaponFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init__17TItemEffectWeaponFPv((void *)(temp_r3), (s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

}
