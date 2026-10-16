#include "types.h"

extern "C" {
void save_position__13TUnk_804CE018Fv(void *);
void fn_80131ADC(u8 *arg0, u8 *arg1);
void save_position__13TUnk_804CE018Fv(void *);
void fn_80131B18(u8 *arg0, u8 *arg1);
}

extern "C" {

void fn_80131ADC(u8 *arg0, u8 *arg1) {
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x28)) + 0x30) = (f32) *(f32 *)((s8 *)arg1 + 0);
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x28)) + 0x34) = (f32) *(f32 *)((s8 *)arg1 + 4);
    save_position__13TUnk_804CE018Fv(*(u8 **)((s8 *)arg0 + 0x28));
}
void fn_80131B18(u8 *arg0, u8 *arg1) {
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x24)) + 0x30) = (f32) *(f32 *)((s8 *)arg1 + 0);
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x24)) + 0x34) = (f32) *(f32 *)((s8 *)arg1 + 4);
    save_position__13TUnk_804CE018Fv(*(u8 **)((s8 *)arg0 + 0x24));
}

}
