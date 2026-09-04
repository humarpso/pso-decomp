#include "pso/TObjDFYutai.h"

TObjDFYutai::~TObjDFYutai() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__11TObjDFYutaiFv(void *arg0, s32 arg1, s32 arg2, s16 arg3);
M2C_UNK __ct__7TObjectFP7TObject();

extern void *__vt__11TObjDFYutai[];
extern s32 lbl_805D27CC;
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;
extern const f32 lbl_805D8A38;
extern const f32 lbl_805D8A3C;
extern const f32 lbl_805D8A40;

void *__ct__11TObjDFYutaiFv(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    s32 temp_r0;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, void **, 0x18) = __vt__11TObjDFYutai;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D27CC;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x20) = arg3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805D8A34;
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D8A38;
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805D8A30;
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D8A3C;
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805D8A34;
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D8A40;
        break;
    }
    return arg0;
}

}
