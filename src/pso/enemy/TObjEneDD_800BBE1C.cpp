#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_instance__9TObjEneDDFv(void);
int TObjEneDD__sub_800BBE5C(void);
void *__nw__7TObjectFUl(int);
void *fn_800BC4C8(void *, int, int);

extern void *lbl_805D5138;

void create_instance__9TObjEneDDFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = fn_800BC4C8(o, 0, 0);
    }
    lbl_805D5138 = o;
}

    extern int lbl_805D5870;
int TObjEneDD__sub_800BBE5C(void) {  return lbl_805D5870; }

}
