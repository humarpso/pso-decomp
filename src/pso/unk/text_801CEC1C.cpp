#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 obj_testFlags30(void *, int);
s32 check_flag__10TObjPlayerFPvi(void *, int);
s32 test_action_mask__10TObjPlayerFPvi(void *, int);
s32 reset_volopt_state__10TObjPlayerFv(void *);
s32 check_flag_100__10TObjPlayerFPv(void *);
s32 get_camera_field__10TObjPlayerFPv(void *);
s32 can_perform_physical_action__10TObjPlayerFi(s32 arg0);
}

extern "C" {

s32 can_perform_physical_action__10TObjPlayerFi(s32 arg0) {
    if ((obj_testFlags30((void *) (arg0), (int) (0x20006)) != 0) || (obj_testFlags30((void *) (arg0), (int) (0x02000000)) != 0) || (check_flag__10TObjPlayerFPvi((void *) (arg0), (int) (2)) != 0) || (test_action_mask__10TObjPlayerFPvi((void *) (arg0), (int) (0x548000)) != 0) || ((is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) && ((check_flag_100__10TObjPlayerFPv((void *) (arg0)) != 0) || (get_camera_field__10TObjPlayerFPv((void *) (arg0)) == 0))) || (reset_volopt_state__10TObjPlayerFv((void *) (arg0)) == 0)) {
        return 0;
    }
    return 1;
}

}
