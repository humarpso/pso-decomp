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

extern struct VObj_800BBDD4 *lbl_805D5138;

void release_resource__9TObjEneDDFv(void) {
    if (lbl_805D5138 != NULL) {
        if (lbl_805D5138 != NULL) {
            lbl_805D5138->m0(1);
        }
        lbl_805D5138 = NULL;
    }
}

}
