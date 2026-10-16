#include "types.h"
#include "pso/ui/TAdRicoRingCtrl.h"

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D7E48;
}

extern "C" {

#pragma push
#pragma fp_contract on
void TAdRicoRingCtrl::sub_8001B424(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    u32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r4;
    if (arg1 != 0) {
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x1C);
        if (temp_r3 != 0U) {
            VecCopy__FP3VecPC3Vec((void *) (temp_r3 + 0x58), (void *) (arg1));
        }
        temp_r3_2 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x20));
        if (temp_r3_2 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (temp_r3_2 + 0x58), (void *) (arg1));
            temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x20));
            *(f32 *)((s8 *)temp_r4 + 0x5C) = (f32) -((lbl_805D7E48 * *(f32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)temp_r4 + 0x4C)) + 4)) + 0x14)) - *(f32 *)((s8 *)temp_r4 + 0x5C));
        }
    }
}
#pragma pop

}
