#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *setup_action__10TObjPlayerFPv(void *arg0);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A4748[];
extern M2C_UNK create_gun_shot[];
extern M2C_UNK TObjPlayer__sub_80109440[];

void *setup_action__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4748;
    set_status_flags__10TObjPlayerFPvUi(arg0, 547);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create_gun_shot;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = TObjPlayer__sub_80109440;
    return arg0;
}

}
