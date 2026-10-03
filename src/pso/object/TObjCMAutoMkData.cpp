#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__16TObjCMAutoMkDataFPv(void *arg0);
void render__16TObjCMAutoMkDataFv(void *arg0);
void *TObjCMAutoMkData__ct(void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK draw_creation_ruler_lines(f32);

void render__16TObjCMAutoMkDataFv(void *arg0) {
    draw_creation_ruler_lines(M2C_FIELD(arg0, f32 *, 0x38));
}

void *create__16TObjCMAutoMkDataFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = TObjCMAutoMkData__ct(o, arg0);
    }
    return o;
}

}
