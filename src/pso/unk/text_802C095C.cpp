#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_lobby_pigeon(void *arg0);
void *construct_lobby_pigeon(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create_lobby_pigeon(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = construct_lobby_pigeon(o, tl_05, arg0);
    }
    return o;
}

}
