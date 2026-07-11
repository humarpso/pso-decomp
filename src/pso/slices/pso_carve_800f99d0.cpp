#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern M2C_UNK lbl_8050113C[];
void *__nw__7TObjectFUl(int);
void *fn_800F9C68(void *, void *);
void memset(void *, int, int);
void strncpy(void *, void *, int);
void fn_800F9BAC(void *, void *);
struct VOff_800F99D0_o { char pad_0[0x28]; char f_28[1]; };

void alloc_named_object(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_800F99D0_o *o;
    o = (struct VOff_800F99D0_o *)__nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = (struct VOff_800F99D0_o *)fn_800F9C68(o, lbl_8050113C);
    }
    memset(o->f_28, 0, 17);
    strncpy(o->f_28, arg0, 16);
    M2C_FIELD(o, void **, 0x0) = o->f_28;
    M2C_FIELD(o, void **, 0x1C) = arg1;
    M2C_FIELD(o, void **, 0x20) = arg2;
    fn_800F9BAC(o, arg3);
}

}
