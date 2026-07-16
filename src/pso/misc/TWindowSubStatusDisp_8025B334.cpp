#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init_part_direct__20TWindowSubStatusDispFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
u8 *init_part_scaled__20TWindowSubStatusDispFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
M2C_UNK TWindowSubStatusDisp__sub_80256BDC(void *, void *);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

extern M2C_UNK lbl_804CFA40[];

u8 *init_part_direct__20TWindowSubStatusDispFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    TWindowSubStatusDisp__sub_80256BDC((void *)((void *) (arg0)), (void *)((int) (arg2)));
    M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA40;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 8), (void *) (arg1 + 4));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x10), (void *) (arg1 + 0xC));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s32 *, 0x34);
    return arg0;
}

extern M2C_UNK lbl_804CFA40[];
extern const f32 lbl_805DCFE0;

u8 *init_part_scaled__20TWindowSubStatusDispFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    TWindowSubStatusDisp__sub_80256BDC((void *)(arg0), (void *)((void *) (arg2)));
    M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA40;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 8), (void *) (arg1 + 4));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x10), (void *) (arg1 + 0xC));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg1, f32 *, 0x14) * lbl_805DCFE0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg1, f32 *, 0x18) * lbl_805DCFE0);
    {
        f32 t0 = M2C_FIELD(arg1, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (t0 * lbl_805DCFE0);
    }
    {
        f32 t1 = M2C_FIELD(arg1, f32 *, 0x18) + M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) (t1 * lbl_805DCFE0);
    }
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s32 *, 0x2C);
    return arg0;
}

}
