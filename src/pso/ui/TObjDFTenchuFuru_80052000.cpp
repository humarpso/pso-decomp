#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Vec_80052090 {
    f32 x, y, z;
} Vec_80052090;

typedef struct Obj_80052090 {
    u8 pad0[0x38];
    Vec_80052090 pos;
    u8 pad44[0x90 - 0x44];
    s32 state;
    f32 f94;
} Obj_80052090;

extern "C" {
f32 TBoss6Kakusan__sub_803D8BD8(Vec_80052090 *);
void TBoss6Type1__sub_803D9370(Vec_80052090 *, Vec_80052090 *);
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;
extern const f32 lbl_805D8A5C;
extern const f32 lbl_805D8AC4;
extern const f32 lbl_805D8AC8;
extern const f32 lbl_805D8ACC;
extern const f32 lbl_805D8AD0;
extern const f32 lbl_805D8AD4;
void run_task__14TObjDFUsoTowerFv(Obj_80052090 *arg0);
}

extern "C" {

void render__14TObjDFUsoTowerFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK sync_player_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80052390();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK fn_803DC86C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;

void render__14TObjDFUsoTowerFv(u8 *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
    if (lbl_805D8A30 != temp_f1) {
        if (temp_f1 < lbl_805D8A34) {
            TObjPlayer__sub_80052390();
            fn_803DC86C(1, 4, 5, 0);
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        pop_matrix();
        if (M2C_FIELD(arg0, f32 *, 0x94) < lbl_805D8A34) {
            sync_player_globals__10TObjPlayerFv();
        }
    }
}
#pragma opt_common_subs off
void run_task__14TObjDFUsoTowerFv(Obj_80052090 *arg0) {
    f32 d;
    f32 r;
    switch (arg0->state) {
    case 0: {
        Vec_80052090 v = *(Vec_80052090 *)(lbl_805D4DF0 + 0x178);
        TBoss6Type1__sub_803D9370(&v, &arg0->pos);
        v.y = lbl_805D8A30;
        d = TBoss6Kakusan__sub_803D8BD8(&v);
        if (d <= lbl_805D8AC4) {
            r = lbl_805D8A30;
        } else if (d >= lbl_805D8AC8) {
            r = lbl_805D8A34;
        } else {
            r = (d - lbl_805D8AC4) / lbl_805D8A5C;
        }
        arg0->f94 = lbl_805D8ACC * r;
        break;
    }
    case 1:
        r = arg0->f94 + lbl_805D8AD0;
        arg0->f94 = r;
        if (r > lbl_805D8A34) {
            arg0->f94 = lbl_805D8A34;
        }
        break;
    case 2:
        r = arg0->f94 + lbl_805D8AD4;
        arg0->f94 = r;
        if (r < lbl_805D8A30) {
            arg0->f94 = lbl_805D8A30;
        }
        break;
    }
}

}
