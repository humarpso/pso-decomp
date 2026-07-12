#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TObjTagChallenge__ct(void *, void *);

void *create_obj_tag_challenge(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = TObjTagChallenge__ct(o, arg0);
    }
    return o;
}

}
