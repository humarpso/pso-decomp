#include "types.h"
#include "pso/ui/TUnk_804E24F0.h"
#include "pso/TAdPlayerLoadGC.h"

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFUl(void*, void*);

    extern unsigned char lbl_804E24F0[];
    extern const float lbl_805DE7A8;
void*TUnk_804E24F0::init_object(s32 _w1, void *_w2) { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804E24F0; set_status_flags__10TObjPlayerFUl(this, (void*)2); *(float *)&this->unk_1F8 = lbl_805DE7A8; return this; }
u8 *TAdPlayerLoadGC::create_instance() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_804E24F0 *)temp_r3)->init_object(tl_05, arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
