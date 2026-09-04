#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_type_447__10TObjPlayerFPv(void *arg0);
void *init_vtable_and_handlers_341__10TObjPlayerFPv(void *arg0);
void init_state_445__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804E22F4[];
extern M2C_UNK alloc_and_init__10TObjPlayerFiii[];
extern M2C_UNK create_and_init_effect__10TObjPlayerFiPvi[];

void *init_type_447__10TObjPlayerFPv(void *arg0) {
    init_state_445__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E22F4;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 447;
    M2C_FIELD(arg0, M2C_UNK **, 0x204) = alloc_and_init__10TObjPlayerFiii;
    M2C_FIELD(arg0, M2C_UNK **, 0x208) = create_and_init_effect__10TObjPlayerFiPvi;
    return arg0;
}

extern M2C_UNK lbl_804E1F04[];
extern M2C_UNK TItemWpnCardEffect__sub_8032E588[];
extern M2C_UNK create_aux_object__10TObjPlayerFiPvi[];

void *init_vtable_and_handlers_341__10TObjPlayerFPv(void *arg0) {
    init_state_445__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1F04;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 341;
    M2C_FIELD(arg0, M2C_UNK **, 0x204) = TItemWpnCardEffect__sub_8032E588;
    M2C_FIELD(arg0, M2C_UNK **, 0x208) = create_aux_object__10TObjPlayerFiPvi;
    return arg0;
}

}
