#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create_remote_player_object(void *arg0);
M2C_UNK TItem__sub_80101CF0();
void *__ct__10TObjPlayerFPvPvPv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *create_remote_player_object(void *arg0) {
    void *o;

    TItem__sub_80101CF0();
    o = __nw__7TObjectFUl(0xDB8);
    if (o != NULL) {
        o = __ct__10TObjPlayerFPvPvPv(o, tl_03, arg0);
    }
    return o;
}

}
