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

extern "C" {
extern RecoveredGlobal_802A9234_TEffIndirectCtrl__data_80540AF0 TEffIndirectCtrl__data_80540AF0;
s32 TEffIndirectCtrl__sub_802A9234(u8 arg0);
extern RecoveredGlobal_802A9234_TEffIndirectCtrl__data_80540AF0 TEffIndirectCtrl__data_80540AF0;
s32 TEffIndirectCtrl__sub_802A925C(u8 arg0);
u32 TEffIndirectCtrl__sub_802A920C(u32 x, u32 y, u32 w);
f32 sin_table_lookup(s32);
u16 get_indirect_tile_coord(u8 arg0, s32 arg1);
s32 update_indirect_texture_wave(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5);
f32 sin_table_lookup(s32);
void deform_indirect_texture_wave(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5);
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

u32 TEffIndirectCtrl__sub_802A920C(u32 x, u32 y, u32 w) {
    u32 r = (((x >> 3) & 0x1F) << 5) + (x & 7);
    r += (((y >> 2) & 0x3F) * w) << 2;
    r += (y & 3) << 3;
    return r;
}

s32 TEffIndirectCtrl__sub_802A9234(u8 arg0) {
    u8 var_r3;
    var_r3 = arg0;
    if (var_r3 >= 8U) {
        var_r3 = 0;
    }
    return M2C_FIELD(&TEffIndirectCtrl__data_80540AF0.value, M2C_UNK *, ((var_r3 * 4) & 0x3FC)) + 0x20;
}
typedef char RecoveredGlobal_802A925C_TEffIndirectCtrl__data_80540AF0_size[sizeof(RecoveredGlobal_802A925C_TEffIndirectCtrl__data_80540AF0) == 0x20 ? 1 : -1];
s32 TEffIndirectCtrl__sub_802A925C(u8 arg0) {
    u8 var_r3;
    var_r3 = arg0;
    if (var_r3 >= 8U) {
        var_r3 = 0;
    }
    return M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_802A925C_TEffIndirectCtrl__data_80540AF0 *)&TEffIndirectCtrl__data_80540AF0).value, M2C_UNK *, ((var_r3 * 4) & 0x3FC)), s32 *, 8);
}

}
