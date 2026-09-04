#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_8004E3F4(void* p);
void *create__11TObjDFDemo0FPv(void *arg0);
void *TObjDFDemo0__ct(void *, void *);
int TObjPlayer__sub_8004E068(void*);
int TObjPlayer__sub_8004E2C8(void*);
void *__nw__7TObjectFUl(int);

void *create__11TObjDFDemo0FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TObjDFDemo0__ct(o, arg0);
    }
    return o;
}

void TObjPlayer__sub_8004E3F4(void* p) { TObjPlayer__sub_8004E2C8(p); TObjPlayer__sub_8004E068(p); }

}
