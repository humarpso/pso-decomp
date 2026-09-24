#include "pso/TBoss2Tentacle.h"

TBoss2Tentacle::~TBoss2Tentacle() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V3_80039DE0 { f32 x, y, z; };

struct Obj_80039DE0 { u8 pad[0x30]; V3_80039DE0 pts[14]; s32 vals[14]; };

extern "C" {
u8 TBoss2Tentacle__sub_80039CA0(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss2Tentacle__sub_80039DB0(void* p);
void TBoss2Tentacle__sub_80039E88(u8 *arg0, u8 *arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern V3_80039DE0 TBoss2Tentacle__data_804FE8E8[];
extern s32 lbl_804FE990[];
void TBoss2Tentacle__sub_80039DE0(Obj_80039DE0 *self);
}

extern "C" {

void TBoss2Tentacle__sub_8003998C(void);
void TBoss2Tentacle__sub_80039990(void);
void TBoss2Tentacle__sub_80039CB4(void* p);
void TBoss2Tentacle__sub_80039D50(void* p);
void TBoss2Tentacle__sub_80039D64(void* a0);
void TBoss2Tentacle__sub_80039D88(void* p);
void TBoss2Tentacle__sub_80039D98(void* p);
void TBoss2Tentacle__sub_80039DA4(void* p);
void TBoss2Tentacle__sub_80039DB0(void* p);
void TBoss2Tentacle__sub_80039DBC(void* p);
void TBoss2Tentacle__sub_80039DC8(void* p);
void TBoss2Tentacle__sub_80039DD4(void* p);
void TBoss2Tentacle__sub_80039E54(void* a0);
void TBoss2Tentacle__sub_80039E68(void* p);
void TBoss2Tentacle__sub_8003A0A8(void);
void forward_80039DC8__14TBoss2TentacleFPv(void* p);
void init_motion_from_table__14TBoss2TentacleFPv(void* a0);
void reset__14TBoss2TentacleFPv(void* a0);

void TBoss2Tentacle__sub_8003998C(void) {  }
void TBoss2Tentacle__sub_80039990(void) {  }

u8 TBoss2Tentacle__sub_80039CA0(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x1C) == 4);
}

void TBoss2Tentacle__sub_80039CB4(void* p) { *(s32*)((char*)p + 0x11c) = 0; *(s32*)((char*)p + 0x120) = 16384; }

    extern const float TBoss2Tentacle__data_805D8530;
    extern const float TBoss2Tentacle__data_805D8534;
    extern const float lbl_805D8544;
void reset__14TBoss2TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x11c) = 0; *(int*)((char*)a0 + 0x120) = 0; *(int*)((char*)a0 + 0x24) = 0; TBoss2Tentacle__sub_80039DE0((Obj_80039DE0 *)(a0)); *(float*)((char*)a0 + 0x138) = lbl_805D8544; *(int*)((char*)a0 + 0x14c) = 0; *(float*)((char*)a0 + 0x13c) = TBoss2Tentacle__data_805D8534; *(float*)((char*)a0 + 0x150) = TBoss2Tentacle__data_805D8530; }

    extern int TBoss2Tentacle__data_80435B78[];
void init_motion_from_table__14TBoss2TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x11c) = TBoss2Tentacle__data_80435B78[*(int*)((char*)a0 + 0x2c)]; *(int*)((char*)a0 + 0x120) = 16384; *(int*)((char*)a0 + 0x24) = 0; }

void TBoss2Tentacle__sub_80039D50(void* p) { *(s32*)((char*)p + 0x11c) = 0; *(s32*)((char*)p + 0x120) = 16384; }

    extern int TBoss2Tentacle__data_80435B78[];
void TBoss2Tentacle__sub_80039D64(void* a0) { *(int*)((char*)a0 + 0x11c) = TBoss2Tentacle__data_80435B78[*(int*)((char*)a0 + 0x2c)]; *(int*)((char*)a0 + 0x120) = 0; }

void TBoss2Tentacle__sub_80039D88(void* p) { *(s32*)((char*)p + 0x120) = 0; *(s32*)((char*)p + 0x11c) = 0; }
void TBoss2Tentacle__sub_80039D98(void* p) { *(s32*)((char*)p + 0x20) = 5; }
void TBoss2Tentacle__sub_80039DA4(void* p) { *(s32*)((char*)p + 0x20) = 3; }
void TBoss2Tentacle__sub_80039DB0(void* p) { *(s32*)((char*)p + 0x20) = 2; }
void TBoss2Tentacle__sub_80039DBC(void* p) { *(s32*)((char*)p + 0x20) = 4; }
void TBoss2Tentacle__sub_80039DC8(void* p) { *(s32*)((char*)p + 0x20) = 1; }
void TBoss2Tentacle__sub_80039DD4(void* p) { *(s32*)((char*)p + 0x20) = 0; }

    extern const float lbl_805D8558;

void TBoss2Tentacle__sub_80039DE0(Obj_80039DE0 *self) {
    s32 i;
    for (i = 0; i < 14; i++) {
        VecCopy__FP3VecPC3Vec(&self->pts[i], &TBoss2Tentacle__data_804FE8E8[i]);
        self->vals[i] = lbl_804FE990[i];
    }
}

void TBoss2Tentacle__sub_80039E54(void* a0) { *(float*)((char*)a0 + 0x118) = lbl_805D8558; *(int*)((char*)a0 + 0x124) = 3038; }

void TBoss2Tentacle__sub_80039E68(void* p) { TBoss2Tentacle__sub_80039D98((void*)(p)); }

void TBoss2Tentacle__sub_80039E88(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_r5;
    var_r5 = arg2;
    if ((var_r5 <= 0) || (var_r5 >= 0x258)) {
        var_r5 = 0x78;
    }
    M2C_FIELD(arg0, s32 *, 0x154) = var_r5;
    VecCopy__FP3VecPC3Vec(arg0 + 0x12C, arg1);
    TBoss2Tentacle__sub_80039DB0((void*)(arg0));
}

void forward_80039DC8__14TBoss2TentacleFPv(void* p) { TBoss2Tentacle__sub_80039DC8((void*)(p)); }

void TBoss2Tentacle__sub_8003A0A8(void) {  }

}
