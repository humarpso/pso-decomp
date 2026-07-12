#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_collision__18TObjBoss7TunnelColFPv(void *arg0);
s32 is_in_camera_range__18TObjBoss7TunnelColFPv(void *arg0);
s32 TCameraCtrl__sub_8006B360(M2C_UNK *);
void TObjChip__sub_803D8AE4(void *, void *, void *, void *);
void TObjPlayer__sub_803D8C7C(void *, void *);
void TObjPlayer__sub_803D8CD4(void *);

struct VOff_802F1C68_arg0_802f1c68 { char pad_0[0x48]; char f_48[1]; };

void update_collision__18TObjBoss7TunnelColFPv(void *arg0) {
    struct VOff_802F1C68_arg0_802f1c68 *self = (struct VOff_802F1C68_arg0_802f1c68 *)arg0;
    TObjPlayer__sub_803D8CD4(self->f_48);
    TObjPlayer__sub_803D8C7C(self->f_48, (void *)((char *)arg0 + 28));
    TObjChip__sub_803D8AE4(self->f_48, M2C_FIELD(arg0, void **, 0x28), M2C_FIELD(arg0, void **, 0x2C), M2C_FIELD(arg0, void **, 0x30));
}

extern M2C_UNK main_task[];
extern f32 lbl_805DECA4;
extern f32 lbl_805DECA8;

s32 is_in_camera_range__18TObjBoss7TunnelColFPv(void *arg0) {
    f32 temp_f1;

    if (TCameraCtrl__sub_8006B360(main_task) & 0x20) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
        if ((temp_f1 < lbl_805DECA4) && (lbl_805DECA8 < temp_f1)) {
            return 0;
        }
    }
    return 1;
}

}
