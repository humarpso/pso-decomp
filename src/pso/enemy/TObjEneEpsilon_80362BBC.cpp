#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneEpsilon__ct(void *arg0);
void TObjEneDD__sub_800BA2AC(void *);
void init_object__9TObjEneDDFPv(void *);

extern M2C_UNK lbl_804F253C[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D4468;

void *TObjEneEpsilon__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F253C;
    __construct_array((void *)((char *)arg0 + 960), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4468;
    TObjEneDD__sub_800BA2AC(arg0);
    return arg0;
}

}
