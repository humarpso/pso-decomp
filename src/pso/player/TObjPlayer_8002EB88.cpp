#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8002EB88(void);

struct VObj8002EB88_8002eb88 {
    char pad[0xC];
    virtual void m0(int);
};
extern struct VObj8002EB88_8002eb88 *lbl_805D4B88;

void TObjPlayer__sub_8002EB88(void) {
    if (lbl_805D4B88 != NULL) {
        lbl_805D4B88->m0(1);
    }
    lbl_805D4B88 = NULL;
}

}
