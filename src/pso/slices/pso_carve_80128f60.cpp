#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8012A884(void *);
extern M2C_UNK lbl_804A403C[];
void TObjPlayer__sub_8001BF10(void *);
void fn_8001BED8(void *, int);
void fn_8012106C(void *, int);
extern M2C_UNK fn_80128AE4[];
extern M2C_UNK fn_80128A74[];
extern M2C_UNK fn_80128C38[];
extern const f32 lbl_805DADF8;
void fn_8001BF40(void *);
struct VOff_80128F60_arg0 { char pad_0[0x1FC]; char f_1FC[1]; };

void *fn_80128F60(void *arg0) {
    struct VOff_80128F60_arg0 *self = (struct VOff_80128F60_arg0 *)arg0;
    fn_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A403C;
    TObjPlayer__sub_8001BF10(self->f_1FC);
    fn_8001BED8((void *)((char *)arg0 + 376), 32);
    fn_8012106C(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = fn_80128AE4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = fn_80128A74;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = fn_80128C38;
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DADF8;
    fn_8001BF40(self->f_1FC);
    return arg0;
}

}
