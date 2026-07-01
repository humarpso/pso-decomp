#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TContainerAncient01R__create(void *arg0);
void TContainerAncient01R__sub_8018AF74(void);
void *TContainerAncient01R__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TContainerAncient01R__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x374);
    if (o != NULL) {
        o = TContainerAncient01R__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int lbl_805D5B94;
void TContainerAncient01R__sub_8018AF74(void) { lbl_805D5B94 = 0; }

}
