#include "pso/TBoss2Tentacle.h"

TBoss2Tentacle::~TBoss2Tentacle() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V3_80039DE0 { f32 x, y, z; };

struct Obj_80039DE0 { u8 pad[0x30]; V3_80039DE0 pts[14]; s32 vals[14]; };

struct G_80039C44 { u8 pad[4]; u32 count; };

struct Obj_80039C44 { u8 pad[0x114]; f32 pos; f32 speed; };

struct Node_8003933C { char pad0[8]; f32 x, y, z; char pad14[8]; s32 v; char pad20[0x18]; };

struct Vec_8003933C { f32 x, y, z; };

struct Ten_8003933C { char pad0[0x30]; Vec_8003933C pos[14]; s32 vals[14]; };

extern "C" {
u8 TBoss2Tentacle__sub_80039CA0(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss2Tentacle__sub_80039DB0(void* p);
void TBoss2Tentacle__sub_80039E88(u8 *arg0, u8 *arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern V3_80039DE0 TBoss2Tentacle__data_804FE8E8[];
extern s32 lbl_804FE990[];
void TBoss2Tentacle__sub_80039DE0(Obj_80039DE0 *self);
extern G_80039C44 *TBoss2Tentacle__data_805D4BD4;
void TBoss2Tentacle__sub_80039C44(Obj_80039C44 *self);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9730(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TObjFish__sub_803E46BC(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(void *, int, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern Node_8003933C lbl_804FE5D8[];
extern M2C_UNK *lbl_805D4BD0;
extern G_80039C44 *TBoss2Tentacle__data_805D4BD4;
extern s32 lbl_805D4BD8;
extern const f32 lbl_805D8528;
void render__14TBoss2TentacleFv(u8 *arg0);
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

struct G_80039C44;
void render__14TBoss2TentacleFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 i;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    u8 *temp_r7;
    u8 *temp_r8;
    set_global_flag__10TObjPlayerFv();
    set_global_param__8TObjFishFi((void *) (lbl_805D4BD8));
    TObjPlayer__sub_803D9B2C();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        TObjPlayer__sub_803D9730((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x110)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x11C)));
        TObjEneSlimeOne__sub_803E4AF4((void *) (lbl_805D4BD0), (int) (TBoss2Tentacle__data_805D4BD4), (f32) (M2C_FIELD(arg0, f32 *, 0x114)));
        break;
    case 1:
    case 4:
    case 5:
        TObjPlayer__sub_803D9730((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x110)));
        rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x120)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x11C)));
        TObjEneSlimeOne__sub_803E4AF4((void *) (lbl_805D4BD0), (int) (TBoss2Tentacle__data_805D4BD4), (f32) (M2C_FIELD(arg0, f32 *, 0x114)));
        break;
    case 2:
        TObjPlayer__sub_803D9730((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x110)));
        rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x120)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x11C)));
        TObjFish__sub_803E46BC((void *) (lbl_805D4BD0));
        break;
    case 3:
        TOHangerMachine01__sub_803D9C00((void *) ((u8 *)(arg0) + 0x140));
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (lbl_805D8528), (f32) (lbl_805D8528), (f32) (lbl_805D8528));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x11C)));
        rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x120)));
        for (i = 0; i < 14; i++) {
            lbl_804FE5D8[i].x = ((Ten_8003933C *)arg0)->pos[i].x;
            lbl_804FE5D8[i].y = ((Ten_8003933C *)arg0)->pos[i].y;
            lbl_804FE5D8[i].z = ((Ten_8003933C *)arg0)->pos[i].z;
            lbl_804FE5D8[i].v = ((Ten_8003933C *)arg0)->vals[i];
        }
        TObjFish__sub_803E46BC((void *) (lbl_804FE5D8));
        break;
    }
    TObjPlayer__sub_803D9B78();
    clear_global_state__10TObjPlayerFv();
}

void TBoss2Tentacle__sub_8003998C(void) {  }
void TBoss2Tentacle__sub_80039990(void) {  }

void TBoss2Tentacle__sub_80039C44(Obj_80039C44 *self) {
    f32 n = (f32)(TBoss2Tentacle__data_805D4BD4->count - 1);
    self->pos += self->speed;
    if (self->pos >= n) {
        self->pos -= n;
    }
}

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
