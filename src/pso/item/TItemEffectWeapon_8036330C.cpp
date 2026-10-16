#include "types.h"
#include "pso/item/TUnk_804F28E0.h"
#include "pso/item/TItemEffectWeapon.h"

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
}

extern "C" {

int set_status_flags__10TObjPlayerFUl(void*, void*);
int construct_srank_weapon(void);

    extern unsigned char lbl_804F28E0[];
    extern const float lbl_805E0268;
void*TUnk_804F28E0::init(s32 _w1, void *_w2) { construct_srank_weapon(); *(int*)((char*)this + 0x18) = (int)lbl_804F28E0; set_status_flags__10TObjPlayerFUl(this, (void*)2); *(float*)((char*)this + 0x1fc) = lbl_805E0268; return this; }
u8 *TItemEffectWeapon::create_instance() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_804F28E0 *)temp_r3)->init((s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

}
