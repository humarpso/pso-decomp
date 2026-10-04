#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A9234_TEffIndirectCtrl__data_80540AF0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802A925C_TEffIndirectCtrl__data_80540AF0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct P2C_802A8B58 { void *a; s32 b; };

struct Ctrl_802A8B58 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    u32 f1c;
    u8 *f20;
    u8 f24;
    u8 f25;
    u8 pad26[2];
    void *f28;
    P2C_802A8B58 *f2c;
    u8 f30[0xC];
    s32 f3c;
    s32 f40;
    s16 f44;
    s16 f46;
    f32 f48;
    f32 f4c;
    f32 f50;
};

extern "C" {
extern RecoveredGlobal_802A9234_TEffIndirectCtrl__data_80540AF0 TEffIndirectCtrl__data_80540AF0;
s32 get_indirect_source_pixels(u8 arg0);
extern RecoveredGlobal_802A9234_TEffIndirectCtrl__data_80540AF0 TEffIndirectCtrl__data_80540AF0;
s32 get_indirect_source_id(u8 arg0);
u32 calc_i8_tiled_texel_offset(u32 x, u32 y, u32 w);
f32 sin_table_lookup(s32);
u16 get_indirect_tile_coord(u8 arg0, s32 arg1);
s32 update_indirect_texture_wave(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5);
f32 sin_table_lookup(s32);
void deform_indirect_texture_wave(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5);
void queue_destruction__7TObjectFv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void __ct__7TObjectFP7TObject(void *, void *);
void copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *arg0, s32 arg1);
s32 get_indirect_source_pixels(u8 arg0);
s32 get_indirect_source_id(u8 arg0);
u8 *get_indirect_recipe(u8);
void set_render_rect__10TObjPlayerFPviiii(void *, int, int, int, int);
void set_texture_name(void *, void *, void *, s32);
void load_texture_list(void *);
extern M2C_UNK __vt__16TEffIndirectCtrl[];
extern s32 lbl_805D3E28;
extern const f32 lbl_805DE024;
Ctrl_802A8B58 *TEffIndirectCtrl__ct(Ctrl_802A8B58 *self, s32 kind, void *parent);
}

extern "C" {

void *__dt__16TEffIndirectCtrlFv(void *arg0, s16 arg1);
void copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *arg0, s32 arg1);
void render__16TEffIndirectCtrlFv(void);
s32 DCFlushRange(s32, s32);
void TLobby__sub_803DA16C(void *);
void __dl__7TObjectFPv(void *);
void __dl__FPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK memcpy(s32, s32, M2C_UNK);

void render__16TEffIndirectCtrlFv(void) {  }

void copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *arg0, s32 arg1) {
    memcpy(M2C_FIELD(arg0, s32 *, 0x1C), arg1, 0x1000);
    DCFlushRange((s32)(M2C_FIELD(arg0, s32 *, 0x1C)), (s32)(0x1000));
}

extern M2C_UNK __vt__16TEffIndirectCtrl[];

