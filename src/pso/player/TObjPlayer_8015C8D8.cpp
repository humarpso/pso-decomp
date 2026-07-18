#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_container_object__10TObjPlayerFPvs(void *arg0, s16 arg1);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void TOAirconCave01__sub_80156DF0(void *, int);

extern M2C_UNK lbl_804B6C24[];

void *destroy_container_object__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B6C24;
        TOAirconCave01__sub_80156DF0((s8 *)arg0 + 0x340, -1);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
