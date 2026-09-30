#include "types.h"
typedef struct Vec_80053D4C {
    f32 x, y, z;
} Vec_80053D4C;

typedef struct Spot_80053D4C {
    Vec_80053D4C pos;
    u8 padc[0x18 - 0xC];
} Spot_80053D4C;

typedef struct Part_80053D4C {
    Vec_80053D4C pos;
    u8 padc[0x1C - 0xC];
    Vec_80053D4C local;
    u8 pad28[0x2C - 0x28];
} Part_80053D4C;

typedef struct Obj_80053D4C {
    u8 pad0[0x38];
    Vec_80053D4C pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0x394 - 0x64];
    Part_80053D4C *parts;
    u8 pad398[0x438 - 0x398];
    Spot_80053D4C spots[3];
} Obj_80053D4C;

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TBoss6Type1__sub_803D9370(Vec_80053D4C *, Vec_80053D4C *);
void fn_80053D4C(Obj_80053D4C *arg0);
}

extern "C" {

#pragma fp_contract on
void fn_80053D4C(Obj_80053D4C *arg0) {
    Part_80053D4C *q;
    s32 i;
    f32 s;
    f32 c;
    q = arg0->parts;
    for (i = 0; i < 3; i++, q++) {
        Vec_80053D4C v = arg0->spots[i].pos;
        VecCopy__FP3VecPC3Vec(&q->local, &v);
        TBoss6Type1__sub_803D9370(&v, &arg0->pos);
        s = TBoss8Dragon__sub_803D64C0(-arg0->angle);
        c = TBoss8Dragon__sub_803D64DC(-arg0->angle);
        Vec_80053D4C t = v;
        v.x = c * t.x + s * t.z;
        v.z = -s * t.x + c * t.z;
        VecCopy__FP3VecPC3Vec(q, &v);
    }
}

}
