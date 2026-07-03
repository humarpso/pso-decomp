#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TKeyBoardControl__ct(void *, void *, int, int, int, void *);
extern void *lbl_805D53A0;

void *fn_8034CCC4(void *arg0) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        TKeyBoardControl__ct(o, arg0, 198, 5, 4, lbl_805D53A0);
    }
    return o;
}

}
