#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 rand__11TOBoss4RockFv(void);
extern s32 lbl_805D26A0;
extern const f32 lbl_805D8200;
extern const f32 lbl_805D821C;
extern const f32 lbl_805D8220;
void TObjBoss1Rock__ct(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3);
}

extern "C" {

void *TObjBoss1Rock__sub_8002E174(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_80482078[];

void *TObjBoss1Rock__sub_8002E174(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482078;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void TObjBoss1Rock__ct(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D26A0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (lbl_805D821C * (lbl_805D8220 * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (lbl_805D821C * (lbl_805D8220 * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D8200;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805D8200;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805D8200;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805D8200;
    if (arg3 == 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = 2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
}

}
