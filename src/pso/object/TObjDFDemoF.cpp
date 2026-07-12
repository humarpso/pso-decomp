#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjDFDemoF__sub_800502B4(void *arg0);
void *TObjDFDemoF__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *TObjDFDemoF__sub_800502B4(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjDFDemoF__ct(o, arg0);
    }
    return o;
}

}
