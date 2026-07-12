#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0);
void create__16TObjDFBeamCursorFPvPv(void *, void *);

void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0) {
    create__16TObjDFBeamCursorFPvPv(arg0, (void *)((char *)arg0 + 952));
    M2C_FIELD(arg0, u32 *, 0x398) = 75;
}

}
