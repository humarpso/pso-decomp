#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_offsets_object__10TObjPlayerFPv(void *arg0);
void *TObjPlayer__sub_8032DE70(void *arg0);
void init_offset_vectors__10TObjPlayerFPv(void *);
void fn_8032E34C(void *);
void fn_8032E400(void *);

extern M2C_UNK lbl_804EDD20[];

void *init_offsets_object__10TObjPlayerFPv(void *arg0) {
    fn_8032E34C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDD20;
    init_offset_vectors__10TObjPlayerFPv(arg0);
    return arg0;
}

extern M2C_UNK lbl_804EDD20[];

void *TObjPlayer__sub_8032DE70(void *arg0) {
    fn_8032E400(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDD20;
    init_offset_vectors__10TObjPlayerFPv(arg0);
    return arg0;
}

}
