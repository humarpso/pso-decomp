#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *copy_full__16TPlyGuildCardTagFPvPv(void *arg0, void *arg1);
void copy__16TPlyGuildCardTagFPvPv(void *);

void *copy_full__16TPlyGuildCardTagFPvPv(void *arg0, void *arg1) {
    copy__16TPlyGuildCardTagFPvPv(arg0);
    ((void (*)(void *, void *))copy__16TPlyGuildCardTagFPvPv)((void *)((char *)arg0 + 36), (void *)((char *)arg1 + 36));
    return arg0;
}

}
