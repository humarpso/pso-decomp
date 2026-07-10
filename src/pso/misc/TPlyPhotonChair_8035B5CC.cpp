#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__15TPlyPhotonChairFPv(void *arg0);
void fn_8035B610(void *);
void fn_8035B630(void *);

extern M2C_UNK lbl_804A7478[];

void *init__15TPlyPhotonChairFPv(void *arg0) {
    fn_8035B630(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x4) = lbl_804A7478;
    fn_8035B610(arg0);
    return arg0;
}

}
