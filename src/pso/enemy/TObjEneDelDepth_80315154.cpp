#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneDelDepth__sub_803152A0(void);
int TObjEneDelDepth__sub_803152C0(void);
int TObjEneDelDepth__vt59(void);
int TObjEneDelDepth__vt60(void);
void TObjEneDelDepth__vt61(void* p);
void init_params__15TObjEneDelDepthFPv(void* a0);
int set_default_depth_offset__15TObjEneDelDepthFPv(void* p);
void set_draw_mode__15TObjEneDelDepthFPvi(void *arg0, s32 arg1);
int TObjEneDelDepth__sub_80315380(void);
int TObjEneDelDepth__sub_803154A8(void*, void*);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_depth_offset__15TObjEneDelDepthFPvii(void*, int, int);

    extern const float TObjEneDelDepth__data_805DF258;
    extern const float TObjEneDelDepth__data_805DF278;
void init_params__15TObjEneDelDepthFPv(void* a0) { TObjEneDelDepth__sub_80315380(); *(float*)((char*)a0 + 0x39c) = TObjEneDelDepth__data_805DF278; *(float*)((char*)a0 + 0x3a8) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a4) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a0) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x398) = TObjEneDelDepth__data_805DF258; *(int*)((char*)a0 + 0x3c0) = 0; TObjEneDelDepth__sub_80316488((void*)(*(int*)((char*)a0 + 0x37c)), (void*)6); set_draw_mode__15TObjEneDelDepthFPvi((void *)(a0), (s32)((void*)0)); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x4040000); set_default_depth_offset__15TObjEneDelDepthFPv((void*)(a0)); }

int set_default_depth_offset__15TObjEneDelDepthFPv(void* p) { return set_depth_offset__15TObjEneDelDepthFPvii(p, 15, 15); }

int TObjEneDelDepth__vt59(void) { return 0; }
int TObjEneDelDepth__vt60(void) { return 0; }

void TObjEneDelDepth__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 13) { TObjEneDelDepth__sub_803154A8(p, (void*)13); } }

int TObjEneDelDepth__sub_803152A0(void) { return 0; }
int TObjEneDelDepth__sub_803152C0(void) { return 0; }

extern s32 lbl_805DF2D4;

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

}
