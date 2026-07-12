#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TCheckMemoryCard__ct(void *, void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

void * create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x250);
    if (o != NULL) {
        o = TCheckMemoryCard__ct(o, arg0, arg1, arg2, 0);
    }
    return o;
}

}
