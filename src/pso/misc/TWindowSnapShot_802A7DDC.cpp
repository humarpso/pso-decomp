#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A7DDC { char pad[0x3C]; };
struct VObj_802A7DDC : Base_802A7DDC {
    virtual void m0(int);
};

extern "C" {

void TWindowSnapShot__sub_802A7DDC(void);
M2C_UNK TWindowSnapShot__sub_802A5F60(void *);

extern void *lbl_805D6690;

void TWindowSnapShot__sub_802A7DDC(void) {
    struct VObj_802A7DDC *o;
    TWindowSnapShot__sub_802A5F60(lbl_805D6690);
    o = (struct VObj_802A7DDC *)lbl_805D6690;
    if (o != NULL) {
        o->m0(1);
    }
    lbl_805D6690 = NULL;
}

}
