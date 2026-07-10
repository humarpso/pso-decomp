#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void update_parts2__15TPlyPhotonChairFPv(void *);
void TPlyPhotonChair__sub_80142568(void *);
void fn_8013E2DC(void);
void fn_803E46BC(void);
void update_parts__15TPlyPhotonChairFPv(void *);
struct VOff_8013B524_arg0 { char pad_0[0x4C]; char f_4C[1]; };

void fn_8013B524(void *arg0) {
    struct VOff_8013B524_arg0 *self = (struct VOff_8013B524_arg0 *)arg0;
    update_parts2__15TPlyPhotonChairFPv(self->f_4C);
    TPlyPhotonChair__sub_80142568(self->f_4C);
    fn_8013E2DC();
    fn_803E46BC();
    update_parts__15TPlyPhotonChairFPv(self->f_4C);
}

}
