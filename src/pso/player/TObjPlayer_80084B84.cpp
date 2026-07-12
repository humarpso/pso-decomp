#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_hit_effect__10TObjPlayerFPv(void *arg0);
void *TEffHit__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void create_hit_effect__10TObjPlayerFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x74);
    if (o != NULL) {
        TEffHit__ct(o, arg0);
    }
}

}
