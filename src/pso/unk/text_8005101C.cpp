#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8005101C___vt__11TObjDFJisin {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern RecoveredGlobal_8005101C___vt__11TObjDFJisin __vt__11TObjDFJisin;
extern s32 lbl_805D27C4;
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8AA0;
extern const f32 lbl_805D8AA4;
extern const f32 lbl_805D8AA8;
u8 *TObjDFJisin__ct(u8 *arg0, u8 *arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_8005101C___vt__11TObjDFJisin_size[sizeof(RecoveredGlobal_8005101C___vt__11TObjDFJisin) == 0x18 ? 1 : -1];
u8 *TObjDFJisin__ct(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__11TObjDFJisin.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D27C4;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (lbl_805D8AA0 * TBoss8Dragon__sub_803D64C0(arg2));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805D8A30;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (lbl_805D8AA8 * TBoss8Dragon__sub_803D64DC(arg2));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D8AA4;
    return arg0;
}

}
