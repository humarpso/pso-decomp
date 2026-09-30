#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Vec_800D0E14 {
    f32 x, y, z;
} Vec_800D0E14;

typedef struct Hit_800D0E14 {
    u32 flags;
    Vec_800D0E14 *pos;
} Hit_800D0E14;

typedef struct Ene_800D0E14 {
    u8 pad0[0x38];
    Vec_800D0E14 pos;
    u8 pad44[0x2FC - 0x44];
    u8 f2FC[0x394 - 0x2FC];
    Vec_800D0E14 dest;
    u8 pad3A0[0x488 - 0x3A0];
    Vec_800D0E14 home;
} Ene_800D0E14;

typedef struct Ene_800D0FDC {
    u8 pad0[0x60];
    s32 angle;
    u8 pad64[0x478 - 0x64];
    s32 turn;
} Ene_800D0FDC;

extern "C" {
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
extern u8 *TObjEneBm5GibonU__data_805D51D0;
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 TObjEneBm5GibonU__data_805DA194;
extern const f32 lbl_805DA254;
void TObjEneBm5GibonU__sub_800D10A0(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
Hit_800D0E14 *TObjButterflyLobby__sub_8007A5D8(void *, void *, s32);
void TObjBoss2Tunnel__sub_8007E7D8(f32 *, f32 *, s32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(Vec_800D0E14 *);
f32 rand_range__9TObjEneDDFff(void *, f32, f32);
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 TObjEneBm5GibonU__data_805DA194;
extern const f32 lbl_805DA214;
extern const f32 lbl_805DA24C;
extern const f32 lbl_805DA250;
void TObjEneBm5GibonU__sub_800D0E14(Ene_800D0E14 *arg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);
void TObjEneBm5GibonU__sub_800D0FDC(Ene_800D0FDC *arg0, s32 arg1);
}

extern "C" {

void approach_target__16TObjEneBm5GibonUFPvf(void *arg0, f32 farg0);

void approach_target__16TObjEneBm5GibonUFPvf(void *arg0, f32 farg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x498);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x494);
    if (temp_f2 != temp_f0) {
        if (temp_f2 > temp_f0) {
            M2C_FIELD(arg0, f32 *, 0x498) = (f32) (temp_f2 - farg0);
            if (M2C_FIELD(arg0, f32 *, 0x498) < M2C_FIELD(arg0, f32 *, 0x494)) {
                M2C_FIELD(arg0, f32 *, 0x498) = M2C_FIELD(arg0, f32 *, 0x494);
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x498) = (f32) (temp_f2 + farg0);
            if (M2C_FIELD(arg0, f32 *, 0x498) > M2C_FIELD(arg0, f32 *, 0x494)) {
                M2C_FIELD(arg0, f32 *, 0x498) = M2C_FIELD(arg0, f32 *, 0x494);
            }
        }
    }
}

#pragma push
#pragma fp_contract on
void TObjEneBm5GibonU__sub_800D0E14(Ene_800D0E14 *arg0) {
    Vec_800D0E14 v;
    f32 d;
    Hit_800D0E14 *hit;
    v.x = arg0->pos.x - arg0->home.x;
    v.y = TObjEneBm5GibonU__data_805DA15C;
    v.z = arg0->pos.z - arg0->home.z;
    clamp_velocity__15TObjBoss2TunnelFPv(&v);
    TObjBoss2Tunnel__sub_8007E7D8(&v.x, &v.z, (s32)(lbl_805DA24C * calc_boss4_scale__10TObjPlayerFi(arg0)) + 0x4000);
    d = lbl_805DA214 * rand_range__9TObjEneDDFff(arg0, TObjEneBm5GibonU__data_805DA194, TObjEneBm5GibonU__data_805DA168);
    arg0->dest.x = v.x * d + arg0->home.x;
    arg0->dest.z = v.z * d + arg0->home.z;
    hit = TObjButterflyLobby__sub_8007A5D8(arg0->f2FC, &arg0->dest, 0x88E0);
    if (hit != NULL) {
        v.x = hit->pos->x - arg0->pos.x;
        v.z = hit->pos->z - arg0->pos.z;
        d = clamp_velocity__15TObjBoss2TunnelFPv(&v) - lbl_805DA250;
        arg0->dest.x = v.x * d + arg0->pos.x;
        arg0->dest.z = v.z * d + arg0->pos.z;
    }
}
#pragma pop

void TObjEneBm5GibonU__sub_800D0FDC(Ene_800D0FDC *arg0, s32 arg1) {
    s32 d;
    d = TBoss4Type2__sub_80141FA8(arg0->angle, arg1);
    if (d > 0x3000) {
        d = 0x3000;
    } else if (d < -0x3000) {
        d = -0x3000;
    }
    if (arg0->turn * d >= 0) {
        arg0->turn = TObjPlayer__sub_801423A4(arg0->turn, d, 0x400);
    } else if (arg0->turn * TBoss4Type2__sub_80141FA8(arg0->turn, d) >= 0) {
        if (arg0->turn >= 0) {
            arg0->turn -= 0x400;
        } else {
            arg0->turn += 0x400;
        }
    } else {
        arg0->turn = TObjPlayer__sub_801423A4(arg0->turn, d, 0x400);
    }
    arg0->turn = (s16)arg0->turn;
}

void TObjEneBm5GibonU__sub_800D10A0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) get_random_float__21TObjEneMe3ShinowaRealFv((f32) (M2C_FIELD(arg0, f32 *, 0x354)));
    if (M2C_FIELD(arg0, f32 *, 0x358) >= TObjEneBm5GibonU__data_805DA168) {
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x470) = 1;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x368) >= 1) {
        M2C_FIELD(arg0, s32 *, 0x464) = 1;
        M2C_FIELD(arg0, s32 *, 0x468) = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5GibonU__data_805D51D0, u8 **, 0x42C), s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5GibonU__data_805D51D0, u8 **, 0x42C), s32 *, 0x1C);
    } else {
        M2C_FIELD(arg0, s32 *, 0x464) = 0;
        M2C_FIELD(arg0, s32 *, 0x468) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5GibonU__data_805D51D0, u8 **, 0x42C), s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TObjEneBm5GibonU__data_805D51D0, u8 **, 0x42C), s32 *, 0xC);
    }
    M2C_FIELD(arg0, f32 *, 0x4A0) = (f32) (lbl_805DA254 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x4A4) = (f32) (TObjEneBm5GibonU__data_805DA194 + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, f32 *, 0x4A8) = (f32) (TObjEneBm5GibonU__data_805DA194 + M2C_FIELD(arg0, f32 *, 0x364));
}

}