void *__dt__16TEffIndirectCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TEffIndirectCtrl;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TLobby__sub_803DA16C(M2C_FIELD(arg0, void **, 0x2C)); __dl__FPv(M2C_FIELD(arg0, void **, 0x2C)); }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { __dl__FPv(M2C_FIELD(arg0, void **, 0x28)); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802A9234_TEffIndirectCtrl__data_80540AF0_size[sizeof(RecoveredGlobal_802A9234_TEffIndirectCtrl__data_80540AF0) == 0x20 ? 1 : -1];

Ctrl_802A8B58 *TEffIndirectCtrl__ct(Ctrl_802A8B58 *self, s32 kind, void *parent) {
    u8 *tex;
    u8 k;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = ((s32 *)&__vt__16TEffIndirectCtrl);
    self->f0 = lbl_805D3E28;
    self->f28 = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
    self->f2c = (P2C_802A8B58 *)alloc__23TAdSinglePlyChrSelectGCFPv(8);
    {
    void *obj = self;
    if (self->f2c == NULL || self->f28 == NULL) {
        queue_destruction__7TObjectFv(obj);
        return self;
    }
    }
    self->f46 = 0;
    self->f48 = lbl_805DE024;
    self->f4c = lbl_805DE024;
    self->f3c = 0;
    self->f40 = 0;
    self->f44 = 0;
    self->f50 = lbl_805DE024;
    k = kind;
    self->f25 = kind;
    self->f20 = get_indirect_recipe(k);
    if (self->f20 == NULL) {
        return self;
    }
    self->f24 = self->f20[7];
    tex = (u8 *)get_indirect_source_id(self->f24) + k * 1000;
    self->f2c->a = self->f30;
    self->f2c->b = 1;
    set_render_rect__10TObjPlayerFPviiii(self->f28, 0, 1, 0x40, 0x40);
    set_texture_name(self->f30, self->f28, tex, 0x8800000);
    load_texture_list(self->f2c);
    self->f1c = *(u32 *)(*(u8 **)(*(u8 **)((u8 *)self->f2c->a + 8) + 0xC) + 0x20);
    copy_and_flush_texture__16TEffIndirectCtrlFPvi(self, get_indirect_source_pixels(self->f24));
    return self;
}

#pragma push
#pragma fp_contract on
void deform_indirect_texture_wave(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 v;
    s32 off;
    s32 y;
    s16 row;
    s32 x;
    for (y = 0; y < 64; y++) {
        row = (s32)((f32)(u8)arg2 * sin_table_lookup((s32)(182.04445f * (f32)(u32)(arg4 + y * arg5))));
        for (x = 0; x < 64; x++) {
            off = (s32)((f32)(u8)arg1 * sin_table_lookup((s32)(182.04445f * (f32)(u32)(arg3 + x * arg5))) + (f32)row);
            v = *(u8 *)arg0;
            if ((s16)v != 0xFF) {
                v = v + off;
                if ((s16)v >= 0xFF) {
                    v = 0xFE;
                }
                if ((s16)v <= 0) {
                    v = 0;
                }
            }
            *(u8 *)arg0 = v;
            arg0++;
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 update_indirect_texture_wave(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 off;
    s32 x;
    s32 i;
    s32 v;
    s16 row;
    s32 y;
    for (y = 0; y < 64; y++) {
        row = (s32)((f32)(u8)arg2 * sin_table_lookup((s32)(182.04445f * (f32)(u32)(arg4 + y * arg5))));
        for (x = 0; x < 64; x++) {
            off = (s32)((f32)(u8)arg1 * sin_table_lookup((s32)(182.04445f * (f32)(u32)(arg3 + x * arg5))) + (f32)row);
            i = ((s32 (*)(u8, u8, s32))get_indirect_tile_coord)(x, y, 0x40);
            v = ((u8 *)arg0)[i];
            v += off;
            if ((s16)v >= 0xFF) {
                v = 0xFE;
            }
            if ((s16)v <= 0) {
                v = 0;
            }
            ((u8 *)arg0)[i] = v;
        }
    }
}
#pragma pop

u32 calc_i8_tiled_texel_offset(u32 x, u32 y, u32 w) {
    u32 r = (((x >> 3) & 0x1F) << 5) + (x & 7);
    r += (((y >> 2) & 0x3F) * w) << 2;
    r += (y & 3) << 3;
    return r;
}

s32 get_indirect_source_pixels(u8 arg0) {
    u8 var_r3;
    var_r3 = arg0;
    if (var_r3 >= 8U) {
        var_r3 = 0;
    }
    return M2C_FIELD(&TEffIndirectCtrl__data_80540AF0.value, M2C_UNK *, ((var_r3 * 4) & 0x3FC)) + 0x20;
}
typedef char RecoveredGlobal_802A925C_TEffIndirectCtrl__data_80540AF0_size[sizeof(RecoveredGlobal_802A925C_TEffIndirectCtrl__data_80540AF0) == 0x20 ? 1 : -1];
s32 get_indirect_source_id(u8 arg0) {
    u8 var_r3;
    var_r3 = arg0;
    if (var_r3 >= 8U) {
        var_r3 = 0;
    }
    return M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_802A925C_TEffIndirectCtrl__data_80540AF0 *)&TEffIndirectCtrl__data_80540AF0).value, M2C_UNK *, ((var_r3 * 4) & 0x3FC)), s32 *, 8);
}

}
