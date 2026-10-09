#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * get_bml_motion(void *, int);
extern u8 *green_door_bml_resource;
u8 *fn_8028A714(s32 arg0);
u8 * TObjFish__sub_8001EDB0(void *, int);
extern u8 *green_door_bml_resource;
u8 *fn_8028A750(s32 arg0);
u8 * get_bml_model(void *, int);
extern u8 *green_door_bml_resource;
u8 *fn_8028A78C(s32 arg0);
}

extern "C" {

u8 *fn_8028A714(s32 arg0) {
    if ((void *) green_door_bml_resource != NULL) {
        return get_bml_motion(green_door_bml_resource, arg0);
    }
    return NULL;
}
u8 *fn_8028A750(s32 arg0) {
    if ((void *) green_door_bml_resource != NULL) {
        return TObjFish__sub_8001EDB0(green_door_bml_resource, arg0);
    }
    return NULL;
}
u8 *fn_8028A78C(s32 arg0) {
    if ((void *) green_door_bml_resource != NULL) {
        return get_bml_model(green_door_bml_resource, arg0);
    }
    return NULL;
}

}
