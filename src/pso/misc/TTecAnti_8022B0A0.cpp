#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__8TTecAntiFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TTecAnti__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__8TTecAntiFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecAnti__ct(o, arg0, arg1, arg2, arg3);
    }
}

}
