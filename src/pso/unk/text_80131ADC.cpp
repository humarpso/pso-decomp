#include "types.h"
#include "pso/unk/text_80131ADC.h"
#include "pso/misc/TUnk_804CE018.h"

extern "C" {
void fn_80131ADC(u8 *arg0, u8 *arg1) {
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x28)) + 0x30) = (f32) *(f32 *)((s8 *)arg1 + 0);
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x28)) + 0x34) = (f32) *(f32 *)((s8 *)arg1 + 4);
    ((TUnk_804CE018 *)(*(u8 **)((s8 *)arg0 + 0x28)))->save_position();
}
void fn_80131B18(u8 *arg0, u8 *arg1) {
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x24)) + 0x30) = (f32) *(f32 *)((s8 *)arg1 + 0);
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x24)) + 0x34) = (f32) *(f32 *)((s8 *)arg1 + 4);
    ((TUnk_804CE018 *)(*(u8 **)((s8 *)arg0 + 0x24)))->save_position();
}

}
