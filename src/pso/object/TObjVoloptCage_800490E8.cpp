#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800490E8 { char pad[0xC]; };
struct VObj_800490E8 : Base_800490E8 {
    virtual void m0(int);
};

extern "C" {

void destroy__14TObjVoloptCageFv(void);

extern struct VObj_800490E8 *lbl_805D4D20;

void destroy__14TObjVoloptCageFv(void) {
    if (lbl_805D4D20 != NULL) {
        lbl_805D4D20->m0(1);
    }
    lbl_805D4D20 = NULL;
}

}
