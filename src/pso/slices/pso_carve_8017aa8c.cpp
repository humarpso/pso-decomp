#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TOTrapAncient02R__ct(void *, void *, void *);
extern void *tl_05;

void *TOTrapAncient02R__sub_8017AA8C(void *arg0) {
    void *o = __nw__7TObjectFUl(0x36C);
    if (o != NULL) {
        o = TOTrapAncient02R__ct(o, tl_05, arg0);
    }
    return o;
}

}
