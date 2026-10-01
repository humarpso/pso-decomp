#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ctrl_802A8728 {
    u8 pad0[0x1C];
    s32 buf;
    u8 *recipe;
    u8 index;
    u8 pad25[0x3C - 0x25];
    s32 amp;
    s32 period;
    u16 phase;
    u8 pad46[2];
    f32 rate;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Tbl5_802A85F0 { s32 v[5]; };

struct Owner_802A85F0 {
    u8 pad[0x2C];
    s32 list;
};

extern "C" {
extern M2C_UNK lbl_80540B10[];
extern u8 lbl_805D66AC;
void TObjPlayer__sub_802A841C(void);
extern M2C_UNK lbl_80540B10[];
void TObjPlayer__sub_802A83F4(void);
s32 DCFlushRange(s32, s32);
s32 copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *, s32);
void TEffIndirectCtrl__sub_802A8FD8(s32, s32, s32, s32, s32);
s32 TEffIndirectCtrl__sub_802A9234(u8);
void TEffIndirectCtrl__sub_802A8728(Ctrl_802A8728 *self);
void GXSetIndTexMtx(s32, f32 (*)[3], s32);
void Dolphin_GXSetIndTexCoordScale(s32, s32, s32);
void Dolphin_GXSetIndTexOrder(s32, s32, s32);
void GXSetNumIndStages(s32);
void GXSetTevIndWarp(s32, s32, s32, s32, s32);
void set_global_param__8TObjFishFi(s32);
void TObjPlayer__sub_803E1D90(s32, s32, s32, s32);
extern Tbl5_802A85F0 lbl_8046FC0C;
extern Tbl5_802A85F0 lbl_8046FC20;
extern const f32 lbl_805DE020;
extern const f32 lbl_805DE024;
s32 TObjPlayer__sub_802A85F0(s32 arg0, s32 unused, s32 sampler, s32 arg3);
}

extern "C" {

void eff_indirect_update_and_flush(void *arg0);
void play_particle_at_active_slot__10TObjPlayerFiiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void update_eff_indirect(void *arg0);
s32 DCFlushRange(s32, s32);
s32 TEffIndirectCtrl__sub_802A8CC0(s32, s32, s32, s32, s32, u8);
s32 TEffIndirectCtrl__sub_802A8E4C(s32, s32, s32, s32, s32, u8);
s32 TEffIndirectCtrl__sub_802A9234(u8);
M2C_UNK TObjPlayer__sub_802A8448(s32, s32, s32, s32);
s32 copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *, s32);
s8 fn_802A82DC();
void render__16TEffIndirectCtrlFv(void);

extern M2C_UNK lbl_80540B10[];

void play_particle_at_active_slot__10TObjPlayerFiiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r3;

    temp_r3 = (s32)(s8) fn_802A82DC();
    if ((temp_r3 != -1) && ((u32) lbl_80540B10[temp_r3] != 0U)) {
        if (arg3 != 0) {
            TObjPlayer__sub_802A85F0((s32)(lbl_80540B10[temp_r3]), (s32)(arg4), (s32)(arg1), (s32)(arg2));
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

s32 TObjPlayer__sub_802A85F0(s32 arg0, s32 unused, s32 sampler, s32 arg3) {
    if ((u8)arg3 < 5) {
        u8 scale = arg3;
        Tbl5_802A85F0 coords = lbl_8046FC0C;
        Tbl5_802A85F0 scales = lbl_8046FC20;
        f32 mtx[2][3];
        GXSetNumIndStages(1);
        Dolphin_GXSetIndTexOrder(0, coords.v[2], 5);
        Dolphin_GXSetIndTexCoordScale(0, scales.v[scale], scales.v[scale]);
        GXSetTevIndWarp(1, 0, 0, 0, 1);
        mtx[0][0] = lbl_805DE020;
        mtx[0][1] = lbl_805DE024;
        mtx[0][2] = lbl_805DE024;
        mtx[1][0] = lbl_805DE024;
        mtx[1][1] = lbl_805DE020;
        mtx[1][2] = lbl_805DE024;
        GXSetIndTexMtx(1, mtx, 1);
        set_global_param__8TObjFishFi(((Owner_802A85F0 *)arg0)->list);
        TObjPlayer__sub_803E1D90(0, sampler, sampler, 5);
    }
}

void TEffIndirectCtrl__sub_802A8728(Ctrl_802A8728 *self) {
    s32 rate;
    copy_and_flush_texture__16TEffIndirectCtrlFPvi(self, TEffIndirectCtrl__sub_802A9234(self->index));
    rate = (s32) self->rate;
    self->phase = self->phase + (s8) self->recipe[3];
    TEffIndirectCtrl__sub_802A8FD8(self->buf, self->amp, self->period, rate, self->phase);
    DCFlushRange(self->buf, 0x1000);
}

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
