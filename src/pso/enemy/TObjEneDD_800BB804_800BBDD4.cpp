#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_800BBDD4 { char pad[0x18]; };
struct VObj_800BBDD4 : Base_800BBDD4 {
    virtual void m0(int);
};

void release_resource__9TObjEneDDFv(void);

extern struct VObj_800BBDD4 *obj_ene_dd_instance;

void release_resource__9TObjEneDDFv(void) {
    if (obj_ene_dd_instance != NULL) {
        if (obj_ene_dd_instance != NULL) {
            obj_ene_dd_instance->m0(1);
        }
        obj_ene_dd_instance = NULL;
    }
}

}
