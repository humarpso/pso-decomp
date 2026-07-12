#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void spawn_cleanup_helper__10TObjPlayerFPv(void *arg0);
void *init_vtable_804F2A10__10TObjPlayerFPv(void *, void *);
void *__nw__7TObjectFUl(int);

void spawn_cleanup_helper__10TObjPlayerFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        init_vtable_804F2A10__10TObjPlayerFPv(o, arg0);
    }
}

}
