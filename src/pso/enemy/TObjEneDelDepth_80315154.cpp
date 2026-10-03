#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_80315380 { f32 x, y, z; };

struct Obj_80315380 { u8 pad[0x38]; Vec_80315380 pos; u8 pad44[0x60 - 0x44]; s32 x60; };

extern "C" {
void TObjEneDelDepth__sub_803152A0(u8 *arg0);
void TObjEneDelDepth__sub_803152C0(u8 *arg0);
int TObjEneDelDepth__sub_803154A8(void*, void*);
void TObjEneDelDepth__vt59(u8 *arg0);
int TObjEneDelDepth__sub_803154A8(void*, void*);
void TObjEneDelDepth__vt60(u8 *arg0);
s32 project_actor_to_ground(void *, Vec_80315380 *, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 TObjEneDelDepth__data_805DF268;
extern const f32 TObjEneDelDepth__data_805DF270;
extern const f32 TObjEneDelDepth__data_805DF298;
s32 TObjEneDelDepth__sub_80315380(Obj_80315380 *arg0);
}

extern "C" {

void TObjEneDelDepth__vt61(void* p);
void init_params__15TObjEneDelDepthFPv(void* a0);
int set_default_depth_offset__15TObjEneDelDepthFPv(void* p);
void set_draw_mode__15TObjEneDelDepthFPvi(void *arg0, s32 arg1);
int TObjEneDelDepth__sub_803154A8(void*, void*);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_depth_offset__15TObjEneDelDepthFPvii(void*, int, int);

    extern const float TObjEneDelDepth__data_805DF258;
    extern const float TObjEneDelDepth__data_805DF278;
void init_params__15TObjEneDelDepthFPv(void* a0) { TObjEneDelDepth__sub_80315380((Obj_80315380 *)(a0)); *(float*)((char*)a0 + 0x39c) = TObjEneDelDepth__data_805DF278; *(float*)((char*)a0 + 0x3a8) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a4) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a0) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x398) = TObjEneDelDepth__data_805DF258; *(int*)((char*)a0 + 0x3c0) = 0; TObjEneDelDepth__sub_80316488((void*)(*(int*)((char*)a0 + 0x37c)), (void*)6); set_draw_mode__15TObjEneDelDepthFPvi((void *)(a0), (s32)((void*)0)); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x4040000); set_default_depth_offset__15TObjEneDelDepthFPv((void*)(a0)); }

int set_default_depth_offset__15TObjEneDelDepthFPv(void* p) { return set_depth_offset__15TObjEneDelDepthFPvii(p, 15, 15); }

void TObjEneDelDepth__vt59(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) != 0xB) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        TObjEneDelDepth__sub_803154A8((void*)(arg0), (void*)(0xB));
    }
}

void TObjEneDelDepth__vt60(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) != 0xC) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        TObjEneDelDepth__sub_803154A8((void*)(arg0), (void*)(0xC));
    }
}

void TObjEneDelDepth__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 13) { TObjEneDelDepth__sub_803154A8(p, (void*)13); } }

void TObjEneDelDepth__sub_803152A0(u8 *arg0) {
    u8 *temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3F0) == 0) {
        temp_r3 = M2C_FIELD(arg0, u8 **, 0x380);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
    }
}

extern s32 lbl_805DF2D4;

void TObjEneDelDepth__sub_803152C0(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = M2C_FIELD(arg0, u8 **, 0x380);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
}

void set_draw_mode__15TObjEneDelDepthFPvi(void *arg0, s32 arg1) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r6_2;

    temp_r6 = M2C_FIELD(arg0, void **, 0x380);
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xF5FFF297);
    switch (arg1) {
    case 0:
        temp_r5 = M2C_FIELD(arg0, void **, 0x380);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x0A000000 | 0x528);
        M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
        return;
    case 1:
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x380);
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 0x18) | 0x0A000000 | 0x28);
        M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x3F0) = 1;
        return;
    case 3:
        temp_r6_2 = M2C_FIELD(arg0, void **, 0x380);
        M2C_FIELD(temp_r6_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6_2, s32 *, 0x18) | lbl_805DF2D4);
        M2C_FIELD(arg0, s32 *, 0x3F0) = 1;
        return;
    }
}
#pragma push
#pragma fp_contract on
s32 TObjEneDelDepth__sub_80315380(Obj_80315380 *arg0) {
    Vec_80315380 v = arg0->pos;
    v.x = TObjEneDelDepth__data_805DF270 * cos_table_lookup(arg0->x60) + v.x;
    v.y = v.y + TObjEneDelDepth__data_805DF268;
    v.x = TObjEneDelDepth__data_805DF270 * sin_table_lookup(arg0->x60) + v.x;
    if (project_actor_to_ground(arg0, &v, 0) != 0) {
        arg0->pos.y += TObjEneDelDepth__data_805DF298 * (v.y - arg0->pos.y);
        return 1;
    }
    return 0;
}
#pragma pop

}
