#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern M2C_UNK lbl_80540B10[];
extern u8 lbl_805D66AC;
void TObjPlayer__sub_802A841C(void);
extern M2C_UNK lbl_80540B10[];
void TObjPlayer__sub_802A83F4(void);
}

extern "C" {

int TEffIndirectCtrl__sub_802A8728(void);
void eff_indirect_update_and_flush(void *arg0);
void play_particle_at_active_slot__10TObjPlayerFiiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void update_eff_indirect(void *arg0);
s32 DCFlushRange(s32, s32);
s32 TEffIndirectCtrl__sub_802A8CC0(s32, s32, s32, s32, s32, u8);
s32 TEffIndirectCtrl__sub_802A8E4C(s32, s32, s32, s32, s32, u8);
s32 TEffIndirectCtrl__sub_802A9234(u8);
M2C_UNK TObjPlayer__sub_802A8448(s32, s32, s32, s32);
M2C_UNK TObjPlayer__sub_802A85F0(s32, s32, s32, s32);
s32 copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *, s32);
s8 fn_802A82DC();
void render__16TEffIndirectCtrlFv(void);

extern M2C_UNK lbl_80540B10[];

void play_particle_at_active_slot__10TObjPlayerFiiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r3;

    temp_r3 = (s32)(s8) fn_802A82DC();
    if ((temp_r3 != -1) && ((u32) lbl_80540B10[temp_r3] != 0U)) {
        if (arg3 != 0) {
            TObjPlayer__sub_802A85F0(lbl_80540B10[temp_r3], arg4, arg1, arg2);
            return;
        }
        TObjPlayer__sub_802A8448(lbl_80540B10[temp_r3], arg1, arg2, arg5);
    }
}

void TObjPlayer__sub_802A83F4(void) {
    s32 i;
    for (i = 0; i < 6; i++) ((s32 *)&lbl_80540B10)[i] = 0;
}

void TObjPlayer__sub_802A841C(void) {
    s32 i;
    lbl_805D66AC = 0;
    for (i = 0; i < 6; i++) ((s32 *)&lbl_80540B10)[i] = 0;
}

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
