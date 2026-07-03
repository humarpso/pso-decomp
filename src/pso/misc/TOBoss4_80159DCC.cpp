#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOBoss4__ct(void *arg0);
void fn_801A2640(void *, void *);

extern void *tl_05;
extern const f32 lbl_805DB310;
extern M2C_UNK __vt__7TOBoss4[];
extern const f32 lbl_805DB31C;
extern void *lbl_805D2EB0;

void *TOBoss4__ct(void *arg0) {
    fn_801A2640(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TOBoss4;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2EB0;
    M2C_FIELD(arg0, f32 *, 0x90) = lbl_805DB310;
    M2C_FIELD(arg0, f32 *, 0x94) = lbl_805DB31C;
    return arg0;
}

}
