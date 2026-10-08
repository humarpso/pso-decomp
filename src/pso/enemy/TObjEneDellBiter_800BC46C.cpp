#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void init_collision_body_parts(void *, void *, void *);
void construct_collider_proxy__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804928CC[];

void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    construct_collider_proxy__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804928CC;
    init_collision_body_parts(arg0, arg3, arg4);
    M2C_FIELD(arg0, void **, 0xAC) = arg2;
    return arg0;
}

}
