#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8008655C_lbl_8048E728 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_800858D0_lbl_8048E6A8 {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_80085E78_lbl_8048E6DC {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct Col_80085798 { u32 r; u32 g; u32 b; u32 a; };

struct Obj_80085798 { u8 pad[0x38]; u8 target[0x10]; };

typedef s32 M2C_UNK;
struct Col_80086418 { u8 a, r, g, b; };

struct FCol_80086418 { f32 a, r, g, b; };

struct Ctrl_80086418 {
    u8 pad0[0x90];
    Col_80086418 color;
};

extern "C" {
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_particle;
u8 *TParticleCtrl__sub_8008592C(s32 arg0);
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_particle;
u8 *TParticleCtrl__sub_8008598C(s32 arg0);
extern RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
s32 TParticleCtrl__sub_800861F4(u8 *arg0);
u8 * __dt__7TObjectFv(void *, s16);
void free_from_heap__13TParticleCtrlFPv(void *);
extern RecoveredGlobal_8008655C_lbl_8048E728 lbl_8048E728;
u8 *TParticleCtrl__sub_8008655C(u8 *arg0, s16 arg1);
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK lbl_8048E6A8[];
u8 *TParticleCtrl__sub_800858D0(u8 *arg0, s32 arg1, s32 arg2);
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK lbl_8048E6DC[];
extern s32 lbl_805D2930;
extern const f32 lbl_805D9484;
u8 *TParticleCtrl__sub_80085E78(u8 *arg0, s32 arg1, s32 arg2);
extern Col_80085798 lbl_804393DC;
extern const f32 lbl_805D9478;
s32 check_demo_mode__10TObjPlayerFv(void);
void TObjRoomId__sub_80141CF4(void *dst, Col_80085798 *src, f32 t);
void TParticleCtrl__sub_80085798(Obj_80085798 *self);
M2C_UNK fn_803DC86C(int, int, int, int);
M2C_UNK set_chunk_material_color(void *);
void TParticleCtrl__sub_80086418(Ctrl_80086418 *self, s32 mode);
}

extern "C" {

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1);
void *TParticleCtrl__sub_80085E20(void *arg0, s16 arg1);
void check_player_proximity__13TParticleCtrlFPv(u8 *arg0);
void mark_active__13TParticleCtrlFPv(void *arg0);
f32 horizontal_distance_squared(void *, void *);
u32 get_player_by_client_id(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK get_object__13TParticleCtrlFPv(M2C_UNK);

extern s32 lbl_805D2930;
extern s32 lbl_805D53A0;
extern const f32 lbl_805D947C;
extern const f32 lbl_805D9480;

void TParticleCtrl__sub_80085798(Obj_80085798 *self) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        Col_80085798 c = lbl_804393DC;
        TObjRoomId__sub_80141CF4(self->target, &c, lbl_805D9478);
    }
}

void check_player_proximity__13TParticleCtrlFPv(u8 *arg0) {
    u32 temp_r3;

    temp_r3 = get_player_by_client_id((void *) (lbl_805D53A0));
    if ((temp_r3 != 0U) && (horizontal_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < lbl_805D947C)) {
        if (M2C_FIELD(arg0, f32 *, 0x68) > lbl_805D9480) {
            lbl_805D2930 = 1;
            return;
        }
        lbl_805D2930 = 0;
    }
}

extern M2C_UNK lbl_8048E6A8[];

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E6A8;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8048E6DC[];

typedef char RecoveredGlobal_800858D0_lbl_8048E6A8_size[sizeof(RecoveredGlobal_800858D0_lbl_8048E6A8) == 0x34 ? 1 : -1];
u8 *TParticleCtrl__sub_800858D0(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800858D0_lbl_8048E6A8 *)&lbl_8048E6A8).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    return arg0;
}

u8 *TParticleCtrl__sub_8008592C(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x90));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TParticleCtrl__sub_800858D0((u8 *)(temp_r3), (s32)(arg0), (s32)(tl_particle)));
    }
    return var_r0;
}

u8 *TParticleCtrl__sub_8008598C(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xAC));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TParticleCtrl__sub_80085E78((u8 *)(temp_r3), (s32)(arg0), (s32)(tl_particle)));
    }
    return var_r0;
}

void *TParticleCtrl__sub_80085E20(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E6DC;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70_size[sizeof(RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_80085E78_lbl_8048E6DC_size[sizeof(RecoveredGlobal_80085E78_lbl_8048E6DC) == 0x34 ? 1 : -1];
u8 *TParticleCtrl__sub_80085E78(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80085E78_lbl_8048E6DC *)&lbl_8048E6DC).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805D9484;
    lbl_805D2930 = 1;
    return arg0;
}

s32 TParticleCtrl__sub_800861F4(u8 *arg0) {
    return *M2C_FIELD(M2C_FIELD(&TParticleCtrl__data_80511F70.value, M2C_UNK *, (M2C_FIELD(arg0, u16 *, 0x1C) * 4)), s32 **, 0x28) & 1;
}

void mark_active__13TParticleCtrlFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x24) = (u16) (M2C_FIELD(arg0, u16 *, 0x24) | 0x2000);
    get_object__13TParticleCtrlFPv(0x1F);
}
typedef char RecoveredGlobal_8008655C_lbl_8048E728_size[sizeof(RecoveredGlobal_8008655C_lbl_8048E728) == 0x18 ? 1 : -1];

void TParticleCtrl__sub_80086418(Ctrl_80086418 *self, s32 mode) {
    FCol_80086418 f;
    if (mode != 0) {
        fn_803DC86C(1, 4, 1, 0);
        Col_80086418 c = self->color;
        f.a = 0.0f;
        f.r = -(1.0f - c.r / 255.0f);
        f.g = -(1.0f - c.g / 255.0f);
        f.b = -(1.0f - c.b / 255.0f);
    } else {
        fn_803DC86C(1, 4, 5, 0);
        Col_80086418 c = self->color;
        f.a = -(1.0f - c.a / 255.0f);
        f.r = 0.0f;
        f.g = 0.0f;
        f.b = 0.0f;
    }
    set_chunk_material_color(&f);
}

u8 *TParticleCtrl__sub_8008655C(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8048E728.value;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}

}
