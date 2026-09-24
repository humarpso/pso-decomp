#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_8029951C_lbl_8046518C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0 {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct Ent_80299488 { s32 a; s32 b; s32 c; };

extern "C" {
s32 TObjCMIcon__sub_80299598(M2C_UNK arg0, s32 arg1);
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__data_805409E0;
void TObjCMIcon__sub_802994B0(s32 arg0);
void TObjCMIcon__sub_8029957C(void* p, void* q);
extern RecoveredGlobal_8029951C_lbl_8046518C lbl_8046518C;
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__data_805409E0;
extern f32 TObjCMIcon__data_805D65A8;
extern const f32 lbl_805DDC38;
void TObjCMIcon__sub_8029951C(void);
extern RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0 TObjCMIcon__data_805409E0;
void TObjCMIcon__sub_80299488(void);
}

extern "C" {

void TObjCMIcon__sub_8029957C(void* p, void* q);

typedef char RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0_size[sizeof(RecoveredGlobal_802994B0_TObjCMIcon__data_805409E0) == 0x58 ? 1 : -1];

void TObjCMIcon__sub_80299488(void) {
    s32 i;
    Ent_80299488 *p = ((Ent_80299488 *)&TObjCMIcon__data_805409E0);
    for (i = 0; i < 7; i++) {
        p->a = 1;
        p++;
    }
}

void TObjCMIcon__sub_802994B0(s32 arg0) {
    M2C_FIELD(((u8 *)(&TObjCMIcon__data_805409E0.value) + (arg0 * 0xC)), s32 *, 0) = 0;
}

typedef char RecoveredGlobal_8029951C_lbl_8046518C_size[sizeof(RecoveredGlobal_8029951C_lbl_8046518C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0_size[sizeof(RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0) == 0x58 ? 1 : -1];
void TObjCMIcon__sub_8029951C(void) {
    M2C_UNK *var_r30;
    s32 var_r29;
    var_r29 = 0;
    var_r30 = (M2C_UNK *)(&(*(RecoveredGlobal_8029951C_TObjCMIcon__data_805409E0 *)&TObjCMIcon__data_805409E0).value);
    do {
        TObjCMIcon__sub_8029957C((void*)((int) (var_r30)), (void*)((void *) (&lbl_8046518C.value)));
        var_r29 += 1;
        var_r30 = (M2C_UNK *)((u8 *)((M2C_UNK *)((u8 *)(var_r30) + 0xC)));
    } while (var_r29 < 7);
    TObjCMIcon__data_805D65A8 = lbl_805DDC38;
}

void TObjCMIcon__sub_8029957C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); }
s32 TObjCMIcon__sub_80299598(M2C_UNK arg0, s32 arg1) {
    return arg1;
}

}
