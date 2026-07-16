#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 DCFlushRange(s32, s32);
s32 copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *, s32);
s32 TEffIndirectCtrl__sub_802A8CC0(s32, s32, s32, s32, s32, u8);
s32 TEffIndirectCtrl__sub_802A9234(u8);
s32 TEffIndirectCtrl__sub_802A8E4C(s32, s32, s32, s32, s32, u8);
void render__16TEffIndirectCtrlFv(void);

int TEffIndirectCtrl__sub_802A8728(void) { return 0; }
void update_eff_indirect(void *arg0) {
    copy_and_flush_texture__16TEffIndirectCtrlFPvi(arg0, TEffIndirectCtrl__sub_802A9234(M2C_FIELD(arg0, u8 *, 0x24)));
    TEffIndirectCtrl__sub_802A8CC0(M2C_FIELD(arg0, s32 *, 0x1C), (s32) M2C_FIELD(arg0, f32 *, 0x48), (s32) M2C_FIELD(arg0, f32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u8 *, 6));
    DCFlushRange(M2C_FIELD(arg0, s32 *, 0x1C), 0x1000);
}
void eff_indirect_update_and_flush(void *arg0) {
    copy_and_flush_texture__16TEffIndirectCtrlFPvi(arg0, TEffIndirectCtrl__sub_802A9234(M2C_FIELD(arg0, u8 *, 0x24)));
    TEffIndirectCtrl__sub_802A8E4C(M2C_FIELD(arg0, s32 *, 0x1C), (s32) M2C_FIELD(arg0, f32 *, 0x48), (s32) M2C_FIELD(arg0, f32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u8 *, 6));
    DCFlushRange(M2C_FIELD(arg0, s32 *, 0x1C), 0x1000);
}

}
