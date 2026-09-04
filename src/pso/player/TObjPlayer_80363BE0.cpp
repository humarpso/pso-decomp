#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_cleanup_helper__10TObjPlayerFPv(void *arg0);
void warn_if_gauge_low__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_803640C8();
M2C_UNK TObjPlayer__sub_803E38FC(M2C_UNK);
void *__nw__7TObjectFUl(int);
void *init_vtable_804F2A10__10TObjPlayerFPv(void *, void *);

void spawn_cleanup_helper__10TObjPlayerFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        init_vtable_804F2A10__10TObjPlayerFPv(o, arg0);
    }
}

extern void *lbl_805D6FB8;
extern const f32 lbl_805E0288;

void warn_if_gauge_low__10TObjPlayerFv(void) {
    if (M2C_FIELD(lbl_805D6FB8, f32 *, 0x2C) < lbl_805E0288) {
        TObjPlayer__sub_803E38FC(0x2500);
        TObjPlayer__sub_803640C8();
    }
}

}
