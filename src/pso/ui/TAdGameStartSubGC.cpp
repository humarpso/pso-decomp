#include "pso/TAdGameStartSubGC.h"

TAdGameStartSubGC::~TAdGameStartSubGC() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DE9A0;
extern const f32 lbl_805DE9A4;
extern const f32 lbl_805DE9A8;
extern const f32 lbl_805DE9AC;
void run_task__17TAdGameStartSubGCFv(u8 *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 get_instance__10TObjPlayerFv(void);
extern M2C_UNK __vt__17TAdGameStartSubGC[];
extern s32 lbl_805D3FB0;
extern s32 lbl_805D6908;
extern const f32 lbl_805DE9A0;
extern const f32 lbl_805DE9A8;
extern const f32 lbl_805DE9B0;
extern const f32 lbl_805DE9B4;
extern const f32 lbl_805DE9B8;
extern const f32 lbl_805DE9C0;
extern const f32 lbl_805DE9C4;
u8 *__ct__17TAdGameStartSubGCFv(u8 *arg0, void *arg1, u8 *arg2);
}

extern "C" {

void render__17TAdGameStartSubGCFv(void* p);
int TAdGameStartSubGC__sub_802E6864(void*);
int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);

void render__17TAdGameStartSubGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); TAdGameStartSubGC__sub_802E6864(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }
#pragma push
#pragma fp_contract on
void run_task__17TAdGameStartSubGCFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_r4;
    s32 var_r0;
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + 1);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r4 < 4) {
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) -((lbl_805DE9A4 * (f32) temp_r4) - lbl_805DE9A0);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) -((lbl_805DE9A4 * (f32) M2C_FIELD(arg0, s32 *, 0x84)) - lbl_805DE9A0);
    } else if (temp_r4 > 0x1C) {
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) -((lbl_805DE9AC * (f32) (temp_r4 - 0x1D)) - lbl_805DE9A8);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) -((lbl_805DE9AC * (f32) (M2C_FIELD(arg0, s32 *, 0x84) - 0x1D)) - lbl_805DE9A8);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x84) > 0x1D) {
            M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) - 0x55);
        }
        var_r0 = M2C_FIELD(arg0, s32 *, 0x80);
        if (var_r0 < 0) {
            var_r0 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x80) = var_r0;
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((M2C_FIELD(arg0, f32 *, 0x70) * (M2C_FIELD(arg0, f32 *, 0x20) - temp_f2)) + temp_f2);
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x24) - temp_f2_2)) + temp_f2_2);
    temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((M2C_FIELD(arg0, f32 *, 0x70) * (M2C_FIELD(arg0, f32 *, 0x28) - temp_f2_3)) + temp_f2_3);
    temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x2C) - temp_f2_4)) + temp_f2_4);
}
#pragma pop

#pragma push
#pragma fp_contract on
#define F(o) M2C_FIELD(arg0, f32 *, o)
#define I(o) M2C_FIELD(arg0, s32 *, o)
u8 *__ct__17TAdGameStartSubGCFv(u8 *arg0, void *arg1, u8 *arg2) {
    s32 t;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdGameStartSubGC;
    I(0) = lbl_805D3FB0;
    I(0x1C) = M2C_FIELD(arg2, s32 *, 0);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x60, arg2 + 4);
    t = M2C_FIELD(arg2, s32 *, 0xC);
    I(0x7C) = t;
    I(0x84) = -1;
    F(0x70) = lbl_805DE9A0;
    F(0x74) = lbl_805DE9A0;
    I(0x80) = 0xFF;
    lbl_805D6908 = get_instance__10TObjPlayerFv();
    F(0x20) = lbl_805DE9B0 * (f32)I(0x1C) + F(0x60);
    F(0x24) = F(0x64);
    F(0x28) = lbl_805DE9B0 * (f32)(I(0x1C) + 1) + F(0x60);
    F(0x2C) = lbl_805DE9B4 + F(0x64);
    F(0x68) = lbl_805DE9B8 * (F(0x28) - F(0x20)) + F(0x20);
    F(0x6C) = lbl_805DE9B8 * (F(0x2C) - F(0x24)) + F(0x24);
    F(0x50) = lbl_805DE9B0 * (f32)I(0x1C) / 512.0f;
    F(0x54) = lbl_805DE9C0;
    F(0x58) = (lbl_805DE9B0 * (f32)(I(0x1C) + 1) - lbl_805DE9A8) / 512.0f;
    F(0x5C) = lbl_805DE9C4;
    return arg0;
}
#undef F
#undef I
#pragma pop

}
