#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012C868(void *arg0);
void TObjPlayer__sub_8001BED8(void *, int);
void TObjPlayer__sub_8001BF10(void *);
void TObjPlayer__sub_8001BF40(void *);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);

extern M2C_UNK lbl_804A535C[];
extern M2C_UNK TObjPlayer__sub_8012C3F4[];
extern M2C_UNK TObjPlayer__sub_8012C384[];
extern M2C_UNK create_shot_effect__10TObjPlayerFiiif[];
extern const f32 lbl_805DAEF0;
struct VOff_8012C868_arg0_8012c868 { char pad_0[0x1F8]; char f_1F8[1]; };

void *TObjPlayer__sub_8012C868(void *arg0) {
    struct VOff_8012C868_arg0_8012c868 *self = (struct VOff_8012C868_arg0_8012c868 *)arg0;
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A535C;
    TObjPlayer__sub_8001BF10(self->f_1F8);
    TObjPlayer__sub_8001BED8((void *)((char *)arg0 + 376), 32);
    TObjPlayer__sub_8012106C(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = TObjPlayer__sub_8012C3F4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = TObjPlayer__sub_8012C384;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create_shot_effect__10TObjPlayerFiiif;
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DAEF0;
    TObjPlayer__sub_8001BF40(self->f_1F8);
    return arg0;
}

}
