#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Tbl_8029F7E0 { s32 v[8]; };

struct Res_8029F7E0 { u32 f0; u32 f4; };

struct Self_8029F7E0 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1c[0xB4 - 0x1C];
    f32 fB4;
    f32 fB8;
    Res_8029F7E0 *fBC;
    u8 padc0[4];
    f32 fC4;
    u8 padc8[0xD8 - 0xC8];
    s32 fD8[8];
    s32 fF8;
};

extern "C" {
Res_8029F7E0 *TObjFish__sub_8001ED9C(s32, s32);
void reset_photon_effect__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80154E3C(void *);
void TObjEneGibbles__sub_80156780(void *, void *, s32);
void init_field_d4__16TODoorLaboNormalFPv(void* a0);
void TODoorFourLightBase__ct(void *);
extern Tbl_8029F7E0 lbl_80466014;
extern u8 lbl_804DC864[];
extern M2C_UNK __vt__16TODoorLaboNormal[];
extern s32 lbl_805D3D70;
extern int lbl_805D6624;
extern const f32 lbl_805DDDB8;
extern const f32 lbl_805DDDBC;
extern const f32 lbl_805DDDC0;
Self_8029F7E0 *TODoorLaboNormal__ct(Self_8029F7E0 *self);
}

extern "C" {

s32 TODoorLaboNormal__vt19(void);
s32 TODoorLaboNormal__vt20(void);
void *__dt__16TODoorLaboNormalFv(void *arg0, s16 arg1);
void init_field_d4__16TODoorLaboNormalFPv(void* a0);
void TObjEneGibbles__sub_80156720(void *);
int TObjFish__sub_8001EDC4(void*, void*);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__19TODoorFourLightBaseFv(void *, int);

    extern int lbl_805D6624;
void init_field_d4__16TODoorLaboNormalFPv(void* a0) { *(int*)((char*)a0 + 0xd4) = TObjFish__sub_8001EDC4((void*)(lbl_805D6624), (void*)0); }

extern s32 lbl_805D6628;

s32 TODoorLaboNormal__vt20(void) {
    return lbl_805D6628;
}

extern s32 lbl_805D662C;

s32 TODoorLaboNormal__vt19(void) {
    return lbl_805D662C;
}

extern M2C_UNK __vt__16TODoorLaboNormal[];

void *__dt__16TODoorLaboNormalFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TODoorLaboNormal;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__19TODoorFourLightBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Self_8029F7E0 *TODoorLaboNormal__ct(Self_8029F7E0 *self) {
    s32 i;
    TODoorFourLightBase__ct(self);
    self->vt = ((s32 *)&__vt__16TODoorLaboNormal);
    self->f0 = lbl_805D3D70;
    TObjEneGibbles__sub_80156780(self, lbl_804DC864, 1);
    TObjPlayer__sub_80154E3C(self);
    reset_photon_effect__10TObjPlayerFPv(self);
    init_field_d4__16TODoorLaboNormalFPv((void*)(self));
    self->fBC = TObjFish__sub_8001ED9C(lbl_805D6624, 0);
    self->fB4 = (f32)self->fBC->f4 - lbl_805DDDB8;
    self->fB8 = lbl_805DDDBC;
    {
        Tbl_8029F7E0 t = lbl_80466014;
        for (i = 0; i < 8; i++) {
            if (t.v[i] != -1) {
                self->fD8[i] = 0;
            }
        }
    }
    self->fF8 = 1;
    self->fC4 = lbl_805DDDC0;
    return self;
}

}
