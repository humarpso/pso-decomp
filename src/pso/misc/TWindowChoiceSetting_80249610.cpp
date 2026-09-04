#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowFukidasi__sub_80249788(void* p);
void draw_resolved_window__15TWindowFukidasiFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void hide__15TWindowFukidasiFPv(void* p);
int is_selected__20TWindowChoiceSettingFPv(void* p);
void *TWindowCtrlMain__sub_8024CDD0(s32);
s32 TWindowFukidasi__sub_80244DFC(s32, s32, s32, s32);
s16 get_field_74__17TWindowSubComCardFPv(void* p);
int is_open__17TWindowSubComCardFPv(void* p);

int is_selected__20TWindowChoiceSettingFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 5) & 0x1; }
void draw_resolved_window__15TWindowFukidasiFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    TWindowFukidasi__sub_80244DFC(arg0, arg1, arg2, M2C_FIELD(TWindowCtrlMain__sub_8024CDD0(arg3), s32 *, 0x14));
}

void TWindowFukidasi__sub_80249788(void* p) { *(u32*)((char*)p + 0x2c) |= 0x400; }
void hide__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffbff; }

}
