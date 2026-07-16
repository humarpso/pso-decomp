#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
u8 *draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245808(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int, f32);
M2C_UNK TWindowSubSymbolChatPartsSet__sub_80286120(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
extern M2C_UNK lbl_8044FC38;
extern const f32 lbl_805DD820;

struct Vec2 { f32 x; f32 y; };

void render__28TWindowSubSymbolChatPartsSetFv(u8 *arg0) {
    struct Vec2 sp10;
    struct Vec2 sp8;
    f32 temp_f1;
    u8 *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&sp10), (void *) (temp_r3 + 0x10));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&sp8), (void *) (temp_r3 + 0x28));
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) < 0) {
        M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x5C) / lbl_805DD820);
        M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
    }
    TWindowSubComCard__sub_80245808((void *) (arg0), (int) (temp_r3));
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x10) + M2C_FIELD(arg0, f32 *, 0x8C));
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x90));
    M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x94));
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x2C);
    M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) (temp_f1 * M2C_FIELD(arg0, f32 *, 0x94));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3), (f32) (temp_f1));
    TWindowSubSymbolChatPartsSet__sub_80286120((void *) (arg0), (int) (temp_r3));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (temp_r3 + 0x10), (void *) (&sp10));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (temp_r3 + 0x28), (void *) (&sp8));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x88)), (int) (temp_r3));
}

}
