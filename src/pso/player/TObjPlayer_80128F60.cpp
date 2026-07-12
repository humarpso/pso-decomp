#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_80128F60(void *arg0);
void TObjPlayer__sub_8001BED8(void *, int);
void TObjPlayer__sub_8001BF10(void *);
void TObjPlayer__sub_8001BF40(void *);
void TObjPlayer__sub_8012106C(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A403C[];
extern M2C_UNK TObjPlayer__sub_80128AE4[];
extern M2C_UNK TObjPlayer__sub_80128A74[];
extern M2C_UNK TObjPlayer__sub_80128C38[];
extern const f32 lbl_805DADF8;
struct VOff_80128F60_arg0_80128f60 { char pad_0[0x1FC]; char f_1FC[1]; };

void *TObjPlayer__sub_80128F60(void *arg0) {
    struct VOff_80128F60_arg0_80128f60 *self = (struct VOff_80128F60_arg0_80128f60 *)arg0;
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A403C;
    TObjPlayer__sub_8001BF10(self->f_1FC);
    TObjPlayer__sub_8001BED8((void *)((char *)arg0 + 376), 32);
    TObjPlayer__sub_8012106C(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = TObjPlayer__sub_80128AE4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = TObjPlayer__sub_80128A74;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = TObjPlayer__sub_80128C38;
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DADF8;
    TObjPlayer__sub_8001BF40(self->f_1FC);
    return arg0;
}

}
