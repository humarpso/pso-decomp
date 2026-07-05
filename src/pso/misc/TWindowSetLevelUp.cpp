#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__17TWindowSetLevelUpFv(void *arg0, void *arg1, void *arg2, void *arg3);
void TObjPlayer__sub_801BF72C(void *);
void __ct__7TObjectFP7TObject(void *);
void fn_8026DDE0(void *, void *);

extern M2C_UNK __vt__17TWindowSetLevelUp[];
extern void *lbl_805D39C8;
struct VOff_8026DD70_arg0 { char pad_0[0x24]; char f_24[1]; };

void *__ct__17TWindowSetLevelUpFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_8026DD70_arg0 *self = (struct VOff_8026DD70_arg0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSetLevelUp;
    TObjPlayer__sub_801BF72C(self->f_24);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D39C8;
    fn_8026DDE0(self->f_24, arg2);
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg3;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
