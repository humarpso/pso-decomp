#include "pso/TObjSuisoChip.h"

TObjSuisoChip::~TObjSuisoChip() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *__ct__13TObjSuisoChipFv(u8 *arg0, u8 *arg1);
u8 *init__13TObjSuisoChipFPvPv(u8 *arg0, u8 *arg1);
M2C_UNK TObjChip__sub_80180BD4(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK __ct__8TObjChipFv(void *, void *);

extern M2C_UNK __vt__13TObjSuisoChip[];
extern s32 lbl_805D3E08;
extern s32 tl_05;
extern const f32 lbl_805DDFF8;

u8 *__ct__13TObjSuisoChipFv(u8 *arg0, u8 *arg1) {
    __ct__8TObjChipFv((void *) (arg0), (void *) (tl_05));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjSuisoChip;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E08;
    if (arg1 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x234), (void *) (arg1 + 0x38));
        M2C_FIELD(arg0, s32 *, 0x240) = (s32) M2C_FIELD(arg1, s32 *, 0x60);
    } else {
        M2C_FIELD(arg0, f32 *, 0x238) = (f32) lbl_805DDFF8;
        M2C_FIELD(arg0, f32 *, 0x238) = (f32) lbl_805DDFF8;
        M2C_FIELD(arg0, f32 *, 0x234) = (f32) lbl_805DDFF8;
        M2C_FIELD(arg0, s32 *, 0x240) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x244) = 0;
    M2C_FIELD(arg0, s32 *, 0x248) = 0x14;
    return arg0;
}

extern M2C_UNK __vt__13TObjSuisoChip[];
extern s32 lbl_805D3E08;
extern s32 tl_05;
extern const f32 lbl_805DDFF8;

u8 *init__13TObjSuisoChipFPvPv(u8 *arg0, u8 *arg1) {
    TObjChip__sub_80180BD4((void *) (arg0), (void *) (tl_05));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjSuisoChip;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E08;
    if (arg1 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x234), (void *) (arg1 + 0x38));
        M2C_FIELD(arg0, s32 *, 0x240) = (s32) M2C_FIELD(arg1, s32 *, 0x60);
    } else {
        M2C_FIELD(arg0, f32 *, 0x238) = (f32) lbl_805DDFF8;
        M2C_FIELD(arg0, f32 *, 0x238) = (f32) lbl_805DDFF8;
        M2C_FIELD(arg0, f32 *, 0x234) = (f32) lbl_805DDFF8;
        M2C_FIELD(arg0, s32 *, 0x240) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x244) = 0;
    M2C_FIELD(arg0, s32 *, 0x248) = 0x14;
    return arg0;
}

}
